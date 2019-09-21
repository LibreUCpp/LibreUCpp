#include <LibreUCpp/HAL/Clock.h>
#include <LibreUCpp/HAL/ClockConfig.h>
#include <cstdio>

using namespace LibreUCpp::HAL;

int main()
{
    Clock clk;
#ifdef STM32F0308DISCOVERY
    clk.Configure(ClockConfig::Get48MHzFrom8MHzCrystal());
#endif
#ifdef STM32F4DISCOVERY
    clk.Configure(ClockConfig::Get168MHzFrom8MHzCrystal());
#endif
#ifdef SAMMY_C21
    clk.Configure(ClockConfig::Get48MHzFrom16MHzCrystal());
#endif

    printf("Hello World via Semihosting!\n");
    while (true) {};
}
