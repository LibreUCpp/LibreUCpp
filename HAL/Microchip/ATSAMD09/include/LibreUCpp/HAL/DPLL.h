#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/SYSCTRL.h>

namespace LibreUCpp {
namespace HAL {

class DPLL 
{
    public:
        enum class FILTER : unsigned char
        {
            DEFAULT = 0,
            LOW_BANDWIDTH = 1,
            HIGH_BANDWIDTH = 2,
            HIGH_DAMPING = 3
        };

        enum class LOW_POWER_MODE : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1          
        };

        enum class WAKE_UP_FAST : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1          
        };

        enum class REFCLK : unsigned char
        {
            XOSC32K = 0,
            XOSC = 1,
            GCLK = 2            
        };

        enum class LOCK_TIME : unsigned char
        {
            DEFAULT = 0,
            TIMEOUT_8MS = 4,
            TIMEOUT_9MS = 5,
            TIMEOUT_10MS = 6,
            TIMEOUT_11MS = 7,
        };

        enum class LOCK_BYPASS : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1          
        };        

    public:
        static ALWAYS_INLINE void Enable()
        {
            GetPeriph().DPLLCTRLA.bit.ENABLE = 1;
            while (!GetPeriph().DPLLSTATUS.bit.ENABLE);
        }

        static ALWAYS_INLINE void Disable()
        {
            GetPeriph().DPLLCTRLA.bit.ENABLE = 0;
            while (GetPeriph().DPLLSTATUS.bit.ENABLE);
        }

        static ALWAYS_INLINE void WaitLock()
        {
            while (!GetPeriph().DPLLSTATUS.bit.LOCK);
        }

        static ALWAYS_INLINE void SetRatio(unsigned ldr, unsigned ldrfrac)
        {
            GetPeriph().DPLLRATIO.reg = RATIO_T::LDR(ldr) | RATIO_T::LDRFRAC(ldrfrac);
        }

        static void Configure(
            FILTER filter,
            LOW_POWER_MODE low_power_mode,
            WAKE_UP_FAST wake_up_fast,
            REFCLK refclk,
            LOCK_TIME lock_time,
            LOCK_BYPASS lock_bypass,
            unsigned clock_divider
        )
        {
            GetPeriph().DPLLCTRLB.reg 
                = CTRLB_T::FILTER(static_cast<unsigned>(filter))
                | CTRLB_T::LPEN(static_cast<unsigned>(low_power_mode))
                | CTRLB_T::WUF(static_cast<unsigned>(wake_up_fast))
                | CTRLB_T::REFCLK(static_cast<unsigned>(refclk))
                | CTRLB_T::LTIME(static_cast<unsigned>(lock_time))
                | CTRLB_T::LBYPASS(static_cast<unsigned>(lock_bypass))
                | CTRLB_T::DIV(clock_divider);
        }

        static unsigned CalcOutputFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
        {            
            auto const LDR = GetPeriph().DPLLRATIO.bit.LDR;
            auto const LDRFRAC = GetPeriph().DPLLRATIO.bit.LDRFRAC;
            return (GetReferenceClockFrequency(xosc32kFrequency, xoscFrequency) * (16u*LDR + 16u + LDRFRAC)) / 16u;
        }

        static unsigned GetReferenceClockFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency);

    private:
        using SYSCTRL_T = Peripherals::SYSCTRL_T;
        using CTRLB_T = SYSCTRL_T::DPLLCTRLB_T;
        using RATIO_T = SYSCTRL_T::DPLLRATIO_T;
    
        static ALWAYS_INLINE SYSCTRL_T& GetPeriph()
        { 
            return *reinterpret_cast<SYSCTRL_T*>(SYSCTRL_T::BASE_ADDRESS);
        }
};

} // namespace HAL
} // namespace LibreUCpp
