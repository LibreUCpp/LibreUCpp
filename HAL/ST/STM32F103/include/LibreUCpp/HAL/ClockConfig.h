#pragma once

#include <LibreUCpp/HAL/ClockConfigTypes.h>

namespace LibreUCpp { 
namespace HAL {

struct ClockConfig
{
    public: // Types
        using SYSTEM_CLOCK_SOURCE = ClockConfigTypes::SYSTEM_CLOCK_SOURCE;
        using HSE_FREQUENCY = ClockConfigTypes::FREQUENCY;
        using HSE_OSC_BYPASS = ClockConfigTypes::HSE_OSC_BYPASS;
        using HCLK_PRESCALE = ClockConfigTypes::HCLK_PRESCALE;
        using PCLK_PRESCALE = ClockConfigTypes::PCLK_PRESCALE;

        enum class PLL_SOURCE : unsigned
        {
            HSI_BY_2 = 0,
            HSE = 1,
        };

        enum class PLL_PRESCALE_HSE : unsigned
        {
            NO_DIV = 0,
            DIV_BY_2 = 1
        };

        using PLL_MULTIPLICATOR = ClockConfigTypes::PLL_MULTIPLICATOR_MIN_2_MAX_16;
        using FLASH_PREFETCH = ClockConfigTypes::FLASH_PREFETCH;
        using FLASH_WAITSTATES = ClockConfigTypes::FLASH_WAITSTATES_MIN_0_MAX_2;

    public: // Values
        static constexpr ClockConfigTypes::FREQUENCY HsiFrequency { 8000000u };

        SYSTEM_CLOCK_SOURCE ClockSource;

        HSE_FREQUENCY HseFrequency;
        HSE_OSC_BYPASS HseOscBypass;

        HCLK_PRESCALE PrescaleHCLK;
        PCLK_PRESCALE PrescalePCLK1;
        PCLK_PRESCALE PrescalePCLK2;

        PLL_SOURCE PLL_Source;
        PLL_PRESCALE_HSE PLL_PrescaleHSE;
        PLL_MULTIPLICATOR PLL_Multiplicator;

        FLASH_PREFETCH FlashPrefetch;
        FLASH_WAITSTATES FlashWaitstates;

    public: // Factory methods
        static constexpr ClockConfig Get72MHzFrom8MHzCrystal()
        {
            return ClockConfig { 
                SYSTEM_CLOCK_SOURCE::PLL,

                HSE_FREQUENCY(8000000u),
                HSE_OSC_BYPASS::NO_BYPASS, 

                HCLK_PRESCALE::NO_DIV, 
                PCLK_PRESCALE::DIV_BY_2,
                PCLK_PRESCALE::NO_DIV,

                PLL_SOURCE::HSE,
                PLL_PRESCALE_HSE::DIV_BY_2, 
                PLL_MULTIPLICATOR::MULT_BY_12,

                FLASH_PREFETCH::ENABLE,
                FLASH_WAITSTATES::TWO
            };
        }

};

} // namespace HAL
} // namespace LibreUCpp
