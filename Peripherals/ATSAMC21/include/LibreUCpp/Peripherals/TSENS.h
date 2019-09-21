#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TSENS_T
{
    static constexpr size_t INSTANCE_SIZE = 37;
    static constexpr intptr_t BASE_ADDRESS = 0x40003000;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x01;
    static constexpr intptr_t ADDR_OFFSET_CTRLC = 0x02;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x03;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x06;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x07;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x08;
    static constexpr intptr_t ADDR_OFFSET_VALUE = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_WINLT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_WINUT = 0x14;
    static constexpr intptr_t ADDR_OFFSET_GAIN = 0x18;
    static constexpr intptr_t ADDR_OFFSET_OFFSET = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_CAL = 0x20;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x24;

    volatile union CTRLA_T // CTRLA: Control A Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Software Reset
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned          : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
    } CTRLA;

    volatile union CTRLB_T // CTRLB: Control B Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned START : 1; // bit 0 Start Measurement
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned START_POS = 0;
        static constexpr unsigned START_MASK = 0x00000001;
        static constexpr unsigned START(unsigned value) { return (value << 0); }
    } CTRLB;

    volatile union CTRLC_T // CTRLC: Control C Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLC_BIT_T
        {
            unsigned WINMODE : 3; // bits 0..2 Window Monitor Mode
            unsigned         : 1; // bit 3 unused
            unsigned FREERUN : 1; // bit 4 Free Running Measurement
            unsigned         : 3; // bits 5..7 unused    
        } bit;
    
        static constexpr unsigned WINMODE_POS = 0;
        static constexpr unsigned WINMODE_MASK = 0x00000007;
        static constexpr unsigned WINMODE(unsigned value) { return (value << 0); }
        static constexpr unsigned FREERUN_POS = 4;
        static constexpr unsigned FREERUN_MASK = 0x00000010;
        static constexpr unsigned FREERUN(unsigned value) { return (value << 4); }
    } CTRLC;

    volatile union EVCTRL_T // EVCTRL: Event Control Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned STARTEI  : 1; // bit 0 Start Conversion Event Input Enable
            unsigned STARTINV : 1; // bit 1 Start Conversion Event Invert Enable
            unsigned WINEO    : 1; // bit 2 Window Monitor Event Out
            unsigned          : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned STARTEI_POS = 0;
        static constexpr unsigned STARTEI_MASK = 0x00000001;
        static constexpr unsigned STARTEI(unsigned value) { return (value << 0); }
        static constexpr unsigned STARTINV_POS = 1;
        static constexpr unsigned STARTINV_MASK = 0x00000002;
        static constexpr unsigned STARTINV(unsigned value) { return (value << 1); }
        static constexpr unsigned WINEO_POS = 2;
        static constexpr unsigned WINEO_MASK = 0x00000004;
        static constexpr unsigned WINEO(unsigned value) { return (value << 2); }
    } EVCTRL;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready Interrupt Enable
            unsigned OVERRUN : 1; // bit 1 Overrun Interrupt Enable
            unsigned WINMON  : 1; // bit 2 Window Monitor Interrupt Enable
            unsigned OVF     : 1; // bit 3 Overflow Interrupt Enable
            unsigned         : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned RESRDY_POS = 0;
        static constexpr unsigned RESRDY_MASK = 0x00000001;
        static constexpr unsigned RESRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned OVERRUN_POS = 1;
        static constexpr unsigned OVERRUN_MASK = 0x00000002;
        static constexpr unsigned OVERRUN(unsigned value) { return (value << 1); }
        static constexpr unsigned WINMON_POS = 2;
        static constexpr unsigned WINMON_MASK = 0x00000004;
        static constexpr unsigned WINMON(unsigned value) { return (value << 2); }
        static constexpr unsigned OVF_POS = 3;
        static constexpr unsigned OVF_MASK = 0x00000008;
        static constexpr unsigned OVF(unsigned value) { return (value << 3); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready Interrupt Enable
            unsigned OVERRUN : 1; // bit 1 Overrun Interrupt Enable
            unsigned WINMON  : 1; // bit 2 Window Monitor Interrupt Enable
            unsigned OVF     : 1; // bit 3 Overflow Interrupt Enable
            unsigned         : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned RESRDY_POS = 0;
        static constexpr unsigned RESRDY_MASK = 0x00000001;
        static constexpr unsigned RESRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned OVERRUN_POS = 1;
        static constexpr unsigned OVERRUN_MASK = 0x00000002;
        static constexpr unsigned OVERRUN(unsigned value) { return (value << 1); }
        static constexpr unsigned WINMON_POS = 2;
        static constexpr unsigned WINMON_MASK = 0x00000004;
        static constexpr unsigned WINMON(unsigned value) { return (value << 2); }
        static constexpr unsigned OVF_POS = 3;
        static constexpr unsigned OVF_MASK = 0x00000008;
        static constexpr unsigned OVF(unsigned value) { return (value << 3); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready
            unsigned OVERRUN : 1; // bit 1 Overrun
            unsigned WINMON  : 1; // bit 2 Window Monitor
            unsigned OVF     : 1; // bit 3 Overflow
            unsigned         : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned RESRDY_POS = 0;
        static constexpr unsigned RESRDY_MASK = 0x00000001;
        static constexpr unsigned RESRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned OVERRUN_POS = 1;
        static constexpr unsigned OVERRUN_MASK = 0x00000002;
        static constexpr unsigned OVERRUN(unsigned value) { return (value << 1); }
        static constexpr unsigned WINMON_POS = 2;
        static constexpr unsigned WINMON_MASK = 0x00000004;
        static constexpr unsigned WINMON(unsigned value) { return (value << 2); }
        static constexpr unsigned OVF_POS = 3;
        static constexpr unsigned OVF_MASK = 0x00000008;
        static constexpr unsigned OVF(unsigned value) { return (value << 3); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Status Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned OVF : 1; // bit 0 Result Overflow
            unsigned     : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned OVF_POS = 0;
        static constexpr unsigned OVF_MASK = 0x00000001;
        static constexpr unsigned OVF(unsigned value) { return (value << 0); }
    } STATUS;

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST  : 1; // bit 0 Software Reset Busy
            unsigned ENABLE : 1; // bit 1 Enable Busy
            unsigned        : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
    } SYNCBUSY;

    volatile union VALUE_T // VALUE: Value Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) VALUE_BIT_T
        {
            unsigned VALUE : 24; // bits 0..23 Measurement Value
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned VALUE_POS = 0;
        static constexpr unsigned VALUE_MASK = 0x00ffffff;
        static constexpr unsigned VALUE(unsigned value) { return (value << 0); }
    } VALUE;

    volatile union WINLT_T // WINLT: Window Monitor Lower Threshold Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) WINLT_BIT_T
        {
            unsigned WINLT : 24; // bits 0..23 Window Lower Threshold
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned WINLT_POS = 0;
        static constexpr unsigned WINLT_MASK = 0x00ffffff;
        static constexpr unsigned WINLT(unsigned value) { return (value << 0); }
    } WINLT;

    volatile union WINUT_T // WINUT: Window Monitor Upper Threshold Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) WINUT_BIT_T
        {
            unsigned WINUT : 24; // bits 0..23 Window Upper Threshold
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned WINUT_POS = 0;
        static constexpr unsigned WINUT_MASK = 0x00ffffff;
        static constexpr unsigned WINUT(unsigned value) { return (value << 0); }
    } WINUT;

    volatile union GAIN_T // GAIN: Gain Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) GAIN_BIT_T
        {
            unsigned GAIN : 24; // bits 0..23 Time Amplifier Gain
            unsigned      : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned GAIN_POS = 0;
        static constexpr unsigned GAIN_MASK = 0x00ffffff;
        static constexpr unsigned GAIN(unsigned value) { return (value << 0); }
    } GAIN;

    volatile union OFFSET_T // OFFSET: Offset Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OFFSET_BIT_T
        {
            unsigned OFFSETC : 24; // bits 0..23 Offset Correction
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned OFFSETC_POS = 0;
        static constexpr unsigned OFFSETC_MASK = 0x00ffffff;
        static constexpr unsigned OFFSETC(unsigned value) { return (value << 0); }
    } OFFSET;

    volatile union CAL_T // CAL: Calibration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CAL_BIT_T
        {
            unsigned FCAL : 6; // bits 0..5 Frequency Calibration
            unsigned      : 2; // bits 6..7 unused
            unsigned TCAL : 6; // bits 8..13 Temperature Calibration
            unsigned      : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned FCAL_POS = 0;
        static constexpr unsigned FCAL_MASK = 0x0000003f;
        static constexpr unsigned FCAL(unsigned value) { return (value << 0); }
        static constexpr unsigned TCAL_POS = 8;
        static constexpr unsigned TCAL_MASK = 0x00003f00;
        static constexpr unsigned TCAL(unsigned value) { return (value << 8); }
    } CAL;

    volatile union DBGCTRL_T // DBGCTRL: Debug Control Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) DBGCTRL_BIT_T
        {
            unsigned DBGRUN : 1; // bit 0 Debug Run
            unsigned        : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned DBGRUN_POS = 0;
        static constexpr unsigned DBGRUN_MASK = 0x00000001;
        static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
    } DBGCTRL;

}; // struct TSENS_T

static_assert(sizeof(TSENS_T) == TSENS_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp