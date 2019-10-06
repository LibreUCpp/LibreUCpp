namespace LibreUCpp {
namespace HAL {
namespace ClockConfigTypes {

class VALUE
{
    public:
        unsigned Value;

        explicit constexpr VALUE(unsigned value)
            : Value(value)
        {
        }
};

class FLASH_WAITSTATES : public VALUE { using VALUE::VALUE; };
class XOSC_FREQUENCY : public VALUE { using VALUE::VALUE; };
class XOSC32K_FREQUENCY : public VALUE { using VALUE::VALUE; };

class DPLL_LOOP_DIVIDER_RATIO : public VALUE { using VALUE::VALUE; };
class DPLL_LOOP_DIVIDER_RATIO_FRACT : public VALUE { using VALUE::VALUE; };
class DPLL_XOSC_CLOCK_DIVIDER : public VALUE { using VALUE::VALUE; };
class GCLK_DIVISION_FACTOR : public VALUE { using VALUE::VALUE; };

} // namespace ClockConfigTypes
} // namespace HAL
} // namespace LibreUCpp
