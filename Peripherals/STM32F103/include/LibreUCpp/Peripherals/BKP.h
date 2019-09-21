#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) BKP_T
{
    static constexpr size_t INSTANCE_SIZE = 188;
    static constexpr intptr_t BASE_ADDRESS = 0x40006c04;

    static constexpr intptr_t ADDR_OFFSET_DR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DR3 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DR4 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DR5 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_DR6 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_DR7 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_DR8 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_DR9 = 0x20;
    static constexpr intptr_t ADDR_OFFSET_DR10 = 0x24;
    static constexpr intptr_t ADDR_OFFSET_DR11 = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_DR12 = 0x40;
    static constexpr intptr_t ADDR_OFFSET_DR13 = 0x44;
    static constexpr intptr_t ADDR_OFFSET_DR14 = 0x48;
    static constexpr intptr_t ADDR_OFFSET_DR15 = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_DR16 = 0x50;
    static constexpr intptr_t ADDR_OFFSET_DR17 = 0x54;
    static constexpr intptr_t ADDR_OFFSET_DR18 = 0x58;
    static constexpr intptr_t ADDR_OFFSET_DR19 = 0x5c;
    static constexpr intptr_t ADDR_OFFSET_DR20 = 0x60;
    static constexpr intptr_t ADDR_OFFSET_DR21 = 0x64;
    static constexpr intptr_t ADDR_OFFSET_DR22 = 0x68;
    static constexpr intptr_t ADDR_OFFSET_DR23 = 0x6c;
    static constexpr intptr_t ADDR_OFFSET_DR24 = 0x70;
    static constexpr intptr_t ADDR_OFFSET_DR25 = 0x74;
    static constexpr intptr_t ADDR_OFFSET_DR26 = 0x78;
    static constexpr intptr_t ADDR_OFFSET_DR27 = 0x7c;
    static constexpr intptr_t ADDR_OFFSET_DR28 = 0x80;
    static constexpr intptr_t ADDR_OFFSET_DR29 = 0x84;
    static constexpr intptr_t ADDR_OFFSET_DR30 = 0x88;
    static constexpr intptr_t ADDR_OFFSET_DR31 = 0x8c;
    static constexpr intptr_t ADDR_OFFSET_DR32 = 0x90;
    static constexpr intptr_t ADDR_OFFSET_DR33 = 0x94;
    static constexpr intptr_t ADDR_OFFSET_DR34 = 0x98;
    static constexpr intptr_t ADDR_OFFSET_DR35 = 0x9c;
    static constexpr intptr_t ADDR_OFFSET_DR36 = 0xa0;
    static constexpr intptr_t ADDR_OFFSET_DR37 = 0xa4;
    static constexpr intptr_t ADDR_OFFSET_DR38 = 0xa8;
    static constexpr intptr_t ADDR_OFFSET_DR39 = 0xac;
    static constexpr intptr_t ADDR_OFFSET_DR40 = 0xb0;
    static constexpr intptr_t ADDR_OFFSET_DR41 = 0xb4;
    static constexpr intptr_t ADDR_OFFSET_DR42 = 0xb8;
    static constexpr intptr_t ADDR_OFFSET_RTCCR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_CSR = 0x30;

    volatile union DR1_T // DR1: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR1_BIT_T
        {
            unsigned D1 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D1_POS = 0;
        static constexpr unsigned D1_MASK = 0x0000ffff;
        static constexpr unsigned D1(unsigned value) { return (value << 0); }
    } DR1;

    volatile union DR2_T // DR2: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR2_BIT_T
        {
            unsigned D2 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D2_POS = 0;
        static constexpr unsigned D2_MASK = 0x0000ffff;
        static constexpr unsigned D2(unsigned value) { return (value << 0); }
    } DR2;

    volatile union DR3_T // DR3: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR3_BIT_T
        {
            unsigned D3 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D3_POS = 0;
        static constexpr unsigned D3_MASK = 0x0000ffff;
        static constexpr unsigned D3(unsigned value) { return (value << 0); }
    } DR3;

    volatile union DR4_T // DR4: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR4_BIT_T
        {
            unsigned D4 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D4_POS = 0;
        static constexpr unsigned D4_MASK = 0x0000ffff;
        static constexpr unsigned D4(unsigned value) { return (value << 0); }
    } DR4;

    volatile union DR5_T // DR5: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR5_BIT_T
        {
            unsigned D5 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D5_POS = 0;
        static constexpr unsigned D5_MASK = 0x0000ffff;
        static constexpr unsigned D5(unsigned value) { return (value << 0); }
    } DR5;

    volatile union DR6_T // DR6: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR6_BIT_T
        {
            unsigned D6 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D6_POS = 0;
        static constexpr unsigned D6_MASK = 0x0000ffff;
        static constexpr unsigned D6(unsigned value) { return (value << 0); }
    } DR6;

    volatile union DR7_T // DR7: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR7_BIT_T
        {
            unsigned D7 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D7_POS = 0;
        static constexpr unsigned D7_MASK = 0x0000ffff;
        static constexpr unsigned D7(unsigned value) { return (value << 0); }
    } DR7;

    volatile union DR8_T // DR8: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR8_BIT_T
        {
            unsigned D8 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D8_POS = 0;
        static constexpr unsigned D8_MASK = 0x0000ffff;
        static constexpr unsigned D8(unsigned value) { return (value << 0); }
    } DR8;

    volatile union DR9_T // DR9: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR9_BIT_T
        {
            unsigned D9 : 16; // bits 0..15 Backup data
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D9_POS = 0;
        static constexpr unsigned D9_MASK = 0x0000ffff;
        static constexpr unsigned D9(unsigned value) { return (value << 0); }
    } DR9;

    volatile union DR10_T // DR10: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR10_BIT_T
        {
            unsigned D10 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D10_POS = 0;
        static constexpr unsigned D10_MASK = 0x0000ffff;
        static constexpr unsigned D10(unsigned value) { return (value << 0); }
    } DR10;

    volatile union RTCCR_T // RTCCR: RTC clock calibration register (BKP_RTCCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) RTCCR_BIT_T
        {
            unsigned CAL  : 7; // bits 0..6 Calibration value
            unsigned CCO  : 1; // bit 7 Calibration Clock Output
            unsigned ASOE : 1; // bit 8 Alarm or second output enable
            unsigned ASOS : 1; // bit 9 Alarm or second output selection
            unsigned      : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned CAL_POS = 0;
        static constexpr unsigned CAL_MASK = 0x0000007f;
        static constexpr unsigned CAL(unsigned value) { return (value << 0); }
        static constexpr unsigned CCO_POS = 7;
        static constexpr unsigned CCO_MASK = 0x00000080;
        static constexpr unsigned CCO(unsigned value) { return (value << 7); }
        static constexpr unsigned ASOE_POS = 8;
        static constexpr unsigned ASOE_MASK = 0x00000100;
        static constexpr unsigned ASOE(unsigned value) { return (value << 8); }
        static constexpr unsigned ASOS_POS = 9;
        static constexpr unsigned ASOS_MASK = 0x00000200;
        static constexpr unsigned ASOS(unsigned value) { return (value << 9); }
    } RTCCR;

    volatile union CR_T // CR: Backup control register (BKP_CR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned TPE  : 1; // bit 0 Tamper pin enable
            unsigned TPAL : 1; // bit 1 Tamper pin active level
            unsigned      : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned TPE_POS = 0;
        static constexpr unsigned TPE_MASK = 0x00000001;
        static constexpr unsigned TPE(unsigned value) { return (value << 0); }
        static constexpr unsigned TPAL_POS = 1;
        static constexpr unsigned TPAL_MASK = 0x00000002;
        static constexpr unsigned TPAL(unsigned value) { return (value << 1); }
    } CR;

    volatile union CSR_T // CSR: BKP_CSR control/status register (BKP_CSR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned CTE  : 1; // bit 0 Clear Tamper event
            unsigned CTI  : 1; // bit 1 Clear Tamper Interrupt
            unsigned TPIE : 1; // bit 2 Tamper Pin interrupt enable
            unsigned      : 5; // bits 3..7 unused
            unsigned TEF  : 1; // bit 8 Tamper Event Flag
            unsigned TIF  : 1; // bit 9 Tamper Interrupt Flag
            unsigned      : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned CTE_POS = 0;
        static constexpr unsigned CTE_MASK = 0x00000001;
        static constexpr unsigned CTE(unsigned value) { return (value << 0); }
        static constexpr unsigned CTI_POS = 1;
        static constexpr unsigned CTI_MASK = 0x00000002;
        static constexpr unsigned CTI(unsigned value) { return (value << 1); }
        static constexpr unsigned TPIE_POS = 2;
        static constexpr unsigned TPIE_MASK = 0x00000004;
        static constexpr unsigned TPIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEF_POS = 8;
        static constexpr unsigned TEF_MASK = 0x00000100;
        static constexpr unsigned TEF(unsigned value) { return (value << 8); }
        static constexpr unsigned TIF_POS = 9;
        static constexpr unsigned TIF_MASK = 0x00000200;
        static constexpr unsigned TIF(unsigned value) { return (value << 9); }
    } CSR;

    uint8_t Reserved1[8];

    volatile union DR11_T // DR11: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR11_BIT_T
        {
            unsigned DR11 : 16; // bits 0..15 Backup data
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DR11_POS = 0;
        static constexpr unsigned DR11_MASK = 0x0000ffff;
        static constexpr unsigned DR11(unsigned value) { return (value << 0); }
    } DR11;

    volatile union DR12_T // DR12: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR12_BIT_T
        {
            unsigned DR12 : 16; // bits 0..15 Backup data
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DR12_POS = 0;
        static constexpr unsigned DR12_MASK = 0x0000ffff;
        static constexpr unsigned DR12(unsigned value) { return (value << 0); }
    } DR12;

    volatile union DR13_T // DR13: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR13_BIT_T
        {
            unsigned DR13 : 16; // bits 0..15 Backup data
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DR13_POS = 0;
        static constexpr unsigned DR13_MASK = 0x0000ffff;
        static constexpr unsigned DR13(unsigned value) { return (value << 0); }
    } DR13;

    volatile union DR14_T // DR14: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR14_BIT_T
        {
            unsigned D14 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D14_POS = 0;
        static constexpr unsigned D14_MASK = 0x0000ffff;
        static constexpr unsigned D14(unsigned value) { return (value << 0); }
    } DR14;

    volatile union DR15_T // DR15: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR15_BIT_T
        {
            unsigned D15 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D15_POS = 0;
        static constexpr unsigned D15_MASK = 0x0000ffff;
        static constexpr unsigned D15(unsigned value) { return (value << 0); }
    } DR15;

    volatile union DR16_T // DR16: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR16_BIT_T
        {
            unsigned D16 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D16_POS = 0;
        static constexpr unsigned D16_MASK = 0x0000ffff;
        static constexpr unsigned D16(unsigned value) { return (value << 0); }
    } DR16;

    volatile union DR17_T // DR17: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR17_BIT_T
        {
            unsigned D17 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D17_POS = 0;
        static constexpr unsigned D17_MASK = 0x0000ffff;
        static constexpr unsigned D17(unsigned value) { return (value << 0); }
    } DR17;

    volatile union DR18_T // DR18: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR18_BIT_T
        {
            unsigned D18 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D18_POS = 0;
        static constexpr unsigned D18_MASK = 0x0000ffff;
        static constexpr unsigned D18(unsigned value) { return (value << 0); }
    } DR18;

    volatile union DR19_T // DR19: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR19_BIT_T
        {
            unsigned D19 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D19_POS = 0;
        static constexpr unsigned D19_MASK = 0x0000ffff;
        static constexpr unsigned D19(unsigned value) { return (value << 0); }
    } DR19;

    volatile union DR20_T // DR20: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR20_BIT_T
        {
            unsigned D20 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D20_POS = 0;
        static constexpr unsigned D20_MASK = 0x0000ffff;
        static constexpr unsigned D20(unsigned value) { return (value << 0); }
    } DR20;

    volatile union DR21_T // DR21: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR21_BIT_T
        {
            unsigned D21 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D21_POS = 0;
        static constexpr unsigned D21_MASK = 0x0000ffff;
        static constexpr unsigned D21(unsigned value) { return (value << 0); }
    } DR21;

    volatile union DR22_T // DR22: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR22_BIT_T
        {
            unsigned D22 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D22_POS = 0;
        static constexpr unsigned D22_MASK = 0x0000ffff;
        static constexpr unsigned D22(unsigned value) { return (value << 0); }
    } DR22;

    volatile union DR23_T // DR23: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR23_BIT_T
        {
            unsigned D23 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D23_POS = 0;
        static constexpr unsigned D23_MASK = 0x0000ffff;
        static constexpr unsigned D23(unsigned value) { return (value << 0); }
    } DR23;

    volatile union DR24_T // DR24: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR24_BIT_T
        {
            unsigned D24 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D24_POS = 0;
        static constexpr unsigned D24_MASK = 0x0000ffff;
        static constexpr unsigned D24(unsigned value) { return (value << 0); }
    } DR24;

    volatile union DR25_T // DR25: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR25_BIT_T
        {
            unsigned D25 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D25_POS = 0;
        static constexpr unsigned D25_MASK = 0x0000ffff;
        static constexpr unsigned D25(unsigned value) { return (value << 0); }
    } DR25;

    volatile union DR26_T // DR26: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR26_BIT_T
        {
            unsigned D26 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D26_POS = 0;
        static constexpr unsigned D26_MASK = 0x0000ffff;
        static constexpr unsigned D26(unsigned value) { return (value << 0); }
    } DR26;

    volatile union DR27_T // DR27: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR27_BIT_T
        {
            unsigned D27 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D27_POS = 0;
        static constexpr unsigned D27_MASK = 0x0000ffff;
        static constexpr unsigned D27(unsigned value) { return (value << 0); }
    } DR27;

    volatile union DR28_T // DR28: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR28_BIT_T
        {
            unsigned D28 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D28_POS = 0;
        static constexpr unsigned D28_MASK = 0x0000ffff;
        static constexpr unsigned D28(unsigned value) { return (value << 0); }
    } DR28;

    volatile union DR29_T // DR29: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR29_BIT_T
        {
            unsigned D29 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D29_POS = 0;
        static constexpr unsigned D29_MASK = 0x0000ffff;
        static constexpr unsigned D29(unsigned value) { return (value << 0); }
    } DR29;

    volatile union DR30_T // DR30: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR30_BIT_T
        {
            unsigned D30 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D30_POS = 0;
        static constexpr unsigned D30_MASK = 0x0000ffff;
        static constexpr unsigned D30(unsigned value) { return (value << 0); }
    } DR30;

    volatile union DR31_T // DR31: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR31_BIT_T
        {
            unsigned D31 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D31_POS = 0;
        static constexpr unsigned D31_MASK = 0x0000ffff;
        static constexpr unsigned D31(unsigned value) { return (value << 0); }
    } DR31;

    volatile union DR32_T // DR32: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR32_BIT_T
        {
            unsigned D32 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D32_POS = 0;
        static constexpr unsigned D32_MASK = 0x0000ffff;
        static constexpr unsigned D32(unsigned value) { return (value << 0); }
    } DR32;

    volatile union DR33_T // DR33: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR33_BIT_T
        {
            unsigned D33 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D33_POS = 0;
        static constexpr unsigned D33_MASK = 0x0000ffff;
        static constexpr unsigned D33(unsigned value) { return (value << 0); }
    } DR33;

    volatile union DR34_T // DR34: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR34_BIT_T
        {
            unsigned D34 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D34_POS = 0;
        static constexpr unsigned D34_MASK = 0x0000ffff;
        static constexpr unsigned D34(unsigned value) { return (value << 0); }
    } DR34;

    volatile union DR35_T // DR35: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR35_BIT_T
        {
            unsigned D35 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D35_POS = 0;
        static constexpr unsigned D35_MASK = 0x0000ffff;
        static constexpr unsigned D35(unsigned value) { return (value << 0); }
    } DR35;

    volatile union DR36_T // DR36: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR36_BIT_T
        {
            unsigned D36 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D36_POS = 0;
        static constexpr unsigned D36_MASK = 0x0000ffff;
        static constexpr unsigned D36(unsigned value) { return (value << 0); }
    } DR36;

    volatile union DR37_T // DR37: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR37_BIT_T
        {
            unsigned D37 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D37_POS = 0;
        static constexpr unsigned D37_MASK = 0x0000ffff;
        static constexpr unsigned D37(unsigned value) { return (value << 0); }
    } DR37;

    volatile union DR38_T // DR38: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR38_BIT_T
        {
            unsigned D38 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D38_POS = 0;
        static constexpr unsigned D38_MASK = 0x0000ffff;
        static constexpr unsigned D38(unsigned value) { return (value << 0); }
    } DR38;

    volatile union DR39_T // DR39: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR39_BIT_T
        {
            unsigned D39 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D39_POS = 0;
        static constexpr unsigned D39_MASK = 0x0000ffff;
        static constexpr unsigned D39(unsigned value) { return (value << 0); }
    } DR39;

    volatile union DR40_T // DR40: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR40_BIT_T
        {
            unsigned D40 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D40_POS = 0;
        static constexpr unsigned D40_MASK = 0x0000ffff;
        static constexpr unsigned D40(unsigned value) { return (value << 0); }
    } DR40;

    volatile union DR41_T // DR41: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR41_BIT_T
        {
            unsigned D41 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D41_POS = 0;
        static constexpr unsigned D41_MASK = 0x0000ffff;
        static constexpr unsigned D41(unsigned value) { return (value << 0); }
    } DR41;

    volatile union DR42_T // DR42: Backup data register (BKP_DR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR42_BIT_T
        {
            unsigned D42 : 16; // bits 0..15 Backup data
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned D42_POS = 0;
        static constexpr unsigned D42_MASK = 0x0000ffff;
        static constexpr unsigned D42(unsigned value) { return (value << 0); }
    } DR42;

}; // struct BKP_T

static_assert(sizeof(BKP_T) == BKP_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp