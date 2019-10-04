#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) ADC_T
{
    static constexpr size_t INSTANCE_SIZE = 46;
    static constexpr size_t PADDED_INSTANCE_SIZE = 48;
    static constexpr intptr_t BASE_ADDRESS_ADC0 = 0x42004400;
    static constexpr intptr_t BASE_ADDRESS_ADC1 = 0x42004800;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x01;
    static constexpr intptr_t ADDR_OFFSET_REFCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x03;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x06;
    static constexpr intptr_t ADDR_OFFSET_SEQSTATUS = 0x07;
    static constexpr intptr_t ADDR_OFFSET_INPUTCTRL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CTRLC = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_AVGCTRL = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SAMPCTRL = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_WINLT = 0x0e;
    static constexpr intptr_t ADDR_OFFSET_WINUT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_GAINCORR = 0x12;
    static constexpr intptr_t ADDR_OFFSET_OFFSETCORR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_SWTRIG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x20;
    static constexpr intptr_t ADDR_OFFSET_RESULT = 0x24;
    static constexpr intptr_t ADDR_OFFSET_SEQCTRL = 0x28;
    static constexpr intptr_t ADDR_OFFSET_CALIB = 0x2c;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Software Reset
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned          : 3; // bits 2..4 unused
            unsigned SLAVEEN  : 1; // bit 5 Slave Enable
            unsigned RUNSTDBY : 1; // bit 6 Run During Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned SLAVEEN_POS = 5;
        static constexpr unsigned SLAVEEN_MASK = 0x00000020;
        static constexpr unsigned SLAVEEN(unsigned value) { return (value << 5); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
    } CTRLA;

    volatile union CTRLB_T // CTRLB: Control B 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned PRESCALER : 3; // bits 0..2 Prescaler Configuration
            unsigned           : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned PRESCALER_POS = 0;
        static constexpr unsigned PRESCALER_MASK = 0x00000007;
        static constexpr unsigned PRESCALER(unsigned value) { return (value << 0); }
    } CTRLB;

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

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned FLUSHEI  : 1; // bit 0 Flush Event Input Enable
            unsigned STARTEI  : 1; // bit 1 Start Conversion Event Input Enable
            unsigned FLUSHINV : 1; // bit 2 Flush Event Invert Enable
            unsigned STARTINV : 1; // bit 3 Start Event Invert Enable
            unsigned RESRDYEO : 1; // bit 4 Result Ready Event Out
            unsigned WINMONEO : 1; // bit 5 Window Monitor Event Out
            unsigned          : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned FLUSHEI_POS = 0;
        static constexpr unsigned FLUSHEI_MASK = 0x00000001;
        static constexpr unsigned FLUSHEI(unsigned value) { return (value << 0); }
        static constexpr unsigned STARTEI_POS = 1;
        static constexpr unsigned STARTEI_MASK = 0x00000002;
        static constexpr unsigned STARTEI(unsigned value) { return (value << 1); }
        static constexpr unsigned FLUSHINV_POS = 2;
        static constexpr unsigned FLUSHINV_MASK = 0x00000004;
        static constexpr unsigned FLUSHINV(unsigned value) { return (value << 2); }
        static constexpr unsigned STARTINV_POS = 3;
        static constexpr unsigned STARTINV_MASK = 0x00000008;
        static constexpr unsigned STARTINV(unsigned value) { return (value << 3); }
        static constexpr unsigned RESRDYEO_POS = 4;
        static constexpr unsigned RESRDYEO_MASK = 0x00000010;
        static constexpr unsigned RESRDYEO(unsigned value) { return (value << 4); }
        static constexpr unsigned WINMONEO_POS = 5;
        static constexpr unsigned WINMONEO_MASK = 0x00000020;
        static constexpr unsigned WINMONEO(unsigned value) { return (value << 5); }
    } EVCTRL;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready Interrupt Disable
            unsigned OVERRUN : 1; // bit 1 Overrun Interrupt Disable
            unsigned WINMON  : 1; // bit 2 Window Monitor Interrupt Disable
            unsigned         : 5; // bits 3..7 unused    
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
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready Interrupt Enable
            unsigned OVERRUN : 1; // bit 1 Overrun Interrupt Enable
            unsigned WINMON  : 1; // bit 2 Window Monitor Interrupt Enable
            unsigned         : 5; // bits 3..7 unused    
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
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned RESRDY  : 1; // bit 0 Result Ready Interrupt Flag
            unsigned OVERRUN : 1; // bit 1 Overrun Interrupt Flag
            unsigned WINMON  : 1; // bit 2 Window Monitor Interrupt Flag
            unsigned         : 5; // bits 3..7 unused    
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
    } INTFLAG;

    volatile union SEQSTATUS_T // SEQSTATUS: Sequence Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) SEQSTATUS_BIT_T
        {
            unsigned SEQSTATE : 5; // bits 0..4 Sequence State
            unsigned          : 2; // bits 5..6 unused
            unsigned SEQBUSY  : 1; // bit 7 Sequence Busy    
        } bit;
    
        static constexpr unsigned SEQSTATE_POS = 0;
        static constexpr unsigned SEQSTATE_MASK = 0x0000001f;
        static constexpr unsigned SEQSTATE(unsigned value) { return (value << 0); }
        static constexpr unsigned SEQBUSY_POS = 7;
        static constexpr unsigned SEQBUSY_MASK = 0x00000080;
        static constexpr unsigned SEQBUSY(unsigned value) { return (value << 7); }
    } SEQSTATUS;

    volatile union INPUTCTRL_T // INPUTCTRL: Input Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) INPUTCTRL_BIT_T
        {
            unsigned MUXPOS : 5; // bits 0..4 Positive Mux Input Selection
            unsigned        : 3; // bits 5..7 unused
            unsigned MUXNEG : 5; // bits 8..12 Negative Mux Input Selection
            unsigned        : 3; // bits 13..15 unused    
        } bit;
    
        static constexpr unsigned MUXPOS_POS = 0;
        static constexpr unsigned MUXPOS_MASK = 0x0000001f;
        static constexpr unsigned MUXPOS(unsigned value) { return (value << 0); }
        static constexpr unsigned MUXNEG_POS = 8;
        static constexpr unsigned MUXNEG_MASK = 0x00001f00;
        static constexpr unsigned MUXNEG(unsigned value) { return (value << 8); }
    } INPUTCTRL;

    volatile union CTRLC_T // CTRLC: Control C 
    {
        uint16_t reg;
        struct __attribute__((packed)) CTRLC_BIT_T
        {
            unsigned DIFFMODE : 1; // bit 0 Differential Mode
            unsigned LEFTADJ  : 1; // bit 1 Left-Adjusted Result
            unsigned FREERUN  : 1; // bit 2 Free Running Mode
            unsigned CORREN   : 1; // bit 3 Digital Correction Logic Enable
            unsigned RESSEL   : 2; // bits 4..5 Conversion Result Resolution
            unsigned          : 1; // bit 6 unused
            unsigned R2R      : 1; // bit 7 Rail-to-Rail mode enable
            unsigned WINMODE  : 3; // bits 8..10 Window Monitor Mode
            unsigned          : 1; // bit 11 unused
            unsigned DUALSEL  : 2; // bits 12..13 Dual Mode Trigger Selection
            unsigned          : 2; // bits 14..15 unused    
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
        static constexpr unsigned R2R_POS = 7;
        static constexpr unsigned R2R_MASK = 0x00000080;
        static constexpr unsigned R2R(unsigned value) { return (value << 7); }
        static constexpr unsigned WINMODE_POS = 8;
        static constexpr unsigned WINMODE_MASK = 0x00000700;
        static constexpr unsigned WINMODE(unsigned value) { return (value << 8); }
        static constexpr unsigned DUALSEL_POS = 12;
        static constexpr unsigned DUALSEL_MASK = 0x00003000;
        static constexpr unsigned DUALSEL(unsigned value) { return (value << 12); }
    } CTRLC;

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

    volatile union SAMPCTRL_T // SAMPCTRL: Sample Time Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) SAMPCTRL_BIT_T
        {
            unsigned SAMPLEN : 6; // bits 0..5 Sampling Time Length
            unsigned         : 1; // bit 6 unused
            unsigned OFFCOMP : 1; // bit 7 Comparator Offset Compensation Enable    
        } bit;
    
        static constexpr unsigned SAMPLEN_POS = 0;
        static constexpr unsigned SAMPLEN_MASK = 0x0000003f;
        static constexpr unsigned SAMPLEN(unsigned value) { return (value << 0); }
        static constexpr unsigned OFFCOMP_POS = 7;
        static constexpr unsigned OFFCOMP_MASK = 0x00000080;
        static constexpr unsigned OFFCOMP(unsigned value) { return (value << 7); }
    } SAMPCTRL;

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

    uint8_t Reserved1[2];

    volatile union SWTRIG_T // SWTRIG: Software Trigger 
    {
        uint8_t reg;
        struct __attribute__((packed)) SWTRIG_BIT_T
        {
            unsigned FLUSH : 1; // bit 0 ADC Flush
            unsigned START : 1; // bit 1 Start ADC Conversion
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned FLUSH_POS = 0;
        static constexpr unsigned FLUSH_MASK = 0x00000001;
        static constexpr unsigned FLUSH(unsigned value) { return (value << 0); }
        static constexpr unsigned START_POS = 1;
        static constexpr unsigned START_MASK = 0x00000002;
        static constexpr unsigned START(unsigned value) { return (value << 1); }
    } SWTRIG;

    uint8_t Reserved2[3];

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

    uint8_t Reserved3[3];

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint16_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST      : 1; // bit 0 SWRST Synchronization Busy
            unsigned ENABLE     : 1; // bit 1 ENABLE Synchronization Busy
            unsigned INPUTCTRL  : 1; // bit 2 INPUTCTRL Synchronization Busy
            unsigned CTRLC      : 1; // bit 3 CTRLC Synchronization Busy
            unsigned AVGCTRL    : 1; // bit 4 AVGCTRL Synchronization Busy
            unsigned SAMPCTRL   : 1; // bit 5 SAMPCTRL Synchronization Busy
            unsigned WINLT      : 1; // bit 6 WINLT Synchronization Busy
            unsigned WINUT      : 1; // bit 7 WINUT Synchronization Busy
            unsigned GAINCORR   : 1; // bit 8 GAINCORR Synchronization Busy
            unsigned OFFSETCORR : 1; // bit 9 OFFSETCTRL Synchronization Busy
            unsigned SWTRIG     : 1; // bit 10 SWTRG Synchronization Busy
            unsigned            : 5; // bits 11..15 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned INPUTCTRL_POS = 2;
        static constexpr unsigned INPUTCTRL_MASK = 0x00000004;
        static constexpr unsigned INPUTCTRL(unsigned value) { return (value << 2); }
        static constexpr unsigned CTRLC_POS = 3;
        static constexpr unsigned CTRLC_MASK = 0x00000008;
        static constexpr unsigned CTRLC(unsigned value) { return (value << 3); }
        static constexpr unsigned AVGCTRL_POS = 4;
        static constexpr unsigned AVGCTRL_MASK = 0x00000010;
        static constexpr unsigned AVGCTRL(unsigned value) { return (value << 4); }
        static constexpr unsigned SAMPCTRL_POS = 5;
        static constexpr unsigned SAMPCTRL_MASK = 0x00000020;
        static constexpr unsigned SAMPCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned WINLT_POS = 6;
        static constexpr unsigned WINLT_MASK = 0x00000040;
        static constexpr unsigned WINLT(unsigned value) { return (value << 6); }
        static constexpr unsigned WINUT_POS = 7;
        static constexpr unsigned WINUT_MASK = 0x00000080;
        static constexpr unsigned WINUT(unsigned value) { return (value << 7); }
        static constexpr unsigned GAINCORR_POS = 8;
        static constexpr unsigned GAINCORR_MASK = 0x00000100;
        static constexpr unsigned GAINCORR(unsigned value) { return (value << 8); }
        static constexpr unsigned OFFSETCORR_POS = 9;
        static constexpr unsigned OFFSETCORR_MASK = 0x00000200;
        static constexpr unsigned OFFSETCORR(unsigned value) { return (value << 9); }
        static constexpr unsigned SWTRIG_POS = 10;
        static constexpr unsigned SWTRIG_MASK = 0x00000400;
        static constexpr unsigned SWTRIG(unsigned value) { return (value << 10); }
    } SYNCBUSY;

    uint8_t Reserved4[2];

    volatile union RESULT_T // RESULT: Result 
    {
        uint16_t reg;
        struct __attribute__((packed)) RESULT_BIT_T
        {
            unsigned RESULT : 16; // bits 0..15 Result Value    
        } bit;
    
        static constexpr unsigned RESULT_POS = 0;
        static constexpr unsigned RESULT_MASK = 0x0000ffff;
        static constexpr unsigned RESULT(unsigned value) { return (value << 0); }
    } RESULT;

    uint8_t Reserved5[2];

    volatile union SEQCTRL_T // SEQCTRL: Sequence Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) SEQCTRL_BIT_T
        {
            unsigned SEQEN : 32; // bits 0..31 Enable Positive Input in the Sequence    
        } bit;
    
        static constexpr unsigned SEQEN_POS = 0;
        static constexpr unsigned SEQEN_MASK = 0xffffffff;
        static constexpr unsigned SEQEN(unsigned value) { return (value << 0); }
    } SEQCTRL;

    volatile union CALIB_T // CALIB: Calibration 
    {
        uint16_t reg;
        struct __attribute__((packed)) CALIB_BIT_T
        {
            unsigned BIASCOMP   : 3; // bits 0..2 Bias Comparator Scaling
            unsigned            : 5; // bits 3..7 unused
            unsigned BIASREFBUF : 3; // bits 8..10 Bias Reference Buffer Scaling
            unsigned            : 5; // bits 11..15 unused    
        } bit;
    
        static constexpr unsigned BIASCOMP_POS = 0;
        static constexpr unsigned BIASCOMP_MASK = 0x00000007;
        static constexpr unsigned BIASCOMP(unsigned value) { return (value << 0); }
        static constexpr unsigned BIASREFBUF_POS = 8;
        static constexpr unsigned BIASREFBUF_MASK = 0x00000700;
        static constexpr unsigned BIASREFBUF(unsigned value) { return (value << 8); }
    } CALIB;

}; // struct ADC0_T

static_assert(sizeof(ADC_T) == ADC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp