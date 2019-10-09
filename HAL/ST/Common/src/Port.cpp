#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/HAL/BusClockManager.h>

using namespace LibreUCpp::HAL;
using namespace LibreUCpp::Peripherals;

#ifdef LIBREUCPP_HAL_HAS_GPIOA
Port Port::A { GPIO_T::BASE_ADDRESS_GPIOA };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOB
Port Port::B { GPIO_T::BASE_ADDRESS_GPIOB };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOC
Port Port::C { GPIO_T::BASE_ADDRESS_GPIOC };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOD
Port Port::D { GPIO_T::BASE_ADDRESS_GPIOD };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOE
Port Port::E { GPIO_T::BASE_ADDRESS_GPIOE };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOF
Port Port::F { GPIO_T::BASE_ADDRESS_GPIOF };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOG
Port Port::G { GPIO_T::BASE_ADDRESS_GPIOG };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOH
Port Port::H { GPIO_T::BASE_ADDRESS_GPIOH };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOI
Port Port::I { GPIO_T::BASE_ADDRESS_GPIOI };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOJ
Port Port::J { GPIO_T::BASE_ADDRESS_GPIOJ };
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOK
Port Port::K { GPIO_T::BASE_ADDRESS_GPIOK };
#endif

void Port::EnablePeripheral()
{
    using namespace Peripherals;

    constexpr unsigned gpio_port_addr_distance = GPIO_T::BASE_ADDRESS_GPIOB - GPIO_T::BASE_ADDRESS_GPIOA;    
#ifdef LIBREUCPP_HAL_HAS_GPIOC
    static_assert((GPIO_T::BASE_ADDRESS_GPIOC - GPIO_T::BASE_ADDRESS_GPIOA) == 2 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOD
    static_assert((GPIO_T::BASE_ADDRESS_GPIOD - GPIO_T::BASE_ADDRESS_GPIOA) == 3 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOE
    static_assert((GPIO_T::BASE_ADDRESS_GPIOE - GPIO_T::BASE_ADDRESS_GPIOA) == 4 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOF
    static_assert((GPIO_T::BASE_ADDRESS_GPIOF - GPIO_T::BASE_ADDRESS_GPIOA) == 5 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOG
    static_assert((GPIO_T::BASE_ADDRESS_GPIOG - GPIO_T::BASE_ADDRESS_GPIOA) == 6 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOH
    static_assert((GPIO_T::BASE_ADDRESS_GPIOH - GPIO_T::BASE_ADDRESS_GPIOA) == 7 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOI
    static_assert((GPIO_T::BASE_ADDRESS_GPIOI - GPIO_T::BASE_ADDRESS_GPIOA) == 8 * gpio_port_addr_distance, "gpio memory map does not meet expectations");
#endif

    constexpr unsigned peripheral_id_a = static_cast<unsigned>(BusClockManager::Peripheral::GPIOA);
#ifdef LIBREUCPP_HAL_HAS_GPIOB
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOB) == peripheral_id_a + 1, "unexpected peripheral id for GPIOB");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOC
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOC) == peripheral_id_a + 2, "unexpected peripheral id for GPIOC");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOD
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOD) == peripheral_id_a + 3, "unexpected peripheral id for GPIOD");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOE
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOE) == peripheral_id_a + 4, "unexpected peripheral id for GPIOE");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOF
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOF) == peripheral_id_a + 5, "unexpected peripheral id for GPIOF");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOG
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOG) == peripheral_id_a + 6, "unexpected peripheral id for GPIOG");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOH
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOH) == peripheral_id_a + 7, "unexpected peripheral id for GPIOH");
#endif
#ifdef LIBREUCPP_HAL_HAS_GPIOI
    static_assert(static_cast<unsigned>(BusClockManager::Peripheral::GPIOI) == peripheral_id_a + 8, "unexpected peripheral id for GPIOI");
#endif

    unsigned gpio_port_offset = static_cast<unsigned>(_addr - GPIO_T::BASE_ADDRESS_GPIOA);
    unsigned port_index = gpio_port_offset / gpio_port_addr_distance;

    auto p = static_cast<BusClockManager::Peripheral>(static_cast<unsigned>(BusClockManager::Peripheral::GPIOA) + port_index);
    BusClockManager::EnableClock(p);
}
