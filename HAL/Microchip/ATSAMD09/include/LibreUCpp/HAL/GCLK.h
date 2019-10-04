#pragma once

#include <stdlib.h>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/GCLK.h>
#include <LibreUCpp/HAL/SYSCTRL.h>

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
        };

        enum class PERIPHERAL_CHANNEL : unsigned char
        {
            GCLK_DFLL48M_REF = 0x0, // DFLL48MReference
            GCLK_DPLL = 0x1, // FDPLL96M input clock source for reference
            GCLK_DPLL_32K = 0x2, // FDPLL96M 32kHz clock for FDPLL96M internal lock timer
            GCLK_WDT = 0x3, // WDT
            GCLK_RTC = 0x4, // RTC
            GCLK_EIC = 0x5, // EIC
            GCLK_EVSYS_CHANNEL_0 = 0x07, // EVSYS_CHANNEL_0
            GCLK_EVSYS_CHANNEL_1 = 0x08, // EVSYS_CHANNEL_1
            GCLK_EVSYS_CHANNEL_2 = 0x09, // EVSYS_CHANNEL_2
            GCLK_EVSYS_CHANNEL_3 = 0x0A, // EVSYS_CHANNEL_3
            GCLK_EVSYS_CHANNEL_4 = 0x0B, // EVSYS_CHANNEL_4
            GCLK_EVSYS_CHANNEL_5 = 0x0C, // EVSYS_CHANNEL_5
            GCLK_SERCOMx_SLOW = 0x0D, // SERCOMx_SLOW
            GCLK_SERCOM0_CORE = 0x0E, // SERCOM0_CORE
            GCLK_SERCOM1_CORE = 0X0F, // SERCOM1_CORE
            GCLK_TC2 = 0x12, // TC2
            GCLK_ADC = 0x13, // ADC
        };

        enum class CLOCK_SOURCE : unsigned char
        {
            XOSC = 0,
            GCLK_IN = 1,
            GCLK_GEN1 = 2,
            OSCUPL32K = 3,
            OSC32K = 4,
            XOSC32K = 5,
            OSC8M = 6,
            DFLL48M = 7,
            FDPLL96M = 8,            
        };

        enum class IMPROVE_DUTY_CYCLE : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1
        };

        enum class OUTPUT_OFF_VALUE : unsigned char
        {
            LOW = 0,
            HIGH = 1
        };

        enum class ENABLE_OUTPUT : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1
        };

        enum class DIV_MODE : unsigned char
        {
            DIV_BY_FACTOR = 0,
            DIV_BY_2_POW_FACTOR_PLUS_1 = 1
        };

        enum class RUN_IN_STANDBY : unsigned char
        {
            NO = 0,
            YES = 1
        };

    public:

        static unsigned CalcFrequency(GENERATOR generator, unsigned xosc32kFrequency, unsigned xoscFrequency)
        {
            auto const genctrl = ReadGenCtrl(generator);
            auto const gendiv = ReadGenDiv(generator);
            unsigned const DIV = gendiv.bit.DIV;
            unsigned const gclk_source_freq = CalcSourceFrequency(generator, xosc32kFrequency, xoscFrequency, genctrl);
            if (static_cast<DIV_MODE>(genctrl.bit.DIVSEL) == DIV_MODE::DIV_BY_FACTOR)
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

        static void SoftwareReset()
        {
            Periph().CTRL.bit.SWRST = 1;
            WaitSync();
        }

        static void EnablePeripheral(PERIPHERAL_CHANNEL ch, GENERATOR clockSource)
        {
            Periph().CLKCTRL.reg 
                = CLKCTRL_T::CLKEN_MASK 
                | CLKCTRL_T::GEN(static_cast<unsigned>(clockSource)) 
                | CLKCTRL_T::ID(static_cast<unsigned>(ch));
        }

        static void DisablePeripheral(PERIPHERAL_CHANNEL ch, GENERATOR clockSource)
        {
            Periph().CLKCTRL.reg 
                = CLKCTRL_T::GEN(static_cast<unsigned>(clockSource)) 
                | CLKCTRL_T::ID(static_cast<unsigned>(ch));
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
            Periph().GENDIV.reg = GENDIV_T::ID(static_cast<unsigned>(generator)) | GENDIV_T::DIV(static_cast<unsigned>(div));
            Periph().GENCTRL.reg 
                = GENCTRL_T::DIVSEL(static_cast<unsigned>(divsel))
                | GENCTRL_T::IDC(static_cast<unsigned>(improveDutyCycle))
                | GENCTRL_T::RUNSTDBY(static_cast<unsigned>(runInStandby))
                | GENCTRL_T::OE(static_cast<unsigned>(enableOutput))
                | GENCTRL_T::OOV(static_cast<unsigned>(outputOffValue))
                | GENCTRL_T::SRC(static_cast<unsigned>(clockSource))
                | GENCTRL_T::GENEN_MASK
                | GENCTRL_T::ID(static_cast<unsigned>(generator));
            WaitSync();
        }

        static ALWAYS_INLINE void ConfigureGeneratorSimple(GENERATOR generator, CLOCK_SOURCE clockSource, unsigned div)
        {
            Periph().GENDIV.reg = GENDIV_T::ID(static_cast<unsigned>(generator)) | GENDIV_T::DIV(static_cast<unsigned>(div));
            Periph().GENCTRL.reg 
                = GENCTRL_T::DIVSEL(static_cast<unsigned>(DIV_MODE::DIV_BY_FACTOR))
                | GENCTRL_T::IDC(static_cast<unsigned>(IMPROVE_DUTY_CYCLE::DISABLE))
                | GENCTRL_T::RUNSTDBY(static_cast<unsigned>(RUN_IN_STANDBY::NO))
                | GENCTRL_T::OE(static_cast<unsigned>(ENABLE_OUTPUT::DISABLE))
                | GENCTRL_T::OOV(static_cast<unsigned>(OUTPUT_OFF_VALUE::LOW))
                | GENCTRL_T::SRC(static_cast<unsigned>(clockSource))
                | GENCTRL_T::GENEN_MASK
                | GENCTRL_T::ID(static_cast<unsigned>(generator));
            WaitSync();
        }

        static void EnableGenerator(GENERATOR generator)
        {
            Periph().GENCTRL.reg = ReadGenCtrl(generator).reg | GENCTRL_T::GENEN_MASK;
            WaitSync();
        }

        static void DisableGenerator(GENERATOR generator)
        {
            Periph().GENCTRL.reg = ReadGenCtrl(generator).reg & ~GENCTRL_T::GENEN_MASK;
            WaitSync();
        }

        static ALWAYS_INLINE void WaitSync()
        {
            while (Periph().STATUS.bit.SYNCBUSY);
        }

    private:
        using GCLK_T = Peripherals::GCLK_T;
        using CLKCTRL_T = GCLK_T::CLKCTRL_T;
        using GENCTRL_T = GCLK_T::GENCTRL_T;
        using GENDIV_T = GCLK_T::GENDIV_T;

        static ALWAYS_INLINE Peripherals::GCLK_T& Periph()
        { 
            return *reinterpret_cast<Peripherals::GCLK_T*>(Peripherals::GCLK_T::BASE_ADDRESS);
        }

        static GENCTRL_T ReadGenCtrl(GENERATOR id)
        {
            volatile uint8_t* selreg = reinterpret_cast<uint8_t*>(GCLK_T::BASE_ADDRESS + GCLK_T::ADDR_OFFSET_GENCTRL);
            *selreg = static_cast<unsigned char>(id);
            WaitSync();
            return Periph().GENCTRL;
        }

        static GENDIV_T ReadGenDiv(GENERATOR id)
        {
            volatile uint8_t* selreg = reinterpret_cast<uint8_t*>(GCLK_T::BASE_ADDRESS + GCLK_T::ADDR_OFFSET_GENDIV);
            *selreg = static_cast<unsigned char>(id);
            WaitSync();
            return Periph().GENDIV;
        }

        static unsigned CalcSourceFrequency(GENERATOR generator, unsigned xosc32kFrequency, unsigned xoscFrequency, const GENCTRL_T& genctrl)
        {
            switch (static_cast<CLOCK_SOURCE>(genctrl.bit.SRC))
            {
                case CLOCK_SOURCE::XOSC: 
                    return xoscFrequency; 
                case CLOCK_SOURCE::GCLK_IN:
                    abort(); // unknown frequency at GCLK_IO
                case CLOCK_SOURCE::GCLK_GEN1:                    
                    if (generator==GENERATOR::Generator_1)
                    {
                        abort(); // infinite recursion
                    }
                    else
                    {
                        return CalcFrequency(GENERATOR::Generator_1, xosc32kFrequency, xoscFrequency);
                    }
                case CLOCK_SOURCE::OSCUPL32K:
                case CLOCK_SOURCE::OSC32K:
                    return 32768u;
                case CLOCK_SOURCE::XOSC32K:
                    return xosc32kFrequency;
                case CLOCK_SOURCE::OSC8M:
                    return SYSCTRL::CalcOSC8MOutputFrequency();
                case CLOCK_SOURCE::DFLL48M:
                    return SYSCTRL::CalcDFLL48MOutputFrequency(xosc32kFrequency, xoscFrequency);
                case CLOCK_SOURCE::FDPLL96M:
                    return SYSCTRL::CalcFDPLL96MOutputFrequency(xosc32kFrequency, xoscFrequency);
                default:
                    abort();
            }
        }

};

} // namespace HAL
} // namespace LibreUCpp
