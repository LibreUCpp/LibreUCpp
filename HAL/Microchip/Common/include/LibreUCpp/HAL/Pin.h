#pragma once

#include <cstdint>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/PORT.h>

namespace LibreUCpp { 
namespace HAL {

class Pin
{
    public: // enums
        enum class Mux
        {
            A, B, C, D, E, F, G, H, I,
        };

        enum class Direction
        {
            INPUT, 
            OUTPUT
        };

        enum class PullMode : uint32_t
        {
            NONE = 0,
            PULL_UP = 1,
        };

#ifdef LIBREUCPP_ATSAMC
        enum class EventAction : uint32_t
        {
            OUT = 0x00,
            SET = 0x01,
            CLR = 0x02,
            TGL = 0x03,
        };
#endif

    public: // constructor
#ifdef LIBREUCPP_ATSAMD
        constexpr Pin(intptr_t portAddr, unsigned pinNumber)
            : _pinMask { 1ul << pinNumber }
        {
            (void) portAddr;            
        }
#else
        constexpr Pin(intptr_t portAddr, unsigned pinNumber)
            : _pinMask { 1ul << pinNumber }
            , _addr { portAddr }
        {
        }
#endif

    public: // basic input/output functions
        ALWAYS_INLINE bool Read()
        {
            return (GetPort()->IN.reg & _pinMask) != 0;
        }

        ALWAYS_INLINE void Set()
        {
            GetPort()->OUTSET.reg = _pinMask;
        }

        ALWAYS_INLINE void Clear()
        {
            GetPort()->OUTCLR.reg = _pinMask;
        }

        ALWAYS_INLINE void Toggle()
        {
            GetPort()->OUTTGL.reg = _pinMask;
        }

        ALWAYS_INLINE void Write(bool value)
        {
            value ? Set() : Clear();
        }

    public: // basic pin config functions
        void EnablePeripheral();

        inline void SetDirection(Direction dir)
        {
            if (dir == Direction::INPUT)
            {
                GetPort()->DIRCLR.reg = _pinMask;
            }
            else
            {
                GetPort()->DIRSET.reg = _pinMask;
            }
        }

        inline PullMode GetPullMode()
        {
            return static_cast<PullMode>(GetPort()->PINCFG[PinNum()].bit.PULLEN);
        }

        inline void SetPullMode(PullMode mode)
        {
            GetPort()->PINCFG[PinNum()].bit.PULLEN = static_cast<uint32_t>(mode);
        }

        void ConfigureMultiplex(Mux mux)
        {
            const uint32_t pinNum = PinNum();

            if ((pinNum & 0x01) == 0) 
            {
                // pin number is even
                GetPort()->PMUX[pinNum/2].bit.PMUXE = static_cast<uint8_t>(mux);
            }
            else 
            {
                // pin number is odd
                GetPort()->PMUX[pinNum/2].bit.PMUXO = static_cast<uint8_t>(mux);
            }

            GetPort()->PINCFG[pinNum].bit.PMUXEN = 1;
        }

        inline void DisableMultiplex()
        {
            GetPort()->PINCFG[PinNum()].bit.PMUXEN = 0;
        }

    public: // controller specific functions
        inline void ToggleDirection()
        {
            GetPort()->DIRTGL.reg= _pinMask;
        }

        inline void EnableInputSynchronizer()
        {
            GetPort()->CTRL.reg |= _pinMask;
        }

        inline void DisableInputSynchronizer()
        {
            GetPort()->CTRL.reg &= ~_pinMask;
        }

        // TODO merge with STM32F4 outputSpeed?
        inline void SetDriveStrength(bool strongerDriveStrength)
        {
            GetPort()->PINCFG[PinNum()].bit.DRVSTR = strongerDriveStrength ? 1 : 0;
        }

        inline void EnableInputBuffer()
        {
            GetPort()->PINCFG[PinNum()].bit.INEN = 1;
        }

        inline void DisableInputBuffer()
        {
            GetPort()->PINCFG[PinNum()].bit.INEN = 0;
        }

#ifdef LIBREUCPP_ATSAMC
        void EnableEventAction(unsigned eventId, EventAction action, unsigned pinNumber)
        {
            uint32_t data = (0x80 | (static_cast<unsigned>(action) << 4) | (pinNumber & 0x1F)) << (8*eventId);
            uint32_t mask = ~(0xFFu << (8u*eventId));
            GetPort()->EVCTRL.reg = (GetPort()->EVCTRL.reg & mask) | data;
        }

        void DisableEventAction(unsigned eventId)
        {
            GetPort()->EVCTRL.reg &= ~(0x80u << 8u*eventId);
        }
#endif

    private:
        const uint32_t _pinMask;

        ALWAYS_INLINE uint32_t PinNum() const
        {
            return static_cast<uint32_t>(__builtin_ctz(_pinMask));
        }

#ifdef LIBREUCPP_ATSAMD
        static constexpr intptr_t _addr = Peripherals::PORT_T::BASE_ADDRESS_PORT;
#else
        const intptr_t _addr;
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
