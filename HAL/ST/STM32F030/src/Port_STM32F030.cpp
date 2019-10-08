#include <LibreUCpp/HAL/Port.h>

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

    auto rcc = reinterpret_cast<RCC_T*>(RCC_T::BASE_ADDRESS);
    rcc->AHBENR.reg |= 1u<<(RCC_T::AHBENR_T::IOPAEN_POS + port_index);
}
