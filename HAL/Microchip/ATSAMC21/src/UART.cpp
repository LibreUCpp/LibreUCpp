#include <LibreUCpp/HAL/UART.h>
#include <LibreUCpp/HAL/GCLK.h>
#include <LibreUCpp/HAL/MCLK.h>
#include <LibreUCpp/HAL/Clock.h>
#include <stdlib.h>

using namespace LibreUCpp::HAL;

void UART::Setup(INSTANCE instance, GCLK::GENERATOR generator, RXPAD rxp, TXPAD txp, const Clock& clk)
{
    MCLK::APBC_CLOCK apbclk;
    GCLK::PERIPHERAL_CHANNEL pch;

    switch (instance)
    {
        case INSTANCE::SERCOM0:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM0;
            apbclk = MCLK::APBC_CLOCK::SERCOM0;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM0_CORE;
            break;
        case INSTANCE::SERCOM1:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM1;
            apbclk = MCLK::APBC_CLOCK::SERCOM1;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM1_CORE;
            break;
        case INSTANCE::SERCOM2:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM2;
            apbclk = MCLK::APBC_CLOCK::SERCOM2;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM2_CORE;
            break;
        case INSTANCE::SERCOM3:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM3;
            apbclk = MCLK::APBC_CLOCK::SERCOM3;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM3_CORE;
            break;
        case INSTANCE::SERCOM4:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM4;
            apbclk = MCLK::APBC_CLOCK::SERCOM4;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM4_CORE;
            break;
        case INSTANCE::SERCOM5:
            _addr = SERCOM_T::BASE_ADDRESS_SERCOM5;
            apbclk = MCLK::APBC_CLOCK::SERCOM5;
            pch = GCLK::PERIPHERAL_CHANNEL::SERCOM5_CORE;
            break;
        default:
            abort();
    }

    MCLK::EnableClock(apbclk);
    GCLK::EnablePeripheral(pch, generator);

    _freq_ref = GCLK::CalcFrequency(generator, clk.GetXosc32kFrequency(), clk.GetXoscFrequency());
    _rxpad = rxp;
    _txpad = txp;
}

void UART::Init(unsigned baudrate, BITS bits, PARITY parity, STOP_BITS stopBits)
{
    CTRLA()->reg 
        = CTRLA_T::MODE(1) // internal clock
        | CTRLA_T::CMODE(0) // internal clock
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

void UART::WriteChar(uint16_t ch)
{
    DATA()->reg = ch;
    while (!IsTxComplete());
}

uint16_t UART::ReadChar()
{
    while (!IsRxDataAvail());
    return static_cast<uint16_t>(DATA()->reg);
}
