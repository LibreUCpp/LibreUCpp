#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) AC_T
{
    static constexpr size_t INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS = 0x42005000;

    static constexpr intptr_t ADDR_OFFSET_SCALER = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_COMPCTRL = 0x10;
    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x01;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x06;
    static constexpr intptr_t ADDR_OFFSET_STATUSA = 0x07;
    static constexpr intptr_t ADDR_OFFSET_STATUSB = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x09;
    static constexpr intptr_t ADDR_OFFSET_WINCTRL = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x20;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST  : 1; // bit 0 Software Reset
            unsigned ENABLE : 1; // bit 1 Enable
            unsigned        : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
    } CTRLA;

    volatile union CTRLB_T // CTRLB: Control B 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned START0 : 1; // bit 0 Comparator 0 Start Comparison
            unsigned START1 : 1; // bit 1 Comparator 1 Start Comparison
            unsigned START2 : 1; // bit 2 Comparator 2 Start Comparison
            unsigned START3 : 1; // bit 3 Comparator 3 Start Comparison
            unsigned        : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned START0_POS = 0;
        static constexpr unsigned START0_MASK = 0x00000001;
        static constexpr unsigned START0(unsigned value) { return (value << 0); }
        static constexpr unsigned START1_POS = 1;
        static constexpr unsigned START1_MASK = 0x00000002;
        static constexpr unsigned START1(unsigned value) { return (value << 1); }
        static constexpr unsigned START2_POS = 2;
        static constexpr unsigned START2_MASK = 0x00000004;
        static constexpr unsigned START2(unsigned value) { return (value << 2); }
        static constexpr unsigned START3_POS = 3;
        static constexpr unsigned START3_MASK = 0x00000008;
        static constexpr unsigned START3(unsigned value) { return (value << 3); }
    } CTRLB;

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned COMPEO0 : 1; // bit 0 Comparator 0 Event Output Enable
            unsigned COMPEO1 : 1; // bit 1 Comparator 1 Event Output Enable
            unsigned COMPEO2 : 1; // bit 2 Comparator 2 Event Output Enable
            unsigned COMPEO3 : 1; // bit 3 Comparator 3 Event Output Enable
            unsigned WINEO0  : 1; // bit 4 Window 0 Event Output Enable
            unsigned WINEO1  : 1; // bit 5 Window 1 Event Output Enable
            unsigned         : 2; // bits 6..7 unused
            unsigned COMPEI0 : 1; // bit 8 Comparator 0 Event Input Enable
            unsigned COMPEI1 : 1; // bit 9 Comparator 1 Event Input Enable
            unsigned COMPEI2 : 1; // bit 10 Comparator 2 Event Input Enable
            unsigned COMPEI3 : 1; // bit 11 Comparator 3 Event Input Enable
            unsigned INVEI0  : 1; // bit 12 Comparator 0 Input Event Invert Enable
            unsigned INVEI1  : 1; // bit 13 Comparator 1 Input Event Invert Enable
            unsigned INVEI2  : 1; // bit 14 Comparator 2 Input Event Invert Enable
            unsigned INVEI3  : 1; // bit 15 Comparator 3 Input Event Invert Enable    
        } bit;
    
        static constexpr unsigned COMPEO0_POS = 0;
        static constexpr unsigned COMPEO0_MASK = 0x00000001;
        static constexpr unsigned COMPEO0(unsigned value) { return (value << 0); }
        static constexpr unsigned COMPEO1_POS = 1;
        static constexpr unsigned COMPEO1_MASK = 0x00000002;
        static constexpr unsigned COMPEO1(unsigned value) { return (value << 1); }
        static constexpr unsigned COMPEO2_POS = 2;
        static constexpr unsigned COMPEO2_MASK = 0x00000004;
        static constexpr unsigned COMPEO2(unsigned value) { return (value << 2); }
        static constexpr unsigned COMPEO3_POS = 3;
        static constexpr unsigned COMPEO3_MASK = 0x00000008;
        static constexpr unsigned COMPEO3(unsigned value) { return (value << 3); }
        static constexpr unsigned WINEO0_POS = 4;
        static constexpr unsigned WINEO0_MASK = 0x00000010;
        static constexpr unsigned WINEO0(unsigned value) { return (value << 4); }
        static constexpr unsigned WINEO1_POS = 5;
        static constexpr unsigned WINEO1_MASK = 0x00000020;
        static constexpr unsigned WINEO1(unsigned value) { return (value << 5); }
        static constexpr unsigned COMPEI0_POS = 8;
        static constexpr unsigned COMPEI0_MASK = 0x00000100;
        static constexpr unsigned COMPEI0(unsigned value) { return (value << 8); }
        static constexpr unsigned COMPEI1_POS = 9;
        static constexpr unsigned COMPEI1_MASK = 0x00000200;
        static constexpr unsigned COMPEI1(unsigned value) { return (value << 9); }
        static constexpr unsigned COMPEI2_POS = 10;
        static constexpr unsigned COMPEI2_MASK = 0x00000400;
        static constexpr unsigned COMPEI2(unsigned value) { return (value << 10); }
        static constexpr unsigned COMPEI3_POS = 11;
        static constexpr unsigned COMPEI3_MASK = 0x00000800;
        static constexpr unsigned COMPEI3(unsigned value) { return (value << 11); }
        static constexpr unsigned INVEI0_POS = 12;
        static constexpr unsigned INVEI0_MASK = 0x00001000;
        static constexpr unsigned INVEI0(unsigned value) { return (value << 12); }
        static constexpr unsigned INVEI1_POS = 13;
        static constexpr unsigned INVEI1_MASK = 0x00002000;
        static constexpr unsigned INVEI1(unsigned value) { return (value << 13); }
        static constexpr unsigned INVEI2_POS = 14;
        static constexpr unsigned INVEI2_MASK = 0x00004000;
        static constexpr unsigned INVEI2(unsigned value) { return (value << 14); }
        static constexpr unsigned INVEI3_POS = 15;
        static constexpr unsigned INVEI3_MASK = 0x00008000;
        static constexpr unsigned INVEI3(unsigned value) { return (value << 15); }
    } EVCTRL;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned COMP0 : 1; // bit 0 Comparator 0 Interrupt Enable
            unsigned COMP1 : 1; // bit 1 Comparator 1 Interrupt Enable
            unsigned COMP2 : 1; // bit 2 Comparator 2 Interrupt Enable
            unsigned COMP3 : 1; // bit 3 Comparator 3 Interrupt Enable
            unsigned WIN0  : 1; // bit 4 Window 0 Interrupt Enable
            unsigned WIN1  : 1; // bit 5 Window 1 Interrupt Enable
            unsigned       : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned COMP0_POS = 0;
        static constexpr unsigned COMP0_MASK = 0x00000001;
        static constexpr unsigned COMP0(unsigned value) { return (value << 0); }
        static constexpr unsigned COMP1_POS = 1;
        static constexpr unsigned COMP1_MASK = 0x00000002;
        static constexpr unsigned COMP1(unsigned value) { return (value << 1); }
        static constexpr unsigned COMP2_POS = 2;
        static constexpr unsigned COMP2_MASK = 0x00000004;
        static constexpr unsigned COMP2(unsigned value) { return (value << 2); }
        static constexpr unsigned COMP3_POS = 3;
        static constexpr unsigned COMP3_MASK = 0x00000008;
        static constexpr unsigned COMP3(unsigned value) { return (value << 3); }
        static constexpr unsigned WIN0_POS = 4;
        static constexpr unsigned WIN0_MASK = 0x00000010;
        static constexpr unsigned WIN0(unsigned value) { return (value << 4); }
        static constexpr unsigned WIN1_POS = 5;
        static constexpr unsigned WIN1_MASK = 0x00000020;
        static constexpr unsigned WIN1(unsigned value) { return (value << 5); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned COMP0 : 1; // bit 0 Comparator 0 Interrupt Enable
            unsigned COMP1 : 1; // bit 1 Comparator 1 Interrupt Enable
            unsigned COMP2 : 1; // bit 2 Comparator 2 Interrupt Enable
            unsigned COMP3 : 1; // bit 3 Comparator 3 Interrupt Enable
            unsigned WIN0  : 1; // bit 4 Window 0 Interrupt Enable
            unsigned WIN1  : 1; // bit 5 Window 1 Interrupt Enable
            unsigned       : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned COMP0_POS = 0;
        static constexpr unsigned COMP0_MASK = 0x00000001;
        static constexpr unsigned COMP0(unsigned value) { return (value << 0); }
        static constexpr unsigned COMP1_POS = 1;
        static constexpr unsigned COMP1_MASK = 0x00000002;
        static constexpr unsigned COMP1(unsigned value) { return (value << 1); }
        static constexpr unsigned COMP2_POS = 2;
        static constexpr unsigned COMP2_MASK = 0x00000004;
        static constexpr unsigned COMP2(unsigned value) { return (value << 2); }
        static constexpr unsigned COMP3_POS = 3;
        static constexpr unsigned COMP3_MASK = 0x00000008;
        static constexpr unsigned COMP3(unsigned value) { return (value << 3); }
        static constexpr unsigned WIN0_POS = 4;
        static constexpr unsigned WIN0_MASK = 0x00000010;
        static constexpr unsigned WIN0(unsigned value) { return (value << 4); }
        static constexpr unsigned WIN1_POS = 5;
        static constexpr unsigned WIN1_MASK = 0x00000020;
        static constexpr unsigned WIN1(unsigned value) { return (value << 5); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned COMP0 : 1; // bit 0 Comparator 0
            unsigned COMP1 : 1; // bit 1 Comparator 1
            unsigned COMP2 : 1; // bit 2 Comparator 2
            unsigned COMP3 : 1; // bit 3 Comparator 3
            unsigned WIN0  : 1; // bit 4 Window 0
            unsigned WIN1  : 1; // bit 5 Window 1
            unsigned       : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned COMP0_POS = 0;
        static constexpr unsigned COMP0_MASK = 0x00000001;
        static constexpr unsigned COMP0(unsigned value) { return (value << 0); }
        static constexpr unsigned COMP1_POS = 1;
        static constexpr unsigned COMP1_MASK = 0x00000002;
        static constexpr unsigned COMP1(unsigned value) { return (value << 1); }
        static constexpr unsigned COMP2_POS = 2;
        static constexpr unsigned COMP2_MASK = 0x00000004;
        static constexpr unsigned COMP2(unsigned value) { return (value << 2); }
        static constexpr unsigned COMP3_POS = 3;
        static constexpr unsigned COMP3_MASK = 0x00000008;
        static constexpr unsigned COMP3(unsigned value) { return (value << 3); }
        static constexpr unsigned WIN0_POS = 4;
        static constexpr unsigned WIN0_MASK = 0x00000010;
        static constexpr unsigned WIN0(unsigned value) { return (value << 4); }
        static constexpr unsigned WIN1_POS = 5;
        static constexpr unsigned WIN1_MASK = 0x00000020;
        static constexpr unsigned WIN1(unsigned value) { return (value << 5); }
    } INTFLAG;

    volatile union STATUSA_T // STATUSA: Status A 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUSA_BIT_T
        {
            unsigned STATE0  : 1; // bit 0 Comparator 0 Current State
            unsigned STATE1  : 1; // bit 1 Comparator 1 Current State
            unsigned STATE2  : 1; // bit 2 Comparator 2 Current State
            unsigned STATE3  : 1; // bit 3 Comparator 3 Current State
            unsigned WSTATE0 : 2; // bits 4..5 Window 0 Current State
            unsigned WSTATE1 : 2; // bits 6..7 Window 1 Current State    
        } bit;
    
        static constexpr unsigned STATE0_POS = 0;
        static constexpr unsigned STATE0_MASK = 0x00000001;
        static constexpr unsigned STATE0(unsigned value) { return (value << 0); }
        static constexpr unsigned STATE1_POS = 1;
        static constexpr unsigned STATE1_MASK = 0x00000002;
        static constexpr unsigned STATE1(unsigned value) { return (value << 1); }
        static constexpr unsigned STATE2_POS = 2;
        static constexpr unsigned STATE2_MASK = 0x00000004;
        static constexpr unsigned STATE2(unsigned value) { return (value << 2); }
        static constexpr unsigned STATE3_POS = 3;
        static constexpr unsigned STATE3_MASK = 0x00000008;
        static constexpr unsigned STATE3(unsigned value) { return (value << 3); }
        static constexpr unsigned WSTATE0_POS = 4;
        static constexpr unsigned WSTATE0_MASK = 0x00000030;
        static constexpr unsigned WSTATE0(unsigned value) { return (value << 4); }
        static constexpr unsigned WSTATE1_POS = 6;
        static constexpr unsigned WSTATE1_MASK = 0x000000c0;
        static constexpr unsigned WSTATE1(unsigned value) { return (value << 6); }
    } STATUSA;

    volatile union STATUSB_T // STATUSB: Status B 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUSB_BIT_T
        {
            unsigned READY0 : 1; // bit 0 Comparator 0 Ready
            unsigned READY1 : 1; // bit 1 Comparator 1 Ready
            unsigned READY2 : 1; // bit 2 Comparator 2 Ready
            unsigned READY3 : 1; // bit 3 Comparator 3 Ready
            unsigned        : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned READY0_POS = 0;
        static constexpr unsigned READY0_MASK = 0x00000001;
        static constexpr unsigned READY0(unsigned value) { return (value << 0); }
        static constexpr unsigned READY1_POS = 1;
        static constexpr unsigned READY1_MASK = 0x00000002;
        static constexpr unsigned READY1(unsigned value) { return (value << 1); }
        static constexpr unsigned READY2_POS = 2;
        static constexpr unsigned READY2_MASK = 0x00000004;
        static constexpr unsigned READY2(unsigned value) { return (value << 2); }
        static constexpr unsigned READY3_POS = 3;
        static constexpr unsigned READY3_MASK = 0x00000008;
        static constexpr unsigned READY3(unsigned value) { return (value << 3); }
    } STATUSB;

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

    volatile union WINCTRL_T // WINCTRL: Window Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) WINCTRL_BIT_T
        {
            unsigned WEN0     : 1; // bit 0 Window 0 Mode Enable
            unsigned WINTSEL0 : 2; // bits 1..2 Window 0 Interrupt Selection
            unsigned          : 1; // bit 3 unused
            unsigned WEN1     : 1; // bit 4 Window 1 Mode Enable
            unsigned WINTSEL1 : 2; // bits 5..6 Window 1 Interrupt Selection
            unsigned          : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned WEN0_POS = 0;
        static constexpr unsigned WEN0_MASK = 0x00000001;
        static constexpr unsigned WEN0(unsigned value) { return (value << 0); }
        static constexpr unsigned WINTSEL0_POS = 1;
        static constexpr unsigned WINTSEL0_MASK = 0x00000006;
        static constexpr unsigned WINTSEL0(unsigned value) { return (value << 1); }
        static constexpr unsigned WEN1_POS = 4;
        static constexpr unsigned WEN1_MASK = 0x00000010;
        static constexpr unsigned WEN1(unsigned value) { return (value << 4); }
        static constexpr unsigned WINTSEL1_POS = 5;
        static constexpr unsigned WINTSEL1_MASK = 0x00000060;
        static constexpr unsigned WINTSEL1(unsigned value) { return (value << 5); }
    } WINCTRL;

    uint8_t Reserved1[1];

    volatile union SCALER_T // SCALER: Scaler n 
    {
        uint8_t reg;
        struct __attribute__((packed)) SCALER_BIT_T
        {
            unsigned VALUE : 6; // bits 0..5 Scaler Value
            unsigned       : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned VALUE_POS = 0;
        static constexpr unsigned VALUE_MASK = 0x0000003f;
        static constexpr unsigned VALUE(unsigned value) { return (value << 0); }
    } SCALER[4];

    volatile union COMPCTRL_T // COMPCTRL: Comparator Control n 
    {
        uint32_t reg;
        struct __attribute__((packed)) COMPCTRL_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned SINGLE   : 1; // bit 2 Single-Shot Mode
            unsigned INTSEL   : 2; // bits 3..4 Interrupt Selection
            unsigned          : 1; // bit 5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned          : 1; // bit 7 unused
            unsigned MUXNEG   : 3; // bits 8..10 Negative Input Mux Selection
            unsigned          : 1; // bit 11 unused
            unsigned MUXPOS   : 3; // bits 12..14 Positive Input Mux Selection
            unsigned SWAP     : 1; // bit 15 Swap Inputs and Invert
            unsigned SPEED    : 2; // bits 16..17 Speed Selection
            unsigned          : 1; // bit 18 unused
            unsigned HYSTEN   : 1; // bit 19 Hysteresis Enable
            unsigned          : 4; // bits 20..23 unused
            unsigned FLEN     : 3; // bits 24..26 Filter Length
            unsigned          : 1; // bit 27 unused
            unsigned OUT      : 2; // bits 28..29 Output
            unsigned          : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned SINGLE_POS = 2;
        static constexpr unsigned SINGLE_MASK = 0x00000004;
        static constexpr unsigned SINGLE(unsigned value) { return (value << 2); }
        static constexpr unsigned INTSEL_POS = 3;
        static constexpr unsigned INTSEL_MASK = 0x00000018;
        static constexpr unsigned INTSEL(unsigned value) { return (value << 3); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned MUXNEG_POS = 8;
        static constexpr unsigned MUXNEG_MASK = 0x00000700;
        static constexpr unsigned MUXNEG(unsigned value) { return (value << 8); }
        static constexpr unsigned MUXPOS_POS = 12;
        static constexpr unsigned MUXPOS_MASK = 0x00007000;
        static constexpr unsigned MUXPOS(unsigned value) { return (value << 12); }
        static constexpr unsigned SWAP_POS = 15;
        static constexpr unsigned SWAP_MASK = 0x00008000;
        static constexpr unsigned SWAP(unsigned value) { return (value << 15); }
        static constexpr unsigned SPEED_POS = 16;
        static constexpr unsigned SPEED_MASK = 0x00030000;
        static constexpr unsigned SPEED(unsigned value) { return (value << 16); }
        static constexpr unsigned HYSTEN_POS = 19;
        static constexpr unsigned HYSTEN_MASK = 0x00080000;
        static constexpr unsigned HYSTEN(unsigned value) { return (value << 19); }
        static constexpr unsigned FLEN_POS = 24;
        static constexpr unsigned FLEN_MASK = 0x07000000;
        static constexpr unsigned FLEN(unsigned value) { return (value << 24); }
        static constexpr unsigned OUT_POS = 28;
        static constexpr unsigned OUT_MASK = 0x30000000;
        static constexpr unsigned OUT(unsigned value) { return (value << 28); }
    } COMPCTRL[4];

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST     : 1; // bit 0 Software Reset Synchronization Busy
            unsigned ENABLE    : 1; // bit 1 Enable Synchronization Busy
            unsigned WINCTRL   : 1; // bit 2 WINCTRL Synchronization Busy
            unsigned COMPCTRL0 : 1; // bit 3 COMPCTRL 0 Synchronization Busy
            unsigned COMPCTRL1 : 1; // bit 4 COMPCTRL 1 Synchronization Busy
            unsigned COMPCTRL2 : 1; // bit 5 COMPCTRL 2 Synchronization Busy
            unsigned COMPCTRL3 : 1; // bit 6 COMPCTRL 3 Synchronization Busy
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned WINCTRL_POS = 2;
        static constexpr unsigned WINCTRL_MASK = 0x00000004;
        static constexpr unsigned WINCTRL(unsigned value) { return (value << 2); }
        static constexpr unsigned COMPCTRL0_POS = 3;
        static constexpr unsigned COMPCTRL0_MASK = 0x00000008;
        static constexpr unsigned COMPCTRL0(unsigned value) { return (value << 3); }
        static constexpr unsigned COMPCTRL1_POS = 4;
        static constexpr unsigned COMPCTRL1_MASK = 0x00000010;
        static constexpr unsigned COMPCTRL1(unsigned value) { return (value << 4); }
        static constexpr unsigned COMPCTRL2_POS = 5;
        static constexpr unsigned COMPCTRL2_MASK = 0x00000020;
        static constexpr unsigned COMPCTRL2(unsigned value) { return (value << 5); }
        static constexpr unsigned COMPCTRL3_POS = 6;
        static constexpr unsigned COMPCTRL3_MASK = 0x00000040;
        static constexpr unsigned COMPCTRL3(unsigned value) { return (value << 6); }
    } SYNCBUSY;

}; // struct AC_T

static_assert(sizeof(AC_T) == AC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp