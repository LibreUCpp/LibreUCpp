#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/GPIO.h>
#include <LibreUCpp/Peripherals/RCC.h>
#include <LibreUCpp/HAL/Pin.h>

namespace LibreUCpp { 
namespace HAL {

class Port
{
    public:
    #ifdef LIBREUCPP_STM32F030
        static Port A, B, C, D, F;
    #endif
    #ifdef LIBREUCPP_STM32F407
        static Port A, B, C, D, E, F, G, H, I, J, K;
    #endif

        constexpr Port(intptr_t addr)
            : _addr(addr)
        {                
        }

        void EnablePeripheral();
        
        ALWAYS_INLINE constexpr Pin operator[](unsigned pinNum) const
        {
            return Pin { _addr, pinNum };
        }

    private:
        intptr_t _addr;

};

} // namespace HAL
} // namesapce LibreUCpp
