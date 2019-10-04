#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/SYSCTRL.h>

namespace LibreUCpp {
namespace HAL {

class OSC8M 
{
    public:
        enum class PRESCALER : unsigned char
        {
            DIV_BY_1 = 0,
            DIV_BY_2 = 1,
            DIV_BY_4 = 2,
            DIV_BY_8 = 3,
        };

    public:
        static ALWAYS_INLINE void Configure(PRESCALER div)
        {
            CTRL().bit.PRESC = static_cast<unsigned>(div);
        }

        static unsigned GetOutputFrequency()
        {
            return 8000000u >> CTRL().bit.PRESC;
        }

        static ALWAYS_INLINE void Enable()
        {
            CTRL().bit.ENABLE = 1;
            while (!CTRL().bit.ENABLE);
        }

        static ALWAYS_INLINE void Disable()
        {
            CTRL().bit.ENABLE = 0;
            while (CTRL().bit.ENABLE);
        }

        static ALWAYS_INLINE void WaitReady()
        {
            while (!STATUS().bit.OSC8MRDY);
        }

    private:
        using SYSCTRL_T = Peripherals::SYSCTRL_T;
        using OSC8M_T = SYSCTRL_T::OSC8M_T;
        using PCLKSR_T = SYSCTRL_T::PCLKSR_T;

        static ALWAYS_INLINE OSC8M_T& CTRL()
        {
            return *reinterpret_cast<OSC8M_T*>(SYSCTRL_T::BASE_ADDRESS + SYSCTRL_T::ADDR_OFFSET_OSC8M);
        }

        static ALWAYS_INLINE PCLKSR_T& STATUS()
        {
            return *reinterpret_cast<PCLKSR_T*>(SYSCTRL_T::BASE_ADDRESS + SYSCTRL_T::ADDR_OFFSET_PCLKSR);
        }

};

} // namespace HAL
} // namespace LibreUCpp
