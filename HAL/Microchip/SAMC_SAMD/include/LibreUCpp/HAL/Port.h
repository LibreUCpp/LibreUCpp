#pragma once

#include <stdint.h>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/PORT.h>
#include <LibreUCpp/HAL/Pin.h>

namespace LibreUCpp { 
namespace HAL {

class Port
{
    public:
#ifdef LIBREUCPP_HAL_HAS_PORTA
        static Port A;
#endif
#ifdef LIBREUCPP_HAL_HAS_PORTB
        static Port B;
#endif
#ifdef LIBREUCPP_HAL_HAS_PORTC
        static Port C;
#endif

#ifdef LIBREUCPP_ATSAMD
        Port(intptr_t addr)
        {
            (void) addr;
        }
#else
        Port(intptr_t addr)
            : _addr { addr }
        {
        }
#endif
        
        ALWAYS_INLINE Pin operator[](unsigned pinNum) const
        {
            return Pin { GetAddr(), pinNum };
        }

        void SetWrConfig(bool hwSel, bool writePinConfig, bool writePinMux, Pin::Mux mux, bool drvStr, bool pullEnable, bool inputEnable, bool muxEnable, uint32_t pinMask)
        {
            GetPort()->WRCONFIG.reg = 
                (pinMask & 0xFFFF)
                | (hwSel ? (1ul<<31) : 0)
                | (writePinConfig ? (1ul<<30) : 0)
                | (writePinMux ? (1ul<<28) : 0)
                | (static_cast<uint32_t>(mux) << 24)
                | (drvStr ? (1ul<<22) : 0)
                | (pullEnable ? (1ul<<18) : 0)
                | (inputEnable ? (1ul<<17) : 0)
                | (muxEnable ? (1ul<<16) : 0);
        }

    private:
#ifdef LIBREUCPP_ATSAMD
        static constexpr intptr_t _addr = Peripherals::PORT_T::BASE_ADDRESS_PORT;
#else
        intptr_t _addr;
#endif

        ALWAYS_INLINE Peripherals::PORT_T* GetPort() const
        {
            return reinterpret_cast<Peripherals::PORT_T*>(_addr);
        }

        ALWAYS_INLINE constexpr intptr_t GetAddr() const
        {
            return _addr;
        }
};

} // namespace HAL
} // namespace LibreUCpp
