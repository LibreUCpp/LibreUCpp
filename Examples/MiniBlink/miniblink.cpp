#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/HAL/Pin.h>

using namespace LibreUCpp::HAL;

int main()
{
#ifdef STM32F0308DISCOVERY
    Pin led { Port::C[9] };
#endif
#ifdef STM32F4DISCOVERY
    Pin led { Port::D[12] };
#endif
#ifdef SAMMY_C21
    Pin led { Port::A[28] };
#endif

    led.EnablePeripheral();
    led.SetDirection(Pin::Direction::OUTPUT);

    while (true)
    {
        led.Toggle();
        for (int i=0; i<1000000; i++) { asm("nop"); }
    }
}
