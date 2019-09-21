#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/OSC32KCTRL.h>

namespace LibreUCpp {
namespace HAL {

class XOSC32K
{
    public:
        enum class CRYSTAL : unsigned char
        {
            XOUT32K_IS_GPIO = 0,
            XOUT32K_IS_CRYSTAL = 1
        };

        enum class STARTUP_TIME : unsigned char
        {
            STARTUP_60_MS = 0x00,
            STARTUP_130_MS = 0x01,
            STARTUP_500_MS = 0x02,
            STARTUP_1000_MS = 0x03,
            STARTUP_2000_MS = 0x04,
            STARTUP_4000_MS = 0x05,
            STARTUP_8000_MS = 0x06,
        };

    public:
        static ALWAYS_INLINE void Configure(CRYSTAL crystal, STARTUP_TIME startupTime)
        {
            OSC32KCTRL().XOSC32K.reg = XOSC32K_T::STARTUP(static_cast<unsigned>(startupTime)) 
                                     | XOSC32K_T::XTALEN(static_cast<unsigned>(crystal));
        }

        static ALWAYS_INLINE void Enable()
        {
            OSC32KCTRL().XOSC32K.bit.ENABLE = 1;
            OSC32KCTRL().XOSC32K.bit.EN32K = 1;
        }

        static ALWAYS_INLINE void Disable()
        {
            OSC32KCTRL().XOSC32K.bit.ENABLE = 0;
        }

        static ALWAYS_INLINE void WaitReady()
        {
            while (!OSC32KCTRL().STATUS.bit.XOSC32KRDY);
        }

    private:
        using XOSC32K_T = Peripherals::OSC32KCTRL_T::XOSC32K_T;

        static ALWAYS_INLINE Peripherals::OSC32KCTRL_T& OSC32KCTRL()
        { 
            return *reinterpret_cast<Peripherals::OSC32KCTRL_T*>(Peripherals::OSC32KCTRL_T::BASE_ADDRESS);
        }


};

} // namespace HAL
} // namespace LibreUCpp
