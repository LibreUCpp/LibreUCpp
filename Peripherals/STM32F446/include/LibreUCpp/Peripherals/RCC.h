#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RCC_T
{
    static constexpr size_t INSTANCE_SIZE = 152;
    static constexpr size_t PADDED_INSTANCE_SIZE = 152;
    static constexpr intptr_t BASE_ADDRESS = 0x40023800;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_PLLCFGR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CFGR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CIR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_AHB1RSTR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_AHB2RSTR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_AHB3RSTR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_APB1RSTR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_APB2RSTR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_AHB1ENR = 0x30;
    static constexpr intptr_t ADDR_OFFSET_AHB2ENR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_AHB3ENR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_APB1ENR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_APB2ENR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_AHB1LPENR = 0x50;
    static constexpr intptr_t ADDR_OFFSET_AHB2LPENR = 0x54;
    static constexpr intptr_t ADDR_OFFSET_AHB3LPENR = 0x58;
    static constexpr intptr_t ADDR_OFFSET_APB1LPENR = 0x60;
    static constexpr intptr_t ADDR_OFFSET_APB2LPENR = 0x64;
    static constexpr intptr_t ADDR_OFFSET_BDCR = 0x70;
    static constexpr intptr_t ADDR_OFFSET_CSR = 0x74;
    static constexpr intptr_t ADDR_OFFSET_SSCGR = 0x80;
    static constexpr intptr_t ADDR_OFFSET_PLLI2SCFGR = 0x84;
    static constexpr intptr_t ADDR_OFFSET_PLLSAICFGR = 0x88;
    static constexpr intptr_t ADDR_OFFSET_DCKCFGR = 0x8c;
    static constexpr intptr_t ADDR_OFFSET_CKGATENR = 0x90;
    static constexpr intptr_t ADDR_OFFSET_DCKCFGR2 = 0x94;

    volatile union CR_T // CR: clock control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned HSION     : 1; // bit 0 Internal high-speed clock enable
            unsigned HSIRDY    : 1; // bit 1 Internal high-speed clock ready flag
            unsigned           : 1; // bit 2 unused
            unsigned HSITRIM   : 5; // bits 3..7 Internal high-speed clock trimming
            unsigned HSICAL    : 8; // bits 8..15 Internal high-speed clock calibration
            unsigned HSEON     : 1; // bit 16 HSE clock enable
            unsigned HSERDY    : 1; // bit 17 HSE clock ready flag
            unsigned HSEBYP    : 1; // bit 18 HSE clock bypass
            unsigned CSSON     : 1; // bit 19 Clock security system enable
            unsigned           : 4; // bits 20..23 unused
            unsigned PLLON     : 1; // bit 24 Main PLL (PLL) enable
            unsigned PLLRDY    : 1; // bit 25 Main PLL (PLL) clock ready flag
            unsigned PLLI2SON  : 1; // bit 26 PLLI2S enable
            unsigned PLLI2SRDY : 1; // bit 27 PLLI2S clock ready flag
            unsigned           : 4; // bits 28..31 unused    
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
        static constexpr unsigned PLLI2SON_POS = 26;
        static constexpr unsigned PLLI2SON_MASK = 0x04000000;
        static constexpr unsigned PLLI2SON(unsigned value) { return (value << 26); }
        static constexpr unsigned PLLI2SRDY_POS = 27;
        static constexpr unsigned PLLI2SRDY_MASK = 0x08000000;
        static constexpr unsigned PLLI2SRDY(unsigned value) { return (value << 27); }
    } CR;

    volatile union PLLCFGR_T // PLLCFGR: PLL configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PLLCFGR_BIT_T
        {
            unsigned PLLM0  : 1; // bit 0 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
            unsigned PLLM1  : 1; // bit 1 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
            unsigned PLLM2  : 1; // bit 2 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
            unsigned PLLM3  : 1; // bit 3 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
            unsigned PLLM4  : 1; // bit 4 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
            unsigned PLLM5  : 1; // bit 5 Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
            unsigned PLLN0  : 1; // bit 6 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN1  : 1; // bit 7 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN2  : 1; // bit 8 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN3  : 1; // bit 9 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN4  : 1; // bit 10 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN5  : 1; // bit 11 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN6  : 1; // bit 12 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN7  : 1; // bit 13 Main PLL (PLL) multiplication factor for VCO
            unsigned PLLN8  : 1; // bit 14 Main PLL (PLL) multiplication factor for VCO
            unsigned        : 1; // bit 15 unused
            unsigned PLLP0  : 1; // bit 16 Main PLL (PLL) division factor for main system clock
            unsigned PLLP1  : 1; // bit 17 Main PLL (PLL) division factor for main system clock
            unsigned        : 4; // bits 18..21 unused
            unsigned PLLSRC : 1; // bit 22 Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
            unsigned        : 1; // bit 23 unused
            unsigned PLLQ0  : 1; // bit 24 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
            unsigned PLLQ1  : 1; // bit 25 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
            unsigned PLLQ2  : 1; // bit 26 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
            unsigned PLLQ3  : 1; // bit 27 Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned PLLM0_POS = 0;
        static constexpr unsigned PLLM0_MASK = 0x00000001;
        static constexpr unsigned PLLM0(unsigned value) { return (value << 0); }
        static constexpr unsigned PLLM1_POS = 1;
        static constexpr unsigned PLLM1_MASK = 0x00000002;
        static constexpr unsigned PLLM1(unsigned value) { return (value << 1); }
        static constexpr unsigned PLLM2_POS = 2;
        static constexpr unsigned PLLM2_MASK = 0x00000004;
        static constexpr unsigned PLLM2(unsigned value) { return (value << 2); }
        static constexpr unsigned PLLM3_POS = 3;
        static constexpr unsigned PLLM3_MASK = 0x00000008;
        static constexpr unsigned PLLM3(unsigned value) { return (value << 3); }
        static constexpr unsigned PLLM4_POS = 4;
        static constexpr unsigned PLLM4_MASK = 0x00000010;
        static constexpr unsigned PLLM4(unsigned value) { return (value << 4); }
        static constexpr unsigned PLLM5_POS = 5;
        static constexpr unsigned PLLM5_MASK = 0x00000020;
        static constexpr unsigned PLLM5(unsigned value) { return (value << 5); }
        static constexpr unsigned PLLN0_POS = 6;
        static constexpr unsigned PLLN0_MASK = 0x00000040;
        static constexpr unsigned PLLN0(unsigned value) { return (value << 6); }
        static constexpr unsigned PLLN1_POS = 7;
        static constexpr unsigned PLLN1_MASK = 0x00000080;
        static constexpr unsigned PLLN1(unsigned value) { return (value << 7); }
        static constexpr unsigned PLLN2_POS = 8;
        static constexpr unsigned PLLN2_MASK = 0x00000100;
        static constexpr unsigned PLLN2(unsigned value) { return (value << 8); }
        static constexpr unsigned PLLN3_POS = 9;
        static constexpr unsigned PLLN3_MASK = 0x00000200;
        static constexpr unsigned PLLN3(unsigned value) { return (value << 9); }
        static constexpr unsigned PLLN4_POS = 10;
        static constexpr unsigned PLLN4_MASK = 0x00000400;
        static constexpr unsigned PLLN4(unsigned value) { return (value << 10); }
        static constexpr unsigned PLLN5_POS = 11;
        static constexpr unsigned PLLN5_MASK = 0x00000800;
        static constexpr unsigned PLLN5(unsigned value) { return (value << 11); }
        static constexpr unsigned PLLN6_POS = 12;
        static constexpr unsigned PLLN6_MASK = 0x00001000;
        static constexpr unsigned PLLN6(unsigned value) { return (value << 12); }
        static constexpr unsigned PLLN7_POS = 13;
        static constexpr unsigned PLLN7_MASK = 0x00002000;
        static constexpr unsigned PLLN7(unsigned value) { return (value << 13); }
        static constexpr unsigned PLLN8_POS = 14;
        static constexpr unsigned PLLN8_MASK = 0x00004000;
        static constexpr unsigned PLLN8(unsigned value) { return (value << 14); }
        static constexpr unsigned PLLP0_POS = 16;
        static constexpr unsigned PLLP0_MASK = 0x00010000;
        static constexpr unsigned PLLP0(unsigned value) { return (value << 16); }
        static constexpr unsigned PLLP1_POS = 17;
        static constexpr unsigned PLLP1_MASK = 0x00020000;
        static constexpr unsigned PLLP1(unsigned value) { return (value << 17); }
        static constexpr unsigned PLLSRC_POS = 22;
        static constexpr unsigned PLLSRC_MASK = 0x00400000;
        static constexpr unsigned PLLSRC(unsigned value) { return (value << 22); }
        static constexpr unsigned PLLQ0_POS = 24;
        static constexpr unsigned PLLQ0_MASK = 0x01000000;
        static constexpr unsigned PLLQ0(unsigned value) { return (value << 24); }
        static constexpr unsigned PLLQ1_POS = 25;
        static constexpr unsigned PLLQ1_MASK = 0x02000000;
        static constexpr unsigned PLLQ1(unsigned value) { return (value << 25); }
        static constexpr unsigned PLLQ2_POS = 26;
        static constexpr unsigned PLLQ2_MASK = 0x04000000;
        static constexpr unsigned PLLQ2(unsigned value) { return (value << 26); }
        static constexpr unsigned PLLQ3_POS = 27;
        static constexpr unsigned PLLQ3_MASK = 0x08000000;
        static constexpr unsigned PLLQ3(unsigned value) { return (value << 27); }
    } PLLCFGR;

    volatile union CFGR_T // CFGR: clock configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR_BIT_T
        {
            unsigned SW0     : 1; // bit 0 System clock switch
            unsigned SW1     : 1; // bit 1 System clock switch
            unsigned SWS0    : 1; // bit 2 System clock switch status
            unsigned SWS1    : 1; // bit 3 System clock switch status
            unsigned HPRE    : 4; // bits 4..7 AHB prescaler
            unsigned         : 2; // bits 8..9 unused
            unsigned PPRE1   : 3; // bits 10..12 APB Low speed prescaler (APB1)
            unsigned PPRE2   : 3; // bits 13..15 APB high-speed prescaler (APB2)
            unsigned RTCPRE  : 5; // bits 16..20 HSE division factor for RTC clock
            unsigned MCO1    : 2; // bits 21..22 Microcontroller clock output 1
            unsigned I2SSRC  : 1; // bit 23 I2S clock selection
            unsigned MCO1PRE : 3; // bits 24..26 MCO1 prescaler
            unsigned MCO2PRE : 3; // bits 27..29 MCO2 prescaler
            unsigned MCO2    : 2; // bits 30..31 Microcontroller clock output 2    
        } bit;
    
        static constexpr unsigned SW0_POS = 0;
        static constexpr unsigned SW0_MASK = 0x00000001;
        static constexpr unsigned SW0(unsigned value) { return (value << 0); }
        static constexpr unsigned SW1_POS = 1;
        static constexpr unsigned SW1_MASK = 0x00000002;
        static constexpr unsigned SW1(unsigned value) { return (value << 1); }
        static constexpr unsigned SWS0_POS = 2;
        static constexpr unsigned SWS0_MASK = 0x00000004;
        static constexpr unsigned SWS0(unsigned value) { return (value << 2); }
        static constexpr unsigned SWS1_POS = 3;
        static constexpr unsigned SWS1_MASK = 0x00000008;
        static constexpr unsigned SWS1(unsigned value) { return (value << 3); }
        static constexpr unsigned HPRE_POS = 4;
        static constexpr unsigned HPRE_MASK = 0x000000f0;
        static constexpr unsigned HPRE(unsigned value) { return (value << 4); }
        static constexpr unsigned PPRE1_POS = 10;
        static constexpr unsigned PPRE1_MASK = 0x00001c00;
        static constexpr unsigned PPRE1(unsigned value) { return (value << 10); }
        static constexpr unsigned PPRE2_POS = 13;
        static constexpr unsigned PPRE2_MASK = 0x0000e000;
        static constexpr unsigned PPRE2(unsigned value) { return (value << 13); }
        static constexpr unsigned RTCPRE_POS = 16;
        static constexpr unsigned RTCPRE_MASK = 0x001f0000;
        static constexpr unsigned RTCPRE(unsigned value) { return (value << 16); }
        static constexpr unsigned MCO1_POS = 21;
        static constexpr unsigned MCO1_MASK = 0x00600000;
        static constexpr unsigned MCO1(unsigned value) { return (value << 21); }
        static constexpr unsigned I2SSRC_POS = 23;
        static constexpr unsigned I2SSRC_MASK = 0x00800000;
        static constexpr unsigned I2SSRC(unsigned value) { return (value << 23); }
        static constexpr unsigned MCO1PRE_POS = 24;
        static constexpr unsigned MCO1PRE_MASK = 0x07000000;
        static constexpr unsigned MCO1PRE(unsigned value) { return (value << 24); }
        static constexpr unsigned MCO2PRE_POS = 27;
        static constexpr unsigned MCO2PRE_MASK = 0x38000000;
        static constexpr unsigned MCO2PRE(unsigned value) { return (value << 27); }
        static constexpr unsigned MCO2_POS = 30;
        static constexpr unsigned MCO2_MASK = 0xc0000000;
        static constexpr unsigned MCO2(unsigned value) { return (value << 30); }
    } CFGR;

    volatile union CIR_T // CIR: clock interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CIR_BIT_T
        {
            unsigned LSIRDYF     : 1; // bit 0 LSI ready interrupt flag
            unsigned LSERDYF     : 1; // bit 1 LSE ready interrupt flag
            unsigned HSIRDYF     : 1; // bit 2 HSI ready interrupt flag
            unsigned HSERDYF     : 1; // bit 3 HSE ready interrupt flag
            unsigned PLLRDYF     : 1; // bit 4 Main PLL (PLL) ready interrupt flag
            unsigned PLLI2SRDYF  : 1; // bit 5 PLLI2S ready interrupt flag
            unsigned PLLSAIRDYF  : 1; // bit 6 PLLSAI ready interrupt flag
            unsigned CSSF        : 1; // bit 7 Clock security system interrupt flag
            unsigned LSIRDYIE    : 1; // bit 8 LSI ready interrupt enable
            unsigned LSERDYIE    : 1; // bit 9 LSE ready interrupt enable
            unsigned HSIRDYIE    : 1; // bit 10 HSI ready interrupt enable
            unsigned HSERDYIE    : 1; // bit 11 HSE ready interrupt enable
            unsigned PLLRDYIE    : 1; // bit 12 Main PLL (PLL) ready interrupt enable
            unsigned PLLI2SRDYIE : 1; // bit 13 PLLI2S ready interrupt enable
            unsigned PLLSAIRDYIE : 1; // bit 14 PLLSAI Ready Interrupt Enable
            unsigned             : 1; // bit 15 unused
            unsigned LSIRDYC     : 1; // bit 16 LSI ready interrupt clear
            unsigned LSERDYC     : 1; // bit 17 LSE ready interrupt clear
            unsigned HSIRDYC     : 1; // bit 18 HSI ready interrupt clear
            unsigned HSERDYC     : 1; // bit 19 HSE ready interrupt clear
            unsigned PLLRDYC     : 1; // bit 20 Main PLL(PLL) ready interrupt clear
            unsigned PLLI2SRDYC  : 1; // bit 21 PLLI2S ready interrupt clear
            unsigned PLLSAIRDYC  : 1; // bit 22 PLLSAI Ready Interrupt Clear
            unsigned CSSC        : 1; // bit 23 Clock security system interrupt clear
            unsigned             : 8; // bits 24..31 unused    
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
        static constexpr unsigned PLLI2SRDYF_POS = 5;
        static constexpr unsigned PLLI2SRDYF_MASK = 0x00000020;
        static constexpr unsigned PLLI2SRDYF(unsigned value) { return (value << 5); }
        static constexpr unsigned PLLSAIRDYF_POS = 6;
        static constexpr unsigned PLLSAIRDYF_MASK = 0x00000040;
        static constexpr unsigned PLLSAIRDYF(unsigned value) { return (value << 6); }
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
        static constexpr unsigned PLLI2SRDYIE_POS = 13;
        static constexpr unsigned PLLI2SRDYIE_MASK = 0x00002000;
        static constexpr unsigned PLLI2SRDYIE(unsigned value) { return (value << 13); }
        static constexpr unsigned PLLSAIRDYIE_POS = 14;
        static constexpr unsigned PLLSAIRDYIE_MASK = 0x00004000;
        static constexpr unsigned PLLSAIRDYIE(unsigned value) { return (value << 14); }
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
        static constexpr unsigned PLLI2SRDYC_POS = 21;
        static constexpr unsigned PLLI2SRDYC_MASK = 0x00200000;
        static constexpr unsigned PLLI2SRDYC(unsigned value) { return (value << 21); }
        static constexpr unsigned PLLSAIRDYC_POS = 22;
        static constexpr unsigned PLLSAIRDYC_MASK = 0x00400000;
        static constexpr unsigned PLLSAIRDYC(unsigned value) { return (value << 22); }
        static constexpr unsigned CSSC_POS = 23;
        static constexpr unsigned CSSC_MASK = 0x00800000;
        static constexpr unsigned CSSC(unsigned value) { return (value << 23); }
    } CIR;

    volatile union AHB1RSTR_T // AHB1RSTR: AHB1 peripheral reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB1RSTR_BIT_T
        {
            unsigned GPIOARST : 1; // bit 0 IO port A reset
            unsigned GPIOBRST : 1; // bit 1 IO port B reset
            unsigned GPIOCRST : 1; // bit 2 IO port C reset
            unsigned GPIODRST : 1; // bit 3 IO port D reset
            unsigned GPIOERST : 1; // bit 4 IO port E reset
            unsigned GPIOFRST : 1; // bit 5 IO port F reset
            unsigned GPIOGRST : 1; // bit 6 IO port G reset
            unsigned GPIOHRST : 1; // bit 7 IO port H reset
            unsigned          : 4; // bits 8..11 unused
            unsigned CRCRST   : 1; // bit 12 CRC reset
            unsigned          : 8; // bits 13..20 unused
            unsigned DMA1RST  : 1; // bit 21 DMA2 reset
            unsigned DMA2RST  : 1; // bit 22 DMA2 reset
            unsigned          : 6; // bits 23..28 unused
            unsigned OTGHSRST : 1; // bit 29 USB OTG HS module reset
            unsigned          : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned GPIOARST_POS = 0;
        static constexpr unsigned GPIOARST_MASK = 0x00000001;
        static constexpr unsigned GPIOARST(unsigned value) { return (value << 0); }
        static constexpr unsigned GPIOBRST_POS = 1;
        static constexpr unsigned GPIOBRST_MASK = 0x00000002;
        static constexpr unsigned GPIOBRST(unsigned value) { return (value << 1); }
        static constexpr unsigned GPIOCRST_POS = 2;
        static constexpr unsigned GPIOCRST_MASK = 0x00000004;
        static constexpr unsigned GPIOCRST(unsigned value) { return (value << 2); }
        static constexpr unsigned GPIODRST_POS = 3;
        static constexpr unsigned GPIODRST_MASK = 0x00000008;
        static constexpr unsigned GPIODRST(unsigned value) { return (value << 3); }
        static constexpr unsigned GPIOERST_POS = 4;
        static constexpr unsigned GPIOERST_MASK = 0x00000010;
        static constexpr unsigned GPIOERST(unsigned value) { return (value << 4); }
        static constexpr unsigned GPIOFRST_POS = 5;
        static constexpr unsigned GPIOFRST_MASK = 0x00000020;
        static constexpr unsigned GPIOFRST(unsigned value) { return (value << 5); }
        static constexpr unsigned GPIOGRST_POS = 6;
        static constexpr unsigned GPIOGRST_MASK = 0x00000040;
        static constexpr unsigned GPIOGRST(unsigned value) { return (value << 6); }
        static constexpr unsigned GPIOHRST_POS = 7;
        static constexpr unsigned GPIOHRST_MASK = 0x00000080;
        static constexpr unsigned GPIOHRST(unsigned value) { return (value << 7); }
        static constexpr unsigned CRCRST_POS = 12;
        static constexpr unsigned CRCRST_MASK = 0x00001000;
        static constexpr unsigned CRCRST(unsigned value) { return (value << 12); }
        static constexpr unsigned DMA1RST_POS = 21;
        static constexpr unsigned DMA1RST_MASK = 0x00200000;
        static constexpr unsigned DMA1RST(unsigned value) { return (value << 21); }
        static constexpr unsigned DMA2RST_POS = 22;
        static constexpr unsigned DMA2RST_MASK = 0x00400000;
        static constexpr unsigned DMA2RST(unsigned value) { return (value << 22); }
        static constexpr unsigned OTGHSRST_POS = 29;
        static constexpr unsigned OTGHSRST_MASK = 0x20000000;
        static constexpr unsigned OTGHSRST(unsigned value) { return (value << 29); }
    } AHB1RSTR;

    volatile union AHB2RSTR_T // AHB2RSTR: AHB2 peripheral reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB2RSTR_BIT_T
        {
            unsigned DCMIRST  : 1; // bit 0 Camera interface reset
            unsigned          : 6; // bits 1..6 unused
            unsigned OTGFSRST : 1; // bit 7 USB OTG FS module reset
            unsigned          : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned DCMIRST_POS = 0;
        static constexpr unsigned DCMIRST_MASK = 0x00000001;
        static constexpr unsigned DCMIRST(unsigned value) { return (value << 0); }
        static constexpr unsigned OTGFSRST_POS = 7;
        static constexpr unsigned OTGFSRST_MASK = 0x00000080;
        static constexpr unsigned OTGFSRST(unsigned value) { return (value << 7); }
    } AHB2RSTR;

    volatile union AHB3RSTR_T // AHB3RSTR: AHB3 peripheral reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB3RSTR_BIT_T
        {
            unsigned FMCRST  : 1; // bit 0 Flexible memory controller module reset
            unsigned QSPIRST : 1; // bit 1 QUADSPI module reset
            unsigned         : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned FMCRST_POS = 0;
        static constexpr unsigned FMCRST_MASK = 0x00000001;
        static constexpr unsigned FMCRST(unsigned value) { return (value << 0); }
        static constexpr unsigned QSPIRST_POS = 1;
        static constexpr unsigned QSPIRST_MASK = 0x00000002;
        static constexpr unsigned QSPIRST(unsigned value) { return (value << 1); }
    } AHB3RSTR;

    uint8_t Reserved1[4];

    volatile union APB1RSTR_T // APB1RSTR: APB1 peripheral reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB1RSTR_BIT_T
        {
            unsigned TIM2RST    : 1; // bit 0 TIM2 reset
            unsigned TIM3RST    : 1; // bit 1 TIM3 reset
            unsigned TIM4RST    : 1; // bit 2 TIM4 reset
            unsigned TIM5RST    : 1; // bit 3 TIM5 reset
            unsigned TIM6RST    : 1; // bit 4 TIM6 reset
            unsigned TIM7RST    : 1; // bit 5 TIM7 reset
            unsigned TIM12RST   : 1; // bit 6 TIM12 reset
            unsigned TIM13RST   : 1; // bit 7 TIM13 reset
            unsigned TIM14RST   : 1; // bit 8 TIM14 reset
            unsigned            : 2; // bits 9..10 unused
            unsigned WWDGRST    : 1; // bit 11 Window watchdog reset
            unsigned            : 2; // bits 12..13 unused
            unsigned SPI2RST    : 1; // bit 14 SPI 2 reset
            unsigned SPI3RST    : 1; // bit 15 SPI 3 reset
            unsigned SPDIFRST   : 1; // bit 16 SPDIF-IN reset
            unsigned UART2RST   : 1; // bit 17 USART 2 reset
            unsigned UART3RST   : 1; // bit 18 USART 3 reset
            unsigned UART4RST   : 1; // bit 19 USART 4 reset
            unsigned UART5RST   : 1; // bit 20 USART 5 reset
            unsigned I2C1RST    : 1; // bit 21 I2C 1 reset
            unsigned I2C2RST    : 1; // bit 22 I2C 2 reset
            unsigned I2C3RST    : 1; // bit 23 I2C3 reset
            unsigned I2CFMP1RST : 1; // bit 24 I2CFMP1 reset
            unsigned CAN1RST    : 1; // bit 25 CAN1 reset
            unsigned CAN2RST    : 1; // bit 26 CAN2 reset
            unsigned            : 1; // bit 27 unused
            unsigned PWRRST     : 1; // bit 28 Power interface reset
            unsigned DACRST     : 1; // bit 29 DAC reset
            unsigned            : 2; // bits 30..31 unused    
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
        static constexpr unsigned TIM12RST_POS = 6;
        static constexpr unsigned TIM12RST_MASK = 0x00000040;
        static constexpr unsigned TIM12RST(unsigned value) { return (value << 6); }
        static constexpr unsigned TIM13RST_POS = 7;
        static constexpr unsigned TIM13RST_MASK = 0x00000080;
        static constexpr unsigned TIM13RST(unsigned value) { return (value << 7); }
        static constexpr unsigned TIM14RST_POS = 8;
        static constexpr unsigned TIM14RST_MASK = 0x00000100;
        static constexpr unsigned TIM14RST(unsigned value) { return (value << 8); }
        static constexpr unsigned WWDGRST_POS = 11;
        static constexpr unsigned WWDGRST_MASK = 0x00000800;
        static constexpr unsigned WWDGRST(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI2RST_POS = 14;
        static constexpr unsigned SPI2RST_MASK = 0x00004000;
        static constexpr unsigned SPI2RST(unsigned value) { return (value << 14); }
        static constexpr unsigned SPI3RST_POS = 15;
        static constexpr unsigned SPI3RST_MASK = 0x00008000;
        static constexpr unsigned SPI3RST(unsigned value) { return (value << 15); }
        static constexpr unsigned SPDIFRST_POS = 16;
        static constexpr unsigned SPDIFRST_MASK = 0x00010000;
        static constexpr unsigned SPDIFRST(unsigned value) { return (value << 16); }
        static constexpr unsigned UART2RST_POS = 17;
        static constexpr unsigned UART2RST_MASK = 0x00020000;
        static constexpr unsigned UART2RST(unsigned value) { return (value << 17); }
        static constexpr unsigned UART3RST_POS = 18;
        static constexpr unsigned UART3RST_MASK = 0x00040000;
        static constexpr unsigned UART3RST(unsigned value) { return (value << 18); }
        static constexpr unsigned UART4RST_POS = 19;
        static constexpr unsigned UART4RST_MASK = 0x00080000;
        static constexpr unsigned UART4RST(unsigned value) { return (value << 19); }
        static constexpr unsigned UART5RST_POS = 20;
        static constexpr unsigned UART5RST_MASK = 0x00100000;
        static constexpr unsigned UART5RST(unsigned value) { return (value << 20); }
        static constexpr unsigned I2C1RST_POS = 21;
        static constexpr unsigned I2C1RST_MASK = 0x00200000;
        static constexpr unsigned I2C1RST(unsigned value) { return (value << 21); }
        static constexpr unsigned I2C2RST_POS = 22;
        static constexpr unsigned I2C2RST_MASK = 0x00400000;
        static constexpr unsigned I2C2RST(unsigned value) { return (value << 22); }
        static constexpr unsigned I2C3RST_POS = 23;
        static constexpr unsigned I2C3RST_MASK = 0x00800000;
        static constexpr unsigned I2C3RST(unsigned value) { return (value << 23); }
        static constexpr unsigned I2CFMP1RST_POS = 24;
        static constexpr unsigned I2CFMP1RST_MASK = 0x01000000;
        static constexpr unsigned I2CFMP1RST(unsigned value) { return (value << 24); }
        static constexpr unsigned CAN1RST_POS = 25;
        static constexpr unsigned CAN1RST_MASK = 0x02000000;
        static constexpr unsigned CAN1RST(unsigned value) { return (value << 25); }
        static constexpr unsigned CAN2RST_POS = 26;
        static constexpr unsigned CAN2RST_MASK = 0x04000000;
        static constexpr unsigned CAN2RST(unsigned value) { return (value << 26); }
        static constexpr unsigned PWRRST_POS = 28;
        static constexpr unsigned PWRRST_MASK = 0x10000000;
        static constexpr unsigned PWRRST(unsigned value) { return (value << 28); }
        static constexpr unsigned DACRST_POS = 29;
        static constexpr unsigned DACRST_MASK = 0x20000000;
        static constexpr unsigned DACRST(unsigned value) { return (value << 29); }
    } APB1RSTR;

    volatile union APB2RSTR_T // APB2RSTR: APB2 peripheral reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB2RSTR_BIT_T
        {
            unsigned TIM1RST   : 1; // bit 0 TIM1 reset
            unsigned TIM8RST   : 1; // bit 1 TIM8 reset
            unsigned           : 2; // bits 2..3 unused
            unsigned USART1RST : 1; // bit 4 USART1 reset
            unsigned USART6RST : 1; // bit 5 USART6 reset
            unsigned           : 2; // bits 6..7 unused
            unsigned ADCRST    : 1; // bit 8 ADC interface reset (common to all ADCs)
            unsigned           : 2; // bits 9..10 unused
            unsigned SDIORST   : 1; // bit 11 SDIO reset
            unsigned SPI1RST   : 1; // bit 12 SPI 1 reset
            unsigned SPI4RST   : 1; // bit 13 SPI4 reset
            unsigned SYSCFGRST : 1; // bit 14 System configuration controller reset
            unsigned           : 1; // bit 15 unused
            unsigned TIM9RST   : 1; // bit 16 TIM9 reset
            unsigned TIM10RST  : 1; // bit 17 TIM10 reset
            unsigned TIM11RST  : 1; // bit 18 TIM11 reset
            unsigned           : 3; // bits 19..21 unused
            unsigned SAI1RST   : 1; // bit 22 SAI1 reset
            unsigned SAI2RST   : 1; // bit 23 SAI2 reset
            unsigned           : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned TIM1RST_POS = 0;
        static constexpr unsigned TIM1RST_MASK = 0x00000001;
        static constexpr unsigned TIM1RST(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM8RST_POS = 1;
        static constexpr unsigned TIM8RST_MASK = 0x00000002;
        static constexpr unsigned TIM8RST(unsigned value) { return (value << 1); }
        static constexpr unsigned USART1RST_POS = 4;
        static constexpr unsigned USART1RST_MASK = 0x00000010;
        static constexpr unsigned USART1RST(unsigned value) { return (value << 4); }
        static constexpr unsigned USART6RST_POS = 5;
        static constexpr unsigned USART6RST_MASK = 0x00000020;
        static constexpr unsigned USART6RST(unsigned value) { return (value << 5); }
        static constexpr unsigned ADCRST_POS = 8;
        static constexpr unsigned ADCRST_MASK = 0x00000100;
        static constexpr unsigned ADCRST(unsigned value) { return (value << 8); }
        static constexpr unsigned SDIORST_POS = 11;
        static constexpr unsigned SDIORST_MASK = 0x00000800;
        static constexpr unsigned SDIORST(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI1RST_POS = 12;
        static constexpr unsigned SPI1RST_MASK = 0x00001000;
        static constexpr unsigned SPI1RST(unsigned value) { return (value << 12); }
        static constexpr unsigned SPI4RST_POS = 13;
        static constexpr unsigned SPI4RST_MASK = 0x00002000;
        static constexpr unsigned SPI4RST(unsigned value) { return (value << 13); }
        static constexpr unsigned SYSCFGRST_POS = 14;
        static constexpr unsigned SYSCFGRST_MASK = 0x00004000;
        static constexpr unsigned SYSCFGRST(unsigned value) { return (value << 14); }
        static constexpr unsigned TIM9RST_POS = 16;
        static constexpr unsigned TIM9RST_MASK = 0x00010000;
        static constexpr unsigned TIM9RST(unsigned value) { return (value << 16); }
        static constexpr unsigned TIM10RST_POS = 17;
        static constexpr unsigned TIM10RST_MASK = 0x00020000;
        static constexpr unsigned TIM10RST(unsigned value) { return (value << 17); }
        static constexpr unsigned TIM11RST_POS = 18;
        static constexpr unsigned TIM11RST_MASK = 0x00040000;
        static constexpr unsigned TIM11RST(unsigned value) { return (value << 18); }
        static constexpr unsigned SAI1RST_POS = 22;
        static constexpr unsigned SAI1RST_MASK = 0x00400000;
        static constexpr unsigned SAI1RST(unsigned value) { return (value << 22); }
        static constexpr unsigned SAI2RST_POS = 23;
        static constexpr unsigned SAI2RST_MASK = 0x00800000;
        static constexpr unsigned SAI2RST(unsigned value) { return (value << 23); }
    } APB2RSTR;

    uint8_t Reserved2[8];

    volatile union AHB1ENR_T // AHB1ENR: AHB1 peripheral clock register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB1ENR_BIT_T
        {
            unsigned GPIOAEN     : 1; // bit 0 IO port A clock enable
            unsigned GPIOBEN     : 1; // bit 1 IO port B clock enable
            unsigned GPIOCEN     : 1; // bit 2 IO port C clock enable
            unsigned GPIODEN     : 1; // bit 3 IO port D clock enable
            unsigned GPIOEEN     : 1; // bit 4 IO port E clock enable
            unsigned GPIOFEN     : 1; // bit 5 IO port F clock enable
            unsigned GPIOGEN     : 1; // bit 6 IO port G clock enable
            unsigned GPIOHEN     : 1; // bit 7 IO port H clock enable
            unsigned             : 4; // bits 8..11 unused
            unsigned CRCEN       : 1; // bit 12 CRC clock enable
            unsigned             : 5; // bits 13..17 unused
            unsigned BKPSRAMEN   : 1; // bit 18 Backup SRAM interface clock enable
            unsigned             : 2; // bits 19..20 unused
            unsigned DMA1EN      : 1; // bit 21 DMA1 clock enable
            unsigned DMA2EN      : 1; // bit 22 DMA2 clock enable
            unsigned             : 6; // bits 23..28 unused
            unsigned OTGHSEN     : 1; // bit 29 USB OTG HS clock enable
            unsigned OTGHSULPIEN : 1; // bit 30 USB OTG HSULPI clock enable
            unsigned             : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned GPIOAEN_POS = 0;
        static constexpr unsigned GPIOAEN_MASK = 0x00000001;
        static constexpr unsigned GPIOAEN(unsigned value) { return (value << 0); }
        static constexpr unsigned GPIOBEN_POS = 1;
        static constexpr unsigned GPIOBEN_MASK = 0x00000002;
        static constexpr unsigned GPIOBEN(unsigned value) { return (value << 1); }
        static constexpr unsigned GPIOCEN_POS = 2;
        static constexpr unsigned GPIOCEN_MASK = 0x00000004;
        static constexpr unsigned GPIOCEN(unsigned value) { return (value << 2); }
        static constexpr unsigned GPIODEN_POS = 3;
        static constexpr unsigned GPIODEN_MASK = 0x00000008;
        static constexpr unsigned GPIODEN(unsigned value) { return (value << 3); }
        static constexpr unsigned GPIOEEN_POS = 4;
        static constexpr unsigned GPIOEEN_MASK = 0x00000010;
        static constexpr unsigned GPIOEEN(unsigned value) { return (value << 4); }
        static constexpr unsigned GPIOFEN_POS = 5;
        static constexpr unsigned GPIOFEN_MASK = 0x00000020;
        static constexpr unsigned GPIOFEN(unsigned value) { return (value << 5); }
        static constexpr unsigned GPIOGEN_POS = 6;
        static constexpr unsigned GPIOGEN_MASK = 0x00000040;
        static constexpr unsigned GPIOGEN(unsigned value) { return (value << 6); }
        static constexpr unsigned GPIOHEN_POS = 7;
        static constexpr unsigned GPIOHEN_MASK = 0x00000080;
        static constexpr unsigned GPIOHEN(unsigned value) { return (value << 7); }
        static constexpr unsigned CRCEN_POS = 12;
        static constexpr unsigned CRCEN_MASK = 0x00001000;
        static constexpr unsigned CRCEN(unsigned value) { return (value << 12); }
        static constexpr unsigned BKPSRAMEN_POS = 18;
        static constexpr unsigned BKPSRAMEN_MASK = 0x00040000;
        static constexpr unsigned BKPSRAMEN(unsigned value) { return (value << 18); }
        static constexpr unsigned DMA1EN_POS = 21;
        static constexpr unsigned DMA1EN_MASK = 0x00200000;
        static constexpr unsigned DMA1EN(unsigned value) { return (value << 21); }
        static constexpr unsigned DMA2EN_POS = 22;
        static constexpr unsigned DMA2EN_MASK = 0x00400000;
        static constexpr unsigned DMA2EN(unsigned value) { return (value << 22); }
        static constexpr unsigned OTGHSEN_POS = 29;
        static constexpr unsigned OTGHSEN_MASK = 0x20000000;
        static constexpr unsigned OTGHSEN(unsigned value) { return (value << 29); }
        static constexpr unsigned OTGHSULPIEN_POS = 30;
        static constexpr unsigned OTGHSULPIEN_MASK = 0x40000000;
        static constexpr unsigned OTGHSULPIEN(unsigned value) { return (value << 30); }
    } AHB1ENR;

    volatile union AHB2ENR_T // AHB2ENR: AHB2 peripheral clock enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB2ENR_BIT_T
        {
            unsigned DCMIEN  : 1; // bit 0 Camera interface enable
            unsigned         : 6; // bits 1..6 unused
            unsigned OTGFSEN : 1; // bit 7 USB OTG FS clock enable
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned DCMIEN_POS = 0;
        static constexpr unsigned DCMIEN_MASK = 0x00000001;
        static constexpr unsigned DCMIEN(unsigned value) { return (value << 0); }
        static constexpr unsigned OTGFSEN_POS = 7;
        static constexpr unsigned OTGFSEN_MASK = 0x00000080;
        static constexpr unsigned OTGFSEN(unsigned value) { return (value << 7); }
    } AHB2ENR;

    volatile union AHB3ENR_T // AHB3ENR: AHB3 peripheral clock enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB3ENR_BIT_T
        {
            unsigned FMCEN  : 1; // bit 0 Flexible memory controller module clock enable
            unsigned QSPIEN : 1; // bit 1 QUADSPI memory controller module clock enable
            unsigned        : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned FMCEN_POS = 0;
        static constexpr unsigned FMCEN_MASK = 0x00000001;
        static constexpr unsigned FMCEN(unsigned value) { return (value << 0); }
        static constexpr unsigned QSPIEN_POS = 1;
        static constexpr unsigned QSPIEN_MASK = 0x00000002;
        static constexpr unsigned QSPIEN(unsigned value) { return (value << 1); }
    } AHB3ENR;

    uint8_t Reserved3[4];

    volatile union APB1ENR_T // APB1ENR: APB1 peripheral clock enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB1ENR_BIT_T
        {
            unsigned TIM2EN    : 1; // bit 0 TIM2 clock enable
            unsigned TIM3EN    : 1; // bit 1 TIM3 clock enable
            unsigned TIM4EN    : 1; // bit 2 TIM4 clock enable
            unsigned TIM5EN    : 1; // bit 3 TIM5 clock enable
            unsigned TIM6EN    : 1; // bit 4 TIM6 clock enable
            unsigned TIM7EN    : 1; // bit 5 TIM7 clock enable
            unsigned TIM12EN   : 1; // bit 6 TIM12 clock enable
            unsigned TIM13EN   : 1; // bit 7 TIM13 clock enable
            unsigned TIM14EN   : 1; // bit 8 TIM14 clock enable
            unsigned           : 2; // bits 9..10 unused
            unsigned WWDGEN    : 1; // bit 11 Window watchdog clock enable
            unsigned           : 2; // bits 12..13 unused
            unsigned SPI2EN    : 1; // bit 14 SPI2 clock enable
            unsigned SPI3EN    : 1; // bit 15 SPI3 clock enable
            unsigned SPDIFEN   : 1; // bit 16 SPDIF-IN clock enable
            unsigned USART2EN  : 1; // bit 17 USART 2 clock enable
            unsigned USART3EN  : 1; // bit 18 USART3 clock enable
            unsigned UART4EN   : 1; // bit 19 UART4 clock enable
            unsigned UART5EN   : 1; // bit 20 UART5 clock enable
            unsigned I2C1EN    : 1; // bit 21 I2C1 clock enable
            unsigned I2C2EN    : 1; // bit 22 I2C2 clock enable
            unsigned I2C3EN    : 1; // bit 23 I2C3 clock enable
            unsigned I2CFMP1EN : 1; // bit 24 I2CFMP1 clock enable
            unsigned CAN1EN    : 1; // bit 25 CAN 1 clock enable
            unsigned CAN2EN    : 1; // bit 26 CAN 2 clock enable
            unsigned CEC       : 1; // bit 27 CEC interface clock enable
            unsigned PWREN     : 1; // bit 28 Power interface clock enable
            unsigned DACEN     : 1; // bit 29 DAC interface clock enable
            unsigned           : 2; // bits 30..31 unused    
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
        static constexpr unsigned TIM12EN_POS = 6;
        static constexpr unsigned TIM12EN_MASK = 0x00000040;
        static constexpr unsigned TIM12EN(unsigned value) { return (value << 6); }
        static constexpr unsigned TIM13EN_POS = 7;
        static constexpr unsigned TIM13EN_MASK = 0x00000080;
        static constexpr unsigned TIM13EN(unsigned value) { return (value << 7); }
        static constexpr unsigned TIM14EN_POS = 8;
        static constexpr unsigned TIM14EN_MASK = 0x00000100;
        static constexpr unsigned TIM14EN(unsigned value) { return (value << 8); }
        static constexpr unsigned WWDGEN_POS = 11;
        static constexpr unsigned WWDGEN_MASK = 0x00000800;
        static constexpr unsigned WWDGEN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI2EN_POS = 14;
        static constexpr unsigned SPI2EN_MASK = 0x00004000;
        static constexpr unsigned SPI2EN(unsigned value) { return (value << 14); }
        static constexpr unsigned SPI3EN_POS = 15;
        static constexpr unsigned SPI3EN_MASK = 0x00008000;
        static constexpr unsigned SPI3EN(unsigned value) { return (value << 15); }
        static constexpr unsigned SPDIFEN_POS = 16;
        static constexpr unsigned SPDIFEN_MASK = 0x00010000;
        static constexpr unsigned SPDIFEN(unsigned value) { return (value << 16); }
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
        static constexpr unsigned I2C3EN_POS = 23;
        static constexpr unsigned I2C3EN_MASK = 0x00800000;
        static constexpr unsigned I2C3EN(unsigned value) { return (value << 23); }
        static constexpr unsigned I2CFMP1EN_POS = 24;
        static constexpr unsigned I2CFMP1EN_MASK = 0x01000000;
        static constexpr unsigned I2CFMP1EN(unsigned value) { return (value << 24); }
        static constexpr unsigned CAN1EN_POS = 25;
        static constexpr unsigned CAN1EN_MASK = 0x02000000;
        static constexpr unsigned CAN1EN(unsigned value) { return (value << 25); }
        static constexpr unsigned CAN2EN_POS = 26;
        static constexpr unsigned CAN2EN_MASK = 0x04000000;
        static constexpr unsigned CAN2EN(unsigned value) { return (value << 26); }
        static constexpr unsigned CEC_POS = 27;
        static constexpr unsigned CEC_MASK = 0x08000000;
        static constexpr unsigned CEC(unsigned value) { return (value << 27); }
        static constexpr unsigned PWREN_POS = 28;
        static constexpr unsigned PWREN_MASK = 0x10000000;
        static constexpr unsigned PWREN(unsigned value) { return (value << 28); }
        static constexpr unsigned DACEN_POS = 29;
        static constexpr unsigned DACEN_MASK = 0x20000000;
        static constexpr unsigned DACEN(unsigned value) { return (value << 29); }
    } APB1ENR;

    volatile union APB2ENR_T // APB2ENR: APB2 peripheral clock enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB2ENR_BIT_T
        {
            unsigned TIM1EN   : 1; // bit 0 TIM1 clock enable
            unsigned TIM8EN   : 1; // bit 1 TIM8 clock enable
            unsigned          : 2; // bits 2..3 unused
            unsigned USART1EN : 1; // bit 4 USART1 clock enable
            unsigned USART6EN : 1; // bit 5 USART6 clock enable
            unsigned          : 2; // bits 6..7 unused
            unsigned ADC1EN   : 1; // bit 8 ADC1 clock enable
            unsigned ADC2EN   : 1; // bit 9 ADC2 clock enable
            unsigned ADC3EN   : 1; // bit 10 ADC3 clock enable
            unsigned SDIOEN   : 1; // bit 11 SDIO clock enable
            unsigned SPI1EN   : 1; // bit 12 SPI1 clock enable
            unsigned SPI4ENR  : 1; // bit 13 SPI4 clock enable
            unsigned SYSCFGEN : 1; // bit 14 System configuration controller clock enable
            unsigned          : 1; // bit 15 unused
            unsigned TIM9EN   : 1; // bit 16 TIM9 clock enable
            unsigned TIM10EN  : 1; // bit 17 TIM10 clock enable
            unsigned TIM11EN  : 1; // bit 18 TIM11 clock enable
            unsigned          : 3; // bits 19..21 unused
            unsigned SAI1EN   : 1; // bit 22 SAI1 clock enable
            unsigned SAI2EN   : 1; // bit 23 SAI2 clock enable
            unsigned          : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned TIM1EN_POS = 0;
        static constexpr unsigned TIM1EN_MASK = 0x00000001;
        static constexpr unsigned TIM1EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM8EN_POS = 1;
        static constexpr unsigned TIM8EN_MASK = 0x00000002;
        static constexpr unsigned TIM8EN(unsigned value) { return (value << 1); }
        static constexpr unsigned USART1EN_POS = 4;
        static constexpr unsigned USART1EN_MASK = 0x00000010;
        static constexpr unsigned USART1EN(unsigned value) { return (value << 4); }
        static constexpr unsigned USART6EN_POS = 5;
        static constexpr unsigned USART6EN_MASK = 0x00000020;
        static constexpr unsigned USART6EN(unsigned value) { return (value << 5); }
        static constexpr unsigned ADC1EN_POS = 8;
        static constexpr unsigned ADC1EN_MASK = 0x00000100;
        static constexpr unsigned ADC1EN(unsigned value) { return (value << 8); }
        static constexpr unsigned ADC2EN_POS = 9;
        static constexpr unsigned ADC2EN_MASK = 0x00000200;
        static constexpr unsigned ADC2EN(unsigned value) { return (value << 9); }
        static constexpr unsigned ADC3EN_POS = 10;
        static constexpr unsigned ADC3EN_MASK = 0x00000400;
        static constexpr unsigned ADC3EN(unsigned value) { return (value << 10); }
        static constexpr unsigned SDIOEN_POS = 11;
        static constexpr unsigned SDIOEN_MASK = 0x00000800;
        static constexpr unsigned SDIOEN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI1EN_POS = 12;
        static constexpr unsigned SPI1EN_MASK = 0x00001000;
        static constexpr unsigned SPI1EN(unsigned value) { return (value << 12); }
        static constexpr unsigned SPI4ENR_POS = 13;
        static constexpr unsigned SPI4ENR_MASK = 0x00002000;
        static constexpr unsigned SPI4ENR(unsigned value) { return (value << 13); }
        static constexpr unsigned SYSCFGEN_POS = 14;
        static constexpr unsigned SYSCFGEN_MASK = 0x00004000;
        static constexpr unsigned SYSCFGEN(unsigned value) { return (value << 14); }
        static constexpr unsigned TIM9EN_POS = 16;
        static constexpr unsigned TIM9EN_MASK = 0x00010000;
        static constexpr unsigned TIM9EN(unsigned value) { return (value << 16); }
        static constexpr unsigned TIM10EN_POS = 17;
        static constexpr unsigned TIM10EN_MASK = 0x00020000;
        static constexpr unsigned TIM10EN(unsigned value) { return (value << 17); }
        static constexpr unsigned TIM11EN_POS = 18;
        static constexpr unsigned TIM11EN_MASK = 0x00040000;
        static constexpr unsigned TIM11EN(unsigned value) { return (value << 18); }
        static constexpr unsigned SAI1EN_POS = 22;
        static constexpr unsigned SAI1EN_MASK = 0x00400000;
        static constexpr unsigned SAI1EN(unsigned value) { return (value << 22); }
        static constexpr unsigned SAI2EN_POS = 23;
        static constexpr unsigned SAI2EN_MASK = 0x00800000;
        static constexpr unsigned SAI2EN(unsigned value) { return (value << 23); }
    } APB2ENR;

    uint8_t Reserved4[8];

    volatile union AHB1LPENR_T // AHB1LPENR: AHB1 peripheral clock enable in low power mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB1LPENR_BIT_T
        {
            unsigned GPIOALPEN     : 1; // bit 0 IO port A clock enable during sleep mode
            unsigned GPIOBLPEN     : 1; // bit 1 IO port B clock enable during Sleep mode
            unsigned GPIOCLPEN     : 1; // bit 2 IO port C clock enable during Sleep mode
            unsigned GPIODLPEN     : 1; // bit 3 IO port D clock enable during Sleep mode
            unsigned GPIOELPEN     : 1; // bit 4 IO port E clock enable during Sleep mode
            unsigned GPIOFLPEN     : 1; // bit 5 IO port F clock enable during Sleep mode
            unsigned GPIOGLPEN     : 1; // bit 6 IO port G clock enable during Sleep mode
            unsigned GPIOHLPEN     : 1; // bit 7 IO port H clock enable during Sleep mode
            unsigned               : 4; // bits 8..11 unused
            unsigned CRCLPEN       : 1; // bit 12 CRC clock enable during Sleep mode
            unsigned               : 2; // bits 13..14 unused
            unsigned FLITFLPEN     : 1; // bit 15 Flash interface clock enable during Sleep mode
            unsigned SRAM1LPEN     : 1; // bit 16 SRAM 1interface clock enable during Sleep mode
            unsigned SRAM2LPEN     : 1; // bit 17 SRAM 2 interface clock enable during Sleep mode
            unsigned BKPSRAMLPEN   : 1; // bit 18 Backup SRAM interface clock enable during Sleep mode
            unsigned               : 2; // bits 19..20 unused
            unsigned DMA1LPEN      : 1; // bit 21 DMA1 clock enable during Sleep mode
            unsigned DMA2LPEN      : 1; // bit 22 DMA2 clock enable during Sleep mode
            unsigned               : 6; // bits 23..28 unused
            unsigned OTGHSLPEN     : 1; // bit 29 USB OTG HS clock enable during Sleep mode
            unsigned OTGHSULPILPEN : 1; // bit 30 USB OTG HS ULPI clock enable during Sleep mode
            unsigned               : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned GPIOALPEN_POS = 0;
        static constexpr unsigned GPIOALPEN_MASK = 0x00000001;
        static constexpr unsigned GPIOALPEN(unsigned value) { return (value << 0); }
        static constexpr unsigned GPIOBLPEN_POS = 1;
        static constexpr unsigned GPIOBLPEN_MASK = 0x00000002;
        static constexpr unsigned GPIOBLPEN(unsigned value) { return (value << 1); }
        static constexpr unsigned GPIOCLPEN_POS = 2;
        static constexpr unsigned GPIOCLPEN_MASK = 0x00000004;
        static constexpr unsigned GPIOCLPEN(unsigned value) { return (value << 2); }
        static constexpr unsigned GPIODLPEN_POS = 3;
        static constexpr unsigned GPIODLPEN_MASK = 0x00000008;
        static constexpr unsigned GPIODLPEN(unsigned value) { return (value << 3); }
        static constexpr unsigned GPIOELPEN_POS = 4;
        static constexpr unsigned GPIOELPEN_MASK = 0x00000010;
        static constexpr unsigned GPIOELPEN(unsigned value) { return (value << 4); }
        static constexpr unsigned GPIOFLPEN_POS = 5;
        static constexpr unsigned GPIOFLPEN_MASK = 0x00000020;
        static constexpr unsigned GPIOFLPEN(unsigned value) { return (value << 5); }
        static constexpr unsigned GPIOGLPEN_POS = 6;
        static constexpr unsigned GPIOGLPEN_MASK = 0x00000040;
        static constexpr unsigned GPIOGLPEN(unsigned value) { return (value << 6); }
        static constexpr unsigned GPIOHLPEN_POS = 7;
        static constexpr unsigned GPIOHLPEN_MASK = 0x00000080;
        static constexpr unsigned GPIOHLPEN(unsigned value) { return (value << 7); }
        static constexpr unsigned CRCLPEN_POS = 12;
        static constexpr unsigned CRCLPEN_MASK = 0x00001000;
        static constexpr unsigned CRCLPEN(unsigned value) { return (value << 12); }
        static constexpr unsigned FLITFLPEN_POS = 15;
        static constexpr unsigned FLITFLPEN_MASK = 0x00008000;
        static constexpr unsigned FLITFLPEN(unsigned value) { return (value << 15); }
        static constexpr unsigned SRAM1LPEN_POS = 16;
        static constexpr unsigned SRAM1LPEN_MASK = 0x00010000;
        static constexpr unsigned SRAM1LPEN(unsigned value) { return (value << 16); }
        static constexpr unsigned SRAM2LPEN_POS = 17;
        static constexpr unsigned SRAM2LPEN_MASK = 0x00020000;
        static constexpr unsigned SRAM2LPEN(unsigned value) { return (value << 17); }
        static constexpr unsigned BKPSRAMLPEN_POS = 18;
        static constexpr unsigned BKPSRAMLPEN_MASK = 0x00040000;
        static constexpr unsigned BKPSRAMLPEN(unsigned value) { return (value << 18); }
        static constexpr unsigned DMA1LPEN_POS = 21;
        static constexpr unsigned DMA1LPEN_MASK = 0x00200000;
        static constexpr unsigned DMA1LPEN(unsigned value) { return (value << 21); }
        static constexpr unsigned DMA2LPEN_POS = 22;
        static constexpr unsigned DMA2LPEN_MASK = 0x00400000;
        static constexpr unsigned DMA2LPEN(unsigned value) { return (value << 22); }
        static constexpr unsigned OTGHSLPEN_POS = 29;
        static constexpr unsigned OTGHSLPEN_MASK = 0x20000000;
        static constexpr unsigned OTGHSLPEN(unsigned value) { return (value << 29); }
        static constexpr unsigned OTGHSULPILPEN_POS = 30;
        static constexpr unsigned OTGHSULPILPEN_MASK = 0x40000000;
        static constexpr unsigned OTGHSULPILPEN(unsigned value) { return (value << 30); }
    } AHB1LPENR;

    volatile union AHB2LPENR_T // AHB2LPENR: AHB2 peripheral clock enable in low power mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB2LPENR_BIT_T
        {
            unsigned DCMILPEN  : 1; // bit 0 Camera interface enable during Sleep mode
            unsigned           : 6; // bits 1..6 unused
            unsigned OTGFSLPEN : 1; // bit 7 USB OTG FS clock enable during Sleep mode
            unsigned           : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned DCMILPEN_POS = 0;
        static constexpr unsigned DCMILPEN_MASK = 0x00000001;
        static constexpr unsigned DCMILPEN(unsigned value) { return (value << 0); }
        static constexpr unsigned OTGFSLPEN_POS = 7;
        static constexpr unsigned OTGFSLPEN_MASK = 0x00000080;
        static constexpr unsigned OTGFSLPEN(unsigned value) { return (value << 7); }
    } AHB2LPENR;

    volatile union AHB3LPENR_T // AHB3LPENR: AHB3 peripheral clock enable in low power mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHB3LPENR_BIT_T
        {
            unsigned FMCLPEN  : 1; // bit 0 Flexible memory controller module clock enable during Sleep mode
            unsigned QSPILPEN : 1; // bit 1 QUADSPI memory controller module clock enable during Sleep mode
            unsigned          : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned FMCLPEN_POS = 0;
        static constexpr unsigned FMCLPEN_MASK = 0x00000001;
        static constexpr unsigned FMCLPEN(unsigned value) { return (value << 0); }
        static constexpr unsigned QSPILPEN_POS = 1;
        static constexpr unsigned QSPILPEN_MASK = 0x00000002;
        static constexpr unsigned QSPILPEN(unsigned value) { return (value << 1); }
    } AHB3LPENR;

    uint8_t Reserved5[4];

    volatile union APB1LPENR_T // APB1LPENR: APB1 peripheral clock enable in low power mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB1LPENR_BIT_T
        {
            unsigned TIM2LPEN    : 1; // bit 0 TIM2 clock enable during Sleep mode
            unsigned TIM3LPEN    : 1; // bit 1 TIM3 clock enable during Sleep mode
            unsigned TIM4LPEN    : 1; // bit 2 TIM4 clock enable during Sleep mode
            unsigned TIM5LPEN    : 1; // bit 3 TIM5 clock enable during Sleep mode
            unsigned TIM6LPEN    : 1; // bit 4 TIM6 clock enable during Sleep mode
            unsigned TIM7LPEN    : 1; // bit 5 TIM7 clock enable during Sleep mode
            unsigned TIM12LPEN   : 1; // bit 6 TIM12 clock enable during Sleep mode
            unsigned TIM13LPEN   : 1; // bit 7 TIM13 clock enable during Sleep mode
            unsigned TIM14LPEN   : 1; // bit 8 TIM14 clock enable during Sleep mode
            unsigned             : 2; // bits 9..10 unused
            unsigned WWDGLPEN    : 1; // bit 11 Window watchdog clock enable during Sleep mode
            unsigned             : 2; // bits 12..13 unused
            unsigned SPI2LPEN    : 1; // bit 14 SPI2 clock enable during Sleep mode
            unsigned SPI3LPEN    : 1; // bit 15 SPI3 clock enable during Sleep mode
            unsigned SPDIFLPEN   : 1; // bit 16 SPDIF clock enable during Sleep mode
            unsigned USART2LPEN  : 1; // bit 17 USART2 clock enable during Sleep mode
            unsigned USART3LPEN  : 1; // bit 18 USART3 clock enable during Sleep mode
            unsigned UART4LPEN   : 1; // bit 19 UART4 clock enable during Sleep mode
            unsigned UART5LPEN   : 1; // bit 20 UART5 clock enable during Sleep mode
            unsigned I2C1LPEN    : 1; // bit 21 I2C1 clock enable during Sleep mode
            unsigned I2C2LPEN    : 1; // bit 22 I2C2 clock enable during Sleep mode
            unsigned I2C3LPEN    : 1; // bit 23 I2C3 clock enable during Sleep mode
            unsigned I2CFMP1LPEN : 1; // bit 24 I2CFMP1 clock enable during Sleep mode
            unsigned CAN1LPEN    : 1; // bit 25 CAN 1 clock enable during Sleep mode
            unsigned CAN2LPEN    : 1; // bit 26 CAN 2 clock enable during Sleep mode
            unsigned CECLPEN     : 1; // bit 27 CEC clock enable during Sleep mode
            unsigned PWRLPEN     : 1; // bit 28 Power interface clock enable during Sleep mode
            unsigned DACLPEN     : 1; // bit 29 DAC interface clock enable during Sleep mode
            unsigned             : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned TIM2LPEN_POS = 0;
        static constexpr unsigned TIM2LPEN_MASK = 0x00000001;
        static constexpr unsigned TIM2LPEN(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM3LPEN_POS = 1;
        static constexpr unsigned TIM3LPEN_MASK = 0x00000002;
        static constexpr unsigned TIM3LPEN(unsigned value) { return (value << 1); }
        static constexpr unsigned TIM4LPEN_POS = 2;
        static constexpr unsigned TIM4LPEN_MASK = 0x00000004;
        static constexpr unsigned TIM4LPEN(unsigned value) { return (value << 2); }
        static constexpr unsigned TIM5LPEN_POS = 3;
        static constexpr unsigned TIM5LPEN_MASK = 0x00000008;
        static constexpr unsigned TIM5LPEN(unsigned value) { return (value << 3); }
        static constexpr unsigned TIM6LPEN_POS = 4;
        static constexpr unsigned TIM6LPEN_MASK = 0x00000010;
        static constexpr unsigned TIM6LPEN(unsigned value) { return (value << 4); }
        static constexpr unsigned TIM7LPEN_POS = 5;
        static constexpr unsigned TIM7LPEN_MASK = 0x00000020;
        static constexpr unsigned TIM7LPEN(unsigned value) { return (value << 5); }
        static constexpr unsigned TIM12LPEN_POS = 6;
        static constexpr unsigned TIM12LPEN_MASK = 0x00000040;
        static constexpr unsigned TIM12LPEN(unsigned value) { return (value << 6); }
        static constexpr unsigned TIM13LPEN_POS = 7;
        static constexpr unsigned TIM13LPEN_MASK = 0x00000080;
        static constexpr unsigned TIM13LPEN(unsigned value) { return (value << 7); }
        static constexpr unsigned TIM14LPEN_POS = 8;
        static constexpr unsigned TIM14LPEN_MASK = 0x00000100;
        static constexpr unsigned TIM14LPEN(unsigned value) { return (value << 8); }
        static constexpr unsigned WWDGLPEN_POS = 11;
        static constexpr unsigned WWDGLPEN_MASK = 0x00000800;
        static constexpr unsigned WWDGLPEN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI2LPEN_POS = 14;
        static constexpr unsigned SPI2LPEN_MASK = 0x00004000;
        static constexpr unsigned SPI2LPEN(unsigned value) { return (value << 14); }
        static constexpr unsigned SPI3LPEN_POS = 15;
        static constexpr unsigned SPI3LPEN_MASK = 0x00008000;
        static constexpr unsigned SPI3LPEN(unsigned value) { return (value << 15); }
        static constexpr unsigned SPDIFLPEN_POS = 16;
        static constexpr unsigned SPDIFLPEN_MASK = 0x00010000;
        static constexpr unsigned SPDIFLPEN(unsigned value) { return (value << 16); }
        static constexpr unsigned USART2LPEN_POS = 17;
        static constexpr unsigned USART2LPEN_MASK = 0x00020000;
        static constexpr unsigned USART2LPEN(unsigned value) { return (value << 17); }
        static constexpr unsigned USART3LPEN_POS = 18;
        static constexpr unsigned USART3LPEN_MASK = 0x00040000;
        static constexpr unsigned USART3LPEN(unsigned value) { return (value << 18); }
        static constexpr unsigned UART4LPEN_POS = 19;
        static constexpr unsigned UART4LPEN_MASK = 0x00080000;
        static constexpr unsigned UART4LPEN(unsigned value) { return (value << 19); }
        static constexpr unsigned UART5LPEN_POS = 20;
        static constexpr unsigned UART5LPEN_MASK = 0x00100000;
        static constexpr unsigned UART5LPEN(unsigned value) { return (value << 20); }
        static constexpr unsigned I2C1LPEN_POS = 21;
        static constexpr unsigned I2C1LPEN_MASK = 0x00200000;
        static constexpr unsigned I2C1LPEN(unsigned value) { return (value << 21); }
        static constexpr unsigned I2C2LPEN_POS = 22;
        static constexpr unsigned I2C2LPEN_MASK = 0x00400000;
        static constexpr unsigned I2C2LPEN(unsigned value) { return (value << 22); }
        static constexpr unsigned I2C3LPEN_POS = 23;
        static constexpr unsigned I2C3LPEN_MASK = 0x00800000;
        static constexpr unsigned I2C3LPEN(unsigned value) { return (value << 23); }
        static constexpr unsigned I2CFMP1LPEN_POS = 24;
        static constexpr unsigned I2CFMP1LPEN_MASK = 0x01000000;
        static constexpr unsigned I2CFMP1LPEN(unsigned value) { return (value << 24); }
        static constexpr unsigned CAN1LPEN_POS = 25;
        static constexpr unsigned CAN1LPEN_MASK = 0x02000000;
        static constexpr unsigned CAN1LPEN(unsigned value) { return (value << 25); }
        static constexpr unsigned CAN2LPEN_POS = 26;
        static constexpr unsigned CAN2LPEN_MASK = 0x04000000;
        static constexpr unsigned CAN2LPEN(unsigned value) { return (value << 26); }
        static constexpr unsigned CECLPEN_POS = 27;
        static constexpr unsigned CECLPEN_MASK = 0x08000000;
        static constexpr unsigned CECLPEN(unsigned value) { return (value << 27); }
        static constexpr unsigned PWRLPEN_POS = 28;
        static constexpr unsigned PWRLPEN_MASK = 0x10000000;
        static constexpr unsigned PWRLPEN(unsigned value) { return (value << 28); }
        static constexpr unsigned DACLPEN_POS = 29;
        static constexpr unsigned DACLPEN_MASK = 0x20000000;
        static constexpr unsigned DACLPEN(unsigned value) { return (value << 29); }
    } APB1LPENR;

    volatile union APB2LPENR_T // APB2LPENR: APB2 peripheral clock enabled in low power mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APB2LPENR_BIT_T
        {
            unsigned TIM1LPEN   : 1; // bit 0 TIM1 clock enable during Sleep mode
            unsigned TIM8LPEN   : 1; // bit 1 TIM8 clock enable during Sleep mode
            unsigned            : 2; // bits 2..3 unused
            unsigned USART1LPEN : 1; // bit 4 USART1 clock enable during Sleep mode
            unsigned USART6LPEN : 1; // bit 5 USART6 clock enable during Sleep mode
            unsigned            : 2; // bits 6..7 unused
            unsigned ADC1LPEN   : 1; // bit 8 ADC1 clock enable during Sleep mode
            unsigned ADC2LPEN   : 1; // bit 9 ADC2 clock enable during Sleep mode
            unsigned ADC3LPEN   : 1; // bit 10 ADC 3 clock enable during Sleep mode
            unsigned SDIOLPEN   : 1; // bit 11 SDIO clock enable during Sleep mode
            unsigned SPI1LPEN   : 1; // bit 12 SPI 1 clock enable during Sleep mode
            unsigned SPI4LPEN   : 1; // bit 13 SPI 4 clock enable during Sleep mode
            unsigned SYSCFGLPEN : 1; // bit 14 System configuration controller clock enable during Sleep mode
            unsigned            : 1; // bit 15 unused
            unsigned TIM9LPEN   : 1; // bit 16 TIM9 clock enable during sleep mode
            unsigned TIM10LPEN  : 1; // bit 17 TIM10 clock enable during Sleep mode
            unsigned TIM11LPEN  : 1; // bit 18 TIM11 clock enable during Sleep mode
            unsigned            : 3; // bits 19..21 unused
            unsigned SAI1LPEN   : 1; // bit 22 SAI1 clock enable
            unsigned SAI2LPEN   : 1; // bit 23 SAI2 clock enable
            unsigned            : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned TIM1LPEN_POS = 0;
        static constexpr unsigned TIM1LPEN_MASK = 0x00000001;
        static constexpr unsigned TIM1LPEN(unsigned value) { return (value << 0); }
        static constexpr unsigned TIM8LPEN_POS = 1;
        static constexpr unsigned TIM8LPEN_MASK = 0x00000002;
        static constexpr unsigned TIM8LPEN(unsigned value) { return (value << 1); }
        static constexpr unsigned USART1LPEN_POS = 4;
        static constexpr unsigned USART1LPEN_MASK = 0x00000010;
        static constexpr unsigned USART1LPEN(unsigned value) { return (value << 4); }
        static constexpr unsigned USART6LPEN_POS = 5;
        static constexpr unsigned USART6LPEN_MASK = 0x00000020;
        static constexpr unsigned USART6LPEN(unsigned value) { return (value << 5); }
        static constexpr unsigned ADC1LPEN_POS = 8;
        static constexpr unsigned ADC1LPEN_MASK = 0x00000100;
        static constexpr unsigned ADC1LPEN(unsigned value) { return (value << 8); }
        static constexpr unsigned ADC2LPEN_POS = 9;
        static constexpr unsigned ADC2LPEN_MASK = 0x00000200;
        static constexpr unsigned ADC2LPEN(unsigned value) { return (value << 9); }
        static constexpr unsigned ADC3LPEN_POS = 10;
        static constexpr unsigned ADC3LPEN_MASK = 0x00000400;
        static constexpr unsigned ADC3LPEN(unsigned value) { return (value << 10); }
        static constexpr unsigned SDIOLPEN_POS = 11;
        static constexpr unsigned SDIOLPEN_MASK = 0x00000800;
        static constexpr unsigned SDIOLPEN(unsigned value) { return (value << 11); }
        static constexpr unsigned SPI1LPEN_POS = 12;
        static constexpr unsigned SPI1LPEN_MASK = 0x00001000;
        static constexpr unsigned SPI1LPEN(unsigned value) { return (value << 12); }
        static constexpr unsigned SPI4LPEN_POS = 13;
        static constexpr unsigned SPI4LPEN_MASK = 0x00002000;
        static constexpr unsigned SPI4LPEN(unsigned value) { return (value << 13); }
        static constexpr unsigned SYSCFGLPEN_POS = 14;
        static constexpr unsigned SYSCFGLPEN_MASK = 0x00004000;
        static constexpr unsigned SYSCFGLPEN(unsigned value) { return (value << 14); }
        static constexpr unsigned TIM9LPEN_POS = 16;
        static constexpr unsigned TIM9LPEN_MASK = 0x00010000;
        static constexpr unsigned TIM9LPEN(unsigned value) { return (value << 16); }
        static constexpr unsigned TIM10LPEN_POS = 17;
        static constexpr unsigned TIM10LPEN_MASK = 0x00020000;
        static constexpr unsigned TIM10LPEN(unsigned value) { return (value << 17); }
        static constexpr unsigned TIM11LPEN_POS = 18;
        static constexpr unsigned TIM11LPEN_MASK = 0x00040000;
        static constexpr unsigned TIM11LPEN(unsigned value) { return (value << 18); }
        static constexpr unsigned SAI1LPEN_POS = 22;
        static constexpr unsigned SAI1LPEN_MASK = 0x00400000;
        static constexpr unsigned SAI1LPEN(unsigned value) { return (value << 22); }
        static constexpr unsigned SAI2LPEN_POS = 23;
        static constexpr unsigned SAI2LPEN_MASK = 0x00800000;
        static constexpr unsigned SAI2LPEN(unsigned value) { return (value << 23); }
    } APB2LPENR;

    uint8_t Reserved6[8];

    volatile union BDCR_T // BDCR: Backup domain control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BDCR_BIT_T
        {
            unsigned LSEON  : 1; // bit 0 External low-speed oscillator enable
            unsigned LSERDY : 1; // bit 1 External low-speed oscillator ready
            unsigned LSEBYP : 1; // bit 2 External low-speed oscillator bypass
            unsigned LSEMOD : 1; // bit 3 External low-speed oscillator mode
            unsigned        : 4; // bits 4..7 unused
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
        static constexpr unsigned LSEMOD_POS = 3;
        static constexpr unsigned LSEMOD_MASK = 0x00000008;
        static constexpr unsigned LSEMOD(unsigned value) { return (value << 3); }
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

    volatile union CSR_T // CSR: clock control & status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned LSION    : 1; // bit 0 Internal low-speed oscillator enable
            unsigned LSIRDY   : 1; // bit 1 Internal low-speed oscillator ready
            unsigned          : 22; // bits 2..23 unused
            unsigned RMVF     : 1; // bit 24 Remove reset flag
            unsigned BORRSTF  : 1; // bit 25 BOR reset flag
            unsigned PADRSTF  : 1; // bit 26 PIN reset flag
            unsigned PORRSTF  : 1; // bit 27 POR/PDR reset flag
            unsigned SFTRSTF  : 1; // bit 28 Software reset flag
            unsigned WDGRSTF  : 1; // bit 29 Independent watchdog reset flag
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
        static constexpr unsigned BORRSTF_POS = 25;
        static constexpr unsigned BORRSTF_MASK = 0x02000000;
        static constexpr unsigned BORRSTF(unsigned value) { return (value << 25); }
        static constexpr unsigned PADRSTF_POS = 26;
        static constexpr unsigned PADRSTF_MASK = 0x04000000;
        static constexpr unsigned PADRSTF(unsigned value) { return (value << 26); }
        static constexpr unsigned PORRSTF_POS = 27;
        static constexpr unsigned PORRSTF_MASK = 0x08000000;
        static constexpr unsigned PORRSTF(unsigned value) { return (value << 27); }
        static constexpr unsigned SFTRSTF_POS = 28;
        static constexpr unsigned SFTRSTF_MASK = 0x10000000;
        static constexpr unsigned SFTRSTF(unsigned value) { return (value << 28); }
        static constexpr unsigned WDGRSTF_POS = 29;
        static constexpr unsigned WDGRSTF_MASK = 0x20000000;
        static constexpr unsigned WDGRSTF(unsigned value) { return (value << 29); }
        static constexpr unsigned WWDGRSTF_POS = 30;
        static constexpr unsigned WWDGRSTF_MASK = 0x40000000;
        static constexpr unsigned WWDGRSTF(unsigned value) { return (value << 30); }
        static constexpr unsigned LPWRRSTF_POS = 31;
        static constexpr unsigned LPWRRSTF_MASK = 0x80000000;
        static constexpr unsigned LPWRRSTF(unsigned value) { return (value << 31); }
    } CSR;

    uint8_t Reserved7[8];

    volatile union SSCGR_T // SSCGR: spread spectrum clock generation register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SSCGR_BIT_T
        {
            unsigned MODPER    : 13; // bits 0..12 Modulation period
            unsigned INCSTEP   : 15; // bits 13..27 Incrementation step
            unsigned           : 2; // bits 28..29 unused
            unsigned SPREADSEL : 1; // bit 30 Spread Select
            unsigned SSCGEN    : 1; // bit 31 Spread spectrum modulation enable    
        } bit;
    
        static constexpr unsigned MODPER_POS = 0;
        static constexpr unsigned MODPER_MASK = 0x00001fff;
        static constexpr unsigned MODPER(unsigned value) { return (value << 0); }
        static constexpr unsigned INCSTEP_POS = 13;
        static constexpr unsigned INCSTEP_MASK = 0x0fffe000;
        static constexpr unsigned INCSTEP(unsigned value) { return (value << 13); }
        static constexpr unsigned SPREADSEL_POS = 30;
        static constexpr unsigned SPREADSEL_MASK = 0x40000000;
        static constexpr unsigned SPREADSEL(unsigned value) { return (value << 30); }
        static constexpr unsigned SSCGEN_POS = 31;
        static constexpr unsigned SSCGEN_MASK = 0x80000000;
        static constexpr unsigned SSCGEN(unsigned value) { return (value << 31); }
    } SSCGR;

    volatile union PLLI2SCFGR_T // PLLI2SCFGR: PLLI2S configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PLLI2SCFGR_BIT_T
        {
            unsigned PLLI2SM : 6; // bits 0..5 Division factor for audio PLL (PLLI2S) input clock
            unsigned PLLI2SN : 9; // bits 6..14 PLLI2S multiplication factor for VCO
            unsigned         : 1; // bit 15 unused
            unsigned PLLI2SP : 2; // bits 16..17 PLLI2S division factor for SPDIF-IN clock
            unsigned         : 6; // bits 18..23 unused
            unsigned PLLI2SQ : 4; // bits 24..27 PLLI2S division factor for SAI1 clock
            unsigned PLLI2SR : 3; // bits 28..30 PLLI2S division factor for I2S clocks
            unsigned         : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned PLLI2SM_POS = 0;
        static constexpr unsigned PLLI2SM_MASK = 0x0000003f;
        static constexpr unsigned PLLI2SM(unsigned value) { return (value << 0); }
        static constexpr unsigned PLLI2SN_POS = 6;
        static constexpr unsigned PLLI2SN_MASK = 0x00007fc0;
        static constexpr unsigned PLLI2SN(unsigned value) { return (value << 6); }
        static constexpr unsigned PLLI2SP_POS = 16;
        static constexpr unsigned PLLI2SP_MASK = 0x00030000;
        static constexpr unsigned PLLI2SP(unsigned value) { return (value << 16); }
        static constexpr unsigned PLLI2SQ_POS = 24;
        static constexpr unsigned PLLI2SQ_MASK = 0x0f000000;
        static constexpr unsigned PLLI2SQ(unsigned value) { return (value << 24); }
        static constexpr unsigned PLLI2SR_POS = 28;
        static constexpr unsigned PLLI2SR_MASK = 0x70000000;
        static constexpr unsigned PLLI2SR(unsigned value) { return (value << 28); }
    } PLLI2SCFGR;

    volatile union PLLSAICFGR_T // PLLSAICFGR: PLL configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PLLSAICFGR_BIT_T
        {
            unsigned PLLSAIM : 6; // bits 0..5 Division factor for audio PLLSAI input clock
            unsigned PLLSAIN : 9; // bits 6..14 PLLSAI division factor for VCO
            unsigned         : 1; // bit 15 unused
            unsigned PLLSAIP : 2; // bits 16..17 PLLSAI division factor for 48 MHz clock
            unsigned         : 6; // bits 18..23 unused
            unsigned PLLSAIQ : 4; // bits 24..27 PLLSAI division factor for SAIs clock
            unsigned         : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned PLLSAIM_POS = 0;
        static constexpr unsigned PLLSAIM_MASK = 0x0000003f;
        static constexpr unsigned PLLSAIM(unsigned value) { return (value << 0); }
        static constexpr unsigned PLLSAIN_POS = 6;
        static constexpr unsigned PLLSAIN_MASK = 0x00007fc0;
        static constexpr unsigned PLLSAIN(unsigned value) { return (value << 6); }
        static constexpr unsigned PLLSAIP_POS = 16;
        static constexpr unsigned PLLSAIP_MASK = 0x00030000;
        static constexpr unsigned PLLSAIP(unsigned value) { return (value << 16); }
        static constexpr unsigned PLLSAIQ_POS = 24;
        static constexpr unsigned PLLSAIQ_MASK = 0x0f000000;
        static constexpr unsigned PLLSAIQ(unsigned value) { return (value << 24); }
    } PLLSAICFGR;

    volatile union DCKCFGR_T // DCKCFGR: Dedicated Clock Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCKCFGR_BIT_T
        {
            unsigned PLLI2SDIVQ : 5; // bits 0..4 PLLI2S division factor for SAIs clock
            unsigned            : 3; // bits 5..7 unused
            unsigned PLLSAIDIVQ : 5; // bits 8..12 PLLSAI division factor for SAIs clock
            unsigned            : 7; // bits 13..19 unused
            unsigned SAI1SRC    : 2; // bits 20..21 SAI1 clock source selection
            unsigned SAI2SRC    : 2; // bits 22..23 SAI2 clock source selection
            unsigned TIMPRE     : 1; // bit 24 Timers clocks prescalers selection
            unsigned I2S1SRC    : 2; // bits 25..26 I2S APB1 clock source selection
            unsigned I2S2SRC    : 2; // bits 27..28 I2S APB2 clock source selection
            unsigned            : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned PLLI2SDIVQ_POS = 0;
        static constexpr unsigned PLLI2SDIVQ_MASK = 0x0000001f;
        static constexpr unsigned PLLI2SDIVQ(unsigned value) { return (value << 0); }
        static constexpr unsigned PLLSAIDIVQ_POS = 8;
        static constexpr unsigned PLLSAIDIVQ_MASK = 0x00001f00;
        static constexpr unsigned PLLSAIDIVQ(unsigned value) { return (value << 8); }
        static constexpr unsigned SAI1SRC_POS = 20;
        static constexpr unsigned SAI1SRC_MASK = 0x00300000;
        static constexpr unsigned SAI1SRC(unsigned value) { return (value << 20); }
        static constexpr unsigned SAI2SRC_POS = 22;
        static constexpr unsigned SAI2SRC_MASK = 0x00c00000;
        static constexpr unsigned SAI2SRC(unsigned value) { return (value << 22); }
        static constexpr unsigned TIMPRE_POS = 24;
        static constexpr unsigned TIMPRE_MASK = 0x01000000;
        static constexpr unsigned TIMPRE(unsigned value) { return (value << 24); }
        static constexpr unsigned I2S1SRC_POS = 25;
        static constexpr unsigned I2S1SRC_MASK = 0x06000000;
        static constexpr unsigned I2S1SRC(unsigned value) { return (value << 25); }
        static constexpr unsigned I2S2SRC_POS = 27;
        static constexpr unsigned I2S2SRC_MASK = 0x18000000;
        static constexpr unsigned I2S2SRC(unsigned value) { return (value << 27); }
    } DCKCFGR;

    volatile union CKGATENR_T // CKGATENR: clocks gated enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CKGATENR_BIT_T
        {
            unsigned AHB2APB1_CKEN : 1; // bit 0 AHB to APB1 Bridge clock enable
            unsigned AHB2APB2_CKEN : 1; // bit 1 AHB to APB2 Bridge clock enable
            unsigned CM4DBG_CKEN   : 1; // bit 2 Cortex M4 ETM clock enable
            unsigned SPARE_CKEN    : 1; // bit 3 Spare clock enable
            unsigned SRAM_CKEN     : 1; // bit 4 SRQAM controller clock enable
            unsigned FLITF_CKEN    : 1; // bit 5 Flash Interface clock enable
            unsigned RCC_CKEN      : 1; // bit 6 RCC clock enable
            unsigned               : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned AHB2APB1_CKEN_POS = 0;
        static constexpr unsigned AHB2APB1_CKEN_MASK = 0x00000001;
        static constexpr unsigned AHB2APB1_CKEN(unsigned value) { return (value << 0); }
        static constexpr unsigned AHB2APB2_CKEN_POS = 1;
        static constexpr unsigned AHB2APB2_CKEN_MASK = 0x00000002;
        static constexpr unsigned AHB2APB2_CKEN(unsigned value) { return (value << 1); }
        static constexpr unsigned CM4DBG_CKEN_POS = 2;
        static constexpr unsigned CM4DBG_CKEN_MASK = 0x00000004;
        static constexpr unsigned CM4DBG_CKEN(unsigned value) { return (value << 2); }
        static constexpr unsigned SPARE_CKEN_POS = 3;
        static constexpr unsigned SPARE_CKEN_MASK = 0x00000008;
        static constexpr unsigned SPARE_CKEN(unsigned value) { return (value << 3); }
        static constexpr unsigned SRAM_CKEN_POS = 4;
        static constexpr unsigned SRAM_CKEN_MASK = 0x00000010;
        static constexpr unsigned SRAM_CKEN(unsigned value) { return (value << 4); }
        static constexpr unsigned FLITF_CKEN_POS = 5;
        static constexpr unsigned FLITF_CKEN_MASK = 0x00000020;
        static constexpr unsigned FLITF_CKEN(unsigned value) { return (value << 5); }
        static constexpr unsigned RCC_CKEN_POS = 6;
        static constexpr unsigned RCC_CKEN_MASK = 0x00000040;
        static constexpr unsigned RCC_CKEN(unsigned value) { return (value << 6); }
    } CKGATENR;

    volatile union DCKCFGR2_T // DCKCFGR2: dedicated clocks configuration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCKCFGR2_BIT_T
        {
            unsigned            : 22; // bits 0..21 unused
            unsigned FMPI2C1SEL : 2; // bits 22..23 I2C4 kernel clock source selection
            unsigned            : 2; // bits 24..25 unused
            unsigned CECSEL     : 1; // bit 26 HDMI CEC clock source selection
            unsigned CK48MSEL   : 1; // bit 27 SDIO/USBFS/HS clock selection
            unsigned SDIOSEL    : 1; // bit 28 SDIO clock selection
            unsigned SPDIFSEL   : 1; // bit 29 SPDIF clock selection
            unsigned            : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned FMPI2C1SEL_POS = 22;
        static constexpr unsigned FMPI2C1SEL_MASK = 0x00c00000;
        static constexpr unsigned FMPI2C1SEL(unsigned value) { return (value << 22); }
        static constexpr unsigned CECSEL_POS = 26;
        static constexpr unsigned CECSEL_MASK = 0x04000000;
        static constexpr unsigned CECSEL(unsigned value) { return (value << 26); }
        static constexpr unsigned CK48MSEL_POS = 27;
        static constexpr unsigned CK48MSEL_MASK = 0x08000000;
        static constexpr unsigned CK48MSEL(unsigned value) { return (value << 27); }
        static constexpr unsigned SDIOSEL_POS = 28;
        static constexpr unsigned SDIOSEL_MASK = 0x10000000;
        static constexpr unsigned SDIOSEL(unsigned value) { return (value << 28); }
        static constexpr unsigned SPDIFSEL_POS = 29;
        static constexpr unsigned SPDIFSEL_MASK = 0x20000000;
        static constexpr unsigned SPDIFSEL(unsigned value) { return (value << 29); }
    } DCKCFGR2;

}; // struct RCC_T

static_assert(sizeof(RCC_T) == RCC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp