#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/HAL/Pin.h>
#include <LibreUCpp/HAL/Clock.h>
#include <LibreUCpp/HAL/ClockConfig.h>
#include <LibreUCpp/HAL/Systick.h>

using namespace LibreUCpp::HAL;

volatile uint32_t TIME = 0;

extern "C" {
    void SysTick_Handler()
    {
        TIME++;
    }
}

int main()
{
    Clock clk;
#ifdef STM32F0308DISCOVERY
    clk.Configure(ClockConfig::Get48MHzFrom8MHzCrystal());
    Pin led { Port::C[9] };
#endif
#ifdef STM32F4DISCOVERY
    clk.Configure(ClockConfig::Get168MHzFrom8MHzCrystal());
    Pin led { Port::D[12] };
#endif
#ifdef SAMMY_C21
    clk.Configure(ClockConfig::Get48MHzFrom16MHzCrystal());
    Pin led { Port::A[28] };
#endif
#ifdef ADAFRUIT_ATSAMD09_BREAKOUT
    clk.Configure48MHzFromOSC8M();
    Pin led { Port::A[27] };
#endif

    Systick::SetFrequency(clk, 1000);
    Systick::EnableInterrupt();
    Systick::Enable();

    led.EnablePeripheral();
    led.SetDirection(Pin::Direction::OUTPUT);

    while (true)
    {
        led.Write(TIME%1000 < 500);
    }
}
