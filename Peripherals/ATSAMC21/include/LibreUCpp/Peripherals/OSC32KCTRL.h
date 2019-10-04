#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) OSC32KCTRL_T
{
    static constexpr size_t INSTANCE_SIZE = 32;
    static constexpr size_t PADDED_INSTANCE_SIZE = 32;
    static constexpr intptr_t BASE_ADDRESS = 0x40001400;

    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_RTCCTRL = 0x10;
    static constexpr intptr_t ADDR_OFFSET_XOSC32K = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CFDCTRL = 0x16;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x17;
    static constexpr intptr_t ADDR_OFFSET_OSC32K = 0x18;
    static constexpr intptr_t ADDR_OFFSET_OSCULP32K = 0x1c;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned XOSC32KRDY : 1; // bit 0 XOSC32K Ready Interrupt Enable
            unsigned OSC32KRDY  : 1; // bit 1 OSC32K Ready Interrupt Enable
            unsigned CLKFAIL    : 1; // bit 2 XOSC32K Clock Failure Detector Interrupt Enable
            unsigned            : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned XOSC32KRDY_POS = 0;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000001;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned OSC32KRDY_POS = 1;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned CLKFAIL_POS = 2;
        static constexpr unsigned CLKFAIL_MASK = 0x00000004;
        static constexpr unsigned CLKFAIL(unsigned value) { return (value << 2); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned XOSC32KRDY : 1; // bit 0 XOSC32K Ready Interrupt Enable
            unsigned OSC32KRDY  : 1; // bit 1 OSC32K Ready Interrupt Enable
            unsigned CLKFAIL    : 1; // bit 2 XOSC32K Clock Failure Detector Interrupt Enable
            unsigned            : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned XOSC32KRDY_POS = 0;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000001;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned OSC32KRDY_POS = 1;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned CLKFAIL_POS = 2;
        static constexpr unsigned CLKFAIL_MASK = 0x00000004;
        static constexpr unsigned CLKFAIL(unsigned value) { return (value << 2); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned XOSC32KRDY : 1; // bit 0 XOSC32K Ready
            unsigned OSC32KRDY  : 1; // bit 1 OSC32K Ready
            unsigned CLKFAIL    : 1; // bit 2 XOSC32K Clock Failure Detector
            unsigned            : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned XOSC32KRDY_POS = 0;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000001;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned OSC32KRDY_POS = 1;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned CLKFAIL_POS = 2;
        static constexpr unsigned CLKFAIL_MASK = 0x00000004;
        static constexpr unsigned CLKFAIL(unsigned value) { return (value << 2); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Power and Clocks Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned XOSC32KRDY : 1; // bit 0 XOSC32K Ready
            unsigned OSC32KRDY  : 1; // bit 1 OSC32K Ready
            unsigned CLKFAIL    : 1; // bit 2 XOSC32K Clock Failure Detector
            unsigned CLKSW      : 1; // bit 3 XOSC32K Clock switch
            unsigned            : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned XOSC32KRDY_POS = 0;
        static constexpr unsigned XOSC32KRDY_MASK = 0x00000001;
        static constexpr unsigned XOSC32KRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned OSC32KRDY_POS = 1;
        static constexpr unsigned OSC32KRDY_MASK = 0x00000002;
        static constexpr unsigned OSC32KRDY(unsigned value) { return (value << 1); }
        static constexpr unsigned CLKFAIL_POS = 2;
        static constexpr unsigned CLKFAIL_MASK = 0x00000004;
        static constexpr unsigned CLKFAIL(unsigned value) { return (value << 2); }
        static constexpr unsigned CLKSW_POS = 3;
        static constexpr unsigned CLKSW_MASK = 0x00000008;
        static constexpr unsigned CLKSW(unsigned value) { return (value << 3); }
    } STATUS;

    volatile union RTCCTRL_T // RTCCTRL: Clock selection 
    {
        uint32_t reg;
        struct __attribute__((packed)) RTCCTRL_BIT_T
        {
            unsigned RTCSEL : 3; // bits 0..2 RTC Clock Selection
            unsigned        : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned RTCSEL_POS = 0;
        static constexpr unsigned RTCSEL_MASK = 0x00000007;
        static constexpr unsigned RTCSEL(unsigned value) { return (value << 0); }
    } RTCCTRL;

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
            unsigned          : 1; // bit 5 unused
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

    volatile union CFDCTRL_T // CFDCTRL: Clock Failure Detector Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CFDCTRL_BIT_T
        {
            unsigned CFDEN    : 1; // bit 0 Clock Failure Detector Enable
            unsigned SWBACK   : 1; // bit 1 Clock Switch Back
            unsigned CFDPRESC : 1; // bit 2 Clock Failure Detector Prescaler
            unsigned          : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned CFDEN_POS = 0;
        static constexpr unsigned CFDEN_MASK = 0x00000001;
        static constexpr unsigned CFDEN(unsigned value) { return (value << 0); }
        static constexpr unsigned SWBACK_POS = 1;
        static constexpr unsigned SWBACK_MASK = 0x00000002;
        static constexpr unsigned SWBACK(unsigned value) { return (value << 1); }
        static constexpr unsigned CFDPRESC_POS = 2;
        static constexpr unsigned CFDPRESC_MASK = 0x00000004;
        static constexpr unsigned CFDPRESC(unsigned value) { return (value << 2); }
    } CFDCTRL;

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
        uint32_t reg;
        struct __attribute__((packed)) OSCULP32K_BIT_T
        {
            unsigned         : 8; // bits 0..7 unused
            unsigned CALIB   : 5; // bits 8..12 Oscillator Calibration
            unsigned         : 2; // bits 13..14 unused
            unsigned WRTLOCK : 1; // bit 15 Write Lock
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CALIB_POS = 8;
        static constexpr unsigned CALIB_MASK = 0x00001f00;
        static constexpr unsigned CALIB(unsigned value) { return (value << 8); }
        static constexpr unsigned WRTLOCK_POS = 15;
        static constexpr unsigned WRTLOCK_MASK = 0x00008000;
        static constexpr unsigned WRTLOCK(unsigned value) { return (value << 15); }
    } OSCULP32K;

}; // struct OSC32KCTRL_T

static_assert(sizeof(OSC32KCTRL_T) == OSC32KCTRL_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp