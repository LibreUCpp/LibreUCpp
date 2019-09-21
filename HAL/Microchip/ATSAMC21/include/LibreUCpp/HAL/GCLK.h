#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/GCLK.h>
#include <LibreUCpp/HAL/DPLL.h>
#include <LibreUCpp/HAL/OSC48M.h>

namespace LibreUCpp {
namespace HAL {

class GCLK
{
    public:
        enum class GENERATOR : unsigned char
        {
            Generator_0 = 0,
            Generator_1 = 1,
            Generator_2 = 2,
            Generator_3 = 3,
            Generator_4 = 4,
            Generator_5 = 5,
            Generator_6 = 6,
            Generator_7 = 7,
            Generator_8 = 8
        };

        enum class CLOCK_SOURCE : unsigned char
        {
            XOSC = 0,
            GCLK_IN = 1,
            GCLK_GEN1 = 2,
            OSCUPL32K = 3,
            OSC32K = 4,
            XOSC32K = 5,
            OSC48M = 6,
            DPLL96M = 7
        };

        enum class PERIPHERAL_CHANNEL : unsigned char
        {
            DPLL = 0, // FDPLL96M input clock source for reference
            DPLL_32K = 1, // FDPLL96M 32kHz clock for FDPLL96M internal clock
            EIC = 2, // EIC
            FREQM_MSR = 3, // FREQM Measure
            FREQM_REF = 4, // FREQM Reference
            TSENS = 5, // TSENS
            EVSYS_CHANNEL_0 = 6, // EVSYS_CHANNEL_0
            EVSYS_CHANNEL_1 = 7, // EVSYS_CHANNEL_1
            EVSYS_CHANNEL_2 = 8, // EVSYS_CHANNEL_2
            EVSYS_CHANNEL_3 = 9, // EVSYS_CHANNEL_3
            EVSYS_CHANNEL_4 = 10, // EVSYS_CHANNEL_4
            EVSYS_CHANNEL_5 = 11, // EVSYS_CHANNEL_5
            EVSYS_CHANNEL_6 = 12, // EVSYS_CHANNEL_6
            EVSYS_CHANNEL_7 = 13, // EVSYS_CHANNEL_7
            EVSYS_CHANNEL_8 = 14, // EVSYS_CHANNEL_8
            EVSYS_CHANNEL_9 = 15, // EVSYS_CHANNEL_9
            EVSYS_CHANNEL_10 = 16, // EVSYS_CHANNEL_10
            EVSYS_CHANNEL_11 = 17, // EVSYS_CHANNEL_11
            SERCOM0123_SLOW = 18, // SERCOM[0,1,2,3]_SLOW
            SERCOM0_CORE = 19, // SERCOM0_CORE
            SERCOM1_CORE = 20, // SERCOM1_CORE
            SERCOM2_CORE = 21, // SERCOM2_CORE
            SERCOM3_CORE = 22, // SERCOM3_CORE
            SERCOM5_SLOW = 24, // 25 GCLK_SERCOM5_CORE SERCOM5_CORE
            CAN0 = 26, // CAN0
            CAN1 = 27, // CAN1
            TCC0 = 28, // GCLK_TCC1 TCC0,TCC1
            TCC2 = 29, // TCC2
            TC0 = 30, // GCLK_TC1 TC0,TC1
            TC2 = 31, // GCLK_TC3 TC2,TC3
            TC4 = 32, // TC4
            ADC0 = 33, // ADC0
            ADC1 = 34, // ADC1
            SDADC = 35, // SDADC
            DAC = 36, // DAC
            PTC = 37, // PTC
            CCL = 38, // CCL
            AC = 40, // AC
            SERCOM6_CORE = 41, // SERCOM6_CORE
            SERCOM7_CORE = 42, // SERCOM7_CORE
            TC5 = 43, // TC5
            TC6 = 44, // TC6
            TC7 = 45, // TC7
        };

        enum class DIV_MODE : unsigned char
        {
            DIV_BY_FACTOR = 0,
            DIV_BY_2_POW_FACTOR_PLUS_1 = 1
        };

        enum class IMPROVE_DUTY_CYCLE : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1
        };

        enum class RUN_IN_STANDBY : unsigned char
        {
            NO = 0,
            YES = 1
        };

        enum class ENABLE_OUTPUT : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1
        };

        enum class OUTPUT_OFF_VALUE : unsigned char
        {
            LOW = 0,
            HIGH = 1
        };

    public:
        static unsigned CalcFrequency(GENERATOR generator, unsigned xosc32kFrequency, unsigned xoscFrequency)
        {
            unsigned gclk_source_freq = CalcSourceFrequency(generator, xosc32kFrequency, xoscFrequency);
            unsigned DIV = GENCTRL(generator).bit.DIV;
            if (static_cast<DIV_MODE>(GENCTRL(generator).bit.DIVSEL) == DIV_MODE::DIV_BY_FACTOR)
            {
                if (DIV < 2) 
                {
                    return gclk_source_freq;
                }
                else
                {
                    return gclk_source_freq / DIV;
                }
            }
            else
            {   
                return gclk_source_freq >> (DIV + 1);
            }
        }

        static unsigned CalcSourceFrequency(GENERATOR generator, unsigned xosc32kFrequency, unsigned xoscFrequency)
        {
            switch (static_cast<CLOCK_SOURCE>(GCLK::GENCTRL(generator).bit.SRC))
            {
                case CLOCK_SOURCE::XOSC: 
                    return xoscFrequency; 
                case CLOCK_SOURCE::GCLK_IN:
                    return 0; // unknown frequency at GCLK_IO // FIXME abort() instead?
                case CLOCK_SOURCE::GCLK_GEN1:                    
                    return (generator==GENERATOR::Generator_1) ? 0 : CalcFrequency(GENERATOR::Generator_1, xosc32kFrequency, xoscFrequency); // FIXME abort() on recursion instead?
                case CLOCK_SOURCE::OSCUPL32K:
                case CLOCK_SOURCE::OSC32K:
                    return 32768u;
                case CLOCK_SOURCE::XOSC32K:
                    return xosc32kFrequency;
                case CLOCK_SOURCE::OSC48M:
                    return OSC48M::GetOutputFrequency();
                case CLOCK_SOURCE::DPLL96M:
                    return DPLL::CalcOutputFrequency(xosc32kFrequency, xoscFrequency);
                default:
                    return 0; // FIXME abort()
            }
        }

        static void ConfigureGenerator(
            GENERATOR generator, 
            CLOCK_SOURCE clockSource,
            DIV_MODE divsel, 
            unsigned div, 
            IMPROVE_DUTY_CYCLE improveDutyCycle, 
            RUN_IN_STANDBY runInStandby, 
            ENABLE_OUTPUT enableOutput, 
            OUTPUT_OFF_VALUE outputOffValue
        )
        {
            GENCTRL(generator).reg 
                = GENCTRL_T::DIV(div)
                | GENCTRL_T::DIVSEL(static_cast<unsigned>(divsel))
                | GENCTRL_T::IDC(static_cast<unsigned>(improveDutyCycle))
                | GENCTRL_T::RUNSTDBY(static_cast<unsigned>(runInStandby))
                | GENCTRL_T::OE(static_cast<unsigned>(enableOutput))
                | GENCTRL_T::OOV(static_cast<unsigned>(outputOffValue))
                | GENCTRL_T::SRC(static_cast<unsigned>(clockSource))
                | GENCTRL_T::GENEN_MASK;
            WaitSync();
        }

        static ALWAYS_INLINE void ConfigureGeneratorSimple(GENERATOR generator, CLOCK_SOURCE clockSource, unsigned div)
        {
            GENCTRL(generator).reg 
                = GENCTRL_T::DIV(div)
                | GENCTRL_T::DIVSEL(static_cast<unsigned>(DIV_MODE::DIV_BY_FACTOR))
                | GENCTRL_T::IDC(static_cast<unsigned>(IMPROVE_DUTY_CYCLE::DISABLE))
                | GENCTRL_T::RUNSTDBY(static_cast<unsigned>(RUN_IN_STANDBY::NO))
                | GENCTRL_T::OE(static_cast<unsigned>(ENABLE_OUTPUT::DISABLE))
                | GENCTRL_T::OOV(static_cast<unsigned>(OUTPUT_OFF_VALUE::LOW))
                | GENCTRL_T::SRC(static_cast<unsigned>(clockSource))
                | GENCTRL_T::GENEN_MASK;
            WaitSync();
        }

        static ALWAYS_INLINE void EnableGenerator(GENERATOR generator)
        {
            GENCTRL(generator).bit.GENEN = 1;
            WaitSync();
        }

        static ALWAYS_INLINE void DisableGenerator(GENERATOR generator)
        {
            GENCTRL(generator).bit.GENEN = 0;
            WaitSync();
        }

        static ALWAYS_INLINE void EnablePeripheral(PERIPHERAL_CHANNEL ch, GENERATOR clockSource)
        {
            auto& pch = PCHCTRL(ch);
            pch.reg = PCHCTRL_T::GEN(static_cast<unsigned>(clockSource)) | PCHCTRL_T::CHEN_MASK;
            while (!pch.bit.CHEN); // Datasheet says we must read back the CHEN bit to verify sync is complete
        }

        static ALWAYS_INLINE void DisablePeripheral(PERIPHERAL_CHANNEL ch)
        {
            auto& pch = PCHCTRL(ch);
            pch.bit.CHEN = 0;
            while (!pch.bit.CHEN); // Datasheet says we must read back the CHEN bit to verify sync is complete
        }

        static ALWAYS_INLINE void WaitSync()
        {
            while (Periph().SYNCBUSY.reg);
        }

    private:
        using GENCTRL_T = Peripherals::GCLK_T::GENCTRL_T;
        using PCHCTRL_T = Peripherals::GCLK_T::PCHCTRL_T;

        static ALWAYS_INLINE Peripherals::GCLK_T& Periph()
        { 
            return *reinterpret_cast<Peripherals::GCLK_T*>(Peripherals::GCLK_T::BASE_ADDRESS);
        }

        static ALWAYS_INLINE volatile Peripherals::GCLK_T::PCHCTRL_T& PCHCTRL(PERIPHERAL_CHANNEL ch)
        {
            return Periph().PCHCTRL[static_cast<unsigned>(ch)];
        }

        static ALWAYS_INLINE volatile Peripherals::GCLK_T::GENCTRL_T& GENCTRL(GENERATOR generator)
        {
            return Periph().GENCTRL[static_cast<unsigned>(generator)];
        }

};

} // namespace HAL
} // namespace LibreUCpp
