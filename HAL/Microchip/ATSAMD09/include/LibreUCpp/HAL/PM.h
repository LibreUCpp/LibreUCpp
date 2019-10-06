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

    private:
        using PM_T = Peripherals::PM_T;
        static ALWAYS_INLINE PM_T& GetPeriph()
        {
            return *reinterpret_cast<PM_T*>(PM_T::BASE_ADDRESS);
        }
};

} // namespace HAL
} // namespace LibreUCpp
