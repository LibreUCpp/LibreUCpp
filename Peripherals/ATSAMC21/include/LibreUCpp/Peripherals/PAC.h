#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PAC_T
{
    static constexpr size_t INSTANCE_SIZE = 68;
    static constexpr intptr_t BASE_ADDRESS = 0x40000000;

    static constexpr intptr_t ADDR_OFFSET_WRCTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x09;
    static constexpr intptr_t ADDR_OFFSET_INTFLAGAHB = 0x10;
    static constexpr intptr_t ADDR_OFFSET_INTFLAGA = 0x14;
    static constexpr intptr_t ADDR_OFFSET_INTFLAGB = 0x18;
    static constexpr intptr_t ADDR_OFFSET_INTFLAGC = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_INTFLAGD = 0x20;
    static constexpr intptr_t ADDR_OFFSET_STATUSA = 0x34;
    static constexpr intptr_t ADDR_OFFSET_STATUSB = 0x38;
    static constexpr intptr_t ADDR_OFFSET_STATUSC = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_STATUSD = 0x40;

    volatile union WRCTRL_T // WRCTRL: Write control 
    {
        uint32_t reg;
        struct __attribute__((packed)) WRCTRL_BIT_T
        {
            unsigned PERID : 16; // bits 0..15 Peripheral identifier
            unsigned KEY   : 8; // bits 16..23 Peripheral access control key
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned PERID_POS = 0;
        static constexpr unsigned PERID_MASK = 0x0000ffff;
        static constexpr unsigned PERID(unsigned value) { return (value << 0); }
        static constexpr unsigned KEY_POS = 16;
        static constexpr unsigned KEY_MASK = 0x00ff0000;
        static constexpr unsigned KEY(unsigned value) { return (value << 16); }
    } WRCTRL;

    volatile union EVCTRL_T // EVCTRL: Event control 
    {
        uint8_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned ERREO : 1; // bit 0 Peripheral acess error event output
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned ERREO_POS = 0;
        static constexpr unsigned ERREO_MASK = 0x00000001;
        static constexpr unsigned ERREO(unsigned value) { return (value << 0); }
    } EVCTRL;

    uint8_t Reserved1[3];

    volatile union INTENCLR_T // INTENCLR: Interrupt enable clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned ERR : 1; // bit 0 Peripheral access error interrupt disable
            unsigned     : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned ERR_POS = 0;
        static constexpr unsigned ERR_MASK = 0x00000001;
        static constexpr unsigned ERR(unsigned value) { return (value << 0); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt enable set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned ERR : 1; // bit 0 Peripheral access error interrupt enable
            unsigned     : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned ERR_POS = 0;
        static constexpr unsigned ERR_MASK = 0x00000001;
        static constexpr unsigned ERR(unsigned value) { return (value << 0); }
    } INTENSET;

    uint8_t Reserved2[6];

    volatile union INTFLAGAHB_T // INTFLAGAHB: Bridge interrupt flag status 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAGAHB_BIT_T
        {
            unsigned FLASH     : 1; // bit 0 FLASH
            unsigned HSRAMCM0P : 1; // bit 1 HSRAMCM0P
            unsigned HSRAMDSU  : 1; // bit 2 HSRAMDSU
            unsigned HPB1      : 1; // bit 3 HPB1
            unsigned HPB0      : 1; // bit 4 HPB0
            unsigned HPB2      : 1; // bit 5 HPB2
            unsigned LPRAMDMAC : 1; // bit 6 LPRAMDMAC
            unsigned DIVAS     : 1; // bit 7 DIVAS
            unsigned HPB3      : 1; // bit 8 HPB3
            unsigned           : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned FLASH_POS = 0;
        static constexpr unsigned FLASH_MASK = 0x00000001;
        static constexpr unsigned FLASH(unsigned value) { return (value << 0); }
        static constexpr unsigned HSRAMCM0P_POS = 1;
        static constexpr unsigned HSRAMCM0P_MASK = 0x00000002;
        static constexpr unsigned HSRAMCM0P(unsigned value) { return (value << 1); }
        static constexpr unsigned HSRAMDSU_POS = 2;
        static constexpr unsigned HSRAMDSU_MASK = 0x00000004;
        static constexpr unsigned HSRAMDSU(unsigned value) { return (value << 2); }
        static constexpr unsigned HPB1_POS = 3;
        static constexpr unsigned HPB1_MASK = 0x00000008;
        static constexpr unsigned HPB1(unsigned value) { return (value << 3); }
        static constexpr unsigned HPB0_POS = 4;
        static constexpr unsigned HPB0_MASK = 0x00000010;
        static constexpr unsigned HPB0(unsigned value) { return (value << 4); }
        static constexpr unsigned HPB2_POS = 5;
        static constexpr unsigned HPB2_MASK = 0x00000020;
        static constexpr unsigned HPB2(unsigned value) { return (value << 5); }
        static constexpr unsigned LPRAMDMAC_POS = 6;
        static constexpr unsigned LPRAMDMAC_MASK = 0x00000040;
        static constexpr unsigned LPRAMDMAC(unsigned value) { return (value << 6); }
        static constexpr unsigned DIVAS_POS = 7;
        static constexpr unsigned DIVAS_MASK = 0x00000080;
        static constexpr unsigned DIVAS(unsigned value) { return (value << 7); }
        static constexpr unsigned HPB3_POS = 8;
        static constexpr unsigned HPB3_MASK = 0x00000100;
        static constexpr unsigned HPB3(unsigned value) { return (value << 8); }
    } INTFLAGAHB;

    volatile union INTFLAGA_T // INTFLAGA: Peripheral interrupt flag status - Bridge A 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAGA_BIT_T
        {
            unsigned PAC        : 1; // bit 0 PAC
            unsigned PM         : 1; // bit 1 PM
            unsigned MCLK       : 1; // bit 2 MCLK
            unsigned RSTC       : 1; // bit 3 RSTC
            unsigned OSCCTRL    : 1; // bit 4 OSCCTRL
            unsigned OSC32KCTRL : 1; // bit 5 OSC32KCTRL
            unsigned SUPC       : 1; // bit 6 SUPC
            unsigned GCLK       : 1; // bit 7 GCLK
            unsigned WDT        : 1; // bit 8 WDT
            unsigned RTC        : 1; // bit 9 RTC
            unsigned EIC        : 1; // bit 10 EIC
            unsigned FREQM      : 1; // bit 11 FREQM
            unsigned TSENS      : 1; // bit 12 TSENS
            unsigned            : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned PAC_POS = 0;
        static constexpr unsigned PAC_MASK = 0x00000001;
        static constexpr unsigned PAC(unsigned value) { return (value << 0); }
        static constexpr unsigned PM_POS = 1;
        static constexpr unsigned PM_MASK = 0x00000002;
        static constexpr unsigned PM(unsigned value) { return (value << 1); }
        static constexpr unsigned MCLK_POS = 2;
        static constexpr unsigned MCLK_MASK = 0x00000004;
        static constexpr unsigned MCLK(unsigned value) { return (value << 2); }
        static constexpr unsigned RSTC_POS = 3;
        static constexpr unsigned RSTC_MASK = 0x00000008;
        static constexpr unsigned RSTC(unsigned value) { return (value << 3); }
        static constexpr unsigned OSCCTRL_POS = 4;
        static constexpr unsigned OSCCTRL_MASK = 0x00000010;
        static constexpr unsigned OSCCTRL(unsigned value) { return (value << 4); }
        static constexpr unsigned OSC32KCTRL_POS = 5;
        static constexpr unsigned OSC32KCTRL_MASK = 0x00000020;
        static constexpr unsigned OSC32KCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned SUPC_POS = 6;
        static constexpr unsigned SUPC_MASK = 0x00000040;
        static constexpr unsigned SUPC(unsigned value) { return (value << 6); }
        static constexpr unsigned GCLK_POS = 7;
        static constexpr unsigned GCLK_MASK = 0x00000080;
        static constexpr unsigned GCLK(unsigned value) { return (value << 7); }
        static constexpr unsigned WDT_POS = 8;
        static constexpr unsigned WDT_MASK = 0x00000100;
        static constexpr unsigned WDT(unsigned value) { return (value << 8); }
        static constexpr unsigned RTC_POS = 9;
        static constexpr unsigned RTC_MASK = 0x00000200;
        static constexpr unsigned RTC(unsigned value) { return (value << 9); }
        static constexpr unsigned EIC_POS = 10;
        static constexpr unsigned EIC_MASK = 0x00000400;
        static constexpr unsigned EIC(unsigned value) { return (value << 10); }
        static constexpr unsigned FREQM_POS = 11;
        static constexpr unsigned FREQM_MASK = 0x00000800;
        static constexpr unsigned FREQM(unsigned value) { return (value << 11); }
        static constexpr unsigned TSENS_POS = 12;
        static constexpr unsigned TSENS_MASK = 0x00001000;
        static constexpr unsigned TSENS(unsigned value) { return (value << 12); }
    } INTFLAGA;

    volatile union INTFLAGB_T // INTFLAGB: Peripheral interrupt flag status - Bridge B 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAGB_BIT_T
        {
            unsigned PORT      : 1; // bit 0 PORT
            unsigned DSU       : 1; // bit 1 DSU
            unsigned NVMCTRL   : 1; // bit 2 NVMCTRL
            unsigned DMAC      : 1; // bit 3 DMAC
            unsigned MTB       : 1; // bit 4 MTB
            unsigned HMATRIXHS : 1; // bit 5 HMATRIXHS
            unsigned           : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned PORT_POS = 0;
        static constexpr unsigned PORT_MASK = 0x00000001;
        static constexpr unsigned PORT(unsigned value) { return (value << 0); }
        static constexpr unsigned DSU_POS = 1;
        static constexpr unsigned DSU_MASK = 0x00000002;
        static constexpr unsigned DSU(unsigned value) { return (value << 1); }
        static constexpr unsigned NVMCTRL_POS = 2;
        static constexpr unsigned NVMCTRL_MASK = 0x00000004;
        static constexpr unsigned NVMCTRL(unsigned value) { return (value << 2); }
        static constexpr unsigned DMAC_POS = 3;
        static constexpr unsigned DMAC_MASK = 0x00000008;
        static constexpr unsigned DMAC(unsigned value) { return (value << 3); }
        static constexpr unsigned MTB_POS = 4;
        static constexpr unsigned MTB_MASK = 0x00000010;
        static constexpr unsigned MTB(unsigned value) { return (value << 4); }
        static constexpr unsigned HMATRIXHS_POS = 5;
        static constexpr unsigned HMATRIXHS_MASK = 0x00000020;
        static constexpr unsigned HMATRIXHS(unsigned value) { return (value << 5); }
    } INTFLAGB;

    volatile union INTFLAGC_T // INTFLAGC: Peripheral interrupt flag status - Bridge C 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAGC_BIT_T
        {
            unsigned EVSYS   : 1; // bit 0 EVSYS
            unsigned SERCOM0 : 1; // bit 1 SERCOM0
            unsigned SERCOM1 : 1; // bit 2 SERCOM1
            unsigned SERCOM2 : 1; // bit 3 SERCOM2
            unsigned SERCOM3 : 1; // bit 4 SERCOM3
            unsigned SERCOM4 : 1; // bit 5 SERCOM4
            unsigned SERCOM5 : 1; // bit 6 SERCOM5
            unsigned CAN0    : 1; // bit 7 CAN0
            unsigned CAN1    : 1; // bit 8 CAN1
            unsigned TCC0    : 1; // bit 9 TCC0
            unsigned TCC1    : 1; // bit 10 TCC1
            unsigned TCC2    : 1; // bit 11 TCC2
            unsigned TC0     : 1; // bit 12 TC0
            unsigned TC1     : 1; // bit 13 TC1
            unsigned TC2     : 1; // bit 14 TC2
            unsigned TC3     : 1; // bit 15 TC3
            unsigned TC4     : 1; // bit 16 TC4
            unsigned ADC0    : 1; // bit 17 ADC0
            unsigned ADC1    : 1; // bit 18 ADC1
            unsigned SDADC   : 1; // bit 19 SDADC
            unsigned AC      : 1; // bit 20 AC
            unsigned DAC     : 1; // bit 21 DAC
            unsigned PTC     : 1; // bit 22 PTC
            unsigned CCL     : 1; // bit 23 CCL
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned EVSYS_POS = 0;
        static constexpr unsigned EVSYS_MASK = 0x00000001;
        static constexpr unsigned EVSYS(unsigned value) { return (value << 0); }
        static constexpr unsigned SERCOM0_POS = 1;
        static constexpr unsigned SERCOM0_MASK = 0x00000002;
        static constexpr unsigned SERCOM0(unsigned value) { return (value << 1); }
        static constexpr unsigned SERCOM1_POS = 2;
        static constexpr unsigned SERCOM1_MASK = 0x00000004;
        static constexpr unsigned SERCOM1(unsigned value) { return (value << 2); }
        static constexpr unsigned SERCOM2_POS = 3;
        static constexpr unsigned SERCOM2_MASK = 0x00000008;
        static constexpr unsigned SERCOM2(unsigned value) { return (value << 3); }
        static constexpr unsigned SERCOM3_POS = 4;
        static constexpr unsigned SERCOM3_MASK = 0x00000010;
        static constexpr unsigned SERCOM3(unsigned value) { return (value << 4); }
        static constexpr unsigned SERCOM4_POS = 5;
        static constexpr unsigned SERCOM4_MASK = 0x00000020;
        static constexpr unsigned SERCOM4(unsigned value) { return (value << 5); }
        static constexpr unsigned SERCOM5_POS = 6;
        static constexpr unsigned SERCOM5_MASK = 0x00000040;
        static constexpr unsigned SERCOM5(unsigned value) { return (value << 6); }
        static constexpr unsigned CAN0_POS = 7;
        static constexpr unsigned CAN0_MASK = 0x00000080;
        static constexpr unsigned CAN0(unsigned value) { return (value << 7); }
        static constexpr unsigned CAN1_POS = 8;
        static constexpr unsigned CAN1_MASK = 0x00000100;
        static constexpr unsigned CAN1(unsigned value) { return (value << 8); }
        static constexpr unsigned TCC0_POS = 9;
        static constexpr unsigned TCC0_MASK = 0x00000200;
        static constexpr unsigned TCC0(unsigned value) { return (value << 9); }
        static constexpr unsigned TCC1_POS = 10;
        static constexpr unsigned TCC1_MASK = 0x00000400;
        static constexpr unsigned TCC1(unsigned value) { return (value << 10); }
        static constexpr unsigned TCC2_POS = 11;
        static constexpr unsigned TCC2_MASK = 0x00000800;
        static constexpr unsigned TCC2(unsigned value) { return (value << 11); }
        static constexpr unsigned TC0_POS = 12;
        static constexpr unsigned TC0_MASK = 0x00001000;
        static constexpr unsigned TC0(unsigned value) { return (value << 12); }
        static constexpr unsigned TC1_POS = 13;
        static constexpr unsigned TC1_MASK = 0x00002000;
        static constexpr unsigned TC1(unsigned value) { return (value << 13); }
        static constexpr unsigned TC2_POS = 14;
        static constexpr unsigned TC2_MASK = 0x00004000;
        static constexpr unsigned TC2(unsigned value) { return (value << 14); }
        static constexpr unsigned TC3_POS = 15;
        static constexpr unsigned TC3_MASK = 0x00008000;
        static constexpr unsigned TC3(unsigned value) { return (value << 15); }
        static constexpr unsigned TC4_POS = 16;
        static constexpr unsigned TC4_MASK = 0x00010000;
        static constexpr unsigned TC4(unsigned value) { return (value << 16); }
        static constexpr unsigned ADC0_POS = 17;
        static constexpr unsigned ADC0_MASK = 0x00020000;
        static constexpr unsigned ADC0(unsigned value) { return (value << 17); }
        static constexpr unsigned ADC1_POS = 18;
        static constexpr unsigned ADC1_MASK = 0x00040000;
        static constexpr unsigned ADC1(unsigned value) { return (value << 18); }
        static constexpr unsigned SDADC_POS = 19;
        static constexpr unsigned SDADC_MASK = 0x00080000;
        static constexpr unsigned SDADC(unsigned value) { return (value << 19); }
        static constexpr unsigned AC_POS = 20;
        static constexpr unsigned AC_MASK = 0x00100000;
        static constexpr unsigned AC(unsigned value) { return (value << 20); }
        static constexpr unsigned DAC_POS = 21;
        static constexpr unsigned DAC_MASK = 0x00200000;
        static constexpr unsigned DAC(unsigned value) { return (value << 21); }
        static constexpr unsigned PTC_POS = 22;
        static constexpr unsigned PTC_MASK = 0x00400000;
        static constexpr unsigned PTC(unsigned value) { return (value << 22); }
        static constexpr unsigned CCL_POS = 23;
        static constexpr unsigned CCL_MASK = 0x00800000;
        static constexpr unsigned CCL(unsigned value) { return (value << 23); }
    } INTFLAGC;

    volatile union INTFLAGD_T // INTFLAGD: Peripheral interrupt flag status - Bridge D 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAGD_BIT_T
        {
            unsigned SERCOM6 : 1; // bit 0 SERCOM6
            unsigned SERCOM7 : 1; // bit 1 SERCOM7
            unsigned TC5     : 1; // bit 2 TC5
            unsigned TC6     : 1; // bit 3 TC6
            unsigned TC7     : 1; // bit 4 TC7
            unsigned         : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned SERCOM6_POS = 0;
        static constexpr unsigned SERCOM6_MASK = 0x00000001;
        static constexpr unsigned SERCOM6(unsigned value) { return (value << 0); }
        static constexpr unsigned SERCOM7_POS = 1;
        static constexpr unsigned SERCOM7_MASK = 0x00000002;
        static constexpr unsigned SERCOM7(unsigned value) { return (value << 1); }
        static constexpr unsigned TC5_POS = 2;
        static constexpr unsigned TC5_MASK = 0x00000004;
        static constexpr unsigned TC5(unsigned value) { return (value << 2); }
        static constexpr unsigned TC6_POS = 3;
        static constexpr unsigned TC6_MASK = 0x00000008;
        static constexpr unsigned TC6(unsigned value) { return (value << 3); }
        static constexpr unsigned TC7_POS = 4;
        static constexpr unsigned TC7_MASK = 0x00000010;
        static constexpr unsigned TC7(unsigned value) { return (value << 4); }
    } INTFLAGD;

    uint8_t Reserved3[16];

    volatile union STATUSA_T // STATUSA: Peripheral write protection status - Bridge A 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUSA_BIT_T
        {
            unsigned PAC        : 1; // bit 0 PAC APB Protect Enable
            unsigned PM         : 1; // bit 1 PM APB Protect Enable
            unsigned MCLK       : 1; // bit 2 MCLK APB Protect Enable
            unsigned RSTC       : 1; // bit 3 RSTC APB Protect Enable
            unsigned OSCCTRL    : 1; // bit 4 OSCCTRL APB Protect Enable
            unsigned OSC32KCTRL : 1; // bit 5 OSC32KCTRL APB Protect Enable
            unsigned SUPC       : 1; // bit 6 SUPC APB Protect Enable
            unsigned GCLK       : 1; // bit 7 GCLK APB Protect Enable
            unsigned WDT        : 1; // bit 8 WDT APB Protect Enable
            unsigned RTC        : 1; // bit 9 RTC APB Protect Enable
            unsigned EIC        : 1; // bit 10 EIC APB Protect Enable
            unsigned FREQM      : 1; // bit 11 FREQM APB Protect Enable
            unsigned TSENS      : 1; // bit 12 TSENS APB Protect Enable
            unsigned            : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned PAC_POS = 0;
        static constexpr unsigned PAC_MASK = 0x00000001;
        static constexpr unsigned PAC(unsigned value) { return (value << 0); }
        static constexpr unsigned PM_POS = 1;
        static constexpr unsigned PM_MASK = 0x00000002;
        static constexpr unsigned PM(unsigned value) { return (value << 1); }
        static constexpr unsigned MCLK_POS = 2;
        static constexpr unsigned MCLK_MASK = 0x00000004;
        static constexpr unsigned MCLK(unsigned value) { return (value << 2); }
        static constexpr unsigned RSTC_POS = 3;
        static constexpr unsigned RSTC_MASK = 0x00000008;
        static constexpr unsigned RSTC(unsigned value) { return (value << 3); }
        static constexpr unsigned OSCCTRL_POS = 4;
        static constexpr unsigned OSCCTRL_MASK = 0x00000010;
        static constexpr unsigned OSCCTRL(unsigned value) { return (value << 4); }
        static constexpr unsigned OSC32KCTRL_POS = 5;
        static constexpr unsigned OSC32KCTRL_MASK = 0x00000020;
        static constexpr unsigned OSC32KCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned SUPC_POS = 6;
        static constexpr unsigned SUPC_MASK = 0x00000040;
        static constexpr unsigned SUPC(unsigned value) { return (value << 6); }
        static constexpr unsigned GCLK_POS = 7;
        static constexpr unsigned GCLK_MASK = 0x00000080;
        static constexpr unsigned GCLK(unsigned value) { return (value << 7); }
        static constexpr unsigned WDT_POS = 8;
        static constexpr unsigned WDT_MASK = 0x00000100;
        static constexpr unsigned WDT(unsigned value) { return (value << 8); }
        static constexpr unsigned RTC_POS = 9;
        static constexpr unsigned RTC_MASK = 0x00000200;
        static constexpr unsigned RTC(unsigned value) { return (value << 9); }
        static constexpr unsigned EIC_POS = 10;
        static constexpr unsigned EIC_MASK = 0x00000400;
        static constexpr unsigned EIC(unsigned value) { return (value << 10); }
        static constexpr unsigned FREQM_POS = 11;
        static constexpr unsigned FREQM_MASK = 0x00000800;
        static constexpr unsigned FREQM(unsigned value) { return (value << 11); }
        static constexpr unsigned TSENS_POS = 12;
        static constexpr unsigned TSENS_MASK = 0x00001000;
        static constexpr unsigned TSENS(unsigned value) { return (value << 12); }
    } STATUSA;

    volatile union STATUSB_T // STATUSB: Peripheral write protection status - Bridge B 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUSB_BIT_T
        {
            unsigned PORT      : 1; // bit 0 PORT APB Protect Enable
            unsigned DSU       : 1; // bit 1 DSU APB Protect Enable
            unsigned NVMCTRL   : 1; // bit 2 NVMCTRL APB Protect Enable
            unsigned DMAC      : 1; // bit 3 DMAC APB Protect Enable
            unsigned MTB       : 1; // bit 4 MTB APB Protect Enable
            unsigned HMATRIXHS : 1; // bit 5 HMATRIXHS APB Protect Enable
            unsigned           : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned PORT_POS = 0;
        static constexpr unsigned PORT_MASK = 0x00000001;
        static constexpr unsigned PORT(unsigned value) { return (value << 0); }
        static constexpr unsigned DSU_POS = 1;
        static constexpr unsigned DSU_MASK = 0x00000002;
        static constexpr unsigned DSU(unsigned value) { return (value << 1); }
        static constexpr unsigned NVMCTRL_POS = 2;
        static constexpr unsigned NVMCTRL_MASK = 0x00000004;
        static constexpr unsigned NVMCTRL(unsigned value) { return (value << 2); }
        static constexpr unsigned DMAC_POS = 3;
        static constexpr unsigned DMAC_MASK = 0x00000008;
        static constexpr unsigned DMAC(unsigned value) { return (value << 3); }
        static constexpr unsigned MTB_POS = 4;
        static constexpr unsigned MTB_MASK = 0x00000010;
        static constexpr unsigned MTB(unsigned value) { return (value << 4); }
        static constexpr unsigned HMATRIXHS_POS = 5;
        static constexpr unsigned HMATRIXHS_MASK = 0x00000020;
        static constexpr unsigned HMATRIXHS(unsigned value) { return (value << 5); }
    } STATUSB;

    volatile union STATUSC_T // STATUSC: Peripheral write protection status - Bridge C 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUSC_BIT_T
        {
            unsigned EVSYS   : 1; // bit 0 EVSYS APB Protect Enable
            unsigned SERCOM0 : 1; // bit 1 SERCOM0 APB Protect Enable
            unsigned SERCOM1 : 1; // bit 2 SERCOM1 APB Protect Enable
            unsigned SERCOM2 : 1; // bit 3 SERCOM2 APB Protect Enable
            unsigned SERCOM3 : 1; // bit 4 SERCOM3 APB Protect Enable
            unsigned SERCOM4 : 1; // bit 5 SERCOM4 APB Protect Enable
            unsigned SERCOM5 : 1; // bit 6 SERCOM5 APB Protect Enable
            unsigned CAN0    : 1; // bit 7 CAN0 APB Protect Enable
            unsigned CAN1    : 1; // bit 8 CAN1 APB Protect Enable
            unsigned TCC0    : 1; // bit 9 TCC0 APB Protect Enable
            unsigned TCC1    : 1; // bit 10 TCC1 APB Protect Enable
            unsigned TCC2    : 1; // bit 11 TCC2 APB Protect Enable
            unsigned TC0     : 1; // bit 12 TC0 APB Protect Enable
            unsigned TC1     : 1; // bit 13 TC1 APB Protect Enable
            unsigned TC2     : 1; // bit 14 TC2 APB Protect Enable
            unsigned TC3     : 1; // bit 15 TC3 APB Protect Enable
            unsigned TC4     : 1; // bit 16 TC4 APB Protect Enable
            unsigned ADC0    : 1; // bit 17 ADC0 APB Protect Enable
            unsigned ADC1    : 1; // bit 18 ADC1 APB Protect Enable
            unsigned SDADC   : 1; // bit 19 SDADC APB Protect Enable
            unsigned AC      : 1; // bit 20 AC APB Protect Enable
            unsigned DAC     : 1; // bit 21 DAC APB Protect Enable
            unsigned PTC     : 1; // bit 22 PTC APB Protect Enable
            unsigned CCL     : 1; // bit 23 CCL APB Protect Enable
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned EVSYS_POS = 0;
        static constexpr unsigned EVSYS_MASK = 0x00000001;
        static constexpr unsigned EVSYS(unsigned value) { return (value << 0); }
        static constexpr unsigned SERCOM0_POS = 1;
        static constexpr unsigned SERCOM0_MASK = 0x00000002;
        static constexpr unsigned SERCOM0(unsigned value) { return (value << 1); }
        static constexpr unsigned SERCOM1_POS = 2;
        static constexpr unsigned SERCOM1_MASK = 0x00000004;
        static constexpr unsigned SERCOM1(unsigned value) { return (value << 2); }
        static constexpr unsigned SERCOM2_POS = 3;
        static constexpr unsigned SERCOM2_MASK = 0x00000008;
        static constexpr unsigned SERCOM2(unsigned value) { return (value << 3); }
        static constexpr unsigned SERCOM3_POS = 4;
        static constexpr unsigned SERCOM3_MASK = 0x00000010;
        static constexpr unsigned SERCOM3(unsigned value) { return (value << 4); }
        static constexpr unsigned SERCOM4_POS = 5;
        static constexpr unsigned SERCOM4_MASK = 0x00000020;
        static constexpr unsigned SERCOM4(unsigned value) { return (value << 5); }
        static constexpr unsigned SERCOM5_POS = 6;
        static constexpr unsigned SERCOM5_MASK = 0x00000040;
        static constexpr unsigned SERCOM5(unsigned value) { return (value << 6); }
        static constexpr unsigned CAN0_POS = 7;
        static constexpr unsigned CAN0_MASK = 0x00000080;
        static constexpr unsigned CAN0(unsigned value) { return (value << 7); }
        static constexpr unsigned CAN1_POS = 8;
        static constexpr unsigned CAN1_MASK = 0x00000100;
        static constexpr unsigned CAN1(unsigned value) { return (value << 8); }
        static constexpr unsigned TCC0_POS = 9;
        static constexpr unsigned TCC0_MASK = 0x00000200;
        static constexpr unsigned TCC0(unsigned value) { return (value << 9); }
        static constexpr unsigned TCC1_POS = 10;
        static constexpr unsigned TCC1_MASK = 0x00000400;
        static constexpr unsigned TCC1(unsigned value) { return (value << 10); }
        static constexpr unsigned TCC2_POS = 11;
        static constexpr unsigned TCC2_MASK = 0x00000800;
        static constexpr unsigned TCC2(unsigned value) { return (value << 11); }
        static constexpr unsigned TC0_POS = 12;
        static constexpr unsigned TC0_MASK = 0x00001000;
        static constexpr unsigned TC0(unsigned value) { return (value << 12); }
        static constexpr unsigned TC1_POS = 13;
        static constexpr unsigned TC1_MASK = 0x00002000;
        static constexpr unsigned TC1(unsigned value) { return (value << 13); }
        static constexpr unsigned TC2_POS = 14;
        static constexpr unsigned TC2_MASK = 0x00004000;
        static constexpr unsigned TC2(unsigned value) { return (value << 14); }
        static constexpr unsigned TC3_POS = 15;
        static constexpr unsigned TC3_MASK = 0x00008000;
        static constexpr unsigned TC3(unsigned value) { return (value << 15); }
        static constexpr unsigned TC4_POS = 16;
        static constexpr unsigned TC4_MASK = 0x00010000;
        static constexpr unsigned TC4(unsigned value) { return (value << 16); }
        static constexpr unsigned ADC0_POS = 17;
        static constexpr unsigned ADC0_MASK = 0x00020000;
        static constexpr unsigned ADC0(unsigned value) { return (value << 17); }
        static constexpr unsigned ADC1_POS = 18;
        static constexpr unsigned ADC1_MASK = 0x00040000;
        static constexpr unsigned ADC1(unsigned value) { return (value << 18); }
        static constexpr unsigned SDADC_POS = 19;
        static constexpr unsigned SDADC_MASK = 0x00080000;
        static constexpr unsigned SDADC(unsigned value) { return (value << 19); }
        static constexpr unsigned AC_POS = 20;
        static constexpr unsigned AC_MASK = 0x00100000;
        static constexpr unsigned AC(unsigned value) { return (value << 20); }
        static constexpr unsigned DAC_POS = 21;
        static constexpr unsigned DAC_MASK = 0x00200000;
        static constexpr unsigned DAC(unsigned value) { return (value << 21); }
        static constexpr unsigned PTC_POS = 22;
        static constexpr unsigned PTC_MASK = 0x00400000;
        static constexpr unsigned PTC(unsigned value) { return (value << 22); }
        static constexpr unsigned CCL_POS = 23;
        static constexpr unsigned CCL_MASK = 0x00800000;
        static constexpr unsigned CCL(unsigned value) { return (value << 23); }
    } STATUSC;

    volatile union STATUSD_T // STATUSD: Peripheral write protection status - Bridge D 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUSD_BIT_T
        {
            unsigned SERCOM6 : 1; // bit 0 SERCOM6 APB Protect Enable
            unsigned SERCOM7 : 1; // bit 1 SERCOM7 APB Protect Enable
            unsigned TC5     : 1; // bit 2 TC5 APB Protect Enable
            unsigned TC6     : 1; // bit 3 TC6 APB Protect Enable
            unsigned TC7     : 1; // bit 4 TC7 APB Protect Enable
            unsigned         : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned SERCOM6_POS = 0;
        static constexpr unsigned SERCOM6_MASK = 0x00000001;
        static constexpr unsigned SERCOM6(unsigned value) { return (value << 0); }
        static constexpr unsigned SERCOM7_POS = 1;
        static constexpr unsigned SERCOM7_MASK = 0x00000002;
        static constexpr unsigned SERCOM7(unsigned value) { return (value << 1); }
        static constexpr unsigned TC5_POS = 2;
        static constexpr unsigned TC5_MASK = 0x00000004;
        static constexpr unsigned TC5(unsigned value) { return (value << 2); }
        static constexpr unsigned TC6_POS = 3;
        static constexpr unsigned TC6_MASK = 0x00000008;
        static constexpr unsigned TC6(unsigned value) { return (value << 3); }
        static constexpr unsigned TC7_POS = 4;
        static constexpr unsigned TC7_MASK = 0x00000010;
        static constexpr unsigned TC7(unsigned value) { return (value << 4); }
    } STATUSD;

}; // struct PAC_T

static_assert(sizeof(PAC_T) == PAC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp