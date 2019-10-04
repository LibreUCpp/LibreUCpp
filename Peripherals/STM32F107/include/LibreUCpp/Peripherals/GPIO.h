#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) GPIO_T
{
    static constexpr size_t INSTANCE_SIZE = 28;
    static constexpr size_t PADDED_INSTANCE_SIZE = 28;
    static constexpr intptr_t BASE_ADDRESS_GPIOA = 0x40010800;
    static constexpr intptr_t BASE_ADDRESS_GPIOB = 0x40010c00;
    static constexpr intptr_t BASE_ADDRESS_GPIOC = 0x40011000;
    static constexpr intptr_t BASE_ADDRESS_GPIOD = 0x40011400;
    static constexpr intptr_t BASE_ADDRESS_GPIOE = 0x40011800;

    static constexpr intptr_t ADDR_OFFSET_CRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CRH = 0x04;
    static constexpr intptr_t ADDR_OFFSET_IDR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_ODR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_BSRR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_BRR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_LCKR = 0x18;

    volatile union CRL_T // CRL: Port configuration register low (GPIOn_CRL) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CRL_BIT_T
        {
            unsigned MODE0 : 2; // bits 0..1 Port n.0 mode bits
            unsigned CNF0  : 2; // bits 2..3 Port n.0 configuration bits
            unsigned MODE1 : 2; // bits 4..5 Port n.1 mode bits
            unsigned CNF1  : 2; // bits 6..7 Port n.1 configuration bits
            unsigned MODE2 : 2; // bits 8..9 Port n.2 mode bits
            unsigned CNF2  : 2; // bits 10..11 Port n.2 configuration bits
            unsigned MODE3 : 2; // bits 12..13 Port n.3 mode bits
            unsigned CNF3  : 2; // bits 14..15 Port n.3 configuration bits
            unsigned MODE4 : 2; // bits 16..17 Port n.4 mode bits
            unsigned CNF4  : 2; // bits 18..19 Port n.4 configuration bits
            unsigned MODE5 : 2; // bits 20..21 Port n.5 mode bits
            unsigned CNF5  : 2; // bits 22..23 Port n.5 configuration bits
            unsigned MODE6 : 2; // bits 24..25 Port n.6 mode bits
            unsigned CNF6  : 2; // bits 26..27 Port n.6 configuration bits
            unsigned MODE7 : 2; // bits 28..29 Port n.7 mode bits
            unsigned CNF7  : 2; // bits 30..31 Port n.7 configuration bits    
        } bit;
    
        static constexpr unsigned MODE0_POS = 0;
        static constexpr unsigned MODE0_MASK = 0x00000003;
        static constexpr unsigned MODE0(unsigned value) { return (value << 0); }
        static constexpr unsigned CNF0_POS = 2;
        static constexpr unsigned CNF0_MASK = 0x0000000c;
        static constexpr unsigned CNF0(unsigned value) { return (value << 2); }
        static constexpr unsigned MODE1_POS = 4;
        static constexpr unsigned MODE1_MASK = 0x00000030;
        static constexpr unsigned MODE1(unsigned value) { return (value << 4); }
        static constexpr unsigned CNF1_POS = 6;
        static constexpr unsigned CNF1_MASK = 0x000000c0;
        static constexpr unsigned CNF1(unsigned value) { return (value << 6); }
        static constexpr unsigned MODE2_POS = 8;
        static constexpr unsigned MODE2_MASK = 0x00000300;
        static constexpr unsigned MODE2(unsigned value) { return (value << 8); }
        static constexpr unsigned CNF2_POS = 10;
        static constexpr unsigned CNF2_MASK = 0x00000c00;
        static constexpr unsigned CNF2(unsigned value) { return (value << 10); }
        static constexpr unsigned MODE3_POS = 12;
        static constexpr unsigned MODE3_MASK = 0x00003000;
        static constexpr unsigned MODE3(unsigned value) { return (value << 12); }
        static constexpr unsigned CNF3_POS = 14;
        static constexpr unsigned CNF3_MASK = 0x0000c000;
        static constexpr unsigned CNF3(unsigned value) { return (value << 14); }
        static constexpr unsigned MODE4_POS = 16;
        static constexpr unsigned MODE4_MASK = 0x00030000;
        static constexpr unsigned MODE4(unsigned value) { return (value << 16); }
        static constexpr unsigned CNF4_POS = 18;
        static constexpr unsigned CNF4_MASK = 0x000c0000;
        static constexpr unsigned CNF4(unsigned value) { return (value << 18); }
        static constexpr unsigned MODE5_POS = 20;
        static constexpr unsigned MODE5_MASK = 0x00300000;
        static constexpr unsigned MODE5(unsigned value) { return (value << 20); }
        static constexpr unsigned CNF5_POS = 22;
        static constexpr unsigned CNF5_MASK = 0x00c00000;
        static constexpr unsigned CNF5(unsigned value) { return (value << 22); }
        static constexpr unsigned MODE6_POS = 24;
        static constexpr unsigned MODE6_MASK = 0x03000000;
        static constexpr unsigned MODE6(unsigned value) { return (value << 24); }
        static constexpr unsigned CNF6_POS = 26;
        static constexpr unsigned CNF6_MASK = 0x0c000000;
        static constexpr unsigned CNF6(unsigned value) { return (value << 26); }
        static constexpr unsigned MODE7_POS = 28;
        static constexpr unsigned MODE7_MASK = 0x30000000;
        static constexpr unsigned MODE7(unsigned value) { return (value << 28); }
        static constexpr unsigned CNF7_POS = 30;
        static constexpr unsigned CNF7_MASK = 0xc0000000;
        static constexpr unsigned CNF7(unsigned value) { return (value << 30); }
    } CRL;

    volatile union CRH_T // CRH: Port configuration register high (GPIOn_CRL) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CRH_BIT_T
        {
            unsigned MODE8  : 2; // bits 0..1 Port n.8 mode bits
            unsigned CNF8   : 2; // bits 2..3 Port n.8 configuration bits
            unsigned MODE9  : 2; // bits 4..5 Port n.9 mode bits
            unsigned CNF9   : 2; // bits 6..7 Port n.9 configuration bits
            unsigned MODE10 : 2; // bits 8..9 Port n.10 mode bits
            unsigned CNF10  : 2; // bits 10..11 Port n.10 configuration bits
            unsigned MODE11 : 2; // bits 12..13 Port n.11 mode bits
            unsigned CNF11  : 2; // bits 14..15 Port n.11 configuration bits
            unsigned MODE12 : 2; // bits 16..17 Port n.12 mode bits
            unsigned CNF12  : 2; // bits 18..19 Port n.12 configuration bits
            unsigned MODE13 : 2; // bits 20..21 Port n.13 mode bits
            unsigned CNF13  : 2; // bits 22..23 Port n.13 configuration bits
            unsigned MODE14 : 2; // bits 24..25 Port n.14 mode bits
            unsigned CNF14  : 2; // bits 26..27 Port n.14 configuration bits
            unsigned MODE15 : 2; // bits 28..29 Port n.15 mode bits
            unsigned CNF15  : 2; // bits 30..31 Port n.15 configuration bits    
        } bit;
    
        static constexpr unsigned MODE8_POS = 0;
        static constexpr unsigned MODE8_MASK = 0x00000003;
        static constexpr unsigned MODE8(unsigned value) { return (value << 0); }
        static constexpr unsigned CNF8_POS = 2;
        static constexpr unsigned CNF8_MASK = 0x0000000c;
        static constexpr unsigned CNF8(unsigned value) { return (value << 2); }
        static constexpr unsigned MODE9_POS = 4;
        static constexpr unsigned MODE9_MASK = 0x00000030;
        static constexpr unsigned MODE9(unsigned value) { return (value << 4); }
        static constexpr unsigned CNF9_POS = 6;
        static constexpr unsigned CNF9_MASK = 0x000000c0;
        static constexpr unsigned CNF9(unsigned value) { return (value << 6); }
        static constexpr unsigned MODE10_POS = 8;
        static constexpr unsigned MODE10_MASK = 0x00000300;
        static constexpr unsigned MODE10(unsigned value) { return (value << 8); }
        static constexpr unsigned CNF10_POS = 10;
        static constexpr unsigned CNF10_MASK = 0x00000c00;
        static constexpr unsigned CNF10(unsigned value) { return (value << 10); }
        static constexpr unsigned MODE11_POS = 12;
        static constexpr unsigned MODE11_MASK = 0x00003000;
        static constexpr unsigned MODE11(unsigned value) { return (value << 12); }
        static constexpr unsigned CNF11_POS = 14;
        static constexpr unsigned CNF11_MASK = 0x0000c000;
        static constexpr unsigned CNF11(unsigned value) { return (value << 14); }
        static constexpr unsigned MODE12_POS = 16;
        static constexpr unsigned MODE12_MASK = 0x00030000;
        static constexpr unsigned MODE12(unsigned value) { return (value << 16); }
        static constexpr unsigned CNF12_POS = 18;
        static constexpr unsigned CNF12_MASK = 0x000c0000;
        static constexpr unsigned CNF12(unsigned value) { return (value << 18); }
        static constexpr unsigned MODE13_POS = 20;
        static constexpr unsigned MODE13_MASK = 0x00300000;
        static constexpr unsigned MODE13(unsigned value) { return (value << 20); }
        static constexpr unsigned CNF13_POS = 22;
        static constexpr unsigned CNF13_MASK = 0x00c00000;
        static constexpr unsigned CNF13(unsigned value) { return (value << 22); }
        static constexpr unsigned MODE14_POS = 24;
        static constexpr unsigned MODE14_MASK = 0x03000000;
        static constexpr unsigned MODE14(unsigned value) { return (value << 24); }
        static constexpr unsigned CNF14_POS = 26;
        static constexpr unsigned CNF14_MASK = 0x0c000000;
        static constexpr unsigned CNF14(unsigned value) { return (value << 26); }
        static constexpr unsigned MODE15_POS = 28;
        static constexpr unsigned MODE15_MASK = 0x30000000;
        static constexpr unsigned MODE15(unsigned value) { return (value << 28); }
        static constexpr unsigned CNF15_POS = 30;
        static constexpr unsigned CNF15_MASK = 0xc0000000;
        static constexpr unsigned CNF15(unsigned value) { return (value << 30); }
    } CRH;

    volatile union IDR_T // IDR: Port input data register (GPIOn_IDR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) IDR_BIT_T
        {
            unsigned IDR0  : 1; // bit 0 Port input data
            unsigned IDR1  : 1; // bit 1 Port input data
            unsigned IDR2  : 1; // bit 2 Port input data
            unsigned IDR3  : 1; // bit 3 Port input data
            unsigned IDR4  : 1; // bit 4 Port input data
            unsigned IDR5  : 1; // bit 5 Port input data
            unsigned IDR6  : 1; // bit 6 Port input data
            unsigned IDR7  : 1; // bit 7 Port input data
            unsigned IDR8  : 1; // bit 8 Port input data
            unsigned IDR9  : 1; // bit 9 Port input data
            unsigned IDR10 : 1; // bit 10 Port input data
            unsigned IDR11 : 1; // bit 11 Port input data
            unsigned IDR12 : 1; // bit 12 Port input data
            unsigned IDR13 : 1; // bit 13 Port input data
            unsigned IDR14 : 1; // bit 14 Port input data
            unsigned IDR15 : 1; // bit 15 Port input data
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned IDR0_POS = 0;
        static constexpr unsigned IDR0_MASK = 0x00000001;
        static constexpr unsigned IDR0(unsigned value) { return (value << 0); }
        static constexpr unsigned IDR1_POS = 1;
        static constexpr unsigned IDR1_MASK = 0x00000002;
        static constexpr unsigned IDR1(unsigned value) { return (value << 1); }
        static constexpr unsigned IDR2_POS = 2;
        static constexpr unsigned IDR2_MASK = 0x00000004;
        static constexpr unsigned IDR2(unsigned value) { return (value << 2); }
        static constexpr unsigned IDR3_POS = 3;
        static constexpr unsigned IDR3_MASK = 0x00000008;
        static constexpr unsigned IDR3(unsigned value) { return (value << 3); }
        static constexpr unsigned IDR4_POS = 4;
        static constexpr unsigned IDR4_MASK = 0x00000010;
        static constexpr unsigned IDR4(unsigned value) { return (value << 4); }
        static constexpr unsigned IDR5_POS = 5;
        static constexpr unsigned IDR5_MASK = 0x00000020;
        static constexpr unsigned IDR5(unsigned value) { return (value << 5); }
        static constexpr unsigned IDR6_POS = 6;
        static constexpr unsigned IDR6_MASK = 0x00000040;
        static constexpr unsigned IDR6(unsigned value) { return (value << 6); }
        static constexpr unsigned IDR7_POS = 7;
        static constexpr unsigned IDR7_MASK = 0x00000080;
        static constexpr unsigned IDR7(unsigned value) { return (value << 7); }
        static constexpr unsigned IDR8_POS = 8;
        static constexpr unsigned IDR8_MASK = 0x00000100;
        static constexpr unsigned IDR8(unsigned value) { return (value << 8); }
        static constexpr unsigned IDR9_POS = 9;
        static constexpr unsigned IDR9_MASK = 0x00000200;
        static constexpr unsigned IDR9(unsigned value) { return (value << 9); }
        static constexpr unsigned IDR10_POS = 10;
        static constexpr unsigned IDR10_MASK = 0x00000400;
        static constexpr unsigned IDR10(unsigned value) { return (value << 10); }
        static constexpr unsigned IDR11_POS = 11;
        static constexpr unsigned IDR11_MASK = 0x00000800;
        static constexpr unsigned IDR11(unsigned value) { return (value << 11); }
        static constexpr unsigned IDR12_POS = 12;
        static constexpr unsigned IDR12_MASK = 0x00001000;
        static constexpr unsigned IDR12(unsigned value) { return (value << 12); }
        static constexpr unsigned IDR13_POS = 13;
        static constexpr unsigned IDR13_MASK = 0x00002000;
        static constexpr unsigned IDR13(unsigned value) { return (value << 13); }
        static constexpr unsigned IDR14_POS = 14;
        static constexpr unsigned IDR14_MASK = 0x00004000;
        static constexpr unsigned IDR14(unsigned value) { return (value << 14); }
        static constexpr unsigned IDR15_POS = 15;
        static constexpr unsigned IDR15_MASK = 0x00008000;
        static constexpr unsigned IDR15(unsigned value) { return (value << 15); }
    } IDR;

    volatile union ODR_T // ODR: Port output data register (GPIOn_ODR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) ODR_BIT_T
        {
            unsigned ODR0  : 1; // bit 0 Port output data
            unsigned ODR1  : 1; // bit 1 Port output data
            unsigned ODR2  : 1; // bit 2 Port output data
            unsigned ODR3  : 1; // bit 3 Port output data
            unsigned ODR4  : 1; // bit 4 Port output data
            unsigned ODR5  : 1; // bit 5 Port output data
            unsigned ODR6  : 1; // bit 6 Port output data
            unsigned ODR7  : 1; // bit 7 Port output data
            unsigned ODR8  : 1; // bit 8 Port output data
            unsigned ODR9  : 1; // bit 9 Port output data
            unsigned ODR10 : 1; // bit 10 Port output data
            unsigned ODR11 : 1; // bit 11 Port output data
            unsigned ODR12 : 1; // bit 12 Port output data
            unsigned ODR13 : 1; // bit 13 Port output data
            unsigned ODR14 : 1; // bit 14 Port output data
            unsigned ODR15 : 1; // bit 15 Port output data
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned ODR0_POS = 0;
        static constexpr unsigned ODR0_MASK = 0x00000001;
        static constexpr unsigned ODR0(unsigned value) { return (value << 0); }
        static constexpr unsigned ODR1_POS = 1;
        static constexpr unsigned ODR1_MASK = 0x00000002;
        static constexpr unsigned ODR1(unsigned value) { return (value << 1); }
        static constexpr unsigned ODR2_POS = 2;
        static constexpr unsigned ODR2_MASK = 0x00000004;
        static constexpr unsigned ODR2(unsigned value) { return (value << 2); }
        static constexpr unsigned ODR3_POS = 3;
        static constexpr unsigned ODR3_MASK = 0x00000008;
        static constexpr unsigned ODR3(unsigned value) { return (value << 3); }
        static constexpr unsigned ODR4_POS = 4;
        static constexpr unsigned ODR4_MASK = 0x00000010;
        static constexpr unsigned ODR4(unsigned value) { return (value << 4); }
        static constexpr unsigned ODR5_POS = 5;
        static constexpr unsigned ODR5_MASK = 0x00000020;
        static constexpr unsigned ODR5(unsigned value) { return (value << 5); }
        static constexpr unsigned ODR6_POS = 6;
        static constexpr unsigned ODR6_MASK = 0x00000040;
        static constexpr unsigned ODR6(unsigned value) { return (value << 6); }
        static constexpr unsigned ODR7_POS = 7;
        static constexpr unsigned ODR7_MASK = 0x00000080;
        static constexpr unsigned ODR7(unsigned value) { return (value << 7); }
        static constexpr unsigned ODR8_POS = 8;
        static constexpr unsigned ODR8_MASK = 0x00000100;
        static constexpr unsigned ODR8(unsigned value) { return (value << 8); }
        static constexpr unsigned ODR9_POS = 9;
        static constexpr unsigned ODR9_MASK = 0x00000200;
        static constexpr unsigned ODR9(unsigned value) { return (value << 9); }
        static constexpr unsigned ODR10_POS = 10;
        static constexpr unsigned ODR10_MASK = 0x00000400;
        static constexpr unsigned ODR10(unsigned value) { return (value << 10); }
        static constexpr unsigned ODR11_POS = 11;
        static constexpr unsigned ODR11_MASK = 0x00000800;
        static constexpr unsigned ODR11(unsigned value) { return (value << 11); }
        static constexpr unsigned ODR12_POS = 12;
        static constexpr unsigned ODR12_MASK = 0x00001000;
        static constexpr unsigned ODR12(unsigned value) { return (value << 12); }
        static constexpr unsigned ODR13_POS = 13;
        static constexpr unsigned ODR13_MASK = 0x00002000;
        static constexpr unsigned ODR13(unsigned value) { return (value << 13); }
        static constexpr unsigned ODR14_POS = 14;
        static constexpr unsigned ODR14_MASK = 0x00004000;
        static constexpr unsigned ODR14(unsigned value) { return (value << 14); }
        static constexpr unsigned ODR15_POS = 15;
        static constexpr unsigned ODR15_MASK = 0x00008000;
        static constexpr unsigned ODR15(unsigned value) { return (value << 15); }
    } ODR;

    volatile union BSRR_T // BSRR: Port bit set/reset register (GPIOn_BSRR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) BSRR_BIT_T
        {
            unsigned BS0  : 1; // bit 0 Set bit 0
            unsigned BS1  : 1; // bit 1 Set bit 1
            unsigned BS2  : 1; // bit 2 Set bit 1
            unsigned BS3  : 1; // bit 3 Set bit 3
            unsigned BS4  : 1; // bit 4 Set bit 4
            unsigned BS5  : 1; // bit 5 Set bit 5
            unsigned BS6  : 1; // bit 6 Set bit 6
            unsigned BS7  : 1; // bit 7 Set bit 7
            unsigned BS8  : 1; // bit 8 Set bit 8
            unsigned BS9  : 1; // bit 9 Set bit 9
            unsigned BS10 : 1; // bit 10 Set bit 10
            unsigned BS11 : 1; // bit 11 Set bit 11
            unsigned BS12 : 1; // bit 12 Set bit 12
            unsigned BS13 : 1; // bit 13 Set bit 13
            unsigned BS14 : 1; // bit 14 Set bit 14
            unsigned BS15 : 1; // bit 15 Set bit 15
            unsigned BR0  : 1; // bit 16 Reset bit 0
            unsigned BR1  : 1; // bit 17 Reset bit 1
            unsigned BR2  : 1; // bit 18 Reset bit 2
            unsigned BR3  : 1; // bit 19 Reset bit 3
            unsigned BR4  : 1; // bit 20 Reset bit 4
            unsigned BR5  : 1; // bit 21 Reset bit 5
            unsigned BR6  : 1; // bit 22 Reset bit 6
            unsigned BR7  : 1; // bit 23 Reset bit 7
            unsigned BR8  : 1; // bit 24 Reset bit 8
            unsigned BR9  : 1; // bit 25 Reset bit 9
            unsigned BR10 : 1; // bit 26 Reset bit 10
            unsigned BR11 : 1; // bit 27 Reset bit 11
            unsigned BR12 : 1; // bit 28 Reset bit 12
            unsigned BR13 : 1; // bit 29 Reset bit 13
            unsigned BR14 : 1; // bit 30 Reset bit 14
            unsigned BR15 : 1; // bit 31 Reset bit 15    
        } bit;
    
        static constexpr unsigned BS0_POS = 0;
        static constexpr unsigned BS0_MASK = 0x00000001;
        static constexpr unsigned BS0(unsigned value) { return (value << 0); }
        static constexpr unsigned BS1_POS = 1;
        static constexpr unsigned BS1_MASK = 0x00000002;
        static constexpr unsigned BS1(unsigned value) { return (value << 1); }
        static constexpr unsigned BS2_POS = 2;
        static constexpr unsigned BS2_MASK = 0x00000004;
        static constexpr unsigned BS2(unsigned value) { return (value << 2); }
        static constexpr unsigned BS3_POS = 3;
        static constexpr unsigned BS3_MASK = 0x00000008;
        static constexpr unsigned BS3(unsigned value) { return (value << 3); }
        static constexpr unsigned BS4_POS = 4;
        static constexpr unsigned BS4_MASK = 0x00000010;
        static constexpr unsigned BS4(unsigned value) { return (value << 4); }
        static constexpr unsigned BS5_POS = 5;
        static constexpr unsigned BS5_MASK = 0x00000020;
        static constexpr unsigned BS5(unsigned value) { return (value << 5); }
        static constexpr unsigned BS6_POS = 6;
        static constexpr unsigned BS6_MASK = 0x00000040;
        static constexpr unsigned BS6(unsigned value) { return (value << 6); }
        static constexpr unsigned BS7_POS = 7;
        static constexpr unsigned BS7_MASK = 0x00000080;
        static constexpr unsigned BS7(unsigned value) { return (value << 7); }
        static constexpr unsigned BS8_POS = 8;
        static constexpr unsigned BS8_MASK = 0x00000100;
        static constexpr unsigned BS8(unsigned value) { return (value << 8); }
        static constexpr unsigned BS9_POS = 9;
        static constexpr unsigned BS9_MASK = 0x00000200;
        static constexpr unsigned BS9(unsigned value) { return (value << 9); }
        static constexpr unsigned BS10_POS = 10;
        static constexpr unsigned BS10_MASK = 0x00000400;
        static constexpr unsigned BS10(unsigned value) { return (value << 10); }
        static constexpr unsigned BS11_POS = 11;
        static constexpr unsigned BS11_MASK = 0x00000800;
        static constexpr unsigned BS11(unsigned value) { return (value << 11); }
        static constexpr unsigned BS12_POS = 12;
        static constexpr unsigned BS12_MASK = 0x00001000;
        static constexpr unsigned BS12(unsigned value) { return (value << 12); }
        static constexpr unsigned BS13_POS = 13;
        static constexpr unsigned BS13_MASK = 0x00002000;
        static constexpr unsigned BS13(unsigned value) { return (value << 13); }
        static constexpr unsigned BS14_POS = 14;
        static constexpr unsigned BS14_MASK = 0x00004000;
        static constexpr unsigned BS14(unsigned value) { return (value << 14); }
        static constexpr unsigned BS15_POS = 15;
        static constexpr unsigned BS15_MASK = 0x00008000;
        static constexpr unsigned BS15(unsigned value) { return (value << 15); }
        static constexpr unsigned BR0_POS = 16;
        static constexpr unsigned BR0_MASK = 0x00010000;
        static constexpr unsigned BR0(unsigned value) { return (value << 16); }
        static constexpr unsigned BR1_POS = 17;
        static constexpr unsigned BR1_MASK = 0x00020000;
        static constexpr unsigned BR1(unsigned value) { return (value << 17); }
        static constexpr unsigned BR2_POS = 18;
        static constexpr unsigned BR2_MASK = 0x00040000;
        static constexpr unsigned BR2(unsigned value) { return (value << 18); }
        static constexpr unsigned BR3_POS = 19;
        static constexpr unsigned BR3_MASK = 0x00080000;
        static constexpr unsigned BR3(unsigned value) { return (value << 19); }
        static constexpr unsigned BR4_POS = 20;
        static constexpr unsigned BR4_MASK = 0x00100000;
        static constexpr unsigned BR4(unsigned value) { return (value << 20); }
        static constexpr unsigned BR5_POS = 21;
        static constexpr unsigned BR5_MASK = 0x00200000;
        static constexpr unsigned BR5(unsigned value) { return (value << 21); }
        static constexpr unsigned BR6_POS = 22;
        static constexpr unsigned BR6_MASK = 0x00400000;
        static constexpr unsigned BR6(unsigned value) { return (value << 22); }
        static constexpr unsigned BR7_POS = 23;
        static constexpr unsigned BR7_MASK = 0x00800000;
        static constexpr unsigned BR7(unsigned value) { return (value << 23); }
        static constexpr unsigned BR8_POS = 24;
        static constexpr unsigned BR8_MASK = 0x01000000;
        static constexpr unsigned BR8(unsigned value) { return (value << 24); }
        static constexpr unsigned BR9_POS = 25;
        static constexpr unsigned BR9_MASK = 0x02000000;
        static constexpr unsigned BR9(unsigned value) { return (value << 25); }
        static constexpr unsigned BR10_POS = 26;
        static constexpr unsigned BR10_MASK = 0x04000000;
        static constexpr unsigned BR10(unsigned value) { return (value << 26); }
        static constexpr unsigned BR11_POS = 27;
        static constexpr unsigned BR11_MASK = 0x08000000;
        static constexpr unsigned BR11(unsigned value) { return (value << 27); }
        static constexpr unsigned BR12_POS = 28;
        static constexpr unsigned BR12_MASK = 0x10000000;
        static constexpr unsigned BR12(unsigned value) { return (value << 28); }
        static constexpr unsigned BR13_POS = 29;
        static constexpr unsigned BR13_MASK = 0x20000000;
        static constexpr unsigned BR13(unsigned value) { return (value << 29); }
        static constexpr unsigned BR14_POS = 30;
        static constexpr unsigned BR14_MASK = 0x40000000;
        static constexpr unsigned BR14(unsigned value) { return (value << 30); }
        static constexpr unsigned BR15_POS = 31;
        static constexpr unsigned BR15_MASK = 0x80000000;
        static constexpr unsigned BR15(unsigned value) { return (value << 31); }
    } BSRR;

    volatile union BRR_T // BRR: Port bit reset register (GPIOn_BRR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) BRR_BIT_T
        {
            unsigned BR0  : 1; // bit 0 Reset bit 0
            unsigned BR1  : 1; // bit 1 Reset bit 1
            unsigned BR2  : 1; // bit 2 Reset bit 1
            unsigned BR3  : 1; // bit 3 Reset bit 3
            unsigned BR4  : 1; // bit 4 Reset bit 4
            unsigned BR5  : 1; // bit 5 Reset bit 5
            unsigned BR6  : 1; // bit 6 Reset bit 6
            unsigned BR7  : 1; // bit 7 Reset bit 7
            unsigned BR8  : 1; // bit 8 Reset bit 8
            unsigned BR9  : 1; // bit 9 Reset bit 9
            unsigned BR10 : 1; // bit 10 Reset bit 10
            unsigned BR11 : 1; // bit 11 Reset bit 11
            unsigned BR12 : 1; // bit 12 Reset bit 12
            unsigned BR13 : 1; // bit 13 Reset bit 13
            unsigned BR14 : 1; // bit 14 Reset bit 14
            unsigned BR15 : 1; // bit 15 Reset bit 15
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned BR0_POS = 0;
        static constexpr unsigned BR0_MASK = 0x00000001;
        static constexpr unsigned BR0(unsigned value) { return (value << 0); }
        static constexpr unsigned BR1_POS = 1;
        static constexpr unsigned BR1_MASK = 0x00000002;
        static constexpr unsigned BR1(unsigned value) { return (value << 1); }
        static constexpr unsigned BR2_POS = 2;
        static constexpr unsigned BR2_MASK = 0x00000004;
        static constexpr unsigned BR2(unsigned value) { return (value << 2); }
        static constexpr unsigned BR3_POS = 3;
        static constexpr unsigned BR3_MASK = 0x00000008;
        static constexpr unsigned BR3(unsigned value) { return (value << 3); }
        static constexpr unsigned BR4_POS = 4;
        static constexpr unsigned BR4_MASK = 0x00000010;
        static constexpr unsigned BR4(unsigned value) { return (value << 4); }
        static constexpr unsigned BR5_POS = 5;
        static constexpr unsigned BR5_MASK = 0x00000020;
        static constexpr unsigned BR5(unsigned value) { return (value << 5); }
        static constexpr unsigned BR6_POS = 6;
        static constexpr unsigned BR6_MASK = 0x00000040;
        static constexpr unsigned BR6(unsigned value) { return (value << 6); }
        static constexpr unsigned BR7_POS = 7;
        static constexpr unsigned BR7_MASK = 0x00000080;
        static constexpr unsigned BR7(unsigned value) { return (value << 7); }
        static constexpr unsigned BR8_POS = 8;
        static constexpr unsigned BR8_MASK = 0x00000100;
        static constexpr unsigned BR8(unsigned value) { return (value << 8); }
        static constexpr unsigned BR9_POS = 9;
        static constexpr unsigned BR9_MASK = 0x00000200;
        static constexpr unsigned BR9(unsigned value) { return (value << 9); }
        static constexpr unsigned BR10_POS = 10;
        static constexpr unsigned BR10_MASK = 0x00000400;
        static constexpr unsigned BR10(unsigned value) { return (value << 10); }
        static constexpr unsigned BR11_POS = 11;
        static constexpr unsigned BR11_MASK = 0x00000800;
        static constexpr unsigned BR11(unsigned value) { return (value << 11); }
        static constexpr unsigned BR12_POS = 12;
        static constexpr unsigned BR12_MASK = 0x00001000;
        static constexpr unsigned BR12(unsigned value) { return (value << 12); }
        static constexpr unsigned BR13_POS = 13;
        static constexpr unsigned BR13_MASK = 0x00002000;
        static constexpr unsigned BR13(unsigned value) { return (value << 13); }
        static constexpr unsigned BR14_POS = 14;
        static constexpr unsigned BR14_MASK = 0x00004000;
        static constexpr unsigned BR14(unsigned value) { return (value << 14); }
        static constexpr unsigned BR15_POS = 15;
        static constexpr unsigned BR15_MASK = 0x00008000;
        static constexpr unsigned BR15(unsigned value) { return (value << 15); }
    } BRR;

    volatile union LCKR_T // LCKR: Port configuration lock register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LCKR_BIT_T
        {
            unsigned LCK0  : 1; // bit 0 Port A Lock bit 0
            unsigned LCK1  : 1; // bit 1 Port A Lock bit 1
            unsigned LCK2  : 1; // bit 2 Port A Lock bit 2
            unsigned LCK3  : 1; // bit 3 Port A Lock bit 3
            unsigned LCK4  : 1; // bit 4 Port A Lock bit 4
            unsigned LCK5  : 1; // bit 5 Port A Lock bit 5
            unsigned LCK6  : 1; // bit 6 Port A Lock bit 6
            unsigned LCK7  : 1; // bit 7 Port A Lock bit 7
            unsigned LCK8  : 1; // bit 8 Port A Lock bit 8
            unsigned LCK9  : 1; // bit 9 Port A Lock bit 9
            unsigned LCK10 : 1; // bit 10 Port A Lock bit 10
            unsigned LCK11 : 1; // bit 11 Port A Lock bit 11
            unsigned LCK12 : 1; // bit 12 Port A Lock bit 12
            unsigned LCK13 : 1; // bit 13 Port A Lock bit 13
            unsigned LCK14 : 1; // bit 14 Port A Lock bit 14
            unsigned LCK15 : 1; // bit 15 Port A Lock bit 15
            unsigned LCKK  : 1; // bit 16 Lock key
            unsigned       : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned LCK0_POS = 0;
        static constexpr unsigned LCK0_MASK = 0x00000001;
        static constexpr unsigned LCK0(unsigned value) { return (value << 0); }
        static constexpr unsigned LCK1_POS = 1;
        static constexpr unsigned LCK1_MASK = 0x00000002;
        static constexpr unsigned LCK1(unsigned value) { return (value << 1); }
        static constexpr unsigned LCK2_POS = 2;
        static constexpr unsigned LCK2_MASK = 0x00000004;
        static constexpr unsigned LCK2(unsigned value) { return (value << 2); }
        static constexpr unsigned LCK3_POS = 3;
        static constexpr unsigned LCK3_MASK = 0x00000008;
        static constexpr unsigned LCK3(unsigned value) { return (value << 3); }
        static constexpr unsigned LCK4_POS = 4;
        static constexpr unsigned LCK4_MASK = 0x00000010;
        static constexpr unsigned LCK4(unsigned value) { return (value << 4); }
        static constexpr unsigned LCK5_POS = 5;
        static constexpr unsigned LCK5_MASK = 0x00000020;
        static constexpr unsigned LCK5(unsigned value) { return (value << 5); }
        static constexpr unsigned LCK6_POS = 6;
        static constexpr unsigned LCK6_MASK = 0x00000040;
        static constexpr unsigned LCK6(unsigned value) { return (value << 6); }
        static constexpr unsigned LCK7_POS = 7;
        static constexpr unsigned LCK7_MASK = 0x00000080;
        static constexpr unsigned LCK7(unsigned value) { return (value << 7); }
        static constexpr unsigned LCK8_POS = 8;
        static constexpr unsigned LCK8_MASK = 0x00000100;
        static constexpr unsigned LCK8(unsigned value) { return (value << 8); }
        static constexpr unsigned LCK9_POS = 9;
        static constexpr unsigned LCK9_MASK = 0x00000200;
        static constexpr unsigned LCK9(unsigned value) { return (value << 9); }
        static constexpr unsigned LCK10_POS = 10;
        static constexpr unsigned LCK10_MASK = 0x00000400;
        static constexpr unsigned LCK10(unsigned value) { return (value << 10); }
        static constexpr unsigned LCK11_POS = 11;
        static constexpr unsigned LCK11_MASK = 0x00000800;
        static constexpr unsigned LCK11(unsigned value) { return (value << 11); }
        static constexpr unsigned LCK12_POS = 12;
        static constexpr unsigned LCK12_MASK = 0x00001000;
        static constexpr unsigned LCK12(unsigned value) { return (value << 12); }
        static constexpr unsigned LCK13_POS = 13;
        static constexpr unsigned LCK13_MASK = 0x00002000;
        static constexpr unsigned LCK13(unsigned value) { return (value << 13); }
        static constexpr unsigned LCK14_POS = 14;
        static constexpr unsigned LCK14_MASK = 0x00004000;
        static constexpr unsigned LCK14(unsigned value) { return (value << 14); }
        static constexpr unsigned LCK15_POS = 15;
        static constexpr unsigned LCK15_MASK = 0x00008000;
        static constexpr unsigned LCK15(unsigned value) { return (value << 15); }
        static constexpr unsigned LCKK_POS = 16;
        static constexpr unsigned LCKK_MASK = 0x00010000;
        static constexpr unsigned LCKK(unsigned value) { return (value << 16); }
    } LCKR;

}; // struct GPIOA_T

static_assert(sizeof(GPIO_T) == GPIO_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp