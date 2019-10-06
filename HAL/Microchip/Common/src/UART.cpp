#include <LibreUCpp/HAL/UART.h>
#include <LibreUCpp/HAL/GCLK.h>
#include <LibreUCpp/HAL/BusClockManager.h>
#include <LibreUCpp/HAL/Clock.h>
#include <stdlib.h>

using namespace LibreUCpp::HAL;

void UART::Setup(INSTANCE instance, GCLK::GENERATOR generator, RXPAD rxp, TXPAD txp, const Clock& clk)
{
    BusClockManager::Peripheral busclock;
    GCLK::PERIPHERAL_CHANNEL pch;

    switch (instance)
    {
#ifdef LIBREUCPP_HAL_HAS_SERCOM0
        case INSTANCE::SERCOM0:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM0;
            busclock = BusClockManager::Peripheral::SERCOM0;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM0_CORE;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM1
        case INSTANCE::SERCOM1:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM1;
            busclock = BusClockManager::Peripheral::SERCOM1;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM1_CORE;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM2
        case INSTANCE::SERCOM2:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM2;
            busclock = BusClockManager::Peripheral::SERCOM2;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM2_CORE;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM3
        case INSTANCE::SERCOM3:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM3;
            busclock = BusClockManager::Peripheral::SERCOM3;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM3_CORE;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM4
        case INSTANCE::SERCOM4:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM4;
            busclock = BusClockManager::Peripheral::SERCOM4;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM4_CORE;
            break;
#endif
#ifdef LIBREUCPP_HAL_HAS_SERCOM5
        case INSTANCE::SERCOM5:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM5;
            busclock = BusClockManager::Peripheral::SERCOM5;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM5_CORE;
            break;
#endif
        default:
            abort();
    }

    BusClockManager::EnableClock(busclock);
    GCLK::EnablePeripheral(pch, generator);

    _addrIntFlag = _addr + ADDR_OFFSET_INTFLAG;
    _addrData = _addr + ADDR_OFFSET_DATA;
    _freq_ref = GCLK::CalcFrequency(generator, clk.GetXosc32kFrequency(), clk.GetXoscFrequency());
    _rxpad = rxp;
    _txpad = txp;
}

void UART::Init(unsigned baudrate, BITS bits, PARITY parity, STOP_BITS stopBits)
{
    CTRLA()->reg 
        = CTRLA_T::MODE(1) // internal clock
        | CTRLA_T::CMODE(0) // async communication
        | CTRLA_T::DORD(1) // LSB first
        | CTRLA_T::RXPO(static_cast<unsigned>(_rxpad))
        | CTRLA_T::TXPO(static_cast<unsigned>(_txpad));

    switch (parity)
    {
        case PARITY::EVEN:
            CTRLA()->bit.FORM = 1; // USART frame with parity
            CTRLB()->bit.PMODE = 0; // Even parity.
            break;
        case PARITY::ODD:
            CTRLA()->bit.FORM = 1; // USART frame with parity
            CTRLB()->bit.PMODE = 1; // Odd parity.
            break;
        default:
            break;
    }

    CTRLB()->reg 
        = CTRLB_T::CHSIZE(static_cast<unsigned>(bits))
        | CTRLB_T::SBMODE(static_cast<unsigned>(stopBits))
        | CTRLB_T::RXEN_MASK | CTRLB_T::TXEN_MASK;

    BAUD()->reg = CalcBAUD(baudrate, _freq_ref);

    WaitSync();

    CTRLA()->bit.ENABLE = 1;

    WaitSync();
}

unsigned UART::CalcBAUD(unsigned baudrate, unsigned refFrequency)
{
    while (baudrate >= 65536) // prevent int overflows
    {
        baudrate /= 2;
        refFrequency /= 2;
    }
    return 65536 - ((65536*baudrate) / (refFrequency/16));
}

uint16_t UART::ReadChar()
{
    while (!IsRxDataAvail());
    return static_cast<uint16_t>(DATA()->reg);
}

void UART::WriteChar(uint16_t ch)
{
    DATA()->reg = ch;
    while (!IsTxComplete());
}

void UART::WriteString(const char* data)
{
    while (*data != 0)
    {
        WriteChar(*data++);
    }
}
