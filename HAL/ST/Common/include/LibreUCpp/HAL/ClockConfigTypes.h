#pragma once

namespace LibreUCpp { 
namespace HAL {
namespace ClockConfigTypes {

enum class SYSTEM_CLOCK_SOURCE : unsigned
{
    HSI = 0,
    HSE = 1,
    PLL = 2
};

class VALUE
{
    public:
        unsigned Value;

        explicit constexpr VALUE(unsigned value)
            : Value(value)
        {
        }
};

class FREQUENCY : public VALUE { using VALUE::VALUE; };

enum class HSE_OSC_BYPASS : unsigned
{
    NO_BYPASS = 0,
    BYPASS = 1
};

enum class HCLK_PRESCALE : unsigned
{
    NO_DIV = 0,
    DIV_BY_2 = 0b1000,
    DIV_BY_4 = 0b1001,
    DIV_BY_8 = 0b1010,
    DIV_BY_16 = 0b1011,
    DIV_BY_64 = 0b1100,
    DIV_BY_128 = 0b1101,
    DIV_BY_256 = 0b1110,
    DIV_BY_512 = 0b1111
};

enum class PCLK_PRESCALE : unsigned
{
    NO_DIV = 0,
    DIV_BY_2 = 0b100,
    DIV_BY_4 = 0b101,
    DIV_BY_8 = 0b110,
    DIV_BY_16 = 0b111,
};

enum class PLL_PRESCALE_MIN_1_MAX_16 : unsigned
{
    NO_DIV = 0b0000,
    DIV_BY_2 = 0b0001,
    DIV_BY_3 = 0b0010,
    DIV_BY_4 = 0b0011,
    DIV_BY_5 = 0b0100,
    DIV_BY_6 = 0b0101,
    DIV_BY_7 = 0b0110,
    DIV_BY_8 = 0b0111,
    DIV_BY_9 = 0b1000,
    DIV_BY_10 = 0b1001,
    DIV_BY_11 = 0b1010,
    DIV_BY_12 = 0b1011,
    DIV_BY_13 = 0b1100,
    DIV_BY_14 = 0b1101,
    DIV_BY_15 = 0b1110,
    DIV_BY_16 = 0b1111,
};

enum class PLL_MULTIPLICATOR_MIN_2_MAX_16 : unsigned
{
    MULT_BY_2 = 0b0000,
    MULT_BY_3 = 0b0001,
    MULT_BY_4 = 0b0010,
    MULT_BY_5 = 0b0011,
    MULT_BY_6 = 0b0100,
    MULT_BY_7 = 0b0101,
    MULT_BY_8 = 0b0110,
    MULT_BY_9 = 0b0111,
    MULT_BY_10 = 0b1000,
    MULT_BY_11 = 0b1001,
    MULT_BY_12 = 0b1010,
    MULT_BY_13 = 0b1011,
    MULT_BY_14 = 0b1100,
    MULT_BY_15 = 0b1101,
    MULT_BY_16 = 0b1110,
};

enum class FLASH_PREFETCH : unsigned
{
    DISABLE = 0,
    ENABLE = 1,
};

enum class FLASH_ICACHE : unsigned
{
    DISABLE = 0,
    ENABLE = 1,
};

enum class FLASH_DCACHE : unsigned
{
    DISABLE = 0,
    ENABLE = 1,
};

enum class FLASH_WAITSTATES_MIN_0_MAX_1 : unsigned
{
    ZERO = 0,
    ONE = 1,
};

enum class FLASH_WAITSTATES_MIN_0_MAX_2 : unsigned
{
    ZERO = 0,
    ONE = 1,
    TWO = 2,
};

} // namespace ClockConfigTypes
} // namespace HAL
} // namespace LibreUCpp
