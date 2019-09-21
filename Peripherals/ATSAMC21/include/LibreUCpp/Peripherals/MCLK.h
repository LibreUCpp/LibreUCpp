#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) MCLK_T
{
    static constexpr size_t INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS = 0x40000800;

    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x01;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x02;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x03;
    static constexpr intptr_t ADDR_OFFSET_CPUDIV = 0x04;
    static constexpr intptr_t ADDR_OFFSET_AHBMASK = 0x10;
    static constexpr intptr_t ADDR_OFFSET_APBAMASK = 0x14;
    static constexpr intptr_t ADDR_OFFSET_APBBMASK = 0x18;
    static constexpr intptr_t ADDR_OFFSET_APBCMASK = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_APBDMASK = 0x20;

    uint8_t Reserved1[1];

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned CKRDY : 1; // bit 0 Clock Ready Interrupt Enable
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned CKRDY_POS = 0;
        static constexpr unsigned CKRDY_MASK = 0x00000001;
        static constexpr unsigned CKRDY(unsigned value) { return (value << 0); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned CKRDY : 1; // bit 0 Clock Ready Interrupt Enable
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned CKRDY_POS = 0;
        static constexpr unsigned CKRDY_MASK = 0x00000001;
        static constexpr unsigned CKRDY(unsigned value) { return (value << 0); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned CKRDY : 1; // bit 0 Clock Ready
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned CKRDY_POS = 0;
        static constexpr unsigned CKRDY_MASK = 0x00000001;
        static constexpr unsigned CKRDY(unsigned value) { return (value << 0); }
    } INTFLAG;

    volatile union CPUDIV_T // CPUDIV: CPU Clock Division 
    {
        uint8_t reg;
        struct __attribute__((packed)) CPUDIV_BIT_T
        {
            unsigned CPUDIV : 8; // bits 0..7 CPU Clock Division Factor    
        } bit;
    
        static constexpr unsigned CPUDIV_POS = 0;
        static constexpr unsigned CPUDIV_MASK = 0x000000ff;
        static constexpr unsigned CPUDIV(unsigned value) { return (value << 0); }
    } CPUDIV;

    uint8_t Reserved2[11];

    volatile union AHBMASK_T // AHBMASK: AHB Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHBMASK_BIT_T
        {
            unsigned HPB0            : 1; // bit 0 HPB0 AHB Clock Mask
            unsigned HPB1            : 1; // bit 1 HPB1 AHB Clock Mask
            unsigned HPB2            : 1; // bit 2 HPB2 AHB Clock Mask
            unsigned DSU             : 1; // bit 3 DSU AHB Clock Mask
            unsigned HMATRIXHS       : 1; // bit 4 HMATRIXHS AHB Clock Mask
            unsigned NVMCTRL         : 1; // bit 5 NVMCTRL AHB Clock Mask
            unsigned HSRAM           : 1; // bit 6 HSRAM AHB Clock Mask
            unsigned DMAC            : 1; // bit 7 DMAC AHB Clock Mask
            unsigned CAN0            : 1; // bit 8 CAN0 AHB Clock Mask
            unsigned CAN1            : 1; // bit 9 CAN1 AHB Clock Mask
            unsigned PAC             : 1; // bit 10 PAC AHB Clock Mask
            unsigned NVMCTRL_PICACHU : 1; // bit 11 NVMCTRL_PICACHU AHB Clock Mask
            unsigned DIVAS           : 1; // bit 12 DIVAS AHB Clock Mask
            unsigned HPB3            : 1; // bit 13 HPB3 AHB Clock Mask
            unsigned                 : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned HPB0_POS = 0;
        static constexpr unsigned HPB0_MASK = 0x00000001;
        static constexpr unsigned HPB0(unsigned value) { return (value << 0); }
        static constexpr unsigned HPB1_POS = 1;
        static constexpr unsigned HPB1_MASK = 0x00000002;
        static constexpr unsigned HPB1(unsigned value) { return (value << 1); }
        static constexpr unsigned HPB2_POS = 2;
        static constexpr unsigned HPB2_MASK = 0x00000004;
        static constexpr unsigned HPB2(unsigned value) { return (value << 2); }
        static constexpr unsigned DSU_POS = 3;
        static constexpr unsigned DSU_MASK = 0x00000008;
        static constexpr unsigned DSU(unsigned value) { return (value << 3); }
        static constexpr unsigned HMATRIXHS_POS = 4;
        static constexpr unsigned HMATRIXHS_MASK = 0x00000010;
        static constexpr unsigned HMATRIXHS(unsigned value) { return (value << 4); }
        static constexpr unsigned NVMCTRL_POS = 5;
        static constexpr unsigned NVMCTRL_MASK = 0x00000020;
        static constexpr unsigned NVMCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned HSRAM_POS = 6;
        static constexpr unsigned HSRAM_MASK = 0x00000040;
        static constexpr unsigned HSRAM(unsigned value) { return (value << 6); }
        static constexpr unsigned DMAC_POS = 7;
        static constexpr unsigned DMAC_MASK = 0x00000080;
        static constexpr unsigned DMAC(unsigned value) { return (value << 7); }
        static constexpr unsigned CAN0_POS = 8;
        static constexpr unsigned CAN0_MASK = 0x00000100;
        static constexpr unsigned CAN0(unsigned value) { return (value << 8); }
        static constexpr unsigned CAN1_POS = 9;
        static constexpr unsigned CAN1_MASK = 0x00000200;
        static constexpr unsigned CAN1(unsigned value) { return (value << 9); }
        static constexpr unsigned PAC_POS = 10;
        static constexpr unsigned PAC_MASK = 0x00000400;
        static constexpr unsigned PAC(unsigned value) { return (value << 10); }
        static constexpr unsigned NVMCTRL_PICACHU_POS = 11;
        static constexpr unsigned NVMCTRL_PICACHU_MASK = 0x00000800;
        static constexpr unsigned NVMCTRL_PICACHU(unsigned value) { return (value << 11); }
        static constexpr unsigned DIVAS_POS = 12;
        static constexpr unsigned DIVAS_MASK = 0x00001000;
        static constexpr unsigned DIVAS(unsigned value) { return (value << 12); }
        static constexpr unsigned HPB3_POS = 13;
        static constexpr unsigned HPB3_MASK = 0x00002000;
        static constexpr unsigned HPB3(unsigned value) { return (value << 13); }
    } AHBMASK;

    volatile union APBAMASK_T // APBAMASK: APBA Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBAMASK_BIT_T
        {
            unsigned PAC        : 1; // bit 0 PAC APB Clock Enable
            unsigned PM         : 1; // bit 1 PM APB Clock Enable
            unsigned MCLK       : 1; // bit 2 MCLK APB Clock Enable
            unsigned RSTC       : 1; // bit 3 RSTC APB Clock Enable
            unsigned OSCCTRL    : 1; // bit 4 OSCCTRL APB Clock Enable
            unsigned OSC32KCTRL : 1; // bit 5 OSC32KCTRL APB Clock Enable
            unsigned SUPC       : 1; // bit 6 SUPC APB Clock Enable
            unsigned GCLK       : 1; // bit 7 GCLK APB Clock Enable
            unsigned WDT        : 1; // bit 8 WDT APB Clock Enable
            unsigned RTC        : 1; // bit 9 RTC APB Clock Enable
            unsigned EIC        : 1; // bit 10 EIC APB Clock Enable
            unsigned FREQM      : 1; // bit 11 FREQM APB Clock Enable
            unsigned TSENS      : 1; // bit 12 TSENS APB Clock Enable
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
    } APBAMASK;

    volatile union APBBMASK_T // APBBMASK: APBB Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBBMASK_BIT_T
        {
            unsigned PORT      : 1; // bit 0 PORT APB Clock Enable
            unsigned DSU       : 1; // bit 1 DSU APB Clock Enable
            unsigned NVMCTRL   : 1; // bit 2 NVMCTRL APB Clock Enable
            unsigned           : 2; // bits 3..4 unused
            unsigned HMATRIXHS : 1; // bit 5 HMATRIXHS APB Clock Enable
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
        static constexpr unsigned HMATRIXHS_POS = 5;
        static constexpr unsigned HMATRIXHS_MASK = 0x00000020;
        static constexpr unsigned HMATRIXHS(unsigned value) { return (value << 5); }
    } APBBMASK;

    volatile union APBCMASK_T // APBCMASK: APBC Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBCMASK_BIT_T
        {
            unsigned EVSYS   : 1; // bit 0 EVSYS APB Clock Enable
            unsigned SERCOM0 : 1; // bit 1 SERCOM0 APB Clock Enable
            unsigned SERCOM1 : 1; // bit 2 SERCOM1 APB Clock Enable
            unsigned SERCOM2 : 1; // bit 3 SERCOM2 APB Clock Enable
            unsigned SERCOM3 : 1; // bit 4 SERCOM3 APB Clock Enable
            unsigned SERCOM4 : 1; // bit 5 SERCOM4 APB Clock Enable
            unsigned SERCOM5 : 1; // bit 6 SERCOM5 APB Clock Enable
            unsigned         : 2; // bits 7..8 unused
            unsigned TCC0    : 1; // bit 9 TCC0 APB Clock Enable
            unsigned TCC1    : 1; // bit 10 TCC1 APB Clock Enable
            unsigned TCC2    : 1; // bit 11 TCC2 APB Clock Enable
            unsigned TC0     : 1; // bit 12 TC0 APB Clock Enable
            unsigned TC1     : 1; // bit 13 TC1 APB Clock Enable
            unsigned TC2     : 1; // bit 14 TC2 APB Clock Enable
            unsigned TC3     : 1; // bit 15 TC3 APB Clock Enable
            unsigned TC4     : 1; // bit 16 TC4 APB Clock Enable
            unsigned ADC0    : 1; // bit 17 ADC0 APB Clock Enable
            unsigned ADC1    : 1; // bit 18 ADC1 APB Clock Enable
            unsigned SDADC   : 1; // bit 19 SDADC APB Clock Enable
            unsigned AC      : 1; // bit 20 AC APB Clock Enable
            unsigned DAC     : 1; // bit 21 DAC APB Clock Enable
            unsigned PTC     : 1; // bit 22 PTC APB Clock Enable
            unsigned CCL     : 1; // bit 23 CCL APB Clock Enable
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
    } APBCMASK;

    volatile union APBDMASK_T // APBDMASK: APBD Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBDMASK_BIT_T
        {
            unsigned SERCOM6 : 1; // bit 0 SERCOM6 APB Clock Enable
            unsigned SERCOM7 : 1; // bit 1 SERCOM7 APB Clock Enable
            unsigned TC5     : 1; // bit 2 TC5 APB Clock Enable
            unsigned TC6     : 1; // bit 3 TC6 APB Clock Enable
            unsigned TC7     : 1; // bit 4 TC7 APB Clock Enable
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
    } APBDMASK;

}; // struct MCLK_T

static_assert(sizeof(MCLK_T) == MCLK_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp