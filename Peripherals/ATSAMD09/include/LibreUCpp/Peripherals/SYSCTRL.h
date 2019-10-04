#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SYSCTRL_T
{
    static constexpr size_t INSTANCE_SIZE = 81;
    static constexpr size_t PADDED_INSTANCE_SIZE = 84;
    static constexpr intptr_t BASE_ADDRESS = 0x40000800;

    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_PCLKSR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_XOSC = 0x10;
    static constexpr intptr_t ADDR_OFFSET_XOSC32K = 0x14;
    static constexpr intptr_t ADDR_OFFSET_OSC32K = 0x18;
    static constexpr intptr_t ADDR_OFFSET_OSCULP32K = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_OSC8M = 0x20;
    static constexpr intptr_t ADDR_OFFSET_DFLLCTRL = 0x24;
    static constexpr intptr_t ADDR_OFFSET_DFLLVAL = 0x28;
    static constexpr intptr_t ADDR_OFFSET_DFLLMUL = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_DFLLSYNC = 0x30;
    static constexpr intptr_t ADDR_OFFSET_BOD33 = 0x34;
    static constexpr intptr_t ADDR_OFFSET_VREF = 0x40;
    static constexpr intptr_t ADDR_OFFSET_DPLLCTRLA = 0x44;
    static constexpr intptr_t ADDR_OFFSET_DPLLRATIO = 0x48;
    static constexpr intptr_t ADDR_OFFSET_DPLLCTRLB = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_DPLLSTATUS = 0x50;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned XOSCRDY    : 1; // bit 0 XOSC Ready Interrupt Enable
            unsigned XOSC32KRDY : 1; // bit 1 XOSC32K Ready Interrupt Enable
            unsigned OSC32KRDY  : 1; // bit 2 OSC32K Ready Interrupt Enable
            unsigned OSC8MRDY   : 1; // bit 3 OSC8M Ready Interrupt Enable
            unsigned DFLLRDY    : 1; // bit 4 DFLL Ready Interrupt Enable
            unsigned DFLLOOB    : 1; // bit 5 DFLL Out Of Bounds Interrupt Enable
            unsigned DFLLLCKF   : 1; // bit 6 DFLL Lock Fine Interrupt Enable
            unsigned DFLLLCKC   : 1; // bit 7 DFLL Lock Coarse Interrupt Enable
            unsigned DFLLRCS    : 1; // bit 8 DFLL Reference Clock Stopped Interrupt Enable
            unsigned BOD33RDY   : 1; // bit 9 BOD33 Ready Interrupt Enable
            unsigned BOD33DET   : 1; // bit 10 BOD33 Detection Interrupt Enable
            unsigned B33SRDY    : 1; // bit 11 BOD33 Synchronization Ready Interrupt Enable
            unsigned            : 3; // bits 12..14 unused
            unsigned DPLLLCKR   : 1; // bit 15 DPLL Lock Rise Interrupt Enable
            unsigned DPLLLCKF   : 1; // bit 16 DPLL Lock Fall Interrupt Enable
            unsigned DPLLLTO    : 1; // bit 17 DPLL Lock Timeout Interrupt Enable
            unsigned            : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSC32KRDY_POS = 1;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned OSC32KRDY_POS = 2;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000004;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned OSC8MRDY_POS = 3;
        static constexpr unsigned OSC8MRDY_MASK = 0x00000008;
        static constexpr unsigned OSC8MRDY(unsigned value) { return (value << 3); }
        static constexpr unsigned DFLLRDY_POS = 4;
        static constexpr unsigned DFLLRDY_MASK = 0x00000010;
        static constexpr unsigned DFLLRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DFLLOOB_POS = 5;
        static constexpr unsigned DFLLOOB_MASK = 0x00000020;
        static constexpr unsigned DFLLOOB(unsigned value) { return (value << 5); }
        static constexpr unsigned DFLLLCKF_POS = 6;
        static constexpr unsigned DFLLLCKF_MASK = 0x00000040;
        static constexpr unsigned DFLLLCKF(unsigned value) { return (value << 6); }
        static constexpr unsigned DFLLLCKC_POS = 7;
        static constexpr unsigned DFLLLCKC_MASK = 0x00000080;
        static constexpr unsigned DFLLLCKC(unsigned value) { return (value << 7); }
        static constexpr unsigned DFLLRCS_POS = 8;
        static constexpr unsigned DFLLRCS_MASK = 0x00000100;
        static constexpr unsigned DFLLRCS(unsigned value) { return (value << 8); }
        static constexpr unsigned BOD33RDY_POS = 9;
        static constexpr unsigned BOD33RDY_MASK = 0x00000200;
        static constexpr unsigned BOD33RDY(unsigned value) { return (value << 9); }
        static constexpr unsigned BOD33DET_POS = 10;
        static constexpr unsigned BOD33DET_MASK = 0x00000400;
        static constexpr unsigned BOD33DET(unsigned value) { return (value << 10); }
        static constexpr unsigned B33SRDY_POS = 11;
        static constexpr unsigned B33SRDY_MASK = 0x00000800;
        static constexpr unsigned B33SRDY(unsigned value) { return (value << 11); }
        static constexpr unsigned DPLLLCKR_POS = 15;
        static constexpr unsigned DPLLLCKR_MASK = 0x00008000;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 15); }
        static constexpr unsigned DPLLLCKF_POS = 16;
        static constexpr unsigned DPLLLCKF_MASK = 0x00010000;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 16); }
        static constexpr unsigned DPLLLTO_POS = 17;
        static constexpr unsigned DPLLLTO_MASK = 0x00020000;
        static constexpr unsigned DPLLLTO(unsigned value) { return (value << 17); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned XOSCRDY    : 1; // bit 0 XOSC Ready Interrupt Enable
            unsigned XOSC32KRDY : 1; // bit 1 XOSC32K Ready Interrupt Enable
            unsigned OSC32KRDY  : 1; // bit 2 OSC32K Ready Interrupt Enable
            unsigned OSC8MRDY   : 1; // bit 3 OSC8M Ready Interrupt Enable
            unsigned DFLLRDY    : 1; // bit 4 DFLL Ready Interrupt Enable
            unsigned DFLLOOB    : 1; // bit 5 DFLL Out Of Bounds Interrupt Enable
            unsigned DFLLLCKF   : 1; // bit 6 DFLL Lock Fine Interrupt Enable
            unsigned DFLLLCKC   : 1; // bit 7 DFLL Lock Coarse Interrupt Enable
            unsigned DFLLRCS    : 1; // bit 8 DFLL Reference Clock Stopped Interrupt Enable
            unsigned BOD33RDY   : 1; // bit 9 BOD33 Ready Interrupt Enable
            unsigned BOD33DET   : 1; // bit 10 BOD33 Detection Interrupt Enable
            unsigned B33SRDY    : 1; // bit 11 BOD33 Synchronization Ready Interrupt Enable
            unsigned            : 3; // bits 12..14 unused
            unsigned DPLLLCKR   : 1; // bit 15 DPLL Lock Rise Interrupt Enable
            unsigned DPLLLCKF   : 1; // bit 16 DPLL Lock Fall Interrupt Enable
            unsigned DPLLLTO    : 1; // bit 17 DPLL Lock Timeout Interrupt Enable
            unsigned            : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSC32KRDY_POS = 1;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned OSC32KRDY_POS = 2;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000004;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned OSC8MRDY_POS = 3;
        static constexpr unsigned OSC8MRDY_MASK = 0x00000008;
        static constexpr unsigned OSC8MRDY(unsigned value) { return (value << 3); }
        static constexpr unsigned DFLLRDY_POS = 4;
        static constexpr unsigned DFLLRDY_MASK = 0x00000010;
        static constexpr unsigned DFLLRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DFLLOOB_POS = 5;
        static constexpr unsigned DFLLOOB_MASK = 0x00000020;
        static constexpr unsigned DFLLOOB(unsigned value) { return (value << 5); }
        static constexpr unsigned DFLLLCKF_POS = 6;
        static constexpr unsigned DFLLLCKF_MASK = 0x00000040;
        static constexpr unsigned DFLLLCKF(unsigned value) { return (value << 6); }
        static constexpr unsigned DFLLLCKC_POS = 7;
        static constexpr unsigned DFLLLCKC_MASK = 0x00000080;
        static constexpr unsigned DFLLLCKC(unsigned value) { return (value << 7); }
        static constexpr unsigned DFLLRCS_POS = 8;
        static constexpr unsigned DFLLRCS_MASK = 0x00000100;
        static constexpr unsigned DFLLRCS(unsigned value) { return (value << 8); }
        static constexpr unsigned BOD33RDY_POS = 9;
        static constexpr unsigned BOD33RDY_MASK = 0x00000200;
        static constexpr unsigned BOD33RDY(unsigned value) { return (value << 9); }
        static constexpr unsigned BOD33DET_POS = 10;
        static constexpr unsigned BOD33DET_MASK = 0x00000400;
        static constexpr unsigned BOD33DET(unsigned value) { return (value << 10); }
        static constexpr unsigned B33SRDY_POS = 11;
        static constexpr unsigned B33SRDY_MASK = 0x00000800;
        static constexpr unsigned B33SRDY(unsigned value) { return (value << 11); }
        static constexpr unsigned DPLLLCKR_POS = 15;
        static constexpr unsigned DPLLLCKR_MASK = 0x00008000;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 15); }
        static constexpr unsigned DPLLLCKF_POS = 16;
        static constexpr unsigned DPLLLCKF_MASK = 0x00010000;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 16); }
        static constexpr unsigned DPLLLTO_POS = 17;
        static constexpr unsigned DPLLLTO_MASK = 0x00020000;
        static constexpr unsigned DPLLLTO(unsigned value) { return (value << 17); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned XOSCRDY    : 1; // bit 0 XOSC Ready
            unsigned XOSC32KRDY : 1; // bit 1 XOSC32K Ready
            unsigned OSC32KRDY  : 1; // bit 2 OSC32K Ready
            unsigned OSC8MRDY   : 1; // bit 3 OSC8M Ready
            unsigned DFLLRDY    : 1; // bit 4 DFLL Ready
            unsigned DFLLOOB    : 1; // bit 5 DFLL Out Of Bounds
            unsigned DFLLLCKF   : 1; // bit 6 DFLL Lock Fine
            unsigned DFLLLCKC   : 1; // bit 7 DFLL Lock Coarse
            unsigned DFLLRCS    : 1; // bit 8 DFLL Reference Clock Stopped
            unsigned BOD33RDY   : 1; // bit 9 BOD33 Ready
            unsigned BOD33DET   : 1; // bit 10 BOD33 Detection
            unsigned B33SRDY    : 1; // bit 11 BOD33 Synchronization Ready
            unsigned            : 3; // bits 12..14 unused
            unsigned DPLLLCKR   : 1; // bit 15 DPLL Lock Rise
            unsigned DPLLLCKF   : 1; // bit 16 DPLL Lock Fall
            unsigned DPLLLTO    : 1; // bit 17 DPLL Lock Timeout
            unsigned            : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSC32KRDY_POS = 1;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned OSC32KRDY_POS = 2;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000004;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned OSC8MRDY_POS = 3;
        static constexpr unsigned OSC8MRDY_MASK = 0x00000008;
        static constexpr unsigned OSC8MRDY(unsigned value) { return (value << 3); }
        static constexpr unsigned DFLLRDY_POS = 4;
        static constexpr unsigned DFLLRDY_MASK = 0x00000010;
        static constexpr unsigned DFLLRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DFLLOOB_POS = 5;
        static constexpr unsigned DFLLOOB_MASK = 0x00000020;
        static constexpr unsigned DFLLOOB(unsigned value) { return (value << 5); }
        static constexpr unsigned DFLLLCKF_POS = 6;
        static constexpr unsigned DFLLLCKF_MASK = 0x00000040;
        static constexpr unsigned DFLLLCKF(unsigned value) { return (value << 6); }
        static constexpr unsigned DFLLLCKC_POS = 7;
        static constexpr unsigned DFLLLCKC_MASK = 0x00000080;
        static constexpr unsigned DFLLLCKC(unsigned value) { return (value << 7); }
        static constexpr unsigned DFLLRCS_POS = 8;
        static constexpr unsigned DFLLRCS_MASK = 0x00000100;
        static constexpr unsigned DFLLRCS(unsigned value) { return (value << 8); }
        static constexpr unsigned BOD33RDY_POS = 9;
        static constexpr unsigned BOD33RDY_MASK = 0x00000200;
        static constexpr unsigned BOD33RDY(unsigned value) { return (value << 9); }
        static constexpr unsigned BOD33DET_POS = 10;
        static constexpr unsigned BOD33DET_MASK = 0x00000400;
        static constexpr unsigned BOD33DET(unsigned value) { return (value << 10); }
        static constexpr unsigned B33SRDY_POS = 11;
        static constexpr unsigned B33SRDY_MASK = 0x00000800;
        static constexpr unsigned B33SRDY(unsigned value) { return (value << 11); }
        static constexpr unsigned DPLLLCKR_POS = 15;
        static constexpr unsigned DPLLLCKR_MASK = 0x00008000;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 15); }
        static constexpr unsigned DPLLLCKF_POS = 16;
        static constexpr unsigned DPLLLCKF_MASK = 0x00010000;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 16); }
        static constexpr unsigned DPLLLTO_POS = 17;
        static constexpr unsigned DPLLLTO_MASK = 0x00020000;
        static constexpr unsigned DPLLLTO(unsigned value) { return (value << 17); }
    } INTFLAG;

    volatile union PCLKSR_T // PCLKSR: Power and Clocks Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) PCLKSR_BIT_T
        {
            unsigned XOSCRDY    : 1; // bit 0 XOSC Ready
            unsigned XOSC32KRDY : 1; // bit 1 XOSC32K Ready
            unsigned OSC32KRDY  : 1; // bit 2 OSC32K Ready
            unsigned OSC8MRDY   : 1; // bit 3 OSC8M Ready
            unsigned DFLLRDY    : 1; // bit 4 DFLL Ready
            unsigned DFLLOOB    : 1; // bit 5 DFLL Out Of Bounds
            unsigned DFLLLCKF   : 1; // bit 6 DFLL Lock Fine
            unsigned DFLLLCKC   : 1; // bit 7 DFLL Lock Coarse
            unsigned DFLLRCS    : 1; // bit 8 DFLL Reference Clock Stopped
            unsigned BOD33RDY   : 1; // bit 9 BOD33 Ready
            unsigned BOD33DET   : 1; // bit 10 BOD33 Detection
            unsigned B33SRDY    : 1; // bit 11 BOD33 Synchronization Ready
            unsigned            : 3; // bits 12..14 unused
            unsigned DPLLLCKR   : 1; // bit 15 DPLL Lock Rise
            unsigned DPLLLCKF   : 1; // bit 16 DPLL Lock Fall
            unsigned DPLLLTO    : 1; // bit 17 DPLL Lock Timeout
            unsigned            : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned XOSCRDY_POS = 0;
        static constexpr unsigned XOSCRDY_MASK = 0x00000001;
        static constexpr unsigned XOSCRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned XOSC32KRDY_POS = 1;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned OSC32KRDY_POS = 2;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000004;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned OSC8MRDY_POS = 3;
        static constexpr unsigned OSC8MRDY_MASK = 0x00000008;
        static constexpr unsigned OSC8MRDY(unsigned value) { return (value << 3); }
        static constexpr unsigned DFLLRDY_POS = 4;
        static constexpr unsigned DFLLRDY_MASK = 0x00000010;
        static constexpr unsigned DFLLRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned DFLLOOB_POS = 5;
        static constexpr unsigned DFLLOOB_MASK = 0x00000020;
        static constexpr unsigned DFLLOOB(unsigned value) { return (value << 5); }
        static constexpr unsigned DFLLLCKF_POS = 6;
        static constexpr unsigned DFLLLCKF_MASK = 0x00000040;
        static constexpr unsigned DFLLLCKF(unsigned value) { return (value << 6); }
        static constexpr unsigned DFLLLCKC_POS = 7;
        static constexpr unsigned DFLLLCKC_MASK = 0x00000080;
        static constexpr unsigned DFLLLCKC(unsigned value) { return (value << 7); }
        static constexpr unsigned DFLLRCS_POS = 8;
        static constexpr unsigned DFLLRCS_MASK = 0x00000100;
        static constexpr unsigned DFLLRCS(unsigned value) { return (value << 8); }
        static constexpr unsigned BOD33RDY_POS = 9;
        static constexpr unsigned BOD33RDY_MASK = 0x00000200;
        static constexpr unsigned BOD33RDY(unsigned value) { return (value << 9); }
        static constexpr unsigned BOD33DET_POS = 10;
        static constexpr unsigned BOD33DET_MASK = 0x00000400;
        static constexpr unsigned BOD33DET(unsigned value) { return (value << 10); }
        static constexpr unsigned B33SRDY_POS = 11;
        static constexpr unsigned B33SRDY_MASK = 0x00000800;
        static constexpr unsigned B33SRDY(unsigned value) { return (value << 11); }
        static constexpr unsigned DPLLLCKR_POS = 15;
        static constexpr unsigned DPLLLCKR_MASK = 0x00008000;
        static constexpr unsigned DPLLLCKR(unsigned value) { return (value << 15); }
        static constexpr unsigned DPLLLCKF_POS = 16;
        static constexpr unsigned DPLLLCKF_MASK = 0x00010000;
        static constexpr unsigned DPLLLCKF(unsigned value) { return (value << 16); }
        static constexpr unsigned DPLLLTO_POS = 17;
        static constexpr unsigned DPLLLTO_MASK = 0x00020000;
        static constexpr unsigned DPLLLTO(unsigned value) { return (value << 17); }
    } PCLKSR;

    volatile union XOSC_T // XOSC: External Multipurpose Crystal Oscillator (XOSC) Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) XOSC_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Oscillator Enable
            unsigned XTALEN   : 1; // bit 2 Crystal Oscillator Enable
            unsigned          : 3; // bits 3..5 unused
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
    } XOSC;

    uint8_t Reserved1[2];

    volatile union XOSC32K_T // XOSC32K: 32kHz External Crystal Oscillator (XOSC32K) Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) XOSC32K_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Oscillator Enable
            unsigned XTALEN   : 1; // bit 2 Crystal Oscillator Enable
            unsigned EN32K    : 1; // bit 3 32kHz Output Enable
            unsigned EN1K     : 1; // bit 4 1kHz Output Enable
            unsigned AAMPEN   : 1; // bit 5 Automatic Amplitude Control Enable
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control
            unsigned STARTUP  : 3; // bits 8..10 Oscillator Start-Up Time
            unsigned          : 1; // bit 11 unused
            unsigned WRTLOCK  : 1; // bit 12 Write Lock
            unsigned          : 3; // bits 13..15 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned XTALEN_POS = 2;
        static constexpr unsigned XTALEN_MASK = 0x00000004;
        static constexpr unsigned XTALEN(unsigned value) { return (value << 2); }
        static constexpr unsigned EN32K_POS = 3;
        static constexpr unsigned EN32K_MASK = 0x00000008;
        static constexpr unsigned EN32K(unsigned value) { return (value << 3); }
        static constexpr unsigned EN1K_POS = 4;
        static constexpr unsigned EN1K_MASK = 0x00000010;
        static constexpr unsigned EN1K(unsigned value) { return (value << 4); }
        static constexpr unsigned AAMPEN_POS = 5;
        static constexpr unsigned AAMPEN_MASK = 0x00000020;
        static constexpr unsigned AAMPEN(unsigned value) { return (value << 5); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
        static constexpr unsigned STARTUP_POS = 8;
        static constexpr unsigned STARTUP_MASK = 0x00000700;
        static constexpr unsigned STARTUP(unsigned value) { return (value << 8); }
        static constexpr unsigned WRTLOCK_POS = 12;
        static constexpr unsigned WRTLOCK_MASK = 0x00001000;
        static constexpr unsigned WRTLOCK(unsigned value) { return (value << 12); }
    } XOSC32K;

    uint8_t Reserved2[2];

    volatile union OSC32K_T // OSC32K: 32kHz Internal Oscillator (OSC32K) Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) OSC32K_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Oscillator Enable
            unsigned EN32K    : 1; // bit 2 32kHz Output Enable
            unsigned EN1K     : 1; // bit 3 1kHz Output Enable
            unsigned          : 2; // bits 4..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control
            unsigned STARTUP  : 3; // bits 8..10 Oscillator Start-Up Time
            unsigned          : 1; // bit 11 unused
            unsigned WRTLOCK  : 1; // bit 12 Write Lock
            unsigned          : 3; // bits 13..15 unused
            unsigned CALIB    : 7; // bits 16..22 Oscillator Calibration
            unsigned          : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned EN32K_POS = 2;
        static constexpr unsigned EN32K_MASK = 0x00000004;
        static constexpr unsigned EN32K(unsigned value) { return (value << 2); }
        static constexpr unsigned EN1K_POS = 3;
        static constexpr unsigned EN1K_MASK = 0x00000008;
        static constexpr unsigned EN1K(unsigned value) { return (value << 3); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
        static constexpr unsigned STARTUP_POS = 8;
        static constexpr unsigned STARTUP_MASK = 0x00000700;
        static constexpr unsigned STARTUP(unsigned value) { return (value << 8); }
        static constexpr unsigned WRTLOCK_POS = 12;
        static constexpr unsigned WRTLOCK_MASK = 0x00001000;
        static constexpr unsigned WRTLOCK(unsigned value) { return (value << 12); }
        static constexpr unsigned CALIB_POS = 16;
        static constexpr unsigned CALIB_MASK = 0x007f0000;
        static constexpr unsigned CALIB(unsigned value) { return (value << 16); }
    } OSC32K;

    volatile union OSCULP32K_T // OSCULP32K: 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) OSCULP32K_BIT_T
        {
            unsigned CALIB   : 5; // bits 0..4 Oscillator Calibration
            unsigned         : 2; // bits 5..6 unused
            unsigned WRTLOCK : 1; // bit 7 Write Lock    
        } bit;
    
        static constexpr unsigned CALIB_POS = 0;
        static constexpr unsigned CALIB_MASK = 0x0000001f;
        static constexpr unsigned CALIB(unsigned value) { return (value << 0); }
        static constexpr unsigned WRTLOCK_POS = 7;
        static constexpr unsigned WRTLOCK_MASK = 0x00000080;
        static constexpr unsigned WRTLOCK(unsigned value) { return (value << 7); }
    } OSCULP32K;

    uint8_t Reserved3[3];

    volatile union OSC8M_T // OSC8M: 8MHz Internal Oscillator (OSC8M) Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) OSC8M_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Oscillator Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control
            unsigned PRESC    : 2; // bits 8..9 Oscillator Prescaler
            unsigned          : 6; // bits 10..15 unused
            unsigned CALIB    : 12; // bits 16..27 Oscillator Calibration
            unsigned          : 2; // bits 28..29 unused
            unsigned FRANGE   : 2; // bits 30..31 Oscillator Frequency Range    
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
        static constexpr unsigned PRESC_POS = 8;
        static constexpr unsigned PRESC_MASK = 0x00000300;
        static constexpr unsigned PRESC(unsigned value) { return (value << 8); }
        static constexpr unsigned CALIB_POS = 16;
        static constexpr unsigned CALIB_MASK = 0x0fff0000;
        static constexpr unsigned CALIB(unsigned value) { return (value << 16); }
        static constexpr unsigned FRANGE_POS = 30;
        static constexpr unsigned FRANGE_MASK = 0xc0000000;
        static constexpr unsigned FRANGE(unsigned value) { return (value << 30); }
    } OSC8M;

    volatile union DFLLCTRL_T // DFLLCTRL: DFLL48M Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) DFLLCTRL_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 DFLL Enable
            unsigned MODE     : 1; // bit 2 Operating Mode Selection
            unsigned STABLE   : 1; // bit 3 Stable DFLL Frequency
            unsigned LLAW     : 1; // bit 4 Lose Lock After Wake
            unsigned USBCRM   : 1; // bit 5 USB Clock Recovery Mode
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control
            unsigned CCDIS    : 1; // bit 8 Chill Cycle Disable
            unsigned QLDIS    : 1; // bit 9 Quick Lock Disable
            unsigned BPLCKC   : 1; // bit 10 Bypass Coarse Lock
            unsigned WAITLOCK : 1; // bit 11 Wait Lock
            unsigned          : 4; // bits 12..15 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned MODE_POS = 2;
        static constexpr unsigned MODE_MASK = 0x00000004;
        static constexpr unsigned MODE(unsigned value) { return (value << 2); }
        static constexpr unsigned STABLE_POS = 3;
        static constexpr unsigned STABLE_MASK = 0x00000008;
        static constexpr unsigned STABLE(unsigned value) { return (value << 3); }
        static constexpr unsigned LLAW_POS = 4;
        static constexpr unsigned LLAW_MASK = 0x00000010;
        static constexpr unsigned LLAW(unsigned value) { return (value << 4); }
        static constexpr unsigned USBCRM_POS = 5;
        static constexpr unsigned USBCRM_MASK = 0x00000020;
        static constexpr unsigned USBCRM(unsigned value) { return (value << 5); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
        static constexpr unsigned CCDIS_POS = 8;
        static constexpr unsigned CCDIS_MASK = 0x00000100;
        static constexpr unsigned CCDIS(unsigned value) { return (value << 8); }
        static constexpr unsigned QLDIS_POS = 9;
        static constexpr unsigned QLDIS_MASK = 0x00000200;
        static constexpr unsigned QLDIS(unsigned value) { return (value << 9); }
        static constexpr unsigned BPLCKC_POS = 10;
        static constexpr unsigned BPLCKC_MASK = 0x00000400;
        static constexpr unsigned BPLCKC(unsigned value) { return (value << 10); }
        static constexpr unsigned WAITLOCK_POS = 11;
        static constexpr unsigned WAITLOCK_MASK = 0x00000800;
        static constexpr unsigned WAITLOCK(unsigned value) { return (value << 11); }
    } DFLLCTRL;

    uint8_t Reserved4[2];

    volatile union DFLLVAL_T // DFLLVAL: DFLL48M Value 
    {
        uint32_t reg;
        struct __attribute__((packed)) DFLLVAL_BIT_T
        {
            unsigned FINE   : 10; // bits 0..9 Fine Value
            unsigned COARSE : 6; // bits 10..15 Coarse Value
            unsigned DIFF   : 16; // bits 16..31 Multiplication Ratio Difference    
        } bit;
    
        static constexpr unsigned FINE_POS = 0;
        static constexpr unsigned FINE_MASK = 0x000003ff;
        static constexpr unsigned FINE(unsigned value) { return (value << 0); }
        static constexpr unsigned COARSE_POS = 10;
        static constexpr unsigned COARSE_MASK = 0x0000fc00;
        static constexpr unsigned COARSE(unsigned value) { return (value << 10); }
        static constexpr unsigned DIFF_POS = 16;
        static constexpr unsigned DIFF_MASK = 0xffff0000;
        static constexpr unsigned DIFF(unsigned value) { return (value << 16); }
    } DFLLVAL;

    volatile union DFLLMUL_T // DFLLMUL: DFLL48M Multiplier 
    {
        uint32_t reg;
        struct __attribute__((packed)) DFLLMUL_BIT_T
        {
            unsigned MUL   : 16; // bits 0..15 DFLL Multiply Factor
            unsigned FSTEP : 10; // bits 16..25 Fine Maximum Step
            unsigned CSTEP : 6; // bits 26..31 Coarse Maximum Step    
        } bit;
    
        static constexpr unsigned MUL_POS = 0;
        static constexpr unsigned MUL_MASK = 0x0000ffff;
        static constexpr unsigned MUL(unsigned value) { return (value << 0); }
        static constexpr unsigned FSTEP_POS = 16;
        static constexpr unsigned FSTEP_MASK = 0x03ff0000;
        static constexpr unsigned FSTEP(unsigned value) { return (value << 16); }
        static constexpr unsigned CSTEP_POS = 26;
        static constexpr unsigned CSTEP_MASK = 0xfc000000;
        static constexpr unsigned CSTEP(unsigned value) { return (value << 26); }
    } DFLLMUL;

    volatile union DFLLSYNC_T // DFLLSYNC: DFLL48M Synchronization 
    {
        uint8_t reg;
        struct __attribute__((packed)) DFLLSYNC_BIT_T
        {
            unsigned         : 7; // bits 0..6 unused
            unsigned READREQ : 1; // bit 7 Read Request    
        } bit;
    
        static constexpr unsigned READREQ_POS = 7;
        static constexpr unsigned READREQ_MASK = 0x00000080;
        static constexpr unsigned READREQ(unsigned value) { return (value << 7); }
    } DFLLSYNC;

    uint8_t Reserved5[3];

    volatile union BOD33_T // BOD33: 3.3V Brown-Out Detector (BOD33) Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) BOD33_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned HYST     : 1; // bit 2 Hysteresis
            unsigned ACTION   : 2; // bits 3..4 BOD33 Action
            unsigned          : 1; // bit 5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned          : 1; // bit 7 unused
            unsigned MODE     : 1; // bit 8 Operation Mode
            unsigned CEN      : 1; // bit 9 Clock Enable
            unsigned          : 2; // bits 10..11 unused
            unsigned PSEL     : 4; // bits 12..15 Prescaler Select
            unsigned LEVEL    : 6; // bits 16..21 BOD33 Threshold Level
            unsigned          : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned HYST_POS = 2;
        static constexpr unsigned HYST_MASK = 0x00000004;
        static constexpr unsigned HYST(unsigned value) { return (value << 2); }
        static constexpr unsigned ACTION_POS = 3;
        static constexpr unsigned ACTION_MASK = 0x00000018;
        static constexpr unsigned ACTION(unsigned value) { return (value << 3); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned MODE_POS = 8;
        static constexpr unsigned MODE_MASK = 0x00000100;
        static constexpr unsigned MODE(unsigned value) { return (value << 8); }
        static constexpr unsigned CEN_POS = 9;
        static constexpr unsigned CEN_MASK = 0x00000200;
        static constexpr unsigned CEN(unsigned value) { return (value << 9); }
        static constexpr unsigned PSEL_POS = 12;
        static constexpr unsigned PSEL_MASK = 0x0000f000;
        static constexpr unsigned PSEL(unsigned value) { return (value << 12); }
        static constexpr unsigned LEVEL_POS = 16;
        static constexpr unsigned LEVEL_MASK = 0x003f0000;
        static constexpr unsigned LEVEL(unsigned value) { return (value << 16); }
    } BOD33;

    uint8_t Reserved6[8];

    volatile union VREF_T // VREF: Voltage References System (VREF) Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) VREF_BIT_T
        {
            unsigned         : 1; // bit 0 unused
            unsigned TSEN    : 1; // bit 1 Temperature Sensor Enable
            unsigned BGOUTEN : 1; // bit 2 Bandgap Output Enable
            unsigned         : 13; // bits 3..15 unused
            unsigned CALIB   : 11; // bits 16..26 Bandgap Voltage Generator Calibration
            unsigned         : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned TSEN_POS = 1;
        static constexpr unsigned TSEN_MASK = 0x00000002;
        static constexpr unsigned TSEN(unsigned value) { return (value << 1); }
        static constexpr unsigned BGOUTEN_POS = 2;
        static constexpr unsigned BGOUTEN_MASK = 0x00000004;
        static constexpr unsigned BGOUTEN(unsigned value) { return (value << 2); }
        static constexpr unsigned CALIB_POS = 16;
        static constexpr unsigned CALIB_MASK = 0x07ff0000;
        static constexpr unsigned CALIB(unsigned value) { return (value << 16); }
    } VREF;

    volatile union DPLLCTRLA_T // DPLLCTRLA: DPLL Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) DPLLCTRLA_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 DPLL Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Clock Activation    
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

    uint8_t Reserved7[3];

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

    volatile union DPLLCTRLB_T // DPLLCTRLB: DPLL Control B 
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

    volatile union DPLLSTATUS_T // DPLLSTATUS: DPLL Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) DPLLSTATUS_BIT_T
        {
            unsigned LOCK   : 1; // bit 0 DPLL Lock Status
            unsigned CLKRDY : 1; // bit 1 Output Clock Ready
            unsigned ENABLE : 1; // bit 2 DPLL Enable
            unsigned DIV    : 1; // bit 3 Divider Enable
            unsigned        : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned LOCK_POS = 0;
        static constexpr unsigned LOCK_MASK = 0x00000001;
        static constexpr unsigned LOCK(unsigned value) { return (value << 0); }
        static constexpr unsigned CLKRDY_POS = 1;
        static constexpr unsigned CLKRDY_MASK = 0x00000002;
        static constexpr unsigned CLKRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned ENABLE_POS = 2;
        static constexpr unsigned ENABLE_MASK = 0x00000004;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 2); }
        static constexpr unsigned DIV_POS = 3;
        static constexpr unsigned DIV_MASK = 0x00000008;
        static constexpr unsigned DIV(unsigned value) { return (value << 3); }
    } DPLLSTATUS;

}; // struct SYSCTRL_T

static_assert(sizeof(SYSCTRL_T) == SYSCTRL_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp