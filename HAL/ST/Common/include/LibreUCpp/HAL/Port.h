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
    #ifdef LIBREUCPP_HAL_HAS_GPIOA
        static Port A;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOB
        static Port B;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOC
        static Port C;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOD
        static Port D;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOE
        static Port E;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOF
        static Port F;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOG
        static Port G;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOH
        static Port H;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOI
        static Port I;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOJ
        static Port J;
    #endif
    #ifdef LIBREUCPP_HAL_HAS_GPIOK
        static Port K;
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
