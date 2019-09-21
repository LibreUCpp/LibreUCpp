#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) C_ADC_T
{
    static constexpr size_t INSTANCE_SIZE = 12;
    static constexpr intptr_t BASE_ADDRESS = 0x40012300;

    static constexpr intptr_t ADDR_OFFSET_CSR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CCR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CDR = 0x08;

    volatile union CSR_T // CSR: ADC Common status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned AWD1   : 1; // bit 0 Analog watchdog flag of ADC 1
            unsigned EOC1   : 1; // bit 1 End of conversion of ADC 1
            unsigned JEOC1  : 1; // bit 2 Injected channel end of conversion of ADC 1
            unsigned JSTRT1 : 1; // bit 3 Injected channel Start flag of ADC 1
            unsigned STRT1  : 1; // bit 4 Regular channel Start flag of ADC 1
            unsigned OVR1   : 1; // bit 5 Overrun flag of ADC 1
            unsigned        : 2; // bits 6..7 unused
            unsigned AWD2   : 1; // bit 8 Analog watchdog flag of ADC 2
            unsigned EOC2   : 1; // bit 9 End of conversion of ADC 2
            unsigned JEOC2  : 1; // bit 10 Injected channel end of conversion of ADC 2
            unsigned JSTRT2 : 1; // bit 11 Injected channel Start flag of ADC 2
            unsigned STRT2  : 1; // bit 12 Regular channel Start flag of ADC 2
            unsigned OVR2   : 1; // bit 13 Overrun flag of ADC 2
            unsigned        : 2; // bits 14..15 unused
            unsigned AWD3   : 1; // bit 16 Analog watchdog flag of ADC 3
            unsigned EOC3   : 1; // bit 17 End of conversion of ADC 3
            unsigned JEOC3  : 1; // bit 18 Injected channel end of conversion of ADC 3
            unsigned JSTRT3 : 1; // bit 19 Injected channel Start flag of ADC 3
            unsigned STRT3  : 1; // bit 20 Regular channel Start flag of ADC 3
            unsigned OVR3   : 1; // bit 21 Overrun flag of ADC3
            unsigned        : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned AWD1_POS = 0;
        static constexpr unsigned AWD1_MASK = 0x00000001;
        static constexpr unsigned AWD1(unsigned value) { return (value << 0); }
        static constexpr unsigned EOC1_POS = 1;
        static constexpr unsigned EOC1_MASK = 0x00000002;
        static constexpr unsigned EOC1(unsigned value) { return (value << 1); }
        static constexpr unsigned JEOC1_POS = 2;
        static constexpr unsigned JEOC1_MASK = 0x00000004;
        static constexpr unsigned JEOC1(unsigned value) { return (value << 2); }
        static constexpr unsigned JSTRT1_POS = 3;
        static constexpr unsigned JSTRT1_MASK = 0x00000008;
        static constexpr unsigned JSTRT1(unsigned value) { return (value << 3); }
        static constexpr unsigned STRT1_POS = 4;
        static constexpr unsigned STRT1_MASK = 0x00000010;
        static constexpr unsigned STRT1(unsigned value) { return (value << 4); }
        static constexpr unsigned OVR1_POS = 5;
        static constexpr unsigned OVR1_MASK = 0x00000020;
        static constexpr unsigned OVR1(unsigned value) { return (value << 5); }
        static constexpr unsigned AWD2_POS = 8;
        static constexpr unsigned AWD2_MASK = 0x00000100;
        static constexpr unsigned AWD2(unsigned value) { return (value << 8); }
        static constexpr unsigned EOC2_POS = 9;
        static constexpr unsigned EOC2_MASK = 0x00000200;
        static constexpr unsigned EOC2(unsigned value) { return (value << 9); }
        static constexpr unsigned JEOC2_POS = 10;
        static constexpr unsigned JEOC2_MASK = 0x00000400;
        static constexpr unsigned JEOC2(unsigned value) { return (value << 10); }
        static constexpr unsigned JSTRT2_POS = 11;
        static constexpr unsigned JSTRT2_MASK = 0x00000800;
        static constexpr unsigned JSTRT2(unsigned value) { return (value << 11); }
        static constexpr unsigned STRT2_POS = 12;
        static constexpr unsigned STRT2_MASK = 0x00001000;
        static constexpr unsigned STRT2(unsigned value) { return (value << 12); }
        static constexpr unsigned OVR2_POS = 13;
        static constexpr unsigned OVR2_MASK = 0x00002000;
        static constexpr unsigned OVR2(unsigned value) { return (value << 13); }
        static constexpr unsigned AWD3_POS = 16;
        static constexpr unsigned AWD3_MASK = 0x00010000;
        static constexpr unsigned AWD3(unsigned value) { return (value << 16); }
        static constexpr unsigned EOC3_POS = 17;
        static constexpr unsigned EOC3_MASK = 0x00020000;
        static constexpr unsigned EOC3(unsigned value) { return (value << 17); }
        static constexpr unsigned JEOC3_POS = 18;
        static constexpr unsigned JEOC3_MASK = 0x00040000;
        static constexpr unsigned JEOC3(unsigned value) { return (value << 18); }
        static constexpr unsigned JSTRT3_POS = 19;
        static constexpr unsigned JSTRT3_MASK = 0x00080000;
        static constexpr unsigned JSTRT3(unsigned value) { return (value << 19); }
        static constexpr unsigned STRT3_POS = 20;
        static constexpr unsigned STRT3_MASK = 0x00100000;
        static constexpr unsigned STRT3(unsigned value) { return (value << 20); }
        static constexpr unsigned OVR3_POS = 21;
        static constexpr unsigned OVR3_MASK = 0x00200000;
        static constexpr unsigned OVR3(unsigned value) { return (value << 21); }
    } CSR;

    volatile union CCR_T // CCR: ADC common control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR_BIT_T
        {
            unsigned MULT    : 5; // bits 0..4 Multi ADC mode selection
            unsigned         : 3; // bits 5..7 unused
            unsigned DELAY   : 4; // bits 8..11 Delay between 2 sampling phases
            unsigned         : 1; // bit 12 unused
            unsigned DDS     : 1; // bit 13 DMA disable selection for multi-ADC mode
            unsigned DMA     : 2; // bits 14..15 Direct memory access mode for multi ADC mode
            unsigned ADCPRE  : 2; // bits 16..17 ADC prescaler
            unsigned         : 4; // bits 18..21 unused
            unsigned VBATE   : 1; // bit 22 VBAT enable
            unsigned TSVREFE : 1; // bit 23 Temperature sensor and VREFINT enable
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned MULT_POS = 0;
        static constexpr unsigned MULT_MASK = 0x0000001f;
        static constexpr unsigned MULT(unsigned value) { return (value << 0); }
        static constexpr unsigned DELAY_POS = 8;
        static constexpr unsigned DELAY_MASK = 0x00000f00;
        static constexpr unsigned DELAY(unsigned value) { return (value << 8); }
        static constexpr unsigned DDS_POS = 13;
        static constexpr unsigned DDS_MASK = 0x00002000;
        static constexpr unsigned DDS(unsigned value) { return (value << 13); }
        static constexpr unsigned DMA_POS = 14;
        static constexpr unsigned DMA_MASK = 0x0000c000;
        static constexpr unsigned DMA(unsigned value) { return (value << 14); }
        static constexpr unsigned ADCPRE_POS = 16;
        static constexpr unsigned ADCPRE_MASK = 0x00030000;
        static constexpr unsigned ADCPRE(unsigned value) { return (value << 16); }
        static constexpr unsigned VBATE_POS = 22;
        static constexpr unsigned VBATE_MASK = 0x00400000;
        static constexpr unsigned VBATE(unsigned value) { return (value << 22); }
        static constexpr unsigned TSVREFE_POS = 23;
        static constexpr unsigned TSVREFE_MASK = 0x00800000;
        static constexpr unsigned TSVREFE(unsigned value) { return (value << 23); }
    } CCR;

    volatile union CDR_T // CDR: ADC common regular data register for dual and triple modes 
    {
        uint32_t reg;
        struct __attribute__((packed)) CDR_BIT_T
        {
            unsigned DATA1 : 16; // bits 0..15 1st data item of a pair of regular conversions
            unsigned DATA2 : 16; // bits 16..31 2nd data item of a pair of regular conversions    
        } bit;
    
        static constexpr unsigned DATA1_POS = 0;
        static constexpr unsigned DATA1_MASK = 0x0000ffff;
        static constexpr unsigned DATA1(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA2_POS = 16;
        static constexpr unsigned DATA2_MASK = 0xffff0000;
        static constexpr unsigned DATA2(unsigned value) { return (value << 16); }
    } CDR;

}; // struct C_ADC_T

static_assert(sizeof(C_ADC_T) == C_ADC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp