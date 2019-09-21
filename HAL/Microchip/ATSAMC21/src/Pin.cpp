#include <LibreUCpp/HAL/Pin.h>
#include <LibreUCpp/HAL/MCLK.h>

using namespace LibreUCpp::HAL;

void Pin::EnablePeripheral()
{
    MCLK::EnableClock(MCLK::APBB_CLOCK::PORT);
}
