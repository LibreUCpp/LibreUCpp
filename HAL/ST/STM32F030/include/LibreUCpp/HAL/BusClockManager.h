#pragma once

#include <stdlib.h>
#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/RCC.h>

namespace LibreUCpp {
namespace HAL {

class BusClockManager
{
    public:
        using RCC_T = Peripherals::RCC_T;
        static constexpr unsigned PREFIX_SHIFT = 8;
        static constexpr unsigned BIT_MASK = ~(0xFFFFFFFF << PREFIX_SHIFT);

        static constexpr unsigned BASE_ADDRESS = RCC_T::BASE_ADDRESS;
        static constexpr unsigned PREFIX_AHB   = RCC_T::ADDR_OFFSET_AHBENR  << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APB1  = RCC_T::ADDR_OFFSET_APB1ENR << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APB2  = RCC_T::ADDR_OFFSET_APB2ENR << PREFIX_SHIFT;

        enum class Peripheral : unsigned
        {
            // AHB
            DMA    = PREFIX_AHB + RCC_T::AHBENR_T::DMAEN_POS,
            SRAM   = PREFIX_AHB + RCC_T::AHBENR_T::SRAMEN_POS,
            FLITF  = PREFIX_AHB + RCC_T::AHBENR_T::FLITFEN_POS,
            CRC    = PREFIX_AHB + RCC_T::AHBENR_T::CRCEN_POS,
            GPIOA  = PREFIX_AHB + RCC_T::AHBENR_T::IOPAEN_POS,
            GPIOB  = PREFIX_AHB + RCC_T::AHBENR_T::IOPBEN_POS,
            GPIOC  = PREFIX_AHB + RCC_T::AHBENR_T::IOPCEN_POS,
            GPIOD  = PREFIX_AHB + RCC_T::AHBENR_T::IOPDEN_POS,
            GPIOF  = PREFIX_AHB + RCC_T::AHBENR_T::IOPFEN_POS,

            // APB1
            TIM3   = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM3EN_POS,
            TIM6   = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM6EN_POS,
            TIM14  = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM14EN_POS,
            WWDG   = PREFIX_APB1 + RCC_T::APB1ENR_T::WWDGEN_POS,
            SPI2   = PREFIX_APB1 + RCC_T::APB1ENR_T::SPI2EN_POS,
            USART2 = PREFIX_APB1 + RCC_T::APB1ENR_T::USART2EN_POS,
            I2C1   = PREFIX_APB1 + RCC_T::APB1ENR_T::I2C1EN_POS,
            I2C2   = PREFIX_APB1 + RCC_T::APB1ENR_T::I2C2EN_POS,
            PWR    = PREFIX_APB1 + RCC_T::APB1ENR_T::PWREN_POS,

            // APB2
            SYSCFG = PREFIX_APB2 + RCC_T::APB2ENR_T::SYSCFGEN_POS,
            ADC    = PREFIX_APB2 + RCC_T::APB2ENR_T::ADCEN_POS,
            TIM1   = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM1EN_POS,
            SPI1   = PREFIX_APB2 + RCC_T::APB2ENR_T::SPI1EN_POS,
            USART1 = PREFIX_APB2 + RCC_T::APB2ENR_T::USART1EN_POS,
            TIM15  = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM15EN_POS,
            TIM16  = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM16EN_POS,
            TIM17  = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM17EN_POS,
            DBGMCU = PREFIX_APB2 + RCC_T::APB2ENR_T::DBGMCUEN_POS,
        };

        static void EnableClock(Peripheral p)
        {
            auto reg = reinterpret_cast<volatile uint32_t*>(RegisterAddress(p));
            *reg |= RegisterMask(p);
        }

        static void DisableClock(Peripheral p)
        {
            auto reg = reinterpret_cast<volatile uint32_t*>(RegisterAddress(p));
            *reg &= ~RegisterMask(p);
        }

    private:
        static ALWAYS_INLINE unsigned RegisterAddress(Peripheral p)
        {
            auto offset = static_cast<unsigned>(p) >> PREFIX_SHIFT;
            return BASE_ADDRESS + offset;
        }

        static ALWAYS_INLINE unsigned RegisterMask(Peripheral p)
        {
            auto bit = static_cast<unsigned>(p) & BIT_MASK;
            return 1u << bit;
        }
};

} // namespace HAL
} // namespace LibreUCpp
