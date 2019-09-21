#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/OSCCTRL.h>

namespace LibreUCpp {
namespace HAL {

class DPLL 
{
    public:
        enum class PRESCALE : unsigned char
        {
            DIV1 = 0,
            DIV2 = 1,
            DIV4 = 2
        };

        enum class REFCLK : unsigned char
        {
            XOSC32K = 0,
            XOSC = 1,
            GCLK = 2            
        };

    public:
        static ALWAYS_INLINE void Enable()
        {
            OSCCTRL().DPLLCTRLA.reg = DPLLCTRLA_T::ENABLE_MASK;
            WaitSync();
        }

        static ALWAYS_INLINE void Disable()
        {
            OSCCTRL().DPLLCTRLA.bit.ENABLE = 0;
            WaitSync();
        }

        static ALWAYS_INLINE void WaitSync()
        {
            while (OSCCTRL().DPLLSYNCBUSY.reg);
        }

        static ALWAYS_INLINE void WaitLock()
        {
            while (!OSCCTRL().DPLLSTATUS.bit.LOCK);
        }

        static ALWAYS_INLINE void SetReferenceClock(REFCLK refclk)
        {
            OSCCTRL().DPLLCTRLB.bit.REFCLK = static_cast<unsigned>(refclk);
        }

        static ALWAYS_INLINE void SetXoscClockDivider(unsigned div)
        {
            OSCCTRL().DPLLCTRLB.bit.DIV = div;
        }

        static ALWAYS_INLINE void SetPrescale(PRESCALE prescale)
        {
            OSCCTRL().DPLLPRESC.reg = static_cast<unsigned>(prescale);
            WaitSync();
        }

        static ALWAYS_INLINE void SetRatio(unsigned ldr, unsigned ldrfrac)
        {
            OSCCTRL().DPLLRATIO.reg = DPLLRATIO_T::LDR(ldr) | DPLLRATIO_T::LDRFRAC(ldrfrac);
            WaitSync();
        }

        static unsigned CalcOutputFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
        {            
            return ((GetReferenceClockFrequency(xosc32kFrequency, xoscFrequency)/16u) 
                    * (16u*OSCCTRL().DPLLRATIO.bit.LDR + 16u + OSCCTRL().DPLLRATIO.bit.LDRFRAC)) >> OSCCTRL().DPLLPRESC.bit.PRESC;
        }

        static unsigned GetReferenceClockFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency);

    private:
        using XOSCCTRL_T = Peripherals::OSCCTRL_T::XOSCCTRL_T;
        using DPLLCTRLA_T = Peripherals::OSCCTRL_T::DPLLCTRLA_T;
        using DPLLCTRLB_T = Peripherals::OSCCTRL_T::DPLLCTRLB_T;
        using DPLLRATIO_T = Peripherals::OSCCTRL_T::DPLLRATIO_T;
        
        static ALWAYS_INLINE Peripherals::OSCCTRL_T& OSCCTRL()
        { 
            return *reinterpret_cast<Peripherals::OSCCTRL_T*>(Peripherals::OSCCTRL_T::BASE_ADDRESS);
        }
};

} // namespace HAL
} // namespace LibreUCpp
