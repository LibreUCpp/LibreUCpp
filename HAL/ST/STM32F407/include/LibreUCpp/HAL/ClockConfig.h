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
            HSI = 0,
            HSE = 1,
        };

        class PLL_M : public ClockConfigTypes::VALUE { using VALUE::VALUE; };
        class PLL_N : public ClockConfigTypes::VALUE { using VALUE::VALUE; };

        enum class PLL_P : unsigned
        {
            P_2 = 0b00,
            P_4 = 0b01,
            P_6 = 0b10,
            P_8 = 0b11,
        };

        enum class PLL_Q : unsigned
        {
            Q_2 = 0b0010,
            Q_3 = 0b0011,
            Q_4 = 0b0100,
            Q_5 = 0b0101,
            Q_6 = 0b0110,
            Q_7 = 0b0111,
            Q_8 = 0b1000,
            Q_9 = 0b1001,
            Q_10 = 0b1010,
            Q_11 = 0b1011,
            Q_12 = 0b1100,
            Q_13 = 0b1101,
            Q_14 = 0b1110,
            Q_15 = 0b1111,
        };

        class FLASH_WAITSTATES : public ClockConfigTypes::VALUE { using VALUE::VALUE; };
        using FLASH_ICACHE = ClockConfigTypes::FLASH_ICACHE;
        using FLASH_DCACHE = ClockConfigTypes::FLASH_DCACHE;

    public: // Values
        static constexpr ClockConfigTypes::FREQUENCY HsiFrequency { 16000000u };

        SYSTEM_CLOCK_SOURCE ClockSource;

        HSE_FREQUENCY HseFrequency;
        HSE_OSC_BYPASS HseOscBypass;

        HCLK_PRESCALE PrescaleHCLK;
        PCLK_PRESCALE PrescalePCLK1;
        PCLK_PRESCALE PrescalePCLK2;

        PLL_SOURCE PLL_Source;
        PLL_M PLL_Divider_M;
        PLL_N PLL_Multiplicator_N;
        PLL_P PLL_Divider_P;
        PLL_Q PLL_Divider_Q;

        FLASH_WAITSTATES FlashWaitstates;
        FLASH_ICACHE FlashICache;
        FLASH_DCACHE FlashDCache;

    public: // Factory methods
        static constexpr ClockConfig Get84MHzFromHSI()  { return Get84MHz(16000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSI); }
        static constexpr ClockConfig Get168MHzFromHSI() { return Get168MHz(16000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSI); }
        static constexpr ClockConfig Get180MHzFromHSI() { return Get180MHz(16000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSI); }
        
        static constexpr ClockConfig Get84MHzFrom16MHzCrystal()  { return Get84MHz(16000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get168MHzFrom16MHzCrystal() { return Get168MHz(16000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get180MHzFrom16MHzCrystal() { return Get180MHz(16000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get84MHzFrom16MHzExternalClock()  { return Get84MHz(16000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get168MHzFrom16MHzExternalClock() { return Get168MHz(16000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get180MHzFrom16MHzExternalClock() { return Get180MHz(16000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }

        static constexpr ClockConfig Get84MHzFrom8MHzCrystal()  { return Get84MHz(8000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get168MHzFrom8MHzCrystal() { return Get168MHz(8000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get180MHzFrom8MHzCrystal() { return Get180MHz(8000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get84MHzFrom8MHzExternalClock()  { return Get84MHz(8000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get168MHzFrom8MHzExternalClock() { return Get168MHz(8000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get180MHzFrom8MHzExternalClock() { return Get180MHz(8000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }

        static constexpr ClockConfig Get84MHzFrom12MHzCrystal()  { return Get84MHz(120000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get168MHzFrom12MHzCrystal() { return Get168MHz(120000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get180MHzFrom12MHzCrystal() { return Get180MHz(120000000u, HSE_OSC_BYPASS::NO_BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get84MHzFrom12MHzExternalClock()  { return Get84MHz(120000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get168MHzFrom12MHzExternalClock() { return Get168MHz(120000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }
        static constexpr ClockConfig Get180MHzFrom12MHzExternalClock() { return Get180MHz(120000000u, HSE_OSC_BYPASS::BYPASS, PLL_SOURCE::HSE); }

    private:
        static constexpr ClockConfig Get84MHz(unsigned base_freq, HSE_OSC_BYPASS bypass, PLL_SOURCE pll_src)
        {
            return ClockConfig { 
                SYSTEM_CLOCK_SOURCE::PLL,
                HSE_FREQUENCY { base_freq }, bypass,
                HCLK_PRESCALE::NO_DIV, PCLK_PRESCALE::DIV_BY_2, PCLK_PRESCALE::NO_DIV,
                pll_src, PLL_M { base_freq/1000000u }, PLL_N { 336 }, PLL_P::P_4, PLL_Q::Q_7,
                FLASH_WAITSTATES { 2 }, FLASH_ICACHE::ENABLE, FLASH_DCACHE::ENABLE
            }; 
        }

        static constexpr ClockConfig Get168MHz(unsigned base_freq, HSE_OSC_BYPASS bypass, PLL_SOURCE pll_src)
        {
            return ClockConfig { 
                SYSTEM_CLOCK_SOURCE::PLL,
                HSE_FREQUENCY { base_freq }, bypass,
                HCLK_PRESCALE::NO_DIV, PCLK_PRESCALE::DIV_BY_4, PCLK_PRESCALE::DIV_BY_2,
                pll_src, PLL_M { base_freq/1000000u }, PLL_N { 336 }, PLL_P::P_2, PLL_Q::Q_7,
                FLASH_WAITSTATES { 5 }, FLASH_ICACHE::ENABLE, FLASH_DCACHE::ENABLE
            }; 
        }

        static constexpr ClockConfig Get180MHz(unsigned base_freq, HSE_OSC_BYPASS bypass, PLL_SOURCE pll_src)
        {
            return ClockConfig { 
                SYSTEM_CLOCK_SOURCE::PLL,
                HSE_FREQUENCY { base_freq }, bypass,
                HCLK_PRESCALE::NO_DIV, PCLK_PRESCALE::DIV_BY_4, PCLK_PRESCALE::DIV_BY_2,
                pll_src, PLL_M { base_freq/1000000u }, PLL_N { 360 }, PLL_P::P_2, PLL_Q::Q_8,
                FLASH_WAITSTATES { 5 }, FLASH_ICACHE::ENABLE, FLASH_DCACHE::ENABLE
            }; 
        }

};

} // namespace HAL
} // namespace LibreUCpp
