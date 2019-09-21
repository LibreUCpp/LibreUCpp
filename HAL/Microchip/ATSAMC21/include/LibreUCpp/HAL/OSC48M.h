#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/OSCCTRL.h>

namespace LibreUCpp {
namespace HAL {

class OSC48M 
{
    public:
        enum class STARTUP_TIME : unsigned char
        {
            STARTUP_166_NS = 0x00,
            STARTUP_333_NS = 0x01,
            STARTUP_667_NS = 0x02,
            STARTUP_1333_NS = 0x03,
            STARTUP_2667_NS = 0x04,
            STARTUP_5333_NS = 0x05,
            STARTUP_10667_NS = 0x06,
            STARTUP_21333_NS = 0x07,
        };

        enum class DIVIDER : unsigned char
        {
            DIV_48000_KHZ = 0x00,
            DIV_24000_KHZ = 0x01,
            DIV_16000_KHZ = 0x02,
            DIV_12000_KHZ = 0x03,
            DIV_9600_KHZ = 0x04,
            DIV_8000_KHZ = 0x05,
            DIV_6860_KHZ = 0x06,
            DIV_6000_KHZ = 0x07,
            DIV_5330_KHZ = 0x08,
            DIV_4800_KHZ = 0x09,
            DIV_4360_KHZ = 0x0A,
            DIV_4000_KHZ = 0x0B,
            DIV_3690_KHZ = 0x0C,
            DIV_3430_KHZ = 0x0D,
            DIV_3200_KHZ = 0x0E,
            DIV_3000_KHZ = 0x0F
        };

    public:
        static ALWAYS_INLINE void Configure(DIVIDER div, STARTUP_TIME startupTime)
        {
            OSCCTRL().OSC48MSTUP.reg = static_cast<unsigned>(startupTime);
            OSCCTRL().OSC48MDIV.reg  = static_cast<unsigned>(div);            
            WaitSync();
        }

        static unsigned GetOutputFrequency()
        {
            return 48000000u / (OSCCTRL().OSC48MDIV.bit.DIV + 1u);
        }

        static ALWAYS_INLINE void Enable()
        {
            OSCCTRL().OSC48MCTRL.reg = OSC48MCTRL_T::ENABLE_MASK;
        }

        static ALWAYS_INLINE void Disable()
        {
            OSCCTRL().OSC48MCTRL.bit.ENABLE = 0;
        }

        static ALWAYS_INLINE void WaitReady()
        {
            while (!OSCCTRL().STATUS.bit.OSC48MRDY);
        }

        static ALWAYS_INLINE void WaitSync()
        {
            while (OSCCTRL().OSC48MSYNCBUSY.reg);
        }

    private:
        using OSC48MCTRL_T = Peripherals::OSCCTRL_T::OSC48MCTRL_T;

        static ALWAYS_INLINE Peripherals::OSCCTRL_T& OSCCTRL()
        { 
            return *reinterpret_cast<Peripherals::OSCCTRL_T*>(Peripherals::OSCCTRL_T::BASE_ADDRESS);
        }
};

} // namespace HAL
} // namespace LibreUCpp
