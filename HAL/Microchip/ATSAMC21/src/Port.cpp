#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/Peripherals/PORT.h>

namespace LibreUCpp {
namespace HAL {

Port Port::A { Peripherals::PORT_T::BASE_ADDRESS_PORT_0 };
Port Port::B { Peripherals::PORT_T::BASE_ADDRESS_PORT_1 };
Port Port::C { Peripherals::PORT_T::BASE_ADDRESS_PORT_2 };

} // namespace HAL
} // namespace LibreUCpp
