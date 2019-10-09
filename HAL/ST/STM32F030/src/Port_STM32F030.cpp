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
    constexpr unsigned gpio_port_addr_distance = GPIO_T::BASE_ADDRESS_GPIOB - GPIO_T::BASE_ADDRESS_GPIOA;    
    static_assert((GPIO_T::BASE_ADDRESS_GPIOC - GPIO_T::BASE_ADDRESS_GPIOA) == 2 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOD - GPIO_T::BASE_ADDRESS_GPIOA) == 3 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOF - GPIO_T::BASE_ADDRESS_GPIOA) == 5 * gpio_port_addr_distance, "gpio memory map does not meet expectations");

    constexpr unsigned peripheral_id_a = static_cast<unsigned>(BusClockManager::Peripheral::GPIOA);
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOB) == peripheral_id_a + 1, "unexpected peripheral id for GPIOB");
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOC) == peripheral_id_a + 2, "unexpected peripheral id for GPIOC");
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOD) == peripheral_id_a + 3, "unexpected peripheral id for GPIOD");
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOF) == peripheral_id_a + 5, "unexpected peripheral id for GPIOF");

    unsigned gpio_port_offset = static_cast<unsigned>(_addr - GPIO_T::BASE_ADDRESS_GPIOA);
    unsigned port_index = gpio_port_offset / gpio_port_addr_distance;

    auto p = static_cast<BusClockManager::Peripheral>(static_cast<unsigned>(BusClockManager::Peripheral::GPIOA) + port_index);
    BusClockManager::EnableClock(p);
}
