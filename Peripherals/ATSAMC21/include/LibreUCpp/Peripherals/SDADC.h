#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SDADC_T
{
    static constexpr size_t INSTANCE_SIZE = 47;
    static constexpr size_t PADDED_INSTANCE_SIZE = 48;
    static constexpr intptr_t BASE_ADDRESS = 0x42004c00;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_REFCTRL = 0x01;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x02;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x05;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x06;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x07;
    static constexpr intptr_t ADDR_OFFSET_SEQSTATUS = 0x08;
    static constexpr intptr_t ADDR_OFFSET_INPUTCTRL = 0x09;
    static constexpr intptr_t ADDR_OFFSET_CTRLC = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_WINCTRL = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_WINLT = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_WINUT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_OFFSETCORR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_GAINCORR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_SHIFTCORR = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_SWTRIG = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x20;
    static constexpr intptr_t ADDR_OFFSET_RESULT = 0x24;
    static constexpr intptr_t ADDR_OFFSET_SEQCTRL = 0x28;
    static constexpr intptr_t ADDR_OFFSET_ANACTRL = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x2e;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Software Reset
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run during Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control    
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
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
    } CTRLA;

    volatile union REFCTRL_T // REFCTRL: Reference Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) REFCTRL_BIT_T
        {
            unsigned REFSEL   : 2; // bits 0..1 Reference Selection
            unsigned          : 2; // bits 2..3 unused
            unsigned REFRANGE : 2; // bits 4..5 Reference Range
            unsigned          : 1; // bit 6 unused
            unsigned ONREFBUF : 1; // bit 7 Reference Buffer    
        } bit;
    
        static constexpr unsigned REFSEL_POS = 0;
        static constexpr unsigned REFSEL_MASK = 0x00000003;
        static constexpr unsigned REFSEL(unsigned value) { return (value << 0); }
        static constexpr unsigned REFRANGE_POS = 4;
        static constexpr unsigned REFRANGE_MASK = 0x00000030;
        static constexpr unsigned REFRANGE(unsigned value) { return (value << 4); }
        static constexpr unsigned ONREFBUF_POS = 7;
        static constexpr unsigned ONREFBUF_MASK = 0x00000080;
        static constexpr unsigned ONREFBUF(unsigned value) { return (value << 7); }
    } REFCTRL;

    volatile union CTRLB_T // CTRLB: Control B 
    {
        uint16_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned PRESCALER : 8; // bits 0..7 Prescaler Configuration
            unsigned OSR       : 3; // bits 8..10 Over Sampling Ratio
            unsigned           : 1; // bit 11 unused
            unsigned SKPCNT    : 4; // bits 12..15 Skip Sample Count    
        } bit;
    
        static constexpr unsigned PRESCALER_POS = 0;
        static constexpr unsigned PRESCALER_MASK = 0x000000ff;
        static constexpr unsigned PRESCALER(unsigned value) { return (value << 0); }
        static constexpr unsigned OSR_POS = 8;
        static constexpr unsigned OSR_MASK = 0x00000700;
        static constexpr unsigned OSR(unsigned value) { return (value << 8); }
        static constexpr unsigned SKPCNT_POS = 12;
        static constexpr unsigned SKPCNT_MASK = 0x0000f000;
        static constexpr unsigned SKPCNT(unsigned value) { return (value << 12); }
    } CTRLB;

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned FLUSHEI  : 1; // bit 0 Flush Event Input Enable
            unsigned STARTEI  : 1; // bit 1 Start Conversion Event Input Enable
            unsigned FLUSHINV : 1; // bit 2 Flush Event Invert Enable
            unsigned STARTINV : 1; // bit 3 Satrt Event Invert Enable
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
            unsigned SEQSTATE : 4; // bits 0..3 Sequence State
            unsigned          : 3; // bits 4..6 unused
            unsigned SEQBUSY  : 1; // bit 7 Sequence Busy    
        } bit;
    
        static constexpr unsigned SEQSTATE_POS = 0;
        static constexpr unsigned SEQSTATE_MASK = 0x0000000f;
        static constexpr unsigned SEQSTATE(unsigned value) { return (value << 0); }
        static constexpr unsigned SEQBUSY_POS = 7;
        static constexpr unsigned SEQBUSY_MASK = 0x00000080;
        static constexpr unsigned SEQBUSY(unsigned value) { return (value << 7); }
    } SEQSTATUS;

    volatile union INPUTCTRL_T // INPUTCTRL: Input Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) INPUTCTRL_BIT_T
        {
            unsigned MUXSEL : 4; // bits 0..3 SDADC Input Selection
            unsigned        : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned MUXSEL_POS = 0;
        static constexpr unsigned MUXSEL_MASK = 0x0000000f;
        static constexpr unsigned MUXSEL(unsigned value) { return (value << 0); }
    } INPUTCTRL;

    volatile union CTRLC_T // CTRLC: Control C 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLC_BIT_T
        {
            unsigned FREERUN : 1; // bit 0 Free Running Mode
            unsigned         : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned FREERUN_POS = 0;
        static constexpr unsigned FREERUN_MASK = 0x00000001;
        static constexpr unsigned FREERUN(unsigned value) { return (value << 0); }
    } CTRLC;

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

    volatile union WINLT_T // WINLT: Window Monitor Lower Threshold 
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

    volatile union WINUT_T // WINUT: Window Monitor Upper Threshold 
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

    volatile union OFFSETCORR_T // OFFSETCORR: Offset Correction 
    {
        uint32_t reg;
        struct __attribute__((packed)) OFFSETCORR_BIT_T
        {
            unsigned OFFSETCORR : 24; // bits 0..23 Offset Correction Value
            unsigned            : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned OFFSETCORR_POS = 0;
        static constexpr unsigned OFFSETCORR_MASK = 0x00ffffff;
        static constexpr unsigned OFFSETCORR(unsigned value) { return (value << 0); }
    } OFFSETCORR;

    volatile union GAINCORR_T // GAINCORR: Gain Correction 
    {
        uint16_t reg;
        struct __attribute__((packed)) GAINCORR_BIT_T
        {
            unsigned GAINCORR : 14; // bits 0..13 Gain Correction Value
            unsigned          : 2; // bits 14..15 unused    
        } bit;
    
        static constexpr unsigned GAINCORR_POS = 0;
        static constexpr unsigned GAINCORR_MASK = 0x00003fff;
        static constexpr unsigned GAINCORR(unsigned value) { return (value << 0); }
    } GAINCORR;

    volatile union SHIFTCORR_T // SHIFTCORR: Shift Correction 
    {
        uint8_t reg;
        struct __attribute__((packed)) SHIFTCORR_BIT_T
        {
            unsigned SHIFTCORR : 4; // bits 0..3 Shift Correction Value
            unsigned           : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned SHIFTCORR_POS = 0;
        static constexpr unsigned SHIFTCORR_MASK = 0x0000000f;
        static constexpr unsigned SHIFTCORR(unsigned value) { return (value << 0); }
    } SHIFTCORR;

    uint8_t Reserved1[1];

    volatile union SWTRIG_T // SWTRIG: Software Trigger 
    {
        uint8_t reg;
        struct __attribute__((packed)) SWTRIG_BIT_T
        {
            unsigned FLUSH : 1; // bit 0 SDADC Flush
            unsigned START : 1; // bit 1 Start SDADC Conversion
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

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST      : 1; // bit 0 SWRST Synchronization Busy
            unsigned ENABLE     : 1; // bit 1 ENABLE Synchronization Busy
            unsigned CTRLC      : 1; // bit 2 CTRLC Synchronization Busy
            unsigned INPUTCTRL  : 1; // bit 3 INPUTCTRL Synchronization Busy
            unsigned WINCTRL    : 1; // bit 4 WINCTRL Synchronization Busy
            unsigned WINLT      : 1; // bit 5 WINLT Synchronization Busy
            unsigned WINUT      : 1; // bit 6 WINUT Synchronization Busy
            unsigned OFFSETCORR : 1; // bit 7 OFFSETCTRL Synchronization Busy
            unsigned GAINCORR   : 1; // bit 8 GAINCORR Synchronization Busy
            unsigned SHIFTCORR  : 1; // bit 9 SHIFTCORR Synchronization Busy
            unsigned SWTRIG     : 1; // bit 10 SWTRG Synchronization Busy
            unsigned ANACTRL    : 1; // bit 11 ANACTRL Synchronization Busy
            unsigned            : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned CTRLC_POS = 2;
        static constexpr unsigned CTRLC_MASK = 0x00000004;
        static constexpr unsigned CTRLC(unsigned value) { return (value << 2); }
        static constexpr unsigned INPUTCTRL_POS = 3;
        static constexpr unsigned INPUTCTRL_MASK = 0x00000008;
        static constexpr unsigned INPUTCTRL(unsigned value) { return (value << 3); }
        static constexpr unsigned WINCTRL_POS = 4;
        static constexpr unsigned WINCTRL_MASK = 0x00000010;
        static constexpr unsigned WINCTRL(unsigned value) { return (value << 4); }
        static constexpr unsigned WINLT_POS = 5;
        static constexpr unsigned WINLT_MASK = 0x00000020;
        static constexpr unsigned WINLT(unsigned value) { return (value << 5); }
        static constexpr unsigned WINUT_POS = 6;
        static constexpr unsigned WINUT_MASK = 0x00000040;
        static constexpr unsigned WINUT(unsigned value) { return (value << 6); }
        static constexpr unsigned OFFSETCORR_POS = 7;
        static constexpr unsigned OFFSETCORR_MASK = 0x00000080;
        static constexpr unsigned OFFSETCORR(unsigned value) { return (value << 7); }
        static constexpr unsigned GAINCORR_POS = 8;
        static constexpr unsigned GAINCORR_MASK = 0x00000100;
        static constexpr unsigned GAINCORR(unsigned value) { return (value << 8); }
        static constexpr unsigned SHIFTCORR_POS = 9;
        static constexpr unsigned SHIFTCORR_MASK = 0x00000200;
        static constexpr unsigned SHIFTCORR(unsigned value) { return (value << 9); }
        static constexpr unsigned SWTRIG_POS = 10;
        static constexpr unsigned SWTRIG_MASK = 0x00000400;
        static constexpr unsigned SWTRIG(unsigned value) { return (value << 10); }
        static constexpr unsigned ANACTRL_POS = 11;
        static constexpr unsigned ANACTRL_MASK = 0x00000800;
        static constexpr unsigned ANACTRL(unsigned value) { return (value << 11); }
    } SYNCBUSY;

    volatile union RESULT_T // RESULT: Result 
    {
        uint32_t reg;
        struct __attribute__((packed)) RESULT_BIT_T
        {
            unsigned RESULT : 24; // bits 0..23 Result Value
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned RESULT_POS = 0;
        static constexpr unsigned RESULT_MASK = 0x00ffffff;
        static constexpr unsigned RESULT(unsigned value) { return (value << 0); }
    } RESULT;

    volatile union SEQCTRL_T // SEQCTRL: Sequence Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) SEQCTRL_BIT_T
        {
            unsigned SEQEN : 3; // bits 0..2 Enable Positive Input in the Sequence
            unsigned       : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned SEQEN_POS = 0;
        static constexpr unsigned SEQEN_MASK = 0x00000007;
        static constexpr unsigned SEQEN(unsigned value) { return (value << 0); }
    } SEQCTRL;

    uint8_t Reserved3[3];

    volatile union ANACTRL_T // ANACTRL: Analog Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) ANACTRL_BIT_T
        {
            unsigned CTRSDADC : 6; // bits 0..5 SDADC Control
            unsigned ONCHOP   : 1; // bit 6 Chopper
            unsigned BUFTEST  : 1; // bit 7 BUFTEST    
        } bit;
    
        static constexpr unsigned CTRSDADC_POS = 0;
        static constexpr unsigned CTRSDADC_MASK = 0x0000003f;
        static constexpr unsigned CTRSDADC(unsigned value) { return (value << 0); }
        static constexpr unsigned ONCHOP_POS = 6;
        static constexpr unsigned ONCHOP_MASK = 0x00000040;
        static constexpr unsigned ONCHOP(unsigned value) { return (value << 6); }
        static constexpr unsigned BUFTEST_POS = 7;
        static constexpr unsigned BUFTEST_MASK = 0x00000080;
        static constexpr unsigned BUFTEST(unsigned value) { return (value << 7); }
    } ANACTRL;

    uint8_t Reserved4[1];

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

}; // struct SDADC_T

static_assert(sizeof(SDADC_T) == SDADC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp