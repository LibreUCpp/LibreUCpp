#include <LibreUCpp/HAL/Port.h>

using namespace LibreUCpp::HAL;
using namespace LibreUCpp::Peripherals;

Port Port::A { GPIO_T::BASE_ADDRESS_GPIOA };
Port Port::B { GPIO_T::BASE_ADDRESS_GPIOB };
Port Port::C { GPIO_T::BASE_ADDRESS_GPIOC };
Port Port::D { GPIO_T::BASE_ADDRESS_GPIOD };
Port Port::E { GPIO_T::BASE_ADDRESS_GPIOE };
Port Port::F { GPIO_T::BASE_ADDRESS_GPIOF };
Port Port::G { GPIO_T::BASE_ADDRESS_GPIOG };
Port Port::H { GPIO_T::BASE_ADDRESS_GPIOH };
Port Port::I { GPIO_T::BASE_ADDRESS_GPIOI };
Port Port::J { GPIO_T::BASE_ADDRESS_GPIOJ };
Port Port::K { GPIO_T::BASE_ADDRESS_GPIOK };

void Port::EnablePeripheral()
{
    using namespace Peripherals;

    static constexpr intptr_t GPIO_MEM_SIZE = 0x400;

    static_assert((GPIO_T::BASE_ADDRESS_GPIOB - GPIO_T::BASE_ADDRESS_GPIOA) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOC - GPIO_T::BASE_ADDRESS_GPIOB) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOD - GPIO_T::BASE_ADDRESS_GPIOC) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOE - GPIO_T::BASE_ADDRESS_GPIOD) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOF - GPIO_T::BASE_ADDRESS_GPIOE) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOG - GPIO_T::BASE_ADDRESS_GPIOF) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOH - GPIO_T::BASE_ADDRESS_GPIOG) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");
    static_assert((GPIO_T::BASE_ADDRESS_GPIOI - GPIO_T::BASE_ADDRESS_GPIOH) == GPIO_MEM_SIZE, "gpio memory map does not meet expectations");

    const int bitIndex = (_addr - GPIO_T::BASE_ADDRESS_GPIOA) / GPIO_MEM_SIZE;
    auto rcc = reinterpret_cast<RCC_T*>(RCC_T::BASE_ADDRESS);
    rcc->AHB1ENR.reg |= (1u<<bitIndex);
}
