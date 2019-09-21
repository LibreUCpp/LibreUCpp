#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) OSCCTRL_T
{
    static constexpr size_t INSTANCE_SIZE = 60;
    static constexpr intptr_t BASE_ADDRESS = 0x40001000;

    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_XOSCCTRL = 0x10;
    static constexpr intptr_t ADDR_OFFSET_CFDPRESC = 0x12;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x13;
    static constexpr intptr_t ADDR_OFFSET_OSC48MCTRL = 0x14;
    static constexpr intptr_t ADDR_OFFSET_OSC48MDIV = 0x15;
    static constexpr intptr_t ADDR_OFFSET_OSC48MSTUP = 0x16;
    static constexpr intptr_t ADDR_OFFSET_OSC48MSYNCBUSY = 0x18;
    static constexpr intptr_t ADDR_OFFSET_DPLLCTRLA = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_DPLLRATIO = 0x20;
    static constexpr intptr_t ADDR_OFFSET_DPLLCTRLB = 0x24;
    static constexpr intptr_t ADDR_OFFSET_DPLLPRESC = 0x28;
    static constexpr intptr_t ADDR_OFFSET_DPLLSYNCBUSY = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_DPLLSTATUS = 0x30;
    static constexpr intptr_t ADDR_OFFSET_CAL48M = 0x38;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned XOSCRDY   : 1; // bit 0 XOSC Ready Interrupt Enable
            unsigned XOSCFAIL  : 1; // bit 1 XOSC Clock Failure Detector Interrupt Enable
            unsigned           : 2; // bits 2..3 unused
            unsigned OSC48MRDY : 1; // bit 4 OSC48M Ready Interrupt Enable
            unsigned           : 3; // bits 5..7 unused
            unsigned DPLLLCKR  : 1; // bit 8 DPLL Lock Rise Interrupt Enable
            unsigned DPLLLCKF  : 1; // bit 9 DPLL Lock Fall Interrupt Enable
            unsigned DPLLLTO   : 1; // bit 10 DPLL Time Out Interrupt Enable
            unsigned DPLLLDRTO : 1; // bit 11 DPLL Ratio Ready Interrupt Enable
            unsigned           : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSCFAIL_POS = 1;
        static constexpr unsigned XOSCFAIL_MASK = 0x00000002;
        static constexpr unsigned XOSCFAIL(unsigned value) { return (value << 1); }
        static constexpr unsigned OSC48MRDY_POS = 4;
        static constexpr unsigned OSC48MRDY_MASK = 0x00000010;
        static constexpr unsigned OSC48MRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DPLLLCKR_POS = 8;
        static constexpr unsigned DPLLLCKR_MASK = 0x00000100;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 8); }
        static constexpr unsigned DPLLLCKF_POS = 9;
        static constexpr unsigned DPLLLCKF_MASK = 0x00000200;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 9); }
        static constexpr unsigned DPLLLTO_POS = 10;
        static constexpr unsigned DPLLLTO_MASK = 0x00000400;
        static constexpr unsigned DPLLLTO(unsigned value) { return (value << 10); }
        static constexpr unsigned DPLLLDRTO_POS = 11;
        static constexpr unsigned DPLLLDRTO_MASK = 0x00000800;
        static constexpr unsigned DPLLLDRTO(unsigned value) { return (value << 11); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned XOSCRDY   : 1; // bit 0 XOSC Ready Interrupt Enable
            unsigned XOSCFAIL  : 1; // bit 1 XOSC Clock Failure Detector Interrupt Enable
            unsigned           : 2; // bits 2..3 unused
            unsigned OSC48MRDY : 1; // bit 4 OSC48M Ready Interrupt Enable
            unsigned           : 3; // bits 5..7 unused
            unsigned DPLLLCKR  : 1; // bit 8 DPLL Lock Rise Interrupt Enable
            unsigned DPLLLCKF  : 1; // bit 9 DPLL Lock Fall Interrupt Enable
            unsigned DPLLLTO   : 1; // bit 10 DPLL Time Out Interrupt Enable
            unsigned DPLLLDRTO : 1; // bit 11 DPLL Ratio Ready Interrupt Enable
            unsigned           : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSCFAIL_POS = 1;
        static constexpr unsigned XOSCFAIL_MASK = 0x00000002;
        static constexpr unsigned XOSCFAIL(unsigned value) { return (value << 1); }
        static constexpr unsigned OSC48MRDY_POS = 4;
        static constexpr unsigned OSC48MRDY_MASK = 0x00000010;
        static constexpr unsigned OSC48MRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DPLLLCKR_POS = 8;
        static constexpr unsigned DPLLLCKR_MASK = 0x00000100;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 8); }
        static constexpr unsigned DPLLLCKF_POS = 9;
        static constexpr unsigned DPLLLCKF_MASK = 0x00000200;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 9); }
        static constexpr unsigned DPLLLTO_POS = 10;
        static constexpr unsigned DPLLLTO_MASK = 0x00000400;
        static constexpr unsigned DPLLLTO(unsigned value) { return (value << 10); }
        static constexpr unsigned DPLLLDRTO_POS = 11;
        static constexpr unsigned DPLLLDRTO_MASK = 0x00000800;
        static constexpr unsigned DPLLLDRTO(unsigned value) { return (value << 11); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned XOSCRDY   : 1; // bit 0 XOSC Ready
            unsigned XOSCFAIL  : 1; // bit 1 XOSC Clock Failure Detector
            unsigned           : 2; // bits 2..3 unused
            unsigned OSC48MRDY : 1; // bit 4 OSC48M Ready
            unsigned           : 3; // bits 5..7 unused
            unsigned DPLLLCKR  : 1; // bit 8 DPLL Lock Rise
            unsigned DPLLLCKF  : 1; // bit 9 DPLL Lock Fall
            unsigned DPLLLTO   : 1; // bit 10 DPLL Timeout
            unsigned DPLLLDRTO : 1; // bit 11 DPLL Ratio Ready
            unsigned           : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSCFAIL_POS = 1;
        static constexpr unsigned XOSCFAIL_MASK = 0x00000002;
        static constexpr unsigned XOSCFAIL(unsigned value) { return (value << 1); }
        static constexpr unsigned OSC48MRDY_POS = 4;
        static constexpr unsigned OSC48MRDY_MASK = 0x00000010;
        static constexpr unsigned OSC48MRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DPLLLCKR_POS = 8;
        static constexpr unsigned DPLLLCKR_MASK = 0x00000100;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 8); }
        static constexpr unsigned DPLLLCKF_POS = 9;
        static constexpr unsigned DPLLLCKF_MASK = 0x00000200;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 9); }
        static constexpr unsigned DPLLLTO_POS = 10;
        static constexpr unsigned DPLLLTO_MASK = 0x00000400;
        static constexpr unsigned DPLLLTO(unsigned value) { return (value << 10); }
        static constexpr unsigned DPLLLDRTO_POS = 11;
        static constexpr unsigned DPLLLDRTO_MASK = 0x00000800;
        static constexpr unsigned DPLLLDRTO(unsigned value) { return (value << 11); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Power and Clocks Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned XOSCRDY   : 1; // bit 0 XOSC Ready
            unsigned XOSCFAIL  : 1; // bit 1 XOSC Clock Failure Detector
            unsigned XOSCCKSW  : 1; // bit 2 XOSC Clock Switch
            unsigned           : 1; // bit 3 unused
            unsigned OSC48MRDY : 1; // bit 4 OSC48M Ready
            unsigned           : 3; // bits 5..7 unused
            unsigned DPLLLCKR  : 1; // bit 8 DPLL Lock Rise
            unsigned DPLLLCKF  : 1; // bit 9 DPLL Lock Fall
            unsigned DPLLTO    : 1; // bit 10 DPLL Timeout
            unsigned DPLLLDRTO : 1; // bit 11 DPLL Ratio Ready
            unsigned           : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSCFAIL_POS = 1;
        static constexpr unsigned XOSCFAIL_MASK = 0x00000002;
        static constexpr unsigned XOSCFAIL(unsigned value) { return (value << 1); }
        static constexpr unsigned XOSCCKSW_POS = 2;
        static constexpr unsigned XOSCCKSW_MASK = 0x00000004;
        static constexpr unsigned XOSCCKSW(unsigned value) { return (value << 2); }
        static constexpr unsigned OSC48MRDY_POS = 4;
        static constexpr unsigned OSC48MRDY_MASK = 0x00000010;
        static constexpr unsigned OSC48MRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DPLLLCKR_POS = 8;
        static constexpr unsigned DPLLLCKR_MASK = 0x00000100;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 8); }
        static constexpr unsigned DPLLLCKF_POS = 9;
        static constexpr unsigned DPLLLCKF_MASK = 0x00000200;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 9); }
        static constexpr unsigned DPLLTO_POS = 10;
        static constexpr unsigned DPLLTO_MASK = 0x00000400;
        static constexpr unsigned DPLLTO(unsigned value) { return (value << 10); }
        static constexpr unsigned DPLLLDRTO_POS = 11;
        static constexpr unsigned DPLLLDRTO_MASK = 0x00000800;
        static constexpr unsigned DPLLLDRTO(unsigned value) { return (value << 11); }
    } STATUS;

    volatile union XOSCCTRL_T // XOSCCTRL: External Multipurpose Crystal Oscillator (XOSC) Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) XOSCCTRL_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Oscillator Enable
            unsigned XTALEN   : 1; // bit 2 Crystal Oscillator Enable
            unsigned CFDEN    : 1; // bit 3 Xosc Clock Failure Detector Enable
            unsigned SWBEN    : 1; // bit 4 Xosc Clock Switch Enable
            unsigned          : 1; // bit 5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control
            unsigned GAIN     : 3; // bits 8..10 Oscillator Gain
            unsigned AMPGC    : 1; // bit 11 Automatic Amplitude Gain Control
            unsigned STARTUP  : 4; // bits 12..15 Start-Up Time    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned XTALEN_POS = 2;
        static constexpr unsigned XTALEN_MASK = 0x00000004;
        static constexpr unsigned XTALEN(unsigned value) { return (value << 2); }
        static constexpr unsigned CFDEN_POS = 3;
        static constexpr unsigned CFDEN_MASK = 0x00000008;
        static constexpr unsigned CFDEN(unsigned value) { return (value << 3); }
        static constexpr unsigned SWBEN_POS = 4;
        static constexpr unsigned SWBEN_MASK = 0x00000010;
        static constexpr unsigned SWBEN(unsigned value) { return (value << 4); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
        static constexpr unsigned GAIN_POS = 8;
        static constexpr unsigned GAIN_MASK = 0x00000700;
        static constexpr unsigned GAIN(unsigned value) { return (value << 8); }
        static constexpr unsigned AMPGC_POS = 11;
        static constexpr unsigned AMPGC_MASK = 0x00000800;
        static constexpr unsigned AMPGC(unsigned value) { return (value << 11); }
        static constexpr unsigned STARTUP_POS = 12;
        static constexpr unsigned STARTUP_MASK = 0x0000f000;
        static constexpr unsigned STARTUP(unsigned value) { return (value << 12); }
    } XOSCCTRL;

    volatile union CFDPRESC_T // CFDPRESC: Clock Failure Detector Prescaler 
    {
        uint8_t reg;
        struct __attribute__((packed)) CFDPRESC_BIT_T
        {
            unsigned CFDPRESC : 3; // bits 0..2 Clock Failure Detector Prescaler
            unsigned          : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned CFDPRESC_POS = 0;
        static constexpr unsigned CFDPRESC_MASK = 0x00000007;
        static constexpr unsigned CFDPRESC(unsigned value) { return (value << 0); }
    } CFDPRESC;

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned CFDEO : 1; // bit 0 Clock Failure Detector Event Output Enable
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned CFDEO_POS = 0;
        static constexpr unsigned CFDEO_MASK = 0x00000001;
        static constexpr unsigned CFDEO(unsigned value) { return (value << 0); }
    } EVCTRL;

    volatile union OSC48MCTRL_T // OSC48MCTRL: 48MHz Internal Oscillator (OSC48M) Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) OSC48MCTRL_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Oscillator Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
    } OSC48MCTRL;

    volatile union OSC48MDIV_T // OSC48MDIV: OSC48M Divider 
    {
        uint8_t reg;
        struct __attribute__((packed)) OSC48MDIV_BIT_T
        {
            unsigned DIV : 4; // bits 0..3 OSC48M Division Factor
            unsigned     : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned DIV_POS = 0;
        static constexpr unsigned DIV_MASK = 0x0000000f;
        static constexpr unsigned DIV(unsigned value) { return (value << 0); }
    } OSC48MDIV;

    volatile union OSC48MSTUP_T // OSC48MSTUP: OSC48M Startup Time 
    {
        uint8_t reg;
        struct __attribute__((packed)) OSC48MSTUP_BIT_T
        {
            unsigned STARTUP : 3; // bits 0..2 Startup Time
            unsigned         : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned STARTUP_POS = 0;
        static constexpr unsigned STARTUP_MASK = 0x00000007;
        static constexpr unsigned STARTUP(unsigned value) { return (value << 0); }
    } OSC48MSTUP;

    uint8_t Reserved1[1];

    volatile union OSC48MSYNCBUSY_T // OSC48MSYNCBUSY: OSC48M Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) OSC48MSYNCBUSY_BIT_T
        {
            unsigned           : 2; // bits 0..1 unused
            unsigned OSC48MDIV : 1; // bit 2 OSC48MDIV Synchronization Status
            unsigned           : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned OSC48MDIV_POS = 2;
        static constexpr unsigned OSC48MDIV_MASK = 0x00000004;
        static constexpr unsigned OSC48MDIV(unsigned value) { return (value << 2); }
    } OSC48MSYNCBUSY;

    volatile union DPLLCTRLA_T // DPLLCTRLA: DPLL Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) DPLLCTRLA_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
    } DPLLCTRLA;

    uint8_t Reserved2[3];

    volatile union DPLLRATIO_T // DPLLRATIO: DPLL Ratio Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) DPLLRATIO_BIT_T
        {
            unsigned LDR     : 12; // bits 0..11 Loop Divider Ratio
            unsigned         : 4; // bits 12..15 unused
            unsigned LDRFRAC : 4; // bits 16..19 Loop Divider Ratio Fractional Part
            unsigned         : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned LDR_POS = 0;
        static constexpr unsigned LDR_MASK = 0x00000fff;
        static constexpr unsigned LDR(unsigned value) { return (value << 0); }
        static constexpr unsigned LDRFRAC_POS = 16;
        static constexpr unsigned LDRFRAC_MASK = 0x000f0000;
        static constexpr unsigned LDRFRAC(unsigned value) { return (value << 16); }
    } DPLLRATIO;

    volatile union DPLLCTRLB_T // DPLLCTRLB: Digital Core Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) DPLLCTRLB_BIT_T
        {
            unsigned FILTER  : 2; // bits 0..1 Proportional Integral Filter Selection
            unsigned LPEN    : 1; // bit 2 Low-Power Enable
            unsigned WUF     : 1; // bit 3 Wake Up Fast
            unsigned REFCLK  : 2; // bits 4..5 Reference Clock Selection
            unsigned         : 2; // bits 6..7 unused
            unsigned LTIME   : 3; // bits 8..10 Lock Time
            unsigned         : 1; // bit 11 unused
            unsigned LBYPASS : 1; // bit 12 Lock Bypass
            unsigned         : 3; // bits 13..15 unused
            unsigned DIV     : 11; // bits 16..26 Clock Divider
            unsigned         : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned FILTER_POS = 0;
        static constexpr unsigned FILTER_MASK = 0x00000003;
        static constexpr unsigned FILTER(unsigned value) { return (value << 0); }
        static constexpr unsigned LPEN_POS = 2;
        static constexpr unsigned LPEN_MASK = 0x00000004;
        static constexpr unsigned LPEN(unsigned value) { return (value << 2); }
        static constexpr unsigned WUF_POS = 3;
        static constexpr unsigned WUF_MASK = 0x00000008;
        static constexpr unsigned WUF(unsigned value) { return (value << 3); }
        static constexpr unsigned REFCLK_POS = 4;
        static constexpr unsigned REFCLK_MASK = 0x00000030;
        static constexpr unsigned REFCLK(unsigned value) { return (value << 4); }
        static constexpr unsigned LTIME_POS = 8;
        static constexpr unsigned LTIME_MASK = 0x00000700;
        static constexpr unsigned LTIME(unsigned value) { return (value << 8); }
        static constexpr unsigned LBYPASS_POS = 12;
        static constexpr unsigned LBYPASS_MASK = 0x00001000;
        static constexpr unsigned LBYPASS(unsigned value) { return (value << 12); }
        static constexpr unsigned DIV_POS = 16;
        static constexpr unsigned DIV_MASK = 0x07ff0000;
        static constexpr unsigned DIV(unsigned value) { return (value << 16); }
    } DPLLCTRLB;

    volatile union DPLLPRESC_T // DPLLPRESC: DPLL Prescaler 
    {
        uint8_t reg;
        struct __attribute__((packed)) DPLLPRESC_BIT_T
        {
            unsigned PRESC : 2; // bits 0..1 Output Clock Prescaler
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned PRESC_POS = 0;
        static constexpr unsigned PRESC_MASK = 0x00000003;
        static constexpr unsigned PRESC(unsigned value) { return (value << 0); }
    } DPLLPRESC;

    uint8_t Reserved3[3];

    volatile union DPLLSYNCBUSY_T // DPLLSYNCBUSY: DPLL Synchronization Busy 
    {
        uint8_t reg;
        struct __attribute__((packed)) DPLLSYNCBUSY_BIT_T
        {
            unsigned           : 1; // bit 0 unused
            unsigned ENABLE    : 1; // bit 1 DPLL Enable Synchronization Status
            unsigned DPLLRATIO : 1; // bit 2 DPLL Ratio Synchronization Status
            unsigned DPLLPRESC : 1; // bit 3 DPLL Prescaler Synchronization Status
            unsigned           : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned DPLLRATIO_POS = 2;
        static constexpr unsigned DPLLRATIO_MASK = 0x00000004;
        static constexpr unsigned DPLLRATIO(unsigned value) { return (value << 2); }
        static constexpr unsigned DPLLPRESC_POS = 3;
        static constexpr unsigned DPLLPRESC_MASK = 0x00000008;
        static constexpr unsigned DPLLPRESC(unsigned value) { return (value << 3); }
    } DPLLSYNCBUSY;

    uint8_t Reserved4[3];

    volatile union DPLLSTATUS_T // DPLLSTATUS: DPLL Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) DPLLSTATUS_BIT_T
        {
            unsigned LOCK   : 1; // bit 0 DPLL Lock Status
            unsigned CLKRDY : 1; // bit 1 DPLL Clock Ready
            unsigned        : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned LOCK_POS = 0;
        static constexpr unsigned LOCK_MASK = 0x00000001;
        static constexpr unsigned LOCK(unsigned value) { return (value << 0); }
        static constexpr unsigned CLKRDY_POS = 1;
        static constexpr unsigned CLKRDY_MASK = 0x00000002;
        static constexpr unsigned CLKRDY(unsigned value) { return (value << 1); }
    } DPLLSTATUS;

    uint8_t Reserved5[7];

    volatile union CAL48M_T // CAL48M: 48MHz Oscillator Calibration 
    {
        uint32_t reg;
        struct __attribute__((packed)) CAL48M_BIT_T
        {
            unsigned FCAL   : 6; // bits 0..5 Frequency Calibration (48MHz)
            unsigned        : 2; // bits 6..7 unused
            unsigned FRANGE : 2; // bits 8..9 Frequency Range (48MHz)
            unsigned        : 6; // bits 10..15 unused
            unsigned TCAL   : 6; // bits 16..21 Temperature Calibration (48MHz)
            unsigned        : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned FCAL_POS = 0;
        static constexpr unsigned FCAL_MASK = 0x0000003f;
        static constexpr unsigned FCAL(unsigned value) { return (value << 0); }
        static constexpr unsigned FRANGE_POS = 8;
        static constexpr unsigned FRANGE_MASK = 0x00000300;
        static constexpr unsigned FRANGE(unsigned value) { return (value << 8); }
        static constexpr unsigned TCAL_POS = 16;
        static constexpr unsigned TCAL_MASK = 0x003f0000;
        static constexpr unsigned TCAL(unsigned value) { return (value << 16); }
    } CAL48M;

}; // struct OSCCTRL_T

static_assert(sizeof(OSCCTRL_T) == OSCCTRL_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp