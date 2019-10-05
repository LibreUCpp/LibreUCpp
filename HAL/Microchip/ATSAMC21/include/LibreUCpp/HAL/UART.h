#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/SERCOM.h>
#include <LibreUCpp/HAL/GCLK.h>
#include <LibreUCpp/HAL/Clock.h>

namespace LibreUCpp {
namespace HAL {

class UART
{
    private:
        using SERCOM_T = Peripherals::SERCOM_T;
        using USART_INT_T = SERCOM_T::CLUSTER_T::USART_INT_T;
        using CTRLA_T = USART_INT_T::USART_INT_CTRLA_T;
        using CTRLB_T = USART_INT_T::USART_INT_CTRLB_T;
        using INTFLAG_T = SERCOM_T::CLUSTER_T::USART_INT_T::USART_INT_INTFLAG_T;
        using DATA_T = SERCOM_T::CLUSTER_T::USART_INT_T::USART_INT_DATA_T;
        using BAUD_T = SERCOM_T::CLUSTER_T::USART_INT_T::USART_INT_BAUD_T;

    public:
        enum class INSTANCE : unsigned char
        {
            SERCOM0 = 0,
            SERCOM1 = 1,
            SERCOM2 = 2,
            SERCOM3 = 3,
            SERCOM4 = 4,
            SERCOM5 = 5
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
        void Setup(INSTANCE instance, GCLK::GENERATOR generator, RXPAD rxp, TXPAD txp, const Clock& clk);
        void Init(unsigned baudrate, BITS bits, PARITY parity, STOP_BITS stopBits);
        void WriteChar(uint16_t ch);
        uint16_t ReadChar();

        ALWAYS_INLINE bool IsRxDataAvail()
        {
            return INTFLAG()->bit.RXC != 0;
        }

        ALWAYS_INLINE bool IsTxComplete()
        {
            return INTFLAG()->bit.TXC != 0;
        }

    private:
        intptr_t _addr { 0 };
        unsigned _freq_ref { 0 };
        RXPAD _rxpad;
        TXPAD _txpad;
        
        ALWAYS_INLINE SERCOM_T* GetPeriph() 
        {
            return reinterpret_cast<Peripherals::SERCOM_T*>(_addr);
        }

        ALWAYS_INLINE volatile CTRLA_T* CTRLA()
        {
            return reinterpret_cast<CTRLA_T*>(_addr + SERCOM_T::ADDR_OFFSET_USART_INT_CTRLA);
        }

        ALWAYS_INLINE volatile CTRLB_T* CTRLB()
        {
            return reinterpret_cast<CTRLB_T*>(_addr + SERCOM_T::ADDR_OFFSET_USART_INT_CTRLB);
        }

        ALWAYS_INLINE volatile INTFLAG_T* INTFLAG()
        {
            return reinterpret_cast<INTFLAG_T*>(_addr + SERCOM_T::ADDR_OFFSET_USART_INT_INTFLAG);
        }

        ALWAYS_INLINE volatile DATA_T* DATA()
        {
            return reinterpret_cast<DATA_T*>(_addr + SERCOM_T::ADDR_OFFSET_USART_INT_DATA);
        }

        ALWAYS_INLINE volatile BAUD_T* BAUD()
        {
            return reinterpret_cast<BAUD_T*>(_addr + SERCOM_T::ADDR_OFFSET_USART_INT_BAUD);
        }

        ALWAYS_INLINE void WaitSync()
        {
            while (GetPeriph()->CLUSTER.USART_INT.USART_INT_SYNCBUSY.reg);
        }

        static unsigned CalcBAUD(unsigned baudrate, unsigned freq_ref);

};

} // namespace HAL
} // namespace LibreUCpp
