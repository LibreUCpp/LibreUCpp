#pragma once

#include <algorithm>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/RCC.h>
#include <LibreUCpp/Peripherals/FLASH.h>
#include <LibreUCpp/HAL/ClockConfig.h>
#include <LibreUCpp/HAL/RCC_STM32_Common.h>

namespace LibreUCpp { 
namespace HAL {

class PLLInfo_F407
{
    public:
        static unsigned GetPLLOutputFrequency(unsigned hseFrequency)
        {
            return ((GetPLLInputFrequency(hseFrequency) / GetPLL_M()) * GetPLL_N()) / GetPLL_PValue();
        }

        static unsigned GetPLLInputFrequency(unsigned hseFrequency)
        {
            return (GetPLLSource() == ClockConfig::PLL_SOURCE::HSE) ? hseFrequency : ClockConfig::HsiFrequency.Value;
        }

        static ALWAYS_INLINE ClockConfig::PLL_SOURCE GetPLLSource()
        {
            return static_cast<ClockConfig::PLL_SOURCE>(GetPeriph().PLLCFGR.bit.PLLSRC);
        }

        static unsigned GetPLL_M()
        {
            return (GetPeriph().PLLCFGR.reg >> 0) & 0x3F;
        }

        static unsigned GetPLL_N()
        {
            return (GetPeriph().PLLCFGR.reg >> 6) & 0x1FF;
        }

        static unsigned GetPLL_PValue()
        {
            return 2 * (static_cast<unsigned>(GetPLL_P()) + 1);
        }

        static ClockConfig::PLL_P GetPLL_P()
        {
            return static_cast<ClockConfig::PLL_P>((GetPeriph().PLLCFGR.reg >> 16) & 0x03);
        }

    private:
        static ALWAYS_INLINE Peripherals::RCC_T& GetPeriph()
        {
            return *reinterpret_cast<Peripherals::RCC_T*>(Peripherals::RCC_T::BASE_ADDRESS);
        }

};

class RCC : public RCC_STM32_Common<PLLInfo_F407>
{
    public:
        static void ConfigureBusClocks(const ClockConfig& cfg)
        {
            SetHclkPrescaler(cfg.PrescaleHCLK);
            SetPclk1Prescaler(cfg.PrescalePCLK1);
            SetPclk2Prescaler(cfg.PrescalePCLK2);
        }

        static void ConfigureFlash(const ClockConfig& cfg)
        {
            GetFlash().ACR.bit.LATENCY = cfg.FlashWaitstates.Value;
            GetFlash().ACR.bit.ICEN = static_cast<unsigned>(cfg.FlashICache);
            GetFlash().ACR.bit.DCEN = static_cast<unsigned>(cfg.FlashDCache);
        }

        static void ConfigurePLL(const ClockConfig& config)
        {
            GetPeriph().PLLCFGR.reg = (config.PLL_Divider_M.Value << 0) 
                            | (config.PLL_Multiplicator_N.Value << 6) 
                            | (static_cast<unsigned>(config.PLL_Divider_P) << 16) 
                            | (static_cast<unsigned>(config.PLL_Divider_Q)<<24)
                            | (static_cast<unsigned>(config.PLL_Source) << 22);
        }

    public:
        static ALWAYS_INLINE void SetPclk1Prescaler(ClockConfig::PCLK_PRESCALE prescale)
        {
            GetPeriph().CFGR.bit.PPRE1 = static_cast<unsigned>(prescale);
        }

        static ALWAYS_INLINE void SetPclk2Prescaler(ClockConfig::PCLK_PRESCALE prescale)
        {
            GetPeriph().CFGR.bit.PPRE2 = static_cast<unsigned>(prescale);
        }

};

} // namespace HAL
} // namespace LibreUCpp
