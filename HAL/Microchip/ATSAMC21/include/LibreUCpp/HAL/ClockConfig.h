#pragma once

#include <LibreUCpp/HAL/DPLL.h>
#include <LibreUCpp/HAL/XOSC.h>
#include <LibreUCpp/HAL/XOSC32K.h>
#include <LibreUCpp/HAL/GCLK.h>
#include <LibreUCpp/HAL/MCLK.h>
#include <LibreUCpp/HAL/ClockConfigTypes.h>

namespace LibreUCpp {
namespace HAL {

struct ClockConfig
{
    public: // Values
        bool XoscEnable;
        ClockConfigTypes::XOSC_FREQUENCY XoscFrequency;
        XOSC::CRYSTAL XoscCrystal;
        XOSC::STARTUP_TIME XoscStartupTime;
        XOSC::GAIN XoscGain;
        XOSC::AUTOMATIC_AMPLITUDE_GAIN XoscAutomaticAmplitudeGain;

        bool Xosc32kEnable;
        ClockConfigTypes::XOSC32K_FREQUENCY Xosc32kFrequency;
        XOSC32K::CRYSTAL Xosc32kCrystal;
        XOSC32K::STARTUP_TIME Xosc32kStartupTime;

        bool DpllEnable;
        DPLL::PRESCALE DpllPrescale;
        ClockConfigTypes::DPLL_LOOP_DIVIDER_RATIO DpllLoopDividerRatio;
        ClockConfigTypes::DPLL_LOOP_DIVIDER_RATIO_FRACT DpllLoopDividerRatioFract;
        DPLL::REFCLK DpllReferenceClock;
        ClockConfigTypes::DPLL_XOSC_CLOCK_DIVIDER DpllXoscClockDivider;

        MCLK::CPUDIV MclkCpuDiv;
        ClockConfigTypes::GCLK_DIVISION_FACTOR GenClk0DivisionFactor;
        GCLK::DIV_MODE GenClk0DivisionMode;
        GCLK::CLOCK_SOURCE GenClk0Source;
        GCLK::IMPROVE_DUTY_CYCLE GenClk0ImproveDutyCycle;

        ClockConfigTypes::FLASH_WAITSTATES FlashWaitstates;

    public: // Factory methods
        static constexpr ClockConfig Get48MHzFrom16MHzCrystal()
        {
            return ClockConfig 
            { 
                true,
                ClockConfigTypes::XOSC_FREQUENCY { 16000000u },
                XOSC::CRYSTAL::XOUT_IS_CRYSTAL,
                XOSC::STARTUP_TIME::STARTUP_62500_US,
                XOSC::GAIN::MAX_16_MHZ,
                XOSC::AUTOMATIC_AMPLITUDE_GAIN::ENABLE,

                false,
                ClockConfigTypes::XOSC32K_FREQUENCY { 32768u },
                XOSC32K::CRYSTAL::XOUT32K_IS_GPIO,
                XOSC32K::STARTUP_TIME::STARTUP_130_MS,

                true,
                DPLL::PRESCALE::DIV1,
                ClockConfigTypes::DPLL_LOOP_DIVIDER_RATIO { 95 }, // 1MHz * 96
                ClockConfigTypes::DPLL_LOOP_DIVIDER_RATIO_FRACT { 0 },
                DPLL::REFCLK::XOSC,
                ClockConfigTypes::DPLL_XOSC_CLOCK_DIVIDER { 7 }, // XOSC/(2*(7+1)) : 1MHz

                MCLK::CPUDIV::DIV1,

                ClockConfigTypes::GCLK_DIVISION_FACTOR { 2 },
                GCLK::DIV_MODE::DIV_BY_FACTOR,
                GCLK::CLOCK_SOURCE::DPLL96M,
                GCLK::IMPROVE_DUTY_CYCLE::ENABLE,

                ClockConfigTypes::FLASH_WAITSTATES { 2 },
            };
        }

        static constexpr ClockConfig Get48MHzFrom32kHzCrystal()
        {
            return ClockConfig 
            { 
                false,
                ClockConfigTypes::XOSC_FREQUENCY { 16000000u },
                XOSC::CRYSTAL::XOUT_IS_CRYSTAL,
                XOSC::STARTUP_TIME::STARTUP_62500_US,
                XOSC::GAIN::MAX_16_MHZ,
                XOSC::AUTOMATIC_AMPLITUDE_GAIN::ENABLE,

                true,
                ClockConfigTypes::XOSC32K_FREQUENCY { 32768u },
                XOSC32K::CRYSTAL::XOUT32K_IS_CRYSTAL,
                XOSC32K::STARTUP_TIME::STARTUP_130_MS,

                true,
                DPLL::PRESCALE::DIV1,
                ClockConfigTypes::DPLL_LOOP_DIVIDER_RATIO { 2929-1 },
                ClockConfigTypes::DPLL_LOOP_DIVIDER_RATIO_FRACT { 11-1 },
                DPLL::REFCLK::XOSC32K,
                ClockConfigTypes::DPLL_XOSC_CLOCK_DIVIDER { 1 },

                MCLK::CPUDIV::DIV1,

                ClockConfigTypes::GCLK_DIVISION_FACTOR { 2 },
                GCLK::DIV_MODE::DIV_BY_FACTOR,
                GCLK::CLOCK_SOURCE::DPLL96M,
                GCLK::IMPROVE_DUTY_CYCLE::ENABLE,

                ClockConfigTypes::FLASH_WAITSTATES { 2 },
            };
        }

};

} // namespace HAL
} // namespace LibreUCpp
