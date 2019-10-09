#pragma once

#include <stdint.h>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/USART.h>

namespace LibreUCpp {
namespace HAL {

class UART
{
    private:
        using USART_T = Peripherals::USART_T;

    public:
        enum class INSTANCE : unsigned char
        {
#ifdef LIBREUCPP_HAL_HAS_USART0
            USART0 = 0,
#endif
#ifdef LIBREUCPP_HAL_HAS_USART1
            USART1 = 1,
#endif
#ifdef LIBREUCPP_HAL_HAS_USART2
            USART2 = 2,
#endif
#ifdef LIBREUCPP_HAL_HAS_USART3
            USART3 = 3,
#endif
#ifdef LIBREUCPP_HAL_HAS_USART4
            USART4 = 4,
#endif
#ifdef LIBREUCPP_HAL_HAS_USART5
            USART5 = 5,
#endif
#ifdef LIBREUCPP_HAL_HAS_USART6
            USART6 = 6,
#endif
        };

        enum class PARITY : unsigned char
        {
            NONE = 2,
            EVEN = 0,
            ODD = 1,
        };

        enum class BITS : unsigned char
        {
            SEVEN = 2,
            EIGHT = 0,
            NINE = 1,
        };

        enum class STOP_BITS : unsigned char
        {
            ONE = 0,
            TWO = 2,
        };

        void Setup(INSTANCE instance);
        void Init(unsigned baudrate, BITS bits, PARITY parity, STOP_BITS stopBits);

        uint16_t ReadChar();
        void WriteChar(uint16_t ch);
        void WriteString(const char* data);

        ALWAYS_INLINE bool IsRxDataAvail()
        {
            return ISR()->bit.RXNE != 0;
        }

        ALWAYS_INLINE bool IsTxReady()
        {
            return ISR()->bit.TXE != 0;
        }

        ALWAYS_INLINE bool IsTxComplete()
        {
            return ISR()->bit.TC != 0;
        }


    private:
        intptr_t _addr { 0 };
        intptr_t _addrISR { 0 };
        intptr_t _addrTDR { 0 };
        intptr_t _addrRDR { 0 };

        ALWAYS_INLINE volatile USART_T::ISR_T* ISR()
        {
            return reinterpret_cast<USART_T::ISR_T*>(_addrISR);
        }

        ALWAYS_INLINE volatile USART_T::TDR_T* TDR()
        {
            return reinterpret_cast<USART_T::TDR_T*>(_addrTDR);
        }

        ALWAYS_INLINE volatile USART_T::RDR_T* RDR()
        {
            return reinterpret_cast<USART_T::RDR_T*>(_addrRDR);
        }

};

} // namespace HAL
} // namespace LibreUCpp
