#pragma once

#include <algorithm>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/RCC.h>
#include <LibreUCpp/Peripherals/FLASH.h>
#include <LibreUCpp/HAL/RCC_STM32_Common.h>
#include <LibreUCpp/HAL/ClockConfig.h>

namespace LibreUCpp { 
namespace HAL {

class PLLInfo_F030
{
    public:
        static unsigned GetPLLOutputFrequency(unsigned hseFrequency)
        {
            return GetPLLInputFrequency(hseFrequency) * GetPLLMultiplicatorValue();
        }

    private:
        static unsigned GetPLLInputFrequency(unsigned hseFrequency)
        {
            if (GetPLLSource()==ClockConfig::PLL_SOURCE::HSE_BY_PREDIV)
            {
                return hseFrequency / GetPLLPrescalerValue();
            }
            else
            {
                return ClockConfig::HsiFrequency.Value / 2;
            }
        }

        static ALWAYS_INLINE ClockConfig::PLL_SOURCE GetPLLSource()
        {
            return static_cast<ClockConfig::PLL_SOURCE>(GetPeriph().CFGR.bit.PLLSRC);
        }

        static ALWAYS_INLINE unsigned GetPLLPrescalerValue()
        {
            return GetPeriph().CFGR2.bit.PREDIV + 1u;
        }

        static unsigned GetPLLMultiplicatorValue()
        {
            return std::max(16u, GetPeriph().CFGR.bit.PLLMUL + 2u);
        }

        static ALWAYS_INLINE Peripherals::RCC_T& GetPeriph()
        {
            return *reinterpret_cast<Peripherals::RCC_T*>(Peripherals::RCC_T::BASE_ADDRESS);
        }
};

class RCC : public RCC_STM32_Common<PLLInfo_F030>
{
    public:
        static void ConfigureBusClocks(const ClockConfig& cfg)
        {
            SetHclkPrescaler(cfg.PrescaleHCLK);
            SetPclkPrescaler(cfg.PrescalePCLK);
        }

        static void ConfigureFlash(const ClockConfig& cfg)
        {
            GetFlash().ACR.bit.PRFTBE = static_cast<unsigned>(cfg.FlashPrefetch);
            GetFlash().ACR.bit.LATENCY = static_cast<unsigned>(cfg.FlashWaitstates);
        }

        static void ConfigurePLL(const ClockConfig& cfg)
        {
            SetPLLMultiplicator(cfg.PLL_Multiplicator);
            SetPLLPrescaler(cfg.PLL_Prescaler);
            SetPLLSource(cfg.PLL_Source);
        }

    private:
        static ALWAYS_INLINE void SetPclkPrescaler(ClockConfig::PCLK_PRESCALE prescale)
        {
            GetPeriph().CFGR.bit.PPRE = static_cast<uint32_t>(prescale);
        }

        static ALWAYS_INLINE ClockConfig::PLL_MULTIPLICATOR GetPLLMultiplicator()
        {
            return static_cast<ClockConfig::PLL_MULTIPLICATOR>(GetPeriph().CFGR.bit.PLLMUL);
        }

        static ALWAYS_INLINE void SetPLLMultiplicator(ClockConfig::PLL_MULTIPLICATOR mult)
        {
            GetPeriph().CFGR.bit.PLLMUL = static_cast<uint32_t>(mult);
        }

        static ALWAYS_INLINE ClockConfig::PLL_PRESCALE GetPLLPrescaler()
        {
            return static_cast<ClockConfig::PLL_PRESCALE>(GetPeriph().CFGR2.bit.PREDIV);
        }

        static ALWAYS_INLINE void SetPLLPrescaler(ClockConfig::PLL_PRESCALE prescale)
        {
            GetPeriph().CFGR2.bit.PREDIV = static_cast<uint32_t>(prescale);
        }

        static ALWAYS_INLINE void SetPLLSource(ClockConfig::PLL_SOURCE source)
        {
            GetPeriph().CFGR.bit.PLLSRC = static_cast<uint32_t>(source);
        }

};

} // namespace HAL
} // namespace LibreUCpp
