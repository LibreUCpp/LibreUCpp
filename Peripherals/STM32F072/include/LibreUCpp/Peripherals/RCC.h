#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RCC_T
{
    static constexpr size_t INSTANCE_SIZE = 56;
    static constexpr size_t PADDED_INSTANCE_SIZE = 56;
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
    static constexpr intptr_t ADDR_OFFSET_CFGR3 = 0x30;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x34;

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
            unsigned         : 6; // bits 26..31 unused    
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
    } CR;

    volatile union CFGR_T // CFGR: Clock configuration register (RCC_CFGR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR_BIT_T
        {
            unsigned SW       : 2; // bits 0..1 System clock Switch
            unsigned SWS      : 2; // bits 2..3 System Clock Switch Status
            unsigned HPRE     : 4; // bits 4..7 AHB prescaler
            unsigned PPRE     : 3; // bits 8..10 APB Low speed prescaler (APB1)
            unsigned          : 3; // bits 11..13 unused
            unsigned ADCPRE   : 1; // bit 14 ADC prescaler
            unsigned PLLSRC   : 2; // bits 15..16 PLL input clock source
            unsigned PLLXTPRE : 1; // bit 17 HSE divider for PLL entry
            unsigned PLLMUL   : 4; // bits 18..21 PLL Multiplication Factor
            unsigned          : 2; // bits 22..23 unused
            unsigned MCO      : 3; // bits 24..26 Microcontroller clock output
            unsigned          : 1; // bit 27 unused
            unsigned MCOPRE   : 3; // bits 28..30 Microcontroller Clock Output Prescaler
            unsigned PLLNODIV : 1; // bit 31 PLL clock not divided for MCO    
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
        static constexpr unsigned PPRE_POS = 8;
        static constexpr unsigned PPRE_MASK = 0x00000700;
        static constexpr unsigned PPRE(unsigned value) { return (value << 8); }
        static constexpr unsigned ADCPRE_POS = 14;
        static constexpr unsigned ADCPRE_MASK = 0x00004000;
        static constexpr unsigned ADCPRE(unsigned value) { return (value << 14); }
        static constexpr unsigned PLLSRC_POS = 15;
        static constexpr unsigned PLLSRC_MASK = 0x00018000;
        static constexpr unsigned PLLSRC(unsigned value) { return (value << 15); }
        static constexpr unsigned PLLXTPRE_POS = 17;
        static constexpr unsigned PLLXTPRE_MASK = 0x00020000;
        static constexpr unsigned PLLXTPRE(unsigned value) { return (value << 17); }
        static constexpr unsigned PLLMUL_POS = 18;
        static constexpr unsigned PLLMUL_MASK = 0x003c0000;
        static constexpr unsigned PLLMUL(unsigned value) { return (value << 18); }
        static constexpr unsigned MCO_POS = 24;
        static constexpr unsigned MCO_MASK = 0x07000000;
        static constexpr unsigned MCO(unsigned value) { return (value << 24); }
        static constexpr unsigned MCOPRE_POS = 28;
        static constexpr unsigned MCOPRE_MASK = 0x70000000;
        static constexpr unsigned MCOPRE(unsigned value) { return (value << 28); }
        static constexpr unsigned PLLNODIV_POS = 31;
        static constexpr unsigned PLLNODIV_MASK = 0x80000000;
        static constexpr unsigned PLLNODIV(unsigned value) { return (value << 31); }
    } CFGR;

    volatile union CIR_T // CIR: Clock interrupt register (RCC_CIR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CIR_BIT_T
        {
            unsigned LSIRDYF    : 1; // bit 0 LSI Ready Interrupt flag
            unsigned LSERDYF    : 1; // bit 1 LSE Ready Interrupt flag
            unsigned HSIRDYF    : 1; // bit 2 HSI Ready Interrupt flag
            unsigned HSERDYF    : 1; // bit 3 HSE Ready Interrupt flag
            unsigned PLLRDYF    : 1; // bit 4 PLL Ready Interrupt flag
            unsigned HSI14RDYF  : 1; // bit 5 HSI14 ready interrupt flag
            unsigned HSI48RDYF  : 1; // bit 6 HSI48 ready interrupt flag
            unsigned CSSF       : 1; // bit 7 Clock Security System Interrupt flag
            unsigned LSIRDYIE   : 1; // bit 8 LSI Ready Interrupt Enable
            unsigned LSERDYIE   : 1; // bit 9 LSE Ready Interrupt Enable
            unsigned HSIRDYIE   : 1; // bit 10 HSI Ready Interrupt Enable
            unsigned HSERDYIE   : 1; // bit 11 HSE Ready Interrupt Enable
            unsigned PLLRDYIE   : 1; // bit 12 PLL Ready Interrupt Enable
            unsigned HSI14RDYE  : 1; // bit 13 HSI14 ready interrupt enable
            unsigned HSI48RDYIE : 1; // bit 14 HSI48 ready interrupt enable
            unsigned            : 1; // bit 15 unused
            unsigned LSIRDYC    : 1; // bit 16 LSI Ready Interrupt Clear
            unsigned LSERDYC    : 1; // bit 17 LSE Ready Interrupt Clear
            unsigned HSIRDYC    : 1; // bit 18 HSI Ready Interrupt Clear
            unsigned HSERDYC    : 1; // bit 19 HSE Ready Interrupt Clear
            unsigned PLLRDYC    : 1; // bit 20 PLL Ready Interrupt Clear
            unsigned HSI14RDYC  : 1; // bit 21 HSI 14 MHz Ready Interrupt Clear
            unsigned HSI48RDYC  : 1; // bit 22 HSI48 Ready Interrupt Clear
            unsigned CSSC       : 1; // bit 23 Clock security system interrupt clear
            unsigned            : 8; // bits 24..31 unused    
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
        static constexpr unsigned HSI14RDYF_POS = 5;
        static constexpr unsigned HSI14RDYF_MASK = 0x00000020;
        static constexpr unsigned HSI14RDYF(unsigned value) { return (value << 5); }
        static constexpr unsigned HSI48RDYF_POS = 6;
        static constexpr unsigned HSI48RDYF_MASK = 0x00000040;
        static constexpr unsigned HSI48RDYF(unsigned value) { return (value << 6); }
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
        static constexpr unsigned HSI14RDYE_POS = 13;
        static constexpr unsigned HSI14RDYE_MASK = 0x00002000;
        static constexpr unsigned HSI14RDYE(unsigned value) { return (value << 13); }
        static constexpr unsigned HSI48RDYIE_POS = 14;
        static constexpr unsigned HSI48RDYIE_MASK = 0x00004000;
        static constexpr unsigned HSI48RDYIE(unsigned value) { return (value << 14); }
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
        static constexpr unsigned HSI14RDYC_POS = 21;
        static constexpr unsigned HSI14RDYC_MASK = 0x00200000;
        static constexpr unsigned HSI14RDYC(unsigned value) { return (value << 21); }
        static constexpr unsigned HSI48RDYC_POS = 22;
        static constexpr unsigned HSI48RDYC_MASK = 0x00400000;
        static constexpr unsigned HSI48RDYC(unsigned value) { return (value << 22); }
        static constexpr unsigned CSSC_POS = 23;
        static constexpr unsigned CSSC_MASK = 0x00800000;
        static constexpr unsigned CSSC(unsigned value) { return (value << 23); }
    } CIR;

    volatile union APB2RSTR_T // APB2RSTR: APB2 peripheral reset register (RCC_APB2RSTR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB2RSTR_BIT_T
        {
            unsigned SYSCFGRST : 1; // bit 0 SYSCFG and COMP reset
            unsigned           : 8; // bits 1..8 unused
            unsigned ADCRST    : 1; // bit 9 ADC interface reset
            unsigned           : 1; // bit 10 unused
            unsigned TIM1RST   : 1; // bit 11 TIM1 timer reset
            unsigned SPI1RST   : 1; // bit 12 SPI 1 reset
            unsigned           : 1; // bit 13 unused
            unsigned USART1RST : 1; // bit 14 USART1 reset
            unsigned           : 1; // bit 15 unused
            unsigned TIM15RST  : 1; // bit 16 TIM15 timer reset
            unsigned TIM16RST  : 1; // bit 17 TIM16 timer reset
            unsigned TIM17RST  : 1; // bit 18 TIM17 timer reset
            unsigned           : 3; // bits 19..21 unused
            unsigned DBGMCURST : 1; // bit 22 Debug MCU reset
            unsigned           : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned SYSCFGRST_POS = 0;
        static constexpr unsigned SYSCFGRST_MASK = 0x00000001;
        static constexpr unsigned SYSCFGRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ADCRST_POS = 9;
        static constexpr unsigned ADCRST_MASK = 0x00000200;
        static constexpr unsigned ADCRST(unsigned value) { return (value << 9); }
        static constexpr unsigned TIM1RST_POS = 11;
        static constexpr unsigned TIM1RST_MASK = 0x00000800;
        static constexpr unsigned TIM1RST(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI1RST_POS = 12;
        static constexpr unsigned SPI1RST_MASK = 0x00001000;
        static constexpr unsigned SPI1RST(unsigned value) { return (value << 12); }
        static constexpr unsigned USART1RST_POS = 14;
        static constexpr unsigned USART1RST_MASK = 0x00004000;
        static constexpr unsigned USART1RST(unsigned value) { return (value << 14); }
        static constexpr unsigned TIM15RST_POS = 16;
        static constexpr unsigned TIM15RST_MASK = 0x00010000;
        static constexpr unsigned TIM15RST(unsigned value) { return (value << 16); }
        static constexpr unsigned TIM16RST_POS = 17;
        static constexpr unsigned TIM16RST_MASK = 0x00020000;
        static constexpr unsigned TIM16RST(unsigned value) { return (value << 17); }
        static constexpr unsigned TIM17RST_POS = 18;
        static constexpr unsigned TIM17RST_MASK = 0x00040000;
        static constexpr unsigned TIM17RST(unsigned value) { return (value << 18); }
        static constexpr unsigned DBGMCURST_POS = 22;
        static constexpr unsigned DBGMCURST_MASK = 0x00400000;
        static constexpr unsigned DBGMCURST(unsigned value) { return (value << 22); }
    } APB2RSTR;

    volatile union APB1RSTR_T // APB1RSTR: APB1 peripheral reset register (RCC_APB1RSTR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB1RSTR_BIT_T
        {
            unsigned TIM2RST   : 1; // bit 0 Timer 2 reset
            unsigned TIM3RST   : 1; // bit 1 Timer 3 reset
            unsigned           : 2; // bits 2..3 unused
            unsigned TIM6RST   : 1; // bit 4 Timer 6 reset
            unsigned TIM7RST   : 1; // bit 5 TIM7 timer reset
            unsigned           : 2; // bits 6..7 unused
            unsigned TIM14RST  : 1; // bit 8 Timer 14 reset
            unsigned           : 2; // bits 9..10 unused
            unsigned WWDGRST   : 1; // bit 11 Window watchdog reset
            unsigned           : 2; // bits 12..13 unused
            unsigned SPI2RST   : 1; // bit 14 SPI2 reset
            unsigned           : 2; // bits 15..16 unused
            unsigned USART2RST : 1; // bit 17 USART 2 reset
            unsigned USART3RST : 1; // bit 18 USART3 reset
            unsigned USART4RST : 1; // bit 19 USART4 reset
            unsigned           : 1; // bit 20 unused
            unsigned I2C1RST   : 1; // bit 21 I2C1 reset
            unsigned I2C2RST   : 1; // bit 22 I2C2 reset
            unsigned USBRST    : 1; // bit 23 USB interface reset
            unsigned           : 1; // bit 24 unused
            unsigned CANRST    : 1; // bit 25 CAN interface reset
            unsigned           : 1; // bit 26 unused
            unsigned CRSRST    : 1; // bit 27 Clock Recovery System interface reset
            unsigned PWRRST    : 1; // bit 28 Power interface reset
            unsigned DACRST    : 1; // bit 29 DAC interface reset
            unsigned CECRST    : 1; // bit 30 HDMI CEC reset
            unsigned           : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned TIM2RST_POS = 0;
        static constexpr unsigned TIM2RST_MASK = 0x00000001;
        static constexpr unsigned TIM2RST(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM3RST_POS = 1;
        static constexpr unsigned TIM3RST_MASK = 0x00000002;
        static constexpr unsigned TIM3RST(unsigned value) { return (value << 1); }
        static constexpr unsigned TIM6RST_POS = 4;
        static constexpr unsigned TIM6RST_MASK = 0x00000010;
        static constexpr unsigned TIM6RST(unsigned value) { return (value << 4); }
        static constexpr unsigned TIM7RST_POS = 5;
        static constexpr unsigned TIM7RST_MASK = 0x00000020;
        static constexpr unsigned TIM7RST(unsigned value) { return (value << 5); }
        static constexpr unsigned TIM14RST_POS = 8;
        static constexpr unsigned TIM14RST_MASK = 0x00000100;
        static constexpr unsigned TIM14RST(unsigned value) { return (value << 8); }
        static constexpr unsigned WWDGRST_POS = 11;
        static constexpr unsigned WWDGRST_MASK = 0x00000800;
        static constexpr unsigned WWDGRST(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI2RST_POS = 14;
        static constexpr unsigned SPI2RST_MASK = 0x00004000;
        static constexpr unsigned SPI2RST(unsigned value) { return (value << 14); }
        static constexpr unsigned USART2RST_POS = 17;
        static constexpr unsigned USART2RST_MASK = 0x00020000;
        static constexpr unsigned USART2RST(unsigned value) { return (value << 17); }
        static constexpr unsigned USART3RST_POS = 18;
        static constexpr unsigned USART3RST_MASK = 0x00040000;
        static constexpr unsigned USART3RST(unsigned value) { return (value << 18); }
        static constexpr unsigned USART4RST_POS = 19;
        static constexpr unsigned USART4RST_MASK = 0x00080000;
        static constexpr unsigned USART4RST(unsigned value) { return (value << 19); }
        static constexpr unsigned I2C1RST_POS = 21;
        static constexpr unsigned I2C1RST_MASK = 0x00200000;
        static constexpr unsigned I2C1RST(unsigned value) { return (value << 21); }
        static constexpr unsigned I2C2RST_POS = 22;
        static constexpr unsigned I2C2RST_MASK = 0x00400000;
        static constexpr unsigned I2C2RST(unsigned value) { return (value << 22); }
        static constexpr unsigned USBRST_POS = 23;
        static constexpr unsigned USBRST_MASK = 0x00800000;
        static constexpr unsigned USBRST(unsigned value) { return (value << 23); }
        static constexpr unsigned CANRST_POS = 25;
        static constexpr unsigned CANRST_MASK = 0x02000000;
        static constexpr unsigned CANRST(unsigned value) { return (value << 25); }
        static constexpr unsigned CRSRST_POS = 27;
        static constexpr unsigned CRSRST_MASK = 0x08000000;
        static constexpr unsigned CRSRST(unsigned value) { return (value << 27); }
        static constexpr unsigned PWRRST_POS = 28;
        static constexpr unsigned PWRRST_MASK = 0x10000000;
        static constexpr unsigned PWRRST(unsigned value) { return (value << 28); }
        static constexpr unsigned DACRST_POS = 29;
        static constexpr unsigned DACRST_MASK = 0x20000000;
        static constexpr unsigned DACRST(unsigned value) { return (value << 29); }
        static constexpr unsigned CECRST_POS = 30;
        static constexpr unsigned CECRST_MASK = 0x40000000;
        static constexpr unsigned CECRST(unsigned value) { return (value << 30); }
    } APB1RSTR;

    volatile union AHBENR_T // AHBENR: AHB Peripheral Clock enable register (RCC_AHBENR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHBENR_BIT_T
        {
            unsigned DMAEN   : 1; // bit 0 DMA1 clock enable
            unsigned         : 1; // bit 1 unused
            unsigned SRAMEN  : 1; // bit 2 SRAM interface clock enable
            unsigned         : 1; // bit 3 unused
            unsigned FLITFEN : 1; // bit 4 FLITF clock enable
            unsigned         : 1; // bit 5 unused
            unsigned CRCEN   : 1; // bit 6 CRC clock enable
            unsigned         : 10; // bits 7..16 unused
            unsigned IOPAEN  : 1; // bit 17 I/O port A clock enable
            unsigned IOPBEN  : 1; // bit 18 I/O port B clock enable
            unsigned IOPCEN  : 1; // bit 19 I/O port C clock enable
            unsigned IOPDEN  : 1; // bit 20 I/O port D clock enable
            unsigned         : 1; // bit 21 unused
            unsigned IOPFEN  : 1; // bit 22 I/O port F clock enable
            unsigned         : 1; // bit 23 unused
            unsigned TSCEN   : 1; // bit 24 Touch sensing controller clock enable
            unsigned         : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned DMAEN_POS = 0;
        static constexpr unsigned DMAEN_MASK = 0x00000001;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 0); }
        static constexpr unsigned SRAMEN_POS = 2;
        static constexpr unsigned SRAMEN_MASK = 0x00000004;
        static constexpr unsigned SRAMEN(unsigned value) { return (value << 2); }
        static constexpr unsigned FLITFEN_POS = 4;
        static constexpr unsigned FLITFEN_MASK = 0x00000010;
        static constexpr unsigned FLITFEN(unsigned value) { return (value << 4); }
        static constexpr unsigned CRCEN_POS = 6;
        static constexpr unsigned CRCEN_MASK = 0x00000040;
        static constexpr unsigned CRCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned IOPAEN_POS = 17;
        static constexpr unsigned IOPAEN_MASK = 0x00020000;
        static constexpr unsigned IOPAEN(unsigned value) { return (value << 17); }
        static constexpr unsigned IOPBEN_POS = 18;
        static constexpr unsigned IOPBEN_MASK = 0x00040000;
        static constexpr unsigned IOPBEN(unsigned value) { return (value << 18); }
        static constexpr unsigned IOPCEN_POS = 19;
        static constexpr unsigned IOPCEN_MASK = 0x00080000;
        static constexpr unsigned IOPCEN(unsigned value) { return (value << 19); }
        static constexpr unsigned IOPDEN_POS = 20;
        static constexpr unsigned IOPDEN_MASK = 0x00100000;
        static constexpr unsigned IOPDEN(unsigned value) { return (value << 20); }
        static constexpr unsigned IOPFEN_POS = 22;
        static constexpr unsigned IOPFEN_MASK = 0x00400000;
        static constexpr unsigned IOPFEN(unsigned value) { return (value << 22); }
        static constexpr unsigned TSCEN_POS = 24;
        static constexpr unsigned TSCEN_MASK = 0x01000000;
        static constexpr unsigned TSCEN(unsigned value) { return (value << 24); }
    } AHBENR;

    volatile union APB2ENR_T // APB2ENR: APB2 peripheral clock enable register (RCC_APB2ENR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB2ENR_BIT_T
        {
            unsigned SYSCFGEN : 1; // bit 0 SYSCFG clock enable
            unsigned          : 8; // bits 1..8 unused
            unsigned ADCEN    : 1; // bit 9 ADC 1 interface clock enable
            unsigned          : 1; // bit 10 unused
            unsigned TIM1EN   : 1; // bit 11 TIM1 Timer clock enable
            unsigned SPI1EN   : 1; // bit 12 SPI 1 clock enable
            unsigned          : 1; // bit 13 unused
            unsigned USART1EN : 1; // bit 14 USART1 clock enable
            unsigned          : 1; // bit 15 unused
            unsigned TIM15EN  : 1; // bit 16 TIM15 timer clock enable
            unsigned TIM16EN  : 1; // bit 17 TIM16 timer clock enable
            unsigned TIM17EN  : 1; // bit 18 TIM17 timer clock enable
            unsigned          : 3; // bits 19..21 unused
            unsigned DBGMCUEN : 1; // bit 22 MCU debug module clock enable
            unsigned          : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned SYSCFGEN_POS = 0;
        static constexpr unsigned SYSCFGEN_MASK = 0x00000001;
        static constexpr unsigned SYSCFGEN(unsigned value) { return (value << 0); }
        static constexpr unsigned ADCEN_POS = 9;
        static constexpr unsigned ADCEN_MASK = 0x00000200;
        static constexpr unsigned ADCEN(unsigned value) { return (value << 9); }
        static constexpr unsigned TIM1EN_POS = 11;
        static constexpr unsigned TIM1EN_MASK = 0x00000800;
        static constexpr unsigned TIM1EN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI1EN_POS = 12;
        static constexpr unsigned SPI1EN_MASK = 0x00001000;
        static constexpr unsigned SPI1EN(unsigned value) { return (value << 12); }
        static constexpr unsigned USART1EN_POS = 14;
        static constexpr unsigned USART1EN_MASK = 0x00004000;
        static constexpr unsigned USART1EN(unsigned value) { return (value << 14); }
        static constexpr unsigned TIM15EN_POS = 16;
        static constexpr unsigned TIM15EN_MASK = 0x00010000;
        static constexpr unsigned TIM15EN(unsigned value) { return (value << 16); }
        static constexpr unsigned TIM16EN_POS = 17;
        static constexpr unsigned TIM16EN_MASK = 0x00020000;
        static constexpr unsigned TIM16EN(unsigned value) { return (value << 17); }
        static constexpr unsigned TIM17EN_POS = 18;
        static constexpr unsigned TIM17EN_MASK = 0x00040000;
        static constexpr unsigned TIM17EN(unsigned value) { return (value << 18); }
        static constexpr unsigned DBGMCUEN_POS = 22;
        static constexpr unsigned DBGMCUEN_MASK = 0x00400000;
        static constexpr unsigned DBGMCUEN(unsigned value) { return (value << 22); }
    } APB2ENR;

    volatile union APB1ENR_T // APB1ENR: APB1 peripheral clock enable register (RCC_APB1ENR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB1ENR_BIT_T
        {
            unsigned TIM2EN   : 1; // bit 0 Timer 2 clock enable
            unsigned TIM3EN   : 1; // bit 1 Timer 3 clock enable
            unsigned          : 2; // bits 2..3 unused
            unsigned TIM6EN   : 1; // bit 4 Timer 6 clock enable
            unsigned TIM7EN   : 1; // bit 5 TIM7 timer clock enable
            unsigned          : 2; // bits 6..7 unused
            unsigned TIM14EN  : 1; // bit 8 Timer 14 clock enable
            unsigned          : 2; // bits 9..10 unused
            unsigned WWDGEN   : 1; // bit 11 Window watchdog clock enable
            unsigned          : 2; // bits 12..13 unused
            unsigned SPI2EN   : 1; // bit 14 SPI 2 clock enable
            unsigned          : 2; // bits 15..16 unused
            unsigned USART2EN : 1; // bit 17 USART 2 clock enable
            unsigned USART3EN : 1; // bit 18 USART3 clock enable
            unsigned USART4EN : 1; // bit 19 USART4 clock enable
            unsigned          : 1; // bit 20 unused
            unsigned I2C1EN   : 1; // bit 21 I2C 1 clock enable
            unsigned I2C2EN   : 1; // bit 22 I2C 2 clock enable
            unsigned USBRST   : 1; // bit 23 USB interface clock enable
            unsigned          : 1; // bit 24 unused
            unsigned CANEN    : 1; // bit 25 CAN interface clock enable
            unsigned          : 1; // bit 26 unused
            unsigned CRSEN    : 1; // bit 27 Clock Recovery System interface clock enable
            unsigned PWREN    : 1; // bit 28 Power interface clock enable
            unsigned DACEN    : 1; // bit 29 DAC interface clock enable
            unsigned CECEN    : 1; // bit 30 HDMI CEC interface clock enable
            unsigned          : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned TIM2EN_POS = 0;
        static constexpr unsigned TIM2EN_MASK = 0x00000001;
        static constexpr unsigned TIM2EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM3EN_POS = 1;
        static constexpr unsigned TIM3EN_MASK = 0x00000002;
        static constexpr unsigned TIM3EN(unsigned value) { return (value << 1); }
        static constexpr unsigned TIM6EN_POS = 4;
        static constexpr unsigned TIM6EN_MASK = 0x00000010;
        static constexpr unsigned TIM6EN(unsigned value) { return (value << 4); }
        static constexpr unsigned TIM7EN_POS = 5;
        static constexpr unsigned TIM7EN_MASK = 0x00000020;
        static constexpr unsigned TIM7EN(unsigned value) { return (value << 5); }
        static constexpr unsigned TIM14EN_POS = 8;
        static constexpr unsigned TIM14EN_MASK = 0x00000100;
        static constexpr unsigned TIM14EN(unsigned value) { return (value << 8); }
        static constexpr unsigned WWDGEN_POS = 11;
        static constexpr unsigned WWDGEN_MASK = 0x00000800;
        static constexpr unsigned WWDGEN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI2EN_POS = 14;
        static constexpr unsigned SPI2EN_MASK = 0x00004000;
        static constexpr unsigned SPI2EN(unsigned value) { return (value << 14); }
        static constexpr unsigned USART2EN_POS = 17;
        static constexpr unsigned USART2EN_MASK = 0x00020000;
        static constexpr unsigned USART2EN(unsigned value) { return (value << 17); }
        static constexpr unsigned USART3EN_POS = 18;
        static constexpr unsigned USART3EN_MASK = 0x00040000;
        static constexpr unsigned USART3EN(unsigned value) { return (value << 18); }
        static constexpr unsigned USART4EN_POS = 19;
        static constexpr unsigned USART4EN_MASK = 0x00080000;
        static constexpr unsigned USART4EN(unsigned value) { return (value << 19); }
        static constexpr unsigned I2C1EN_POS = 21;
        static constexpr unsigned I2C1EN_MASK = 0x00200000;
        static constexpr unsigned I2C1EN(unsigned value) { return (value << 21); }
        static constexpr unsigned I2C2EN_POS = 22;
        static constexpr unsigned I2C2EN_MASK = 0x00400000;
        static constexpr unsigned I2C2EN(unsigned value) { return (value << 22); }
        static constexpr unsigned USBRST_POS = 23;
        static constexpr unsigned USBRST_MASK = 0x00800000;
        static constexpr unsigned USBRST(unsigned value) { return (value << 23); }
        static constexpr unsigned CANEN_POS = 25;
        static constexpr unsigned CANEN_MASK = 0x02000000;
        static constexpr unsigned CANEN(unsigned value) { return (value << 25); }
        static constexpr unsigned CRSEN_POS = 27;
        static constexpr unsigned CRSEN_MASK = 0x08000000;
        static constexpr unsigned CRSEN(unsigned value) { return (value << 27); }
        static constexpr unsigned PWREN_POS = 28;
        static constexpr unsigned PWREN_MASK = 0x10000000;
        static constexpr unsigned PWREN(unsigned value) { return (value << 28); }
        static constexpr unsigned DACEN_POS = 29;
        static constexpr unsigned DACEN_MASK = 0x20000000;
        static constexpr unsigned DACEN(unsigned value) { return (value << 29); }
        static constexpr unsigned CECEN_POS = 30;
        static constexpr unsigned CECEN_MASK = 0x40000000;
        static constexpr unsigned CECEN(unsigned value) { return (value << 30); }
    } APB1ENR;

    volatile union BDCR_T // BDCR: Backup domain control register (RCC_BDCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) BDCR_BIT_T
        {
            unsigned LSEON  : 1; // bit 0 External Low Speed oscillator enable
            unsigned LSERDY : 1; // bit 1 External Low Speed oscillator ready
            unsigned LSEBYP : 1; // bit 2 External Low Speed oscillator bypass
            unsigned LSEDRV : 2; // bits 3..4 LSE oscillator drive capability
            unsigned        : 3; // bits 5..7 unused
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
        static constexpr unsigned LSEDRV_POS = 3;
        static constexpr unsigned LSEDRV_MASK = 0x00000018;
        static constexpr unsigned LSEDRV(unsigned value) { return (value << 3); }
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
            unsigned OBLRSTF  : 1; // bit 25 Option byte loader reset flag
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
        static constexpr unsigned OBLRSTF_POS = 25;
        static constexpr unsigned OBLRSTF_MASK = 0x02000000;
        static constexpr unsigned OBLRSTF(unsigned value) { return (value << 25); }
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

    volatile union AHBRSTR_T // AHBRSTR: AHB peripheral reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHBRSTR_BIT_T
        {
            unsigned         : 17; // bits 0..16 unused
            unsigned IOPARST : 1; // bit 17 I/O port A reset
            unsigned IOPBRST : 1; // bit 18 I/O port B reset
            unsigned IOPCRST : 1; // bit 19 I/O port C reset
            unsigned IOPDRST : 1; // bit 20 I/O port D reset
            unsigned         : 1; // bit 21 unused
            unsigned IOPFRST : 1; // bit 22 I/O port F reset
            unsigned         : 1; // bit 23 unused
            unsigned TSCRST  : 1; // bit 24 Touch sensing controller reset
            unsigned         : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned IOPARST_POS = 17;
        static constexpr unsigned IOPARST_MASK = 0x00020000;
        static constexpr unsigned IOPARST(unsigned value) { return (value << 17); }
        static constexpr unsigned IOPBRST_POS = 18;
        static constexpr unsigned IOPBRST_MASK = 0x00040000;
        static constexpr unsigned IOPBRST(unsigned value) { return (value << 18); }
        static constexpr unsigned IOPCRST_POS = 19;
        static constexpr unsigned IOPCRST_MASK = 0x00080000;
        static constexpr unsigned IOPCRST(unsigned value) { return (value << 19); }
        static constexpr unsigned IOPDRST_POS = 20;
        static constexpr unsigned IOPDRST_MASK = 0x00100000;
        static constexpr unsigned IOPDRST(unsigned value) { return (value << 20); }
        static constexpr unsigned IOPFRST_POS = 22;
        static constexpr unsigned IOPFRST_MASK = 0x00400000;
        static constexpr unsigned IOPFRST(unsigned value) { return (value << 22); }
        static constexpr unsigned TSCRST_POS = 24;
        static constexpr unsigned TSCRST_MASK = 0x01000000;
        static constexpr unsigned TSCRST(unsigned value) { return (value << 24); }
    } AHBRSTR;

    volatile union CFGR2_T // CFGR2: Clock configuration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR2_BIT_T
        {
            unsigned PREDIV : 4; // bits 0..3 PREDIV division factor
            unsigned        : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned PREDIV_POS = 0;
        static constexpr unsigned PREDIV_MASK = 0x0000000f;
        static constexpr unsigned PREDIV(unsigned value) { return (value << 0); }
    } CFGR2;

    volatile union CFGR3_T // CFGR3: Clock configuration register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR3_BIT_T
        {
            unsigned USART1SW : 2; // bits 0..1 USART1 clock source selection
            unsigned          : 2; // bits 2..3 unused
            unsigned I2C1SW   : 1; // bit 4 I2C1 clock source selection
            unsigned          : 1; // bit 5 unused
            unsigned CECSW    : 1; // bit 6 HDMI CEC clock source selection
            unsigned USBSW    : 1; // bit 7 USB clock source selection
            unsigned ADCSW    : 1; // bit 8 ADC clock source selection
            unsigned          : 7; // bits 9..15 unused
            unsigned USART2SW : 2; // bits 16..17 USART2 clock source selection
            unsigned          : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned USART1SW_POS = 0;
        static constexpr unsigned USART1SW_MASK = 0x00000003;
        static constexpr unsigned USART1SW(unsigned value) { return (value << 0); }
        static constexpr unsigned I2C1SW_POS = 4;
        static constexpr unsigned I2C1SW_MASK = 0x00000010;
        static constexpr unsigned I2C1SW(unsigned value) { return (value << 4); }
        static constexpr unsigned CECSW_POS = 6;
        static constexpr unsigned CECSW_MASK = 0x00000040;
        static constexpr unsigned CECSW(unsigned value) { return (value << 6); }
        static constexpr unsigned USBSW_POS = 7;
        static constexpr unsigned USBSW_MASK = 0x00000080;
        static constexpr unsigned USBSW(unsigned value) { return (value << 7); }
        static constexpr unsigned ADCSW_POS = 8;
        static constexpr unsigned ADCSW_MASK = 0x00000100;
        static constexpr unsigned ADCSW(unsigned value) { return (value << 8); }
        static constexpr unsigned USART2SW_POS = 16;
        static constexpr unsigned USART2SW_MASK = 0x00030000;
        static constexpr unsigned USART2SW(unsigned value) { return (value << 16); }
    } CFGR3;

    volatile union CR2_T // CR2: Clock control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned HSI14ON   : 1; // bit 0 HSI14 clock enable
            unsigned HSI14RDY  : 1; // bit 1 HR14 clock ready flag
            unsigned HSI14DIS  : 1; // bit 2 HSI14 clock request from ADC disable
            unsigned HSI14TRIM : 5; // bits 3..7 HSI14 clock trimming
            unsigned HSI14CAL  : 8; // bits 8..15 HSI14 clock calibration
            unsigned HSI48ON   : 1; // bit 16 HSI48 clock enable
            unsigned HSI48RDY  : 1; // bit 17 HSI48 clock ready flag
            unsigned           : 6; // bits 18..23 unused
            unsigned HSI48CAL  : 1; // bit 24 HSI48 factory clock calibration
            unsigned           : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned HSI14ON_POS = 0;
        static constexpr unsigned HSI14ON_MASK = 0x00000001;
        static constexpr unsigned HSI14ON(unsigned value) { return (value << 0); }
        static constexpr unsigned HSI14RDY_POS = 1;
        static constexpr unsigned HSI14RDY_MASK = 0x00000002;
        static constexpr unsigned HSI14RDY(unsigned value) { return (value << 1); }
        static constexpr unsigned HSI14DIS_POS = 2;
        static constexpr unsigned HSI14DIS_MASK = 0x00000004;
        static constexpr unsigned HSI14DIS(unsigned value) { return (value << 2); }
        static constexpr unsigned HSI14TRIM_POS = 3;
        static constexpr unsigned HSI14TRIM_MASK = 0x000000f8;
        static constexpr unsigned HSI14TRIM(unsigned value) { return (value << 3); }
        static constexpr unsigned HSI14CAL_POS = 8;
        static constexpr unsigned HSI14CAL_MASK = 0x0000ff00;
        static constexpr unsigned HSI14CAL(unsigned value) { return (value << 8); }
        static constexpr unsigned HSI48ON_POS = 16;
        static constexpr unsigned HSI48ON_MASK = 0x00010000;
        static constexpr unsigned HSI48ON(unsigned value) { return (value << 16); }
        static constexpr unsigned HSI48RDY_POS = 17;
        static constexpr unsigned HSI48RDY_MASK = 0x00020000;
        static constexpr unsigned HSI48RDY(unsigned value) { return (value << 17); }
        static constexpr unsigned HSI48CAL_POS = 24;
        static constexpr unsigned HSI48CAL_MASK = 0x01000000;
        static constexpr unsigned HSI48CAL(unsigned value) { return (value << 24); }
    } CR2;

}; // struct RCC_T

static_assert(sizeof(RCC_T) == RCC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp