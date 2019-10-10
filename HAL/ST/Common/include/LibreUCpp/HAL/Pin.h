#pragma once

#include <stdint.h>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/GPIO.h>

namespace LibreUCpp { 
namespace HAL {

class Pin 
{
    public: // enums
        enum class Mux : uint32_t
        {
            AF0, AF1, AF2, AF3, AF4, AF5, AF6, AF7,
#ifdef LIBREUCPP_STM32F407
            AF8, AF9, AF10, AF11, AF12, AF13, AF14, AF15
#endif
        };

        enum class Mode : uint32_t
        {
            INPUT = 0,
            OUTPUT = 1,
            ALTERNATE = 2,
            ANALOG = 3,
        };

        enum class Direction
        {
            INPUT, 
            OUTPUT
        };

        enum class OutputType : uint32_t
        {
            PUSH_PULL = 0,
            OPEN_DRAIN = 1,
        };

        enum class OutputSpeed : uint32_t
        {
            LOW_SPEED = 0,
            MEDIUM_SPEED = 1,
#ifdef LIBREUCPP_STM32F030
            HIGH_SPEED = 3
#endif            
#ifdef LIBREUCPP_STM32F407
            HIGH_SPEED = 2,
            VERY_HIGH_SPEED = 3
#endif            
        };

        enum class PullMode : uint32_t
        {
            NONE,
            PULL_UP,
            PULL_DOWN,
            RESERVED
        };

    public: // constructor
        constexpr Pin(intptr_t addr, unsigned pinNum)
            : _addr(addr)
            , _pinMask(1u<<pinNum)
        {                
        }

    public: // basic input/output functions
        ALWAYS_INLINE bool Read()
        {
            return (Peripheral().IDR.reg & _pinMask) != 0;
        }

        ALWAYS_INLINE void Set()
        {
            Peripheral().BSRR.reg = _pinMask;
        }

        ALWAYS_INLINE void Clear()
        {
        #ifdef LIBREUCPP_STM32_GPIO_HAS_BRR
            Peripheral().BRR.reg = _pinMask;
        #else
            Peripheral().BSRR.reg = _pinMask<<16;
        #endif
        }

        ALWAYS_INLINE void Toggle()
        {
            Read() ? Clear() : Set();
        }

        ALWAYS_INLINE void Write(bool value)
        {
            value ? Set() : Clear();
        }

    public: // basic pin config functions
        void EnablePeripheral();

        void SetDirection(Direction dir)
        {
            SetMode((dir == Direction::INPUT) ? Mode::INPUT : Mode::OUTPUT);
        }

        PullMode GetPullMode()
        {
            unsigned const pos = 2 * PinNum();
            return static_cast<PullMode>((Peripheral().PUPDR.reg >> pos) & 3u);
        }

        void SetPullMode(PullMode mode)
        {
            unsigned const pos = 2 * PinNum();
            unsigned const mask = ~(3u << pos);
            Peripheral().PUPDR.reg = (Peripheral().PUPDR.reg & mask) | (static_cast<unsigned>(mode) << pos);
        }

        OutputType GetOutputType()
        {
            return (Peripheral().OTYPER.reg & _pinMask) ? OutputType::OPEN_DRAIN : OutputType::PUSH_PULL;
        }

        void SetOutputType(OutputType ot)
        {
            if (ot == OutputType::OPEN_DRAIN)
            {
                Peripheral().OTYPER.reg |= _pinMask;
            }
            else
            {
                Peripheral().OTYPER.reg &= ~_pinMask;
            }
        }

        void ConfigureMultiplex(Mux mux)
        {
            const uint32_t pinNum = PinNum();
            const uint32_t shift = 4*(pinNum & 0x07);
            const uint32_t mask = ~(0xFul << shift);
            if (pinNum < 8)
            {                    
                Peripheral().AFRL.reg = (Peripheral().AFRL.reg & mask) | static_cast<uint32_t>(mux) << shift;
            }
            else
            {
                Peripheral().AFRH.reg = (Peripheral().AFRH.reg & mask) | static_cast<uint32_t>(mux) << shift;
            }
            SetMode(Mode::ALTERNATE);
        }

        void DisableMultiplex()
        {
            SetMode(Mode::INPUT);
        }

    public: // controller specific functions
        inline Mode GetMode()
        {
            const unsigned pos = 2 * PinNum();
            return static_cast<Mode>((Peripheral().MODER.reg >> pos) & 3ul);
        }

        inline void SetMode(Mode mode)
        {
            const unsigned pos = 2 * PinNum();
            const unsigned mask = ~(3ul << pos);
            Peripheral().MODER.reg = (Peripheral().MODER.reg & mask) | (static_cast<uint32_t>(mode) << pos);
        }

        inline OutputSpeed GetOutputSpeed();
        inline void SetOutputSpeed(OutputSpeed speed);

    private:
        intptr_t _addr;
        uint32_t _pinMask;

        uint32_t PinNum() const
        {
        #ifdef LIBREUCPP_STM32F0
            // at least on Cortex-M0 (has no CTZ or CLZ), this is significantly smaller than __builtin_ctz(_pinMask):
            uint32_t num = 0;
            uint32_t mask = _pinMask;
            while ((mask & 0x01) == 0)
            {
                num++;
                mask >>= 1;
            }
            return num;
        #else
            return static_cast<uint32_t>(__builtin_ctz(_pinMask));
        #endif
        }

        ALWAYS_INLINE Peripherals::GPIO_T& Peripheral()
        {
            return *reinterpret_cast<Peripherals::GPIO_T*>(_addr);
        }
};

} // namespace HAL
} // namespace LibreUCpp
