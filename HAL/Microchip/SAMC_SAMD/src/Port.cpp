#include <LibreUCpp/HAL/Port.h>
#include <LibreUCpp/Peripherals/PORT.h>

namespace LibreUCpp {
namespace HAL {

#ifdef LIBREUCPP_ATSAMD
// TODO maybe use CPU local bus (IOBUS) for DIR/IN/OUT registers
Port Port::A { Peripherals::PORT_T::BASE_ADDRESS_PORT };
#else
#ifdef LIBREUCPP_HAL_HAS_PORTA
Port Port::A { Peripherals::PORT_T::BASE_ADDRESS_PORT_0 };
#endif
#ifdef LIBREUCPP_HAL_HAS_PORTB
Port Port::B { Peripherals::PORT_T::BASE_ADDRESS_PORT_1 };
#endif
#ifdef LIBREUCPP_HAL_HAS_PORTC
Port Port::C { Peripherals::PORT_T::BASE_ADDRESS_PORT_2 };
#endif

#endif
} // namespace HAL
} // namespace LibreUCpp
