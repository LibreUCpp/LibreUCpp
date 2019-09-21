#include <LibreUCpp/HAL/Pin.h>
#include <LibreUCpp/HAL/Port.h>

using namespace LibreUCpp::HAL;

void Pin::EnablePeripheral()
{
    Port port { _addr };
    port.EnablePeripheral();
}
