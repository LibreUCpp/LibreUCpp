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
        static constexpr unsigned PREFIX_AHB1  = RCC_T::ADDR_OFFSET_AHB1ENR << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_AHB2  = RCC_T::ADDR_OFFSET_AHB2ENR << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_AHB3  = RCC_T::ADDR_OFFSET_AHB3ENR << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APB1  = RCC_T::ADDR_OFFSET_APB1ENR << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APB2  = RCC_T::ADDR_OFFSET_APB2ENR << PREFIX_SHIFT;

        enum class Peripheral : unsigned
        {
            // AHB1
            GPIOA     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOAEN_POS,
            GPIOB     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOBEN_POS,
            GPIOC     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOCEN_POS,
            GPIOD     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIODEN_POS,
            GPIOE     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOEEN_POS,
            GPIOF     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOFEN_POS,
            GPIOG     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOGEN_POS,
            GPIOH     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOHEN_POS,
            GPIOI     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::GPIOIEN_POS,
            CRC       = PREFIX_AHB1 + RCC_T::AHB1ENR_T::CRCEN_POS,
            BKPSRAM   = PREFIX_AHB1 + RCC_T::AHB1ENR_T::BKPSRAMEN_POS,
            DMA1      = PREFIX_AHB1 + RCC_T::AHB1ENR_T::DMA1EN_POS,
            DMA2      = PREFIX_AHB1 + RCC_T::AHB1ENR_T::DMA2EN_POS,
            ETHMAC    = PREFIX_AHB1 + RCC_T::AHB1ENR_T::ETHMACEN_POS,
            ETHMACTX  = PREFIX_AHB1 + RCC_T::AHB1ENR_T::ETHMACTXEN_POS,
            ETHMACRX  = PREFIX_AHB1 + RCC_T::AHB1ENR_T::ETHMACRXEN_POS,
            ETHMACPTP = PREFIX_AHB1 + RCC_T::AHB1ENR_T::ETHMACPTPEN_POS,
            OTGHS     = PREFIX_AHB1 + RCC_T::AHB1ENR_T::OTGHSEN_POS,
            OTGHSULPI = PREFIX_AHB1 + RCC_T::AHB1ENR_T::OTGHSULPIEN_POS,

            // AHB2
            HCMI      = PREFIX_AHB2 + RCC_T::AHB2ENR_T::DCMIEN_POS,
            RNG       = PREFIX_AHB2 + RCC_T::AHB2ENR_T::RNGEN_POS,
            OTGFS     = PREFIX_AHB2 + RCC_T::AHB2ENR_T::OTGFSEN_POS,

            // AHB3
            FMC       = PREFIX_AHB3 + RCC_T::AHB3ENR_T::FSMCEN_POS,

            // APB1
            TIM2      = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM2EN_POS,
            TIM3      = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM3EN_POS,
            TIM4      = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM4EN_POS,
            TIM5      = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM5EN_POS,
            TIM6      = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM6EN_POS,
            TIM7      = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM7EN_POS,
            TIM12     = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM12EN_POS,
            TIM13     = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM13EN_POS,
            TIM14     = PREFIX_APB1 + RCC_T::APB1ENR_T::TIM14EN_POS,
            WWDG      = PREFIX_APB1 + RCC_T::APB1ENR_T::WWDGEN_POS,
            SPI2      = PREFIX_APB1 + RCC_T::APB1ENR_T::SPI2EN_POS,
            SPI3      = PREFIX_APB1 + RCC_T::APB1ENR_T::SPI3EN_POS,
            USART2    = PREFIX_APB1 + RCC_T::APB1ENR_T::USART2EN_POS,
            USART3    = PREFIX_APB1 + RCC_T::APB1ENR_T::USART3EN_POS,
            UART4     = PREFIX_APB1 + RCC_T::APB1ENR_T::UART4EN_POS,
            UART5     = PREFIX_APB1 + RCC_T::APB1ENR_T::UART5EN_POS,
            I2C1      = PREFIX_APB1 + RCC_T::APB1ENR_T::I2C1EN_POS,
            I2C2      = PREFIX_APB1 + RCC_T::APB1ENR_T::I2C2EN_POS,
            I2C3      = PREFIX_APB1 + RCC_T::APB1ENR_T::I2C3EN_POS,
            CAN1      = PREFIX_APB1 + RCC_T::APB1ENR_T::CAN1EN_POS,
            CAN2      = PREFIX_APB1 + RCC_T::APB1ENR_T::CAN2EN_POS,
            PWR       = PREFIX_APB1 + RCC_T::APB1ENR_T::PWREN_POS,
            DAC       = PREFIX_APB1 + RCC_T::APB1ENR_T::DACEN_POS,  

            // APB2
            TIM1      = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM1EN_POS,
            TIM8      = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM8EN_POS,
            USART1    = PREFIX_APB2 + RCC_T::APB2ENR_T::USART1EN_POS,
            USART6    = PREFIX_APB2 + RCC_T::APB2ENR_T::USART6EN_POS,
            ADC1      = PREFIX_APB2 + RCC_T::APB2ENR_T::ADC1EN_POS,
            ADC2      = PREFIX_APB2 + RCC_T::APB2ENR_T::ADC2EN_POS,
            ADC3      = PREFIX_APB2 + RCC_T::APB2ENR_T::ADC3EN_POS,
            SDIO      = PREFIX_APB2 + RCC_T::APB2ENR_T::SDIOEN_POS,
            SPI1      = PREFIX_APB2 + RCC_T::APB2ENR_T::SPI1EN_POS,  
            SYSCFG    = PREFIX_APB2 + RCC_T::APB2ENR_T::SYSCFGEN_POS,  
            TIM9      = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM9EN_POS,
            TIM10     = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM10EN_POS,
            TIM11     = PREFIX_APB2 + RCC_T::APB2ENR_T::TIM11EN_POS,
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
