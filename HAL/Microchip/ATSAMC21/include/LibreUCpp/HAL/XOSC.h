#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/OSCCTRL.h>

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
            OSCCTRL().XOSCCTRL.bit.ENABLE = 1;
        }

        static ALWAYS_INLINE void Disable()
        {
            OSCCTRL().XOSCCTRL.bit.ENABLE = 0;
        }

        static ALWAYS_INLINE void WaitReady()
        {
            while (!OSCCTRL().STATUS.bit.XOSCRDY);
        }

        static ALWAYS_INLINE void Configure(CRYSTAL crystal, GAIN gain, STARTUP_TIME startupTime)
        {
            OSCCTRL().XOSCCTRL.reg = XOSCCTRL_T::STARTUP(static_cast<unsigned>(startupTime))
                                   | XOSCCTRL_T::GAIN(static_cast<unsigned>(gain))
                                   | XOSCCTRL_T::XTALEN(static_cast<unsigned>(crystal));
        }

        static ALWAYS_INLINE void SetAutomaticAmplitudeGain(AUTOMATIC_AMPLITUDE_GAIN ampgc)
        {
            OSCCTRL().XOSCCTRL.bit.AMPGC = static_cast<unsigned>(ampgc);
        }

    private:
        using XOSCCTRL_T = Peripherals::OSCCTRL_T::XOSCCTRL_T;

        static ALWAYS_INLINE Peripherals::OSCCTRL_T& OSCCTRL()
        { 
            return *reinterpret_cast<Peripherals::OSCCTRL_T*>(Peripherals::OSCCTRL_T::BASE_ADDRESS);
        }

};

} // namespace HAL
} // namespace LibreUCpp
