#include <LibreUCpp/HAL/UART.h>
#include <LibreUCpp/HAL/BusClockManager.h>

using namespace LibreUCpp::HAL;

void UART::Setup(INSTANCE instance, unsigned fclk)
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
    _addrTDR = _addr + USART_T::ADDR_OFFSET_TDR;
    _addrRDR = _addr + USART_T::ADDR_OFFSET_RDR;
    _fclk = fclk;

    BusClockManager::EnableClock(busclock);
}

void UART::Init(unsigned baudrate, BITS bits, PARITY parity, STOP_BITS stopBits)
{
    using CR1_T = USART_T::CR1_T;
    using CR2_T = USART_T::CR2_T;

    GetPeriph()->CR1.bit.UE = 0;
    GetPeriph()->BRR.reg = _fclk / baudrate;
    GetPeriph()->CR2.reg
        = CR2_T::STOP(static_cast<unsigned>(stopBits));
    GetPeriph()->CR1.reg 
        = CR1_T::M1(static_cast<unsigned>(bits) >> 1)
        | CR1_T::M(static_cast<unsigned>(bits) & 0x01)
        | CR1_T::PCE(static_cast<unsigned>(parity)>>1)
        | CR1_T::PS(static_cast<unsigned>(parity) & 0x01)
        | CR1_T::TE_MASK | CR1_T::RE_MASK;
    GetPeriph()->CR1.bit.UE = 1;
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
