#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SYSCFG_T
{
    static constexpr size_t INSTANCE_SIZE = 28;
    static constexpr intptr_t BASE_ADDRESS = 0x40010000;

    static constexpr intptr_t ADDR_OFFSET_CFGR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_EXTICR1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_EXTICR2 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_EXTICR3 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EXTICR4 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CFGR2 = 0x18;

    volatile union CFGR1_T // CFGR1: configuration register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR1_BIT_T
        {
            unsigned MEM_MODE          : 2; // bits 0..1 Memory mapping selection bits
            unsigned                   : 6; // bits 2..7 unused
            unsigned ADC_DMA_RMP       : 1; // bit 8 ADC DMA remapping bit
            unsigned USART1_TX_DMA_RMP : 1; // bit 9 USART1_TX DMA remapping bit
            unsigned USART1_RX_DMA_RMP : 1; // bit 10 USART1_RX DMA request remapping bit
            unsigned TIM16_DMA_RMP     : 1; // bit 11 TIM16 DMA request remapping bit
            unsigned TIM17_DMA_RMP     : 1; // bit 12 TIM17 DMA request remapping bit
            unsigned                   : 3; // bits 13..15 unused
            unsigned I2C_PB6_FM        : 1; // bit 16 Fast Mode Plus (FM plus) driving capability activation bits.
            unsigned I2C_PB7_FM        : 1; // bit 17 Fast Mode Plus (FM+) driving capability activation bits.
            unsigned I2C_PB8_FM        : 1; // bit 18 Fast Mode Plus (FM+) driving capability activation bits.
            unsigned I2C_PB9_FM        : 1; // bit 19 Fast Mode Plus (FM+) driving capability activation bits.
            unsigned I2C1_FM_plus      : 1; // bit 20 FM+ driving capability activation for I2C1
            unsigned I2C2_FM_plus      : 1; // bit 21 FM+ driving capability activation for I2C2
            unsigned                   : 2; // bits 22..23 unused
            unsigned SPI2_DMA_RMP      : 1; // bit 24 SPI2 DMA request remapping bit
            unsigned USART2_DMA_RMP    : 1; // bit 25 USART2 DMA request remapping bit
            unsigned USART3_DMA_RMP    : 1; // bit 26 USART3 DMA request remapping bit
            unsigned I2C1_DMA_RMP      : 1; // bit 27 I2C1 DMA request remapping bit
            unsigned TIM1_DMA_RMP      : 1; // bit 28 TIM1 DMA request remapping bit
            unsigned TIM2_DMA_RMP      : 1; // bit 29 TIM2 DMA request remapping bit
            unsigned TIM3_DMA_RMP      : 1; // bit 30 TIM3 DMA request remapping bit
            unsigned                   : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned MEM_MODE_POS = 0;
        static constexpr unsigned MEM_MODE_MASK = 0x00000003;
        static constexpr unsigned MEM_MODE(unsigned value) { return (value << 0); }
        static constexpr unsigned ADC_DMA_RMP_POS = 8;
        static constexpr unsigned ADC_DMA_RMP_MASK = 0x00000100;
        static constexpr unsigned ADC_DMA_RMP(unsigned value) { return (value << 8); }
        static constexpr unsigned USART1_TX_DMA_RMP_POS = 9;
        static constexpr unsigned USART1_TX_DMA_RMP_MASK = 0x00000200;
        static constexpr unsigned USART1_TX_DMA_RMP(unsigned value) { return (value << 9); }
        static constexpr unsigned USART1_RX_DMA_RMP_POS = 10;
        static constexpr unsigned USART1_RX_DMA_RMP_MASK = 0x00000400;
        static constexpr unsigned USART1_RX_DMA_RMP(unsigned value) { return (value << 10); }
        static constexpr unsigned TIM16_DMA_RMP_POS = 11;
        static constexpr unsigned TIM16_DMA_RMP_MASK = 0x00000800;
        static constexpr unsigned TIM16_DMA_RMP(unsigned value) { return (value << 11); }
        static constexpr unsigned TIM17_DMA_RMP_POS = 12;
        static constexpr unsigned TIM17_DMA_RMP_MASK = 0x00001000;
        static constexpr unsigned TIM17_DMA_RMP(unsigned value) { return (value << 12); }
        static constexpr unsigned I2C_PB6_FM_POS = 16;
        static constexpr unsigned I2C_PB6_FM_MASK = 0x00010000;
        static constexpr unsigned I2C_PB6_FM(unsigned value) { return (value << 16); }
        static constexpr unsigned I2C_PB7_FM_POS = 17;
        static constexpr unsigned I2C_PB7_FM_MASK = 0x00020000;
        static constexpr unsigned I2C_PB7_FM(unsigned value) { return (value << 17); }
        static constexpr unsigned I2C_PB8_FM_POS = 18;
        static constexpr unsigned I2C_PB8_FM_MASK = 0x00040000;
        static constexpr unsigned I2C_PB8_FM(unsigned value) { return (value << 18); }
        static constexpr unsigned I2C_PB9_FM_POS = 19;
        static constexpr unsigned I2C_PB9_FM_MASK = 0x00080000;
        static constexpr unsigned I2C_PB9_FM(unsigned value) { return (value << 19); }
        static constexpr unsigned I2C1_FM_plus_POS = 20;
        static constexpr unsigned I2C1_FM_plus_MASK = 0x00100000;
        static constexpr unsigned I2C1_FM_plus(unsigned value) { return (value << 20); }
        static constexpr unsigned I2C2_FM_plus_POS = 21;
        static constexpr unsigned I2C2_FM_plus_MASK = 0x00200000;
        static constexpr unsigned I2C2_FM_plus(unsigned value) { return (value << 21); }
        static constexpr unsigned SPI2_DMA_RMP_POS = 24;
        static constexpr unsigned SPI2_DMA_RMP_MASK = 0x01000000;
        static constexpr unsigned SPI2_DMA_RMP(unsigned value) { return (value << 24); }
        static constexpr unsigned USART2_DMA_RMP_POS = 25;
        static constexpr unsigned USART2_DMA_RMP_MASK = 0x02000000;
        static constexpr unsigned USART2_DMA_RMP(unsigned value) { return (value << 25); }
        static constexpr unsigned USART3_DMA_RMP_POS = 26;
        static constexpr unsigned USART3_DMA_RMP_MASK = 0x04000000;
        static constexpr unsigned USART3_DMA_RMP(unsigned value) { return (value << 26); }
        static constexpr unsigned I2C1_DMA_RMP_POS = 27;
        static constexpr unsigned I2C1_DMA_RMP_MASK = 0x08000000;
        static constexpr unsigned I2C1_DMA_RMP(unsigned value) { return (value << 27); }
        static constexpr unsigned TIM1_DMA_RMP_POS = 28;
        static constexpr unsigned TIM1_DMA_RMP_MASK = 0x10000000;
        static constexpr unsigned TIM1_DMA_RMP(unsigned value) { return (value << 28); }
        static constexpr unsigned TIM2_DMA_RMP_POS = 29;
        static constexpr unsigned TIM2_DMA_RMP_MASK = 0x20000000;
        static constexpr unsigned TIM2_DMA_RMP(unsigned value) { return (value << 29); }
        static constexpr unsigned TIM3_DMA_RMP_POS = 30;
        static constexpr unsigned TIM3_DMA_RMP_MASK = 0x40000000;
        static constexpr unsigned TIM3_DMA_RMP(unsigned value) { return (value << 30); }
    } CFGR1;

    uint8_t Reserved1[4];

    volatile union EXTICR1_T // EXTICR1: external interrupt configuration register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR1_BIT_T
        {
            unsigned EXTI0 : 4; // bits 0..3 EXTI 0 configuration bits
            unsigned EXTI1 : 4; // bits 4..7 EXTI 1 configuration bits
            unsigned EXTI2 : 4; // bits 8..11 EXTI 2 configuration bits
            unsigned EXTI3 : 4; // bits 12..15 EXTI 3 configuration bits
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI0_POS = 0;
        static constexpr unsigned EXTI0_MASK = 0x0000000f;
        static constexpr unsigned EXTI0(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI1_POS = 4;
        static constexpr unsigned EXTI1_MASK = 0x000000f0;
        static constexpr unsigned EXTI1(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI2_POS = 8;
        static constexpr unsigned EXTI2_MASK = 0x00000f00;
        static constexpr unsigned EXTI2(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI3_POS = 12;
        static constexpr unsigned EXTI3_MASK = 0x0000f000;
        static constexpr unsigned EXTI3(unsigned value) { return (value << 12); }
    } EXTICR1;

    volatile union EXTICR2_T // EXTICR2: external interrupt configuration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR2_BIT_T
        {
            unsigned EXTI4 : 4; // bits 0..3 EXTI 4 configuration bits
            unsigned EXTI5 : 4; // bits 4..7 EXTI 5 configuration bits
            unsigned EXTI6 : 4; // bits 8..11 EXTI 6 configuration bits
            unsigned EXTI7 : 4; // bits 12..15 EXTI 7 configuration bits
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI4_POS = 0;
        static constexpr unsigned EXTI4_MASK = 0x0000000f;
        static constexpr unsigned EXTI4(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI5_POS = 4;
        static constexpr unsigned EXTI5_MASK = 0x000000f0;
        static constexpr unsigned EXTI5(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI6_POS = 8;
        static constexpr unsigned EXTI6_MASK = 0x00000f00;
        static constexpr unsigned EXTI6(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI7_POS = 12;
        static constexpr unsigned EXTI7_MASK = 0x0000f000;
        static constexpr unsigned EXTI7(unsigned value) { return (value << 12); }
    } EXTICR2;

    volatile union EXTICR3_T // EXTICR3: external interrupt configuration register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR3_BIT_T
        {
            unsigned EXTI8  : 4; // bits 0..3 EXTI 8 configuration bits
            unsigned EXTI9  : 4; // bits 4..7 EXTI 9 configuration bits
            unsigned EXTI10 : 4; // bits 8..11 EXTI 10 configuration bits
            unsigned EXTI11 : 4; // bits 12..15 EXTI 11 configuration bits
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI8_POS = 0;
        static constexpr unsigned EXTI8_MASK = 0x0000000f;
        static constexpr unsigned EXTI8(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI9_POS = 4;
        static constexpr unsigned EXTI9_MASK = 0x000000f0;
        static constexpr unsigned EXTI9(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI10_POS = 8;
        static constexpr unsigned EXTI10_MASK = 0x00000f00;
        static constexpr unsigned EXTI10(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI11_POS = 12;
        static constexpr unsigned EXTI11_MASK = 0x0000f000;
        static constexpr unsigned EXTI11(unsigned value) { return (value << 12); }
    } EXTICR3;

    volatile union EXTICR4_T // EXTICR4: external interrupt configuration register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR4_BIT_T
        {
            unsigned EXTI12 : 4; // bits 0..3 EXTI 12 configuration bits
            unsigned EXTI13 : 4; // bits 4..7 EXTI 13 configuration bits
            unsigned EXTI14 : 4; // bits 8..11 EXTI 14 configuration bits
            unsigned EXTI15 : 4; // bits 12..15 EXTI 15 configuration bits
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI12_POS = 0;
        static constexpr unsigned EXTI12_MASK = 0x0000000f;
        static constexpr unsigned EXTI12(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI13_POS = 4;
        static constexpr unsigned EXTI13_MASK = 0x000000f0;
        static constexpr unsigned EXTI13(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI14_POS = 8;
        static constexpr unsigned EXTI14_MASK = 0x00000f00;
        static constexpr unsigned EXTI14(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI15_POS = 12;
        static constexpr unsigned EXTI15_MASK = 0x0000f000;
        static constexpr unsigned EXTI15(unsigned value) { return (value << 12); }
    } EXTICR4;

    volatile union CFGR2_T // CFGR2: configuration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR2_BIT_T
        {
            unsigned LOCUP_LOCK       : 1; // bit 0 Cortex-M0 LOCKUP bit enable bit
            unsigned SRAM_PARITY_LOCK : 1; // bit 1 SRAM parity lock bit
            unsigned PVD_LOCK         : 1; // bit 2 PVD lock enable bit
            unsigned                  : 5; // bits 3..7 unused
            unsigned SRAM_PEF         : 1; // bit 8 SRAM parity flag
            unsigned                  : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned LOCUP_LOCK_POS = 0;
        static constexpr unsigned LOCUP_LOCK_MASK = 0x00000001;
        static constexpr unsigned LOCUP_LOCK(unsigned value) { return (value << 0); }
        static constexpr unsigned SRAM_PARITY_LOCK_POS = 1;
        static constexpr unsigned SRAM_PARITY_LOCK_MASK = 0x00000002;
        static constexpr unsigned SRAM_PARITY_LOCK(unsigned value) { return (value << 1); }
        static constexpr unsigned PVD_LOCK_POS = 2;
        static constexpr unsigned PVD_LOCK_MASK = 0x00000004;
        static constexpr unsigned PVD_LOCK(unsigned value) { return (value << 2); }
        static constexpr unsigned SRAM_PEF_POS = 8;
        static constexpr unsigned SRAM_PEF_MASK = 0x00000100;
        static constexpr unsigned SRAM_PEF(unsigned value) { return (value << 8); }
    } CFGR2;

}; // struct SYSCFG_T

static_assert(sizeof(SYSCFG_T) == SYSCFG_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp