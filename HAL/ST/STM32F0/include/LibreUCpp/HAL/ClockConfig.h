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
            HSE_BY_PREDIV = 1,
        };

        using PLL_PRESCALE = ClockConfigTypes::PLL_PRESCALE_MIN_1_MAX_16;
        using PLL_MULTIPLICATOR = ClockConfigTypes::PLL_MULTIPLICATOR_MIN_2_MAX_16;

        using FLASH_PREFETCH = ClockConfigTypes::FLASH_PREFETCH;
        using FLASH_WAITSTATES = ClockConfigTypes::FLASH_WAITSTATES_MIN_0_MAX_1;

    public: // Values
        static constexpr ClockConfigTypes::FREQUENCY HsiFrequency { 8000000u };

        SYSTEM_CLOCK_SOURCE ClockSource;

        HSE_FREQUENCY HseFrequency;
        HSE_OSC_BYPASS HseOscBypass;

        HCLK_PRESCALE PrescaleHCLK;
        PCLK_PRESCALE PrescalePCLK;

        PLL_SOURCE PLL_Source;
        PLL_PRESCALE PLL_Prescaler;
        PLL_MULTIPLICATOR PLL_Multiplicator;

        FLASH_PREFETCH FlashPrefetch;
        FLASH_WAITSTATES FlashWaitstates;

    public: // Factory methods
        static constexpr ClockConfig Get48MHzFrom8MHzCrystal()
        {
            return ClockConfig { 
                ClockConfig::SYSTEM_CLOCK_SOURCE::PLL,

                ClockConfig::HSE_FREQUENCY { 8000000u }, 
                ClockConfig::HSE_OSC_BYPASS::NO_BYPASS, 

                ClockConfig::HCLK_PRESCALE::NO_DIV, 
                ClockConfig::PCLK_PRESCALE::NO_DIV,

                ClockConfig::PLL_SOURCE::HSE_BY_PREDIV,
                ClockConfig::PLL_PRESCALE::DIV_BY_2, 
                ClockConfig::PLL_MULTIPLICATOR::MULT_BY_12,

                ClockConfig::FLASH_PREFETCH::ENABLE,
                ClockConfig::FLASH_WAITSTATES::ONE
            };
        }
};

} // namespace HAL
} // namespace LibreUCpp
