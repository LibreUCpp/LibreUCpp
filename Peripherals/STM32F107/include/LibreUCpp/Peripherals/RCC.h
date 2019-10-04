#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RCC_T
{
    static constexpr size_t INSTANCE_SIZE = 48;
    static constexpr size_t PADDED_INSTANCE_SIZE = 48;
    static constexpr intptr_t BASE_ADDRESS = 0x40021000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CFGR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CIR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_APB2RSTR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_APB1RSTR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_AHBENR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_APB2ENR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_APB1ENR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_BDCR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_CSR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_AHBRSTR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_CFGR2 = 0x2c;

    volatile union CR_T // CR: Clock control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned HSION   : 1; // bit 0 Internal High Speed clock enable
            unsigned HSIRDY  : 1; // bit 1 Internal High Speed clock ready flag
            unsigned         : 1; // bit 2 unused
            unsigned HSITRIM : 5; // bits 3..7 Internal High Speed clock trimming
            unsigned HSICAL  : 8; // bits 8..15 Internal High Speed clock Calibration
            unsigned HSEON   : 1; // bit 16 External High Speed clock enable
            unsigned HSERDY  : 1; // bit 17 External High Speed clock ready flag
            unsigned HSEBYP  : 1; // bit 18 External High Speed clock Bypass
            unsigned CSSON   : 1; // bit 19 Clock Security System enable
            unsigned         : 4; // bits 20..23 unused
            unsigned PLLON   : 1; // bit 24 PLL enable
            unsigned PLLRDY  : 1; // bit 25 PLL clock ready flag
            unsigned PLL2ON  : 1; // bit 26 PLL2 enable
            unsigned PLL2RDY : 1; // bit 27 PLL2 clock ready flag
            unsigned PLL3ON  : 1; // bit 28 PLL3 enable
            unsigned PLL3RDY : 1; // bit 29 PLL3 clock ready flag
            unsigned         : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned HSION_POS = 0;
        static constexpr unsigned HSION_MASK = 0x00000001;
        static constexpr unsigned HSION(unsigned value) { return (value << 0); }
        static constexpr unsigned HSIRDY_POS = 1;
        static constexpr unsigned HSIRDY_MASK = 0x00000002;
        static constexpr unsigned HSIRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned HSITRIM_POS = 3;
        static constexpr unsigned HSITRIM_MASK = 0x000000f8;
        static constexpr unsigned HSITRIM(unsigned value) { return (value << 3); }
        static constexpr unsigned HSICAL_POS = 8;
        static constexpr unsigned HSICAL_MASK = 0x0000ff00;
        static constexpr unsigned HSICAL(unsigned value) { return (value << 8); }
        static constexpr unsigned HSEON_POS = 16;
        static constexpr unsigned HSEON_MASK = 0x00010000;
        static constexpr unsigned HSEON(unsigned value) { return (value << 16); }
        static constexpr unsigned HSERDY_POS = 17;
        static constexpr unsigned HSERDY_MASK = 0x00020000;
        static constexpr unsigned HSERDY(unsigned value) { return (value << 17); }
        static constexpr unsigned HSEBYP_POS = 18;
        static constexpr unsigned HSEBYP_MASK = 0x00040000;
        static constexpr unsigned HSEBYP(unsigned value) { return (value << 18); }
        static constexpr unsigned CSSON_POS = 19;
        static constexpr unsigned CSSON_MASK = 0x00080000;
        static constexpr unsigned CSSON(unsigned value) { return (value << 19); }
        static constexpr unsigned PLLON_POS = 24;
        static constexpr unsigned PLLON_MASK = 0x01000000;
        static constexpr unsigned PLLON(unsigned value) { return (value << 24); }
        static constexpr unsigned PLLRDY_POS = 25;
        static constexpr unsigned PLLRDY_MASK = 0x02000000;
        static constexpr unsigned PLLRDY(unsigned value) { return (value << 25); }
        static constexpr unsigned PLL2ON_POS = 26;
        static constexpr unsigned PLL2ON_MASK = 0x04000000;
        static constexpr unsigned PLL2ON(unsigned value) { return (value << 26); }
        static constexpr unsigned PLL2RDY_POS = 27;
        static constexpr unsigned PLL2RDY_MASK = 0x08000000;
        static constexpr unsigned PLL2RDY(unsigned value) { return (value << 27); }
        static constexpr unsigned PLL3ON_POS = 28;
        static constexpr unsigned PLL3ON_MASK = 0x10000000;
        static constexpr unsigned PLL3ON(unsigned value) { return (value << 28); }
        static constexpr unsigned PLL3RDY_POS = 29;
        static constexpr unsigned PLL3RDY_MASK = 0x20000000;
        static constexpr unsigned PLL3RDY(unsigned value) { return (value << 29); }
    } CR;

    volatile union CFGR_T // CFGR: Clock configuration register (RCC_CFGR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR_BIT_T
        {
            unsigned SW       : 2; // bits 0..1 System clock Switch
            unsigned SWS      : 2; // bits 2..3 System Clock Switch Status
            unsigned HPRE     : 4; // bits 4..7 AHB prescaler
            unsigned PPRE1    : 3; // bits 8..10 APB Low speed prescaler (APB1)
            unsigned PPRE2    : 3; // bits 11..13 APB High speed prescaler (APB2)
            unsigned ADCPRE   : 2; // bits 14..15 ADC prescaler
            unsigned PLLSRC   : 1; // bit 16 PLL entry clock source
            unsigned PLLXTPRE : 1; // bit 17 HSE divider for PLL entry
            unsigned PLLMUL   : 4; // bits 18..21 PLL Multiplication Factor
            unsigned OTGFSPRE : 1; // bit 22 USB OTG FS prescaler
            unsigned          : 1; // bit 23 unused
            unsigned MCO      : 4; // bits 24..27 Microcontroller clock output
            unsigned          : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned SW_POS = 0;
        static constexpr unsigned SW_MASK = 0x00000003;
        static constexpr unsigned SW(unsigned value) { return (value << 0); }
        static constexpr unsigned SWS_POS = 2;
        static constexpr unsigned SWS_MASK = 0x0000000c;
        static constexpr unsigned SWS(unsigned value) { return (value << 2); }
        static constexpr unsigned HPRE_POS = 4;
        static constexpr unsigned HPRE_MASK = 0x000000f0;
        static constexpr unsigned HPRE(unsigned value) { return (value << 4); }
        static constexpr unsigned PPRE1_POS = 8;
        static constexpr unsigned PPRE1_MASK = 0x00000700;
        static constexpr unsigned PPRE1(unsigned value) { return (value << 8); }
        static constexpr unsigned PPRE2_POS = 11;
        static constexpr unsigned PPRE2_MASK = 0x00003800;
        static constexpr unsigned PPRE2(unsigned value) { return (value << 11); }
        static constexpr unsigned ADCPRE_POS = 14;
        static constexpr unsigned ADCPRE_MASK = 0x0000c000;
        static constexpr unsigned ADCPRE(unsigned value) { return (value << 14); }
        static constexpr unsigned PLLSRC_POS = 16;
        static constexpr unsigned PLLSRC_MASK = 0x00010000;
        static constexpr unsigned PLLSRC(unsigned value) { return (value << 16); }
        static constexpr unsigned PLLXTPRE_POS = 17;
        static constexpr unsigned PLLXTPRE_MASK = 0x00020000;
        static constexpr unsigned PLLXTPRE(unsigned value) { return (value << 17); }
        static constexpr unsigned PLLMUL_POS = 18;
        static constexpr unsigned PLLMUL_MASK = 0x003c0000;
        static constexpr unsigned PLLMUL(unsigned value) { return (value << 18); }
        static constexpr unsigned OTGFSPRE_POS = 22;
        static constexpr unsigned OTGFSPRE_MASK = 0x00400000;
        static constexpr unsigned OTGFSPRE(unsigned value) { return (value << 22); }
        static constexpr unsigned MCO_POS = 24;
        static constexpr unsigned MCO_MASK = 0x0f000000;
        static constexpr unsigned MCO(unsigned value) { return (value << 24); }
    } CFGR;

    volatile union CIR_T // CIR: Clock interrupt register (RCC_CIR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CIR_BIT_T
        {
            unsigned LSIRDYF   : 1; // bit 0 LSI Ready Interrupt flag
            unsigned LSERDYF   : 1; // bit 1 LSE Ready Interrupt flag
            unsigned HSIRDYF   : 1; // bit 2 HSI Ready Interrupt flag
            unsigned HSERDYF   : 1; // bit 3 HSE Ready Interrupt flag
            unsigned PLLRDYF   : 1; // bit 4 PLL Ready Interrupt flag
            unsigned PLL2RDYF  : 1; // bit 5 PLL2 Ready Interrupt flag
            unsigned PLL3RDYF  : 1; // bit 6 PLL3 Ready Interrupt flag
            unsigned CSSF      : 1; // bit 7 Clock Security System Interrupt flag
            unsigned LSIRDYIE  : 1; // bit 8 LSI Ready Interrupt Enable
            unsigned LSERDYIE  : 1; // bit 9 LSE Ready Interrupt Enable
            unsigned HSIRDYIE  : 1; // bit 10 HSI Ready Interrupt Enable
            unsigned HSERDYIE  : 1; // bit 11 HSE Ready Interrupt Enable
            unsigned PLLRDYIE  : 1; // bit 12 PLL Ready Interrupt Enable
            unsigned PLL2RDYIE : 1; // bit 13 PLL2 Ready Interrupt Enable
            unsigned PLL3RDYIE : 1; // bit 14 PLL3 Ready Interrupt Enable
            unsigned           : 1; // bit 15 unused
            unsigned LSIRDYC   : 1; // bit 16 LSI Ready Interrupt Clear
            unsigned LSERDYC   : 1; // bit 17 LSE Ready Interrupt Clear
            unsigned HSIRDYC   : 1; // bit 18 HSI Ready Interrupt Clear
            unsigned HSERDYC   : 1; // bit 19 HSE Ready Interrupt Clear
            unsigned PLLRDYC   : 1; // bit 20 PLL Ready Interrupt Clear
            unsigned PLL2RDYC  : 1; // bit 21 PLL2 Ready Interrupt Clear
            unsigned PLL3RDYC  : 1; // bit 22 PLL3 Ready Interrupt Clear
            unsigned CSSC      : 1; // bit 23 Clock security system interrupt clear
            unsigned           : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned LSIRDYF_POS = 0;
        static constexpr unsigned LSIRDYF_MASK = 0x00000001;
        static constexpr unsigned LSIRDYF(unsigned value) { return (value << 0); }
        static constexpr unsigned LSERDYF_POS = 1;
        static constexpr unsigned LSERDYF_MASK = 0x00000002;
        static constexpr unsigned LSERDYF(unsigned value) { return (value << 1); }
        static constexpr unsigned HSIRDYF_POS = 2;
        static constexpr unsigned HSIRDYF_MASK = 0x00000004;
        static constexpr unsigned HSIRDYF(unsigned value) { return (value << 2); }
        static constexpr unsigned HSERDYF_POS = 3;
        static constexpr unsigned HSERDYF_MASK = 0x00000008;
        static constexpr unsigned HSERDYF(unsigned value) { return (value << 3); }
        static constexpr unsigned PLLRDYF_POS = 4;
        static constexpr unsigned PLLRDYF_MASK = 0x00000010;
        static constexpr unsigned PLLRDYF(unsigned value) { return (value << 4); }
        static constexpr unsigned PLL2RDYF_POS = 5;
        static constexpr unsigned PLL2RDYF_MASK = 0x00000020;
        static constexpr unsigned PLL2RDYF(unsigned value) { return (value << 5); }
        static constexpr unsigned PLL3RDYF_POS = 6;
        static constexpr unsigned PLL3RDYF_MASK = 0x00000040;
        static constexpr unsigned PLL3RDYF(unsigned value) { return (value << 6); }
        static constexpr unsigned CSSF_POS = 7;
        static constexpr unsigned CSSF_MASK = 0x00000080;
        static constexpr unsigned CSSF(unsigned value) { return (value << 7); }
        static constexpr unsigned LSIRDYIE_POS = 8;
        static constexpr unsigned LSIRDYIE_MASK = 0x00000100;
        static constexpr unsigned LSIRDYIE(unsigned value) { return (value << 8); }
        static constexpr unsigned LSERDYIE_POS = 9;
        static constexpr unsigned LSERDYIE_MASK = 0x00000200;
        static constexpr unsigned LSERDYIE(unsigned value) { return (value << 9); }
        static constexpr unsigned HSIRDYIE_POS = 10;
        static constexpr unsigned HSIRDYIE_MASK = 0x00000400;
        static constexpr unsigned HSIRDYIE(unsigned value) { return (value << 10); }
        static constexpr unsigned HSERDYIE_POS = 11;
        static constexpr unsigned HSERDYIE_MASK = 0x00000800;
        static constexpr unsigned HSERDYIE(unsigned value) { return (value << 11); }
        static constexpr unsigned PLLRDYIE_POS = 12;
        static constexpr unsigned PLLRDYIE_MASK = 0x00001000;
        static constexpr unsigned PLLRDYIE(unsigned value) { return (value << 12); }
        static constexpr unsigned PLL2RDYIE_POS = 13;
        static constexpr unsigned PLL2RDYIE_MASK = 0x00002000;
        static constexpr unsigned PLL2RDYIE(unsigned value) { return (value << 13); }
        static constexpr unsigned PLL3RDYIE_POS = 14;
        static constexpr unsigned PLL3RDYIE_MASK = 0x00004000;
        static constexpr unsigned PLL3RDYIE(unsigned value) { return (value << 14); }
        static constexpr unsigned LSIRDYC_POS = 16;
        static constexpr unsigned LSIRDYC_MASK = 0x00010000;
        static constexpr unsigned LSIRDYC(unsigned value) { return (value << 16); }
        static constexpr unsigned LSERDYC_POS = 17;
        static constexpr unsigned LSERDYC_MASK = 0x00020000;
        static constexpr unsigned LSERDYC(unsigned value) { return (value << 17); }
        static constexpr unsigned HSIRDYC_POS = 18;
        static constexpr unsigned HSIRDYC_MASK = 0x00040000;
        static constexpr unsigned HSIRDYC(unsigned value) { return (value << 18); }
        static constexpr unsigned HSERDYC_POS = 19;
        static constexpr unsigned HSERDYC_MASK = 0x00080000;
        static constexpr unsigned HSERDYC(unsigned value) { return (value << 19); }
        static constexpr unsigned PLLRDYC_POS = 20;
        static constexpr unsigned PLLRDYC_MASK = 0x00100000;
        static constexpr unsigned PLLRDYC(unsigned value) { return (value << 20); }
        static constexpr unsigned PLL2RDYC_POS = 21;
        static constexpr unsigned PLL2RDYC_MASK = 0x00200000;
        static constexpr unsigned PLL2RDYC(unsigned value) { return (value << 21); }
        static constexpr unsigned PLL3RDYC_POS = 22;
        static constexpr unsigned PLL3RDYC_MASK = 0x00400000;
        static constexpr unsigned PLL3RDYC(unsigned value) { return (value << 22); }
        static constexpr unsigned CSSC_POS = 23;
        static constexpr unsigned CSSC_MASK = 0x00800000;
        static constexpr unsigned CSSC(unsigned value) { return (value << 23); }
    } CIR;

    volatile union APB2RSTR_T // APB2RSTR: APB2 peripheral reset register (RCC_APB2RSTR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB2RSTR_BIT_T
        {
            unsigned AFIORST   : 1; // bit 0 Alternate function I/O reset
            unsigned           : 1; // bit 1 unused
            unsigned IOPARST   : 1; // bit 2 IO port A reset
            unsigned IOPBRST   : 1; // bit 3 IO port B reset
            unsigned IOPCRST   : 1; // bit 4 IO port C reset
            unsigned IOPDRST   : 1; // bit 5 IO port D reset
            unsigned IOPERST   : 1; // bit 6 IO port E reset
            unsigned           : 2; // bits 7..8 unused
            unsigned ADC1RST   : 1; // bit 9 ADC 1 interface reset
            unsigned ADC2RST   : 1; // bit 10 ADC 2 interface reset
            unsigned TIM1RST   : 1; // bit 11 TIM1 timer reset
            unsigned SPI1RST   : 1; // bit 12 SPI 1 reset
            unsigned           : 1; // bit 13 unused
            unsigned USART1RST : 1; // bit 14 USART1 reset
            unsigned           : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned AFIORST_POS = 0;
        static constexpr unsigned AFIORST_MASK = 0x00000001;
        static constexpr unsigned AFIORST(unsigned value) { return (value << 0); }
        static constexpr unsigned IOPARST_POS = 2;
        static constexpr unsigned IOPARST_MASK = 0x00000004;
        static constexpr unsigned IOPARST(unsigned value) { return (value << 2); }
        static constexpr unsigned IOPBRST_POS = 3;
        static constexpr unsigned IOPBRST_MASK = 0x00000008;
        static constexpr unsigned IOPBRST(unsigned value) { return (value << 3); }
        static constexpr unsigned IOPCRST_POS = 4;
        static constexpr unsigned IOPCRST_MASK = 0x00000010;
        static constexpr unsigned IOPCRST(unsigned value) { return (value << 4); }
        static constexpr unsigned IOPDRST_POS = 5;
        static constexpr unsigned IOPDRST_MASK = 0x00000020;
        static constexpr unsigned IOPDRST(unsigned value) { return (value << 5); }
        static constexpr unsigned IOPERST_POS = 6;
        static constexpr unsigned IOPERST_MASK = 0x00000040;
        static constexpr unsigned IOPERST(unsigned value) { return (value << 6); }
        static constexpr unsigned ADC1RST_POS = 9;
        static constexpr unsigned ADC1RST_MASK = 0x00000200;
        static constexpr unsigned ADC1RST(unsigned value) { return (value << 9); }
        static constexpr unsigned ADC2RST_POS = 10;
        static constexpr unsigned ADC2RST_MASK = 0x00000400;
        static constexpr unsigned ADC2RST(unsigned value) { return (value << 10); }
        static constexpr unsigned TIM1RST_POS = 11;
        static constexpr unsigned TIM1RST_MASK = 0x00000800;
        static constexpr unsigned TIM1RST(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI1RST_POS = 12;
        static constexpr unsigned SPI1RST_MASK = 0x00001000;
        static constexpr unsigned SPI1RST(unsigned value) { return (value << 12); }
        static constexpr unsigned USART1RST_POS = 14;
        static constexpr unsigned USART1RST_MASK = 0x00004000;
        static constexpr unsigned USART1RST(unsigned value) { return (value << 14); }
    } APB2RSTR;

    volatile union APB1RSTR_T // APB1RSTR: APB1 peripheral reset register (RCC_APB1RSTR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB1RSTR_BIT_T
        {
            unsigned TIM2RST   : 1; // bit 0 Timer 2 reset
            unsigned TIM3RST   : 1; // bit 1 Timer 3 reset
            unsigned TIM4RST   : 1; // bit 2 Timer 4 reset
            unsigned TIM5RST   : 1; // bit 3 Timer 5 reset
            unsigned TIM6RST   : 1; // bit 4 Timer 6 reset
            unsigned TIM7RST   : 1; // bit 5 Timer 7 reset
            unsigned           : 5; // bits 6..10 unused
            unsigned WWDGRST   : 1; // bit 11 Window watchdog reset
            unsigned           : 2; // bits 12..13 unused
            unsigned SPI2RST   : 1; // bit 14 SPI2 reset
            unsigned SPI3RST   : 1; // bit 15 SPI3 reset
            unsigned           : 1; // bit 16 unused
            unsigned USART2RST : 1; // bit 17 USART 2 reset
            unsigned USART3RST : 1; // bit 18 USART 3 reset
            unsigned USART4RST : 1; // bit 19 USART 4 reset
            unsigned USART5RST : 1; // bit 20 USART 5 reset
            unsigned I2C1RST   : 1; // bit 21 I2C1 reset
            unsigned I2C2RST   : 1; // bit 22 I2C2 reset
            unsigned           : 2; // bits 23..24 unused
            unsigned CAN1RST   : 1; // bit 25 CAN1 reset
            unsigned CAN2RST   : 1; // bit 26 CAN2 reset
            unsigned BKPRST    : 1; // bit 27 Backup interface reset
            unsigned PWRRST    : 1; // bit 28 Power interface reset
            unsigned DACRST    : 1; // bit 29 DAC interface reset
            unsigned           : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned TIM2RST_POS = 0;
        static constexpr unsigned TIM2RST_MASK = 0x00000001;
        static constexpr unsigned TIM2RST(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM3RST_POS = 1;
        static constexpr unsigned TIM3RST_MASK = 0x00000002;
        static constexpr unsigned TIM3RST(unsigned value) { return (value << 1); }
        static constexpr unsigned TIM4RST_POS = 2;
        static constexpr unsigned TIM4RST_MASK = 0x00000004;
        static constexpr unsigned TIM4RST(unsigned value) { return (value << 2); }
        static constexpr unsigned TIM5RST_POS = 3;
        static constexpr unsigned TIM5RST_MASK = 0x00000008;
        static constexpr unsigned TIM5RST(unsigned value) { return (value << 3); }
        static constexpr unsigned TIM6RST_POS = 4;
        static constexpr unsigned TIM6RST_MASK = 0x00000010;
        static constexpr unsigned TIM6RST(unsigned value) { return (value << 4); }
        static constexpr unsigned TIM7RST_POS = 5;
        static constexpr unsigned TIM7RST_MASK = 0x00000020;
        static constexpr unsigned TIM7RST(unsigned value) { return (value << 5); }
        static constexpr unsigned WWDGRST_POS = 11;
        static constexpr unsigned WWDGRST_MASK = 0x00000800;
        static constexpr unsigned WWDGRST(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI2RST_POS = 14;
        static constexpr unsigned SPI2RST_MASK = 0x00004000;
        static constexpr unsigned SPI2RST(unsigned value) { return (value << 14); }
        static constexpr unsigned SPI3RST_POS = 15;
        static constexpr unsigned SPI3RST_MASK = 0x00008000;
        static constexpr unsigned SPI3RST(unsigned value) { return (value << 15); }
        static constexpr unsigned USART2RST_POS = 17;
        static constexpr unsigned USART2RST_MASK = 0x00020000;
        static constexpr unsigned USART2RST(unsigned value) { return (value << 17); }
        static constexpr unsigned USART3RST_POS = 18;
        static constexpr unsigned USART3RST_MASK = 0x00040000;
        static constexpr unsigned USART3RST(unsigned value) { return (value << 18); }
        static constexpr unsigned USART4RST_POS = 19;
        static constexpr unsigned USART4RST_MASK = 0x00080000;
        static constexpr unsigned USART4RST(unsigned value) { return (value << 19); }
        static constexpr unsigned USART5RST_POS = 20;
        static constexpr unsigned USART5RST_MASK = 0x00100000;
        static constexpr unsigned USART5RST(unsigned value) { return (value << 20); }
        static constexpr unsigned I2C1RST_POS = 21;
        static constexpr unsigned I2C1RST_MASK = 0x00200000;
        static constexpr unsigned I2C1RST(unsigned value) { return (value << 21); }
        static constexpr unsigned I2C2RST_POS = 22;
        static constexpr unsigned I2C2RST_MASK = 0x00400000;
        static constexpr unsigned I2C2RST(unsigned value) { return (value << 22); }
        static constexpr unsigned CAN1RST_POS = 25;
        static constexpr unsigned CAN1RST_MASK = 0x02000000;
        static constexpr unsigned CAN1RST(unsigned value) { return (value << 25); }
        static constexpr unsigned CAN2RST_POS = 26;
        static constexpr unsigned CAN2RST_MASK = 0x04000000;
        static constexpr unsigned CAN2RST(unsigned value) { return (value << 26); }
        static constexpr unsigned BKPRST_POS = 27;
        static constexpr unsigned BKPRST_MASK = 0x08000000;
        static constexpr unsigned BKPRST(unsigned value) { return (value << 27); }
        static constexpr unsigned PWRRST_POS = 28;
        static constexpr unsigned PWRRST_MASK = 0x10000000;
        static constexpr unsigned PWRRST(unsigned value) { return (value << 28); }
        static constexpr unsigned DACRST_POS = 29;
        static constexpr unsigned DACRST_MASK = 0x20000000;
        static constexpr unsigned DACRST(unsigned value) { return (value << 29); }
    } APB1RSTR;

    volatile union AHBENR_T // AHBENR: AHB Peripheral Clock enable register (RCC_AHBENR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHBENR_BIT_T
        {
            unsigned DMA1EN     : 1; // bit 0 DMA1 clock enable
            unsigned DMA2EN     : 1; // bit 1 DMA2 clock enable
            unsigned SRAMEN     : 1; // bit 2 SRAM interface clock enable
            unsigned            : 1; // bit 3 unused
            unsigned FLITFEN    : 1; // bit 4 FLITF clock enable
            unsigned            : 1; // bit 5 unused
            unsigned CRCEN      : 1; // bit 6 CRC clock enable
            unsigned            : 5; // bits 7..11 unused
            unsigned OTGFSEN    : 1; // bit 12 USB OTG FS clock enable
            unsigned            : 1; // bit 13 unused
            unsigned ETHMACEN   : 1; // bit 14 Ethernet MAC clock enable
            unsigned ETHMACTXEN : 1; // bit 15 Ethernet MAC TX clock enable
            unsigned ETHMACRXEN : 1; // bit 16 Ethernet MAC RX clock enable
            unsigned            : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned DMA1EN_POS = 0;
        static constexpr unsigned DMA1EN_MASK = 0x00000001;
        static constexpr unsigned DMA1EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMA2EN_POS = 1;
        static constexpr unsigned DMA2EN_MASK = 0x00000002;
        static constexpr unsigned DMA2EN(unsigned value) { return (value << 1); }
        static constexpr unsigned SRAMEN_POS = 2;
        static constexpr unsigned SRAMEN_MASK = 0x00000004;
        static constexpr unsigned SRAMEN(unsigned value) { return (value << 2); }
        static constexpr unsigned FLITFEN_POS = 4;
        static constexpr unsigned FLITFEN_MASK = 0x00000010;
        static constexpr unsigned FLITFEN(unsigned value) { return (value << 4); }
        static constexpr unsigned CRCEN_POS = 6;
        static constexpr unsigned CRCEN_MASK = 0x00000040;
        static constexpr unsigned CRCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned OTGFSEN_POS = 12;
        static constexpr unsigned OTGFSEN_MASK = 0x00001000;
        static constexpr unsigned OTGFSEN(unsigned value) { return (value << 12); }
        static constexpr unsigned ETHMACEN_POS = 14;
        static constexpr unsigned ETHMACEN_MASK = 0x00004000;
        static constexpr unsigned ETHMACEN(unsigned value) { return (value << 14); }
        static constexpr unsigned ETHMACTXEN_POS = 15;
        static constexpr unsigned ETHMACTXEN_MASK = 0x00008000;
        static constexpr unsigned ETHMACTXEN(unsigned value) { return (value << 15); }
        static constexpr unsigned ETHMACRXEN_POS = 16;
        static constexpr unsigned ETHMACRXEN_MASK = 0x00010000;
        static constexpr unsigned ETHMACRXEN(unsigned value) { return (value << 16); }
    } AHBENR;

    volatile union APB2ENR_T // APB2ENR: APB2 peripheral clock enable register (RCC_APB2ENR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB2ENR_BIT_T
        {
            unsigned AFIOEN   : 1; // bit 0 Alternate function I/O clock enable
            unsigned          : 1; // bit 1 unused
            unsigned IOPAEN   : 1; // bit 2 I/O port A clock enable
            unsigned IOPBEN   : 1; // bit 3 I/O port B clock enable
            unsigned IOPCEN   : 1; // bit 4 I/O port C clock enable
            unsigned IOPDEN   : 1; // bit 5 I/O port D clock enable
            unsigned IOPEEN   : 1; // bit 6 I/O port E clock enable
            unsigned          : 2; // bits 7..8 unused
            unsigned ADC1EN   : 1; // bit 9 ADC 1 interface clock enable
            unsigned ADC2EN   : 1; // bit 10 ADC 2 interface clock enable
            unsigned TIM1EN   : 1; // bit 11 TIM1 Timer clock enable
            unsigned SPI1EN   : 1; // bit 12 SPI 1 clock enable
            unsigned          : 1; // bit 13 unused
            unsigned USART1EN : 1; // bit 14 USART1 clock enable
            unsigned          : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned AFIOEN_POS = 0;
        static constexpr unsigned AFIOEN_MASK = 0x00000001;
        static constexpr unsigned AFIOEN(unsigned value) { return (value << 0); }
        static constexpr unsigned IOPAEN_POS = 2;
        static constexpr unsigned IOPAEN_MASK = 0x00000004;
        static constexpr unsigned IOPAEN(unsigned value) { return (value << 2); }
        static constexpr unsigned IOPBEN_POS = 3;
        static constexpr unsigned IOPBEN_MASK = 0x00000008;
        static constexpr unsigned IOPBEN(unsigned value) { return (value << 3); }
        static constexpr unsigned IOPCEN_POS = 4;
        static constexpr unsigned IOPCEN_MASK = 0x00000010;
        static constexpr unsigned IOPCEN(unsigned value) { return (value << 4); }
        static constexpr unsigned IOPDEN_POS = 5;
        static constexpr unsigned IOPDEN_MASK = 0x00000020;
        static constexpr unsigned IOPDEN(unsigned value) { return (value << 5); }
        static constexpr unsigned IOPEEN_POS = 6;
        static constexpr unsigned IOPEEN_MASK = 0x00000040;
        static constexpr unsigned IOPEEN(unsigned value) { return (value << 6); }
        static constexpr unsigned ADC1EN_POS = 9;
        static constexpr unsigned ADC1EN_MASK = 0x00000200;
        static constexpr unsigned ADC1EN(unsigned value) { return (value << 9); }
        static constexpr unsigned ADC2EN_POS = 10;
        static constexpr unsigned ADC2EN_MASK = 0x00000400;
        static constexpr unsigned ADC2EN(unsigned value) { return (value << 10); }
        static constexpr unsigned TIM1EN_POS = 11;
        static constexpr unsigned TIM1EN_MASK = 0x00000800;
        static constexpr unsigned TIM1EN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI1EN_POS = 12;
        static constexpr unsigned SPI1EN_MASK = 0x00001000;
        static constexpr unsigned SPI1EN(unsigned value) { return (value << 12); }
        static constexpr unsigned USART1EN_POS = 14;
        static constexpr unsigned USART1EN_MASK = 0x00004000;
        static constexpr unsigned USART1EN(unsigned value) { return (value << 14); }
    } APB2ENR;

    volatile union APB1ENR_T // APB1ENR: APB1 peripheral clock enable register (RCC_APB1ENR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB1ENR_BIT_T
        {
            unsigned TIM2EN   : 1; // bit 0 Timer 2 clock enable
            unsigned TIM3EN   : 1; // bit 1 Timer 3 clock enable
            unsigned TIM4EN   : 1; // bit 2 Timer 4 clock enable
            unsigned TIM5EN   : 1; // bit 3 Timer 5 clock enable
            unsigned TIM6EN   : 1; // bit 4 Timer 6 clock enable
            unsigned TIM7EN   : 1; // bit 5 Timer 7 clock enable
            unsigned          : 5; // bits 6..10 unused
            unsigned WWDGEN   : 1; // bit 11 Window watchdog clock enable
            unsigned          : 2; // bits 12..13 unused
            unsigned SPI2EN   : 1; // bit 14 SPI 2 clock enable
            unsigned SPI3EN   : 1; // bit 15 SPI 3 clock enable
            unsigned          : 1; // bit 16 unused
            unsigned USART2EN : 1; // bit 17 USART 2 clock enable
            unsigned USART3EN : 1; // bit 18 USART 3 clock enable
            unsigned UART4EN  : 1; // bit 19 UART 4 clock enable
            unsigned UART5EN  : 1; // bit 20 UART 5 clock enable
            unsigned I2C1EN   : 1; // bit 21 I2C 1 clock enable
            unsigned I2C2EN   : 1; // bit 22 I2C 2 clock enable
            unsigned          : 2; // bits 23..24 unused
            unsigned CAN1EN   : 1; // bit 25 CAN1 clock enable
            unsigned CAN2EN   : 1; // bit 26 CAN2 clock enable
            unsigned BKPEN    : 1; // bit 27 Backup interface clock enable
            unsigned PWREN    : 1; // bit 28 Power interface clock enable
            unsigned DACEN    : 1; // bit 29 DAC interface clock enable
            unsigned          : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned TIM2EN_POS = 0;
        static constexpr unsigned TIM2EN_MASK = 0x00000001;
        static constexpr unsigned TIM2EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM3EN_POS = 1;
        static constexpr unsigned TIM3EN_MASK = 0x00000002;
        static constexpr unsigned TIM3EN(unsigned value) { return (value << 1); }
        static constexpr unsigned TIM4EN_POS = 2;
        static constexpr unsigned TIM4EN_MASK = 0x00000004;
        static constexpr unsigned TIM4EN(unsigned value) { return (value << 2); }
        static constexpr unsigned TIM5EN_POS = 3;
        static constexpr unsigned TIM5EN_MASK = 0x00000008;
        static constexpr unsigned TIM5EN(unsigned value) { return (value << 3); }
        static constexpr unsigned TIM6EN_POS = 4;
        static constexpr unsigned TIM6EN_MASK = 0x00000010;
        static constexpr unsigned TIM6EN(unsigned value) { return (value << 4); }
        static constexpr unsigned TIM7EN_POS = 5;
        static constexpr unsigned TIM7EN_MASK = 0x00000020;
        static constexpr unsigned TIM7EN(unsigned value) { return (value << 5); }
        static constexpr unsigned WWDGEN_POS = 11;
        static constexpr unsigned WWDGEN_MASK = 0x00000800;
        static constexpr unsigned WWDGEN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI2EN_POS = 14;
        static constexpr unsigned SPI2EN_MASK = 0x00004000;
        static constexpr unsigned SPI2EN(unsigned value) { return (value << 14); }
        static constexpr unsigned SPI3EN_POS = 15;
        static constexpr unsigned SPI3EN_MASK = 0x00008000;
        static constexpr unsigned SPI3EN(unsigned value) { return (value << 15); }
        static constexpr unsigned USART2EN_POS = 17;
        static constexpr unsigned USART2EN_MASK = 0x00020000;
        static constexpr unsigned USART2EN(unsigned value) { return (value << 17); }
        static constexpr unsigned USART3EN_POS = 18;
        static constexpr unsigned USART3EN_MASK = 0x00040000;
        static constexpr unsigned USART3EN(unsigned value) { return (value << 18); }
        static constexpr unsigned UART4EN_POS = 19;
        static constexpr unsigned UART4EN_MASK = 0x00080000;
        static constexpr unsigned UART4EN(unsigned value) { return (value << 19); }
        static constexpr unsigned UART5EN_POS = 20;
        static constexpr unsigned UART5EN_MASK = 0x00100000;
        static constexpr unsigned UART5EN(unsigned value) { return (value << 20); }
        static constexpr unsigned I2C1EN_POS = 21;
        static constexpr unsigned I2C1EN_MASK = 0x00200000;
        static constexpr unsigned I2C1EN(unsigned value) { return (value << 21); }
        static constexpr unsigned I2C2EN_POS = 22;
        static constexpr unsigned I2C2EN_MASK = 0x00400000;
        static constexpr unsigned I2C2EN(unsigned value) { return (value << 22); }
        static constexpr unsigned CAN1EN_POS = 25;
        static constexpr unsigned CAN1EN_MASK = 0x02000000;
        static constexpr unsigned CAN1EN(unsigned value) { return (value << 25); }
        static constexpr unsigned CAN2EN_POS = 26;
        static constexpr unsigned CAN2EN_MASK = 0x04000000;
        static constexpr unsigned CAN2EN(unsigned value) { return (value << 26); }
        static constexpr unsigned BKPEN_POS = 27;
        static constexpr unsigned BKPEN_MASK = 0x08000000;
        static constexpr unsigned BKPEN(unsigned value) { return (value << 27); }
        static constexpr unsigned PWREN_POS = 28;
        static constexpr unsigned PWREN_MASK = 0x10000000;
        static constexpr unsigned PWREN(unsigned value) { return (value << 28); }
        static constexpr unsigned DACEN_POS = 29;
        static constexpr unsigned DACEN_MASK = 0x20000000;
        static constexpr unsigned DACEN(unsigned value) { return (value << 29); }
    } APB1ENR;

    volatile union BDCR_T // BDCR: Backup domain control register (RCC_BDCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) BDCR_BIT_T
        {
            unsigned LSEON  : 1; // bit 0 External Low Speed oscillator enable
            unsigned LSERDY : 1; // bit 1 External Low Speed oscillator ready
            unsigned LSEBYP : 1; // bit 2 External Low Speed oscillator bypass
            unsigned        : 5; // bits 3..7 unused
            unsigned RTCSEL : 2; // bits 8..9 RTC clock source selection
            unsigned        : 5; // bits 10..14 unused
            unsigned RTCEN  : 1; // bit 15 RTC clock enable
            unsigned BDRST  : 1; // bit 16 Backup domain software reset
            unsigned        : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned LSEON_POS = 0;
        static constexpr unsigned LSEON_MASK = 0x00000001;
        static constexpr unsigned LSEON(unsigned value) { return (value << 0); }
        static constexpr unsigned LSERDY_POS = 1;
        static constexpr unsigned LSERDY_MASK = 0x00000002;
        static constexpr unsigned LSERDY(unsigned value) { return (value << 1); }
        static constexpr unsigned LSEBYP_POS = 2;
        static constexpr unsigned LSEBYP_MASK = 0x00000004;
        static constexpr unsigned LSEBYP(unsigned value) { return (value << 2); }
        static constexpr unsigned RTCSEL_POS = 8;
        static constexpr unsigned RTCSEL_MASK = 0x00000300;
        static constexpr unsigned RTCSEL(unsigned value) { return (value << 8); }
        static constexpr unsigned RTCEN_POS = 15;
        static constexpr unsigned RTCEN_MASK = 0x00008000;
        static constexpr unsigned RTCEN(unsigned value) { return (value << 15); }
        static constexpr unsigned BDRST_POS = 16;
        static constexpr unsigned BDRST_MASK = 0x00010000;
        static constexpr unsigned BDRST(unsigned value) { return (value << 16); }
    } BDCR;

    volatile union CSR_T // CSR: Control/status register (RCC_CSR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned LSION    : 1; // bit 0 Internal low speed oscillator enable
            unsigned LSIRDY   : 1; // bit 1 Internal low speed oscillator ready
            unsigned          : 22; // bits 2..23 unused
            unsigned RMVF     : 1; // bit 24 Remove reset flag
            unsigned          : 1; // bit 25 unused
            unsigned PINRSTF  : 1; // bit 26 PIN reset flag
            unsigned PORRSTF  : 1; // bit 27 POR/PDR reset flag
            unsigned SFTRSTF  : 1; // bit 28 Software reset flag
            unsigned IWDGRSTF : 1; // bit 29 Independent watchdog reset flag
            unsigned WWDGRSTF : 1; // bit 30 Window watchdog reset flag
            unsigned LPWRRSTF : 1; // bit 31 Low-power reset flag    
        } bit;
    
        static constexpr unsigned LSION_POS = 0;
        static constexpr unsigned LSION_MASK = 0x00000001;
        static constexpr unsigned LSION(unsigned value) { return (value << 0); }
        static constexpr unsigned LSIRDY_POS = 1;
        static constexpr unsigned LSIRDY_MASK = 0x00000002;
        static constexpr unsigned LSIRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned RMVF_POS = 24;
        static constexpr unsigned RMVF_MASK = 0x01000000;
        static constexpr unsigned RMVF(unsigned value) { return (value << 24); }
        static constexpr unsigned PINRSTF_POS = 26;
        static constexpr unsigned PINRSTF_MASK = 0x04000000;
        static constexpr unsigned PINRSTF(unsigned value) { return (value << 26); }
        static constexpr unsigned PORRSTF_POS = 27;
        static constexpr unsigned PORRSTF_MASK = 0x08000000;
        static constexpr unsigned PORRSTF(unsigned value) { return (value << 27); }
        static constexpr unsigned SFTRSTF_POS = 28;
        static constexpr unsigned SFTRSTF_MASK = 0x10000000;
        static constexpr unsigned SFTRSTF(unsigned value) { return (value << 28); }
        static constexpr unsigned IWDGRSTF_POS = 29;
        static constexpr unsigned IWDGRSTF_MASK = 0x20000000;
        static constexpr unsigned IWDGRSTF(unsigned value) { return (value << 29); }
        static constexpr unsigned WWDGRSTF_POS = 30;
        static constexpr unsigned WWDGRSTF_MASK = 0x40000000;
        static constexpr unsigned WWDGRSTF(unsigned value) { return (value << 30); }
        static constexpr unsigned LPWRRSTF_POS = 31;
        static constexpr unsigned LPWRRSTF_MASK = 0x80000000;
        static constexpr unsigned LPWRRSTF(unsigned value) { return (value << 31); }
    } CSR;

    volatile union AHBRSTR_T // AHBRSTR: AHB peripheral clock reset register (RCC_AHBRSTR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHBRSTR_BIT_T
        {
            unsigned           : 12; // bits 0..11 unused
            unsigned OTGFSRST  : 1; // bit 12 USB OTG FS reset
            unsigned           : 1; // bit 13 unused
            unsigned ETHMACRST : 1; // bit 14 Ethernet MAC reset
            unsigned           : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned OTGFSRST_POS = 12;
        static constexpr unsigned OTGFSRST_MASK = 0x00001000;
        static constexpr unsigned OTGFSRST(unsigned value) { return (value << 12); }
        static constexpr unsigned ETHMACRST_POS = 14;
        static constexpr unsigned ETHMACRST_MASK = 0x00004000;
        static constexpr unsigned ETHMACRST(unsigned value) { return (value << 14); }
    } AHBRSTR;

    volatile union CFGR2_T // CFGR2: Clock configuration register2 (RCC_CFGR2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR2_BIT_T
        {
            unsigned PREDIV1    : 4; // bits 0..3 PREDIV1 division factor
            unsigned PREDIV2    : 4; // bits 4..7 PREDIV2 division factor
            unsigned PLL2MUL    : 4; // bits 8..11 PLL2 Multiplication Factor
            unsigned PLL3MUL    : 4; // bits 12..15 PLL3 Multiplication Factor
            unsigned PREDIV1SRC : 1; // bit 16 PREDIV1 entry clock source
            unsigned I2S2SRC    : 1; // bit 17 I2S2 clock source
            unsigned I2S3SRC    : 1; // bit 18 I2S3 clock source
            unsigned            : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned PREDIV1_POS = 0;
        static constexpr unsigned PREDIV1_MASK = 0x0000000f;
        static constexpr unsigned PREDIV1(unsigned value) { return (value << 0); }
        static constexpr unsigned PREDIV2_POS = 4;
        static constexpr unsigned PREDIV2_MASK = 0x000000f0;
        static constexpr unsigned PREDIV2(unsigned value) { return (value << 4); }
        static constexpr unsigned PLL2MUL_POS = 8;
        static constexpr unsigned PLL2MUL_MASK = 0x00000f00;
        static constexpr unsigned PLL2MUL(unsigned value) { return (value << 8); }
        static constexpr unsigned PLL3MUL_POS = 12;
        static constexpr unsigned PLL3MUL_MASK = 0x0000f000;
        static constexpr unsigned PLL3MUL(unsigned value) { return (value << 12); }
        static constexpr unsigned PREDIV1SRC_POS = 16;
        static constexpr unsigned PREDIV1SRC_MASK = 0x00010000;
        static constexpr unsigned PREDIV1SRC(unsigned value) { return (value << 16); }
        static constexpr unsigned I2S2SRC_POS = 17;
        static constexpr unsigned I2S2SRC_MASK = 0x00020000;
        static constexpr unsigned I2S2SRC(unsigned value) { return (value << 17); }
        static constexpr unsigned I2S3SRC_POS = 18;
        static constexpr unsigned I2S3SRC_MASK = 0x00040000;
        static constexpr unsigned I2S3SRC(unsigned value) { return (value << 18); }
    } CFGR2;

}; // struct RCC_T

static_assert(sizeof(RCC_T) == RCC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp