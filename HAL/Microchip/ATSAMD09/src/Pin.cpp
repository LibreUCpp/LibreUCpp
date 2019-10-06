#include <LibreUCpp/HAL/Pin.h>
#include <LibreUCpp/HAL/BusClockManager.h>

using namespace LibreUCpp::HAL;

void Pin::EnablePeripheral()
{
    BusClockManager::EnableClock(BusClockManager::Peripheral::PORT);
}
