#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) HASH_T
{
    static constexpr size_t INSTANCE_SIZE = 816;
    static constexpr size_t PADDED_INSTANCE_SIZE = 816;
    static constexpr intptr_t BASE_ADDRESS = 0x50060400;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DIN = 0x04;
    static constexpr intptr_t ADDR_OFFSET_STR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_HR0 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_HR1 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_HR2 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_HR3 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_HR4 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_IMR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_CSR0 = 0xf8;
    static constexpr intptr_t ADDR_OFFSET_CSR1 = 0xfc;
    static constexpr intptr_t ADDR_OFFSET_CSR2 = 0x100;
    static constexpr intptr_t ADDR_OFFSET_CSR3 = 0x104;
    static constexpr intptr_t ADDR_OFFSET_CSR4 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_CSR5 = 0x10c;
    static constexpr intptr_t ADDR_OFFSET_CSR6 = 0x110;
    static constexpr intptr_t ADDR_OFFSET_CSR7 = 0x114;
    static constexpr intptr_t ADDR_OFFSET_CSR8 = 0x118;
    static constexpr intptr_t ADDR_OFFSET_CSR9 = 0x11c;
    static constexpr intptr_t ADDR_OFFSET_CSR10 = 0x120;
    static constexpr intptr_t ADDR_OFFSET_CSR11 = 0x124;
    static constexpr intptr_t ADDR_OFFSET_CSR12 = 0x128;
    static constexpr intptr_t ADDR_OFFSET_CSR13 = 0x12c;
    static constexpr intptr_t ADDR_OFFSET_CSR14 = 0x130;
    static constexpr intptr_t ADDR_OFFSET_CSR15 = 0x134;
    static constexpr intptr_t ADDR_OFFSET_CSR16 = 0x138;
    static constexpr intptr_t ADDR_OFFSET_CSR17 = 0x13c;
    static constexpr intptr_t ADDR_OFFSET_CSR18 = 0x140;
    static constexpr intptr_t ADDR_OFFSET_CSR19 = 0x144;
    static constexpr intptr_t ADDR_OFFSET_CSR20 = 0x148;
    static constexpr intptr_t ADDR_OFFSET_CSR21 = 0x14c;
    static constexpr intptr_t ADDR_OFFSET_CSR22 = 0x150;
    static constexpr intptr_t ADDR_OFFSET_CSR23 = 0x154;
    static constexpr intptr_t ADDR_OFFSET_CSR24 = 0x158;
    static constexpr intptr_t ADDR_OFFSET_CSR25 = 0x15c;
    static constexpr intptr_t ADDR_OFFSET_CSR26 = 0x160;
    static constexpr intptr_t ADDR_OFFSET_CSR27 = 0x164;
    static constexpr intptr_t ADDR_OFFSET_CSR28 = 0x168;
    static constexpr intptr_t ADDR_OFFSET_CSR29 = 0x16c;
    static constexpr intptr_t ADDR_OFFSET_CSR30 = 0x170;
    static constexpr intptr_t ADDR_OFFSET_CSR31 = 0x174;
    static constexpr intptr_t ADDR_OFFSET_CSR32 = 0x178;
    static constexpr intptr_t ADDR_OFFSET_CSR33 = 0x17c;
    static constexpr intptr_t ADDR_OFFSET_CSR34 = 0x180;
    static constexpr intptr_t ADDR_OFFSET_CSR35 = 0x184;
    static constexpr intptr_t ADDR_OFFSET_CSR36 = 0x188;
    static constexpr intptr_t ADDR_OFFSET_CSR37 = 0x18c;
    static constexpr intptr_t ADDR_OFFSET_CSR38 = 0x190;
    static constexpr intptr_t ADDR_OFFSET_CSR39 = 0x194;
    static constexpr intptr_t ADDR_OFFSET_CSR40 = 0x198;
    static constexpr intptr_t ADDR_OFFSET_CSR41 = 0x19c;
    static constexpr intptr_t ADDR_OFFSET_CSR42 = 0x1a0;
    static constexpr intptr_t ADDR_OFFSET_CSR43 = 0x1a4;
    static constexpr intptr_t ADDR_OFFSET_CSR44 = 0x1a8;
    static constexpr intptr_t ADDR_OFFSET_CSR45 = 0x1ac;
    static constexpr intptr_t ADDR_OFFSET_CSR46 = 0x1b0;
    static constexpr intptr_t ADDR_OFFSET_CSR47 = 0x1b4;
    static constexpr intptr_t ADDR_OFFSET_CSR48 = 0x1b8;
    static constexpr intptr_t ADDR_OFFSET_CSR49 = 0x1bc;
    static constexpr intptr_t ADDR_OFFSET_CSR50 = 0x1c0;
    static constexpr intptr_t ADDR_OFFSET_CSR51 = 0x1c4;
    static constexpr intptr_t ADDR_OFFSET_CSR52 = 0x1c8;
    static constexpr intptr_t ADDR_OFFSET_CSR53 = 0x1cc;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR0 = 0x310;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR1 = 0x314;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR2 = 0x318;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR3 = 0x31c;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR4 = 0x320;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR5 = 0x324;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR6 = 0x328;
    static constexpr intptr_t ADDR_OFFSET_HASH_HR7 = 0x32c;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned          : 2; // bits 0..1 unused
            unsigned INIT     : 1; // bit 2 Initialize message digest calculation
            unsigned DMAE     : 1; // bit 3 DMA enable
            unsigned DATATYPE : 2; // bits 4..5 Data type selection
            unsigned MODE     : 1; // bit 6 Mode selection
            unsigned ALGO0    : 1; // bit 7 Algorithm selection
            unsigned NBW      : 4; // bits 8..11 Number of words already pushed
            unsigned DINNE    : 1; // bit 12 DIN not empty
            unsigned MDMAT    : 1; // bit 13 Multiple DMA Transfers
            unsigned          : 2; // bits 14..15 unused
            unsigned LKEY     : 1; // bit 16 Long key selection
            unsigned          : 1; // bit 17 unused
            unsigned ALGO1    : 1; // bit 18 ALGO
            unsigned          : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned INIT_POS = 2;
        static constexpr unsigned INIT_MASK = 0x00000004;
        static constexpr unsigned INIT(unsigned value) { return (value << 2); }
        static constexpr unsigned DMAE_POS = 3;
        static constexpr unsigned DMAE_MASK = 0x00000008;
        static constexpr unsigned DMAE(unsigned value) { return (value << 3); }
        static constexpr unsigned DATATYPE_POS = 4;
        static constexpr unsigned DATATYPE_MASK = 0x00000030;
        static constexpr unsigned DATATYPE(unsigned value) { return (value << 4); }
        static constexpr unsigned MODE_POS = 6;
        static constexpr unsigned MODE_MASK = 0x00000040;
        static constexpr unsigned MODE(unsigned value) { return (value << 6); }
        static constexpr unsigned ALGO0_POS = 7;
        static constexpr unsigned ALGO0_MASK = 0x00000080;
        static constexpr unsigned ALGO0(unsigned value) { return (value << 7); }
        static constexpr unsigned NBW_POS = 8;
        static constexpr unsigned NBW_MASK = 0x00000f00;
        static constexpr unsigned NBW(unsigned value) { return (value << 8); }
        static constexpr unsigned DINNE_POS = 12;
        static constexpr unsigned DINNE_MASK = 0x00001000;
        static constexpr unsigned DINNE(unsigned value) { return (value << 12); }
        static constexpr unsigned MDMAT_POS = 13;
        static constexpr unsigned MDMAT_MASK = 0x00002000;
        static constexpr unsigned MDMAT(unsigned value) { return (value << 13); }
        static constexpr unsigned LKEY_POS = 16;
        static constexpr unsigned LKEY_MASK = 0x00010000;
        static constexpr unsigned LKEY(unsigned value) { return (value << 16); }
        static constexpr unsigned ALGO1_POS = 18;
        static constexpr unsigned ALGO1_MASK = 0x00040000;
        static constexpr unsigned ALGO1(unsigned value) { return (value << 18); }
    } CR;

    volatile union DIN_T // DIN: data input register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIN_BIT_T
        {
            unsigned DATAIN : 32; // bits 0..31 Data input    
        } bit;
    
        static constexpr unsigned DATAIN_POS = 0;
        static constexpr unsigned DATAIN_MASK = 0xffffffff;
        static constexpr unsigned DATAIN(unsigned value) { return (value << 0); }
    } DIN;

    volatile union STR_T // STR: start register 
    {
        uint32_t reg;
        struct __attribute__((packed)) STR_BIT_T
        {
            unsigned NBLW : 5; // bits 0..4 Number of valid bits in the last word of the message
            unsigned      : 3; // bits 5..7 unused
            unsigned DCAL : 1; // bit 8 Digest calculation
            unsigned      : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned NBLW_POS = 0;
        static constexpr unsigned NBLW_MASK = 0x0000001f;
        static constexpr unsigned NBLW(unsigned value) { return (value << 0); }
        static constexpr unsigned DCAL_POS = 8;
        static constexpr unsigned DCAL_MASK = 0x00000100;
        static constexpr unsigned DCAL(unsigned value) { return (value << 8); }
    } STR;

    volatile union HR0_T // HR0: digest registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) HR0_BIT_T
        {
            unsigned H0 : 32; // bits 0..31 H0    
        } bit;
    
        static constexpr unsigned H0_POS = 0;
        static constexpr unsigned H0_MASK = 0xffffffff;
        static constexpr unsigned H0(unsigned value) { return (value << 0); }
    } HR0;

    volatile union HR1_T // HR1: digest registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) HR1_BIT_T
        {
            unsigned H1 : 32; // bits 0..31 H1    
        } bit;
    
        static constexpr unsigned H1_POS = 0;
        static constexpr unsigned H1_MASK = 0xffffffff;
        static constexpr unsigned H1(unsigned value) { return (value << 0); }
    } HR1;

    volatile union HR2_T // HR2: digest registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) HR2_BIT_T
        {
            unsigned H2 : 32; // bits 0..31 H2    
        } bit;
    
        static constexpr unsigned H2_POS = 0;
        static constexpr unsigned H2_MASK = 0xffffffff;
        static constexpr unsigned H2(unsigned value) { return (value << 0); }
    } HR2;

    volatile union HR3_T // HR3: digest registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) HR3_BIT_T
        {
            unsigned H3 : 32; // bits 0..31 H3    
        } bit;
    
        static constexpr unsigned H3_POS = 0;
        static constexpr unsigned H3_MASK = 0xffffffff;
        static constexpr unsigned H3(unsigned value) { return (value << 0); }
    } HR3;

    volatile union HR4_T // HR4: digest registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) HR4_BIT_T
        {
            unsigned H4 : 32; // bits 0..31 H4    
        } bit;
    
        static constexpr unsigned H4_POS = 0;
        static constexpr unsigned H4_MASK = 0xffffffff;
        static constexpr unsigned H4(unsigned value) { return (value << 0); }
    } HR4;

    volatile union IMR_T // IMR: interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IMR_BIT_T
        {
            unsigned DINIE : 1; // bit 0 Data input interrupt enable
            unsigned DCIE  : 1; // bit 1 Digest calculation completion interrupt enable
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned DINIE_POS = 0;
        static constexpr unsigned DINIE_MASK = 0x00000001;
        static constexpr unsigned DINIE(unsigned value) { return (value << 0); }
        static constexpr unsigned DCIE_POS = 1;
        static constexpr unsigned DCIE_MASK = 0x00000002;
        static constexpr unsigned DCIE(unsigned value) { return (value << 1); }
    } IMR;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned DINIS : 1; // bit 0 Data input interrupt status
            unsigned DCIS  : 1; // bit 1 Digest calculation completion interrupt status
            unsigned DMAS  : 1; // bit 2 DMA Status
            unsigned BUSY  : 1; // bit 3 Busy bit
            unsigned       : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned DINIS_POS = 0;
        static constexpr unsigned DINIS_MASK = 0x00000001;
        static constexpr unsigned DINIS(unsigned value) { return (value << 0); }
        static constexpr unsigned DCIS_POS = 1;
        static constexpr unsigned DCIS_MASK = 0x00000002;
        static constexpr unsigned DCIS(unsigned value) { return (value << 1); }
        static constexpr unsigned DMAS_POS = 2;
        static constexpr unsigned DMAS_MASK = 0x00000004;
        static constexpr unsigned DMAS(unsigned value) { return (value << 2); }
        static constexpr unsigned BUSY_POS = 3;
        static constexpr unsigned BUSY_MASK = 0x00000008;
        static constexpr unsigned BUSY(unsigned value) { return (value << 3); }
    } SR;

    uint8_t Reserved1[208];

    volatile union CSR0_T // CSR0: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR0_BIT_T
        {
            unsigned CSR0 : 32; // bits 0..31 CSR0    
        } bit;
    
        static constexpr unsigned CSR0_POS = 0;
        static constexpr unsigned CSR0_MASK = 0xffffffff;
        static constexpr unsigned CSR0(unsigned value) { return (value << 0); }
    } CSR0;

    volatile union CSR1_T // CSR1: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR1_BIT_T
        {
            unsigned CSR1 : 32; // bits 0..31 CSR1    
        } bit;
    
        static constexpr unsigned CSR1_POS = 0;
        static constexpr unsigned CSR1_MASK = 0xffffffff;
        static constexpr unsigned CSR1(unsigned value) { return (value << 0); }
    } CSR1;

    volatile union CSR2_T // CSR2: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR2_BIT_T
        {
            unsigned CSR2 : 32; // bits 0..31 CSR2    
        } bit;
    
        static constexpr unsigned CSR2_POS = 0;
        static constexpr unsigned CSR2_MASK = 0xffffffff;
        static constexpr unsigned CSR2(unsigned value) { return (value << 0); }
    } CSR2;

    volatile union CSR3_T // CSR3: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR3_BIT_T
        {
            unsigned CSR3 : 32; // bits 0..31 CSR3    
        } bit;
    
        static constexpr unsigned CSR3_POS = 0;
        static constexpr unsigned CSR3_MASK = 0xffffffff;
        static constexpr unsigned CSR3(unsigned value) { return (value << 0); }
    } CSR3;

    volatile union CSR4_T // CSR4: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR4_BIT_T
        {
            unsigned CSR4 : 32; // bits 0..31 CSR4    
        } bit;
    
        static constexpr unsigned CSR4_POS = 0;
        static constexpr unsigned CSR4_MASK = 0xffffffff;
        static constexpr unsigned CSR4(unsigned value) { return (value << 0); }
    } CSR4;

    volatile union CSR5_T // CSR5: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR5_BIT_T
        {
            unsigned CSR5 : 32; // bits 0..31 CSR5    
        } bit;
    
        static constexpr unsigned CSR5_POS = 0;
        static constexpr unsigned CSR5_MASK = 0xffffffff;
        static constexpr unsigned CSR5(unsigned value) { return (value << 0); }
    } CSR5;

    volatile union CSR6_T // CSR6: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR6_BIT_T
        {
            unsigned CSR6 : 32; // bits 0..31 CSR6    
        } bit;
    
        static constexpr unsigned CSR6_POS = 0;
        static constexpr unsigned CSR6_MASK = 0xffffffff;
        static constexpr unsigned CSR6(unsigned value) { return (value << 0); }
    } CSR6;

    volatile union CSR7_T // CSR7: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR7_BIT_T
        {
            unsigned CSR7 : 32; // bits 0..31 CSR7    
        } bit;
    
        static constexpr unsigned CSR7_POS = 0;
        static constexpr unsigned CSR7_MASK = 0xffffffff;
        static constexpr unsigned CSR7(unsigned value) { return (value << 0); }
    } CSR7;

    volatile union CSR8_T // CSR8: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR8_BIT_T
        {
            unsigned CSR8 : 32; // bits 0..31 CSR8    
        } bit;
    
        static constexpr unsigned CSR8_POS = 0;
        static constexpr unsigned CSR8_MASK = 0xffffffff;
        static constexpr unsigned CSR8(unsigned value) { return (value << 0); }
    } CSR8;

    volatile union CSR9_T // CSR9: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR9_BIT_T
        {
            unsigned CSR9 : 32; // bits 0..31 CSR9    
        } bit;
    
        static constexpr unsigned CSR9_POS = 0;
        static constexpr unsigned CSR9_MASK = 0xffffffff;
        static constexpr unsigned CSR9(unsigned value) { return (value << 0); }
    } CSR9;

    volatile union CSR10_T // CSR10: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR10_BIT_T
        {
            unsigned CSR10 : 32; // bits 0..31 CSR10    
        } bit;
    
        static constexpr unsigned CSR10_POS = 0;
        static constexpr unsigned CSR10_MASK = 0xffffffff;
        static constexpr unsigned CSR10(unsigned value) { return (value << 0); }
    } CSR10;

    volatile union CSR11_T // CSR11: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR11_BIT_T
        {
            unsigned CSR11 : 32; // bits 0..31 CSR11    
        } bit;
    
        static constexpr unsigned CSR11_POS = 0;
        static constexpr unsigned CSR11_MASK = 0xffffffff;
        static constexpr unsigned CSR11(unsigned value) { return (value << 0); }
    } CSR11;

    volatile union CSR12_T // CSR12: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR12_BIT_T
        {
            unsigned CSR12 : 32; // bits 0..31 CSR12    
        } bit;
    
        static constexpr unsigned CSR12_POS = 0;
        static constexpr unsigned CSR12_MASK = 0xffffffff;
        static constexpr unsigned CSR12(unsigned value) { return (value << 0); }
    } CSR12;

    volatile union CSR13_T // CSR13: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR13_BIT_T
        {
            unsigned CSR13 : 32; // bits 0..31 CSR13    
        } bit;
    
        static constexpr unsigned CSR13_POS = 0;
        static constexpr unsigned CSR13_MASK = 0xffffffff;
        static constexpr unsigned CSR13(unsigned value) { return (value << 0); }
    } CSR13;

    volatile union CSR14_T // CSR14: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR14_BIT_T
        {
            unsigned CSR14 : 32; // bits 0..31 CSR14    
        } bit;
    
        static constexpr unsigned CSR14_POS = 0;
        static constexpr unsigned CSR14_MASK = 0xffffffff;
        static constexpr unsigned CSR14(unsigned value) { return (value << 0); }
    } CSR14;

    volatile union CSR15_T // CSR15: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR15_BIT_T
        {
            unsigned CSR15 : 32; // bits 0..31 CSR15    
        } bit;
    
        static constexpr unsigned CSR15_POS = 0;
        static constexpr unsigned CSR15_MASK = 0xffffffff;
        static constexpr unsigned CSR15(unsigned value) { return (value << 0); }
    } CSR15;

    volatile union CSR16_T // CSR16: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR16_BIT_T
        {
            unsigned CSR16 : 32; // bits 0..31 CSR16    
        } bit;
    
        static constexpr unsigned CSR16_POS = 0;
        static constexpr unsigned CSR16_MASK = 0xffffffff;
        static constexpr unsigned CSR16(unsigned value) { return (value << 0); }
    } CSR16;

    volatile union CSR17_T // CSR17: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR17_BIT_T
        {
            unsigned CSR17 : 32; // bits 0..31 CSR17    
        } bit;
    
        static constexpr unsigned CSR17_POS = 0;
        static constexpr unsigned CSR17_MASK = 0xffffffff;
        static constexpr unsigned CSR17(unsigned value) { return (value << 0); }
    } CSR17;

    volatile union CSR18_T // CSR18: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR18_BIT_T
        {
            unsigned CSR18 : 32; // bits 0..31 CSR18    
        } bit;
    
        static constexpr unsigned CSR18_POS = 0;
        static constexpr unsigned CSR18_MASK = 0xffffffff;
        static constexpr unsigned CSR18(unsigned value) { return (value << 0); }
    } CSR18;

    volatile union CSR19_T // CSR19: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR19_BIT_T
        {
            unsigned CSR19 : 32; // bits 0..31 CSR19    
        } bit;
    
        static constexpr unsigned CSR19_POS = 0;
        static constexpr unsigned CSR19_MASK = 0xffffffff;
        static constexpr unsigned CSR19(unsigned value) { return (value << 0); }
    } CSR19;

    volatile union CSR20_T // CSR20: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR20_BIT_T
        {
            unsigned CSR20 : 32; // bits 0..31 CSR20    
        } bit;
    
        static constexpr unsigned CSR20_POS = 0;
        static constexpr unsigned CSR20_MASK = 0xffffffff;
        static constexpr unsigned CSR20(unsigned value) { return (value << 0); }
    } CSR20;

    volatile union CSR21_T // CSR21: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR21_BIT_T
        {
            unsigned CSR21 : 32; // bits 0..31 CSR21    
        } bit;
    
        static constexpr unsigned CSR21_POS = 0;
        static constexpr unsigned CSR21_MASK = 0xffffffff;
        static constexpr unsigned CSR21(unsigned value) { return (value << 0); }
    } CSR21;

    volatile union CSR22_T // CSR22: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR22_BIT_T
        {
            unsigned CSR22 : 32; // bits 0..31 CSR22    
        } bit;
    
        static constexpr unsigned CSR22_POS = 0;
        static constexpr unsigned CSR22_MASK = 0xffffffff;
        static constexpr unsigned CSR22(unsigned value) { return (value << 0); }
    } CSR22;

    volatile union CSR23_T // CSR23: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR23_BIT_T
        {
            unsigned CSR23 : 32; // bits 0..31 CSR23    
        } bit;
    
        static constexpr unsigned CSR23_POS = 0;
        static constexpr unsigned CSR23_MASK = 0xffffffff;
        static constexpr unsigned CSR23(unsigned value) { return (value << 0); }
    } CSR23;

    volatile union CSR24_T // CSR24: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR24_BIT_T
        {
            unsigned CSR24 : 32; // bits 0..31 CSR24    
        } bit;
    
        static constexpr unsigned CSR24_POS = 0;
        static constexpr unsigned CSR24_MASK = 0xffffffff;
        static constexpr unsigned CSR24(unsigned value) { return (value << 0); }
    } CSR24;

    volatile union CSR25_T // CSR25: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR25_BIT_T
        {
            unsigned CSR25 : 32; // bits 0..31 CSR25    
        } bit;
    
        static constexpr unsigned CSR25_POS = 0;
        static constexpr unsigned CSR25_MASK = 0xffffffff;
        static constexpr unsigned CSR25(unsigned value) { return (value << 0); }
    } CSR25;

    volatile union CSR26_T // CSR26: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR26_BIT_T
        {
            unsigned CSR26 : 32; // bits 0..31 CSR26    
        } bit;
    
        static constexpr unsigned CSR26_POS = 0;
        static constexpr unsigned CSR26_MASK = 0xffffffff;
        static constexpr unsigned CSR26(unsigned value) { return (value << 0); }
    } CSR26;

    volatile union CSR27_T // CSR27: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR27_BIT_T
        {
            unsigned CSR27 : 32; // bits 0..31 CSR27    
        } bit;
    
        static constexpr unsigned CSR27_POS = 0;
        static constexpr unsigned CSR27_MASK = 0xffffffff;
        static constexpr unsigned CSR27(unsigned value) { return (value << 0); }
    } CSR27;

    volatile union CSR28_T // CSR28: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR28_BIT_T
        {
            unsigned CSR28 : 32; // bits 0..31 CSR28    
        } bit;
    
        static constexpr unsigned CSR28_POS = 0;
        static constexpr unsigned CSR28_MASK = 0xffffffff;
        static constexpr unsigned CSR28(unsigned value) { return (value << 0); }
    } CSR28;

    volatile union CSR29_T // CSR29: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR29_BIT_T
        {
            unsigned CSR29 : 32; // bits 0..31 CSR29    
        } bit;
    
        static constexpr unsigned CSR29_POS = 0;
        static constexpr unsigned CSR29_MASK = 0xffffffff;
        static constexpr unsigned CSR29(unsigned value) { return (value << 0); }
    } CSR29;

    volatile union CSR30_T // CSR30: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR30_BIT_T
        {
            unsigned CSR30 : 32; // bits 0..31 CSR30    
        } bit;
    
        static constexpr unsigned CSR30_POS = 0;
        static constexpr unsigned CSR30_MASK = 0xffffffff;
        static constexpr unsigned CSR30(unsigned value) { return (value << 0); }
    } CSR30;

    volatile union CSR31_T // CSR31: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR31_BIT_T
        {
            unsigned CSR31 : 32; // bits 0..31 CSR31    
        } bit;
    
        static constexpr unsigned CSR31_POS = 0;
        static constexpr unsigned CSR31_MASK = 0xffffffff;
        static constexpr unsigned CSR31(unsigned value) { return (value << 0); }
    } CSR31;

    volatile union CSR32_T // CSR32: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR32_BIT_T
        {
            unsigned CSR32 : 32; // bits 0..31 CSR32    
        } bit;
    
        static constexpr unsigned CSR32_POS = 0;
        static constexpr unsigned CSR32_MASK = 0xffffffff;
        static constexpr unsigned CSR32(unsigned value) { return (value << 0); }
    } CSR32;

    volatile union CSR33_T // CSR33: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR33_BIT_T
        {
            unsigned CSR33 : 32; // bits 0..31 CSR33    
        } bit;
    
        static constexpr unsigned CSR33_POS = 0;
        static constexpr unsigned CSR33_MASK = 0xffffffff;
        static constexpr unsigned CSR33(unsigned value) { return (value << 0); }
    } CSR33;

    volatile union CSR34_T // CSR34: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR34_BIT_T
        {
            unsigned CSR34 : 32; // bits 0..31 CSR34    
        } bit;
    
        static constexpr unsigned CSR34_POS = 0;
        static constexpr unsigned CSR34_MASK = 0xffffffff;
        static constexpr unsigned CSR34(unsigned value) { return (value << 0); }
    } CSR34;

    volatile union CSR35_T // CSR35: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR35_BIT_T
        {
            unsigned CSR35 : 32; // bits 0..31 CSR35    
        } bit;
    
        static constexpr unsigned CSR35_POS = 0;
        static constexpr unsigned CSR35_MASK = 0xffffffff;
        static constexpr unsigned CSR35(unsigned value) { return (value << 0); }
    } CSR35;

    volatile union CSR36_T // CSR36: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR36_BIT_T
        {
            unsigned CSR36 : 32; // bits 0..31 CSR36    
        } bit;
    
        static constexpr unsigned CSR36_POS = 0;
        static constexpr unsigned CSR36_MASK = 0xffffffff;
        static constexpr unsigned CSR36(unsigned value) { return (value << 0); }
    } CSR36;

    volatile union CSR37_T // CSR37: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR37_BIT_T
        {
            unsigned CSR37 : 32; // bits 0..31 CSR37    
        } bit;
    
        static constexpr unsigned CSR37_POS = 0;
        static constexpr unsigned CSR37_MASK = 0xffffffff;
        static constexpr unsigned CSR37(unsigned value) { return (value << 0); }
    } CSR37;

    volatile union CSR38_T // CSR38: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR38_BIT_T
        {
            unsigned CSR38 : 32; // bits 0..31 CSR38    
        } bit;
    
        static constexpr unsigned CSR38_POS = 0;
        static constexpr unsigned CSR38_MASK = 0xffffffff;
        static constexpr unsigned CSR38(unsigned value) { return (value << 0); }
    } CSR38;

    volatile union CSR39_T // CSR39: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR39_BIT_T
        {
            unsigned CSR39 : 32; // bits 0..31 CSR39    
        } bit;
    
        static constexpr unsigned CSR39_POS = 0;
        static constexpr unsigned CSR39_MASK = 0xffffffff;
        static constexpr unsigned CSR39(unsigned value) { return (value << 0); }
    } CSR39;

    volatile union CSR40_T // CSR40: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR40_BIT_T
        {
            unsigned CSR40 : 32; // bits 0..31 CSR40    
        } bit;
    
        static constexpr unsigned CSR40_POS = 0;
        static constexpr unsigned CSR40_MASK = 0xffffffff;
        static constexpr unsigned CSR40(unsigned value) { return (value << 0); }
    } CSR40;

    volatile union CSR41_T // CSR41: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR41_BIT_T
        {
            unsigned CSR41 : 32; // bits 0..31 CSR41    
        } bit;
    
        static constexpr unsigned CSR41_POS = 0;
        static constexpr unsigned CSR41_MASK = 0xffffffff;
        static constexpr unsigned CSR41(unsigned value) { return (value << 0); }
    } CSR41;

    volatile union CSR42_T // CSR42: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR42_BIT_T
        {
            unsigned CSR42 : 32; // bits 0..31 CSR42    
        } bit;
    
        static constexpr unsigned CSR42_POS = 0;
        static constexpr unsigned CSR42_MASK = 0xffffffff;
        static constexpr unsigned CSR42(unsigned value) { return (value << 0); }
    } CSR42;

    volatile union CSR43_T // CSR43: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR43_BIT_T
        {
            unsigned CSR43 : 32; // bits 0..31 CSR43    
        } bit;
    
        static constexpr unsigned CSR43_POS = 0;
        static constexpr unsigned CSR43_MASK = 0xffffffff;
        static constexpr unsigned CSR43(unsigned value) { return (value << 0); }
    } CSR43;

    volatile union CSR44_T // CSR44: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR44_BIT_T
        {
            unsigned CSR44 : 32; // bits 0..31 CSR44    
        } bit;
    
        static constexpr unsigned CSR44_POS = 0;
        static constexpr unsigned CSR44_MASK = 0xffffffff;
        static constexpr unsigned CSR44(unsigned value) { return (value << 0); }
    } CSR44;

    volatile union CSR45_T // CSR45: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR45_BIT_T
        {
            unsigned CSR45 : 32; // bits 0..31 CSR45    
        } bit;
    
        static constexpr unsigned CSR45_POS = 0;
        static constexpr unsigned CSR45_MASK = 0xffffffff;
        static constexpr unsigned CSR45(unsigned value) { return (value << 0); }
    } CSR45;

    volatile union CSR46_T // CSR46: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR46_BIT_T
        {
            unsigned CSR46 : 32; // bits 0..31 CSR46    
        } bit;
    
        static constexpr unsigned CSR46_POS = 0;
        static constexpr unsigned CSR46_MASK = 0xffffffff;
        static constexpr unsigned CSR46(unsigned value) { return (value << 0); }
    } CSR46;

    volatile union CSR47_T // CSR47: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR47_BIT_T
        {
            unsigned CSR47 : 32; // bits 0..31 CSR47    
        } bit;
    
        static constexpr unsigned CSR47_POS = 0;
        static constexpr unsigned CSR47_MASK = 0xffffffff;
        static constexpr unsigned CSR47(unsigned value) { return (value << 0); }
    } CSR47;

    volatile union CSR48_T // CSR48: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR48_BIT_T
        {
            unsigned CSR48 : 32; // bits 0..31 CSR48    
        } bit;
    
        static constexpr unsigned CSR48_POS = 0;
        static constexpr unsigned CSR48_MASK = 0xffffffff;
        static constexpr unsigned CSR48(unsigned value) { return (value << 0); }
    } CSR48;

    volatile union CSR49_T // CSR49: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR49_BIT_T
        {
            unsigned CSR49 : 32; // bits 0..31 CSR49    
        } bit;
    
        static constexpr unsigned CSR49_POS = 0;
        static constexpr unsigned CSR49_MASK = 0xffffffff;
        static constexpr unsigned CSR49(unsigned value) { return (value << 0); }
    } CSR49;

    volatile union CSR50_T // CSR50: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR50_BIT_T
        {
            unsigned CSR50 : 32; // bits 0..31 CSR50    
        } bit;
    
        static constexpr unsigned CSR50_POS = 0;
        static constexpr unsigned CSR50_MASK = 0xffffffff;
        static constexpr unsigned CSR50(unsigned value) { return (value << 0); }
    } CSR50;

    volatile union CSR51_T // CSR51: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR51_BIT_T
        {
            unsigned CSR51 : 32; // bits 0..31 CSR51    
        } bit;
    
        static constexpr unsigned CSR51_POS = 0;
        static constexpr unsigned CSR51_MASK = 0xffffffff;
        static constexpr unsigned CSR51(unsigned value) { return (value << 0); }
    } CSR51;

    volatile union CSR52_T // CSR52: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR52_BIT_T
        {
            unsigned CSR52 : 32; // bits 0..31 CSR52    
        } bit;
    
        static constexpr unsigned CSR52_POS = 0;
        static constexpr unsigned CSR52_MASK = 0xffffffff;
        static constexpr unsigned CSR52(unsigned value) { return (value << 0); }
    } CSR52;

    volatile union CSR53_T // CSR53: context swap registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR53_BIT_T
        {
            unsigned CSR53 : 32; // bits 0..31 CSR53    
        } bit;
    
        static constexpr unsigned CSR53_POS = 0;
        static constexpr unsigned CSR53_MASK = 0xffffffff;
        static constexpr unsigned CSR53(unsigned value) { return (value << 0); }
    } CSR53;

    uint8_t Reserved2[320];

    volatile union HASH_HR0_T // HASH_HR0: HASH digest register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR0_BIT_T
        {
            unsigned H0 : 32; // bits 0..31 H0    
        } bit;
    
        static constexpr unsigned H0_POS = 0;
        static constexpr unsigned H0_MASK = 0xffffffff;
        static constexpr unsigned H0(unsigned value) { return (value << 0); }
    } HASH_HR0;

    volatile union HASH_HR1_T // HASH_HR1: read-only 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR1_BIT_T
        {
            unsigned H1 : 32; // bits 0..31 H1    
        } bit;
    
        static constexpr unsigned H1_POS = 0;
        static constexpr unsigned H1_MASK = 0xffffffff;
        static constexpr unsigned H1(unsigned value) { return (value << 0); }
    } HASH_HR1;

    volatile union HASH_HR2_T // HASH_HR2: read-only 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR2_BIT_T
        {
            unsigned H2 : 32; // bits 0..31 H2    
        } bit;
    
        static constexpr unsigned H2_POS = 0;
        static constexpr unsigned H2_MASK = 0xffffffff;
        static constexpr unsigned H2(unsigned value) { return (value << 0); }
    } HASH_HR2;

    volatile union HASH_HR3_T // HASH_HR3: read-only 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR3_BIT_T
        {
            unsigned H3 : 32; // bits 0..31 H3    
        } bit;
    
        static constexpr unsigned H3_POS = 0;
        static constexpr unsigned H3_MASK = 0xffffffff;
        static constexpr unsigned H3(unsigned value) { return (value << 0); }
    } HASH_HR3;

    volatile union HASH_HR4_T // HASH_HR4: read-only 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR4_BIT_T
        {
            unsigned H4 : 32; // bits 0..31 H4    
        } bit;
    
        static constexpr unsigned H4_POS = 0;
        static constexpr unsigned H4_MASK = 0xffffffff;
        static constexpr unsigned H4(unsigned value) { return (value << 0); }
    } HASH_HR4;

    volatile union HASH_HR5_T // HASH_HR5: read-only 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR5_BIT_T
        {
            unsigned H5 : 32; // bits 0..31 H5    
        } bit;
    
        static constexpr unsigned H5_POS = 0;
        static constexpr unsigned H5_MASK = 0xffffffff;
        static constexpr unsigned H5(unsigned value) { return (value << 0); }
    } HASH_HR5;

    volatile union HASH_HR6_T // HASH_HR6: read-only 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR6_BIT_T
        {
            unsigned H6 : 32; // bits 0..31 H6    
        } bit;
    
        static constexpr unsigned H6_POS = 0;
        static constexpr unsigned H6_MASK = 0xffffffff;
        static constexpr unsigned H6(unsigned value) { return (value << 0); }
    } HASH_HR6;

    volatile union HASH_HR7_T // HASH_HR7: read-only 
    {
        uint32_t reg;
        struct __attribute__((packed)) HASH_HR7_BIT_T
        {
            unsigned H7 : 32; // bits 0..31 H7    
        } bit;
    
        static constexpr unsigned H7_POS = 0;
        static constexpr unsigned H7_MASK = 0xffffffff;
        static constexpr unsigned H7(unsigned value) { return (value << 0); }
    } HASH_HR7;

}; // struct HASH_T

static_assert(sizeof(HASH_T) == HASH_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp