#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) GPIO_T
{
    static constexpr size_t INSTANCE_SIZE = 44;
    static constexpr intptr_t BASE_ADDRESS_GPIOA = 0x48000000;
    static constexpr intptr_t BASE_ADDRESS_GPIOB = 0x48000400;
    static constexpr intptr_t BASE_ADDRESS_GPIOC = 0x48000800;
    static constexpr intptr_t BASE_ADDRESS_GPIOD = 0x48000c00;
    static constexpr intptr_t BASE_ADDRESS_GPIOF = 0x48001400;

    static constexpr intptr_t ADDR_OFFSET_MODER = 0x00;
    static constexpr intptr_t ADDR_OFFSET_OTYPER = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OSPEEDR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_PUPDR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_IDR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_ODR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_BSRR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_LCKR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_AFRL = 0x20;
    static constexpr intptr_t ADDR_OFFSET_AFRH = 0x24;
    static constexpr intptr_t ADDR_OFFSET_BRR = 0x28;

    volatile union MODER_T // MODER: GPIO port mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MODER_BIT_T
        {
            unsigned MODER0  : 2; // bits 0..1 Port x configuration bits (y = 0..15)
            unsigned MODER1  : 2; // bits 2..3 Port x configuration bits (y = 0..15)
            unsigned MODER2  : 2; // bits 4..5 Port x configuration bits (y = 0..15)
            unsigned MODER3  : 2; // bits 6..7 Port x configuration bits (y = 0..15)
            unsigned MODER4  : 2; // bits 8..9 Port x configuration bits (y = 0..15)
            unsigned MODER5  : 2; // bits 10..11 Port x configuration bits (y = 0..15)
            unsigned MODER6  : 2; // bits 12..13 Port x configuration bits (y = 0..15)
            unsigned MODER7  : 2; // bits 14..15 Port x configuration bits (y = 0..15)
            unsigned MODER8  : 2; // bits 16..17 Port x configuration bits (y = 0..15)
            unsigned MODER9  : 2; // bits 18..19 Port x configuration bits (y = 0..15)
            unsigned MODER10 : 2; // bits 20..21 Port x configuration bits (y = 0..15)
            unsigned MODER11 : 2; // bits 22..23 Port x configuration bits (y = 0..15)
            unsigned MODER12 : 2; // bits 24..25 Port x configuration bits (y = 0..15)
            unsigned MODER13 : 2; // bits 26..27 Port x configuration bits (y = 0..15)
            unsigned MODER14 : 2; // bits 28..29 Port x configuration bits (y = 0..15)
            unsigned MODER15 : 2; // bits 30..31 Port x configuration bits (y = 0..15)    
        } bit;
    
        static constexpr unsigned MODER0_POS = 0;
        static constexpr unsigned MODER0_MASK = 0x00000003;
        static constexpr unsigned MODER0(unsigned value) { return (value << 0); }
        static constexpr unsigned MODER1_POS = 2;
        static constexpr unsigned MODER1_MASK = 0x0000000c;
        static constexpr unsigned MODER1(unsigned value) { return (value << 2); }
        static constexpr unsigned MODER2_POS = 4;
        static constexpr unsigned MODER2_MASK = 0x00000030;
        static constexpr unsigned MODER2(unsigned value) { return (value << 4); }
        static constexpr unsigned MODER3_POS = 6;
        static constexpr unsigned MODER3_MASK = 0x000000c0;
        static constexpr unsigned MODER3(unsigned value) { return (value << 6); }
        static constexpr unsigned MODER4_POS = 8;
        static constexpr unsigned MODER4_MASK = 0x00000300;
        static constexpr unsigned MODER4(unsigned value) { return (value << 8); }
        static constexpr unsigned MODER5_POS = 10;
        static constexpr unsigned MODER5_MASK = 0x00000c00;
        static constexpr unsigned MODER5(unsigned value) { return (value << 10); }
        static constexpr unsigned MODER6_POS = 12;
        static constexpr unsigned MODER6_MASK = 0x00003000;
        static constexpr unsigned MODER6(unsigned value) { return (value << 12); }
        static constexpr unsigned MODER7_POS = 14;
        static constexpr unsigned MODER7_MASK = 0x0000c000;
        static constexpr unsigned MODER7(unsigned value) { return (value << 14); }
        static constexpr unsigned MODER8_POS = 16;
        static constexpr unsigned MODER8_MASK = 0x00030000;
        static constexpr unsigned MODER8(unsigned value) { return (value << 16); }
        static constexpr unsigned MODER9_POS = 18;
        static constexpr unsigned MODER9_MASK = 0x000c0000;
        static constexpr unsigned MODER9(unsigned value) { return (value << 18); }
        static constexpr unsigned MODER10_POS = 20;
        static constexpr unsigned MODER10_MASK = 0x00300000;
        static constexpr unsigned MODER10(unsigned value) { return (value << 20); }
        static constexpr unsigned MODER11_POS = 22;
        static constexpr unsigned MODER11_MASK = 0x00c00000;
        static constexpr unsigned MODER11(unsigned value) { return (value << 22); }
        static constexpr unsigned MODER12_POS = 24;
        static constexpr unsigned MODER12_MASK = 0x03000000;
        static constexpr unsigned MODER12(unsigned value) { return (value << 24); }
        static constexpr unsigned MODER13_POS = 26;
        static constexpr unsigned MODER13_MASK = 0x0c000000;
        static constexpr unsigned MODER13(unsigned value) { return (value << 26); }
        static constexpr unsigned MODER14_POS = 28;
        static constexpr unsigned MODER14_MASK = 0x30000000;
        static constexpr unsigned MODER14(unsigned value) { return (value << 28); }
        static constexpr unsigned MODER15_POS = 30;
        static constexpr unsigned MODER15_MASK = 0xc0000000;
        static constexpr unsigned MODER15(unsigned value) { return (value << 30); }
    } MODER;

    volatile union OTYPER_T // OTYPER: GPIO port output type register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTYPER_BIT_T
        {
            unsigned OT0  : 1; // bit 0 Port x configuration bits (y = 0..15)
            unsigned OT1  : 1; // bit 1 Port x configuration bits (y = 0..15)
            unsigned OT2  : 1; // bit 2 Port x configuration bits (y = 0..15)
            unsigned OT3  : 1; // bit 3 Port x configuration bits (y = 0..15)
            unsigned OT4  : 1; // bit 4 Port x configuration bits (y = 0..15)
            unsigned OT5  : 1; // bit 5 Port x configuration bits (y = 0..15)
            unsigned OT6  : 1; // bit 6 Port x configuration bits (y = 0..15)
            unsigned OT7  : 1; // bit 7 Port x configuration bits (y = 0..15)
            unsigned OT8  : 1; // bit 8 Port x configuration bits (y = 0..15)
            unsigned OT9  : 1; // bit 9 Port x configuration bits (y = 0..15)
            unsigned OT10 : 1; // bit 10 Port x configuration bits (y = 0..15)
            unsigned OT11 : 1; // bit 11 Port x configuration bits (y = 0..15)
            unsigned OT12 : 1; // bit 12 Port x configuration bits (y = 0..15)
            unsigned OT13 : 1; // bit 13 Port x configuration bits (y = 0..15)
            unsigned OT14 : 1; // bit 14 Port x configuration bits (y = 0..15)
            unsigned OT15 : 1; // bit 15 Port x configuration bits (y = 0..15)
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned OT0_POS = 0;
        static constexpr unsigned OT0_MASK = 0x00000001;
        static constexpr unsigned OT0(unsigned value) { return (value << 0); }
        static constexpr unsigned OT1_POS = 1;
        static constexpr unsigned OT1_MASK = 0x00000002;
        static constexpr unsigned OT1(unsigned value) { return (value << 1); }
        static constexpr unsigned OT2_POS = 2;
        static constexpr unsigned OT2_MASK = 0x00000004;
        static constexpr unsigned OT2(unsigned value) { return (value << 2); }
        static constexpr unsigned OT3_POS = 3;
        static constexpr unsigned OT3_MASK = 0x00000008;
        static constexpr unsigned OT3(unsigned value) { return (value << 3); }
        static constexpr unsigned OT4_POS = 4;
        static constexpr unsigned OT4_MASK = 0x00000010;
        static constexpr unsigned OT4(unsigned value) { return (value << 4); }
        static constexpr unsigned OT5_POS = 5;
        static constexpr unsigned OT5_MASK = 0x00000020;
        static constexpr unsigned OT5(unsigned value) { return (value << 5); }
        static constexpr unsigned OT6_POS = 6;
        static constexpr unsigned OT6_MASK = 0x00000040;
        static constexpr unsigned OT6(unsigned value) { return (value << 6); }
        static constexpr unsigned OT7_POS = 7;
        static constexpr unsigned OT7_MASK = 0x00000080;
        static constexpr unsigned OT7(unsigned value) { return (value << 7); }
        static constexpr unsigned OT8_POS = 8;
        static constexpr unsigned OT8_MASK = 0x00000100;
        static constexpr unsigned OT8(unsigned value) { return (value << 8); }
        static constexpr unsigned OT9_POS = 9;
        static constexpr unsigned OT9_MASK = 0x00000200;
        static constexpr unsigned OT9(unsigned value) { return (value << 9); }
        static constexpr unsigned OT10_POS = 10;
        static constexpr unsigned OT10_MASK = 0x00000400;
        static constexpr unsigned OT10(unsigned value) { return (value << 10); }
        static constexpr unsigned OT11_POS = 11;
        static constexpr unsigned OT11_MASK = 0x00000800;
        static constexpr unsigned OT11(unsigned value) { return (value << 11); }
        static constexpr unsigned OT12_POS = 12;
        static constexpr unsigned OT12_MASK = 0x00001000;
        static constexpr unsigned OT12(unsigned value) { return (value << 12); }
        static constexpr unsigned OT13_POS = 13;
        static constexpr unsigned OT13_MASK = 0x00002000;
        static constexpr unsigned OT13(unsigned value) { return (value << 13); }
        static constexpr unsigned OT14_POS = 14;
        static constexpr unsigned OT14_MASK = 0x00004000;
        static constexpr unsigned OT14(unsigned value) { return (value << 14); }
        static constexpr unsigned OT15_POS = 15;
        static constexpr unsigned OT15_MASK = 0x00008000;
        static constexpr unsigned OT15(unsigned value) { return (value << 15); }
    } OTYPER;

    volatile union OSPEEDR_T // OSPEEDR: GPIO port output speed register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OSPEEDR_BIT_T
        {
            unsigned OSPEEDR0  : 2; // bits 0..1 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR1  : 2; // bits 2..3 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR2  : 2; // bits 4..5 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR3  : 2; // bits 6..7 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR4  : 2; // bits 8..9 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR5  : 2; // bits 10..11 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR6  : 2; // bits 12..13 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR7  : 2; // bits 14..15 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR8  : 2; // bits 16..17 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR9  : 2; // bits 18..19 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR10 : 2; // bits 20..21 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR11 : 2; // bits 22..23 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR12 : 2; // bits 24..25 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR13 : 2; // bits 26..27 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR14 : 2; // bits 28..29 Port x configuration bits (y = 0..15)
            unsigned OSPEEDR15 : 2; // bits 30..31 Port x configuration bits (y = 0..15)    
        } bit;
    
        static constexpr unsigned OSPEEDR0_POS = 0;
        static constexpr unsigned OSPEEDR0_MASK = 0x00000003;
        static constexpr unsigned OSPEEDR0(unsigned value) { return (value << 0); }
        static constexpr unsigned OSPEEDR1_POS = 2;
        static constexpr unsigned OSPEEDR1_MASK = 0x0000000c;
        static constexpr unsigned OSPEEDR1(unsigned value) { return (value << 2); }
        static constexpr unsigned OSPEEDR2_POS = 4;
        static constexpr unsigned OSPEEDR2_MASK = 0x00000030;
        static constexpr unsigned OSPEEDR2(unsigned value) { return (value << 4); }
        static constexpr unsigned OSPEEDR3_POS = 6;
        static constexpr unsigned OSPEEDR3_MASK = 0x000000c0;
        static constexpr unsigned OSPEEDR3(unsigned value) { return (value << 6); }
        static constexpr unsigned OSPEEDR4_POS = 8;
        static constexpr unsigned OSPEEDR4_MASK = 0x00000300;
        static constexpr unsigned OSPEEDR4(unsigned value) { return (value << 8); }
        static constexpr unsigned OSPEEDR5_POS = 10;
        static constexpr unsigned OSPEEDR5_MASK = 0x00000c00;
        static constexpr unsigned OSPEEDR5(unsigned value) { return (value << 10); }
        static constexpr unsigned OSPEEDR6_POS = 12;
        static constexpr unsigned OSPEEDR6_MASK = 0x00003000;
        static constexpr unsigned OSPEEDR6(unsigned value) { return (value << 12); }
        static constexpr unsigned OSPEEDR7_POS = 14;
        static constexpr unsigned OSPEEDR7_MASK = 0x0000c000;
        static constexpr unsigned OSPEEDR7(unsigned value) { return (value << 14); }
        static constexpr unsigned OSPEEDR8_POS = 16;
        static constexpr unsigned OSPEEDR8_MASK = 0x00030000;
        static constexpr unsigned OSPEEDR8(unsigned value) { return (value << 16); }
        static constexpr unsigned OSPEEDR9_POS = 18;
        static constexpr unsigned OSPEEDR9_MASK = 0x000c0000;
        static constexpr unsigned OSPEEDR9(unsigned value) { return (value << 18); }
        static constexpr unsigned OSPEEDR10_POS = 20;
        static constexpr unsigned OSPEEDR10_MASK = 0x00300000;
        static constexpr unsigned OSPEEDR10(unsigned value) { return (value << 20); }
        static constexpr unsigned OSPEEDR11_POS = 22;
        static constexpr unsigned OSPEEDR11_MASK = 0x00c00000;
        static constexpr unsigned OSPEEDR11(unsigned value) { return (value << 22); }
        static constexpr unsigned OSPEEDR12_POS = 24;
        static constexpr unsigned OSPEEDR12_MASK = 0x03000000;
        static constexpr unsigned OSPEEDR12(unsigned value) { return (value << 24); }
        static constexpr unsigned OSPEEDR13_POS = 26;
        static constexpr unsigned OSPEEDR13_MASK = 0x0c000000;
        static constexpr unsigned OSPEEDR13(unsigned value) { return (value << 26); }
        static constexpr unsigned OSPEEDR14_POS = 28;
        static constexpr unsigned OSPEEDR14_MASK = 0x30000000;
        static constexpr unsigned OSPEEDR14(unsigned value) { return (value << 28); }
        static constexpr unsigned OSPEEDR15_POS = 30;
        static constexpr unsigned OSPEEDR15_MASK = 0xc0000000;
        static constexpr unsigned OSPEEDR15(unsigned value) { return (value << 30); }
    } OSPEEDR;

    volatile union PUPDR_T // PUPDR: GPIO port pull-up/pull-down register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PUPDR_BIT_T
        {
            unsigned PUPDR0  : 2; // bits 0..1 Port x configuration bits (y = 0..15)
            unsigned PUPDR1  : 2; // bits 2..3 Port x configuration bits (y = 0..15)
            unsigned PUPDR2  : 2; // bits 4..5 Port x configuration bits (y = 0..15)
            unsigned PUPDR3  : 2; // bits 6..7 Port x configuration bits (y = 0..15)
            unsigned PUPDR4  : 2; // bits 8..9 Port x configuration bits (y = 0..15)
            unsigned PUPDR5  : 2; // bits 10..11 Port x configuration bits (y = 0..15)
            unsigned PUPDR6  : 2; // bits 12..13 Port x configuration bits (y = 0..15)
            unsigned PUPDR7  : 2; // bits 14..15 Port x configuration bits (y = 0..15)
            unsigned PUPDR8  : 2; // bits 16..17 Port x configuration bits (y = 0..15)
            unsigned PUPDR9  : 2; // bits 18..19 Port x configuration bits (y = 0..15)
            unsigned PUPDR10 : 2; // bits 20..21 Port x configuration bits (y = 0..15)
            unsigned PUPDR11 : 2; // bits 22..23 Port x configuration bits (y = 0..15)
            unsigned PUPDR12 : 2; // bits 24..25 Port x configuration bits (y = 0..15)
            unsigned PUPDR13 : 2; // bits 26..27 Port x configuration bits (y = 0..15)
            unsigned PUPDR14 : 2; // bits 28..29 Port x configuration bits (y = 0..15)
            unsigned PUPDR15 : 2; // bits 30..31 Port x configuration bits (y = 0..15)    
        } bit;
    
        static constexpr unsigned PUPDR0_POS = 0;
        static constexpr unsigned PUPDR0_MASK = 0x00000003;
        static constexpr unsigned PUPDR0(unsigned value) { return (value << 0); }
        static constexpr unsigned PUPDR1_POS = 2;
        static constexpr unsigned PUPDR1_MASK = 0x0000000c;
        static constexpr unsigned PUPDR1(unsigned value) { return (value << 2); }
        static constexpr unsigned PUPDR2_POS = 4;
        static constexpr unsigned PUPDR2_MASK = 0x00000030;
        static constexpr unsigned PUPDR2(unsigned value) { return (value << 4); }
        static constexpr unsigned PUPDR3_POS = 6;
        static constexpr unsigned PUPDR3_MASK = 0x000000c0;
        static constexpr unsigned PUPDR3(unsigned value) { return (value << 6); }
        static constexpr unsigned PUPDR4_POS = 8;
        static constexpr unsigned PUPDR4_MASK = 0x00000300;
        static constexpr unsigned PUPDR4(unsigned value) { return (value << 8); }
        static constexpr unsigned PUPDR5_POS = 10;
        static constexpr unsigned PUPDR5_MASK = 0x00000c00;
        static constexpr unsigned PUPDR5(unsigned value) { return (value << 10); }
        static constexpr unsigned PUPDR6_POS = 12;
        static constexpr unsigned PUPDR6_MASK = 0x00003000;
        static constexpr unsigned PUPDR6(unsigned value) { return (value << 12); }
        static constexpr unsigned PUPDR7_POS = 14;
        static constexpr unsigned PUPDR7_MASK = 0x0000c000;
        static constexpr unsigned PUPDR7(unsigned value) { return (value << 14); }
        static constexpr unsigned PUPDR8_POS = 16;
        static constexpr unsigned PUPDR8_MASK = 0x00030000;
        static constexpr unsigned PUPDR8(unsigned value) { return (value << 16); }
        static constexpr unsigned PUPDR9_POS = 18;
        static constexpr unsigned PUPDR9_MASK = 0x000c0000;
        static constexpr unsigned PUPDR9(unsigned value) { return (value << 18); }
        static constexpr unsigned PUPDR10_POS = 20;
        static constexpr unsigned PUPDR10_MASK = 0x00300000;
        static constexpr unsigned PUPDR10(unsigned value) { return (value << 20); }
        static constexpr unsigned PUPDR11_POS = 22;
        static constexpr unsigned PUPDR11_MASK = 0x00c00000;
        static constexpr unsigned PUPDR11(unsigned value) { return (value << 22); }
        static constexpr unsigned PUPDR12_POS = 24;
        static constexpr unsigned PUPDR12_MASK = 0x03000000;
        static constexpr unsigned PUPDR12(unsigned value) { return (value << 24); }
        static constexpr unsigned PUPDR13_POS = 26;
        static constexpr unsigned PUPDR13_MASK = 0x0c000000;
        static constexpr unsigned PUPDR13(unsigned value) { return (value << 26); }
        static constexpr unsigned PUPDR14_POS = 28;
        static constexpr unsigned PUPDR14_MASK = 0x30000000;
        static constexpr unsigned PUPDR14(unsigned value) { return (value << 28); }
        static constexpr unsigned PUPDR15_POS = 30;
        static constexpr unsigned PUPDR15_MASK = 0xc0000000;
        static constexpr unsigned PUPDR15(unsigned value) { return (value << 30); }
    } PUPDR;

    volatile union IDR_T // IDR: GPIO port input data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IDR_BIT_T
        {
            unsigned IDR0  : 1; // bit 0 Port input data (y = 0..15)
            unsigned IDR1  : 1; // bit 1 Port input data (y = 0..15)
            unsigned IDR2  : 1; // bit 2 Port input data (y = 0..15)
            unsigned IDR3  : 1; // bit 3 Port input data (y = 0..15)
            unsigned IDR4  : 1; // bit 4 Port input data (y = 0..15)
            unsigned IDR5  : 1; // bit 5 Port input data (y = 0..15)
            unsigned IDR6  : 1; // bit 6 Port input data (y = 0..15)
            unsigned IDR7  : 1; // bit 7 Port input data (y = 0..15)
            unsigned IDR8  : 1; // bit 8 Port input data (y = 0..15)
            unsigned IDR9  : 1; // bit 9 Port input data (y = 0..15)
            unsigned IDR10 : 1; // bit 10 Port input data (y = 0..15)
            unsigned IDR11 : 1; // bit 11 Port input data (y = 0..15)
            unsigned IDR12 : 1; // bit 12 Port input data (y = 0..15)
            unsigned IDR13 : 1; // bit 13 Port input data (y = 0..15)
            unsigned IDR14 : 1; // bit 14 Port input data (y = 0..15)
            unsigned IDR15 : 1; // bit 15 Port input data (y = 0..15)
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

    volatile union ODR_T // ODR: GPIO port output data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ODR_BIT_T
        {
            unsigned ODR0  : 1; // bit 0 Port output data (y = 0..15)
            unsigned ODR1  : 1; // bit 1 Port output data (y = 0..15)
            unsigned ODR2  : 1; // bit 2 Port output data (y = 0..15)
            unsigned ODR3  : 1; // bit 3 Port output data (y = 0..15)
            unsigned ODR4  : 1; // bit 4 Port output data (y = 0..15)
            unsigned ODR5  : 1; // bit 5 Port output data (y = 0..15)
            unsigned ODR6  : 1; // bit 6 Port output data (y = 0..15)
            unsigned ODR7  : 1; // bit 7 Port output data (y = 0..15)
            unsigned ODR8  : 1; // bit 8 Port output data (y = 0..15)
            unsigned ODR9  : 1; // bit 9 Port output data (y = 0..15)
            unsigned ODR10 : 1; // bit 10 Port output data (y = 0..15)
            unsigned ODR11 : 1; // bit 11 Port output data (y = 0..15)
            unsigned ODR12 : 1; // bit 12 Port output data (y = 0..15)
            unsigned ODR13 : 1; // bit 13 Port output data (y = 0..15)
            unsigned ODR14 : 1; // bit 14 Port output data (y = 0..15)
            unsigned ODR15 : 1; // bit 15 Port output data (y = 0..15)
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

    volatile union BSRR_T // BSRR: GPIO port bit set/reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BSRR_BIT_T
        {
            unsigned BS0  : 1; // bit 0 Port x set bit y (y= 0..15)
            unsigned BS1  : 1; // bit 1 Port x set bit y (y= 0..15)
            unsigned BS2  : 1; // bit 2 Port x set bit y (y= 0..15)
            unsigned BS3  : 1; // bit 3 Port x set bit y (y= 0..15)
            unsigned BS4  : 1; // bit 4 Port x set bit y (y= 0..15)
            unsigned BS5  : 1; // bit 5 Port x set bit y (y= 0..15)
            unsigned BS6  : 1; // bit 6 Port x set bit y (y= 0..15)
            unsigned BS7  : 1; // bit 7 Port x set bit y (y= 0..15)
            unsigned BS8  : 1; // bit 8 Port x set bit y (y= 0..15)
            unsigned BS9  : 1; // bit 9 Port x set bit y (y= 0..15)
            unsigned BS10 : 1; // bit 10 Port x set bit y (y= 0..15)
            unsigned BS11 : 1; // bit 11 Port x set bit y (y= 0..15)
            unsigned BS12 : 1; // bit 12 Port x set bit y (y= 0..15)
            unsigned BS13 : 1; // bit 13 Port x set bit y (y= 0..15)
            unsigned BS14 : 1; // bit 14 Port x set bit y (y= 0..15)
            unsigned BS15 : 1; // bit 15 Port x set bit y (y= 0..15)
            unsigned BR0  : 1; // bit 16 Port x set bit y (y= 0..15)
            unsigned BR1  : 1; // bit 17 Port x reset bit y (y = 0..15)
            unsigned BR2  : 1; // bit 18 Port x reset bit y (y = 0..15)
            unsigned BR3  : 1; // bit 19 Port x reset bit y (y = 0..15)
            unsigned BR4  : 1; // bit 20 Port x reset bit y (y = 0..15)
            unsigned BR5  : 1; // bit 21 Port x reset bit y (y = 0..15)
            unsigned BR6  : 1; // bit 22 Port x reset bit y (y = 0..15)
            unsigned BR7  : 1; // bit 23 Port x reset bit y (y = 0..15)
            unsigned BR8  : 1; // bit 24 Port x reset bit y (y = 0..15)
            unsigned BR9  : 1; // bit 25 Port x reset bit y (y = 0..15)
            unsigned BR10 : 1; // bit 26 Port x reset bit y (y = 0..15)
            unsigned BR11 : 1; // bit 27 Port x reset bit y (y = 0..15)
            unsigned BR12 : 1; // bit 28 Port x reset bit y (y = 0..15)
            unsigned BR13 : 1; // bit 29 Port x reset bit y (y = 0..15)
            unsigned BR14 : 1; // bit 30 Port x reset bit y (y = 0..15)
            unsigned BR15 : 1; // bit 31 Port x reset bit y (y = 0..15)    
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

    volatile union LCKR_T // LCKR: GPIO port configuration lock register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LCKR_BIT_T
        {
            unsigned LCK0  : 1; // bit 0 Port x lock bit y (y= 0..15)
            unsigned LCK1  : 1; // bit 1 Port x lock bit y (y= 0..15)
            unsigned LCK2  : 1; // bit 2 Port x lock bit y (y= 0..15)
            unsigned LCK3  : 1; // bit 3 Port x lock bit y (y= 0..15)
            unsigned LCK4  : 1; // bit 4 Port x lock bit y (y= 0..15)
            unsigned LCK5  : 1; // bit 5 Port x lock bit y (y= 0..15)
            unsigned LCK6  : 1; // bit 6 Port x lock bit y (y= 0..15)
            unsigned LCK7  : 1; // bit 7 Port x lock bit y (y= 0..15)
            unsigned LCK8  : 1; // bit 8 Port x lock bit y (y= 0..15)
            unsigned LCK9  : 1; // bit 9 Port x lock bit y (y= 0..15)
            unsigned LCK10 : 1; // bit 10 Port x lock bit y (y= 0..15)
            unsigned LCK11 : 1; // bit 11 Port x lock bit y (y= 0..15)
            unsigned LCK12 : 1; // bit 12 Port x lock bit y (y= 0..15)
            unsigned LCK13 : 1; // bit 13 Port x lock bit y (y= 0..15)
            unsigned LCK14 : 1; // bit 14 Port x lock bit y (y= 0..15)
            unsigned LCK15 : 1; // bit 15 Port x lock bit y (y= 0..15)
            unsigned LCKK  : 1; // bit 16 Port x lock bit y (y= 0..15)
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

    volatile union AFRL_T // AFRL: GPIO alternate function low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AFRL_BIT_T
        {
            unsigned AFRL0 : 4; // bits 0..3 Alternate function selection for port x bit y (y = 0..7)
            unsigned AFRL1 : 4; // bits 4..7 Alternate function selection for port x bit y (y = 0..7)
            unsigned AFRL2 : 4; // bits 8..11 Alternate function selection for port x bit y (y = 0..7)
            unsigned AFRL3 : 4; // bits 12..15 Alternate function selection for port x bit y (y = 0..7)
            unsigned AFRL4 : 4; // bits 16..19 Alternate function selection for port x bit y (y = 0..7)
            unsigned AFRL5 : 4; // bits 20..23 Alternate function selection for port x bit y (y = 0..7)
            unsigned AFRL6 : 4; // bits 24..27 Alternate function selection for port x bit y (y = 0..7)
            unsigned AFRL7 : 4; // bits 28..31 Alternate function selection for port x bit y (y = 0..7)    
        } bit;
    
        static constexpr unsigned AFRL0_POS = 0;
        static constexpr unsigned AFRL0_MASK = 0x0000000f;
        static constexpr unsigned AFRL0(unsigned value) { return (value << 0); }
        static constexpr unsigned AFRL1_POS = 4;
        static constexpr unsigned AFRL1_MASK = 0x000000f0;
        static constexpr unsigned AFRL1(unsigned value) { return (value << 4); }
        static constexpr unsigned AFRL2_POS = 8;
        static constexpr unsigned AFRL2_MASK = 0x00000f00;
        static constexpr unsigned AFRL2(unsigned value) { return (value << 8); }
        static constexpr unsigned AFRL3_POS = 12;
        static constexpr unsigned AFRL3_MASK = 0x0000f000;
        static constexpr unsigned AFRL3(unsigned value) { return (value << 12); }
        static constexpr unsigned AFRL4_POS = 16;
        static constexpr unsigned AFRL4_MASK = 0x000f0000;
        static constexpr unsigned AFRL4(unsigned value) { return (value << 16); }
        static constexpr unsigned AFRL5_POS = 20;
        static constexpr unsigned AFRL5_MASK = 0x00f00000;
        static constexpr unsigned AFRL5(unsigned value) { return (value << 20); }
        static constexpr unsigned AFRL6_POS = 24;
        static constexpr unsigned AFRL6_MASK = 0x0f000000;
        static constexpr unsigned AFRL6(unsigned value) { return (value << 24); }
        static constexpr unsigned AFRL7_POS = 28;
        static constexpr unsigned AFRL7_MASK = 0xf0000000;
        static constexpr unsigned AFRL7(unsigned value) { return (value << 28); }
    } AFRL;

    volatile union AFRH_T // AFRH: GPIO alternate function high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AFRH_BIT_T
        {
            unsigned AFRH8  : 4; // bits 0..3 Alternate function selection for port x bit y (y = 8..15)
            unsigned AFRH9  : 4; // bits 4..7 Alternate function selection for port x bit y (y = 8..15)
            unsigned AFRH10 : 4; // bits 8..11 Alternate function selection for port x bit y (y = 8..15)
            unsigned AFRH11 : 4; // bits 12..15 Alternate function selection for port x bit y (y = 8..15)
            unsigned AFRH12 : 4; // bits 16..19 Alternate function selection for port x bit y (y = 8..15)
            unsigned AFRH13 : 4; // bits 20..23 Alternate function selection for port x bit y (y = 8..15)
            unsigned AFRH14 : 4; // bits 24..27 Alternate function selection for port x bit y (y = 8..15)
            unsigned AFRH15 : 4; // bits 28..31 Alternate function selection for port x bit y (y = 8..15)    
        } bit;
    
        static constexpr unsigned AFRH8_POS = 0;
        static constexpr unsigned AFRH8_MASK = 0x0000000f;
        static constexpr unsigned AFRH8(unsigned value) { return (value << 0); }
        static constexpr unsigned AFRH9_POS = 4;
        static constexpr unsigned AFRH9_MASK = 0x000000f0;
        static constexpr unsigned AFRH9(unsigned value) { return (value << 4); }
        static constexpr unsigned AFRH10_POS = 8;
        static constexpr unsigned AFRH10_MASK = 0x00000f00;
        static constexpr unsigned AFRH10(unsigned value) { return (value << 8); }
        static constexpr unsigned AFRH11_POS = 12;
        static constexpr unsigned AFRH11_MASK = 0x0000f000;
        static constexpr unsigned AFRH11(unsigned value) { return (value << 12); }
        static constexpr unsigned AFRH12_POS = 16;
        static constexpr unsigned AFRH12_MASK = 0x000f0000;
        static constexpr unsigned AFRH12(unsigned value) { return (value << 16); }
        static constexpr unsigned AFRH13_POS = 20;
        static constexpr unsigned AFRH13_MASK = 0x00f00000;
        static constexpr unsigned AFRH13(unsigned value) { return (value << 20); }
        static constexpr unsigned AFRH14_POS = 24;
        static constexpr unsigned AFRH14_MASK = 0x0f000000;
        static constexpr unsigned AFRH14(unsigned value) { return (value << 24); }
        static constexpr unsigned AFRH15_POS = 28;
        static constexpr unsigned AFRH15_MASK = 0xf0000000;
        static constexpr unsigned AFRH15(unsigned value) { return (value << 28); }
    } AFRH;

    volatile union BRR_T // BRR: Port bit reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BRR_BIT_T
        {
            unsigned BR0  : 1; // bit 0 Port x Reset bit y
            unsigned BR1  : 1; // bit 1 Port x Reset bit y
            unsigned BR2  : 1; // bit 2 Port x Reset bit y
            unsigned BR3  : 1; // bit 3 Port x Reset bit y
            unsigned BR4  : 1; // bit 4 Port x Reset bit y
            unsigned BR5  : 1; // bit 5 Port x Reset bit y
            unsigned BR6  : 1; // bit 6 Port x Reset bit y
            unsigned BR7  : 1; // bit 7 Port x Reset bit y
            unsigned BR8  : 1; // bit 8 Port x Reset bit y
            unsigned BR9  : 1; // bit 9 Port x Reset bit y
            unsigned BR10 : 1; // bit 10 Port x Reset bit y
            unsigned BR11 : 1; // bit 11 Port x Reset bit y
            unsigned BR12 : 1; // bit 12 Port x Reset bit y
            unsigned BR13 : 1; // bit 13 Port x Reset bit y
            unsigned BR14 : 1; // bit 14 Port x Reset bit y
            unsigned BR15 : 1; // bit 15 Port x Reset bit y
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

}; // struct GPIOA_T

static_assert(sizeof(GPIO_T) == GPIO_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp