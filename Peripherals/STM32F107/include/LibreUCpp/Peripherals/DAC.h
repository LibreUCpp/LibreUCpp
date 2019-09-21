#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DAC_T
{
    static constexpr size_t INSTANCE_SIZE = 52;
    static constexpr intptr_t BASE_ADDRESS = 0x40007400;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SWTRIGR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DHR12R1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DHR12L1 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DHR8R1 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_DHR12R2 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_DHR12L2 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_DHR8R2 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_DHR12RD = 0x20;
    static constexpr intptr_t ADDR_OFFSET_DHR12LD = 0x24;
    static constexpr intptr_t ADDR_OFFSET_DHR8RD = 0x28;
    static constexpr intptr_t ADDR_OFFSET_DOR1 = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_DOR2 = 0x30;

    volatile union CR_T // CR: Control register (DAC_CR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned EN1    : 1; // bit 0 DAC channel1 enable
            unsigned BOFF1  : 1; // bit 1 DAC channel1 output buffer disable
            unsigned TEN1   : 1; // bit 2 DAC channel1 trigger enable
            unsigned TSEL1  : 3; // bits 3..5 DAC channel1 trigger selection
            unsigned WAVE1  : 2; // bits 6..7 DAC channel1 noise/triangle wave generation enable
            unsigned MAMP1  : 4; // bits 8..11 DAC channel1 mask/amplitude selector
            unsigned DMAEN1 : 1; // bit 12 DAC channel1 DMA enable
            unsigned        : 3; // bits 13..15 unused
            unsigned EN2    : 1; // bit 16 DAC channel2 enable
            unsigned BOFF2  : 1; // bit 17 DAC channel2 output buffer disable
            unsigned TEN2   : 1; // bit 18 DAC channel2 trigger enable
            unsigned TSEL2  : 3; // bits 19..21 DAC channel2 trigger selection
            unsigned WAVE2  : 2; // bits 22..23 DAC channel2 noise/triangle wave generation enable
            unsigned MAMP2  : 4; // bits 24..27 DAC channel2 mask/amplitude selector
            unsigned DMAEN2 : 1; // bit 28 DAC channel2 DMA enable
            unsigned        : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned EN1_POS = 0;
        static constexpr unsigned EN1_MASK = 0x00000001;
        static constexpr unsigned EN1(unsigned value) { return (value << 0); }
        static constexpr unsigned BOFF1_POS = 1;
        static constexpr unsigned BOFF1_MASK = 0x00000002;
        static constexpr unsigned BOFF1(unsigned value) { return (value << 1); }
        static constexpr unsigned TEN1_POS = 2;
        static constexpr unsigned TEN1_MASK = 0x00000004;
        static constexpr unsigned TEN1(unsigned value) { return (value << 2); }
        static constexpr unsigned TSEL1_POS = 3;
        static constexpr unsigned TSEL1_MASK = 0x00000038;
        static constexpr unsigned TSEL1(unsigned value) { return (value << 3); }
        static constexpr unsigned WAVE1_POS = 6;
        static constexpr unsigned WAVE1_MASK = 0x000000c0;
        static constexpr unsigned WAVE1(unsigned value) { return (value << 6); }
        static constexpr unsigned MAMP1_POS = 8;
        static constexpr unsigned MAMP1_MASK = 0x00000f00;
        static constexpr unsigned MAMP1(unsigned value) { return (value << 8); }
        static constexpr unsigned DMAEN1_POS = 12;
        static constexpr unsigned DMAEN1_MASK = 0x00001000;
        static constexpr unsigned DMAEN1(unsigned value) { return (value << 12); }
        static constexpr unsigned EN2_POS = 16;
        static constexpr unsigned EN2_MASK = 0x00010000;
        static constexpr unsigned EN2(unsigned value) { return (value << 16); }
        static constexpr unsigned BOFF2_POS = 17;
        static constexpr unsigned BOFF2_MASK = 0x00020000;
        static constexpr unsigned BOFF2(unsigned value) { return (value << 17); }
        static constexpr unsigned TEN2_POS = 18;
        static constexpr unsigned TEN2_MASK = 0x00040000;
        static constexpr unsigned TEN2(unsigned value) { return (value << 18); }
        static constexpr unsigned TSEL2_POS = 19;
        static constexpr unsigned TSEL2_MASK = 0x00380000;
        static constexpr unsigned TSEL2(unsigned value) { return (value << 19); }
        static constexpr unsigned WAVE2_POS = 22;
        static constexpr unsigned WAVE2_MASK = 0x00c00000;
        static constexpr unsigned WAVE2(unsigned value) { return (value << 22); }
        static constexpr unsigned MAMP2_POS = 24;
        static constexpr unsigned MAMP2_MASK = 0x0f000000;
        static constexpr unsigned MAMP2(unsigned value) { return (value << 24); }
        static constexpr unsigned DMAEN2_POS = 28;
        static constexpr unsigned DMAEN2_MASK = 0x10000000;
        static constexpr unsigned DMAEN2(unsigned value) { return (value << 28); }
    } CR;

    volatile union SWTRIGR_T // SWTRIGR: DAC software trigger register (DAC_SWTRIGR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) SWTRIGR_BIT_T
        {
            unsigned SWTRIG1 : 1; // bit 0 DAC channel1 software trigger
            unsigned SWTRIG2 : 1; // bit 1 DAC channel2 software trigger
            unsigned         : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned SWTRIG1_POS = 0;
        static constexpr unsigned SWTRIG1_MASK = 0x00000001;
        static constexpr unsigned SWTRIG1(unsigned value) { return (value << 0); }
        static constexpr unsigned SWTRIG2_POS = 1;
        static constexpr unsigned SWTRIG2_MASK = 0x00000002;
        static constexpr unsigned SWTRIG2(unsigned value) { return (value << 1); }
    } SWTRIGR;

    volatile union DHR12R1_T // DHR12R1: DAC channel1 12-bit right-aligned data holding register(DAC_DHR12R1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR12R1_BIT_T
        {
            unsigned DACC1DHR : 12; // bits 0..11 DAC channel1 12-bit right-aligned data
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned DACC1DHR_POS = 0;
        static constexpr unsigned DACC1DHR_MASK = 0x00000fff;
        static constexpr unsigned DACC1DHR(unsigned value) { return (value << 0); }
    } DHR12R1;

    volatile union DHR12L1_T // DHR12L1: DAC channel1 12-bit left aligned data holding register (DAC_DHR12L1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR12L1_BIT_T
        {
            unsigned          : 4; // bits 0..3 unused
            unsigned DACC1DHR : 12; // bits 4..15 DAC channel1 12-bit left-aligned data
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DACC1DHR_POS = 4;
        static constexpr unsigned DACC1DHR_MASK = 0x0000fff0;
        static constexpr unsigned DACC1DHR(unsigned value) { return (value << 4); }
    } DHR12L1;

    volatile union DHR8R1_T // DHR8R1: DAC channel1 8-bit right aligned data holding register (DAC_DHR8R1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR8R1_BIT_T
        {
            unsigned DACC1DHR : 8; // bits 0..7 DAC channel1 8-bit right-aligned data
            unsigned          : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned DACC1DHR_POS = 0;
        static constexpr unsigned DACC1DHR_MASK = 0x000000ff;
        static constexpr unsigned DACC1DHR(unsigned value) { return (value << 0); }
    } DHR8R1;

    volatile union DHR12R2_T // DHR12R2: DAC channel2 12-bit right aligned data holding register (DAC_DHR12R2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR12R2_BIT_T
        {
            unsigned DACC2DHR : 12; // bits 0..11 DAC channel2 12-bit right-aligned data
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned DACC2DHR_POS = 0;
        static constexpr unsigned DACC2DHR_MASK = 0x00000fff;
        static constexpr unsigned DACC2DHR(unsigned value) { return (value << 0); }
    } DHR12R2;

    volatile union DHR12L2_T // DHR12L2: DAC channel2 12-bit left aligned data holding register (DAC_DHR12L2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR12L2_BIT_T
        {
            unsigned          : 4; // bits 0..3 unused
            unsigned DACC2DHR : 12; // bits 4..15 DAC channel2 12-bit left-aligned data
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DACC2DHR_POS = 4;
        static constexpr unsigned DACC2DHR_MASK = 0x0000fff0;
        static constexpr unsigned DACC2DHR(unsigned value) { return (value << 4); }
    } DHR12L2;

    volatile union DHR8R2_T // DHR8R2: DAC channel2 8-bit right-aligned data holding register (DAC_DHR8R2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR8R2_BIT_T
        {
            unsigned DACC2DHR : 8; // bits 0..7 DAC channel2 8-bit right-aligned data
            unsigned          : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned DACC2DHR_POS = 0;
        static constexpr unsigned DACC2DHR_MASK = 0x000000ff;
        static constexpr unsigned DACC2DHR(unsigned value) { return (value << 0); }
    } DHR8R2;

    volatile union DHR12RD_T // DHR12RD: Dual DAC 12-bit right-aligned data holding register (DAC_DHR12RD), Bits 31:28 Reserved, Bits 15:12 Reserved 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR12RD_BIT_T
        {
            unsigned DACC1DHR : 12; // bits 0..11 DAC channel1 12-bit right-aligned data
            unsigned          : 4; // bits 12..15 unused
            unsigned DACC2DHR : 12; // bits 16..27 DAC channel2 12-bit right-aligned data
            unsigned          : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned DACC1DHR_POS = 0;
        static constexpr unsigned DACC1DHR_MASK = 0x00000fff;
        static constexpr unsigned DACC1DHR(unsigned value) { return (value << 0); }
        static constexpr unsigned DACC2DHR_POS = 16;
        static constexpr unsigned DACC2DHR_MASK = 0x0fff0000;
        static constexpr unsigned DACC2DHR(unsigned value) { return (value << 16); }
    } DHR12RD;

    volatile union DHR12LD_T // DHR12LD: DUAL DAC 12-bit left aligned data holding register (DAC_DHR12LD), Bits 19:16 Reserved, Bits 3:0 Reserved 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR12LD_BIT_T
        {
            unsigned          : 4; // bits 0..3 unused
            unsigned DACC1DHR : 12; // bits 4..15 DAC channel1 12-bit left-aligned data
            unsigned          : 4; // bits 16..19 unused
            unsigned DACC2DHR : 12; // bits 20..31 DAC channel2 12-bit right-aligned data    
        } bit;
    
        static constexpr unsigned DACC1DHR_POS = 4;
        static constexpr unsigned DACC1DHR_MASK = 0x0000fff0;
        static constexpr unsigned DACC1DHR(unsigned value) { return (value << 4); }
        static constexpr unsigned DACC2DHR_POS = 20;
        static constexpr unsigned DACC2DHR_MASK = 0xfff00000;
        static constexpr unsigned DACC2DHR(unsigned value) { return (value << 20); }
    } DHR12LD;

    volatile union DHR8RD_T // DHR8RD: DUAL DAC 8-bit right aligned data holding register (DAC_DHR8RD), Bits 31:16 Reserved 
    {
        uint32_t reg;
        struct __attribute__((packed)) DHR8RD_BIT_T
        {
            unsigned DACC1DHR : 8; // bits 0..7 DAC channel1 8-bit right-aligned data
            unsigned DACC2DHR : 8; // bits 8..15 DAC channel2 8-bit right-aligned data
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DACC1DHR_POS = 0;
        static constexpr unsigned DACC1DHR_MASK = 0x000000ff;
        static constexpr unsigned DACC1DHR(unsigned value) { return (value << 0); }
        static constexpr unsigned DACC2DHR_POS = 8;
        static constexpr unsigned DACC2DHR_MASK = 0x0000ff00;
        static constexpr unsigned DACC2DHR(unsigned value) { return (value << 8); }
    } DHR8RD;

    volatile union DOR1_T // DOR1: DAC channel1 data output register (DAC_DOR1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOR1_BIT_T
        {
            unsigned DACC1DOR : 12; // bits 0..11 DAC channel1 data output
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned DACC1DOR_POS = 0;
        static constexpr unsigned DACC1DOR_MASK = 0x00000fff;
        static constexpr unsigned DACC1DOR(unsigned value) { return (value << 0); }
    } DOR1;

    volatile union DOR2_T // DOR2: DAC channel2 data output register (DAC_DOR2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOR2_BIT_T
        {
            unsigned DACC2DOR : 12; // bits 0..11 DAC channel2 data output
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned DACC2DOR_POS = 0;
        static constexpr unsigned DACC2DOR_MASK = 0x00000fff;
        static constexpr unsigned DACC2DOR(unsigned value) { return (value << 0); }
    } DOR2;

}; // struct DAC_T

static_assert(sizeof(DAC_T) == DAC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp