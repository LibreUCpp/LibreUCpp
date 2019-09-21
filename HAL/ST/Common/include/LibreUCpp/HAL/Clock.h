#pragma once

#include <LibreUCpp/HAL/ClockConfig.h>
#include <LibreUCpp/HAL/RCC.h>

namespace LibreUCpp { 
namespace HAL {

class Clock
{
    public:
        void Configure(const ClockConfig& cfg)
        {
            HSE_FREQUENCY = cfg.HseFrequency.Value;
            switch (cfg.ClockSource)
            {
                case ClockConfig::SYSTEM_CLOCK_SOURCE::HSI:
                    SwitchToHSI(cfg);
                    break;
                case ClockConfig::SYSTEM_CLOCK_SOURCE::HSE:
                    SwitchToHSE(cfg);
                    break;
                case ClockConfig::SYSTEM_CLOCK_SOURCE::PLL:
                    SwitchToPLL(cfg);
                    break;
            }
        }

        unsigned CalcAHBFrequency() const
        {
            return RCC::GetAHBFrequency(GetHseFrequency());
        }

        unsigned CalcSystickBaseFrequency() const
        {
            return RCC::GetSystickBaseFrequency(GetHseFrequency());
        }

        unsigned GetHseFrequency() const
        {
            return HSE_FREQUENCY;
        }

    private:
        static constexpr unsigned HSE_DEFAULT_FREQUENCY { 8000000u };
        unsigned HSE_FREQUENCY { HSE_DEFAULT_FREQUENCY };

        void SwitchToPLL(const ClockConfig& cfg)
        {
            SwitchToHSI(cfg);
            EnableAndWaitForHSE(cfg);

            RCC::DisablePLL();
            RCC::ConfigurePLL(cfg);
            RCC::EnablePLL();
            while (!RCC::IsPLLReady());

            RCC::SetSystemClockSource(ClockConfig::SYSTEM_CLOCK_SOURCE::PLL);
            while (RCC::GetSystemClockSource() != ClockConfig::SYSTEM_CLOCK_SOURCE::PLL);

            RCC::DisableHSI();
        }

        void SwitchToHSI(const ClockConfig& cfg)
        {
            RCC::EnableHSI();
            while (!RCC::IsHSIReady());
            RCC::SetSystemClockSource(ClockConfig::SYSTEM_CLOCK_SOURCE::HSI);
            RCC::ConfigureBusClocks(cfg);
            RCC::ConfigureFlash(cfg);
        }

        void SwitchToHSE(const ClockConfig& cfg)
        {
            EnableAndWaitForHSE(cfg);
            RCC::ConfigureBusClocks(cfg);
            RCC::ConfigureFlash(cfg);
            RCC::SetSystemClockSource(ClockConfig::SYSTEM_CLOCK_SOURCE::HSE);
        }

        void EnableAndWaitForHSE(const ClockConfig& cfg)
        {
            RCC::SetOscillatorBypass(cfg.HseOscBypass == ClockConfig::HSE_OSC_BYPASS::BYPASS);
            RCC::EnableHSE();
            while (!RCC::IsHSEReady());
        }

};

} // namespace HAL
} // namespace LibreUCpp
