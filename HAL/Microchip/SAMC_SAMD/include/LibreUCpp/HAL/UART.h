#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/SERCOM.h>
#include <LibreUCpp/HAL/GCLK.h>

namespace LibreUCpp {
namespace HAL {

class UART
{
    private:
        using SERCOM_T = Peripherals::SERCOM_T;
#ifdef LIBREUCPP_ATSAMC
        using USART_T = SERCOM_T::CLUSTER_T::USART_INT_T;
        using CTRLA_T = USART_T::USART_INT_CTRLA_T;
        using CTRLB_T = USART_T::USART_INT_CTRLB_T;
        using INTFLAG_T = USART_T::USART_INT_INTFLAG_T;
        using DATA_T = USART_T::USART_INT_DATA_T;
        using BAUD_T = USART_T::USART_INT_BAUD_T;
        using SYNCBUSY_T = USART_T::USART_INT_SYNCBUSY_T;

        static constexpr intptr_t ADDR_OFFSET_CTRLA    = SERCOM_T::ADDR_OFFSET_USART_INT_CTRLA;
        static constexpr intptr_t ADDR_OFFSET_CTRLB    = SERCOM_T::ADDR_OFFSET_USART_INT_CTRLB;
        static constexpr intptr_t ADDR_OFFSET_BAUD     = SERCOM_T::ADDR_OFFSET_USART_INT_BAUD;
        static constexpr intptr_t ADDR_OFFSET_DATA     = SERCOM_T::ADDR_OFFSET_USART_INT_DATA;
        static constexpr intptr_t ADDR_OFFSET_INTFLAG  = SERCOM_T::ADDR_OFFSET_USART_INT_INTFLAG;
        static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = SERCOM_T::ADDR_OFFSET_USART_INT_SYNCBUSY;
#endif
#ifdef LIBREUCPP_ATSAMD
        using USART_T = SERCOM_T::CLUSTER_T::USART_T;
        using CTRLA_T = USART_T::USART_CTRLA_T;
        using CTRLB_T = USART_T::USART_CTRLB_T;
        using INTFLAG_T = USART_T::USART_INTFLAG_T;
        using DATA_T = USART_T::USART_DATA_T;
        using BAUD_T = USART_T::USART_BAUD_T;
        using SYNCBUSY_T = USART_T::USART_SYNCBUSY_T;

        static constexpr intptr_t ADDR_OFFSET_CTRLA    = SERCOM_T::ADDR_OFFSET_USART_CTRLA;
        static constexpr intptr_t ADDR_OFFSET_CTRLB    = SERCOM_T::ADDR_OFFSET_USART_CTRLB;
        static constexpr intptr_t ADDR_OFFSET_BAUD     = SERCOM_T::ADDR_OFFSET_USART_BAUD;
        static constexpr intptr_t ADDR_OFFSET_DATA     = SERCOM_T::ADDR_OFFSET_USART_DATA;
        static constexpr intptr_t ADDR_OFFSET_INTFLAG  = SERCOM_T::ADDR_OFFSET_USART_INTFLAG;
        static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = SERCOM_T::ADDR_OFFSET_USART_SYNCBUSY;
#endif

    public:
        enum class INSTANCE : unsigned char
        {
#ifdef LIBREUCPP_HAL_HAS_SERCOM0
            SERCOM0 = 0,
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM1
            SERCOM1 = 1,
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM2
            SERCOM2 = 2,
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM3
            SERCOM3 = 3,
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM4
            SERCOM4 = 4,
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM5
            SERCOM5 = 5
#endif
        };

        enum class RXPAD : unsigned char
        {
            RXPO0 = 0, // RX on PAD0
            RXPO1 = 1, // RX on PAD1
            RXPO2 = 2, // RX on PAD2
            RXPO3 = 3  // RX on PAD3
        };

        enum class TXPAD : unsigned char
        {
            TXPO0 = 0, // TX on PAD0, XCK on PAD1
            TXPO1 = 1, // TX on PAD2, XCK on PAD3
            TXPO2 = 2, // TX on PAD0, RTS on PAD2, CTS on PAD3
            TXPO3 = 3  // TX on PAD0, XCK on PAD1, RTS on PAD2
        };

    public:
        enum class PARITY : unsigned char
        {
            NONE = 0,
            EVEN = 1,
            ODD = 2,
        };

        enum class BITS : unsigned char
        {
            FIVE = 5,
            SIX = 6,
            SEVEN = 7,
            EIGHT = 0,
            NINE = 1,
        };

        enum class STOP_BITS : unsigned char
        {
            ONE = 0,
            TWO = 1,
        };

    public:
        void Setup(INSTANCE instance, GCLK::GENERATOR generator, RXPAD rxp, TXPAD txp, unsigned refclk_frequency);
        void Init(unsigned baudrate, BITS bits, PARITY parity, STOP_BITS stopBits);

        uint16_t ReadChar();
        void WriteChar(uint16_t ch);
        void WriteString(const char* data);

        ALWAYS_INLINE bool IsRxDataAvail()
        {
            return INTFLAG()->bit.RXC != 0;
        }

        ALWAYS_INLINE bool IsTxReady()
        {
            return INTFLAG()->bit.DRE != 0;
        }

        ALWAYS_INLINE bool IsTxComplete()
        {
            return INTFLAG()->bit.TXC != 0;
        }

    private:
        intptr_t _addr { 0 };
        intptr_t _addrIntFlag { 0 };
        intptr_t _addrData { 0 };
        unsigned _freq_ref { 0 };
        RXPAD _rxpad { RXPAD::RXPO0 };
        TXPAD _txpad { TXPAD::TXPO0 };
        
        ALWAYS_INLINE volatile CTRLA_T* CTRLA()
        {
            return reinterpret_cast<CTRLA_T*>(_addr + ADDR_OFFSET_CTRLA);
        }

        ALWAYS_INLINE volatile CTRLB_T* CTRLB()
        {
            return reinterpret_cast<CTRLB_T*>(_addr + ADDR_OFFSET_CTRLB);
        }

        ALWAYS_INLINE volatile BAUD_T* BAUD()
        {
            return reinterpret_cast<BAUD_T*>(_addr + ADDR_OFFSET_BAUD);
        }

        ALWAYS_INLINE volatile INTFLAG_T* INTFLAG()
        {
            return reinterpret_cast<INTFLAG_T*>(_addrIntFlag);
        }

        ALWAYS_INLINE volatile DATA_T* DATA()
        {
            return reinterpret_cast<DATA_T*>(_addrData);
        }

        ALWAYS_INLINE volatile SYNCBUSY_T* SYNCBUSY()
        {
            return reinterpret_cast<SYNCBUSY_T*>(_addr + ADDR_OFFSET_SYNCBUSY);
        }

        ALWAYS_INLINE void WaitSync()
        {
            while (SYNCBUSY()->reg);
        }

        static unsigned CalcBAUD(unsigned baudrate, unsigned freq_ref);

};

} // namespace HAL
} // namespace LibreUCpp
