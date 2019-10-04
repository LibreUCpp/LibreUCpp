#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RTC_T
{
    static constexpr size_t INSTANCE_SIZE = 160;
    static constexpr size_t PADDED_INSTANCE_SIZE = 160;
    static constexpr intptr_t BASE_ADDRESS = 0x40002800;

    static constexpr intptr_t ADDR_OFFSET_TR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_ISR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_PRER = 0x10;
    static constexpr intptr_t ADDR_OFFSET_WUTR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CALIBR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_ALRMAR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_ALRMBR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_WPR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_SSR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_SHIFTR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_TSTR = 0x30;
    static constexpr intptr_t ADDR_OFFSET_TSDR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_TSSSR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_CALR = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_TAFCR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_ALRMASSR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_ALRMBSSR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_BKP0R = 0x50;
    static constexpr intptr_t ADDR_OFFSET_BKP1R = 0x54;
    static constexpr intptr_t ADDR_OFFSET_BKP2R = 0x58;
    static constexpr intptr_t ADDR_OFFSET_BKP3R = 0x5c;
    static constexpr intptr_t ADDR_OFFSET_BKP4R = 0x60;
    static constexpr intptr_t ADDR_OFFSET_BKP5R = 0x64;
    static constexpr intptr_t ADDR_OFFSET_BKP6R = 0x68;
    static constexpr intptr_t ADDR_OFFSET_BKP7R = 0x6c;
    static constexpr intptr_t ADDR_OFFSET_BKP8R = 0x70;
    static constexpr intptr_t ADDR_OFFSET_BKP9R = 0x74;
    static constexpr intptr_t ADDR_OFFSET_BKP10R = 0x78;
    static constexpr intptr_t ADDR_OFFSET_BKP11R = 0x7c;
    static constexpr intptr_t ADDR_OFFSET_BKP12R = 0x80;
    static constexpr intptr_t ADDR_OFFSET_BKP13R = 0x84;
    static constexpr intptr_t ADDR_OFFSET_BKP14R = 0x88;
    static constexpr intptr_t ADDR_OFFSET_BKP15R = 0x8c;
    static constexpr intptr_t ADDR_OFFSET_BKP16R = 0x90;
    static constexpr intptr_t ADDR_OFFSET_BKP17R = 0x94;
    static constexpr intptr_t ADDR_OFFSET_BKP18R = 0x98;
    static constexpr intptr_t ADDR_OFFSET_BKP19R = 0x9c;

    volatile union TR_T // TR: time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TR_BIT_T
        {
            unsigned SU  : 4; // bits 0..3 Second units in BCD format
            unsigned ST  : 3; // bits 4..6 Second tens in BCD format
            unsigned     : 1; // bit 7 unused
            unsigned MNU : 4; // bits 8..11 Minute units in BCD format
            unsigned MNT : 3; // bits 12..14 Minute tens in BCD format
            unsigned     : 1; // bit 15 unused
            unsigned HU  : 4; // bits 16..19 Hour units in BCD format
            unsigned HT  : 2; // bits 20..21 Hour tens in BCD format
            unsigned PM  : 1; // bit 22 AM/PM notation
            unsigned     : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned SU_POS = 0;
        static constexpr unsigned SU_MASK = 0x0000000f;
        static constexpr unsigned SU(unsigned value) { return (value << 0); }
        static constexpr unsigned ST_POS = 4;
        static constexpr unsigned ST_MASK = 0x00000070;
        static constexpr unsigned ST(unsigned value) { return (value << 4); }
        static constexpr unsigned MNU_POS = 8;
        static constexpr unsigned MNU_MASK = 0x00000f00;
        static constexpr unsigned MNU(unsigned value) { return (value << 8); }
        static constexpr unsigned MNT_POS = 12;
        static constexpr unsigned MNT_MASK = 0x00007000;
        static constexpr unsigned MNT(unsigned value) { return (value << 12); }
        static constexpr unsigned HU_POS = 16;
        static constexpr unsigned HU_MASK = 0x000f0000;
        static constexpr unsigned HU(unsigned value) { return (value << 16); }
        static constexpr unsigned HT_POS = 20;
        static constexpr unsigned HT_MASK = 0x00300000;
        static constexpr unsigned HT(unsigned value) { return (value << 20); }
        static constexpr unsigned PM_POS = 22;
        static constexpr unsigned PM_MASK = 0x00400000;
        static constexpr unsigned PM(unsigned value) { return (value << 22); }
    } TR;

    volatile union DR_T // DR: date register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DU  : 4; // bits 0..3 Date units in BCD format
            unsigned DT  : 2; // bits 4..5 Date tens in BCD format
            unsigned     : 2; // bits 6..7 unused
            unsigned MU  : 4; // bits 8..11 Month units in BCD format
            unsigned MT  : 1; // bit 12 Month tens in BCD format
            unsigned WDU : 3; // bits 13..15 Week day units
            unsigned YU  : 4; // bits 16..19 Year units in BCD format
            unsigned YT  : 4; // bits 20..23 Year tens in BCD format
            unsigned     : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned DU_POS = 0;
        static constexpr unsigned DU_MASK = 0x0000000f;
        static constexpr unsigned DU(unsigned value) { return (value << 0); }
        static constexpr unsigned DT_POS = 4;
        static constexpr unsigned DT_MASK = 0x00000030;
        static constexpr unsigned DT(unsigned value) { return (value << 4); }
        static constexpr unsigned MU_POS = 8;
        static constexpr unsigned MU_MASK = 0x00000f00;
        static constexpr unsigned MU(unsigned value) { return (value << 8); }
        static constexpr unsigned MT_POS = 12;
        static constexpr unsigned MT_MASK = 0x00001000;
        static constexpr unsigned MT(unsigned value) { return (value << 12); }
        static constexpr unsigned WDU_POS = 13;
        static constexpr unsigned WDU_MASK = 0x0000e000;
        static constexpr unsigned WDU(unsigned value) { return (value << 13); }
        static constexpr unsigned YU_POS = 16;
        static constexpr unsigned YU_MASK = 0x000f0000;
        static constexpr unsigned YU(unsigned value) { return (value << 16); }
        static constexpr unsigned YT_POS = 20;
        static constexpr unsigned YT_MASK = 0x00f00000;
        static constexpr unsigned YT(unsigned value) { return (value << 20); }
    } DR;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned WCKSEL  : 3; // bits 0..2 Wakeup clock selection
            unsigned TSEDGE  : 1; // bit 3 Time-stamp event active edge
            unsigned REFCKON : 1; // bit 4 Reference clock detection enable (50 or 60 Hz)
            unsigned         : 1; // bit 5 unused
            unsigned FMT     : 1; // bit 6 Hour format
            unsigned DCE     : 1; // bit 7 Coarse digital calibration enable
            unsigned ALRAE   : 1; // bit 8 Alarm A enable
            unsigned ALRBE   : 1; // bit 9 Alarm B enable
            unsigned WUTE    : 1; // bit 10 Wakeup timer enable
            unsigned TSE     : 1; // bit 11 Time stamp enable
            unsigned ALRAIE  : 1; // bit 12 Alarm A interrupt enable
            unsigned ALRBIE  : 1; // bit 13 Alarm B interrupt enable
            unsigned WUTIE   : 1; // bit 14 Wakeup timer interrupt enable
            unsigned TSIE    : 1; // bit 15 Time-stamp interrupt enable
            unsigned ADD1H   : 1; // bit 16 Add 1 hour (summer time change)
            unsigned SUB1H   : 1; // bit 17 Subtract 1 hour (winter time change)
            unsigned BKP     : 1; // bit 18 Backup
            unsigned         : 1; // bit 19 unused
            unsigned POL     : 1; // bit 20 Output polarity
            unsigned OSEL    : 2; // bits 21..22 Output selection
            unsigned COE     : 1; // bit 23 Calibration output enable
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned WCKSEL_POS = 0;
        static constexpr unsigned WCKSEL_MASK = 0x00000007;
        static constexpr unsigned WCKSEL(unsigned value) { return (value << 0); }
        static constexpr unsigned TSEDGE_POS = 3;
        static constexpr unsigned TSEDGE_MASK = 0x00000008;
        static constexpr unsigned TSEDGE(unsigned value) { return (value << 3); }
        static constexpr unsigned REFCKON_POS = 4;
        static constexpr unsigned REFCKON_MASK = 0x00000010;
        static constexpr unsigned REFCKON(unsigned value) { return (value << 4); }
        static constexpr unsigned FMT_POS = 6;
        static constexpr unsigned FMT_MASK = 0x00000040;
        static constexpr unsigned FMT(unsigned value) { return (value << 6); }
        static constexpr unsigned DCE_POS = 7;
        static constexpr unsigned DCE_MASK = 0x00000080;
        static constexpr unsigned DCE(unsigned value) { return (value << 7); }
        static constexpr unsigned ALRAE_POS = 8;
        static constexpr unsigned ALRAE_MASK = 0x00000100;
        static constexpr unsigned ALRAE(unsigned value) { return (value << 8); }
        static constexpr unsigned ALRBE_POS = 9;
        static constexpr unsigned ALRBE_MASK = 0x00000200;
        static constexpr unsigned ALRBE(unsigned value) { return (value << 9); }
        static constexpr unsigned WUTE_POS = 10;
        static constexpr unsigned WUTE_MASK = 0x00000400;
        static constexpr unsigned WUTE(unsigned value) { return (value << 10); }
        static constexpr unsigned TSE_POS = 11;
        static constexpr unsigned TSE_MASK = 0x00000800;
        static constexpr unsigned TSE(unsigned value) { return (value << 11); }
        static constexpr unsigned ALRAIE_POS = 12;
        static constexpr unsigned ALRAIE_MASK = 0x00001000;
        static constexpr unsigned ALRAIE(unsigned value) { return (value << 12); }
        static constexpr unsigned ALRBIE_POS = 13;
        static constexpr unsigned ALRBIE_MASK = 0x00002000;
        static constexpr unsigned ALRBIE(unsigned value) { return (value << 13); }
        static constexpr unsigned WUTIE_POS = 14;
        static constexpr unsigned WUTIE_MASK = 0x00004000;
        static constexpr unsigned WUTIE(unsigned value) { return (value << 14); }
        static constexpr unsigned TSIE_POS = 15;
        static constexpr unsigned TSIE_MASK = 0x00008000;
        static constexpr unsigned TSIE(unsigned value) { return (value << 15); }
        static constexpr unsigned ADD1H_POS = 16;
        static constexpr unsigned ADD1H_MASK = 0x00010000;
        static constexpr unsigned ADD1H(unsigned value) { return (value << 16); }
        static constexpr unsigned SUB1H_POS = 17;
        static constexpr unsigned SUB1H_MASK = 0x00020000;
        static constexpr unsigned SUB1H(unsigned value) { return (value << 17); }
        static constexpr unsigned BKP_POS = 18;
        static constexpr unsigned BKP_MASK = 0x00040000;
        static constexpr unsigned BKP(unsigned value) { return (value << 18); }
        static constexpr unsigned POL_POS = 20;
        static constexpr unsigned POL_MASK = 0x00100000;
        static constexpr unsigned POL(unsigned value) { return (value << 20); }
        static constexpr unsigned OSEL_POS = 21;
        static constexpr unsigned OSEL_MASK = 0x00600000;
        static constexpr unsigned OSEL(unsigned value) { return (value << 21); }
        static constexpr unsigned COE_POS = 23;
        static constexpr unsigned COE_MASK = 0x00800000;
        static constexpr unsigned COE(unsigned value) { return (value << 23); }
    } CR;

    volatile union ISR_T // ISR: initialization and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned ALRAWF  : 1; // bit 0 Alarm A write flag
            unsigned ALRBWF  : 1; // bit 1 Alarm B write flag
            unsigned WUTWF   : 1; // bit 2 Wakeup timer write flag
            unsigned SHPF    : 1; // bit 3 Shift operation pending
            unsigned INITS   : 1; // bit 4 Initialization status flag
            unsigned RSF     : 1; // bit 5 Registers synchronization flag
            unsigned INITF   : 1; // bit 6 Initialization flag
            unsigned INIT    : 1; // bit 7 Initialization mode
            unsigned ALRAF   : 1; // bit 8 Alarm A flag
            unsigned ALRBF   : 1; // bit 9 Alarm B flag
            unsigned WUTF    : 1; // bit 10 Wakeup timer flag
            unsigned TSF     : 1; // bit 11 Time-stamp flag
            unsigned TSOVF   : 1; // bit 12 Time-stamp overflow flag
            unsigned TAMP1F  : 1; // bit 13 Tamper detection flag
            unsigned TAMP2F  : 1; // bit 14 TAMPER2 detection flag
            unsigned         : 1; // bit 15 unused
            unsigned RECALPF : 1; // bit 16 Recalibration pending Flag
            unsigned         : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned ALRAWF_POS = 0;
        static constexpr unsigned ALRAWF_MASK = 0x00000001;
        static constexpr unsigned ALRAWF(unsigned value) { return (value << 0); }
        static constexpr unsigned ALRBWF_POS = 1;
        static constexpr unsigned ALRBWF_MASK = 0x00000002;
        static constexpr unsigned ALRBWF(unsigned value) { return (value << 1); }
        static constexpr unsigned WUTWF_POS = 2;
        static constexpr unsigned WUTWF_MASK = 0x00000004;
        static constexpr unsigned WUTWF(unsigned value) { return (value << 2); }
        static constexpr unsigned SHPF_POS = 3;
        static constexpr unsigned SHPF_MASK = 0x00000008;
        static constexpr unsigned SHPF(unsigned value) { return (value << 3); }
        static constexpr unsigned INITS_POS = 4;
        static constexpr unsigned INITS_MASK = 0x00000010;
        static constexpr unsigned INITS(unsigned value) { return (value << 4); }
        static constexpr unsigned RSF_POS = 5;
        static constexpr unsigned RSF_MASK = 0x00000020;
        static constexpr unsigned RSF(unsigned value) { return (value << 5); }
        static constexpr unsigned INITF_POS = 6;
        static constexpr unsigned INITF_MASK = 0x00000040;
        static constexpr unsigned INITF(unsigned value) { return (value << 6); }
        static constexpr unsigned INIT_POS = 7;
        static constexpr unsigned INIT_MASK = 0x00000080;
        static constexpr unsigned INIT(unsigned value) { return (value << 7); }
        static constexpr unsigned ALRAF_POS = 8;
        static constexpr unsigned ALRAF_MASK = 0x00000100;
        static constexpr unsigned ALRAF(unsigned value) { return (value << 8); }
        static constexpr unsigned ALRBF_POS = 9;
        static constexpr unsigned ALRBF_MASK = 0x00000200;
        static constexpr unsigned ALRBF(unsigned value) { return (value << 9); }
        static constexpr unsigned WUTF_POS = 10;
        static constexpr unsigned WUTF_MASK = 0x00000400;
        static constexpr unsigned WUTF(unsigned value) { return (value << 10); }
        static constexpr unsigned TSF_POS = 11;
        static constexpr unsigned TSF_MASK = 0x00000800;
        static constexpr unsigned TSF(unsigned value) { return (value << 11); }
        static constexpr unsigned TSOVF_POS = 12;
        static constexpr unsigned TSOVF_MASK = 0x00001000;
        static constexpr unsigned TSOVF(unsigned value) { return (value << 12); }
        static constexpr unsigned TAMP1F_POS = 13;
        static constexpr unsigned TAMP1F_MASK = 0x00002000;
        static constexpr unsigned TAMP1F(unsigned value) { return (value << 13); }
        static constexpr unsigned TAMP2F_POS = 14;
        static constexpr unsigned TAMP2F_MASK = 0x00004000;
        static constexpr unsigned TAMP2F(unsigned value) { return (value << 14); }
        static constexpr unsigned RECALPF_POS = 16;
        static constexpr unsigned RECALPF_MASK = 0x00010000;
        static constexpr unsigned RECALPF(unsigned value) { return (value << 16); }
    } ISR;

    volatile union PRER_T // PRER: prescaler register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PRER_BIT_T
        {
            unsigned PREDIV_S : 15; // bits 0..14 Synchronous prescaler factor
            unsigned          : 1; // bit 15 unused
            unsigned PREDIV_A : 7; // bits 16..22 Asynchronous prescaler factor
            unsigned          : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned PREDIV_S_POS = 0;
        static constexpr unsigned PREDIV_S_MASK = 0x00007fff;
        static constexpr unsigned PREDIV_S(unsigned value) { return (value << 0); }
        static constexpr unsigned PREDIV_A_POS = 16;
        static constexpr unsigned PREDIV_A_MASK = 0x007f0000;
        static constexpr unsigned PREDIV_A(unsigned value) { return (value << 16); }
    } PRER;

    volatile union WUTR_T // WUTR: wakeup timer register 
    {
        uint32_t reg;
        struct __attribute__((packed)) WUTR_BIT_T
        {
            unsigned WUT : 16; // bits 0..15 Wakeup auto-reload value bits
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned WUT_POS = 0;
        static constexpr unsigned WUT_MASK = 0x0000ffff;
        static constexpr unsigned WUT(unsigned value) { return (value << 0); }
    } WUTR;

    volatile union CALIBR_T // CALIBR: calibration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CALIBR_BIT_T
        {
            unsigned DC  : 5; // bits 0..4 Digital calibration
            unsigned     : 2; // bits 5..6 unused
            unsigned DCS : 1; // bit 7 Digital calibration sign
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned DC_POS = 0;
        static constexpr unsigned DC_MASK = 0x0000001f;
        static constexpr unsigned DC(unsigned value) { return (value << 0); }
        static constexpr unsigned DCS_POS = 7;
        static constexpr unsigned DCS_MASK = 0x00000080;
        static constexpr unsigned DCS(unsigned value) { return (value << 7); }
    } CALIBR;

    volatile union ALRMAR_T // ALRMAR: alarm A register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ALRMAR_BIT_T
        {
            unsigned SU    : 4; // bits 0..3 Second units in BCD format
            unsigned ST    : 3; // bits 4..6 Second tens in BCD format
            unsigned MSK1  : 1; // bit 7 Alarm A seconds mask
            unsigned MNU   : 4; // bits 8..11 Minute units in BCD format
            unsigned MNT   : 3; // bits 12..14 Minute tens in BCD format
            unsigned MSK2  : 1; // bit 15 Alarm A minutes mask
            unsigned HU    : 4; // bits 16..19 Hour units in BCD format
            unsigned HT    : 2; // bits 20..21 Hour tens in BCD format
            unsigned PM    : 1; // bit 22 AM/PM notation
            unsigned MSK3  : 1; // bit 23 Alarm A hours mask
            unsigned DU    : 4; // bits 24..27 Date units or day in BCD format
            unsigned DT    : 2; // bits 28..29 Date tens in BCD format
            unsigned WDSEL : 1; // bit 30 Week day selection
            unsigned MSK4  : 1; // bit 31 Alarm A date mask    
        } bit;
    
        static constexpr unsigned SU_POS = 0;
        static constexpr unsigned SU_MASK = 0x0000000f;
        static constexpr unsigned SU(unsigned value) { return (value << 0); }
        static constexpr unsigned ST_POS = 4;
        static constexpr unsigned ST_MASK = 0x00000070;
        static constexpr unsigned ST(unsigned value) { return (value << 4); }
        static constexpr unsigned MSK1_POS = 7;
        static constexpr unsigned MSK1_MASK = 0x00000080;
        static constexpr unsigned MSK1(unsigned value) { return (value << 7); }
        static constexpr unsigned MNU_POS = 8;
        static constexpr unsigned MNU_MASK = 0x00000f00;
        static constexpr unsigned MNU(unsigned value) { return (value << 8); }
        static constexpr unsigned MNT_POS = 12;
        static constexpr unsigned MNT_MASK = 0x00007000;
        static constexpr unsigned MNT(unsigned value) { return (value << 12); }
        static constexpr unsigned MSK2_POS = 15;
        static constexpr unsigned MSK2_MASK = 0x00008000;
        static constexpr unsigned MSK2(unsigned value) { return (value << 15); }
        static constexpr unsigned HU_POS = 16;
        static constexpr unsigned HU_MASK = 0x000f0000;
        static constexpr unsigned HU(unsigned value) { return (value << 16); }
        static constexpr unsigned HT_POS = 20;
        static constexpr unsigned HT_MASK = 0x00300000;
        static constexpr unsigned HT(unsigned value) { return (value << 20); }
        static constexpr unsigned PM_POS = 22;
        static constexpr unsigned PM_MASK = 0x00400000;
        static constexpr unsigned PM(unsigned value) { return (value << 22); }
        static constexpr unsigned MSK3_POS = 23;
        static constexpr unsigned MSK3_MASK = 0x00800000;
        static constexpr unsigned MSK3(unsigned value) { return (value << 23); }
        static constexpr unsigned DU_POS = 24;
        static constexpr unsigned DU_MASK = 0x0f000000;
        static constexpr unsigned DU(unsigned value) { return (value << 24); }
        static constexpr unsigned DT_POS = 28;
        static constexpr unsigned DT_MASK = 0x30000000;
        static constexpr unsigned DT(unsigned value) { return (value << 28); }
        static constexpr unsigned WDSEL_POS = 30;
        static constexpr unsigned WDSEL_MASK = 0x40000000;
        static constexpr unsigned WDSEL(unsigned value) { return (value << 30); }
        static constexpr unsigned MSK4_POS = 31;
        static constexpr unsigned MSK4_MASK = 0x80000000;
        static constexpr unsigned MSK4(unsigned value) { return (value << 31); }
    } ALRMAR;

    volatile union ALRMBR_T // ALRMBR: alarm B register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ALRMBR_BIT_T
        {
            unsigned SU    : 4; // bits 0..3 Second units in BCD format
            unsigned ST    : 3; // bits 4..6 Second tens in BCD format
            unsigned MSK1  : 1; // bit 7 Alarm B seconds mask
            unsigned MNU   : 4; // bits 8..11 Minute units in BCD format
            unsigned MNT   : 3; // bits 12..14 Minute tens in BCD format
            unsigned MSK2  : 1; // bit 15 Alarm B minutes mask
            unsigned HU    : 4; // bits 16..19 Hour units in BCD format
            unsigned HT    : 2; // bits 20..21 Hour tens in BCD format
            unsigned PM    : 1; // bit 22 AM/PM notation
            unsigned MSK3  : 1; // bit 23 Alarm B hours mask
            unsigned DU    : 4; // bits 24..27 Date units or day in BCD format
            unsigned DT    : 2; // bits 28..29 Date tens in BCD format
            unsigned WDSEL : 1; // bit 30 Week day selection
            unsigned MSK4  : 1; // bit 31 Alarm B date mask    
        } bit;
    
        static constexpr unsigned SU_POS = 0;
        static constexpr unsigned SU_MASK = 0x0000000f;
        static constexpr unsigned SU(unsigned value) { return (value << 0); }
        static constexpr unsigned ST_POS = 4;
        static constexpr unsigned ST_MASK = 0x00000070;
        static constexpr unsigned ST(unsigned value) { return (value << 4); }
        static constexpr unsigned MSK1_POS = 7;
        static constexpr unsigned MSK1_MASK = 0x00000080;
        static constexpr unsigned MSK1(unsigned value) { return (value << 7); }
        static constexpr unsigned MNU_POS = 8;
        static constexpr unsigned MNU_MASK = 0x00000f00;
        static constexpr unsigned MNU(unsigned value) { return (value << 8); }
        static constexpr unsigned MNT_POS = 12;
        static constexpr unsigned MNT_MASK = 0x00007000;
        static constexpr unsigned MNT(unsigned value) { return (value << 12); }
        static constexpr unsigned MSK2_POS = 15;
        static constexpr unsigned MSK2_MASK = 0x00008000;
        static constexpr unsigned MSK2(unsigned value) { return (value << 15); }
        static constexpr unsigned HU_POS = 16;
        static constexpr unsigned HU_MASK = 0x000f0000;
        static constexpr unsigned HU(unsigned value) { return (value << 16); }
        static constexpr unsigned HT_POS = 20;
        static constexpr unsigned HT_MASK = 0x00300000;
        static constexpr unsigned HT(unsigned value) { return (value << 20); }
        static constexpr unsigned PM_POS = 22;
        static constexpr unsigned PM_MASK = 0x00400000;
        static constexpr unsigned PM(unsigned value) { return (value << 22); }
        static constexpr unsigned MSK3_POS = 23;
        static constexpr unsigned MSK3_MASK = 0x00800000;
        static constexpr unsigned MSK3(unsigned value) { return (value << 23); }
        static constexpr unsigned DU_POS = 24;
        static constexpr unsigned DU_MASK = 0x0f000000;
        static constexpr unsigned DU(unsigned value) { return (value << 24); }
        static constexpr unsigned DT_POS = 28;
        static constexpr unsigned DT_MASK = 0x30000000;
        static constexpr unsigned DT(unsigned value) { return (value << 28); }
        static constexpr unsigned WDSEL_POS = 30;
        static constexpr unsigned WDSEL_MASK = 0x40000000;
        static constexpr unsigned WDSEL(unsigned value) { return (value << 30); }
        static constexpr unsigned MSK4_POS = 31;
        static constexpr unsigned MSK4_MASK = 0x80000000;
        static constexpr unsigned MSK4(unsigned value) { return (value << 31); }
    } ALRMBR;

    volatile union WPR_T // WPR: write protection register 
    {
        uint32_t reg;
        struct __attribute__((packed)) WPR_BIT_T
        {
            unsigned KEY : 8; // bits 0..7 Write protection key
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned KEY_POS = 0;
        static constexpr unsigned KEY_MASK = 0x000000ff;
        static constexpr unsigned KEY(unsigned value) { return (value << 0); }
    } WPR;

    volatile union SSR_T // SSR: sub second register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SSR_BIT_T
        {
            unsigned SS : 16; // bits 0..15 Sub second value
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned SS_POS = 0;
        static constexpr unsigned SS_MASK = 0x0000ffff;
        static constexpr unsigned SS(unsigned value) { return (value << 0); }
    } SSR;

    volatile union SHIFTR_T // SHIFTR: shift control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHIFTR_BIT_T
        {
            unsigned SUBFS : 15; // bits 0..14 Subtract a fraction of a second
            unsigned       : 16; // bits 15..30 unused
            unsigned ADD1S : 1; // bit 31 Add one second    
        } bit;
    
        static constexpr unsigned SUBFS_POS = 0;
        static constexpr unsigned SUBFS_MASK = 0x00007fff;
        static constexpr unsigned SUBFS(unsigned value) { return (value << 0); }
        static constexpr unsigned ADD1S_POS = 31;
        static constexpr unsigned ADD1S_MASK = 0x80000000;
        static constexpr unsigned ADD1S(unsigned value) { return (value << 31); }
    } SHIFTR;

    volatile union TSTR_T // TSTR: time stamp time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TSTR_BIT_T
        {
            unsigned TAMP1E       : 1; // bit 0 Tamper 1 detection enable
            unsigned TAMP1TRG     : 1; // bit 1 Active level for tamper 1
            unsigned TAMPIE       : 1; // bit 2 Tamper interrupt enable
            unsigned              : 13; // bits 3..15 unused
            unsigned TAMP1INSEL   : 1; // bit 16 TAMPER1 mapping
            unsigned TSINSEL      : 1; // bit 17 TIMESTAMP mapping
            unsigned ALARMOUTTYPE : 1; // bit 18 AFO_ALARM output type
            unsigned              : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned TAMP1E_POS = 0;
        static constexpr unsigned TAMP1E_MASK = 0x00000001;
        static constexpr unsigned TAMP1E(unsigned value) { return (value << 0); }
        static constexpr unsigned TAMP1TRG_POS = 1;
        static constexpr unsigned TAMP1TRG_MASK = 0x00000002;
        static constexpr unsigned TAMP1TRG(unsigned value) { return (value << 1); }
        static constexpr unsigned TAMPIE_POS = 2;
        static constexpr unsigned TAMPIE_MASK = 0x00000004;
        static constexpr unsigned TAMPIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TAMP1INSEL_POS = 16;
        static constexpr unsigned TAMP1INSEL_MASK = 0x00010000;
        static constexpr unsigned TAMP1INSEL(unsigned value) { return (value << 16); }
        static constexpr unsigned TSINSEL_POS = 17;
        static constexpr unsigned TSINSEL_MASK = 0x00020000;
        static constexpr unsigned TSINSEL(unsigned value) { return (value << 17); }
        static constexpr unsigned ALARMOUTTYPE_POS = 18;
        static constexpr unsigned ALARMOUTTYPE_MASK = 0x00040000;
        static constexpr unsigned ALARMOUTTYPE(unsigned value) { return (value << 18); }
    } TSTR;

    volatile union TSDR_T // TSDR: time stamp date register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TSDR_BIT_T
        {
            unsigned DU  : 4; // bits 0..3 Date units in BCD format
            unsigned DT  : 2; // bits 4..5 Date tens in BCD format
            unsigned     : 2; // bits 6..7 unused
            unsigned MU  : 4; // bits 8..11 Month units in BCD format
            unsigned MT  : 1; // bit 12 Month tens in BCD format
            unsigned WDU : 3; // bits 13..15 Week day units
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DU_POS = 0;
        static constexpr unsigned DU_MASK = 0x0000000f;
        static constexpr unsigned DU(unsigned value) { return (value << 0); }
        static constexpr unsigned DT_POS = 4;
        static constexpr unsigned DT_MASK = 0x00000030;
        static constexpr unsigned DT(unsigned value) { return (value << 4); }
        static constexpr unsigned MU_POS = 8;
        static constexpr unsigned MU_MASK = 0x00000f00;
        static constexpr unsigned MU(unsigned value) { return (value << 8); }
        static constexpr unsigned MT_POS = 12;
        static constexpr unsigned MT_MASK = 0x00001000;
        static constexpr unsigned MT(unsigned value) { return (value << 12); }
        static constexpr unsigned WDU_POS = 13;
        static constexpr unsigned WDU_MASK = 0x0000e000;
        static constexpr unsigned WDU(unsigned value) { return (value << 13); }
    } TSDR;

    volatile union TSSSR_T // TSSSR: timestamp sub second register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TSSSR_BIT_T
        {
            unsigned SS : 16; // bits 0..15 Sub second value
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned SS_POS = 0;
        static constexpr unsigned SS_MASK = 0x0000ffff;
        static constexpr unsigned SS(unsigned value) { return (value << 0); }
    } TSSSR;

    volatile union CALR_T // CALR: calibration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CALR_BIT_T
        {
            unsigned CALM   : 9; // bits 0..8 Calibration minus
            unsigned        : 4; // bits 9..12 unused
            unsigned CALW16 : 1; // bit 13 Use a 16-second calibration cycle period
            unsigned CALW8  : 1; // bit 14 Use an 8-second calibration cycle period
            unsigned CALP   : 1; // bit 15 Increase frequency of RTC by 488.5 ppm
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CALM_POS = 0;
        static constexpr unsigned CALM_MASK = 0x000001ff;
        static constexpr unsigned CALM(unsigned value) { return (value << 0); }
        static constexpr unsigned CALW16_POS = 13;
        static constexpr unsigned CALW16_MASK = 0x00002000;
        static constexpr unsigned CALW16(unsigned value) { return (value << 13); }
        static constexpr unsigned CALW8_POS = 14;
        static constexpr unsigned CALW8_MASK = 0x00004000;
        static constexpr unsigned CALW8(unsigned value) { return (value << 14); }
        static constexpr unsigned CALP_POS = 15;
        static constexpr unsigned CALP_MASK = 0x00008000;
        static constexpr unsigned CALP(unsigned value) { return (value << 15); }
    } CALR;

    volatile union TAFCR_T // TAFCR: tamper and alternate function configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TAFCR_BIT_T
        {
            unsigned TAMP1E       : 1; // bit 0 Tamper 1 detection enable
            unsigned TAMP1TRG     : 1; // bit 1 Active level for tamper 1
            unsigned TAMPIE       : 1; // bit 2 Tamper interrupt enable
            unsigned TAMP2E       : 1; // bit 3 Tamper 2 detection enable
            unsigned TAMP2TRG     : 1; // bit 4 Active level for tamper 2
            unsigned              : 2; // bits 5..6 unused
            unsigned TAMPTS       : 1; // bit 7 Activate timestamp on tamper detection event
            unsigned TAMPFREQ     : 3; // bits 8..10 Tamper sampling frequency
            unsigned TAMPFLT      : 2; // bits 11..12 Tamper filter count
            unsigned TAMPPRCH     : 2; // bits 13..14 Tamper precharge duration
            unsigned TAMPPUDIS    : 1; // bit 15 TAMPER pull-up disable
            unsigned TAMP1INSEL   : 1; // bit 16 TAMPER1 mapping
            unsigned TSINSEL      : 1; // bit 17 TIMESTAMP mapping
            unsigned ALARMOUTTYPE : 1; // bit 18 AFO_ALARM output type
            unsigned              : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned TAMP1E_POS = 0;
        static constexpr unsigned TAMP1E_MASK = 0x00000001;
        static constexpr unsigned TAMP1E(unsigned value) { return (value << 0); }
        static constexpr unsigned TAMP1TRG_POS = 1;
        static constexpr unsigned TAMP1TRG_MASK = 0x00000002;
        static constexpr unsigned TAMP1TRG(unsigned value) { return (value << 1); }
        static constexpr unsigned TAMPIE_POS = 2;
        static constexpr unsigned TAMPIE_MASK = 0x00000004;
        static constexpr unsigned TAMPIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TAMP2E_POS = 3;
        static constexpr unsigned TAMP2E_MASK = 0x00000008;
        static constexpr unsigned TAMP2E(unsigned value) { return (value << 3); }
        static constexpr unsigned TAMP2TRG_POS = 4;
        static constexpr unsigned TAMP2TRG_MASK = 0x00000010;
        static constexpr unsigned TAMP2TRG(unsigned value) { return (value << 4); }
        static constexpr unsigned TAMPTS_POS = 7;
        static constexpr unsigned TAMPTS_MASK = 0x00000080;
        static constexpr unsigned TAMPTS(unsigned value) { return (value << 7); }
        static constexpr unsigned TAMPFREQ_POS = 8;
        static constexpr unsigned TAMPFREQ_MASK = 0x00000700;
        static constexpr unsigned TAMPFREQ(unsigned value) { return (value << 8); }
        static constexpr unsigned TAMPFLT_POS = 11;
        static constexpr unsigned TAMPFLT_MASK = 0x00001800;
        static constexpr unsigned TAMPFLT(unsigned value) { return (value << 11); }
        static constexpr unsigned TAMPPRCH_POS = 13;
        static constexpr unsigned TAMPPRCH_MASK = 0x00006000;
        static constexpr unsigned TAMPPRCH(unsigned value) { return (value << 13); }
        static constexpr unsigned TAMPPUDIS_POS = 15;
        static constexpr unsigned TAMPPUDIS_MASK = 0x00008000;
        static constexpr unsigned TAMPPUDIS(unsigned value) { return (value << 15); }
        static constexpr unsigned TAMP1INSEL_POS = 16;
        static constexpr unsigned TAMP1INSEL_MASK = 0x00010000;
        static constexpr unsigned TAMP1INSEL(unsigned value) { return (value << 16); }
        static constexpr unsigned TSINSEL_POS = 17;
        static constexpr unsigned TSINSEL_MASK = 0x00020000;
        static constexpr unsigned TSINSEL(unsigned value) { return (value << 17); }
        static constexpr unsigned ALARMOUTTYPE_POS = 18;
        static constexpr unsigned ALARMOUTTYPE_MASK = 0x00040000;
        static constexpr unsigned ALARMOUTTYPE(unsigned value) { return (value << 18); }
    } TAFCR;

    volatile union ALRMASSR_T // ALRMASSR: alarm A sub second register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ALRMASSR_BIT_T
        {
            unsigned SS     : 15; // bits 0..14 Sub seconds value
            unsigned        : 9; // bits 15..23 unused
            unsigned MASKSS : 4; // bits 24..27 Mask the most-significant bits starting at this bit
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned SS_POS = 0;
        static constexpr unsigned SS_MASK = 0x00007fff;
        static constexpr unsigned SS(unsigned value) { return (value << 0); }
        static constexpr unsigned MASKSS_POS = 24;
        static constexpr unsigned MASKSS_MASK = 0x0f000000;
        static constexpr unsigned MASKSS(unsigned value) { return (value << 24); }
    } ALRMASSR;

    volatile union ALRMBSSR_T // ALRMBSSR: alarm B sub second register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ALRMBSSR_BIT_T
        {
            unsigned SS     : 15; // bits 0..14 Sub seconds value
            unsigned        : 9; // bits 15..23 unused
            unsigned MASKSS : 4; // bits 24..27 Mask the most-significant bits starting at this bit
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned SS_POS = 0;
        static constexpr unsigned SS_MASK = 0x00007fff;
        static constexpr unsigned SS(unsigned value) { return (value << 0); }
        static constexpr unsigned MASKSS_POS = 24;
        static constexpr unsigned MASKSS_MASK = 0x0f000000;
        static constexpr unsigned MASKSS(unsigned value) { return (value << 24); }
    } ALRMBSSR;

    uint8_t Reserved1[4];

    volatile union BKP0R_T // BKP0R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP0R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP0R;

    volatile union BKP1R_T // BKP1R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP1R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP1R;

    volatile union BKP2R_T // BKP2R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP2R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP2R;

    volatile union BKP3R_T // BKP3R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP3R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP3R;

    volatile union BKP4R_T // BKP4R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP4R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP4R;

    volatile union BKP5R_T // BKP5R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP5R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP5R;

    volatile union BKP6R_T // BKP6R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP6R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP6R;

    volatile union BKP7R_T // BKP7R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP7R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP7R;

    volatile union BKP8R_T // BKP8R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP8R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP8R;

    volatile union BKP9R_T // BKP9R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP9R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP9R;

    volatile union BKP10R_T // BKP10R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP10R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP10R;

    volatile union BKP11R_T // BKP11R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP11R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP11R;

    volatile union BKP12R_T // BKP12R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP12R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP12R;

    volatile union BKP13R_T // BKP13R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP13R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP13R;

    volatile union BKP14R_T // BKP14R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP14R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP14R;

    volatile union BKP15R_T // BKP15R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP15R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP15R;

    volatile union BKP16R_T // BKP16R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP16R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP16R;

    volatile union BKP17R_T // BKP17R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP17R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP17R;

    volatile union BKP18R_T // BKP18R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP18R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP18R;

    volatile union BKP19R_T // BKP19R: backup register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BKP19R_BIT_T
        {
            unsigned BKP : 32; // bits 0..31 BKP    
        } bit;
    
        static constexpr unsigned BKP_POS = 0;
        static constexpr unsigned BKP_MASK = 0xffffffff;
        static constexpr unsigned BKP(unsigned value) { return (value << 0); }
    } BKP19R;

}; // struct RTC_T

static_assert(sizeof(RTC_T) == RTC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp