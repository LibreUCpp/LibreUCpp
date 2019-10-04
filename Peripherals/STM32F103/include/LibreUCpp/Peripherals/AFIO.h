#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) AFIO_T
{
    static constexpr size_t INSTANCE_SIZE = 32;
    static constexpr size_t PADDED_INSTANCE_SIZE = 32;
    static constexpr intptr_t BASE_ADDRESS = 0x40010000;

    static constexpr intptr_t ADDR_OFFSET_EVCR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MAPR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_EXTICR1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_EXTICR2 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_EXTICR3 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EXTICR4 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_MAPR2 = 0x1c;

    volatile union EVCR_T // EVCR: Event Control Register (AFIO_EVCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) EVCR_BIT_T
        {
            unsigned PIN  : 4; // bits 0..3 Pin selection
            unsigned PORT : 3; // bits 4..6 Port selection
            unsigned EVOE : 1; // bit 7 Event Output Enable
            unsigned      : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PIN_POS = 0;
        static constexpr unsigned PIN_MASK = 0x0000000f;
        static constexpr unsigned PIN(unsigned value) { return (value << 0); }
        static constexpr unsigned PORT_POS = 4;
        static constexpr unsigned PORT_MASK = 0x00000070;
        static constexpr unsigned PORT(unsigned value) { return (value << 4); }
        static constexpr unsigned EVOE_POS = 7;
        static constexpr unsigned EVOE_MASK = 0x00000080;
        static constexpr unsigned EVOE(unsigned value) { return (value << 7); }
    } EVCR;

    volatile union MAPR_T // MAPR: AF remap and debug I/O configuration register (AFIO_MAPR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) MAPR_BIT_T
        {
            unsigned SPI1_REMAP         : 1; // bit 0 SPI1 remapping
            unsigned I2C1_REMAP         : 1; // bit 1 I2C1 remapping
            unsigned USART1_REMAP       : 1; // bit 2 USART1 remapping
            unsigned USART2_REMAP       : 1; // bit 3 USART2 remapping
            unsigned USART3_REMAP       : 2; // bits 4..5 USART3 remapping
            unsigned TIM1_REMAP         : 2; // bits 6..7 TIM1 remapping
            unsigned TIM2_REMAP         : 2; // bits 8..9 TIM2 remapping
            unsigned TIM3_REMAP         : 2; // bits 10..11 TIM3 remapping
            unsigned TIM4_REMAP         : 1; // bit 12 TIM4 remapping
            unsigned CAN_REMAP          : 2; // bits 13..14 CAN1 remapping
            unsigned PD01_REMAP         : 1; // bit 15 Port D0/Port D1 mapping on OSCIN/OSCOUT
            unsigned TIM5CH4_IREMAP     : 1; // bit 16 Set and cleared by software
            unsigned ADC1_ETRGINJ_REMAP : 1; // bit 17 ADC 1 External trigger injected conversion remapping
            unsigned ADC1_ETRGREG_REMAP : 1; // bit 18 ADC 1 external trigger regular conversion remapping
            unsigned ADC2_ETRGINJ_REMAP : 1; // bit 19 ADC 2 external trigger injected conversion remapping
            unsigned ADC2_ETRGREG_REMAP : 1; // bit 20 ADC 2 external trigger regular conversion remapping
            unsigned                    : 3; // bits 21..23 unused
            unsigned SWJ_CFG            : 3; // bits 24..26 Serial wire JTAG configuration
            unsigned                    : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned SPI1_REMAP_POS = 0;
        static constexpr unsigned SPI1_REMAP_MASK = 0x00000001;
        static constexpr unsigned SPI1_REMAP(unsigned value) { return (value << 0); }
        static constexpr unsigned I2C1_REMAP_POS = 1;
        static constexpr unsigned I2C1_REMAP_MASK = 0x00000002;
        static constexpr unsigned I2C1_REMAP(unsigned value) { return (value << 1); }
        static constexpr unsigned USART1_REMAP_POS = 2;
        static constexpr unsigned USART1_REMAP_MASK = 0x00000004;
        static constexpr unsigned USART1_REMAP(unsigned value) { return (value << 2); }
        static constexpr unsigned USART2_REMAP_POS = 3;
        static constexpr unsigned USART2_REMAP_MASK = 0x00000008;
        static constexpr unsigned USART2_REMAP(unsigned value) { return (value << 3); }
        static constexpr unsigned USART3_REMAP_POS = 4;
        static constexpr unsigned USART3_REMAP_MASK = 0x00000030;
        static constexpr unsigned USART3_REMAP(unsigned value) { return (value << 4); }
        static constexpr unsigned TIM1_REMAP_POS = 6;
        static constexpr unsigned TIM1_REMAP_MASK = 0x000000c0;
        static constexpr unsigned TIM1_REMAP(unsigned value) { return (value << 6); }
        static constexpr unsigned TIM2_REMAP_POS = 8;
        static constexpr unsigned TIM2_REMAP_MASK = 0x00000300;
        static constexpr unsigned TIM2_REMAP(unsigned value) { return (value << 8); }
        static constexpr unsigned TIM3_REMAP_POS = 10;
        static constexpr unsigned TIM3_REMAP_MASK = 0x00000c00;
        static constexpr unsigned TIM3_REMAP(unsigned value) { return (value << 10); }
        static constexpr unsigned TIM4_REMAP_POS = 12;
        static constexpr unsigned TIM4_REMAP_MASK = 0x00001000;
        static constexpr unsigned TIM4_REMAP(unsigned value) { return (value << 12); }
        static constexpr unsigned CAN_REMAP_POS = 13;
        static constexpr unsigned CAN_REMAP_MASK = 0x00006000;
        static constexpr unsigned CAN_REMAP(unsigned value) { return (value << 13); }
        static constexpr unsigned PD01_REMAP_POS = 15;
        static constexpr unsigned PD01_REMAP_MASK = 0x00008000;
        static constexpr unsigned PD01_REMAP(unsigned value) { return (value << 15); }
        static constexpr unsigned TIM5CH4_IREMAP_POS = 16;
        static constexpr unsigned TIM5CH4_IREMAP_MASK = 0x00010000;
        static constexpr unsigned TIM5CH4_IREMAP(unsigned value) { return (value << 16); }
        static constexpr unsigned ADC1_ETRGINJ_REMAP_POS = 17;
        static constexpr unsigned ADC1_ETRGINJ_REMAP_MASK = 0x00020000;
        static constexpr unsigned ADC1_ETRGINJ_REMAP(unsigned value) { return (value << 17); }
        static constexpr unsigned ADC1_ETRGREG_REMAP_POS = 18;
        static constexpr unsigned ADC1_ETRGREG_REMAP_MASK = 0x00040000;
        static constexpr unsigned ADC1_ETRGREG_REMAP(unsigned value) { return (value << 18); }
        static constexpr unsigned ADC2_ETRGINJ_REMAP_POS = 19;
        static constexpr unsigned ADC2_ETRGINJ_REMAP_MASK = 0x00080000;
        static constexpr unsigned ADC2_ETRGINJ_REMAP(unsigned value) { return (value << 19); }
        static constexpr unsigned ADC2_ETRGREG_REMAP_POS = 20;
        static constexpr unsigned ADC2_ETRGREG_REMAP_MASK = 0x00100000;
        static constexpr unsigned ADC2_ETRGREG_REMAP(unsigned value) { return (value << 20); }
        static constexpr unsigned SWJ_CFG_POS = 24;
        static constexpr unsigned SWJ_CFG_MASK = 0x07000000;
        static constexpr unsigned SWJ_CFG(unsigned value) { return (value << 24); }
    } MAPR;

    volatile union EXTICR1_T // EXTICR1: External interrupt configuration register 1 (AFIO_EXTICR1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR1_BIT_T
        {
            unsigned EXTI0 : 4; // bits 0..3 EXTI0 configuration
            unsigned EXTI1 : 4; // bits 4..7 EXTI1 configuration
            unsigned EXTI2 : 4; // bits 8..11 EXTI2 configuration
            unsigned EXTI3 : 4; // bits 12..15 EXTI3 configuration
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

    volatile union EXTICR2_T // EXTICR2: External interrupt configuration register 2 (AFIO_EXTICR2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR2_BIT_T
        {
            unsigned EXTI4 : 4; // bits 0..3 EXTI4 configuration
            unsigned EXTI5 : 4; // bits 4..7 EXTI5 configuration
            unsigned EXTI6 : 4; // bits 8..11 EXTI6 configuration
            unsigned EXTI7 : 4; // bits 12..15 EXTI7 configuration
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

    volatile union EXTICR3_T // EXTICR3: External interrupt configuration register 3 (AFIO_EXTICR3) 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR3_BIT_T
        {
            unsigned EXTI8  : 4; // bits 0..3 EXTI8 configuration
            unsigned EXTI9  : 4; // bits 4..7 EXTI9 configuration
            unsigned EXTI10 : 4; // bits 8..11 EXTI10 configuration
            unsigned EXTI11 : 4; // bits 12..15 EXTI11 configuration
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

    volatile union EXTICR4_T // EXTICR4: External interrupt configuration register 4 (AFIO_EXTICR4) 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR4_BIT_T
        {
            unsigned EXTI12 : 4; // bits 0..3 EXTI12 configuration
            unsigned EXTI13 : 4; // bits 4..7 EXTI13 configuration
            unsigned EXTI14 : 4; // bits 8..11 EXTI14 configuration
            unsigned EXTI15 : 4; // bits 12..15 EXTI15 configuration
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

    uint8_t Reserved1[4];

    volatile union MAPR2_T // MAPR2: AF remap and debug I/O configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MAPR2_BIT_T
        {
            unsigned             : 5; // bits 0..4 unused
            unsigned TIM9_REMAP  : 1; // bit 5 TIM9 remapping
            unsigned TIM10_REMAP : 1; // bit 6 TIM10 remapping
            unsigned TIM11_REMAP : 1; // bit 7 TIM11 remapping
            unsigned TIM13_REMAP : 1; // bit 8 TIM13 remapping
            unsigned TIM14_REMAP : 1; // bit 9 TIM14 remapping
            unsigned FSMC_NADV   : 1; // bit 10 NADV connect/disconnect
            unsigned             : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned TIM9_REMAP_POS = 5;
        static constexpr unsigned TIM9_REMAP_MASK = 0x00000020;
        static constexpr unsigned TIM9_REMAP(unsigned value) { return (value << 5); }
        static constexpr unsigned TIM10_REMAP_POS = 6;
        static constexpr unsigned TIM10_REMAP_MASK = 0x00000040;
        static constexpr unsigned TIM10_REMAP(unsigned value) { return (value << 6); }
        static constexpr unsigned TIM11_REMAP_POS = 7;
        static constexpr unsigned TIM11_REMAP_MASK = 0x00000080;
        static constexpr unsigned TIM11_REMAP(unsigned value) { return (value << 7); }
        static constexpr unsigned TIM13_REMAP_POS = 8;
        static constexpr unsigned TIM13_REMAP_MASK = 0x00000100;
        static constexpr unsigned TIM13_REMAP(unsigned value) { return (value << 8); }
        static constexpr unsigned TIM14_REMAP_POS = 9;
        static constexpr unsigned TIM14_REMAP_MASK = 0x00000200;
        static constexpr unsigned TIM14_REMAP(unsigned value) { return (value << 9); }
        static constexpr unsigned FSMC_NADV_POS = 10;
        static constexpr unsigned FSMC_NADV_MASK = 0x00000400;
        static constexpr unsigned FSMC_NADV(unsigned value) { return (value << 10); }
    } MAPR2;

}; // struct AFIO_T

static_assert(sizeof(AFIO_T) == AFIO_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp