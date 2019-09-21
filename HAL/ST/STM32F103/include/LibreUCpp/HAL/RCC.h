#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/RCC.h>
#include <LibreUCpp/Peripherals/FLASH.h>
#include <LibreUCpp/HAL/RCC_STM32_Common.h>
#include <LibreUCpp/HAL/PLL.h>

namespace LibreUCpp { 
namespace HAL {

class PLLInfo_F103
{
    public:

        static unsigned GetPLLOutputFrequency(unsigned hseFrequency)
        {
            return GetPLLInputFrequency(hseFrequency) * GetPLLMultiplicatorValue();
        }

        static unsigned GetPLLInputFrequency(unsigned hseFrequency)
        {
            if (GetPLLSource()==ClockConfig::PLL_SOURCE::HSI_BY_2)
            {
                return ClockConfig::HsiFrequency.Value / 2;
            }
            else
            {
                return GetPLLPrescaleHSE()==ClockConfig::PLL_PRESCALE_HSE::DIV_BY_2 ? hseFrequency/2 : hseFrequency;
            }
        }

        static ALWAYS_INLINE ClockConfig::PLL_SOURCE GetPLLSource()
        {
            return static_cast<ClockConfig::PLL_SOURCE>(GetPeriph().CFGR.bit.PLLSRC);
        }

        static ALWAYS_INLINE ClockConfig::PLL_PRESCALE_HSE GetPrescaleHSE()
        {
            return static_cast<ClockConfig::PLL_PRESCALE_HSE>(GetPeriph().CFGR.bit.PLLXTPRE);
        }

        static unsigned GetPLLMultiplicatorValue()
        {
            return std::max(16, GetPeriph().CFGR.bit.PLLMUL + 2);
        }

        static ALWAYS_INLINE ClockConfig::PLL_MULTIPLICATOR GetMultiplicator()
        {
            return static_cast<ClockConfig::PLL_MULTIPLICATOR>(GetPeriph().CFGR.bit.PLLMUL);
        }

    private:
        static constexpr Peripherals::RCC_T& GetPeriph()
        {
            return *reinterpret_cast<Peripherals::RCC_T*>(Peripherals::RCC_T::BASE_ADDRESS);
        }

};

class RCC : public RCC_STM32_Common<PLLInfo_F103>
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
            GetFlash().ACR.bit.PRFTBE = static_cast<unsigned>(cfg.FlashPrefetch);
            GetFlash().ACR.bit.LATENCY = static_cast<unsigned>(cfg.FlashWaitstates);
        }

        static void ConfigurePLL(const ClockConfig& cfg)
        {
            SetPLLMultiplicator(cfg.PLL_Multiplicator);
            SetPLLPrescaleHSE(cfg.PLL_PrescaleHSE);
            SetPLLSource(cfg.PLL_Source);
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

        static ALWAYS_INLINE void SetPLLMultiplicator(ClockConfig::PLL_MULTIPLICATOR mult)
        {
            GetPeriph().CFGR.bit.PLLMUL = static_cast<unsigned>(mult);
        }

        static ALWAYS_INLINE void SetPLLPrescaleHSE(ClockConfig::PLL_PRESCALE_HSE prescale)
        {
            GetPeriph().CFGR.bit.PLLXTPRE = static_cast<unsigned>(prescale);
        }

        static ALWAYS_INLINE void SetPLLSource(ClockConfig::PLL_SOURCE source)
        {
            GetPeriph().CFGR.bit.PLLSRC = static_cast<unsigned>(source);
        }
};

} // namespace HAL
} // namespace LibreUCpp
