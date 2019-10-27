#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) NVIC_T
{
    static constexpr size_t INSTANCE_SIZE = 800;
    static constexpr size_t PADDED_INSTANCE_SIZE = 800;
    static constexpr intptr_t BASE_ADDRESS = 0xe000e100;

    static constexpr intptr_t ADDR_OFFSET_ISER = 0x00;
    static constexpr intptr_t ADDR_OFFSET_ICER = 0x80;
    static constexpr intptr_t ADDR_OFFSET_ISPR = 0x100;
    static constexpr intptr_t ADDR_OFFSET_ICPR = 0x180;
    static constexpr intptr_t ADDR_OFFSET_IPR0 = 0x300;
    static constexpr intptr_t ADDR_OFFSET_IPR1 = 0x304;
    static constexpr intptr_t ADDR_OFFSET_IPR2 = 0x308;
    static constexpr intptr_t ADDR_OFFSET_IPR3 = 0x30c;
    static constexpr intptr_t ADDR_OFFSET_IPR4 = 0x310;
    static constexpr intptr_t ADDR_OFFSET_IPR5 = 0x314;
    static constexpr intptr_t ADDR_OFFSET_IPR6 = 0x318;
    static constexpr intptr_t ADDR_OFFSET_IPR7 = 0x31c;

    volatile union ISER_T // ISER: Interrupt Set Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISER_BIT_T
        {
            unsigned SETENA : 32; // bits 0..31 SETENA    
        } bit;
    
        static constexpr unsigned SETENA_POS = 0;
        static constexpr unsigned SETENA_MASK = 0xffffffff;
        static constexpr unsigned SETENA(unsigned value) { return (value << 0); }
    } ISER;

    uint8_t Reserved1[124];

    volatile union ICER_T // ICER: Interrupt Clear Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICER_BIT_T
        {
            unsigned CLRENA : 32; // bits 0..31 CLRENA    
        } bit;
    
        static constexpr unsigned CLRENA_POS = 0;
        static constexpr unsigned CLRENA_MASK = 0xffffffff;
        static constexpr unsigned CLRENA(unsigned value) { return (value << 0); }
    } ICER;

    uint8_t Reserved2[124];

    volatile union ISPR_T // ISPR: Interrupt Set-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISPR_BIT_T
        {
            unsigned SETPEND : 32; // bits 0..31 SETPEND    
        } bit;
    
        static constexpr unsigned SETPEND_POS = 0;
        static constexpr unsigned SETPEND_MASK = 0xffffffff;
        static constexpr unsigned SETPEND(unsigned value) { return (value << 0); }
    } ISPR;

    uint8_t Reserved3[124];

    volatile union ICPR_T // ICPR: Interrupt Clear-Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICPR_BIT_T
        {
            unsigned CLRPEND : 32; // bits 0..31 CLRPEND    
        } bit;
    
        static constexpr unsigned CLRPEND_POS = 0;
        static constexpr unsigned CLRPEND_MASK = 0xffffffff;
        static constexpr unsigned CLRPEND(unsigned value) { return (value << 0); }
    } ICPR;

    uint8_t Reserved4[380];

    volatile union IPR0_T // IPR0: Interrupt Priority Register 0 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR0_BIT_T
        {
            unsigned        : 6; // bits 0..5 unused
            unsigned PRI_00 : 2; // bits 6..7 PRI_00
            unsigned        : 6; // bits 8..13 unused
            unsigned PRI_01 : 2; // bits 14..15 PRI_01
            unsigned        : 6; // bits 16..21 unused
            unsigned PRI_02 : 2; // bits 22..23 PRI_02
            unsigned        : 6; // bits 24..29 unused
            unsigned PRI_03 : 2; // bits 30..31 PRI_03    
        } bit;
    
        static constexpr unsigned PRI_00_POS = 6;
        static constexpr unsigned PRI_00_MASK = 0x000000c0;
        static constexpr unsigned PRI_00(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_01_POS = 14;
        static constexpr unsigned PRI_01_MASK = 0x0000c000;
        static constexpr unsigned PRI_01(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_02_POS = 22;
        static constexpr unsigned PRI_02_MASK = 0x00c00000;
        static constexpr unsigned PRI_02(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_03_POS = 30;
        static constexpr unsigned PRI_03_MASK = 0xc0000000;
        static constexpr unsigned PRI_03(unsigned value) { return (value << 30); }
    } IPR0;

    volatile union IPR1_T // IPR1: Interrupt Priority Register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR1_BIT_T
        {
            unsigned        : 6; // bits 0..5 unused
            unsigned PRI_40 : 2; // bits 6..7 PRI_40
            unsigned        : 6; // bits 8..13 unused
            unsigned PRI_41 : 2; // bits 14..15 PRI_41
            unsigned        : 6; // bits 16..21 unused
            unsigned PRI_42 : 2; // bits 22..23 PRI_42
            unsigned        : 6; // bits 24..29 unused
            unsigned PRI_43 : 2; // bits 30..31 PRI_43    
        } bit;
    
        static constexpr unsigned PRI_40_POS = 6;
        static constexpr unsigned PRI_40_MASK = 0x000000c0;
        static constexpr unsigned PRI_40(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_41_POS = 14;
        static constexpr unsigned PRI_41_MASK = 0x0000c000;
        static constexpr unsigned PRI_41(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_42_POS = 22;
        static constexpr unsigned PRI_42_MASK = 0x00c00000;
        static constexpr unsigned PRI_42(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_43_POS = 30;
        static constexpr unsigned PRI_43_MASK = 0xc0000000;
        static constexpr unsigned PRI_43(unsigned value) { return (value << 30); }
    } IPR1;

    volatile union IPR2_T // IPR2: Interrupt Priority Register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR2_BIT_T
        {
            unsigned        : 6; // bits 0..5 unused
            unsigned PRI_80 : 2; // bits 6..7 PRI_80
            unsigned        : 6; // bits 8..13 unused
            unsigned PRI_81 : 2; // bits 14..15 PRI_81
            unsigned        : 6; // bits 16..21 unused
            unsigned PRI_82 : 2; // bits 22..23 PRI_82
            unsigned        : 6; // bits 24..29 unused
            unsigned PRI_83 : 2; // bits 30..31 PRI_83    
        } bit;
    
        static constexpr unsigned PRI_80_POS = 6;
        static constexpr unsigned PRI_80_MASK = 0x000000c0;
        static constexpr unsigned PRI_80(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_81_POS = 14;
        static constexpr unsigned PRI_81_MASK = 0x0000c000;
        static constexpr unsigned PRI_81(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_82_POS = 22;
        static constexpr unsigned PRI_82_MASK = 0x00c00000;
        static constexpr unsigned PRI_82(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_83_POS = 30;
        static constexpr unsigned PRI_83_MASK = 0xc0000000;
        static constexpr unsigned PRI_83(unsigned value) { return (value << 30); }
    } IPR2;

    volatile union IPR3_T // IPR3: Interrupt Priority Register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR3_BIT_T
        {
            unsigned         : 6; // bits 0..5 unused
            unsigned PRI_120 : 2; // bits 6..7 PRI_120
            unsigned         : 6; // bits 8..13 unused
            unsigned PRI_121 : 2; // bits 14..15 PRI_121
            unsigned         : 6; // bits 16..21 unused
            unsigned PRI_122 : 2; // bits 22..23 PRI_122
            unsigned         : 6; // bits 24..29 unused
            unsigned PRI_123 : 2; // bits 30..31 PRI_123    
        } bit;
    
        static constexpr unsigned PRI_120_POS = 6;
        static constexpr unsigned PRI_120_MASK = 0x000000c0;
        static constexpr unsigned PRI_120(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_121_POS = 14;
        static constexpr unsigned PRI_121_MASK = 0x0000c000;
        static constexpr unsigned PRI_121(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_122_POS = 22;
        static constexpr unsigned PRI_122_MASK = 0x00c00000;
        static constexpr unsigned PRI_122(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_123_POS = 30;
        static constexpr unsigned PRI_123_MASK = 0xc0000000;
        static constexpr unsigned PRI_123(unsigned value) { return (value << 30); }
    } IPR3;

    volatile union IPR4_T // IPR4: Interrupt Priority Register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR4_BIT_T
        {
            unsigned         : 6; // bits 0..5 unused
            unsigned PRI_160 : 2; // bits 6..7 PRI_160
            unsigned         : 6; // bits 8..13 unused
            unsigned PRI_161 : 2; // bits 14..15 PRI_161
            unsigned         : 6; // bits 16..21 unused
            unsigned PRI_162 : 2; // bits 22..23 PRI_162
            unsigned         : 6; // bits 24..29 unused
            unsigned PRI_163 : 2; // bits 30..31 PRI_163    
        } bit;
    
        static constexpr unsigned PRI_160_POS = 6;
        static constexpr unsigned PRI_160_MASK = 0x000000c0;
        static constexpr unsigned PRI_160(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_161_POS = 14;
        static constexpr unsigned PRI_161_MASK = 0x0000c000;
        static constexpr unsigned PRI_161(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_162_POS = 22;
        static constexpr unsigned PRI_162_MASK = 0x00c00000;
        static constexpr unsigned PRI_162(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_163_POS = 30;
        static constexpr unsigned PRI_163_MASK = 0xc0000000;
        static constexpr unsigned PRI_163(unsigned value) { return (value << 30); }
    } IPR4;

    volatile union IPR5_T // IPR5: Interrupt Priority Register 5 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR5_BIT_T
        {
            unsigned         : 6; // bits 0..5 unused
            unsigned PRI_200 : 2; // bits 6..7 PRI_200
            unsigned         : 6; // bits 8..13 unused
            unsigned PRI_201 : 2; // bits 14..15 PRI_201
            unsigned         : 6; // bits 16..21 unused
            unsigned PRI_202 : 2; // bits 22..23 PRI_202
            unsigned         : 6; // bits 24..29 unused
            unsigned PRI_203 : 2; // bits 30..31 PRI_203    
        } bit;
    
        static constexpr unsigned PRI_200_POS = 6;
        static constexpr unsigned PRI_200_MASK = 0x000000c0;
        static constexpr unsigned PRI_200(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_201_POS = 14;
        static constexpr unsigned PRI_201_MASK = 0x0000c000;
        static constexpr unsigned PRI_201(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_202_POS = 22;
        static constexpr unsigned PRI_202_MASK = 0x00c00000;
        static constexpr unsigned PRI_202(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_203_POS = 30;
        static constexpr unsigned PRI_203_MASK = 0xc0000000;
        static constexpr unsigned PRI_203(unsigned value) { return (value << 30); }
    } IPR5;

    volatile union IPR6_T // IPR6: Interrupt Priority Register 6 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR6_BIT_T
        {
            unsigned         : 6; // bits 0..5 unused
            unsigned PRI_240 : 2; // bits 6..7 PRI_240
            unsigned         : 6; // bits 8..13 unused
            unsigned PRI_241 : 2; // bits 14..15 PRI_241
            unsigned         : 6; // bits 16..21 unused
            unsigned PRI_242 : 2; // bits 22..23 PRI_242
            unsigned         : 6; // bits 24..29 unused
            unsigned PRI_243 : 2; // bits 30..31 PRI_243    
        } bit;
    
        static constexpr unsigned PRI_240_POS = 6;
        static constexpr unsigned PRI_240_MASK = 0x000000c0;
        static constexpr unsigned PRI_240(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_241_POS = 14;
        static constexpr unsigned PRI_241_MASK = 0x0000c000;
        static constexpr unsigned PRI_241(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_242_POS = 22;
        static constexpr unsigned PRI_242_MASK = 0x00c00000;
        static constexpr unsigned PRI_242(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_243_POS = 30;
        static constexpr unsigned PRI_243_MASK = 0xc0000000;
        static constexpr unsigned PRI_243(unsigned value) { return (value << 30); }
    } IPR6;

    volatile union IPR7_T // IPR7: Interrupt Priority Register 7 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR7_BIT_T
        {
            unsigned         : 6; // bits 0..5 unused
            unsigned PRI_280 : 2; // bits 6..7 PRI_280
            unsigned         : 6; // bits 8..13 unused
            unsigned PRI_281 : 2; // bits 14..15 PRI_281
            unsigned         : 6; // bits 16..21 unused
            unsigned PRI_282 : 2; // bits 22..23 PRI_282
            unsigned         : 6; // bits 24..29 unused
            unsigned PRI_283 : 2; // bits 30..31 PRI_283    
        } bit;
    
        static constexpr unsigned PRI_280_POS = 6;
        static constexpr unsigned PRI_280_MASK = 0x000000c0;
        static constexpr unsigned PRI_280(unsigned value) { return (value << 6); }
        static constexpr unsigned PRI_281_POS = 14;
        static constexpr unsigned PRI_281_MASK = 0x0000c000;
        static constexpr unsigned PRI_281(unsigned value) { return (value << 14); }
        static constexpr unsigned PRI_282_POS = 22;
        static constexpr unsigned PRI_282_MASK = 0x00c00000;
        static constexpr unsigned PRI_282(unsigned value) { return (value << 22); }
        static constexpr unsigned PRI_283_POS = 30;
        static constexpr unsigned PRI_283_MASK = 0xc0000000;
        static constexpr unsigned PRI_283(unsigned value) { return (value << 30); }
    } IPR7;

}; // struct NVIC_T

static_assert(sizeof(NVIC_T) == NVIC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp