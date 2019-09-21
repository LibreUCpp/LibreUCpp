#pragma once

#include <LibreUCpp/HAL/DPLL.h>
#include <LibreUCpp/HAL/XOSC.h>
#include <LibreUCpp/HAL/XOSC32K.h>
#include <LibreUCpp/HAL/GCLK.h>
#include <LibreUCpp/HAL/MCLK.h>

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

} // namespace ClockConfigTypes

struct ClockConfig
{
    public: // Types
        class FLASH_WAITSTATES : public ClockConfigTypes::VALUE { using VALUE::VALUE; };
        class XOSC_FREQUENCY : public ClockConfigTypes::VALUE { using VALUE::VALUE; };
        class XOSC32K_FREQUENCY : public ClockConfigTypes::VALUE { using VALUE::VALUE; };

        class DPLL_LOOP_DIVIDER_RATIO : public ClockConfigTypes::VALUE { using VALUE::VALUE; };
        class DPLL_LOOP_DIVIDER_RATIO_FRACT : public ClockConfigTypes::VALUE { using VALUE::VALUE; };
        class DPLL_XOSC_CLOCK_DIVIDER : public ClockConfigTypes::VALUE { using VALUE::VALUE; };
        class GCLK_DIVISION_FACTOR : public ClockConfigTypes::VALUE { using VALUE::VALUE; };

    public: // Values
        bool XoscEnable;
        XOSC_FREQUENCY XoscFrequency;
        XOSC::CRYSTAL XoscCrystal;
        XOSC::STARTUP_TIME XoscStartupTime;
        XOSC::GAIN XoscGain;
        XOSC::AUTOMATIC_AMPLITUDE_GAIN XoscAutomaticAmplitudeGain;

        bool Xosc32kEnable;
        XOSC32K_FREQUENCY Xosc32kFrequency;
        XOSC32K::CRYSTAL Xosc32kCrystal;
        XOSC32K::STARTUP_TIME Xosc32kStartupTime;

        bool DpllEnable;
        DPLL::PRESCALE DpllPrescale;
        DPLL_LOOP_DIVIDER_RATIO DpllLoopDividerRatio;
        DPLL_LOOP_DIVIDER_RATIO_FRACT DpllLoopDividerRatioFract;
        DPLL::REFCLK DpllReferenceClock;
        DPLL_XOSC_CLOCK_DIVIDER DpllXoscClockDivider;

        MCLK::CPUDIV MclkCpuDiv;
        GCLK_DIVISION_FACTOR GenClk0DivisionFactor;
        GCLK::DIV_MODE GenClk0DivisionMode;
        GCLK::CLOCK_SOURCE GenClk0Source;
        GCLK::IMPROVE_DUTY_CYCLE GenClk0ImproveDutyCycle;

        FLASH_WAITSTATES FlashWaitstates;

    public: // Factory methods
        static constexpr ClockConfig Get48MHzFrom16MHzCrystal()
        {
            return ClockConfig 
            { 
                true,
                XOSC_FREQUENCY { 16000000u },
                XOSC::CRYSTAL::XOUT_IS_CRYSTAL,
                XOSC::STARTUP_TIME::STARTUP_62500_US,
                XOSC::GAIN::MAX_16_MHZ,
                XOSC::AUTOMATIC_AMPLITUDE_GAIN::ENABLE,

                false,
                XOSC32K_FREQUENCY { 32768u },
                XOSC32K::CRYSTAL::XOUT32K_IS_GPIO,
                XOSC32K::STARTUP_TIME::STARTUP_130_MS,

                true,
                DPLL::PRESCALE::DIV1,
                DPLL_LOOP_DIVIDER_RATIO { 95 }, // 1MHz * 96
                DPLL_LOOP_DIVIDER_RATIO_FRACT { 0 },
                DPLL::REFCLK::XOSC,
                DPLL_XOSC_CLOCK_DIVIDER { 7 }, // XOSC/(2*(7+1)) : 1MHz

                MCLK::CPUDIV::DIV2,

                GCLK_DIVISION_FACTOR { 1 },
                GCLK::DIV_MODE::DIV_BY_FACTOR,
                GCLK::CLOCK_SOURCE::DPLL96M,
                GCLK::IMPROVE_DUTY_CYCLE::ENABLE,

                FLASH_WAITSTATES { 2 },
            };
        }

        static constexpr ClockConfig Get48MHzFrom32kHzCrystal()
        {
            return ClockConfig 
            { 
                false,
                XOSC_FREQUENCY { 16000000u },
                XOSC::CRYSTAL::XOUT_IS_CRYSTAL,
                XOSC::STARTUP_TIME::STARTUP_62500_US,
                XOSC::GAIN::MAX_16_MHZ,
                XOSC::AUTOMATIC_AMPLITUDE_GAIN::ENABLE,

                true,
                XOSC32K_FREQUENCY { 32768u },
                XOSC32K::CRYSTAL::XOUT32K_IS_CRYSTAL,
                XOSC32K::STARTUP_TIME::STARTUP_130_MS,

                true,
                DPLL::PRESCALE::DIV1,
                DPLL_LOOP_DIVIDER_RATIO { 2929-1 },
                DPLL_LOOP_DIVIDER_RATIO_FRACT { 11-1 },
                DPLL::REFCLK::XOSC32K,
                DPLL_XOSC_CLOCK_DIVIDER { 1 },

                MCLK::CPUDIV::DIV2,

                GCLK_DIVISION_FACTOR { 1 },
                GCLK::DIV_MODE::DIV_BY_FACTOR,
                GCLK::CLOCK_SOURCE::DPLL96M,
                GCLK::IMPROVE_DUTY_CYCLE::ENABLE,

                FLASH_WAITSTATES { 2 },
            };
        }

};

} // namespace HAL
} // namespace LibreUCpp
