#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DAC_T
{
    static constexpr size_t INSTANCE_SIZE = 56;
    static constexpr size_t PADDED_INSTANCE_SIZE = 56;
    static constexpr intptr_t BASE_ADDRESS = 0x40007400;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SWTRIGR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DHR12R1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DHR12L1 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DHR8R1 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_DOR1 = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x34;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned EN1       : 1; // bit 0 DAC channel1 enable
            unsigned BOFF1     : 1; // bit 1 DAC channel1 output buffer disable
            unsigned TEN1      : 1; // bit 2 DAC channel1 trigger enable
            unsigned TSEL10    : 1; // bit 3 DAC channel1 trigger selection
            unsigned TSEL11    : 1; // bit 4 DAC channel1 trigger selection
            unsigned TSEL12    : 1; // bit 5 DAC channel1 trigger selection
            unsigned           : 6; // bits 6..11 unused
            unsigned DMAEN1    : 1; // bit 12 DAC channel1 DMA enable
            unsigned DMAUDRIE1 : 1; // bit 13 DAC channel1 DMA Underrun Interrupt enable
            unsigned           : 18; // bits 14..31 unused    
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
        static constexpr unsigned TSEL10_POS = 3;
        static constexpr unsigned TSEL10_MASK = 0x00000008;
        static constexpr unsigned TSEL10(unsigned value) { return (value << 3); }
        static constexpr unsigned TSEL11_POS = 4;
        static constexpr unsigned TSEL11_MASK = 0x00000010;
        static constexpr unsigned TSEL11(unsigned value) { return (value << 4); }
        static constexpr unsigned TSEL12_POS = 5;
        static constexpr unsigned TSEL12_MASK = 0x00000020;
        static constexpr unsigned TSEL12(unsigned value) { return (value << 5); }
        static constexpr unsigned DMAEN1_POS = 12;
        static constexpr unsigned DMAEN1_MASK = 0x00001000;
        static constexpr unsigned DMAEN1(unsigned value) { return (value << 12); }
        static constexpr unsigned DMAUDRIE1_POS = 13;
        static constexpr unsigned DMAUDRIE1_MASK = 0x00002000;
        static constexpr unsigned DMAUDRIE1(unsigned value) { return (value << 13); }
    } CR;

    volatile union SWTRIGR_T // SWTRIGR: software trigger register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SWTRIGR_BIT_T
        {
            unsigned SWTRIG1 : 1; // bit 0 DAC channel1 software trigger
            unsigned         : 31; // bits 1..31 unused    
        } bit;
    
        static constexpr unsigned SWTRIG1_POS = 0;
        static constexpr unsigned SWTRIG1_MASK = 0x00000001;
        static constexpr unsigned SWTRIG1(unsigned value) { return (value << 0); }
    } SWTRIGR;

    volatile union DHR12R1_T // DHR12R1: channel1 12-bit right-aligned data holding register 
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

    volatile union DHR12L1_T // DHR12L1: channel1 12-bit left aligned data holding register 
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

    volatile union DHR8R1_T // DHR8R1: channel1 8-bit right aligned data holding register 
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

    uint8_t Reserved1[24];

    volatile union DOR1_T // DOR1: channel1 data output register 
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

    uint8_t Reserved2[4];

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned         : 13; // bits 0..12 unused
            unsigned DMAUDR1 : 1; // bit 13 DAC channel1 DMA underrun flag
            unsigned         : 15; // bits 14..28 unused
            unsigned DMAUDR2 : 1; // bit 29 DAC channel2 DMA underrun flag
            unsigned         : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned DMAUDR1_POS = 13;
        static constexpr unsigned DMAUDR1_MASK = 0x00002000;
        static constexpr unsigned DMAUDR1(unsigned value) { return (value << 13); }
        static constexpr unsigned DMAUDR2_POS = 29;
        static constexpr unsigned DMAUDR2_MASK = 0x20000000;
        static constexpr unsigned DMAUDR2(unsigned value) { return (value << 29); }
    } SR;

}; // struct DAC_T

static_assert(sizeof(DAC_T) == DAC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp