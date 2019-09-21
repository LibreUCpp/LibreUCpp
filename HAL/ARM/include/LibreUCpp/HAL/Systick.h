#pragma once

#include <LibreUCpp/Peripherals/Systick.h>
#include <LibreUCpp/HAL/Clock.h>

namespace LibreUCpp {
namespace HAL {

class Systick 
{
    public:
        static void SetFrequency(const Clock& clock, unsigned ticks_per_second)
        {
            unsigned inputFreq = GetClockFrequency(clock);
            SetReloadValue((inputFreq / ticks_per_second) - 1);
        }

        static void SetReloadValue(unsigned reload_value)
        {
            GetPeriph().RELOAD.bit.RELOAD = reload_value;
        }

        static unsigned GetReloadValue()
        {
            return GetPeriph().RELOAD.bit.RELOAD;
        }

        static void ResetCurrentValue()
        {
            GetPeriph().CURRENT.bit.CURRENT = 0;
        }

        static unsigned GetCurrentValue()
        {
            return GetPeriph().CURRENT.bit.CURRENT;
        }

        static void EnableInterrupt()
        {
            GetPeriph().CSR.bit.TICKINT = 1;
        }

        static void DisableInterrupt()
        {
            GetPeriph().CSR.bit.TICKINT = 0;
        }

        static void Enable()
        {
            ResetCurrentValue();
            GetPeriph().CSR.bit.ENABLE = 1;
        }

        static void Disable()
        {
            GetPeriph().CSR.bit.ENABLE = 0;
        }

    private:
        static unsigned GetClockFrequency(const Clock& clock)
        {
            return GetPeriph().CSR.bit.CLKSOURCE ? clock.CalcAHBFrequency() : clock.CalcSystickBaseFrequency();
        }

        static Peripherals::SYSTICK_T& GetPeriph()
        {
            return *reinterpret_cast<Peripherals::SYSTICK_T*>(Peripherals::SYSTICK_T::BASE_ADDRESS);
        }
};

} // namespace HAL
} // namespace LibreUCpp
