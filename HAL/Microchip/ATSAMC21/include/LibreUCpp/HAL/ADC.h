#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/ADC.h>

namespace LibreUCpp {
namespace HAL {

class ADC
{
    private:
        using ADC_T = Peripherals::ADC_T;
        using CTRLA_T = ADC_T::CTRLA_T;
        using CTRLB_T = ADC_T::CTRLB_T;
        using CTRLC_T = ADC_T::CTRLC_T;
        using REFCTRL_T = ADC_T::REFCTRL_T;
        using SYNCBUSY_T = ADC_T::SYNCBUSY_T;
        using INTFLAG_T = ADC_T::INTFLAG_T;
        using INPUTCTRL_T = ADC_T::INPUTCTRL_T;
        using SWTRIG_T = ADC_T::SWTRIG_T;
        using AVGCTRL_T = ADC_T::AVGCTRL_T;

    public:
        enum class INSTANCE : unsigned char
        {
            ADC0 = 0,
            ADC1 = 1,
        };

        enum class PRESCALER : unsigned char
        {
            DIV_BY_2 = 0,
            DIV_BY_4 = 1,
            DIV_BY_8 = 2,
            DIV_BY_16 = 3,
            DIV_BY_32 = 4,
            DIV_BY_64 = 5,
            DIV_BY_128 = 6,
            DIV_BY_256 = 7,
        };

        enum class REFSEL : unsigned char
        {
            INTREF = 0,
            INTVCC0 = 1,
            INTVCC1 = 2,
            VREFA = 3,
            DAC = 4,
            INTVCC2 = 5,
        };

        enum class RESOLUTION : unsigned char
        {
            RESOLUTION_12_BIT = 0,
            RESOLUTION_16_BIT = 1,
            RESOLUTION_10_BIT = 2,
            RESOLUTION_8_BIT = 3,
        };

        enum class DIFFMODE : unsigned char
        {
            SINGLE_ENDED = 0,
            DIFFERENTIAL = 1,
        };

        enum class ACCUMULATION : unsigned char
        {
            ACCUMULATE_1_SAMPLE = 0,
            ACCUMULATE_2_SAMPLES = 1,
            ACCUMULATE_4_SAMPLES = 2,
            ACCUMULATE_8_SAMPLES = 3,
            ACCUMULATE_16_SAMPLES = 4,
            ACCUMULATE_32_SAMPLES = 5,
            ACCUMULATE_64_SAMPLES = 6,
            ACCUMULATE_128_SAMPLES = 7,
            ACCUMULATE_256_SAMPLES = 8,
            ACCUMULATE_512_SAMPLES = 9,
            ACCUMULATE_1024_SAMPLES = 10,
        };

        enum class MUXPOS : unsigned char
        {
            AIN0 = 0x00,
            AIN1 = 0x01,
            AIN2 = 0x02,
            AIN3 = 0x03,
            AIN4 = 0x04,
            AIN5 = 0x05,
            AIN6 = 0x06,
            AIN7 = 0x07,
            AIN8 = 0x08,
            AIN9 = 0x09,
            AIN10 = 0x0A,
            AIN11 = 0x0B,
            BANDGAP = 0x19,
            SCALEDVDDCORE = 0x1A,
            SCALEDVDDANA = 0x1B,
            DAC = 0x1C,
            SCALEDVDDIO = 0x1D
        };

        enum class MUXNEG : unsigned char
        {
            AIN0 = 0x00,
            AIN1 = 0x01,
            AIN2 = 0x02,
            AIN3 = 0x03,
            AIN4 = 0x04,
            AIN5 = 0x05,
            GND  = 0x18,
        };

    public:
        void Setup(INSTANCE instance, PRESCALER prescaler, REFSEL refsel, RESOLUTION resolution, DIFFMODE diffmode, ACCUMULATION accumulation);

    public:
        using CHANNEL = MUXPOS;

        ALWAYS_INLINE void StartConversation()
        {
            GetPeriph()->SWTRIG.reg = SWTRIG_T::START_MASK;
        }

        ALWAYS_INLINE void StartConversation(MUXPOS pos)
        {
            SetInputs(MUXNEG::GND, pos);
            StartConversation();
        }

        ALWAYS_INLINE void StartConversation(MUXNEG neg, MUXPOS pos)
        {
            SetInputs(neg, pos);
            StartConversation();
        }

        void SetInputs(MUXNEG muxneg, MUXPOS muxpos)
        {
            GetPeriph()->INPUTCTRL.reg = INPUTCTRL_T::MUXNEG(static_cast<unsigned>(muxneg))
                                       | INPUTCTRL_T::MUXPOS(static_cast<unsigned>(muxpos));
        }

        ALWAYS_INLINE bool IsConversationFinished()
        {
            return INTFLAG()->bit.RESRDY != 0;
        }

        ALWAYS_INLINE unsigned ReadResult()
        {
            unsigned result = GetPeriph()->RESULT.reg;
            GetPeriph()->INTFLAG.bit.RESRDY = 1;
            return result;
        }

        unsigned ReadChannel(CHANNEL channel)
        {
            StartConversation(channel);
            while (!IsConversationFinished());
            return ReadResult();
        }

    private:
        intptr_t _addr { 0 };
        intptr_t _addrIntFlag { 0 };

        ALWAYS_INLINE volatile ADC_T* GetPeriph()
        {
            return reinterpret_cast<ADC_T*>(_addr);
        }

        ALWAYS_INLINE volatile CTRLA_T* CTRLA()
        {
            return reinterpret_cast<CTRLA_T*>(_addr + ADC_T::ADDR_OFFSET_CTRLA);
        }

        ALWAYS_INLINE volatile CTRLB_T* CTRLB()
        {
            return reinterpret_cast<CTRLB_T*>(_addr + ADC_T::ADDR_OFFSET_CTRLB);
        }

        ALWAYS_INLINE volatile CTRLC_T* CTRLC()
        {
            return reinterpret_cast<CTRLC_T*>(_addr + ADC_T::ADDR_OFFSET_CTRLC);
        }

        ALWAYS_INLINE volatile SYNCBUSY_T* SYNCBUSY()
        {
            return reinterpret_cast<SYNCBUSY_T*>(_addr + ADC_T::ADDR_OFFSET_CTRLC);
        }

        ALWAYS_INLINE volatile INTFLAG_T* INTFLAG()
        {
            return reinterpret_cast<INTFLAG_T*>(_addrIntFlag);
        }

        ALWAYS_INLINE volatile INPUTCTRL_T* INPUTCTRL()
        {
            return reinterpret_cast<INPUTCTRL_T*>(_addr + ADC_T::ADDR_OFFSET_INPUTCTRL);
        }

        ALWAYS_INLINE void WaitBusy()
        {
            while (SYNCBUSY()->reg != 0);
        }

        void Reset();
        void SetPrescaler(PRESCALER prescaler);
        void SetReference(bool refcomp, REFSEL refsel);
        void Enable();
        void Disable();

        void SetCalibration(unsigned linearity, unsigned biascal);

};

} // namespace HAL
} // namespace LibreUCpp
