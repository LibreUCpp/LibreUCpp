#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/RCC.h>
#include <LibreUCpp/Peripherals/FLASH.h>
#include <LibreUCpp/HAL/ClockConfig.h>

namespace LibreUCpp { 
namespace HAL {

template <class PLLInfo> class RCC_STM32_Common // common RCC functions (at least) for STM32F030, F103 and F407
{
    public:
        static ALWAYS_INLINE void SetOscillatorBypass(bool enableBypass)
        {
            GetPeriph().CR.bit.HSEBYP = enableBypass ? 1 : 0;
        }

        static ALWAYS_INLINE void EnableHSI()
        {
            GetPeriph().CR.bit.HSION = 1;
        }

        static ALWAYS_INLINE void DisableHSI()
        {
            GetPeriph().CR.bit.HSION = 0;
        }

        static ALWAYS_INLINE bool IsHSIReady()
        {
            return GetPeriph().CR.bit.HSIRDY != 0;
        }
        
        static ALWAYS_INLINE void EnableHSE()
        {
            GetPeriph().CR.bit.HSEON = 1;
        }
        
        static ALWAYS_INLINE void DisableHSE()
        {
            GetPeriph().CR.bit.HSEON = 0;
        }

        static ALWAYS_INLINE bool IsHSEReady()
        {
            return GetPeriph().CR.bit.HSERDY != 0;
        }

        static ALWAYS_INLINE void EnablePLL()
        {
            GetPeriph().CR.bit.PLLON = 1;
        }

        static ALWAYS_INLINE void DisablePLL()
        {
            GetPeriph().CR.bit.PLLON = 0;
        }

        static ALWAYS_INLINE bool IsPLLReady()
        {
            return GetPeriph().CR.bit.PLLRDY != 0;
        }

        static ALWAYS_INLINE void SetSystemClockSource(ClockConfig::SYSTEM_CLOCK_SOURCE source)
        {
            auto& rcc = GetPeriph();
            rcc.CFGR.reg = (rcc.CFGR.reg & ~0x03u) | static_cast<uint32_t>(source);
        }

        static ALWAYS_INLINE ClockConfig::SYSTEM_CLOCK_SOURCE GetSystemClockSource()
        {
            return static_cast<ClockConfig::SYSTEM_CLOCK_SOURCE>((GetPeriph().CFGR.reg>>2) & 0x03);
        }

        static ALWAYS_INLINE constexpr unsigned GetHSIFrequency()
        {
            return ClockConfig::HsiFrequency.Value;
        }

        static unsigned GetSysclkFrequency(unsigned hse_freq)
        {
            switch (GetSystemClockSource())
            {
                case ClockConfig::SYSTEM_CLOCK_SOURCE::HSI:
                    return GetHSIFrequency();
                case ClockConfig::SYSTEM_CLOCK_SOURCE::HSE:
                    return hse_freq;
                case ClockConfig::SYSTEM_CLOCK_SOURCE::PLL:
                    return PLLInfo::GetPLLOutputFrequency(hse_freq);
                default:
                    while(1); // TODO abort()?
            }
        }

        static unsigned GetAHBFrequency(unsigned hse_freq)
        {
            return GetSysclkFrequency(hse_freq) / GetHclkPrescaler();
        }

        static unsigned GetSystickBaseFrequency(unsigned hse_freq)
        {
            return GetAHBFrequency(hse_freq) / 8;
        }

        static unsigned GetHclkPrescaler()
        {
            switch (static_cast<ClockConfig::HCLK_PRESCALE>(GetPeriph().CFGR.bit.HPRE))
            {
                case ClockConfig::HCLK_PRESCALE::DIV_BY_2:
                    return 2;
                case ClockConfig::HCLK_PRESCALE::DIV_BY_4:
                    return 4;
                case ClockConfig::HCLK_PRESCALE::DIV_BY_8:
                    return 8;
                case ClockConfig::HCLK_PRESCALE::DIV_BY_16:
                    return 16;
                case ClockConfig::HCLK_PRESCALE::DIV_BY_64:
                    return 64;
                case ClockConfig::HCLK_PRESCALE::DIV_BY_128:
                    return 128;
                case ClockConfig::HCLK_PRESCALE::DIV_BY_256:
                    return 256;
                case ClockConfig::HCLK_PRESCALE::DIV_BY_512:
                    return 512;
                default:
                    return 1;
            }
        }

        static ALWAYS_INLINE void SetHclkPrescaler(ClockConfig::HCLK_PRESCALE prescale)
        {
            GetPeriph().CFGR.bit.HPRE = static_cast<uint32_t>(prescale);
        }

    protected:        
        static constexpr Peripherals::RCC_T& GetPeriph()
        {
            return *reinterpret_cast<Peripherals::RCC_T*>(Peripherals::RCC_T::BASE_ADDRESS);
        }

        static constexpr Peripherals::FLASH_T& GetFlash()
        {
            return *reinterpret_cast<Peripherals::FLASH_T*>(Peripherals::FLASH_T::BASE_ADDRESS);
        }

};

} // namespace HAL
} // namespace LibreUCpp
