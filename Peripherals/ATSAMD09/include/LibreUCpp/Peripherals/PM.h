#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PM_T
{
    static constexpr size_t INSTANCE_SIZE = 57;
    static constexpr size_t PADDED_INSTANCE_SIZE = 60;
    static constexpr intptr_t BASE_ADDRESS = 0x40000400;

    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SLEEP = 0x01;
    static constexpr intptr_t ADDR_OFFSET_EXTCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_CPUSEL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_APBASEL = 0x09;
    static constexpr intptr_t ADDR_OFFSET_APBBSEL = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_APBCSEL = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_AHBMASK = 0x14;
    static constexpr intptr_t ADDR_OFFSET_APBAMASK = 0x18;
    static constexpr intptr_t ADDR_OFFSET_APBBMASK = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_APBCMASK = 0x20;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x35;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x36;
    static constexpr intptr_t ADDR_OFFSET_RCAUSE = 0x38;

    volatile union CTRL_T // CTRL: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned         : 2; // bits 0..1 unused
            unsigned CFDEN   : 1; // bit 2 Clock Failure Detector Enable
            unsigned         : 1; // bit 3 unused
            unsigned BKUPCLK : 1; // bit 4 Backup Clock Select
            unsigned         : 3; // bits 5..7 unused    
        } bit;
    
        static constexpr unsigned CFDEN_POS = 2;
        static constexpr unsigned CFDEN_MASK = 0x00000004;
        static constexpr unsigned CFDEN(unsigned value) { return (value << 2); }
        static constexpr unsigned BKUPCLK_POS = 4;
        static constexpr unsigned BKUPCLK_MASK = 0x00000010;
        static constexpr unsigned BKUPCLK(unsigned value) { return (value << 4); }
    } CTRL;

    volatile union SLEEP_T // SLEEP: Sleep Mode 
    {
        uint8_t reg;
        struct __attribute__((packed)) SLEEP_BIT_T
        {
            unsigned IDLE : 2; // bits 0..1 Idle Mode Configuration
            unsigned      : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned IDLE_POS = 0;
        static constexpr unsigned IDLE_MASK = 0x00000003;
        static constexpr unsigned IDLE(unsigned value) { return (value << 0); }
    } SLEEP;

    volatile union EXTCTRL_T // EXTCTRL: External Reset Controller 
    {
        uint8_t reg;
        struct __attribute__((packed)) EXTCTRL_BIT_T
        {
            unsigned SETDIS : 1; // bit 0 External Reset Disable
            unsigned        : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned SETDIS_POS = 0;
        static constexpr unsigned SETDIS_MASK = 0x00000001;
        static constexpr unsigned SETDIS(unsigned value) { return (value << 0); }
    } EXTCTRL;

    uint8_t Reserved1[5];

    volatile union CPUSEL_T // CPUSEL: CPU Clock Select 
    {
        uint8_t reg;
        struct __attribute__((packed)) CPUSEL_BIT_T
        {
            unsigned CPUDIV : 3; // bits 0..2 CPU Prescaler Selection
            unsigned        : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned CPUDIV_POS = 0;
        static constexpr unsigned CPUDIV_MASK = 0x00000007;
        static constexpr unsigned CPUDIV(unsigned value) { return (value << 0); }
    } CPUSEL;

    volatile union APBASEL_T // APBASEL: APBA Clock Select 
    {
        uint8_t reg;
        struct __attribute__((packed)) APBASEL_BIT_T
        {
            unsigned APBADIV : 3; // bits 0..2 APBA Prescaler Selection
            unsigned         : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned APBADIV_POS = 0;
        static constexpr unsigned APBADIV_MASK = 0x00000007;
        static constexpr unsigned APBADIV(unsigned value) { return (value << 0); }
    } APBASEL;

    volatile union APBBSEL_T // APBBSEL: APBB Clock Select 
    {
        uint8_t reg;
        struct __attribute__((packed)) APBBSEL_BIT_T
        {
            unsigned APBBDIV : 3; // bits 0..2 APBB Prescaler Selection
            unsigned         : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned APBBDIV_POS = 0;
        static constexpr unsigned APBBDIV_MASK = 0x00000007;
        static constexpr unsigned APBBDIV(unsigned value) { return (value << 0); }
    } APBBSEL;

    volatile union APBCSEL_T // APBCSEL: APBC Clock Select 
    {
        uint8_t reg;
        struct __attribute__((packed)) APBCSEL_BIT_T
        {
            unsigned APBCDIV : 3; // bits 0..2 APBC Prescaler Selection
            unsigned         : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned APBCDIV_POS = 0;
        static constexpr unsigned APBCDIV_MASK = 0x00000007;
        static constexpr unsigned APBCDIV(unsigned value) { return (value << 0); }
    } APBCSEL;

    uint8_t Reserved2[8];

    volatile union AHBMASK_T // AHBMASK: AHB Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) AHBMASK_BIT_T
        {
            unsigned HPB0    : 1; // bit 0 HPB0 AHB Clock Mask
            unsigned HPB1    : 1; // bit 1 HPB1 AHB Clock Mask
            unsigned HPB2    : 1; // bit 2 HPB2 AHB Clock Mask
            unsigned DSU     : 1; // bit 3 DSU AHB Clock Mask
            unsigned NVMCTRL : 1; // bit 4 NVMCTRL AHB Clock Mask
            unsigned DMAC    : 1; // bit 5 DMAC AHB Clock Mask
            unsigned         : 26; // bits 6..31 unused    
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
        static constexpr unsigned NVMCTRL_POS = 4;
        static constexpr unsigned NVMCTRL_MASK = 0x00000010;
        static constexpr unsigned NVMCTRL(unsigned value) { return (value << 4); }
        static constexpr unsigned DMAC_POS = 5;
        static constexpr unsigned DMAC_MASK = 0x00000020;
        static constexpr unsigned DMAC(unsigned value) { return (value << 5); }
    } AHBMASK;

    volatile union APBAMASK_T // APBAMASK: APBA Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBAMASK_BIT_T
        {
            unsigned PAC0    : 1; // bit 0 PAC0 APB Clock Enable
            unsigned PM      : 1; // bit 1 PM APB Clock Enable
            unsigned SYSCTRL : 1; // bit 2 SYSCTRL APB Clock Enable
            unsigned GCLK    : 1; // bit 3 GCLK APB Clock Enable
            unsigned WDT     : 1; // bit 4 WDT APB Clock Enable
            unsigned RTC     : 1; // bit 5 RTC APB Clock Enable
            unsigned EIC     : 1; // bit 6 EIC APB Clock Enable
            unsigned         : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned PAC0_POS = 0;
        static constexpr unsigned PAC0_MASK = 0x00000001;
        static constexpr unsigned PAC0(unsigned value) { return (value << 0); }
        static constexpr unsigned PM_POS = 1;
        static constexpr unsigned PM_MASK = 0x00000002;
        static constexpr unsigned PM(unsigned value) { return (value << 1); }
        static constexpr unsigned SYSCTRL_POS = 2;
        static constexpr unsigned SYSCTRL_MASK = 0x00000004;
        static constexpr unsigned SYSCTRL(unsigned value) { return (value << 2); }
        static constexpr unsigned GCLK_POS = 3;
        static constexpr unsigned GCLK_MASK = 0x00000008;
        static constexpr unsigned GCLK(unsigned value) { return (value << 3); }
        static constexpr unsigned WDT_POS = 4;
        static constexpr unsigned WDT_MASK = 0x00000010;
        static constexpr unsigned WDT(unsigned value) { return (value << 4); }
        static constexpr unsigned RTC_POS = 5;
        static constexpr unsigned RTC_MASK = 0x00000020;
        static constexpr unsigned RTC(unsigned value) { return (value << 5); }
        static constexpr unsigned EIC_POS = 6;
        static constexpr unsigned EIC_MASK = 0x00000040;
        static constexpr unsigned EIC(unsigned value) { return (value << 6); }
    } APBAMASK;

    volatile union APBBMASK_T // APBBMASK: APBB Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBBMASK_BIT_T
        {
            unsigned PAC1    : 1; // bit 0 PAC1 APB Clock Enable
            unsigned DSU     : 1; // bit 1 DSU APB Clock Enable
            unsigned NVMCTRL : 1; // bit 2 NVMCTRL APB Clock Enable
            unsigned PORT    : 1; // bit 3 PORT APB Clock Enable
            unsigned DMAC    : 1; // bit 4 DMAC APB Clock Enable
            unsigned         : 1; // bit 5 unused
            unsigned HMATRIX : 1; // bit 6 HMATRIX APB Clock Enable
            unsigned         : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned PAC1_POS = 0;
        static constexpr unsigned PAC1_MASK = 0x00000001;
        static constexpr unsigned PAC1(unsigned value) { return (value << 0); }
        static constexpr unsigned DSU_POS = 1;
        static constexpr unsigned DSU_MASK = 0x00000002;
        static constexpr unsigned DSU(unsigned value) { return (value << 1); }
        static constexpr unsigned NVMCTRL_POS = 2;
        static constexpr unsigned NVMCTRL_MASK = 0x00000004;
        static constexpr unsigned NVMCTRL(unsigned value) { return (value << 2); }
        static constexpr unsigned PORT_POS = 3;
        static constexpr unsigned PORT_MASK = 0x00000008;
        static constexpr unsigned PORT(unsigned value) { return (value << 3); }
        static constexpr unsigned DMAC_POS = 4;
        static constexpr unsigned DMAC_MASK = 0x00000010;
        static constexpr unsigned DMAC(unsigned value) { return (value << 4); }
        static constexpr unsigned HMATRIX_POS = 6;
        static constexpr unsigned HMATRIX_MASK = 0x00000040;
        static constexpr unsigned HMATRIX(unsigned value) { return (value << 6); }
    } APBBMASK;

    volatile union APBCMASK_T // APBCMASK: APBC Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBCMASK_BIT_T
        {
            unsigned PAC2    : 1; // bit 0 PAC2 APB Clock Enable
            unsigned EVSYS   : 1; // bit 1 EVSYS APB Clock Enable
            unsigned SERCOM0 : 1; // bit 2 SERCOM0 APB Clock Enable
            unsigned SERCOM1 : 1; // bit 3 SERCOM1 APB Clock Enable
            unsigned         : 2; // bits 4..5 unused
            unsigned TC1     : 1; // bit 6 TC1 APB Clock Enable
            unsigned TC2     : 1; // bit 7 TC2 APB Clock Enable
            unsigned ADC     : 1; // bit 8 ADC APB Clock Enable
            unsigned         : 2; // bits 9..10 unused
            unsigned PTC     : 1; // bit 11 PTC APB Clock Enable
            unsigned         : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned PAC2_POS = 0;
        static constexpr unsigned PAC2_MASK = 0x00000001;
        static constexpr unsigned PAC2(unsigned value) { return (value << 0); }
        static constexpr unsigned EVSYS_POS = 1;
        static constexpr unsigned EVSYS_MASK = 0x00000002;
        static constexpr unsigned EVSYS(unsigned value) { return (value << 1); }
        static constexpr unsigned SERCOM0_POS = 2;
        static constexpr unsigned SERCOM0_MASK = 0x00000004;
        static constexpr unsigned SERCOM0(unsigned value) { return (value << 2); }
        static constexpr unsigned SERCOM1_POS = 3;
        static constexpr unsigned SERCOM1_MASK = 0x00000008;
        static constexpr unsigned SERCOM1(unsigned value) { return (value << 3); }
        static constexpr unsigned TC1_POS = 6;
        static constexpr unsigned TC1_MASK = 0x00000040;
        static constexpr unsigned TC1(unsigned value) { return (value << 6); }
        static constexpr unsigned TC2_POS = 7;
        static constexpr unsigned TC2_MASK = 0x00000080;
        static constexpr unsigned TC2(unsigned value) { return (value << 7); }
        static constexpr unsigned ADC_POS = 8;
        static constexpr unsigned ADC_MASK = 0x00000100;
        static constexpr unsigned ADC(unsigned value) { return (value << 8); }
        static constexpr unsigned PTC_POS = 11;
        static constexpr unsigned PTC_MASK = 0x00000800;
        static constexpr unsigned PTC(unsigned value) { return (value << 11); }
    } APBCMASK;

    uint8_t Reserved3[16];

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned CKRDY : 1; // bit 0 Clock Ready Interrupt Enable
            unsigned CFD   : 1; // bit 1 Clock Failure Detector Interrupt Enable
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned CKRDY_POS = 0;
        static constexpr unsigned CKRDY_MASK = 0x00000001;
        static constexpr unsigned CKRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned CFD_POS = 1;
        static constexpr unsigned CFD_MASK = 0x00000002;
        static constexpr unsigned CFD(unsigned value) { return (value << 1); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned CKRDY : 1; // bit 0 Clock Ready Interrupt Enable
            unsigned CFD   : 1; // bit 1 Clock Failure Detector Interrupt Enable
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned CKRDY_POS = 0;
        static constexpr unsigned CKRDY_MASK = 0x00000001;
        static constexpr unsigned CKRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned CFD_POS = 1;
        static constexpr unsigned CFD_MASK = 0x00000002;
        static constexpr unsigned CFD(unsigned value) { return (value << 1); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned CKRDY : 1; // bit 0 Clock Ready
            unsigned CFD   : 1; // bit 1 Clock Failure Detector
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned CKRDY_POS = 0;
        static constexpr unsigned CKRDY_MASK = 0x00000001;
        static constexpr unsigned CKRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned CFD_POS = 1;
        static constexpr unsigned CFD_MASK = 0x00000002;
        static constexpr unsigned CFD(unsigned value) { return (value << 1); }
    } INTFLAG;

    uint8_t Reserved4[1];

    volatile union RCAUSE_T // RCAUSE: Reset Cause 
    {
        uint8_t reg;
        struct __attribute__((packed)) RCAUSE_BIT_T
        {
            unsigned POR   : 1; // bit 0 Power On Reset
            unsigned BOD12 : 1; // bit 1 Brown Out 12 Detector Reset
            unsigned BOD33 : 1; // bit 2 Brown Out 33 Detector Reset
            unsigned       : 1; // bit 3 unused
            unsigned EXT   : 1; // bit 4 External Reset
            unsigned WDT   : 1; // bit 5 Watchdog Reset
            unsigned SYST  : 1; // bit 6 System Reset Request
            unsigned       : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned POR_POS = 0;
        static constexpr unsigned POR_MASK = 0x00000001;
        static constexpr unsigned POR(unsigned value) { return (value << 0); }
        static constexpr unsigned BOD12_POS = 1;
        static constexpr unsigned BOD12_MASK = 0x00000002;
        static constexpr unsigned BOD12(unsigned value) { return (value << 1); }
        static constexpr unsigned BOD33_POS = 2;
        static constexpr unsigned BOD33_MASK = 0x00000004;
        static constexpr unsigned BOD33(unsigned value) { return (value << 2); }
        static constexpr unsigned EXT_POS = 4;
        static constexpr unsigned EXT_MASK = 0x00000010;
        static constexpr unsigned EXT(unsigned value) { return (value << 4); }
        static constexpr unsigned WDT_POS = 5;
        static constexpr unsigned WDT_MASK = 0x00000020;
        static constexpr unsigned WDT(unsigned value) { return (value << 5); }
        static constexpr unsigned SYST_POS = 6;
        static constexpr unsigned SYST_MASK = 0x00000040;
        static constexpr unsigned SYST(unsigned value) { return (value << 6); }
    } RCAUSE;

}; // struct PM_T

static_assert(sizeof(PM_T) == PM_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp