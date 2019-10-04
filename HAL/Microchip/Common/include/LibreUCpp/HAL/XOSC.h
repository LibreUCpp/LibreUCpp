#pragma once

#include <LibreUCpp/Compiler.h>

#ifdef LIBREUCPP_ATSAMC
#include <LibreUCpp/Peripherals/OSCCTRL.h>
#endif
#ifdef LIBREUCPP_ATSAMD
#include <LibreUCpp/Peripherals/SYSCTRL.h>
#endif

namespace LibreUCpp {
namespace HAL {

class XOSC
{
    public:
        enum class CRYSTAL : unsigned char
        {
            XOUT_IS_GPIO = 0,
            XOUT_IS_CRYSTAL = 1
        };

        enum class STARTUP_TIME : unsigned char
        {
            STARTUP_31_US = 0x00,
            STARTUP_61_US = 0x01,
            STARTUP_122_US = 0x02,
            STARTUP_244_US = 0x03,
            STARTUP_488_US = 0x04,
            STARTUP_977_US = 0x05,
            STARTUP_1953_US = 0x06,
            STARTUP_3906_US = 0x07,
            STARTUP_7813_US = 0x08,
            STARTUP_15625_US = 0x09,
            STARTUP_31250_US = 0x0A,
            STARTUP_62500_US = 0x0B,
            STARTUP_125000_US = 0x0C,
            STARTUP_250000_US = 0x0D,
            STARTUP_500000_US = 0x0E,
            STARTUP_1000000_US = 0x0F
        };

        enum class GAIN : unsigned char
        {
            MAX_2_MHZ = 0x00,
            MAX_4_MHZ = 0x01,
            MAX_8_MHZ = 0x02,
            MAX_16_MHZ = 0x03,
            MAX_30_MHZ = 0x04
        };

        enum class AUTOMATIC_AMPLITUDE_GAIN : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1
        };

    public:

        static ALWAYS_INLINE void Enable()
        {
            CTRL().bit.ENABLE = 1;
        }

        static ALWAYS_INLINE void Disable()
        {
            CTRL().bit.ENABLE = 0;
        }

        static ALWAYS_INLINE void WaitReady()
        {
            while (!STATUS().bit.XOSCRDY);
        }

        static ALWAYS_INLINE void Configure(CRYSTAL crystal, GAIN gain, STARTUP_TIME startupTime)
        {
            CTRL().reg = CTRL_T::STARTUP(static_cast<unsigned>(startupTime))
                       | CTRL_T::GAIN(static_cast<unsigned>(gain))
                       | CTRL_T::XTALEN(static_cast<unsigned>(crystal));
        }

        static ALWAYS_INLINE void SetAutomaticAmplitudeGain(AUTOMATIC_AMPLITUDE_GAIN ampgc)
        {
            CTRL().bit.AMPGC = static_cast<unsigned>(ampgc);
        }

    private:

#ifdef LIBREUCPP_ATSAMD
        using SYSCTRL_T = Peripherals::SYSCTRL_T;
        using CTRL_T = SYSCTRL_T::XOSC_T;
        using STATUS_T = SYSCTRL_T::PCLKSR_T;
        static constexpr intptr_t ADDR_CTRL = SYSCTRL_T::BASE_ADDRESS + SYSCTRL_T::ADDR_OFFSET_XOSC;
        static constexpr intptr_t ADDR_STATUS = SYSCTRL_T::BASE_ADDRESS + SYSCTRL_T::ADDR_OFFSET_PCLKSR;
#endif

#ifdef LIBREUCPP_ATSAMC
        using OSCCTRL_T = Peripherals::OSCCTRL_T;
        using CTRL_T = OSCCTRL_T::XOSCCTRL_T;
        using STATUS_T = OSCCTRL_T::STATUS_T;
        static constexpr intptr_t ADDR_CTRL = OSCCTRL_T::BASE_ADDRESS + OSCCTRL_T::ADDR_OFFSET_XOSCCTRL;
        static constexpr intptr_t ADDR_STATUS = OSCCTRL_T::BASE_ADDRESS + OSCCTRL_T::ADDR_OFFSET_STATUS;
#endif

        static ALWAYS_INLINE CTRL_T& CTRL()
        {
            return *reinterpret_cast<CTRL_T*>(ADDR_CTRL);
        }

        static ALWAYS_INLINE STATUS_T& STATUS()
        {
            return *reinterpret_cast<STATUS_T*>(ADDR_STATUS);
        }

};

} // namespace HAL
} // namespace LibreUCpp
