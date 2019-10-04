#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TCC_T
{
    static constexpr size_t INSTANCE_SIZE = 128;
    static constexpr size_t PADDED_INSTANCE_SIZE = 128;
    static constexpr intptr_t BASE_ADDRESS_TCC0 = 0x42002400;
    static constexpr intptr_t BASE_ADDRESS_TCC1 = 0x42002800;
    static constexpr intptr_t BASE_ADDRESS_TCC2 = 0x42002c00;

    static constexpr intptr_t ADDR_OFFSET_CC = 0x44;
    static constexpr intptr_t ADDR_OFFSET_CCBUF = 0x70;
    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRLBCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CTRLBSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x08;
    static constexpr intptr_t ADDR_OFFSET_FCTRLA = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_FCTRLB = 0x10;
    static constexpr intptr_t ADDR_OFFSET_WEXCTRL = 0x14;
    static constexpr intptr_t ADDR_OFFSET_DRVCTRL = 0x18;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x1e;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x20;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x28;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x30;
    static constexpr intptr_t ADDR_OFFSET_COUNT = 0x34;
    static constexpr intptr_t ADDR_OFFSET_PATT = 0x38;
    static constexpr intptr_t ADDR_OFFSET_WAVE = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_PER = 0x40;
    static constexpr intptr_t ADDR_OFFSET_PATTBUF = 0x64;
    static constexpr intptr_t ADDR_OFFSET_PERBUF = 0x6c;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint32_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST      : 1; // bit 0 Software Reset
            unsigned ENABLE     : 1; // bit 1 Enable
            unsigned            : 3; // bits 2..4 unused
            unsigned RESOLUTION : 2; // bits 5..6 Enhanced Resolution
            unsigned            : 1; // bit 7 unused
            unsigned PRESCALER  : 3; // bits 8..10 Prescaler
            unsigned RUNSTDBY   : 1; // bit 11 Run in Standby
            unsigned PRESCSYNC  : 2; // bits 12..13 Prescaler and Counter Synchronization Selection
            unsigned ALOCK      : 1; // bit 14 Auto Lock
            unsigned MSYNC      : 1; // bit 15 Master Synchronization (only for TCC Slave Instance)
            unsigned            : 7; // bits 16..22 unused
            unsigned DMAOS      : 1; // bit 23 DMA One-shot Trigger Mode
            unsigned CPTEN0     : 1; // bit 24 Capture Channel 0 Enable
            unsigned CPTEN1     : 1; // bit 25 Capture Channel 1 Enable
            unsigned CPTEN2     : 1; // bit 26 Capture Channel 2 Enable
            unsigned CPTEN3     : 1; // bit 27 Capture Channel 3 Enable
            unsigned            : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RESOLUTION_POS = 5;
        static constexpr unsigned RESOLUTION_MASK = 0x00000060;
        static constexpr unsigned RESOLUTION(unsigned value) { return (value << 5); }
        static constexpr unsigned PRESCALER_POS = 8;
        static constexpr unsigned PRESCALER_MASK = 0x00000700;
        static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
        static constexpr unsigned RUNSTDBY_POS = 11;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000800;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 11); }
        static constexpr unsigned PRESCSYNC_POS = 12;
        static constexpr unsigned PRESCSYNC_MASK = 0x00003000;
        static constexpr unsigned PRESCSYNC(unsigned value) { return (value << 12); }
        static constexpr unsigned ALOCK_POS = 14;
        static constexpr unsigned ALOCK_MASK = 0x00004000;
        static constexpr unsigned ALOCK(unsigned value) { return (value << 14); }
        static constexpr unsigned MSYNC_POS = 15;
        static constexpr unsigned MSYNC_MASK = 0x00008000;
        static constexpr unsigned MSYNC(unsigned value) { return (value << 15); }
        static constexpr unsigned DMAOS_POS = 23;
        static constexpr unsigned DMAOS_MASK = 0x00800000;
        static constexpr unsigned DMAOS(unsigned value) { return (value << 23); }
        static constexpr unsigned CPTEN0_POS = 24;
        static constexpr unsigned CPTEN0_MASK = 0x01000000;
        static constexpr unsigned CPTEN0(unsigned value) { return (value << 24); }
        static constexpr unsigned CPTEN1_POS = 25;
        static constexpr unsigned CPTEN1_MASK = 0x02000000;
        static constexpr unsigned CPTEN1(unsigned value) { return (value << 25); }
        static constexpr unsigned CPTEN2_POS = 26;
        static constexpr unsigned CPTEN2_MASK = 0x04000000;
        static constexpr unsigned CPTEN2(unsigned value) { return (value << 26); }
        static constexpr unsigned CPTEN3_POS = 27;
        static constexpr unsigned CPTEN3_MASK = 0x08000000;
        static constexpr unsigned CPTEN3(unsigned value) { return (value << 27); }
    } CTRLA;

    volatile union CTRLBCLR_T // CTRLBCLR: Control B Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLBCLR_BIT_T
        {
            unsigned DIR     : 1; // bit 0 Counter Direction
            unsigned LUPD    : 1; // bit 1 Lock Update
            unsigned ONESHOT : 1; // bit 2 One-Shot
            unsigned IDXCMD  : 2; // bits 3..4 Ramp Index Command
            unsigned CMD     : 3; // bits 5..7 TCC Command    
        } bit;
    
        static constexpr unsigned DIR_POS = 0;
        static constexpr unsigned DIR_MASK = 0x00000001;
        static constexpr unsigned DIR(unsigned value) { return (value << 0); }
        static constexpr unsigned LUPD_POS = 1;
        static constexpr unsigned LUPD_MASK = 0x00000002;
        static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
        static constexpr unsigned ONESHOT_POS = 2;
        static constexpr unsigned ONESHOT_MASK = 0x00000004;
        static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
        static constexpr unsigned IDXCMD_POS = 3;
        static constexpr unsigned IDXCMD_MASK = 0x00000018;
        static constexpr unsigned IDXCMD(unsigned value) { return (value << 3); }
        static constexpr unsigned CMD_POS = 5;
        static constexpr unsigned CMD_MASK = 0x000000e0;
        static constexpr unsigned CMD(unsigned value) { return (value << 5); }
    } CTRLBCLR;

    volatile union CTRLBSET_T // CTRLBSET: Control B Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLBSET_BIT_T
        {
            unsigned DIR     : 1; // bit 0 Counter Direction
            unsigned LUPD    : 1; // bit 1 Lock Update
            unsigned ONESHOT : 1; // bit 2 One-Shot
            unsigned IDXCMD  : 2; // bits 3..4 Ramp Index Command
            unsigned CMD     : 3; // bits 5..7 TCC Command    
        } bit;
    
        static constexpr unsigned DIR_POS = 0;
        static constexpr unsigned DIR_MASK = 0x00000001;
        static constexpr unsigned DIR(unsigned value) { return (value << 0); }
        static constexpr unsigned LUPD_POS = 1;
        static constexpr unsigned LUPD_MASK = 0x00000002;
        static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
        static constexpr unsigned ONESHOT_POS = 2;
        static constexpr unsigned ONESHOT_MASK = 0x00000004;
        static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
        static constexpr unsigned IDXCMD_POS = 3;
        static constexpr unsigned IDXCMD_MASK = 0x00000018;
        static constexpr unsigned IDXCMD(unsigned value) { return (value << 3); }
        static constexpr unsigned CMD_POS = 5;
        static constexpr unsigned CMD_MASK = 0x000000e0;
        static constexpr unsigned CMD(unsigned value) { return (value << 5); }
    } CTRLBSET;

    uint8_t Reserved1[2];

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST  : 1; // bit 0 Swrst Busy
            unsigned ENABLE : 1; // bit 1 Enable Busy
            unsigned CTRLB  : 1; // bit 2 Ctrlb Busy
            unsigned STATUS : 1; // bit 3 Status Busy
            unsigned COUNT  : 1; // bit 4 Count Busy
            unsigned PATT   : 1; // bit 5 Pattern Busy
            unsigned WAVE   : 1; // bit 6 Wave Busy
            unsigned PER    : 1; // bit 7 Period Busy
            unsigned CC0    : 1; // bit 8 Compare Channel 0 Busy
            unsigned CC1    : 1; // bit 9 Compare Channel 1 Busy
            unsigned CC2    : 1; // bit 10 Compare Channel 2 Busy
            unsigned CC3    : 1; // bit 11 Compare Channel 3 Busy
            unsigned        : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned CTRLB_POS = 2;
        static constexpr unsigned CTRLB_MASK = 0x00000004;
        static constexpr unsigned CTRLB(unsigned value) { return (value << 2); }
        static constexpr unsigned STATUS_POS = 3;
        static constexpr unsigned STATUS_MASK = 0x00000008;
        static constexpr unsigned STATUS(unsigned value) { return (value << 3); }
        static constexpr unsigned COUNT_POS = 4;
        static constexpr unsigned COUNT_MASK = 0x00000010;
        static constexpr unsigned COUNT(unsigned value) { return (value << 4); }
        static constexpr unsigned PATT_POS = 5;
        static constexpr unsigned PATT_MASK = 0x00000020;
        static constexpr unsigned PATT(unsigned value) { return (value << 5); }
        static constexpr unsigned WAVE_POS = 6;
        static constexpr unsigned WAVE_MASK = 0x00000040;
        static constexpr unsigned WAVE(unsigned value) { return (value << 6); }
        static constexpr unsigned PER_POS = 7;
        static constexpr unsigned PER_MASK = 0x00000080;
        static constexpr unsigned PER(unsigned value) { return (value << 7); }
        static constexpr unsigned CC0_POS = 8;
        static constexpr unsigned CC0_MASK = 0x00000100;
        static constexpr unsigned CC0(unsigned value) { return (value << 8); }
        static constexpr unsigned CC1_POS = 9;
        static constexpr unsigned CC1_MASK = 0x00000200;
        static constexpr unsigned CC1(unsigned value) { return (value << 9); }
        static constexpr unsigned CC2_POS = 10;
        static constexpr unsigned CC2_MASK = 0x00000400;
        static constexpr unsigned CC2(unsigned value) { return (value << 10); }
        static constexpr unsigned CC3_POS = 11;
        static constexpr unsigned CC3_MASK = 0x00000800;
        static constexpr unsigned CC3(unsigned value) { return (value << 11); }
    } SYNCBUSY;

    volatile union FCTRLA_T // FCTRLA: Recoverable Fault A Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) FCTRLA_BIT_T
        {
            unsigned SRC        : 2; // bits 0..1 Fault A Source
            unsigned            : 1; // bit 2 unused
            unsigned KEEP       : 1; // bit 3 Fault A Keeper
            unsigned QUAL       : 1; // bit 4 Fault A Qualification
            unsigned BLANK      : 2; // bits 5..6 Fault A Blanking Mode
            unsigned RESTART    : 1; // bit 7 Fault A Restart
            unsigned HALT       : 2; // bits 8..9 Fault A Halt Mode
            unsigned CHSEL      : 2; // bits 10..11 Fault A Capture Channel
            unsigned CAPTURE    : 3; // bits 12..14 Fault A Capture Action
            unsigned BLANKPRESC : 1; // bit 15 Fault A Blanking Prescaler
            unsigned BLANKVAL   : 8; // bits 16..23 Fault A Blanking Time
            unsigned FILTERVAL  : 4; // bits 24..27 Fault A Filter Value
            unsigned            : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned SRC_POS = 0;
        static constexpr unsigned SRC_MASK = 0x00000003;
        static constexpr unsigned SRC(unsigned value) { return (value << 0); }
        static constexpr unsigned KEEP_POS = 3;
        static constexpr unsigned KEEP_MASK = 0x00000008;
        static constexpr unsigned KEEP(unsigned value) { return (value << 3); }
        static constexpr unsigned QUAL_POS = 4;
        static constexpr unsigned QUAL_MASK = 0x00000010;
        static constexpr unsigned QUAL(unsigned value) { return (value << 4); }
        static constexpr unsigned BLANK_POS = 5;
        static constexpr unsigned BLANK_MASK = 0x00000060;
        static constexpr unsigned BLANK(unsigned value) { return (value << 5); }
        static constexpr unsigned RESTART_POS = 7;
        static constexpr unsigned RESTART_MASK = 0x00000080;
        static constexpr unsigned RESTART(unsigned value) { return (value << 7); }
        static constexpr unsigned HALT_POS = 8;
        static constexpr unsigned HALT_MASK = 0x00000300;
        static constexpr unsigned HALT(unsigned value) { return (value << 8); }
        static constexpr unsigned CHSEL_POS = 10;
        static constexpr unsigned CHSEL_MASK = 0x00000c00;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 10); }
        static constexpr unsigned CAPTURE_POS = 12;
        static constexpr unsigned CAPTURE_MASK = 0x00007000;
        static constexpr unsigned CAPTURE(unsigned value) { return (value << 12); }
        static constexpr unsigned BLANKPRESC_POS = 15;
        static constexpr unsigned BLANKPRESC_MASK = 0x00008000;
        static constexpr unsigned BLANKPRESC(unsigned value) { return (value << 15); }
        static constexpr unsigned BLANKVAL_POS = 16;
        static constexpr unsigned BLANKVAL_MASK = 0x00ff0000;
        static constexpr unsigned BLANKVAL(unsigned value) { return (value << 16); }
        static constexpr unsigned FILTERVAL_POS = 24;
        static constexpr unsigned FILTERVAL_MASK = 0x0f000000;
        static constexpr unsigned FILTERVAL(unsigned value) { return (value << 24); }
    } FCTRLA;

    volatile union FCTRLB_T // FCTRLB: Recoverable Fault B Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) FCTRLB_BIT_T
        {
            unsigned SRC        : 2; // bits 0..1 Fault B Source
            unsigned            : 1; // bit 2 unused
            unsigned KEEP       : 1; // bit 3 Fault B Keeper
            unsigned QUAL       : 1; // bit 4 Fault B Qualification
            unsigned BLANK      : 2; // bits 5..6 Fault B Blanking Mode
            unsigned RESTART    : 1; // bit 7 Fault B Restart
            unsigned HALT       : 2; // bits 8..9 Fault B Halt Mode
            unsigned CHSEL      : 2; // bits 10..11 Fault B Capture Channel
            unsigned CAPTURE    : 3; // bits 12..14 Fault B Capture Action
            unsigned BLANKPRESC : 1; // bit 15 Fault B Blanking Prescaler
            unsigned BLANKVAL   : 8; // bits 16..23 Fault B Blanking Time
            unsigned FILTERVAL  : 4; // bits 24..27 Fault B Filter Value
            unsigned            : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned SRC_POS = 0;
        static constexpr unsigned SRC_MASK = 0x00000003;
        static constexpr unsigned SRC(unsigned value) { return (value << 0); }
        static constexpr unsigned KEEP_POS = 3;
        static constexpr unsigned KEEP_MASK = 0x00000008;
        static constexpr unsigned KEEP(unsigned value) { return (value << 3); }
        static constexpr unsigned QUAL_POS = 4;
        static constexpr unsigned QUAL_MASK = 0x00000010;
        static constexpr unsigned QUAL(unsigned value) { return (value << 4); }
        static constexpr unsigned BLANK_POS = 5;
        static constexpr unsigned BLANK_MASK = 0x00000060;
        static constexpr unsigned BLANK(unsigned value) { return (value << 5); }
        static constexpr unsigned RESTART_POS = 7;
        static constexpr unsigned RESTART_MASK = 0x00000080;
        static constexpr unsigned RESTART(unsigned value) { return (value << 7); }
        static constexpr unsigned HALT_POS = 8;
        static constexpr unsigned HALT_MASK = 0x00000300;
        static constexpr unsigned HALT(unsigned value) { return (value << 8); }
        static constexpr unsigned CHSEL_POS = 10;
        static constexpr unsigned CHSEL_MASK = 0x00000c00;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 10); }
        static constexpr unsigned CAPTURE_POS = 12;
        static constexpr unsigned CAPTURE_MASK = 0x00007000;
        static constexpr unsigned CAPTURE(unsigned value) { return (value << 12); }
        static constexpr unsigned BLANKPRESC_POS = 15;
        static constexpr unsigned BLANKPRESC_MASK = 0x00008000;
        static constexpr unsigned BLANKPRESC(unsigned value) { return (value << 15); }
        static constexpr unsigned BLANKVAL_POS = 16;
        static constexpr unsigned BLANKVAL_MASK = 0x00ff0000;
        static constexpr unsigned BLANKVAL(unsigned value) { return (value << 16); }
        static constexpr unsigned FILTERVAL_POS = 24;
        static constexpr unsigned FILTERVAL_MASK = 0x0f000000;
        static constexpr unsigned FILTERVAL(unsigned value) { return (value << 24); }
    } FCTRLB;

    volatile union WEXCTRL_T // WEXCTRL: Waveform Extension Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) WEXCTRL_BIT_T
        {
            unsigned OTMX   : 2; // bits 0..1 Output Matrix
            unsigned        : 6; // bits 2..7 unused
            unsigned DTIEN0 : 1; // bit 8 Dead-time Insertion Generator 0 Enable
            unsigned DTIEN1 : 1; // bit 9 Dead-time Insertion Generator 1 Enable
            unsigned DTIEN2 : 1; // bit 10 Dead-time Insertion Generator 2 Enable
            unsigned DTIEN3 : 1; // bit 11 Dead-time Insertion Generator 3 Enable
            unsigned        : 4; // bits 12..15 unused
            unsigned DTLS   : 8; // bits 16..23 Dead-time Low Side Outputs Value
            unsigned DTHS   : 8; // bits 24..31 Dead-time High Side Outputs Value    
        } bit;
    
        static constexpr unsigned OTMX_POS = 0;
        static constexpr unsigned OTMX_MASK = 0x00000003;
        static constexpr unsigned OTMX(unsigned value) { return (value << 0); }
        static constexpr unsigned DTIEN0_POS = 8;
        static constexpr unsigned DTIEN0_MASK = 0x00000100;
        static constexpr unsigned DTIEN0(unsigned value) { return (value << 8); }
        static constexpr unsigned DTIEN1_POS = 9;
        static constexpr unsigned DTIEN1_MASK = 0x00000200;
        static constexpr unsigned DTIEN1(unsigned value) { return (value << 9); }
        static constexpr unsigned DTIEN2_POS = 10;
        static constexpr unsigned DTIEN2_MASK = 0x00000400;
        static constexpr unsigned DTIEN2(unsigned value) { return (value << 10); }
        static constexpr unsigned DTIEN3_POS = 11;
        static constexpr unsigned DTIEN3_MASK = 0x00000800;
        static constexpr unsigned DTIEN3(unsigned value) { return (value << 11); }
        static constexpr unsigned DTLS_POS = 16;
        static constexpr unsigned DTLS_MASK = 0x00ff0000;
        static constexpr unsigned DTLS(unsigned value) { return (value << 16); }
        static constexpr unsigned DTHS_POS = 24;
        static constexpr unsigned DTHS_MASK = 0xff000000;
        static constexpr unsigned DTHS(unsigned value) { return (value << 24); }
    } WEXCTRL;

    volatile union DRVCTRL_T // DRVCTRL: Driver Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) DRVCTRL_BIT_T
        {
            unsigned NRE0       : 1; // bit 0 Non-Recoverable State 0 Output Enable
            unsigned NRE1       : 1; // bit 1 Non-Recoverable State 1 Output Enable
            unsigned NRE2       : 1; // bit 2 Non-Recoverable State 2 Output Enable
            unsigned NRE3       : 1; // bit 3 Non-Recoverable State 3 Output Enable
            unsigned NRE4       : 1; // bit 4 Non-Recoverable State 4 Output Enable
            unsigned NRE5       : 1; // bit 5 Non-Recoverable State 5 Output Enable
            unsigned NRE6       : 1; // bit 6 Non-Recoverable State 6 Output Enable
            unsigned NRE7       : 1; // bit 7 Non-Recoverable State 7 Output Enable
            unsigned NRV0       : 1; // bit 8 Non-Recoverable State 0 Output Value
            unsigned NRV1       : 1; // bit 9 Non-Recoverable State 1 Output Value
            unsigned NRV2       : 1; // bit 10 Non-Recoverable State 2 Output Value
            unsigned NRV3       : 1; // bit 11 Non-Recoverable State 3 Output Value
            unsigned NRV4       : 1; // bit 12 Non-Recoverable State 4 Output Value
            unsigned NRV5       : 1; // bit 13 Non-Recoverable State 5 Output Value
            unsigned NRV6       : 1; // bit 14 Non-Recoverable State 6 Output Value
            unsigned NRV7       : 1; // bit 15 Non-Recoverable State 7 Output Value
            unsigned INVEN0     : 1; // bit 16 Output Waveform 0 Inversion
            unsigned INVEN1     : 1; // bit 17 Output Waveform 1 Inversion
            unsigned INVEN2     : 1; // bit 18 Output Waveform 2 Inversion
            unsigned INVEN3     : 1; // bit 19 Output Waveform 3 Inversion
            unsigned INVEN4     : 1; // bit 20 Output Waveform 4 Inversion
            unsigned INVEN5     : 1; // bit 21 Output Waveform 5 Inversion
            unsigned INVEN6     : 1; // bit 22 Output Waveform 6 Inversion
            unsigned INVEN7     : 1; // bit 23 Output Waveform 7 Inversion
            unsigned FILTERVAL0 : 4; // bits 24..27 Non-Recoverable Fault Input 0 Filter Value
            unsigned FILTERVAL1 : 4; // bits 28..31 Non-Recoverable Fault Input 1 Filter Value    
        } bit;
    
        static constexpr unsigned NRE0_POS = 0;
        static constexpr unsigned NRE0_MASK = 0x00000001;
        static constexpr unsigned NRE0(unsigned value) { return (value << 0); }
        static constexpr unsigned NRE1_POS = 1;
        static constexpr unsigned NRE1_MASK = 0x00000002;
        static constexpr unsigned NRE1(unsigned value) { return (value << 1); }
        static constexpr unsigned NRE2_POS = 2;
        static constexpr unsigned NRE2_MASK = 0x00000004;
        static constexpr unsigned NRE2(unsigned value) { return (value << 2); }
        static constexpr unsigned NRE3_POS = 3;
        static constexpr unsigned NRE3_MASK = 0x00000008;
        static constexpr unsigned NRE3(unsigned value) { return (value << 3); }
        static constexpr unsigned NRE4_POS = 4;
        static constexpr unsigned NRE4_MASK = 0x00000010;
        static constexpr unsigned NRE4(unsigned value) { return (value << 4); }
        static constexpr unsigned NRE5_POS = 5;
        static constexpr unsigned NRE5_MASK = 0x00000020;
        static constexpr unsigned NRE5(unsigned value) { return (value << 5); }
        static constexpr unsigned NRE6_POS = 6;
        static constexpr unsigned NRE6_MASK = 0x00000040;
        static constexpr unsigned NRE6(unsigned value) { return (value << 6); }
        static constexpr unsigned NRE7_POS = 7;
        static constexpr unsigned NRE7_MASK = 0x00000080;
        static constexpr unsigned NRE7(unsigned value) { return (value << 7); }
        static constexpr unsigned NRV0_POS = 8;
        static constexpr unsigned NRV0_MASK = 0x00000100;
        static constexpr unsigned NRV0(unsigned value) { return (value << 8); }
        static constexpr unsigned NRV1_POS = 9;
        static constexpr unsigned NRV1_MASK = 0x00000200;
        static constexpr unsigned NRV1(unsigned value) { return (value << 9); }
        static constexpr unsigned NRV2_POS = 10;
        static constexpr unsigned NRV2_MASK = 0x00000400;
        static constexpr unsigned NRV2(unsigned value) { return (value << 10); }
        static constexpr unsigned NRV3_POS = 11;
        static constexpr unsigned NRV3_MASK = 0x00000800;
        static constexpr unsigned NRV3(unsigned value) { return (value << 11); }
        static constexpr unsigned NRV4_POS = 12;
        static constexpr unsigned NRV4_MASK = 0x00001000;
        static constexpr unsigned NRV4(unsigned value) { return (value << 12); }
        static constexpr unsigned NRV5_POS = 13;
        static constexpr unsigned NRV5_MASK = 0x00002000;
        static constexpr unsigned NRV5(unsigned value) { return (value << 13); }
        static constexpr unsigned NRV6_POS = 14;
        static constexpr unsigned NRV6_MASK = 0x00004000;
        static constexpr unsigned NRV6(unsigned value) { return (value << 14); }
        static constexpr unsigned NRV7_POS = 15;
        static constexpr unsigned NRV7_MASK = 0x00008000;
        static constexpr unsigned NRV7(unsigned value) { return (value << 15); }
        static constexpr unsigned INVEN0_POS = 16;
        static constexpr unsigned INVEN0_MASK = 0x00010000;
        static constexpr unsigned INVEN0(unsigned value) { return (value << 16); }
        static constexpr unsigned INVEN1_POS = 17;
        static constexpr unsigned INVEN1_MASK = 0x00020000;
        static constexpr unsigned INVEN1(unsigned value) { return (value << 17); }
        static constexpr unsigned INVEN2_POS = 18;
        static constexpr unsigned INVEN2_MASK = 0x00040000;
        static constexpr unsigned INVEN2(unsigned value) { return (value << 18); }
        static constexpr unsigned INVEN3_POS = 19;
        static constexpr unsigned INVEN3_MASK = 0x00080000;
        static constexpr unsigned INVEN3(unsigned value) { return (value << 19); }
        static constexpr unsigned INVEN4_POS = 20;
        static constexpr unsigned INVEN4_MASK = 0x00100000;
        static constexpr unsigned INVEN4(unsigned value) { return (value << 20); }
        static constexpr unsigned INVEN5_POS = 21;
        static constexpr unsigned INVEN5_MASK = 0x00200000;
        static constexpr unsigned INVEN5(unsigned value) { return (value << 21); }
        static constexpr unsigned INVEN6_POS = 22;
        static constexpr unsigned INVEN6_MASK = 0x00400000;
        static constexpr unsigned INVEN6(unsigned value) { return (value << 22); }
        static constexpr unsigned INVEN7_POS = 23;
        static constexpr unsigned INVEN7_MASK = 0x00800000;
        static constexpr unsigned INVEN7(unsigned value) { return (value << 23); }
        static constexpr unsigned FILTERVAL0_POS = 24;
        static constexpr unsigned FILTERVAL0_MASK = 0x0f000000;
        static constexpr unsigned FILTERVAL0(unsigned value) { return (value << 24); }
        static constexpr unsigned FILTERVAL1_POS = 28;
        static constexpr unsigned FILTERVAL1_MASK = 0xf0000000;
        static constexpr unsigned FILTERVAL1(unsigned value) { return (value << 28); }
    } DRVCTRL;

    uint8_t Reserved2[2];

    volatile union DBGCTRL_T // DBGCTRL: Debug Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) DBGCTRL_BIT_T
        {
            unsigned DBGRUN : 1; // bit 0 Debug Running Mode
            unsigned        : 1; // bit 1 unused
            unsigned FDDBD  : 1; // bit 2 Fault Detection on Debug Break Detection
            unsigned        : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned DBGRUN_POS = 0;
        static constexpr unsigned DBGRUN_MASK = 0x00000001;
        static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
        static constexpr unsigned FDDBD_POS = 2;
        static constexpr unsigned FDDBD_MASK = 0x00000004;
        static constexpr unsigned FDDBD(unsigned value) { return (value << 2); }
    } DBGCTRL;

    uint8_t Reserved3[1];

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned EVACT0 : 3; // bits 0..2 Timer/counter Input Event0 Action
            unsigned EVACT1 : 3; // bits 3..5 Timer/counter Input Event1 Action
            unsigned CNTSEL : 2; // bits 6..7 Timer/counter Output Event Mode
            unsigned OVFEO  : 1; // bit 8 Overflow/Underflow Output Event Enable
            unsigned TRGEO  : 1; // bit 9 Retrigger Output Event Enable
            unsigned CNTEO  : 1; // bit 10 Timer/counter Output Event Enable
            unsigned        : 1; // bit 11 unused
            unsigned TCINV0 : 1; // bit 12 Inverted Event 0 Input Enable
            unsigned TCINV1 : 1; // bit 13 Inverted Event 1 Input Enable
            unsigned TCEI0  : 1; // bit 14 Timer/counter Event 0 Input Enable
            unsigned TCEI1  : 1; // bit 15 Timer/counter Event 1 Input Enable
            unsigned MCEI0  : 1; // bit 16 Match or Capture Channel 0 Event Input Enable
            unsigned MCEI1  : 1; // bit 17 Match or Capture Channel 1 Event Input Enable
            unsigned MCEI2  : 1; // bit 18 Match or Capture Channel 2 Event Input Enable
            unsigned MCEI3  : 1; // bit 19 Match or Capture Channel 3 Event Input Enable
            unsigned        : 4; // bits 20..23 unused
            unsigned MCEO0  : 1; // bit 24 Match or Capture Channel 0 Event Output Enable
            unsigned MCEO1  : 1; // bit 25 Match or Capture Channel 1 Event Output Enable
            unsigned MCEO2  : 1; // bit 26 Match or Capture Channel 2 Event Output Enable
            unsigned MCEO3  : 1; // bit 27 Match or Capture Channel 3 Event Output Enable
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EVACT0_POS = 0;
        static constexpr unsigned EVACT0_MASK = 0x00000007;
        static constexpr unsigned EVACT0(unsigned value) { return (value << 0); }
        static constexpr unsigned EVACT1_POS = 3;
        static constexpr unsigned EVACT1_MASK = 0x00000038;
        static constexpr unsigned EVACT1(unsigned value) { return (value << 3); }
        static constexpr unsigned CNTSEL_POS = 6;
        static constexpr unsigned CNTSEL_MASK = 0x000000c0;
        static constexpr unsigned CNTSEL(unsigned value) { return (value << 6); }
        static constexpr unsigned OVFEO_POS = 8;
        static constexpr unsigned OVFEO_MASK = 0x00000100;
        static constexpr unsigned OVFEO(unsigned value) { return (value << 8); }
        static constexpr unsigned TRGEO_POS = 9;
        static constexpr unsigned TRGEO_MASK = 0x00000200;
        static constexpr unsigned TRGEO(unsigned value) { return (value << 9); }
        static constexpr unsigned CNTEO_POS = 10;
        static constexpr unsigned CNTEO_MASK = 0x00000400;
        static constexpr unsigned CNTEO(unsigned value) { return (value << 10); }
        static constexpr unsigned TCINV0_POS = 12;
        static constexpr unsigned TCINV0_MASK = 0x00001000;
        static constexpr unsigned TCINV0(unsigned value) { return (value << 12); }
        static constexpr unsigned TCINV1_POS = 13;
        static constexpr unsigned TCINV1_MASK = 0x00002000;
        static constexpr unsigned TCINV1(unsigned value) { return (value << 13); }
        static constexpr unsigned TCEI0_POS = 14;
        static constexpr unsigned TCEI0_MASK = 0x00004000;
        static constexpr unsigned TCEI0(unsigned value) { return (value << 14); }
        static constexpr unsigned TCEI1_POS = 15;
        static constexpr unsigned TCEI1_MASK = 0x00008000;
        static constexpr unsigned TCEI1(unsigned value) { return (value << 15); }
        static constexpr unsigned MCEI0_POS = 16;
        static constexpr unsigned MCEI0_MASK = 0x00010000;
        static constexpr unsigned MCEI0(unsigned value) { return (value << 16); }
        static constexpr unsigned MCEI1_POS = 17;
        static constexpr unsigned MCEI1_MASK = 0x00020000;
        static constexpr unsigned MCEI1(unsigned value) { return (value << 17); }
        static constexpr unsigned MCEI2_POS = 18;
        static constexpr unsigned MCEI2_MASK = 0x00040000;
        static constexpr unsigned MCEI2(unsigned value) { return (value << 18); }
        static constexpr unsigned MCEI3_POS = 19;
        static constexpr unsigned MCEI3_MASK = 0x00080000;
        static constexpr unsigned MCEI3(unsigned value) { return (value << 19); }
        static constexpr unsigned MCEO0_POS = 24;
        static constexpr unsigned MCEO0_MASK = 0x01000000;
        static constexpr unsigned MCEO0(unsigned value) { return (value << 24); }
        static constexpr unsigned MCEO1_POS = 25;
        static constexpr unsigned MCEO1_MASK = 0x02000000;
        static constexpr unsigned MCEO1(unsigned value) { return (value << 25); }
        static constexpr unsigned MCEO2_POS = 26;
        static constexpr unsigned MCEO2_MASK = 0x04000000;
        static constexpr unsigned MCEO2(unsigned value) { return (value << 26); }
        static constexpr unsigned MCEO3_POS = 27;
        static constexpr unsigned MCEO3_MASK = 0x08000000;
        static constexpr unsigned MCEO3(unsigned value) { return (value << 27); }
    } EVCTRL;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned OVF    : 1; // bit 0 Overflow Interrupt Enable
            unsigned TRG    : 1; // bit 1 Retrigger Interrupt Enable
            unsigned CNT    : 1; // bit 2 Counter Interrupt Enable
            unsigned ERR    : 1; // bit 3 Error Interrupt Enable
            unsigned        : 6; // bits 4..9 unused
            unsigned UFS    : 1; // bit 10 Non-Recoverable Update Fault Interrupt Enable
            unsigned DFS    : 1; // bit 11 Non-Recoverable Debug Fault Interrupt Enable
            unsigned FAULTA : 1; // bit 12 Recoverable Fault A Interrupt Enable
            unsigned FAULTB : 1; // bit 13 Recoverable Fault B Interrupt Enable
            unsigned FAULT0 : 1; // bit 14 Non-Recoverable Fault 0 Interrupt Enable
            unsigned FAULT1 : 1; // bit 15 Non-Recoverable Fault 1 Interrupt Enable
            unsigned MC0    : 1; // bit 16 Match or Capture Channel 0 Interrupt Enable
            unsigned MC1    : 1; // bit 17 Match or Capture Channel 1 Interrupt Enable
            unsigned MC2    : 1; // bit 18 Match or Capture Channel 2 Interrupt Enable
            unsigned MC3    : 1; // bit 19 Match or Capture Channel 3 Interrupt Enable
            unsigned        : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned OVF_POS = 0;
        static constexpr unsigned OVF_MASK = 0x00000001;
        static constexpr unsigned OVF(unsigned value) { return (value << 0); }
        static constexpr unsigned TRG_POS = 1;
        static constexpr unsigned TRG_MASK = 0x00000002;
        static constexpr unsigned TRG(unsigned value) { return (value << 1); }
        static constexpr unsigned CNT_POS = 2;
        static constexpr unsigned CNT_MASK = 0x00000004;
        static constexpr unsigned CNT(unsigned value) { return (value << 2); }
        static constexpr unsigned ERR_POS = 3;
        static constexpr unsigned ERR_MASK = 0x00000008;
        static constexpr unsigned ERR(unsigned value) { return (value << 3); }
        static constexpr unsigned UFS_POS = 10;
        static constexpr unsigned UFS_MASK = 0x00000400;
        static constexpr unsigned UFS(unsigned value) { return (value << 10); }
        static constexpr unsigned DFS_POS = 11;
        static constexpr unsigned DFS_MASK = 0x00000800;
        static constexpr unsigned DFS(unsigned value) { return (value << 11); }
        static constexpr unsigned FAULTA_POS = 12;
        static constexpr unsigned FAULTA_MASK = 0x00001000;
        static constexpr unsigned FAULTA(unsigned value) { return (value << 12); }
        static constexpr unsigned FAULTB_POS = 13;
        static constexpr unsigned FAULTB_MASK = 0x00002000;
        static constexpr unsigned FAULTB(unsigned value) { return (value << 13); }
        static constexpr unsigned FAULT0_POS = 14;
        static constexpr unsigned FAULT0_MASK = 0x00004000;
        static constexpr unsigned FAULT0(unsigned value) { return (value << 14); }
        static constexpr unsigned FAULT1_POS = 15;
        static constexpr unsigned FAULT1_MASK = 0x00008000;
        static constexpr unsigned FAULT1(unsigned value) { return (value << 15); }
        static constexpr unsigned MC0_POS = 16;
        static constexpr unsigned MC0_MASK = 0x00010000;
        static constexpr unsigned MC0(unsigned value) { return (value << 16); }
        static constexpr unsigned MC1_POS = 17;
        static constexpr unsigned MC1_MASK = 0x00020000;
        static constexpr unsigned MC1(unsigned value) { return (value << 17); }
        static constexpr unsigned MC2_POS = 18;
        static constexpr unsigned MC2_MASK = 0x00040000;
        static constexpr unsigned MC2(unsigned value) { return (value << 18); }
        static constexpr unsigned MC3_POS = 19;
        static constexpr unsigned MC3_MASK = 0x00080000;
        static constexpr unsigned MC3(unsigned value) { return (value << 19); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned OVF    : 1; // bit 0 Overflow Interrupt Enable
            unsigned TRG    : 1; // bit 1 Retrigger Interrupt Enable
            unsigned CNT    : 1; // bit 2 Counter Interrupt Enable
            unsigned ERR    : 1; // bit 3 Error Interrupt Enable
            unsigned        : 6; // bits 4..9 unused
            unsigned UFS    : 1; // bit 10 Non-Recoverable Update Fault Interrupt Enable
            unsigned DFS    : 1; // bit 11 Non-Recoverable Debug Fault Interrupt Enable
            unsigned FAULTA : 1; // bit 12 Recoverable Fault A Interrupt Enable
            unsigned FAULTB : 1; // bit 13 Recoverable Fault B Interrupt Enable
            unsigned FAULT0 : 1; // bit 14 Non-Recoverable Fault 0 Interrupt Enable
            unsigned FAULT1 : 1; // bit 15 Non-Recoverable Fault 1 Interrupt Enable
            unsigned MC0    : 1; // bit 16 Match or Capture Channel 0 Interrupt Enable
            unsigned MC1    : 1; // bit 17 Match or Capture Channel 1 Interrupt Enable
            unsigned MC2    : 1; // bit 18 Match or Capture Channel 2 Interrupt Enable
            unsigned MC3    : 1; // bit 19 Match or Capture Channel 3 Interrupt Enable
            unsigned        : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned OVF_POS = 0;
        static constexpr unsigned OVF_MASK = 0x00000001;
        static constexpr unsigned OVF(unsigned value) { return (value << 0); }
        static constexpr unsigned TRG_POS = 1;
        static constexpr unsigned TRG_MASK = 0x00000002;
        static constexpr unsigned TRG(unsigned value) { return (value << 1); }
        static constexpr unsigned CNT_POS = 2;
        static constexpr unsigned CNT_MASK = 0x00000004;
        static constexpr unsigned CNT(unsigned value) { return (value << 2); }
        static constexpr unsigned ERR_POS = 3;
        static constexpr unsigned ERR_MASK = 0x00000008;
        static constexpr unsigned ERR(unsigned value) { return (value << 3); }
        static constexpr unsigned UFS_POS = 10;
        static constexpr unsigned UFS_MASK = 0x00000400;
        static constexpr unsigned UFS(unsigned value) { return (value << 10); }
        static constexpr unsigned DFS_POS = 11;
        static constexpr unsigned DFS_MASK = 0x00000800;
        static constexpr unsigned DFS(unsigned value) { return (value << 11); }
        static constexpr unsigned FAULTA_POS = 12;
        static constexpr unsigned FAULTA_MASK = 0x00001000;
        static constexpr unsigned FAULTA(unsigned value) { return (value << 12); }
        static constexpr unsigned FAULTB_POS = 13;
        static constexpr unsigned FAULTB_MASK = 0x00002000;
        static constexpr unsigned FAULTB(unsigned value) { return (value << 13); }
        static constexpr unsigned FAULT0_POS = 14;
        static constexpr unsigned FAULT0_MASK = 0x00004000;
        static constexpr unsigned FAULT0(unsigned value) { return (value << 14); }
        static constexpr unsigned FAULT1_POS = 15;
        static constexpr unsigned FAULT1_MASK = 0x00008000;
        static constexpr unsigned FAULT1(unsigned value) { return (value << 15); }
        static constexpr unsigned MC0_POS = 16;
        static constexpr unsigned MC0_MASK = 0x00010000;
        static constexpr unsigned MC0(unsigned value) { return (value << 16); }
        static constexpr unsigned MC1_POS = 17;
        static constexpr unsigned MC1_MASK = 0x00020000;
        static constexpr unsigned MC1(unsigned value) { return (value << 17); }
        static constexpr unsigned MC2_POS = 18;
        static constexpr unsigned MC2_MASK = 0x00040000;
        static constexpr unsigned MC2(unsigned value) { return (value << 18); }
        static constexpr unsigned MC3_POS = 19;
        static constexpr unsigned MC3_MASK = 0x00080000;
        static constexpr unsigned MC3(unsigned value) { return (value << 19); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned OVF    : 1; // bit 0 Overflow
            unsigned TRG    : 1; // bit 1 Retrigger
            unsigned CNT    : 1; // bit 2 Counter
            unsigned ERR    : 1; // bit 3 Error
            unsigned        : 6; // bits 4..9 unused
            unsigned UFS    : 1; // bit 10 Non-Recoverable Update Fault
            unsigned DFS    : 1; // bit 11 Non-Recoverable Debug Fault
            unsigned FAULTA : 1; // bit 12 Recoverable Fault A
            unsigned FAULTB : 1; // bit 13 Recoverable Fault B
            unsigned FAULT0 : 1; // bit 14 Non-Recoverable Fault 0
            unsigned FAULT1 : 1; // bit 15 Non-Recoverable Fault 1
            unsigned MC0    : 1; // bit 16 Match or Capture 0
            unsigned MC1    : 1; // bit 17 Match or Capture 1
            unsigned MC2    : 1; // bit 18 Match or Capture 2
            unsigned MC3    : 1; // bit 19 Match or Capture 3
            unsigned        : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned OVF_POS = 0;
        static constexpr unsigned OVF_MASK = 0x00000001;
        static constexpr unsigned OVF(unsigned value) { return (value << 0); }
        static constexpr unsigned TRG_POS = 1;
        static constexpr unsigned TRG_MASK = 0x00000002;
        static constexpr unsigned TRG(unsigned value) { return (value << 1); }
        static constexpr unsigned CNT_POS = 2;
        static constexpr unsigned CNT_MASK = 0x00000004;
        static constexpr unsigned CNT(unsigned value) { return (value << 2); }
        static constexpr unsigned ERR_POS = 3;
        static constexpr unsigned ERR_MASK = 0x00000008;
        static constexpr unsigned ERR(unsigned value) { return (value << 3); }
        static constexpr unsigned UFS_POS = 10;
        static constexpr unsigned UFS_MASK = 0x00000400;
        static constexpr unsigned UFS(unsigned value) { return (value << 10); }
        static constexpr unsigned DFS_POS = 11;
        static constexpr unsigned DFS_MASK = 0x00000800;
        static constexpr unsigned DFS(unsigned value) { return (value << 11); }
        static constexpr unsigned FAULTA_POS = 12;
        static constexpr unsigned FAULTA_MASK = 0x00001000;
        static constexpr unsigned FAULTA(unsigned value) { return (value << 12); }
        static constexpr unsigned FAULTB_POS = 13;
        static constexpr unsigned FAULTB_MASK = 0x00002000;
        static constexpr unsigned FAULTB(unsigned value) { return (value << 13); }
        static constexpr unsigned FAULT0_POS = 14;
        static constexpr unsigned FAULT0_MASK = 0x00004000;
        static constexpr unsigned FAULT0(unsigned value) { return (value << 14); }
        static constexpr unsigned FAULT1_POS = 15;
        static constexpr unsigned FAULT1_MASK = 0x00008000;
        static constexpr unsigned FAULT1(unsigned value) { return (value << 15); }
        static constexpr unsigned MC0_POS = 16;
        static constexpr unsigned MC0_MASK = 0x00010000;
        static constexpr unsigned MC0(unsigned value) { return (value << 16); }
        static constexpr unsigned MC1_POS = 17;
        static constexpr unsigned MC1_MASK = 0x00020000;
        static constexpr unsigned MC1(unsigned value) { return (value << 17); }
        static constexpr unsigned MC2_POS = 18;
        static constexpr unsigned MC2_MASK = 0x00040000;
        static constexpr unsigned MC2(unsigned value) { return (value << 18); }
        static constexpr unsigned MC3_POS = 19;
        static constexpr unsigned MC3_MASK = 0x00080000;
        static constexpr unsigned MC3(unsigned value) { return (value << 19); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned STOP     : 1; // bit 0 Stop
            unsigned IDX      : 1; // bit 1 Ramp
            unsigned UFS      : 1; // bit 2 Non-recoverable Update Fault State
            unsigned DFS      : 1; // bit 3 Non-Recoverable Debug Fault State
            unsigned SLAVE    : 1; // bit 4 Slave
            unsigned PATTBUFV : 1; // bit 5 Pattern Buffer Valid
            unsigned          : 1; // bit 6 unused
            unsigned PERBUFV  : 1; // bit 7 Period Buffer Valid
            unsigned FAULTAIN : 1; // bit 8 Recoverable Fault A Input
            unsigned FAULTBIN : 1; // bit 9 Recoverable Fault B Input
            unsigned FAULT0IN : 1; // bit 10 Non-Recoverable Fault0 Input
            unsigned FAULT1IN : 1; // bit 11 Non-Recoverable Fault1 Input
            unsigned FAULTA   : 1; // bit 12 Recoverable Fault A State
            unsigned FAULTB   : 1; // bit 13 Recoverable Fault B State
            unsigned FAULT0   : 1; // bit 14 Non-Recoverable Fault 0 State
            unsigned FAULT1   : 1; // bit 15 Non-Recoverable Fault 1 State
            unsigned CCBUFV0  : 1; // bit 16 Compare Channel 0 Buffer Valid
            unsigned CCBUFV1  : 1; // bit 17 Compare Channel 1 Buffer Valid
            unsigned CCBUFV2  : 1; // bit 18 Compare Channel 2 Buffer Valid
            unsigned CCBUFV3  : 1; // bit 19 Compare Channel 3 Buffer Valid
            unsigned          : 4; // bits 20..23 unused
            unsigned CMP0     : 1; // bit 24 Compare Channel 0 Value
            unsigned CMP1     : 1; // bit 25 Compare Channel 1 Value
            unsigned CMP2     : 1; // bit 26 Compare Channel 2 Value
            unsigned CMP3     : 1; // bit 27 Compare Channel 3 Value
            unsigned          : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned STOP_POS = 0;
        static constexpr unsigned STOP_MASK = 0x00000001;
        static constexpr unsigned STOP(unsigned value) { return (value << 0); }
        static constexpr unsigned IDX_POS = 1;
        static constexpr unsigned IDX_MASK = 0x00000002;
        static constexpr unsigned IDX(unsigned value) { return (value << 1); }
        static constexpr unsigned UFS_POS = 2;
        static constexpr unsigned UFS_MASK = 0x00000004;
        static constexpr unsigned UFS(unsigned value) { return (value << 2); }
        static constexpr unsigned DFS_POS = 3;
        static constexpr unsigned DFS_MASK = 0x00000008;
        static constexpr unsigned DFS(unsigned value) { return (value << 3); }
        static constexpr unsigned SLAVE_POS = 4;
        static constexpr unsigned SLAVE_MASK = 0x00000010;
        static constexpr unsigned SLAVE(unsigned value) { return (value << 4); }
        static constexpr unsigned PATTBUFV_POS = 5;
        static constexpr unsigned PATTBUFV_MASK = 0x00000020;
        static constexpr unsigned PATTBUFV(unsigned value) { return (value << 5); }
        static constexpr unsigned PERBUFV_POS = 7;
        static constexpr unsigned PERBUFV_MASK = 0x00000080;
        static constexpr unsigned PERBUFV(unsigned value) { return (value << 7); }
        static constexpr unsigned FAULTAIN_POS = 8;
        static constexpr unsigned FAULTAIN_MASK = 0x00000100;
        static constexpr unsigned FAULTAIN(unsigned value) { return (value << 8); }
        static constexpr unsigned FAULTBIN_POS = 9;
        static constexpr unsigned FAULTBIN_MASK = 0x00000200;
        static constexpr unsigned FAULTBIN(unsigned value) { return (value << 9); }
        static constexpr unsigned FAULT0IN_POS = 10;
        static constexpr unsigned FAULT0IN_MASK = 0x00000400;
        static constexpr unsigned FAULT0IN(unsigned value) { return (value << 10); }
        static constexpr unsigned FAULT1IN_POS = 11;
        static constexpr unsigned FAULT1IN_MASK = 0x00000800;
        static constexpr unsigned FAULT1IN(unsigned value) { return (value << 11); }
        static constexpr unsigned FAULTA_POS = 12;
        static constexpr unsigned FAULTA_MASK = 0x00001000;
        static constexpr unsigned FAULTA(unsigned value) { return (value << 12); }
        static constexpr unsigned FAULTB_POS = 13;
        static constexpr unsigned FAULTB_MASK = 0x00002000;
        static constexpr unsigned FAULTB(unsigned value) { return (value << 13); }
        static constexpr unsigned FAULT0_POS = 14;
        static constexpr unsigned FAULT0_MASK = 0x00004000;
        static constexpr unsigned FAULT0(unsigned value) { return (value << 14); }
        static constexpr unsigned FAULT1_POS = 15;
        static constexpr unsigned FAULT1_MASK = 0x00008000;
        static constexpr unsigned FAULT1(unsigned value) { return (value << 15); }
        static constexpr unsigned CCBUFV0_POS = 16;
        static constexpr unsigned CCBUFV0_MASK = 0x00010000;
        static constexpr unsigned CCBUFV0(unsigned value) { return (value << 16); }
        static constexpr unsigned CCBUFV1_POS = 17;
        static constexpr unsigned CCBUFV1_MASK = 0x00020000;
        static constexpr unsigned CCBUFV1(unsigned value) { return (value << 17); }
        static constexpr unsigned CCBUFV2_POS = 18;
        static constexpr unsigned CCBUFV2_MASK = 0x00040000;
        static constexpr unsigned CCBUFV2(unsigned value) { return (value << 18); }
        static constexpr unsigned CCBUFV3_POS = 19;
        static constexpr unsigned CCBUFV3_MASK = 0x00080000;
        static constexpr unsigned CCBUFV3(unsigned value) { return (value << 19); }
        static constexpr unsigned CMP0_POS = 24;
        static constexpr unsigned CMP0_MASK = 0x01000000;
        static constexpr unsigned CMP0(unsigned value) { return (value << 24); }
        static constexpr unsigned CMP1_POS = 25;
        static constexpr unsigned CMP1_MASK = 0x02000000;
        static constexpr unsigned CMP1(unsigned value) { return (value << 25); }
        static constexpr unsigned CMP2_POS = 26;
        static constexpr unsigned CMP2_MASK = 0x04000000;
        static constexpr unsigned CMP2(unsigned value) { return (value << 26); }
        static constexpr unsigned CMP3_POS = 27;
        static constexpr unsigned CMP3_MASK = 0x08000000;
        static constexpr unsigned CMP3(unsigned value) { return (value << 27); }
    } STATUS;

    volatile union COUNT_T // COUNT: Count 
    {
        uint32_t reg;
        struct __attribute__((packed)) COUNT_BIT_T
        {
            unsigned COUNT : 24; // bits 0..23 Counter Value
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned COUNT_POS = 0;
        static constexpr unsigned COUNT_MASK = 0x00ffffff;
        static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
    } COUNT;

    volatile union PATT_T // PATT: Pattern 
    {
        uint16_t reg;
        struct __attribute__((packed)) PATT_BIT_T
        {
            unsigned PGE0 : 1; // bit 0 Pattern Generator 0 Output Enable
            unsigned PGE1 : 1; // bit 1 Pattern Generator 1 Output Enable
            unsigned PGE2 : 1; // bit 2 Pattern Generator 2 Output Enable
            unsigned PGE3 : 1; // bit 3 Pattern Generator 3 Output Enable
            unsigned PGE4 : 1; // bit 4 Pattern Generator 4 Output Enable
            unsigned PGE5 : 1; // bit 5 Pattern Generator 5 Output Enable
            unsigned PGE6 : 1; // bit 6 Pattern Generator 6 Output Enable
            unsigned PGE7 : 1; // bit 7 Pattern Generator 7 Output Enable
            unsigned PGV0 : 1; // bit 8 Pattern Generator 0 Output Value
            unsigned PGV1 : 1; // bit 9 Pattern Generator 1 Output Value
            unsigned PGV2 : 1; // bit 10 Pattern Generator 2 Output Value
            unsigned PGV3 : 1; // bit 11 Pattern Generator 3 Output Value
            unsigned PGV4 : 1; // bit 12 Pattern Generator 4 Output Value
            unsigned PGV5 : 1; // bit 13 Pattern Generator 5 Output Value
            unsigned PGV6 : 1; // bit 14 Pattern Generator 6 Output Value
            unsigned PGV7 : 1; // bit 15 Pattern Generator 7 Output Value    
        } bit;
    
        static constexpr unsigned PGE0_POS = 0;
        static constexpr unsigned PGE0_MASK = 0x00000001;
        static constexpr unsigned PGE0(unsigned value) { return (value << 0); }
        static constexpr unsigned PGE1_POS = 1;
        static constexpr unsigned PGE1_MASK = 0x00000002;
        static constexpr unsigned PGE1(unsigned value) { return (value << 1); }
        static constexpr unsigned PGE2_POS = 2;
        static constexpr unsigned PGE2_MASK = 0x00000004;
        static constexpr unsigned PGE2(unsigned value) { return (value << 2); }
        static constexpr unsigned PGE3_POS = 3;
        static constexpr unsigned PGE3_MASK = 0x00000008;
        static constexpr unsigned PGE3(unsigned value) { return (value << 3); }
        static constexpr unsigned PGE4_POS = 4;
        static constexpr unsigned PGE4_MASK = 0x00000010;
        static constexpr unsigned PGE4(unsigned value) { return (value << 4); }
        static constexpr unsigned PGE5_POS = 5;
        static constexpr unsigned PGE5_MASK = 0x00000020;
        static constexpr unsigned PGE5(unsigned value) { return (value << 5); }
        static constexpr unsigned PGE6_POS = 6;
        static constexpr unsigned PGE6_MASK = 0x00000040;
        static constexpr unsigned PGE6(unsigned value) { return (value << 6); }
        static constexpr unsigned PGE7_POS = 7;
        static constexpr unsigned PGE7_MASK = 0x00000080;
        static constexpr unsigned PGE7(unsigned value) { return (value << 7); }
        static constexpr unsigned PGV0_POS = 8;
        static constexpr unsigned PGV0_MASK = 0x00000100;
        static constexpr unsigned PGV0(unsigned value) { return (value << 8); }
        static constexpr unsigned PGV1_POS = 9;
        static constexpr unsigned PGV1_MASK = 0x00000200;
        static constexpr unsigned PGV1(unsigned value) { return (value << 9); }
        static constexpr unsigned PGV2_POS = 10;
        static constexpr unsigned PGV2_MASK = 0x00000400;
        static constexpr unsigned PGV2(unsigned value) { return (value << 10); }
        static constexpr unsigned PGV3_POS = 11;
        static constexpr unsigned PGV3_MASK = 0x00000800;
        static constexpr unsigned PGV3(unsigned value) { return (value << 11); }
        static constexpr unsigned PGV4_POS = 12;
        static constexpr unsigned PGV4_MASK = 0x00001000;
        static constexpr unsigned PGV4(unsigned value) { return (value << 12); }
        static constexpr unsigned PGV5_POS = 13;
        static constexpr unsigned PGV5_MASK = 0x00002000;
        static constexpr unsigned PGV5(unsigned value) { return (value << 13); }
        static constexpr unsigned PGV6_POS = 14;
        static constexpr unsigned PGV6_MASK = 0x00004000;
        static constexpr unsigned PGV6(unsigned value) { return (value << 14); }
        static constexpr unsigned PGV7_POS = 15;
        static constexpr unsigned PGV7_MASK = 0x00008000;
        static constexpr unsigned PGV7(unsigned value) { return (value << 15); }
    } PATT;

    uint8_t Reserved4[2];

    volatile union WAVE_T // WAVE: Waveform Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) WAVE_BIT_T
        {
            unsigned WAVEGEN : 3; // bits 0..2 Waveform Generation
            unsigned         : 1; // bit 3 unused
            unsigned RAMP    : 2; // bits 4..5 Ramp Mode
            unsigned         : 1; // bit 6 unused
            unsigned CIPEREN : 1; // bit 7 Circular period Enable
            unsigned CICCEN0 : 1; // bit 8 Circular Channel 0 Enable
            unsigned CICCEN1 : 1; // bit 9 Circular Channel 1 Enable
            unsigned CICCEN2 : 1; // bit 10 Circular Channel 2 Enable
            unsigned CICCEN3 : 1; // bit 11 Circular Channel 3 Enable
            unsigned         : 4; // bits 12..15 unused
            unsigned POL0    : 1; // bit 16 Channel 0 Polarity
            unsigned POL1    : 1; // bit 17 Channel 1 Polarity
            unsigned POL2    : 1; // bit 18 Channel 2 Polarity
            unsigned POL3    : 1; // bit 19 Channel 3 Polarity
            unsigned         : 4; // bits 20..23 unused
            unsigned SWAP0   : 1; // bit 24 Swap DTI Output Pair 0
            unsigned SWAP1   : 1; // bit 25 Swap DTI Output Pair 1
            unsigned SWAP2   : 1; // bit 26 Swap DTI Output Pair 2
            unsigned SWAP3   : 1; // bit 27 Swap DTI Output Pair 3
            unsigned         : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned WAVEGEN_POS = 0;
        static constexpr unsigned WAVEGEN_MASK = 0x00000007;
        static constexpr unsigned WAVEGEN(unsigned value) { return (value << 0); }
        static constexpr unsigned RAMP_POS = 4;
        static constexpr unsigned RAMP_MASK = 0x00000030;
        static constexpr unsigned RAMP(unsigned value) { return (value << 4); }
        static constexpr unsigned CIPEREN_POS = 7;
        static constexpr unsigned CIPEREN_MASK = 0x00000080;
        static constexpr unsigned CIPEREN(unsigned value) { return (value << 7); }
        static constexpr unsigned CICCEN0_POS = 8;
        static constexpr unsigned CICCEN0_MASK = 0x00000100;
        static constexpr unsigned CICCEN0(unsigned value) { return (value << 8); }
        static constexpr unsigned CICCEN1_POS = 9;
        static constexpr unsigned CICCEN1_MASK = 0x00000200;
        static constexpr unsigned CICCEN1(unsigned value) { return (value << 9); }
        static constexpr unsigned CICCEN2_POS = 10;
        static constexpr unsigned CICCEN2_MASK = 0x00000400;
        static constexpr unsigned CICCEN2(unsigned value) { return (value << 10); }
        static constexpr unsigned CICCEN3_POS = 11;
        static constexpr unsigned CICCEN3_MASK = 0x00000800;
        static constexpr unsigned CICCEN3(unsigned value) { return (value << 11); }
        static constexpr unsigned POL0_POS = 16;
        static constexpr unsigned POL0_MASK = 0x00010000;
        static constexpr unsigned POL0(unsigned value) { return (value << 16); }
        static constexpr unsigned POL1_POS = 17;
        static constexpr unsigned POL1_MASK = 0x00020000;
        static constexpr unsigned POL1(unsigned value) { return (value << 17); }
        static constexpr unsigned POL2_POS = 18;
        static constexpr unsigned POL2_MASK = 0x00040000;
        static constexpr unsigned POL2(unsigned value) { return (value << 18); }
        static constexpr unsigned POL3_POS = 19;
        static constexpr unsigned POL3_MASK = 0x00080000;
        static constexpr unsigned POL3(unsigned value) { return (value << 19); }
        static constexpr unsigned SWAP0_POS = 24;
        static constexpr unsigned SWAP0_MASK = 0x01000000;
        static constexpr unsigned SWAP0(unsigned value) { return (value << 24); }
        static constexpr unsigned SWAP1_POS = 25;
        static constexpr unsigned SWAP1_MASK = 0x02000000;
        static constexpr unsigned SWAP1(unsigned value) { return (value << 25); }
        static constexpr unsigned SWAP2_POS = 26;
        static constexpr unsigned SWAP2_MASK = 0x04000000;
        static constexpr unsigned SWAP2(unsigned value) { return (value << 26); }
        static constexpr unsigned SWAP3_POS = 27;
        static constexpr unsigned SWAP3_MASK = 0x08000000;
        static constexpr unsigned SWAP3(unsigned value) { return (value << 27); }
    } WAVE;

    volatile union PER_T // PER: Period 
    {
        uint32_t reg;
        struct __attribute__((packed)) PER_BIT_T
        {
            unsigned PER : 24; // bits 0..23 Period Value
            unsigned     : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned PER_POS = 0;
        static constexpr unsigned PER_MASK = 0x00ffffff;
        static constexpr unsigned PER(unsigned value) { return (value << 0); }
    } PER;

    volatile union CC_T // CC: Compare and Capture 
    {
        uint32_t reg;
        struct __attribute__((packed)) CC_BIT_T
        {
            unsigned CC : 24; // bits 0..23 Channel Compare/Capture Value
            unsigned    : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CC_POS = 0;
        static constexpr unsigned CC_MASK = 0x00ffffff;
        static constexpr unsigned CC(unsigned value) { return (value << 0); }
    } CC[4];

    uint8_t Reserved5[16];

    volatile union PATTBUF_T // PATTBUF: Pattern Buffer 
    {
        uint16_t reg;
        struct __attribute__((packed)) PATTBUF_BIT_T
        {
            unsigned PGEB0 : 1; // bit 0 Pattern Generator 0 Output Enable Buffer
            unsigned PGEB1 : 1; // bit 1 Pattern Generator 1 Output Enable Buffer
            unsigned PGEB2 : 1; // bit 2 Pattern Generator 2 Output Enable Buffer
            unsigned PGEB3 : 1; // bit 3 Pattern Generator 3 Output Enable Buffer
            unsigned PGEB4 : 1; // bit 4 Pattern Generator 4 Output Enable Buffer
            unsigned PGEB5 : 1; // bit 5 Pattern Generator 5 Output Enable Buffer
            unsigned PGEB6 : 1; // bit 6 Pattern Generator 6 Output Enable Buffer
            unsigned PGEB7 : 1; // bit 7 Pattern Generator 7 Output Enable Buffer
            unsigned PGVB0 : 1; // bit 8 Pattern Generator 0 Output Enable
            unsigned PGVB1 : 1; // bit 9 Pattern Generator 1 Output Enable
            unsigned PGVB2 : 1; // bit 10 Pattern Generator 2 Output Enable
            unsigned PGVB3 : 1; // bit 11 Pattern Generator 3 Output Enable
            unsigned PGVB4 : 1; // bit 12 Pattern Generator 4 Output Enable
            unsigned PGVB5 : 1; // bit 13 Pattern Generator 5 Output Enable
            unsigned PGVB6 : 1; // bit 14 Pattern Generator 6 Output Enable
            unsigned PGVB7 : 1; // bit 15 Pattern Generator 7 Output Enable    
        } bit;
    
        static constexpr unsigned PGEB0_POS = 0;
        static constexpr unsigned PGEB0_MASK = 0x00000001;
        static constexpr unsigned PGEB0(unsigned value) { return (value << 0); }
        static constexpr unsigned PGEB1_POS = 1;
        static constexpr unsigned PGEB1_MASK = 0x00000002;
        static constexpr unsigned PGEB1(unsigned value) { return (value << 1); }
        static constexpr unsigned PGEB2_POS = 2;
        static constexpr unsigned PGEB2_MASK = 0x00000004;
        static constexpr unsigned PGEB2(unsigned value) { return (value << 2); }
        static constexpr unsigned PGEB3_POS = 3;
        static constexpr unsigned PGEB3_MASK = 0x00000008;
        static constexpr unsigned PGEB3(unsigned value) { return (value << 3); }
        static constexpr unsigned PGEB4_POS = 4;
        static constexpr unsigned PGEB4_MASK = 0x00000010;
        static constexpr unsigned PGEB4(unsigned value) { return (value << 4); }
        static constexpr unsigned PGEB5_POS = 5;
        static constexpr unsigned PGEB5_MASK = 0x00000020;
        static constexpr unsigned PGEB5(unsigned value) { return (value << 5); }
        static constexpr unsigned PGEB6_POS = 6;
        static constexpr unsigned PGEB6_MASK = 0x00000040;
        static constexpr unsigned PGEB6(unsigned value) { return (value << 6); }
        static constexpr unsigned PGEB7_POS = 7;
        static constexpr unsigned PGEB7_MASK = 0x00000080;
        static constexpr unsigned PGEB7(unsigned value) { return (value << 7); }
        static constexpr unsigned PGVB0_POS = 8;
        static constexpr unsigned PGVB0_MASK = 0x00000100;
        static constexpr unsigned PGVB0(unsigned value) { return (value << 8); }
        static constexpr unsigned PGVB1_POS = 9;
        static constexpr unsigned PGVB1_MASK = 0x00000200;
        static constexpr unsigned PGVB1(unsigned value) { return (value << 9); }
        static constexpr unsigned PGVB2_POS = 10;
        static constexpr unsigned PGVB2_MASK = 0x00000400;
        static constexpr unsigned PGVB2(unsigned value) { return (value << 10); }
        static constexpr unsigned PGVB3_POS = 11;
        static constexpr unsigned PGVB3_MASK = 0x00000800;
        static constexpr unsigned PGVB3(unsigned value) { return (value << 11); }
        static constexpr unsigned PGVB4_POS = 12;
        static constexpr unsigned PGVB4_MASK = 0x00001000;
        static constexpr unsigned PGVB4(unsigned value) { return (value << 12); }
        static constexpr unsigned PGVB5_POS = 13;
        static constexpr unsigned PGVB5_MASK = 0x00002000;
        static constexpr unsigned PGVB5(unsigned value) { return (value << 13); }
        static constexpr unsigned PGVB6_POS = 14;
        static constexpr unsigned PGVB6_MASK = 0x00004000;
        static constexpr unsigned PGVB6(unsigned value) { return (value << 14); }
        static constexpr unsigned PGVB7_POS = 15;
        static constexpr unsigned PGVB7_MASK = 0x00008000;
        static constexpr unsigned PGVB7(unsigned value) { return (value << 15); }
    } PATTBUF;

    uint8_t Reserved6[6];

    volatile union PERBUF_T // PERBUF: Period Buffer 
    {
        uint32_t reg;
        struct __attribute__((packed)) PERBUF_BIT_T
        {
            unsigned PERBUF : 24; // bits 0..23 Period Buffer Value
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned PERBUF_POS = 0;
        static constexpr unsigned PERBUF_MASK = 0x00ffffff;
        static constexpr unsigned PERBUF(unsigned value) { return (value << 0); }
    } PERBUF;

    volatile union CCBUF_T // CCBUF: Compare and Capture Buffer 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCBUF_BIT_T
        {
            unsigned CCBUF : 24; // bits 0..23 Channel Compare/Capture Buffer Value
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CCBUF_POS = 0;
        static constexpr unsigned CCBUF_MASK = 0x00ffffff;
        static constexpr unsigned CCBUF(unsigned value) { return (value << 0); }
    } CCBUF[4];

}; // struct TCC0_T

static_assert(sizeof(TCC_T) == TCC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp