#include <LibreUCpp/HAL/Clock.h>
#include <LibreUCpp/HAL/ClockConfig.h>
#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/HAL/Pin.h>
#include <LibreUCpp/HAL/UART.h>
#include <cstdio>

using namespace LibreUCpp::HAL;

UART uart;

extern "C" int _write(int, const void *buf, size_t count)
{
    auto b = static_cast<const uint8_t*>(buf);
    for (size_t i=0; i<count; i++)
    {
        uart.WriteChar(static_cast<uint16_t>(*b++));
    }
    return static_cast<int>(count);
}

int main()
{
    Clock clk;
    clk.Configure(ClockConfig::Get48MHzFrom16MHzCrystal());

    // TX pin Sammy C21: PB02 == SERCOM5/PAD[0]
    Pin txd { Port::B[2] };
    txd.ConfigureMultiplex(Pin::Mux::D);

    // RX pin Sammy C21: PB03 == SERCOM5/PAD[1]
    Pin rxd { Port::B[3] };
    rxd.ConfigureMultiplex(Pin::Mux::D);

    uart.Setup(
        UART::INSTANCE::SERCOM5, 
        GCLK::GENERATOR::Generator_0,
        UART::RXPAD::RXPO1, UART::TXPAD::TXPO0,
        clk
    );

    uart.Init(115200, UART::BITS::EIGHT, UART::PARITY::NONE, UART::STOP_BITS::ONE);
    iprintf("Hello, World!\n");
    while (true)
    {
        auto ch = uart.ReadChar();
        uart.WriteChar(ch);
    }
}
