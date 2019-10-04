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
#ifdef LIBREUCPP_ATSAMC
            STARTUP_60_MS = 0x00,
            STARTUP_130_MS = 0x01,
            STARTUP_500_MS = 0x02,
            STARTUP_1000_MS = 0x03,
            STARTUP_2000_MS = 0x04,
            STARTUP_4000_MS = 0x05,
            STARTUP_8000_MS = 0x06,
#endif
#ifdef LIBREUCPP_ATSAMD
            STARTUP_122_US = 0x00,
            STARTUP_1_MS = 0x01,
            STARTUP_63_MS = 0x02,
            STARTUP_125_MS = 0x03,
            STARTUP_500_MS = 0x04,
            STARTUP_1000_MS = 0x05,
            STARTUP_2000_MS = 0x06,
            STARTUP_4000_MS = 0x07,
#endif
        };

    public:
        static ALWAYS_INLINE void Configure(CRYSTAL crystal, STARTUP_TIME startupTime)
        {
            CTRL().XOSC32K.reg 
                = XOSC32K_T::STARTUP(static_cast<unsigned>(startupTime)) 
                | XOSC32K_T::XTALEN(static_cast<unsigned>(crystal));
        }

        static ALWAYS_INLINE void Enable()
        {
            CTRL().XOSC32K.bit.ENABLE = 1;
            CTRL().XOSC32K.bit.EN32K = 1;
        }

        static ALWAYS_INLINE void Disable()
        {
            CTRL().XOSC32K.bit.ENABLE = 0;
        }

        static ALWAYS_INLINE void WaitReady()
        {            
            while (!IsReady());
        }

    private:
#ifdef LIBREUCPP_ATSAMC
        using CTRL_T = Peripherals::OSC32KCTRL_T;
#endif
#ifdef LIBREUCPP_ATSAMD
        using CTRL_T = Peripherals::SYSCTRL_T;
#endif
        using XOSC32K_T = CTRL_T::XOSC32K_T;

        static ALWAYS_INLINE CTRL_T& CTRL()
        { 
            return *reinterpret_cast<CTRL_T*>(CTRL_T::BASE_ADDRESS);
        }

        static ALWAYS_INLINE bool IsReady()
        {
#ifdef LIBREUCPP_ATSAMC
            return CTRL().STATUS.bit.XOSC32KRDY;
#endif
#ifdef LIBREUCPP_ATSAMD
            return CTRL().PCLKSR.bit.XOSC32KRDY;
#endif
        }

};

} // namespace HAL
} // namespace LibreUCpp
