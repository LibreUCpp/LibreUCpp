#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/HAL/ClockConfig.h>
#include <LibreUCpp/HAL/DPLL.h>
#include <LibreUCpp/HAL/XOSC.h>
#include <LibreUCpp/HAL/XOSC32K.h>
#include <LibreUCpp/HAL/OSC48M.h>
#include <LibreUCpp/HAL/NVM.h>
#include <LibreUCpp/HAL/GCLK.h>
#include <LibreUCpp/HAL/MCLK.h>

namespace LibreUCpp {
namespace HAL {

class Clock
{
    public:
        void Configure(const ClockConfig& cfg)
        {
            _xoscFrequency = cfg.XoscFrequency.Value;
            _xosc32kFrequency = cfg.Xosc32kFrequency.Value;

            Configure4MHzInternal();

            DPLL::Disable();
            ConfigureXosc(cfg);
            ConfigureXosc32k(cfg);
            ConfigureDpll(cfg);

            MCLK::SetCpuDivisionFactor(cfg.MclkCpuDiv);
            NVM::SetWaitstates(cfg.FlashWaitstates.Value);

            GCLK::ConfigureGenerator(
                GCLK::GENERATOR::Generator_0,
                cfg.GenClk0Source,
                cfg.GenClk0DivisionMode,
                cfg.GenClk0DivisionFactor.Value,
                cfg.GenClk0ImproveDutyCycle,
                GCLK::RUN_IN_STANDBY::YES,
                GCLK::ENABLE_OUTPUT::DISABLE,
                GCLK::OUTPUT_OFF_VALUE::LOW
            );
        }

        ALWAYS_INLINE unsigned CalcAHBFrequency() const
        {
            return MCLK::CalcCpuFrequency(_xosc32kFrequency, _xoscFrequency);
        }

        ALWAYS_INLINE unsigned CalcSystickBaseFrequency() const
        {
            return CalcAHBFrequency();
        }

        unsigned GetXoscFrequency() const
        {
            return _xoscFrequency;
        }

        unsigned GetXosc32kFrequency() const
        {
            return _xoscFrequency;
        }

        void Configure4MHzInternal()
        {
            OSC48M::Configure(OSC48M::DIVIDER::DIV_4000_KHZ, OSC48M::STARTUP_TIME::STARTUP_10667_NS);
            OSC48M::Enable();
            OSC48M::WaitReady();
            MCLK::SetCpuDivisionFactor(MCLK::CPUDIV::DIV1);
            GCLK::ConfigureGeneratorSimple(GCLK::GENERATOR::Generator_0, GCLK::CLOCK_SOURCE::OSC48M, 1u);
            NVM::SetWaitstates(0);
        }

    private:
        static constexpr unsigned XOSC_DEFAULT_FREQUENCY { 16000000u };
        static constexpr unsigned XOSC32K_DEFAULT_FREQUENCY { 32768u };

        unsigned _xoscFrequency { XOSC_DEFAULT_FREQUENCY };
        unsigned _xosc32kFrequency { XOSC32K_DEFAULT_FREQUENCY };

        ALWAYS_INLINE void ConfigureXosc(const ClockConfig& cfg)
        {
            XOSC::Configure(cfg.XoscCrystal, cfg.XoscGain, cfg.XoscStartupTime);
            if (cfg.XoscEnable)
            {
                XOSC::Enable();
                XOSC::WaitReady();
                XOSC::SetAutomaticAmplitudeGain(cfg.XoscAutomaticAmplitudeGain);
            }
        }

        ALWAYS_INLINE void ConfigureXosc32k(const ClockConfig& cfg)
        {
            XOSC32K::Configure(cfg.Xosc32kCrystal, cfg.Xosc32kStartupTime);
            if (cfg.Xosc32kEnable)
            {
                XOSC32K::Enable();
                XOSC32K::WaitReady();
            }
        }

        void ConfigureDpll(const ClockConfig& cfg)
        {
            GCLK::EnablePeripheral(GCLK::PERIPHERAL_CHANNEL::DPLL, GCLK::GENERATOR::Generator_0);
            GCLK::EnablePeripheral(GCLK::PERIPHERAL_CHANNEL::DPLL_32K, GCLK::GENERATOR::Generator_0);

            DPLL::SetPrescale(cfg.DpllPrescale);
            DPLL::SetRatio(cfg.DpllLoopDividerRatio.Value, cfg.DpllLoopDividerRatioFract.Value);
            DPLL::SetReferenceClock(cfg.DpllReferenceClock);
            DPLL::SetXoscClockDivider(cfg.DpllXoscClockDivider.Value);
            if (cfg.DpllEnable)
            {
                DPLL::Enable();
                DPLL::WaitLock();
            }
        }
};

} // namespace HAL
} // namespace LibreUCpp
