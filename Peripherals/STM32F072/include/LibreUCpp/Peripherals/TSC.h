#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TSC_T
{
    static constexpr size_t INSTANCE_SIZE = 76;
    static constexpr intptr_t BASE_ADDRESS = 0x40024000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_IER = 0x04;
    static constexpr intptr_t ADDR_OFFSET_ICR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_ISR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_IOHCR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_IOASCR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_IOSCR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_IOCCR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_IOGCSR = 0x30;
    static constexpr intptr_t ADDR_OFFSET_IOG1CR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_IOG2CR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_IOG3CR = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_IOG4CR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_IOG5CR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_IOG6CR = 0x48;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned TSCE    : 1; // bit 0 Touch sensing controller enable
            unsigned START   : 1; // bit 1 Start a new acquisition
            unsigned AM      : 1; // bit 2 Acquisition mode
            unsigned SYNCPOL : 1; // bit 3 Synchronization pin polarity
            unsigned IODEF   : 1; // bit 4 I/O Default mode
            unsigned MCV     : 3; // bits 5..7 Max count value
            unsigned         : 4; // bits 8..11 unused
            unsigned PGPSC   : 3; // bits 12..14 pulse generator prescaler
            unsigned SSPSC   : 1; // bit 15 Spread spectrum prescaler
            unsigned SSE     : 1; // bit 16 Spread spectrum enable
            unsigned SSD     : 7; // bits 17..23 Spread spectrum deviation
            unsigned CTPL    : 4; // bits 24..27 Charge transfer pulse low
            unsigned CTPH    : 4; // bits 28..31 Charge transfer pulse high    
        } bit;
    
        static constexpr unsigned TSCE_POS = 0;
        static constexpr unsigned TSCE_MASK = 0x00000001;
        static constexpr unsigned TSCE(unsigned value) { return (value << 0); }
        static constexpr unsigned START_POS = 1;
        static constexpr unsigned START_MASK = 0x00000002;
        static constexpr unsigned START(unsigned value) { return (value << 1); }
        static constexpr unsigned AM_POS = 2;
        static constexpr unsigned AM_MASK = 0x00000004;
        static constexpr unsigned AM(unsigned value) { return (value << 2); }
        static constexpr unsigned SYNCPOL_POS = 3;
        static constexpr unsigned SYNCPOL_MASK = 0x00000008;
        static constexpr unsigned SYNCPOL(unsigned value) { return (value << 3); }
        static constexpr unsigned IODEF_POS = 4;
        static constexpr unsigned IODEF_MASK = 0x00000010;
        static constexpr unsigned IODEF(unsigned value) { return (value << 4); }
        static constexpr unsigned MCV_POS = 5;
        static constexpr unsigned MCV_MASK = 0x000000e0;
        static constexpr unsigned MCV(unsigned value) { return (value << 5); }
        static constexpr unsigned PGPSC_POS = 12;
        static constexpr unsigned PGPSC_MASK = 0x00007000;
        static constexpr unsigned PGPSC(unsigned value) { return (value << 12); }
        static constexpr unsigned SSPSC_POS = 15;
        static constexpr unsigned SSPSC_MASK = 0x00008000;
        static constexpr unsigned SSPSC(unsigned value) { return (value << 15); }
        static constexpr unsigned SSE_POS = 16;
        static constexpr unsigned SSE_MASK = 0x00010000;
        static constexpr unsigned SSE(unsigned value) { return (value << 16); }
        static constexpr unsigned SSD_POS = 17;
        static constexpr unsigned SSD_MASK = 0x00fe0000;
        static constexpr unsigned SSD(unsigned value) { return (value << 17); }
        static constexpr unsigned CTPL_POS = 24;
        static constexpr unsigned CTPL_MASK = 0x0f000000;
        static constexpr unsigned CTPL(unsigned value) { return (value << 24); }
        static constexpr unsigned CTPH_POS = 28;
        static constexpr unsigned CTPH_MASK = 0xf0000000;
        static constexpr unsigned CTPH(unsigned value) { return (value << 28); }
    } CR;

    volatile union IER_T // IER: interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IER_BIT_T
        {
            unsigned EOAIE : 1; // bit 0 End of acquisition interrupt enable
            unsigned MCEIE : 1; // bit 1 Max count error interrupt enable
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned EOAIE_POS = 0;
        static constexpr unsigned EOAIE_MASK = 0x00000001;
        static constexpr unsigned EOAIE(unsigned value) { return (value << 0); }
        static constexpr unsigned MCEIE_POS = 1;
        static constexpr unsigned MCEIE_MASK = 0x00000002;
        static constexpr unsigned MCEIE(unsigned value) { return (value << 1); }
    } IER;

    volatile union ICR_T // ICR: interrupt clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICR_BIT_T
        {
            unsigned EOAIC : 1; // bit 0 End of acquisition interrupt clear
            unsigned MCEIC : 1; // bit 1 Max count error interrupt clear
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned EOAIC_POS = 0;
        static constexpr unsigned EOAIC_MASK = 0x00000001;
        static constexpr unsigned EOAIC(unsigned value) { return (value << 0); }
        static constexpr unsigned MCEIC_POS = 1;
        static constexpr unsigned MCEIC_MASK = 0x00000002;
        static constexpr unsigned MCEIC(unsigned value) { return (value << 1); }
    } ICR;

    volatile union ISR_T // ISR: interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned EOAF : 1; // bit 0 End of acquisition flag
            unsigned MCEF : 1; // bit 1 Max count error flag
            unsigned      : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned EOAF_POS = 0;
        static constexpr unsigned EOAF_MASK = 0x00000001;
        static constexpr unsigned EOAF(unsigned value) { return (value << 0); }
        static constexpr unsigned MCEF_POS = 1;
        static constexpr unsigned MCEF_MASK = 0x00000002;
        static constexpr unsigned MCEF(unsigned value) { return (value << 1); }
    } ISR;

    volatile union IOHCR_T // IOHCR: I/O hysteresis control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOHCR_BIT_T
        {
            unsigned G1_IO1 : 1; // bit 0 G1_IO1 Schmitt trigger hysteresis mode
            unsigned G1_IO2 : 1; // bit 1 G1_IO2 Schmitt trigger hysteresis mode
            unsigned G1_IO3 : 1; // bit 2 G1_IO3 Schmitt trigger hysteresis mode
            unsigned G1_IO4 : 1; // bit 3 G1_IO4 Schmitt trigger hysteresis mode
            unsigned G2_IO1 : 1; // bit 4 G2_IO1 Schmitt trigger hysteresis mode
            unsigned G2_IO2 : 1; // bit 5 G2_IO2 Schmitt trigger hysteresis mode
            unsigned G2_IO3 : 1; // bit 6 G2_IO3 Schmitt trigger hysteresis mode
            unsigned G2_IO4 : 1; // bit 7 G2_IO4 Schmitt trigger hysteresis mode
            unsigned G3_IO1 : 1; // bit 8 G3_IO1 Schmitt trigger hysteresis mode
            unsigned G3_IO2 : 1; // bit 9 G3_IO2 Schmitt trigger hysteresis mode
            unsigned G3_IO3 : 1; // bit 10 G3_IO3 Schmitt trigger hysteresis mode
            unsigned G3_IO4 : 1; // bit 11 G3_IO4 Schmitt trigger hysteresis mode
            unsigned G4_IO1 : 1; // bit 12 G4_IO1 Schmitt trigger hysteresis mode
            unsigned G4_IO2 : 1; // bit 13 G4_IO2 Schmitt trigger hysteresis mode
            unsigned G4_IO3 : 1; // bit 14 G4_IO3 Schmitt trigger hysteresis mode
            unsigned G4_IO4 : 1; // bit 15 G4_IO4 Schmitt trigger hysteresis mode
            unsigned G5_IO1 : 1; // bit 16 G5_IO1 Schmitt trigger hysteresis mode
            unsigned G5_IO2 : 1; // bit 17 G5_IO2 Schmitt trigger hysteresis mode
            unsigned G5_IO3 : 1; // bit 18 G5_IO3 Schmitt trigger hysteresis mode
            unsigned G5_IO4 : 1; // bit 19 G5_IO4 Schmitt trigger hysteresis mode
            unsigned G6_IO1 : 1; // bit 20 G6_IO1 Schmitt trigger hysteresis mode
            unsigned G6_IO2 : 1; // bit 21 G6_IO2 Schmitt trigger hysteresis mode
            unsigned G6_IO3 : 1; // bit 22 G6_IO3 Schmitt trigger hysteresis mode
            unsigned G6_IO4 : 1; // bit 23 G6_IO4 Schmitt trigger hysteresis mode
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned G1_IO1_POS = 0;
        static constexpr unsigned G1_IO1_MASK = 0x00000001;
        static constexpr unsigned G1_IO1(unsigned value) { return (value << 0); }
        static constexpr unsigned G1_IO2_POS = 1;
        static constexpr unsigned G1_IO2_MASK = 0x00000002;
        static constexpr unsigned G1_IO2(unsigned value) { return (value << 1); }
        static constexpr unsigned G1_IO3_POS = 2;
        static constexpr unsigned G1_IO3_MASK = 0x00000004;
        static constexpr unsigned G1_IO3(unsigned value) { return (value << 2); }
        static constexpr unsigned G1_IO4_POS = 3;
        static constexpr unsigned G1_IO4_MASK = 0x00000008;
        static constexpr unsigned G1_IO4(unsigned value) { return (value << 3); }
        static constexpr unsigned G2_IO1_POS = 4;
        static constexpr unsigned G2_IO1_MASK = 0x00000010;
        static constexpr unsigned G2_IO1(unsigned value) { return (value << 4); }
        static constexpr unsigned G2_IO2_POS = 5;
        static constexpr unsigned G2_IO2_MASK = 0x00000020;
        static constexpr unsigned G2_IO2(unsigned value) { return (value << 5); }
        static constexpr unsigned G2_IO3_POS = 6;
        static constexpr unsigned G2_IO3_MASK = 0x00000040;
        static constexpr unsigned G2_IO3(unsigned value) { return (value << 6); }
        static constexpr unsigned G2_IO4_POS = 7;
        static constexpr unsigned G2_IO4_MASK = 0x00000080;
        static constexpr unsigned G2_IO4(unsigned value) { return (value << 7); }
        static constexpr unsigned G3_IO1_POS = 8;
        static constexpr unsigned G3_IO1_MASK = 0x00000100;
        static constexpr unsigned G3_IO1(unsigned value) { return (value << 8); }
        static constexpr unsigned G3_IO2_POS = 9;
        static constexpr unsigned G3_IO2_MASK = 0x00000200;
        static constexpr unsigned G3_IO2(unsigned value) { return (value << 9); }
        static constexpr unsigned G3_IO3_POS = 10;
        static constexpr unsigned G3_IO3_MASK = 0x00000400;
        static constexpr unsigned G3_IO3(unsigned value) { return (value << 10); }
        static constexpr unsigned G3_IO4_POS = 11;
        static constexpr unsigned G3_IO4_MASK = 0x00000800;
        static constexpr unsigned G3_IO4(unsigned value) { return (value << 11); }
        static constexpr unsigned G4_IO1_POS = 12;
        static constexpr unsigned G4_IO1_MASK = 0x00001000;
        static constexpr unsigned G4_IO1(unsigned value) { return (value << 12); }
        static constexpr unsigned G4_IO2_POS = 13;
        static constexpr unsigned G4_IO2_MASK = 0x00002000;
        static constexpr unsigned G4_IO2(unsigned value) { return (value << 13); }
        static constexpr unsigned G4_IO3_POS = 14;
        static constexpr unsigned G4_IO3_MASK = 0x00004000;
        static constexpr unsigned G4_IO3(unsigned value) { return (value << 14); }
        static constexpr unsigned G4_IO4_POS = 15;
        static constexpr unsigned G4_IO4_MASK = 0x00008000;
        static constexpr unsigned G4_IO4(unsigned value) { return (value << 15); }
        static constexpr unsigned G5_IO1_POS = 16;
        static constexpr unsigned G5_IO1_MASK = 0x00010000;
        static constexpr unsigned G5_IO1(unsigned value) { return (value << 16); }
        static constexpr unsigned G5_IO2_POS = 17;
        static constexpr unsigned G5_IO2_MASK = 0x00020000;
        static constexpr unsigned G5_IO2(unsigned value) { return (value << 17); }
        static constexpr unsigned G5_IO3_POS = 18;
        static constexpr unsigned G5_IO3_MASK = 0x00040000;
        static constexpr unsigned G5_IO3(unsigned value) { return (value << 18); }
        static constexpr unsigned G5_IO4_POS = 19;
        static constexpr unsigned G5_IO4_MASK = 0x00080000;
        static constexpr unsigned G5_IO4(unsigned value) { return (value << 19); }
        static constexpr unsigned G6_IO1_POS = 20;
        static constexpr unsigned G6_IO1_MASK = 0x00100000;
        static constexpr unsigned G6_IO1(unsigned value) { return (value << 20); }
        static constexpr unsigned G6_IO2_POS = 21;
        static constexpr unsigned G6_IO2_MASK = 0x00200000;
        static constexpr unsigned G6_IO2(unsigned value) { return (value << 21); }
        static constexpr unsigned G6_IO3_POS = 22;
        static constexpr unsigned G6_IO3_MASK = 0x00400000;
        static constexpr unsigned G6_IO3(unsigned value) { return (value << 22); }
        static constexpr unsigned G6_IO4_POS = 23;
        static constexpr unsigned G6_IO4_MASK = 0x00800000;
        static constexpr unsigned G6_IO4(unsigned value) { return (value << 23); }
    } IOHCR;

    uint8_t Reserved1[4];

    volatile union IOASCR_T // IOASCR: I/O analog switch control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOASCR_BIT_T
        {
            unsigned G1_IO1 : 1; // bit 0 G1_IO1 analog switch enable
            unsigned G1_IO2 : 1; // bit 1 G1_IO2 analog switch enable
            unsigned G1_IO3 : 1; // bit 2 G1_IO3 analog switch enable
            unsigned G1_IO4 : 1; // bit 3 G1_IO4 analog switch enable
            unsigned G2_IO1 : 1; // bit 4 G2_IO1 analog switch enable
            unsigned G2_IO2 : 1; // bit 5 G2_IO2 analog switch enable
            unsigned G2_IO3 : 1; // bit 6 G2_IO3 analog switch enable
            unsigned G2_IO4 : 1; // bit 7 G2_IO4 analog switch enable
            unsigned G3_IO1 : 1; // bit 8 G3_IO1 analog switch enable
            unsigned G3_IO2 : 1; // bit 9 G3_IO2 analog switch enable
            unsigned G3_IO3 : 1; // bit 10 G3_IO3 analog switch enable
            unsigned G3_IO4 : 1; // bit 11 G3_IO4 analog switch enable
            unsigned G4_IO1 : 1; // bit 12 G4_IO1 analog switch enable
            unsigned G4_IO2 : 1; // bit 13 G4_IO2 analog switch enable
            unsigned G4_IO3 : 1; // bit 14 G4_IO3 analog switch enable
            unsigned G4_IO4 : 1; // bit 15 G4_IO4 analog switch enable
            unsigned G5_IO1 : 1; // bit 16 G5_IO1 analog switch enable
            unsigned G5_IO2 : 1; // bit 17 G5_IO2 analog switch enable
            unsigned G5_IO3 : 1; // bit 18 G5_IO3 analog switch enable
            unsigned G5_IO4 : 1; // bit 19 G5_IO4 analog switch enable
            unsigned G6_IO1 : 1; // bit 20 G6_IO1 analog switch enable
            unsigned G6_IO2 : 1; // bit 21 G6_IO2 analog switch enable
            unsigned G6_IO3 : 1; // bit 22 G6_IO3 analog switch enable
            unsigned G6_IO4 : 1; // bit 23 G6_IO4 analog switch enable
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned G1_IO1_POS = 0;
        static constexpr unsigned G1_IO1_MASK = 0x00000001;
        static constexpr unsigned G1_IO1(unsigned value) { return (value << 0); }
        static constexpr unsigned G1_IO2_POS = 1;
        static constexpr unsigned G1_IO2_MASK = 0x00000002;
        static constexpr unsigned G1_IO2(unsigned value) { return (value << 1); }
        static constexpr unsigned G1_IO3_POS = 2;
        static constexpr unsigned G1_IO3_MASK = 0x00000004;
        static constexpr unsigned G1_IO3(unsigned value) { return (value << 2); }
        static constexpr unsigned G1_IO4_POS = 3;
        static constexpr unsigned G1_IO4_MASK = 0x00000008;
        static constexpr unsigned G1_IO4(unsigned value) { return (value << 3); }
        static constexpr unsigned G2_IO1_POS = 4;
        static constexpr unsigned G2_IO1_MASK = 0x00000010;
        static constexpr unsigned G2_IO1(unsigned value) { return (value << 4); }
        static constexpr unsigned G2_IO2_POS = 5;
        static constexpr unsigned G2_IO2_MASK = 0x00000020;
        static constexpr unsigned G2_IO2(unsigned value) { return (value << 5); }
        static constexpr unsigned G2_IO3_POS = 6;
        static constexpr unsigned G2_IO3_MASK = 0x00000040;
        static constexpr unsigned G2_IO3(unsigned value) { return (value << 6); }
        static constexpr unsigned G2_IO4_POS = 7;
        static constexpr unsigned G2_IO4_MASK = 0x00000080;
        static constexpr unsigned G2_IO4(unsigned value) { return (value << 7); }
        static constexpr unsigned G3_IO1_POS = 8;
        static constexpr unsigned G3_IO1_MASK = 0x00000100;
        static constexpr unsigned G3_IO1(unsigned value) { return (value << 8); }
        static constexpr unsigned G3_IO2_POS = 9;
        static constexpr unsigned G3_IO2_MASK = 0x00000200;
        static constexpr unsigned G3_IO2(unsigned value) { return (value << 9); }
        static constexpr unsigned G3_IO3_POS = 10;
        static constexpr unsigned G3_IO3_MASK = 0x00000400;
        static constexpr unsigned G3_IO3(unsigned value) { return (value << 10); }
        static constexpr unsigned G3_IO4_POS = 11;
        static constexpr unsigned G3_IO4_MASK = 0x00000800;
        static constexpr unsigned G3_IO4(unsigned value) { return (value << 11); }
        static constexpr unsigned G4_IO1_POS = 12;
        static constexpr unsigned G4_IO1_MASK = 0x00001000;
        static constexpr unsigned G4_IO1(unsigned value) { return (value << 12); }
        static constexpr unsigned G4_IO2_POS = 13;
        static constexpr unsigned G4_IO2_MASK = 0x00002000;
        static constexpr unsigned G4_IO2(unsigned value) { return (value << 13); }
        static constexpr unsigned G4_IO3_POS = 14;
        static constexpr unsigned G4_IO3_MASK = 0x00004000;
        static constexpr unsigned G4_IO3(unsigned value) { return (value << 14); }
        static constexpr unsigned G4_IO4_POS = 15;
        static constexpr unsigned G4_IO4_MASK = 0x00008000;
        static constexpr unsigned G4_IO4(unsigned value) { return (value << 15); }
        static constexpr unsigned G5_IO1_POS = 16;
        static constexpr unsigned G5_IO1_MASK = 0x00010000;
        static constexpr unsigned G5_IO1(unsigned value) { return (value << 16); }
        static constexpr unsigned G5_IO2_POS = 17;
        static constexpr unsigned G5_IO2_MASK = 0x00020000;
        static constexpr unsigned G5_IO2(unsigned value) { return (value << 17); }
        static constexpr unsigned G5_IO3_POS = 18;
        static constexpr unsigned G5_IO3_MASK = 0x00040000;
        static constexpr unsigned G5_IO3(unsigned value) { return (value << 18); }
        static constexpr unsigned G5_IO4_POS = 19;
        static constexpr unsigned G5_IO4_MASK = 0x00080000;
        static constexpr unsigned G5_IO4(unsigned value) { return (value << 19); }
        static constexpr unsigned G6_IO1_POS = 20;
        static constexpr unsigned G6_IO1_MASK = 0x00100000;
        static constexpr unsigned G6_IO1(unsigned value) { return (value << 20); }
        static constexpr unsigned G6_IO2_POS = 21;
        static constexpr unsigned G6_IO2_MASK = 0x00200000;
        static constexpr unsigned G6_IO2(unsigned value) { return (value << 21); }
        static constexpr unsigned G6_IO3_POS = 22;
        static constexpr unsigned G6_IO3_MASK = 0x00400000;
        static constexpr unsigned G6_IO3(unsigned value) { return (value << 22); }
        static constexpr unsigned G6_IO4_POS = 23;
        static constexpr unsigned G6_IO4_MASK = 0x00800000;
        static constexpr unsigned G6_IO4(unsigned value) { return (value << 23); }
    } IOASCR;

    uint8_t Reserved2[4];

    volatile union IOSCR_T // IOSCR: I/O sampling control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOSCR_BIT_T
        {
            unsigned G1_IO1 : 1; // bit 0 G1_IO1 sampling mode
            unsigned G1_IO2 : 1; // bit 1 G1_IO2 sampling mode
            unsigned G1_IO3 : 1; // bit 2 G1_IO3 sampling mode
            unsigned G1_IO4 : 1; // bit 3 G1_IO4 sampling mode
            unsigned G2_IO1 : 1; // bit 4 G2_IO1 sampling mode
            unsigned G2_IO2 : 1; // bit 5 G2_IO2 sampling mode
            unsigned G2_IO3 : 1; // bit 6 G2_IO3 sampling mode
            unsigned G2_IO4 : 1; // bit 7 G2_IO4 sampling mode
            unsigned G3_IO1 : 1; // bit 8 G3_IO1 sampling mode
            unsigned G3_IO2 : 1; // bit 9 G3_IO2 sampling mode
            unsigned G3_IO3 : 1; // bit 10 G3_IO3 sampling mode
            unsigned G3_IO4 : 1; // bit 11 G3_IO4 sampling mode
            unsigned G4_IO1 : 1; // bit 12 G4_IO1 sampling mode
            unsigned G4_IO2 : 1; // bit 13 G4_IO2 sampling mode
            unsigned G4_IO3 : 1; // bit 14 G4_IO3 sampling mode
            unsigned G4_IO4 : 1; // bit 15 G4_IO4 sampling mode
            unsigned G5_IO1 : 1; // bit 16 G5_IO1 sampling mode
            unsigned G5_IO2 : 1; // bit 17 G5_IO2 sampling mode
            unsigned G5_IO3 : 1; // bit 18 G5_IO3 sampling mode
            unsigned G5_IO4 : 1; // bit 19 G5_IO4 sampling mode
            unsigned G6_IO1 : 1; // bit 20 G6_IO1 sampling mode
            unsigned G6_IO2 : 1; // bit 21 G6_IO2 sampling mode
            unsigned G6_IO3 : 1; // bit 22 G6_IO3 sampling mode
            unsigned G6_IO4 : 1; // bit 23 G6_IO4 sampling mode
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned G1_IO1_POS = 0;
        static constexpr unsigned G1_IO1_MASK = 0x00000001;
        static constexpr unsigned G1_IO1(unsigned value) { return (value << 0); }
        static constexpr unsigned G1_IO2_POS = 1;
        static constexpr unsigned G1_IO2_MASK = 0x00000002;
        static constexpr unsigned G1_IO2(unsigned value) { return (value << 1); }
        static constexpr unsigned G1_IO3_POS = 2;
        static constexpr unsigned G1_IO3_MASK = 0x00000004;
        static constexpr unsigned G1_IO3(unsigned value) { return (value << 2); }
        static constexpr unsigned G1_IO4_POS = 3;
        static constexpr unsigned G1_IO4_MASK = 0x00000008;
        static constexpr unsigned G1_IO4(unsigned value) { return (value << 3); }
        static constexpr unsigned G2_IO1_POS = 4;
        static constexpr unsigned G2_IO1_MASK = 0x00000010;
        static constexpr unsigned G2_IO1(unsigned value) { return (value << 4); }
        static constexpr unsigned G2_IO2_POS = 5;
        static constexpr unsigned G2_IO2_MASK = 0x00000020;
        static constexpr unsigned G2_IO2(unsigned value) { return (value << 5); }
        static constexpr unsigned G2_IO3_POS = 6;
        static constexpr unsigned G2_IO3_MASK = 0x00000040;
        static constexpr unsigned G2_IO3(unsigned value) { return (value << 6); }
        static constexpr unsigned G2_IO4_POS = 7;
        static constexpr unsigned G2_IO4_MASK = 0x00000080;
        static constexpr unsigned G2_IO4(unsigned value) { return (value << 7); }
        static constexpr unsigned G3_IO1_POS = 8;
        static constexpr unsigned G3_IO1_MASK = 0x00000100;
        static constexpr unsigned G3_IO1(unsigned value) { return (value << 8); }
        static constexpr unsigned G3_IO2_POS = 9;
        static constexpr unsigned G3_IO2_MASK = 0x00000200;
        static constexpr unsigned G3_IO2(unsigned value) { return (value << 9); }
        static constexpr unsigned G3_IO3_POS = 10;
        static constexpr unsigned G3_IO3_MASK = 0x00000400;
        static constexpr unsigned G3_IO3(unsigned value) { return (value << 10); }
        static constexpr unsigned G3_IO4_POS = 11;
        static constexpr unsigned G3_IO4_MASK = 0x00000800;
        static constexpr unsigned G3_IO4(unsigned value) { return (value << 11); }
        static constexpr unsigned G4_IO1_POS = 12;
        static constexpr unsigned G4_IO1_MASK = 0x00001000;
        static constexpr unsigned G4_IO1(unsigned value) { return (value << 12); }
        static constexpr unsigned G4_IO2_POS = 13;
        static constexpr unsigned G4_IO2_MASK = 0x00002000;
        static constexpr unsigned G4_IO2(unsigned value) { return (value << 13); }
        static constexpr unsigned G4_IO3_POS = 14;
        static constexpr unsigned G4_IO3_MASK = 0x00004000;
        static constexpr unsigned G4_IO3(unsigned value) { return (value << 14); }
        static constexpr unsigned G4_IO4_POS = 15;
        static constexpr unsigned G4_IO4_MASK = 0x00008000;
        static constexpr unsigned G4_IO4(unsigned value) { return (value << 15); }
        static constexpr unsigned G5_IO1_POS = 16;
        static constexpr unsigned G5_IO1_MASK = 0x00010000;
        static constexpr unsigned G5_IO1(unsigned value) { return (value << 16); }
        static constexpr unsigned G5_IO2_POS = 17;
        static constexpr unsigned G5_IO2_MASK = 0x00020000;
        static constexpr unsigned G5_IO2(unsigned value) { return (value << 17); }
        static constexpr unsigned G5_IO3_POS = 18;
        static constexpr unsigned G5_IO3_MASK = 0x00040000;
        static constexpr unsigned G5_IO3(unsigned value) { return (value << 18); }
        static constexpr unsigned G5_IO4_POS = 19;
        static constexpr unsigned G5_IO4_MASK = 0x00080000;
        static constexpr unsigned G5_IO4(unsigned value) { return (value << 19); }
        static constexpr unsigned G6_IO1_POS = 20;
        static constexpr unsigned G6_IO1_MASK = 0x00100000;
        static constexpr unsigned G6_IO1(unsigned value) { return (value << 20); }
        static constexpr unsigned G6_IO2_POS = 21;
        static constexpr unsigned G6_IO2_MASK = 0x00200000;
        static constexpr unsigned G6_IO2(unsigned value) { return (value << 21); }
        static constexpr unsigned G6_IO3_POS = 22;
        static constexpr unsigned G6_IO3_MASK = 0x00400000;
        static constexpr unsigned G6_IO3(unsigned value) { return (value << 22); }
        static constexpr unsigned G6_IO4_POS = 23;
        static constexpr unsigned G6_IO4_MASK = 0x00800000;
        static constexpr unsigned G6_IO4(unsigned value) { return (value << 23); }
    } IOSCR;

    uint8_t Reserved3[4];

    volatile union IOCCR_T // IOCCR: I/O channel control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOCCR_BIT_T
        {
            unsigned G1_IO1 : 1; // bit 0 G1_IO1 channel mode
            unsigned G1_IO2 : 1; // bit 1 G1_IO2 channel mode
            unsigned G1_IO3 : 1; // bit 2 G1_IO3 channel mode
            unsigned G1_IO4 : 1; // bit 3 G1_IO4 channel mode
            unsigned G2_IO1 : 1; // bit 4 G2_IO1 channel mode
            unsigned G2_IO2 : 1; // bit 5 G2_IO2 channel mode
            unsigned G2_IO3 : 1; // bit 6 G2_IO3 channel mode
            unsigned G2_IO4 : 1; // bit 7 G2_IO4 channel mode
            unsigned G3_IO1 : 1; // bit 8 G3_IO1 channel mode
            unsigned G3_IO2 : 1; // bit 9 G3_IO2 channel mode
            unsigned G3_IO3 : 1; // bit 10 G3_IO3 channel mode
            unsigned G3_IO4 : 1; // bit 11 G3_IO4 channel mode
            unsigned G4_IO1 : 1; // bit 12 G4_IO1 channel mode
            unsigned G4_IO2 : 1; // bit 13 G4_IO2 channel mode
            unsigned G4_IO3 : 1; // bit 14 G4_IO3 channel mode
            unsigned G4_IO4 : 1; // bit 15 G4_IO4 channel mode
            unsigned G5_IO1 : 1; // bit 16 G5_IO1 channel mode
            unsigned G5_IO2 : 1; // bit 17 G5_IO2 channel mode
            unsigned G5_IO3 : 1; // bit 18 G5_IO3 channel mode
            unsigned G5_IO4 : 1; // bit 19 G5_IO4 channel mode
            unsigned G6_IO1 : 1; // bit 20 G6_IO1 channel mode
            unsigned G6_IO2 : 1; // bit 21 G6_IO2 channel mode
            unsigned G6_IO3 : 1; // bit 22 G6_IO3 channel mode
            unsigned G6_IO4 : 1; // bit 23 G6_IO4 channel mode
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned G1_IO1_POS = 0;
        static constexpr unsigned G1_IO1_MASK = 0x00000001;
        static constexpr unsigned G1_IO1(unsigned value) { return (value << 0); }
        static constexpr unsigned G1_IO2_POS = 1;
        static constexpr unsigned G1_IO2_MASK = 0x00000002;
        static constexpr unsigned G1_IO2(unsigned value) { return (value << 1); }
        static constexpr unsigned G1_IO3_POS = 2;
        static constexpr unsigned G1_IO3_MASK = 0x00000004;
        static constexpr unsigned G1_IO3(unsigned value) { return (value << 2); }
        static constexpr unsigned G1_IO4_POS = 3;
        static constexpr unsigned G1_IO4_MASK = 0x00000008;
        static constexpr unsigned G1_IO4(unsigned value) { return (value << 3); }
        static constexpr unsigned G2_IO1_POS = 4;
        static constexpr unsigned G2_IO1_MASK = 0x00000010;
        static constexpr unsigned G2_IO1(unsigned value) { return (value << 4); }
        static constexpr unsigned G2_IO2_POS = 5;
        static constexpr unsigned G2_IO2_MASK = 0x00000020;
        static constexpr unsigned G2_IO2(unsigned value) { return (value << 5); }
        static constexpr unsigned G2_IO3_POS = 6;
        static constexpr unsigned G2_IO3_MASK = 0x00000040;
        static constexpr unsigned G2_IO3(unsigned value) { return (value << 6); }
        static constexpr unsigned G2_IO4_POS = 7;
        static constexpr unsigned G2_IO4_MASK = 0x00000080;
        static constexpr unsigned G2_IO4(unsigned value) { return (value << 7); }
        static constexpr unsigned G3_IO1_POS = 8;
        static constexpr unsigned G3_IO1_MASK = 0x00000100;
        static constexpr unsigned G3_IO1(unsigned value) { return (value << 8); }
        static constexpr unsigned G3_IO2_POS = 9;
        static constexpr unsigned G3_IO2_MASK = 0x00000200;
        static constexpr unsigned G3_IO2(unsigned value) { return (value << 9); }
        static constexpr unsigned G3_IO3_POS = 10;
        static constexpr unsigned G3_IO3_MASK = 0x00000400;
        static constexpr unsigned G3_IO3(unsigned value) { return (value << 10); }
        static constexpr unsigned G3_IO4_POS = 11;
        static constexpr unsigned G3_IO4_MASK = 0x00000800;
        static constexpr unsigned G3_IO4(unsigned value) { return (value << 11); }
        static constexpr unsigned G4_IO1_POS = 12;
        static constexpr unsigned G4_IO1_MASK = 0x00001000;
        static constexpr unsigned G4_IO1(unsigned value) { return (value << 12); }
        static constexpr unsigned G4_IO2_POS = 13;
        static constexpr unsigned G4_IO2_MASK = 0x00002000;
        static constexpr unsigned G4_IO2(unsigned value) { return (value << 13); }
        static constexpr unsigned G4_IO3_POS = 14;
        static constexpr unsigned G4_IO3_MASK = 0x00004000;
        static constexpr unsigned G4_IO3(unsigned value) { return (value << 14); }
        static constexpr unsigned G4_IO4_POS = 15;
        static constexpr unsigned G4_IO4_MASK = 0x00008000;
        static constexpr unsigned G4_IO4(unsigned value) { return (value << 15); }
        static constexpr unsigned G5_IO1_POS = 16;
        static constexpr unsigned G5_IO1_MASK = 0x00010000;
        static constexpr unsigned G5_IO1(unsigned value) { return (value << 16); }
        static constexpr unsigned G5_IO2_POS = 17;
        static constexpr unsigned G5_IO2_MASK = 0x00020000;
        static constexpr unsigned G5_IO2(unsigned value) { return (value << 17); }
        static constexpr unsigned G5_IO3_POS = 18;
        static constexpr unsigned G5_IO3_MASK = 0x00040000;
        static constexpr unsigned G5_IO3(unsigned value) { return (value << 18); }
        static constexpr unsigned G5_IO4_POS = 19;
        static constexpr unsigned G5_IO4_MASK = 0x00080000;
        static constexpr unsigned G5_IO4(unsigned value) { return (value << 19); }
        static constexpr unsigned G6_IO1_POS = 20;
        static constexpr unsigned G6_IO1_MASK = 0x00100000;
        static constexpr unsigned G6_IO1(unsigned value) { return (value << 20); }
        static constexpr unsigned G6_IO2_POS = 21;
        static constexpr unsigned G6_IO2_MASK = 0x00200000;
        static constexpr unsigned G6_IO2(unsigned value) { return (value << 21); }
        static constexpr unsigned G6_IO3_POS = 22;
        static constexpr unsigned G6_IO3_MASK = 0x00400000;
        static constexpr unsigned G6_IO3(unsigned value) { return (value << 22); }
        static constexpr unsigned G6_IO4_POS = 23;
        static constexpr unsigned G6_IO4_MASK = 0x00800000;
        static constexpr unsigned G6_IO4(unsigned value) { return (value << 23); }
    } IOCCR;

    uint8_t Reserved4[4];

    volatile union IOGCSR_T // IOGCSR: I/O group control status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOGCSR_BIT_T
        {
            unsigned G1E : 1; // bit 0 Analog I/O group x enable
            unsigned G2E : 1; // bit 1 Analog I/O group x enable
            unsigned G3E : 1; // bit 2 Analog I/O group x enable
            unsigned G4E : 1; // bit 3 Analog I/O group x enable
            unsigned G5E : 1; // bit 4 Analog I/O group x enable
            unsigned G6E : 1; // bit 5 Analog I/O group x enable
            unsigned G7E : 1; // bit 6 Analog I/O group x enable
            unsigned G8E : 1; // bit 7 Analog I/O group x enable
            unsigned     : 8; // bits 8..15 unused
            unsigned G1S : 1; // bit 16 Analog I/O group x status
            unsigned G2S : 1; // bit 17 Analog I/O group x status
            unsigned G3S : 1; // bit 18 Analog I/O group x status
            unsigned G4S : 1; // bit 19 Analog I/O group x status
            unsigned G5S : 1; // bit 20 Analog I/O group x status
            unsigned G6S : 1; // bit 21 Analog I/O group x status
            unsigned G7S : 1; // bit 22 Analog I/O group x status
            unsigned G8S : 1; // bit 23 Analog I/O group x status
            unsigned     : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned G1E_POS = 0;
        static constexpr unsigned G1E_MASK = 0x00000001;
        static constexpr unsigned G1E(unsigned value) { return (value << 0); }
        static constexpr unsigned G2E_POS = 1;
        static constexpr unsigned G2E_MASK = 0x00000002;
        static constexpr unsigned G2E(unsigned value) { return (value << 1); }
        static constexpr unsigned G3E_POS = 2;
        static constexpr unsigned G3E_MASK = 0x00000004;
        static constexpr unsigned G3E(unsigned value) { return (value << 2); }
        static constexpr unsigned G4E_POS = 3;
        static constexpr unsigned G4E_MASK = 0x00000008;
        static constexpr unsigned G4E(unsigned value) { return (value << 3); }
        static constexpr unsigned G5E_POS = 4;
        static constexpr unsigned G5E_MASK = 0x00000010;
        static constexpr unsigned G5E(unsigned value) { return (value << 4); }
        static constexpr unsigned G6E_POS = 5;
        static constexpr unsigned G6E_MASK = 0x00000020;
        static constexpr unsigned G6E(unsigned value) { return (value << 5); }
        static constexpr unsigned G7E_POS = 6;
        static constexpr unsigned G7E_MASK = 0x00000040;
        static constexpr unsigned G7E(unsigned value) { return (value << 6); }
        static constexpr unsigned G8E_POS = 7;
        static constexpr unsigned G8E_MASK = 0x00000080;
        static constexpr unsigned G8E(unsigned value) { return (value << 7); }
        static constexpr unsigned G1S_POS = 16;
        static constexpr unsigned G1S_MASK = 0x00010000;
        static constexpr unsigned G1S(unsigned value) { return (value << 16); }
        static constexpr unsigned G2S_POS = 17;
        static constexpr unsigned G2S_MASK = 0x00020000;
        static constexpr unsigned G2S(unsigned value) { return (value << 17); }
        static constexpr unsigned G3S_POS = 18;
        static constexpr unsigned G3S_MASK = 0x00040000;
        static constexpr unsigned G3S(unsigned value) { return (value << 18); }
        static constexpr unsigned G4S_POS = 19;
        static constexpr unsigned G4S_MASK = 0x00080000;
        static constexpr unsigned G4S(unsigned value) { return (value << 19); }
        static constexpr unsigned G5S_POS = 20;
        static constexpr unsigned G5S_MASK = 0x00100000;
        static constexpr unsigned G5S(unsigned value) { return (value << 20); }
        static constexpr unsigned G6S_POS = 21;
        static constexpr unsigned G6S_MASK = 0x00200000;
        static constexpr unsigned G6S(unsigned value) { return (value << 21); }
        static constexpr unsigned G7S_POS = 22;
        static constexpr unsigned G7S_MASK = 0x00400000;
        static constexpr unsigned G7S(unsigned value) { return (value << 22); }
        static constexpr unsigned G8S_POS = 23;
        static constexpr unsigned G8S_MASK = 0x00800000;
        static constexpr unsigned G8S(unsigned value) { return (value << 23); }
    } IOGCSR;

    volatile union IOG1CR_T // IOG1CR: I/O group x counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOG1CR_BIT_T
        {
            unsigned CNT : 14; // bits 0..13 Counter value
            unsigned     : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned CNT_POS = 0;
        static constexpr unsigned CNT_MASK = 0x00003fff;
        static constexpr unsigned CNT(unsigned value) { return (value << 0); }
    } IOG1CR;

    volatile union IOG2CR_T // IOG2CR: I/O group x counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOG2CR_BIT_T
        {
            unsigned CNT : 14; // bits 0..13 Counter value
            unsigned     : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned CNT_POS = 0;
        static constexpr unsigned CNT_MASK = 0x00003fff;
        static constexpr unsigned CNT(unsigned value) { return (value << 0); }
    } IOG2CR;

    volatile union IOG3CR_T // IOG3CR: I/O group x counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOG3CR_BIT_T
        {
            unsigned CNT : 14; // bits 0..13 Counter value
            unsigned     : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned CNT_POS = 0;
        static constexpr unsigned CNT_MASK = 0x00003fff;
        static constexpr unsigned CNT(unsigned value) { return (value << 0); }
    } IOG3CR;

    volatile union IOG4CR_T // IOG4CR: I/O group x counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOG4CR_BIT_T
        {
            unsigned CNT : 14; // bits 0..13 Counter value
            unsigned     : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned CNT_POS = 0;
        static constexpr unsigned CNT_MASK = 0x00003fff;
        static constexpr unsigned CNT(unsigned value) { return (value << 0); }
    } IOG4CR;

    volatile union IOG5CR_T // IOG5CR: I/O group x counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOG5CR_BIT_T
        {
            unsigned CNT : 14; // bits 0..13 Counter value
            unsigned     : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned CNT_POS = 0;
        static constexpr unsigned CNT_MASK = 0x00003fff;
        static constexpr unsigned CNT(unsigned value) { return (value << 0); }
    } IOG5CR;

    volatile union IOG6CR_T // IOG6CR: I/O group x counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IOG6CR_BIT_T
        {
            unsigned CNT : 14; // bits 0..13 Counter value
            unsigned     : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned CNT_POS = 0;
        static constexpr unsigned CNT_MASK = 0x00003fff;
        static constexpr unsigned CNT(unsigned value) { return (value << 0); }
    } IOG6CR;

}; // struct TSC_T

static_assert(sizeof(TSC_T) == TSC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp