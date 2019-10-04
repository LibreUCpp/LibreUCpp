#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/PM.h>

namespace LibreUCpp {
namespace HAL {

class PM
{
    public:
        enum class IDLE_MODE : unsigned char
        {
            CPU_STOPPED = 0,
            CPU_AHB_STOPPED = 1,
            CPU_AHB_APB_STOPPED = 2,
        };

        enum class EXTERNAL_RESET : unsigned char
        {
            ENABLE = 0,
            DISABLE = 1 // [sic]
        };

        enum class PRESCALER : unsigned char
        {
            DIV_BY_1 = 0,
            DIV_BY_2 = 1,
            DIV_BY_4 = 2,
            DIV_BY_8 = 3,
            DIV_BY_16 = 4,
            DIV_BY_32 = 5,
            DIV_BY_64 = 6,
            DIV_BY_128 = 7,
        };

        enum class AHB_CLOCK : unsigned char
        {
            HPB0 = 0,
            HPB1 = 1,
            HPB2 = 2,
            DSU  = 3,
            NVMCTRL = 4,
            DMAC = 5
        };

        enum class APBA_CLOCK : unsigned char
        {
            PAC0 = 0,
            PM = 1,
            SYSCTRL = 2,
            GCLK  = 3,
            WDT = 4,
            RTC = 5,
            EIC = 6
        };

        enum class APBB_CLOCK : unsigned char
        {
            PAC1 = 0,
            DSU = 1,
            NVMCTRL = 2,
            PORT = 3,
            DMAC = 4
        };

        enum class APBC_CLOCK : unsigned char
        {
            PAC2 = 0,
            EVSYS = 1,
            SERCOM0 = 2,
            SERCOM1 = 3,
            TC1 = 6,
            TC2 = 7,
            ADC = 8
        };

    public:
        static void ConfigureIdleMode(IDLE_MODE mode)
        {
            GetPeriph().SLEEP.reg = static_cast<unsigned>(mode);
        }

        static void ConfigureExternalReset(EXTERNAL_RESET reset)
        {
            GetPeriph().EXTCTRL.reg = static_cast<unsigned>(reset);
        }

        static void SetCPUPrescaler(PRESCALER prescaler)
        {
            GetPeriph().CPUSEL.reg = static_cast<unsigned>(prescaler);
        }

        static unsigned CalcCpuFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency);

        static void SetAPBAPrescaler(PRESCALER prescaler)
        {
            GetPeriph().APBASEL.reg = static_cast<unsigned>(prescaler);
        }

        static void SetAPBBPrescaler(PRESCALER prescaler)
        {
            GetPeriph().APBBSEL.reg = static_cast<unsigned>(prescaler);
        }

        static void SetAPBCPrescaler(PRESCALER prescaler)
        {
            GetPeriph().APBCSEL.reg = static_cast<unsigned>(prescaler);
        }

        static void EnableClock(AHB_CLOCK clk)
        {
            GetPeriph().AHBMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void EnableClock(APBA_CLOCK clk)
        {
            GetPeriph().APBAMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void EnableClock(APBB_CLOCK clk)
        {
            GetPeriph().APBBMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void EnableClock(APBC_CLOCK clk)
        {
            GetPeriph().APBCMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(AHB_CLOCK clk)
        {
            GetPeriph().AHBMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(APBA_CLOCK clk)
        {
            GetPeriph().APBAMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(APBB_CLOCK clk)
        {
            GetPeriph().APBBMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(APBC_CLOCK clk)
        {
            GetPeriph().APBCMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

    private:
        using PM_T = Peripherals::PM_T;
        static ALWAYS_INLINE PM_T& GetPeriph()
        {
            return *reinterpret_cast<PM_T*>(PM_T::BASE_ADDRESS);
        }
};

} // namespace HAL
} // namespace LibreUCpp
