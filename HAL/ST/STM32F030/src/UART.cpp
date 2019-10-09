#include <LibreUCpp/HAL/UART.h>
#include <LibreUCpp/HAL/BusClockManager.h>

using namespace LibreUCpp::HAL;

void UART::Setup(INSTANCE instance)
{
    BusClockManager::Peripheral busclock;

    switch (instance)
    {
#ifdef LIBREUCPP_HAL_HAS_USART0
        case INSTANCE::USART0:
            _addr = USART_T::BASE_ADDRESS_USART0;
            busclock = BusClockManager::Peripheral::USART0;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_USART1
        case INSTANCE::USART1:
            _addr = USART_T::BASE_ADDRESS_USART1;
            busclock = BusClockManager::Peripheral::USART1;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_USART2
        case INSTANCE::USART2:
            _addr = USART_T::BASE_ADDRESS_USART2;
            busclock = BusClockManager::Peripheral::USART2;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_USART3
        case INSTANCE::USART3:
            _addr = USART_T::BASE_ADDRESS_USART3;
            busclock = BusClockManager::Peripheral::USART3;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_USART4
        case INSTANCE::USART4:
            _addr = USART_T::BASE_ADDRESS_USART4;
            busclock = BusClockManager::Peripheral::USART4;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_USART5
        case INSTANCE::USART5:
            _addr = USART_T::BASE_ADDRESS_USART5;
            busclock = BusClockManager::Peripheral::USART5;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_USART6
        case INSTANCE::USART6:
            _addr = USART_T::BASE_ADDRESS_USART6;
            busclock = BusClockManager::Peripheral::USART6;
            break;
#endif
        default:
            abort();
    }

    _addrISR = _addr + USART_T::ADDR_OFFSET_ISR;

    BusClockManager::EnableClock(busclock);
}

void UART::Init(unsigned baudrate, BITS bits, PARITY parity, STOP_BITS stopBits)
{
    // FIXME implement me
    (void) baudrate;
    (void) bits;
    (void) parity;
    (void) stopBits;
}

uint16_t UART::ReadChar()
{
    while (!IsRxDataAvail());
    return static_cast<uint16_t>(RDR()->reg);
}

void UART::WriteChar(uint16_t ch)
{
    while (!IsTxReady());
    TDR()->reg = ch;
}

void UART::WriteString(const char* data)
{
    while (*data != 0)
    {
        WriteChar(*data++);
    }
}
