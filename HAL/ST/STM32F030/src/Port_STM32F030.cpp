#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/HAL/BusClockManager.h>

using namespace LibreUCpp::HAL;
using namespace LibreUCpp::Peripherals;

Port Port::A { GPIO_T::BASE_ADDRESS_GPIOA };
Port Port::B { GPIO_T::BASE_ADDRESS_GPIOB };
Port Port::C { GPIO_T::BASE_ADDRESS_GPIOC };
Port Port::D { GPIO_T::BASE_ADDRESS_GPIOD };
Port Port::F { GPIO_T::BASE_ADDRESS_GPIOF };

void Port::EnablePeripheral()
{
    unsigned gpio_port_addr_distance = GPIO_T::BASE_ADDRESS_GPIOB - GPIO_T::BASE_ADDRESS_GPIOA;
    unsigned gpio_port_offset = static_cast<unsigned>(_addr - GPIO_T::BASE_ADDRESS_GPIOA);
    unsigned port_index = gpio_port_offset / gpio_port_addr_distance;

    auto p = static_cast<BusClockManager::Peripheral>(static_cast<unsigned>(BusClockManager::Peripheral::IOPA) + port_index);
    BusClockManager::EnableClock(p);
}
