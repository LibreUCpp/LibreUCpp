#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/SYSCTRL.h>

namespace LibreUCpp {
namespace HAL {

class DFLL
{
    public:

        enum class WAITLOCK : unsigned char
        {
            DONT_WAIT = 0,
            WAIT = 1
        };

        enum class BYPASS_COARSE_LOCK : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1
        };

        enum class QUICK_LOCK : unsigned char
        {
            ENABLE = 0,
            DISABLE = 1 // [sic]
        };

        enum class CHILL_CYCLE : unsigned char
        {
            DISABLE = 0,
            ENABLE = 1
        };

        enum class LOSE_LOCK_AFTER_WAKE : unsigned char
        {
            DONT_LOSE = 0,
            LOSE = 1
        };

        enum class STABLE : unsigned char
        {
            TRACK_DRIFT = 0,
            FIX_CALIBRATION_AFTER_LOCK = 1
        };

        enum class MODE : unsigned char
        {
            OPEN_LOOP = 0,
            CLOSED_LOOP = 1
        };

    public:
        static ALWAYS_INLINE void WaitSync()
        {
            while (!GetPeriph().PCLKSR.bit.DFLLRDY);
        }

        static ALWAYS_INLINE void Enable()
        {
            GetPeriph().DFLLCTRL.bit.ENABLE = 1;
            WaitSync();
        }

        static ALWAYS_INLINE void Disable()
        {
            GetPeriph().DFLLCTRL.bit.ENABLE = 0;
            WaitSync();
        }

        static void SetMultiplier(unsigned coarseStep, unsigned fineStep, unsigned multiplier)
        {
            GetPeriph().DFLLMUL.reg 
                = DFLLMUL_T::CSTEP(coarseStep)
                | DFLLMUL_T::FSTEP(fineStep)
                | DFLLMUL_T::MUL(multiplier);
            WaitSync();
        }

        static void SetCoarseCalibrationValue(unsigned coarse)
        {
            GetPeriph().DFLLVAL.bit.COARSE = coarse;
            WaitSync();
        }

        static void Configure(
            WAITLOCK waitLock,
            BYPASS_COARSE_LOCK bypassCoarseLock,
            QUICK_LOCK quickLock,
            CHILL_CYCLE chillCycle,
            LOSE_LOCK_AFTER_WAKE loseLockAfterWake,
            STABLE stable,
            MODE mode
        )
        {
            unsigned wasEnabled = GetPeriph().DFLLCTRL.reg & DFLLCTRL_T::ENABLE_MASK;
            GetPeriph().DFLLCTRL.reg 
                = DFLLCTRL_T::WAITLOCK(static_cast<unsigned>(waitLock))
                | DFLLCTRL_T::BPLCKC(static_cast<unsigned>(bypassCoarseLock))
                | DFLLCTRL_T::QLDIS(static_cast<unsigned>(quickLock))
                | DFLLCTRL_T::CCDIS(static_cast<unsigned>(chillCycle))
                | DFLLCTRL_T::LLAW(static_cast<unsigned>(loseLockAfterWake))
                | DFLLCTRL_T::STABLE(static_cast<unsigned>(stable))
                | DFLLCTRL_T::MODE(static_cast<unsigned>(mode))
                | wasEnabled;
            WaitSync();
        }

        static unsigned CalcOutputFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
        {            
            return GetReferenceClockFrequency(xosc32kFrequency, xoscFrequency) * GetPeriph().DFLLMUL.bit.MUL;
        }

        static unsigned GetReferenceClockFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency);

    private:
        using SYSCTRL_T = Peripherals::SYSCTRL_T;
        using DFLLCTRL_T = SYSCTRL_T::DFLLCTRL_T;
        using DFLLMUL_T = SYSCTRL_T::DFLLMUL_T;
    
        static ALWAYS_INLINE SYSCTRL_T& GetPeriph()
        { 
            return *reinterpret_cast<SYSCTRL_T*>(SYSCTRL_T::BASE_ADDRESS);
        }

};

} // namespace HAL
} // namespace LibreUCpp
