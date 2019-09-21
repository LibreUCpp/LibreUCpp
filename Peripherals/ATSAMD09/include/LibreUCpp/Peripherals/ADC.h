#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) ADC_T
{
    static constexpr size_t INSTANCE_SIZE = 43;
    static constexpr intptr_t BASE_ADDRESS = 0x42002000;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_REFCTRL = 0x01;
    static constexpr intptr_t ADDR_OFFSET_AVGCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_SAMPCTRL = 0x03;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_WINCTRL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_SWTRIG = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_INPUTCTRL = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x14;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x16;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x17;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x19;
    static constexpr intptr_t ADDR_OFFSET_RESULT = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_WINLT = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_WINUT = 0x20;
    static constexpr intptr_t ADDR_OFFSET_GAINCORR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_OFFSETCORR = 0x26;
    static constexpr intptr_t ADDR_OFFSET_CALIB = 0x28;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x2a;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Software Reset
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned RUNSTDBY : 1; // bit 2 Run in Standby
            unsigned          : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 2;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000004;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 2); }
    } CTRLA;

    volatile union REFCTRL_T // REFCTRL: Reference Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) REFCTRL_BIT_T
        {
            unsigned REFSEL  : 4; // bits 0..3 Reference Selection
            unsigned         : 3; // bits 4..6 unused
            unsigned REFCOMP : 1; // bit 7 Reference Buffer Offset Compensation Enable    
        } bit;
    
        static constexpr unsigned REFSEL_POS = 0;
        static constexpr unsigned REFSEL_MASK = 0x0000000f;
        static constexpr unsigned REFSEL(unsigned value) { return (value << 0); }
        static constexpr unsigned REFCOMP_POS = 7;
        static constexpr unsigned REFCOMP_MASK = 0x00000080;
        static constexpr unsigned REFCOMP(unsigned value) { return (value << 7); }
    } REFCTRL;

    volatile union AVGCTRL_T // AVGCTRL: Average Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) AVGCTRL_BIT_T
        {
            unsigned SAMPLENUM : 4; // bits 0..3 Number of Samples to be Collected
            unsigned ADJRES    : 3; // bits 4..6 Adjusting Result / Division Coefficient
            unsigned           : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned SAMPLENUM_POS = 0;
        static constexpr unsigned SAMPLENUM_MASK = 0x0000000f;
        static constexpr unsigned SAMPLENUM(unsigned value) { return (value << 0); }
        static constexpr unsigned ADJRES_POS = 4;
        static constexpr unsigned ADJRES_MASK = 0x00000070;
        static constexpr unsigned ADJRES(unsigned value) { return (value << 4); }
    } AVGCTRL;

    volatile union SAMPCTRL_T // SAMPCTRL: Sampling Time Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) SAMPCTRL_BIT_T
        {
            unsigned SAMPLEN : 6; // bits 0..5 Sampling Time Length
            unsigned         : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned SAMPLEN_POS = 0;
        static constexpr unsigned SAMPLEN_MASK = 0x0000003f;
        static constexpr unsigned SAMPLEN(unsigned value) { return (value << 0); }
    } SAMPCTRL;

    volatile union CTRLB_T // CTRLB: Control B 
    {
        uint16_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned DIFFMODE  : 1; // bit 0 Differential Mode
            unsigned LEFTADJ   : 1; // bit 1 Left-Adjusted Result
            unsigned FREERUN   : 1; // bit 2 Free Running Mode
            unsigned CORREN    : 1; // bit 3 Digital Correction Logic Enabled
            unsigned RESSEL    : 2; // bits 4..5 Conversion Result Resolution
            unsigned           : 2; // bits 6..7 unused
            unsigned PRESCALER : 3; // bits 8..10 Prescaler Configuration
            unsigned           : 5; // bits 11..15 unused    
        } bit;
    
        static constexpr unsigned DIFFMODE_POS = 0;
        static constexpr unsigned DIFFMODE_MASK = 0x00000001;
        static constexpr unsigned DIFFMODE(unsigned value) { return (value << 0); }
        static constexpr unsigned LEFTADJ_POS = 1;
        static constexpr unsigned LEFTADJ_MASK = 0x00000002;
        static constexpr unsigned LEFTADJ(unsigned value) { return (value << 1); }
        static constexpr unsigned FREERUN_POS = 2;
        static constexpr unsigned FREERUN_MASK = 0x00000004;
        static constexpr unsigned FREERUN(unsigned value) { return (value << 2); }
        static constexpr unsigned CORREN_POS = 3;
        static constexpr unsigned CORREN_MASK = 0x00000008;
        static constexpr unsigned CORREN(unsigned value) { return (value << 3); }
        static constexpr unsigned RESSEL_POS = 4;
        static constexpr unsigned RESSEL_MASK = 0x00000030;
        static constexpr unsigned RESSEL(unsigned value) { return (value << 4); }
        static constexpr unsigned PRESCALER_POS = 8;
        static constexpr unsigned PRESCALER_MASK = 0x00000700;
        static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
    } CTRLB;

    uint8_t Reserved1[2];

    volatile union WINCTRL_T // WINCTRL: Window Monitor Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) WINCTRL_BIT_T
        {
            unsigned WINMODE : 3; // bits 0..2 Window Monitor Mode
            unsigned         : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned WINMODE_POS = 0;
        static constexpr unsigned WINMODE_MASK = 0x00000007;
        static constexpr unsigned WINMODE(unsigned value) { return (value << 0); }
    } WINCTRL;

    uint8_t Reserved2[3];

    volatile union SWTRIG_T // SWTRIG: Software Trigger 
    {
        uint8_t reg;
        struct __attribute__((packed)) SWTRIG_BIT_T
        {
            unsigned FLUSH : 1; // bit 0 ADC Conversion Flush
            unsigned START : 1; // bit 1 ADC Start Conversion
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned FLUSH_POS = 0;
        static constexpr unsigned FLUSH_MASK = 0x00000001;
        static constexpr unsigned FLUSH(unsigned value) { return (value << 0); }
        static constexpr unsigned START_POS = 1;
        static constexpr unsigned START_MASK = 0x00000002;
        static constexpr unsigned START(unsigned value) { return (value << 1); }
    } SWTRIG;

    uint8_t Reserved3[3];

    volatile union INPUTCTRL_T // INPUTCTRL: Input Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) INPUTCTRL_BIT_T
        {
            unsigned MUXPOS      : 5; // bits 0..4 Positive Mux Input Selection
            unsigned             : 3; // bits 5..7 unused
            unsigned MUXNEG      : 5; // bits 8..12 Negative Mux Input Selection
            unsigned             : 3; // bits 13..15 unused
            unsigned INPUTSCAN   : 4; // bits 16..19 Number of Input Channels Included in Scan
            unsigned INPUTOFFSET : 4; // bits 20..23 Positive Mux Setting Offset
            unsigned GAIN        : 4; // bits 24..27 Gain Factor Selection
            unsigned             : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned MUXPOS_POS = 0;
        static constexpr unsigned MUXPOS_MASK = 0x0000001f;
        static constexpr unsigned MUXPOS(unsigned value) { return (value << 0); }
        static constexpr unsigned MUXNEG_POS = 8;
        static constexpr unsigned MUXNEG_MASK = 0x00001f00;
        static constexpr unsigned MUXNEG(unsigned value) { return (value << 8); }
        static constexpr unsigned INPUTSCAN_POS = 16;
        static constexpr unsigned INPUTSCAN_MASK = 0x000f0000;
        static constexpr unsigned INPUTSCAN(unsigned value) { return (value << 16); }
        static constexpr unsigned INPUTOFFSET_POS = 20;
        static constexpr unsigned INPUTOFFSET_MASK = 0x00f00000;
        static constexpr unsigned INPUTOFFSET(unsigned value) { return (value << 20); }
        static constexpr unsigned GAIN_POS = 24;
        static constexpr unsigned GAIN_MASK = 0x0f000000;
        static constexpr unsigned GAIN(unsigned value) { return (value << 24); }
    } INPUTCTRL;

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned STARTEI  : 1; // bit 0 Start Conversion Event In
            unsigned SYNCEI   : 1; // bit 1 Synchronization Event In
            unsigned          : 2; // bits 2..3 unused
            unsigned RESRDYEO : 1; // bit 4 Result Ready Event Out
            unsigned WINMONEO : 1; // bit 5 Window Monitor Event Out
            unsigned          : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned STARTEI_POS = 0;
        static constexpr unsigned STARTEI_MASK = 0x00000001;
        static constexpr unsigned STARTEI(unsigned value) { return (value << 0); }
        static constexpr unsigned SYNCEI_POS = 1;
        static constexpr unsigned SYNCEI_MASK = 0x00000002;
        static constexpr unsigned SYNCEI(unsigned value) { return (value << 1); }
        static constexpr unsigned RESRDYEO_POS = 4;
        static constexpr unsigned RESRDYEO_MASK = 0x00000010;
        static constexpr unsigned RESRDYEO(unsigned value) { return (value << 4); }
        static constexpr unsigned WINMONEO_POS = 5;
        static constexpr unsigned WINMONEO_MASK = 0x00000020;
        static constexpr unsigned WINMONEO(unsigned value) { return (value << 5); }
    } EVCTRL;

    uint8_t Reserved4[1];

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready Interrupt Enable
            unsigned OVERRUN : 1; // bit 1 Overrun Interrupt Enable
            unsigned WINMON  : 1; // bit 2 Window Monitor Interrupt Enable
            unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
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
        static constexpr unsigned SYNCRDY_POS = 3;
        static constexpr unsigned SYNCRDY_MASK = 0x00000008;
        static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready Interrupt Enable
            unsigned OVERRUN : 1; // bit 1 Overrun Interrupt Enable
            unsigned WINMON  : 1; // bit 2 Window Monitor Interrupt Enable
            unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
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
        static constexpr unsigned SYNCRDY_POS = 3;
        static constexpr unsigned SYNCRDY_MASK = 0x00000008;
        static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready
            unsigned OVERRUN : 1; // bit 1 Overrun
            unsigned WINMON  : 1; // bit 2 Window Monitor
            unsigned SYNCRDY : 1; // bit 3 Synchronization Ready
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
        static constexpr unsigned SYNCRDY_POS = 3;
        static constexpr unsigned SYNCRDY_MASK = 0x00000008;
        static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned          : 7; // bits 0..6 unused
            unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
        } bit;
    
        static constexpr unsigned SYNCBUSY_POS = 7;
        static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
        static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
    } STATUS;

    volatile union RESULT_T // RESULT: Result 
    {
        uint16_t reg;
        struct __attribute__((packed)) RESULT_BIT_T
        {
            unsigned RESULT : 16; // bits 0..15 Result Conversion Value    
        } bit;
    
        static constexpr unsigned RESULT_POS = 0;
        static constexpr unsigned RESULT_MASK = 0x0000ffff;
        static constexpr unsigned RESULT(unsigned value) { return (value << 0); }
    } RESULT;

    volatile union WINLT_T // WINLT: Window Monitor Lower Threshold 
    {
        uint16_t reg;
        struct __attribute__((packed)) WINLT_BIT_T
        {
            unsigned WINLT : 16; // bits 0..15 Window Lower Threshold    
        } bit;
    
        static constexpr unsigned WINLT_POS = 0;
        static constexpr unsigned WINLT_MASK = 0x0000ffff;
        static constexpr unsigned WINLT(unsigned value) { return (value << 0); }
    } WINLT;

    uint8_t Reserved5[2];

    volatile union WINUT_T // WINUT: Window Monitor Upper Threshold 
    {
        uint16_t reg;
        struct __attribute__((packed)) WINUT_BIT_T
        {
            unsigned WINUT : 16; // bits 0..15 Window Upper Threshold    
        } bit;
    
        static constexpr unsigned WINUT_POS = 0;
        static constexpr unsigned WINUT_MASK = 0x0000ffff;
        static constexpr unsigned WINUT(unsigned value) { return (value << 0); }
    } WINUT;

    uint8_t Reserved6[2];

    volatile union GAINCORR_T // GAINCORR: Gain Correction 
    {
        uint16_t reg;
        struct __attribute__((packed)) GAINCORR_BIT_T
        {
            unsigned GAINCORR : 12; // bits 0..11 Gain Correction Value
            unsigned          : 4; // bits 12..15 unused    
        } bit;
    
        static constexpr unsigned GAINCORR_POS = 0;
        static constexpr unsigned GAINCORR_MASK = 0x00000fff;
        static constexpr unsigned GAINCORR(unsigned value) { return (value << 0); }
    } GAINCORR;

    volatile union OFFSETCORR_T // OFFSETCORR: Offset Correction 
    {
        uint16_t reg;
        struct __attribute__((packed)) OFFSETCORR_BIT_T
        {
            unsigned OFFSETCORR : 12; // bits 0..11 Offset Correction Value
            unsigned            : 4; // bits 12..15 unused    
        } bit;
    
        static constexpr unsigned OFFSETCORR_POS = 0;
        static constexpr unsigned OFFSETCORR_MASK = 0x00000fff;
        static constexpr unsigned OFFSETCORR(unsigned value) { return (value << 0); }
    } OFFSETCORR;

    volatile union CALIB_T // CALIB: Calibration 
    {
        uint16_t reg;
        struct __attribute__((packed)) CALIB_BIT_T
        {
            unsigned LINEARITY_CAL : 8; // bits 0..7 Linearity Calibration Value
            unsigned BIAS_CAL      : 3; // bits 8..10 Bias Calibration Value
            unsigned               : 5; // bits 11..15 unused    
        } bit;
    
        static constexpr unsigned LINEARITY_CAL_POS = 0;
        static constexpr unsigned LINEARITY_CAL_MASK = 0x000000ff;
        static constexpr unsigned LINEARITY_CAL(unsigned value) { return (value << 0); }
        static constexpr unsigned BIAS_CAL_POS = 8;
        static constexpr unsigned BIAS_CAL_MASK = 0x00000700;
        static constexpr unsigned BIAS_CAL(unsigned value) { return (value << 8); }
    } CALIB;

    volatile union DBGCTRL_T // DBGCTRL: Debug Control 
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

}; // struct ADC_T

static_assert(sizeof(ADC_T) == ADC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp