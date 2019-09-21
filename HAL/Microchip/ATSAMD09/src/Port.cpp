#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/Peripherals/PORT.h>

namespace LibreUCpp {
namespace HAL {

// TODO maybe use CPU local bus (IOBUS) for DIR/IN/OUT registers
Port Port::A { Peripherals::PORT_T::BASE_ADDRESS_PORT };

} // namespace HAL
} // namespace LibreUCpp
