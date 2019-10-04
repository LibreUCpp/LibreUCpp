#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) NVIC_T
{
    static constexpr size_t INSTANCE_SIZE = 3844;
    static constexpr size_t PADDED_INSTANCE_SIZE = 3844;
    static constexpr intptr_t BASE_ADDRESS = 0xe000e000;

    static constexpr intptr_t ADDR_OFFSET_ICTR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_STIR = 0xf00;
    static constexpr intptr_t ADDR_OFFSET_ISER0 = 0x100;
    static constexpr intptr_t ADDR_OFFSET_ISER1 = 0x104;
    static constexpr intptr_t ADDR_OFFSET_ISER2 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_ICER0 = 0x180;
    static constexpr intptr_t ADDR_OFFSET_ICER1 = 0x184;
    static constexpr intptr_t ADDR_OFFSET_ICER2 = 0x188;
    static constexpr intptr_t ADDR_OFFSET_ISPR0 = 0x200;
    static constexpr intptr_t ADDR_OFFSET_ISPR1 = 0x204;
    static constexpr intptr_t ADDR_OFFSET_ISPR2 = 0x208;
    static constexpr intptr_t ADDR_OFFSET_ICPR0 = 0x280;
    static constexpr intptr_t ADDR_OFFSET_ICPR1 = 0x284;
    static constexpr intptr_t ADDR_OFFSET_ICPR2 = 0x288;
    static constexpr intptr_t ADDR_OFFSET_IABR0 = 0x300;
    static constexpr intptr_t ADDR_OFFSET_IABR1 = 0x304;
    static constexpr intptr_t ADDR_OFFSET_IABR2 = 0x308;
    static constexpr intptr_t ADDR_OFFSET_IPR0 = 0x400;
    static constexpr intptr_t ADDR_OFFSET_IPR1 = 0x404;
    static constexpr intptr_t ADDR_OFFSET_IPR2 = 0x408;
    static constexpr intptr_t ADDR_OFFSET_IPR3 = 0x40c;
    static constexpr intptr_t ADDR_OFFSET_IPR4 = 0x410;
    static constexpr intptr_t ADDR_OFFSET_IPR5 = 0x414;
    static constexpr intptr_t ADDR_OFFSET_IPR6 = 0x418;
    static constexpr intptr_t ADDR_OFFSET_IPR7 = 0x41c;
    static constexpr intptr_t ADDR_OFFSET_IPR8 = 0x420;
    static constexpr intptr_t ADDR_OFFSET_IPR9 = 0x424;
    static constexpr intptr_t ADDR_OFFSET_IPR10 = 0x428;
    static constexpr intptr_t ADDR_OFFSET_IPR11 = 0x42c;
    static constexpr intptr_t ADDR_OFFSET_IPR12 = 0x430;
    static constexpr intptr_t ADDR_OFFSET_IPR13 = 0x434;
    static constexpr intptr_t ADDR_OFFSET_IPR14 = 0x438;
    static constexpr intptr_t ADDR_OFFSET_IPR15 = 0x43c;
    static constexpr intptr_t ADDR_OFFSET_IPR16 = 0x440;
    static constexpr intptr_t ADDR_OFFSET_IPR17 = 0x444;
    static constexpr intptr_t ADDR_OFFSET_IPR18 = 0x448;
    static constexpr intptr_t ADDR_OFFSET_IPR19 = 0x44c;
    static constexpr intptr_t ADDR_OFFSET_IPR2 = 0x450;

    uint8_t Reserved1[4];

    volatile union ICTR_T // ICTR: Interrupt Controller Type Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICTR_BIT_T
        {
            unsigned INTLINESNUM : 4; // bits 0..3 Total number of interrupt lines in groups
            unsigned             : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned INTLINESNUM_POS = 0;
        static constexpr unsigned INTLINESNUM_MASK = 0x0000000f;
        static constexpr unsigned INTLINESNUM(unsigned value) { return (value << 0); }
    } ICTR;

    uint8_t Reserved2[248];

    volatile union ISER0_T // ISER0: Interrupt Set-Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISER0_BIT_T
        {
            unsigned SETENA : 32; // bits 0..31 SETENA    
        } bit;
    
        static constexpr unsigned SETENA_POS = 0;
        static constexpr unsigned SETENA_MASK = 0xffffffff;
        static constexpr unsigned SETENA(unsigned value) { return (value << 0); }
    } ISER0;

    volatile union ISER1_T // ISER1: Interrupt Set-Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISER1_BIT_T
        {
            unsigned SETENA : 32; // bits 0..31 SETENA    
        } bit;
    
        static constexpr unsigned SETENA_POS = 0;
        static constexpr unsigned SETENA_MASK = 0xffffffff;
        static constexpr unsigned SETENA(unsigned value) { return (value << 0); }
    } ISER1;

    volatile union ISER2_T // ISER2: Interrupt Set-Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISER2_BIT_T
        {
            unsigned SETENA : 32; // bits 0..31 SETENA    
        } bit;
    
        static constexpr unsigned SETENA_POS = 0;
        static constexpr unsigned SETENA_MASK = 0xffffffff;
        static constexpr unsigned SETENA(unsigned value) { return (value << 0); }
    } ISER2;

    uint8_t Reserved3[116];

    volatile union ICER0_T // ICER0: Interrupt Clear-Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICER0_BIT_T
        {
            unsigned CLRENA : 32; // bits 0..31 CLRENA    
        } bit;
    
        static constexpr unsigned CLRENA_POS = 0;
        static constexpr unsigned CLRENA_MASK = 0xffffffff;
        static constexpr unsigned CLRENA(unsigned value) { return (value << 0); }
    } ICER0;

    volatile union ICER1_T // ICER1: Interrupt Clear-Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICER1_BIT_T
        {
            unsigned CLRENA : 32; // bits 0..31 CLRENA    
        } bit;
    
        static constexpr unsigned CLRENA_POS = 0;
        static constexpr unsigned CLRENA_MASK = 0xffffffff;
        static constexpr unsigned CLRENA(unsigned value) { return (value << 0); }
    } ICER1;

    volatile union ICER2_T // ICER2: Interrupt Clear-Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICER2_BIT_T
        {
            unsigned CLRENA : 32; // bits 0..31 CLRENA    
        } bit;
    
        static constexpr unsigned CLRENA_POS = 0;
        static constexpr unsigned CLRENA_MASK = 0xffffffff;
        static constexpr unsigned CLRENA(unsigned value) { return (value << 0); }
    } ICER2;

    uint8_t Reserved4[116];

    volatile union ISPR0_T // ISPR0: Interrupt Set-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISPR0_BIT_T
        {
            unsigned SETPEND : 32; // bits 0..31 SETPEND    
        } bit;
    
        static constexpr unsigned SETPEND_POS = 0;
        static constexpr unsigned SETPEND_MASK = 0xffffffff;
        static constexpr unsigned SETPEND(unsigned value) { return (value << 0); }
    } ISPR0;

    volatile union ISPR1_T // ISPR1: Interrupt Set-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISPR1_BIT_T
        {
            unsigned SETPEND : 32; // bits 0..31 SETPEND    
        } bit;
    
        static constexpr unsigned SETPEND_POS = 0;
        static constexpr unsigned SETPEND_MASK = 0xffffffff;
        static constexpr unsigned SETPEND(unsigned value) { return (value << 0); }
    } ISPR1;

    volatile union ISPR2_T // ISPR2: Interrupt Set-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISPR2_BIT_T
        {
            unsigned SETPEND : 32; // bits 0..31 SETPEND    
        } bit;
    
        static constexpr unsigned SETPEND_POS = 0;
        static constexpr unsigned SETPEND_MASK = 0xffffffff;
        static constexpr unsigned SETPEND(unsigned value) { return (value << 0); }
    } ISPR2;

    uint8_t Reserved5[116];

    volatile union ICPR0_T // ICPR0: Interrupt Clear-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICPR0_BIT_T
        {
            unsigned CLRPEND : 32; // bits 0..31 CLRPEND    
        } bit;
    
        static constexpr unsigned CLRPEND_POS = 0;
        static constexpr unsigned CLRPEND_MASK = 0xffffffff;
        static constexpr unsigned CLRPEND(unsigned value) { return (value << 0); }
    } ICPR0;

    volatile union ICPR1_T // ICPR1: Interrupt Clear-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICPR1_BIT_T
        {
            unsigned CLRPEND : 32; // bits 0..31 CLRPEND    
        } bit;
    
        static constexpr unsigned CLRPEND_POS = 0;
        static constexpr unsigned CLRPEND_MASK = 0xffffffff;
        static constexpr unsigned CLRPEND(unsigned value) { return (value << 0); }
    } ICPR1;

    volatile union ICPR2_T // ICPR2: Interrupt Clear-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICPR2_BIT_T
        {
            unsigned CLRPEND : 32; // bits 0..31 CLRPEND    
        } bit;
    
        static constexpr unsigned CLRPEND_POS = 0;
        static constexpr unsigned CLRPEND_MASK = 0xffffffff;
        static constexpr unsigned CLRPEND(unsigned value) { return (value << 0); }
    } ICPR2;

    uint8_t Reserved6[116];

    volatile union IABR0_T // IABR0: Interrupt Active Bit Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IABR0_BIT_T
        {
            unsigned ACTIVE : 32; // bits 0..31 ACTIVE    
        } bit;
    
        static constexpr unsigned ACTIVE_POS = 0;
        static constexpr unsigned ACTIVE_MASK = 0xffffffff;
        static constexpr unsigned ACTIVE(unsigned value) { return (value << 0); }
    } IABR0;

    volatile union IABR1_T // IABR1: Interrupt Active Bit Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IABR1_BIT_T
        {
            unsigned ACTIVE : 32; // bits 0..31 ACTIVE    
        } bit;
    
        static constexpr unsigned ACTIVE_POS = 0;
        static constexpr unsigned ACTIVE_MASK = 0xffffffff;
        static constexpr unsigned ACTIVE(unsigned value) { return (value << 0); }
    } IABR1;

    volatile union IABR2_T // IABR2: Interrupt Active Bit Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IABR2_BIT_T
        {
            unsigned ACTIVE : 32; // bits 0..31 ACTIVE    
        } bit;
    
        static constexpr unsigned ACTIVE_POS = 0;
        static constexpr unsigned ACTIVE_MASK = 0xffffffff;
        static constexpr unsigned ACTIVE(unsigned value) { return (value << 0); }
    } IABR2;

    uint8_t Reserved7[244];

    volatile union IPR0_T // IPR0: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR0_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR0;

    volatile union IPR1_T // IPR1: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR1_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR1;

    volatile union IPR2_T // IPR2: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR2_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR2;

    volatile union IPR3_T // IPR3: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR3_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR3;

    volatile union IPR4_T // IPR4: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR4_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR4;

    volatile union IPR5_T // IPR5: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR5_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR5;

    volatile union IPR6_T // IPR6: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR6_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR6;

    volatile union IPR7_T // IPR7: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR7_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR7;

    volatile union IPR8_T // IPR8: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR8_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR8;

    volatile union IPR9_T // IPR9: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR9_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR9;

    volatile union IPR10_T // IPR10: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR10_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR10;

    volatile union IPR11_T // IPR11: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR11_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR11;

    volatile union IPR12_T // IPR12: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR12_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR12;

    volatile union IPR13_T // IPR13: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR13_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR13;

    volatile union IPR14_T // IPR14: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR14_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR14;

    volatile union IPR15_T // IPR15: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR15_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR15;

    volatile union IPR16_T // IPR16: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR16_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR16;

    volatile union IPR17_T // IPR17: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR17_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR17;

    volatile union IPR18_T // IPR18: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR18_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR18;

    volatile union IPR19_T // IPR19: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR19_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR19;

    volatile union IPR2_T // IPR2: Interrupt Priority Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR2_BIT_T
        {
            unsigned IPR_N0 : 8; // bits 0..7 IPR_N0
            unsigned IPR_N1 : 8; // bits 8..15 IPR_N1
            unsigned IPR_N2 : 8; // bits 16..23 IPR_N2
            unsigned IPR_N3 : 8; // bits 24..31 IPR_N3    
        } bit;
    
        static constexpr unsigned IPR_N0_POS = 0;
        static constexpr unsigned IPR_N0_MASK = 0x000000ff;
        static constexpr unsigned IPR_N0(unsigned value) { return (value << 0); }
        static constexpr unsigned IPR_N1_POS = 8;
        static constexpr unsigned IPR_N1_MASK = 0x0000ff00;
        static constexpr unsigned IPR_N1(unsigned value) { return (value << 8); }
        static constexpr unsigned IPR_N2_POS = 16;
        static constexpr unsigned IPR_N2_MASK = 0x00ff0000;
        static constexpr unsigned IPR_N2(unsigned value) { return (value << 16); }
        static constexpr unsigned IPR_N3_POS = 24;
        static constexpr unsigned IPR_N3_MASK = 0xff000000;
        static constexpr unsigned IPR_N3(unsigned value) { return (value << 24); }
    } IPR2;

    uint8_t Reserved8[2732];

    volatile union STIR_T // STIR: Software Triggered Interrupt Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) STIR_BIT_T
        {
            unsigned INTID : 9; // bits 0..8 interrupt to be triggered
            unsigned       : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned INTID_POS = 0;
        static constexpr unsigned INTID_MASK = 0x000001ff;
        static constexpr unsigned INTID(unsigned value) { return (value << 0); }
    } STIR;

}; // struct NVIC_T

static_assert(sizeof(NVIC_T) == NVIC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp