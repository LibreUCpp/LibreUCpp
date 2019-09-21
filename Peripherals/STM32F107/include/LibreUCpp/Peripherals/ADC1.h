#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) ADC1_T
{
    static constexpr size_t INSTANCE_SIZE = 80;
    static constexpr intptr_t BASE_ADDRESS = 0x40012400;

    static constexpr intptr_t ADDR_OFFSET_SR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_SMPR1 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SMPR2 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_JOFR1 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_JOFR2 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_JOFR3 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_JOFR4 = 0x20;
    static constexpr intptr_t ADDR_OFFSET_HTR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_LTR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_SQR1 = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_SQR2 = 0x30;
    static constexpr intptr_t ADDR_OFFSET_SQR3 = 0x34;
    static constexpr intptr_t ADDR_OFFSET_JSQR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_JDR1 = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_JDR2 = 0x40;
    static constexpr intptr_t ADDR_OFFSET_JDR3 = 0x44;
    static constexpr intptr_t ADDR_OFFSET_JDR4 = 0x48;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x4c;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned AWD   : 1; // bit 0 Analog watchdog flag
            unsigned EOC   : 1; // bit 1 Regular channel end of conversion
            unsigned JEOC  : 1; // bit 2 Injected channel end of conversion
            unsigned JSTRT : 1; // bit 3 Injected channel start flag
            unsigned STRT  : 1; // bit 4 Regular channel start flag
            unsigned       : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned AWD_POS = 0;
        static constexpr unsigned AWD_MASK = 0x00000001;
        static constexpr unsigned AWD(unsigned value) { return (value << 0); }
        static constexpr unsigned EOC_POS = 1;
        static constexpr unsigned EOC_MASK = 0x00000002;
        static constexpr unsigned EOC(unsigned value) { return (value << 1); }
        static constexpr unsigned JEOC_POS = 2;
        static constexpr unsigned JEOC_MASK = 0x00000004;
        static constexpr unsigned JEOC(unsigned value) { return (value << 2); }
        static constexpr unsigned JSTRT_POS = 3;
        static constexpr unsigned JSTRT_MASK = 0x00000008;
        static constexpr unsigned JSTRT(unsigned value) { return (value << 3); }
        static constexpr unsigned STRT_POS = 4;
        static constexpr unsigned STRT_MASK = 0x00000010;
        static constexpr unsigned STRT(unsigned value) { return (value << 4); }
    } SR;

    volatile union CR1_T // CR1: control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned AWDCH   : 5; // bits 0..4 Analog watchdog channel select bits
            unsigned EOCIE   : 1; // bit 5 Interrupt enable for EOC
            unsigned AWDIE   : 1; // bit 6 Analog watchdog interrupt enable
            unsigned JEOCIE  : 1; // bit 7 Interrupt enable for injected channels
            unsigned SCAN    : 1; // bit 8 Scan mode
            unsigned AWDSGL  : 1; // bit 9 Enable the watchdog on a single channel in scan mode
            unsigned JAUTO   : 1; // bit 10 Automatic injected group conversion
            unsigned DISCEN  : 1; // bit 11 Discontinuous mode on regular channels
            unsigned JDISCEN : 1; // bit 12 Discontinuous mode on injected channels
            unsigned DISCNUM : 3; // bits 13..15 Discontinuous mode channel count
            unsigned DUALMOD : 4; // bits 16..19 Dual mode selection
            unsigned         : 2; // bits 20..21 unused
            unsigned JAWDEN  : 1; // bit 22 Analog watchdog enable on injected channels
            unsigned AWDEN   : 1; // bit 23 Analog watchdog enable on regular channels
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned AWDCH_POS = 0;
        static constexpr unsigned AWDCH_MASK = 0x0000001f;
        static constexpr unsigned AWDCH(unsigned value) { return (value << 0); }
        static constexpr unsigned EOCIE_POS = 5;
        static constexpr unsigned EOCIE_MASK = 0x00000020;
        static constexpr unsigned EOCIE(unsigned value) { return (value << 5); }
        static constexpr unsigned AWDIE_POS = 6;
        static constexpr unsigned AWDIE_MASK = 0x00000040;
        static constexpr unsigned AWDIE(unsigned value) { return (value << 6); }
        static constexpr unsigned JEOCIE_POS = 7;
        static constexpr unsigned JEOCIE_MASK = 0x00000080;
        static constexpr unsigned JEOCIE(unsigned value) { return (value << 7); }
        static constexpr unsigned SCAN_POS = 8;
        static constexpr unsigned SCAN_MASK = 0x00000100;
        static constexpr unsigned SCAN(unsigned value) { return (value << 8); }
        static constexpr unsigned AWDSGL_POS = 9;
        static constexpr unsigned AWDSGL_MASK = 0x00000200;
        static constexpr unsigned AWDSGL(unsigned value) { return (value << 9); }
        static constexpr unsigned JAUTO_POS = 10;
        static constexpr unsigned JAUTO_MASK = 0x00000400;
        static constexpr unsigned JAUTO(unsigned value) { return (value << 10); }
        static constexpr unsigned DISCEN_POS = 11;
        static constexpr unsigned DISCEN_MASK = 0x00000800;
        static constexpr unsigned DISCEN(unsigned value) { return (value << 11); }
        static constexpr unsigned JDISCEN_POS = 12;
        static constexpr unsigned JDISCEN_MASK = 0x00001000;
        static constexpr unsigned JDISCEN(unsigned value) { return (value << 12); }
        static constexpr unsigned DISCNUM_POS = 13;
        static constexpr unsigned DISCNUM_MASK = 0x0000e000;
        static constexpr unsigned DISCNUM(unsigned value) { return (value << 13); }
        static constexpr unsigned DUALMOD_POS = 16;
        static constexpr unsigned DUALMOD_MASK = 0x000f0000;
        static constexpr unsigned DUALMOD(unsigned value) { return (value << 16); }
        static constexpr unsigned JAWDEN_POS = 22;
        static constexpr unsigned JAWDEN_MASK = 0x00400000;
        static constexpr unsigned JAWDEN(unsigned value) { return (value << 22); }
        static constexpr unsigned AWDEN_POS = 23;
        static constexpr unsigned AWDEN_MASK = 0x00800000;
        static constexpr unsigned AWDEN(unsigned value) { return (value << 23); }
    } CR1;

    volatile union CR2_T // CR2: control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned ADON     : 1; // bit 0 A/D converter ON / OFF
            unsigned CONT     : 1; // bit 1 Continuous conversion
            unsigned CAL      : 1; // bit 2 A/D calibration
            unsigned RSTCAL   : 1; // bit 3 Reset calibration
            unsigned          : 4; // bits 4..7 unused
            unsigned DMA      : 1; // bit 8 Direct memory access mode
            unsigned          : 2; // bits 9..10 unused
            unsigned ALIGN    : 1; // bit 11 Data alignment
            unsigned JEXTSEL  : 3; // bits 12..14 External event select for injected group
            unsigned JEXTTRIG : 1; // bit 15 External trigger conversion mode for injected channels
            unsigned          : 1; // bit 16 unused
            unsigned EXTSEL   : 3; // bits 17..19 External event select for regular group
            unsigned EXTTRIG  : 1; // bit 20 External trigger conversion mode for regular channels
            unsigned JSWSTART : 1; // bit 21 Start conversion of injected channels
            unsigned SWSTART  : 1; // bit 22 Start conversion of regular channels
            unsigned TSVREFE  : 1; // bit 23 Temperature sensor and VREFINT enable
            unsigned          : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned ADON_POS = 0;
        static constexpr unsigned ADON_MASK = 0x00000001;
        static constexpr unsigned ADON(unsigned value) { return (value << 0); }
        static constexpr unsigned CONT_POS = 1;
        static constexpr unsigned CONT_MASK = 0x00000002;
        static constexpr unsigned CONT(unsigned value) { return (value << 1); }
        static constexpr unsigned CAL_POS = 2;
        static constexpr unsigned CAL_MASK = 0x00000004;
        static constexpr unsigned CAL(unsigned value) { return (value << 2); }
        static constexpr unsigned RSTCAL_POS = 3;
        static constexpr unsigned RSTCAL_MASK = 0x00000008;
        static constexpr unsigned RSTCAL(unsigned value) { return (value << 3); }
        static constexpr unsigned DMA_POS = 8;
        static constexpr unsigned DMA_MASK = 0x00000100;
        static constexpr unsigned DMA(unsigned value) { return (value << 8); }
        static constexpr unsigned ALIGN_POS = 11;
        static constexpr unsigned ALIGN_MASK = 0x00000800;
        static constexpr unsigned ALIGN(unsigned value) { return (value << 11); }
        static constexpr unsigned JEXTSEL_POS = 12;
        static constexpr unsigned JEXTSEL_MASK = 0x00007000;
        static constexpr unsigned JEXTSEL(unsigned value) { return (value << 12); }
        static constexpr unsigned JEXTTRIG_POS = 15;
        static constexpr unsigned JEXTTRIG_MASK = 0x00008000;
        static constexpr unsigned JEXTTRIG(unsigned value) { return (value << 15); }
        static constexpr unsigned EXTSEL_POS = 17;
        static constexpr unsigned EXTSEL_MASK = 0x000e0000;
        static constexpr unsigned EXTSEL(unsigned value) { return (value << 17); }
        static constexpr unsigned EXTTRIG_POS = 20;
        static constexpr unsigned EXTTRIG_MASK = 0x00100000;
        static constexpr unsigned EXTTRIG(unsigned value) { return (value << 20); }
        static constexpr unsigned JSWSTART_POS = 21;
        static constexpr unsigned JSWSTART_MASK = 0x00200000;
        static constexpr unsigned JSWSTART(unsigned value) { return (value << 21); }
        static constexpr unsigned SWSTART_POS = 22;
        static constexpr unsigned SWSTART_MASK = 0x00400000;
        static constexpr unsigned SWSTART(unsigned value) { return (value << 22); }
        static constexpr unsigned TSVREFE_POS = 23;
        static constexpr unsigned TSVREFE_MASK = 0x00800000;
        static constexpr unsigned TSVREFE(unsigned value) { return (value << 23); }
    } CR2;

    volatile union SMPR1_T // SMPR1: sample time register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) SMPR1_BIT_T
        {
            unsigned SMP10 : 3; // bits 0..2 Channel 10 sampling time selection
            unsigned SMP11 : 3; // bits 3..5 Channel 11 sampling time selection
            unsigned SMP12 : 3; // bits 6..8 Channel 12 sampling time selection
            unsigned SMP13 : 3; // bits 9..11 Channel 13 sampling time selection
            unsigned SMP14 : 3; // bits 12..14 Channel 14 sampling time selection
            unsigned SMP15 : 3; // bits 15..17 Channel 15 sampling time selection
            unsigned SMP16 : 3; // bits 18..20 Channel 16 sampling time selection
            unsigned SMP17 : 3; // bits 21..23 Channel 17 sampling time selection
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned SMP10_POS = 0;
        static constexpr unsigned SMP10_MASK = 0x00000007;
        static constexpr unsigned SMP10(unsigned value) { return (value << 0); }
        static constexpr unsigned SMP11_POS = 3;
        static constexpr unsigned SMP11_MASK = 0x00000038;
        static constexpr unsigned SMP11(unsigned value) { return (value << 3); }
        static constexpr unsigned SMP12_POS = 6;
        static constexpr unsigned SMP12_MASK = 0x000001c0;
        static constexpr unsigned SMP12(unsigned value) { return (value << 6); }
        static constexpr unsigned SMP13_POS = 9;
        static constexpr unsigned SMP13_MASK = 0x00000e00;
        static constexpr unsigned SMP13(unsigned value) { return (value << 9); }
        static constexpr unsigned SMP14_POS = 12;
        static constexpr unsigned SMP14_MASK = 0x00007000;
        static constexpr unsigned SMP14(unsigned value) { return (value << 12); }
        static constexpr unsigned SMP15_POS = 15;
        static constexpr unsigned SMP15_MASK = 0x00038000;
        static constexpr unsigned SMP15(unsigned value) { return (value << 15); }
        static constexpr unsigned SMP16_POS = 18;
        static constexpr unsigned SMP16_MASK = 0x001c0000;
        static constexpr unsigned SMP16(unsigned value) { return (value << 18); }
        static constexpr unsigned SMP17_POS = 21;
        static constexpr unsigned SMP17_MASK = 0x00e00000;
        static constexpr unsigned SMP17(unsigned value) { return (value << 21); }
    } SMPR1;

    volatile union SMPR2_T // SMPR2: sample time register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SMPR2_BIT_T
        {
            unsigned SMP0 : 3; // bits 0..2 Channel 0 sampling time selection
            unsigned SMP1 : 3; // bits 3..5 Channel 1 sampling time selection
            unsigned SMP2 : 3; // bits 6..8 Channel 2 sampling time selection
            unsigned SMP3 : 3; // bits 9..11 Channel 3 sampling time selection
            unsigned SMP4 : 3; // bits 12..14 Channel 4 sampling time selection
            unsigned SMP5 : 3; // bits 15..17 Channel 5 sampling time selection
            unsigned SMP6 : 3; // bits 18..20 Channel 6 sampling time selection
            unsigned SMP7 : 3; // bits 21..23 Channel 7 sampling time selection
            unsigned SMP8 : 3; // bits 24..26 Channel 8 sampling time selection
            unsigned SMP9 : 3; // bits 27..29 Channel 9 sampling time selection
            unsigned      : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned SMP0_POS = 0;
        static constexpr unsigned SMP0_MASK = 0x00000007;
        static constexpr unsigned SMP0(unsigned value) { return (value << 0); }
        static constexpr unsigned SMP1_POS = 3;
        static constexpr unsigned SMP1_MASK = 0x00000038;
        static constexpr unsigned SMP1(unsigned value) { return (value << 3); }
        static constexpr unsigned SMP2_POS = 6;
        static constexpr unsigned SMP2_MASK = 0x000001c0;
        static constexpr unsigned SMP2(unsigned value) { return (value << 6); }
        static constexpr unsigned SMP3_POS = 9;
        static constexpr unsigned SMP3_MASK = 0x00000e00;
        static constexpr unsigned SMP3(unsigned value) { return (value << 9); }
        static constexpr unsigned SMP4_POS = 12;
        static constexpr unsigned SMP4_MASK = 0x00007000;
        static constexpr unsigned SMP4(unsigned value) { return (value << 12); }
        static constexpr unsigned SMP5_POS = 15;
        static constexpr unsigned SMP5_MASK = 0x00038000;
        static constexpr unsigned SMP5(unsigned value) { return (value << 15); }
        static constexpr unsigned SMP6_POS = 18;
        static constexpr unsigned SMP6_MASK = 0x001c0000;
        static constexpr unsigned SMP6(unsigned value) { return (value << 18); }
        static constexpr unsigned SMP7_POS = 21;
        static constexpr unsigned SMP7_MASK = 0x00e00000;
        static constexpr unsigned SMP7(unsigned value) { return (value << 21); }
        static constexpr unsigned SMP8_POS = 24;
        static constexpr unsigned SMP8_MASK = 0x07000000;
        static constexpr unsigned SMP8(unsigned value) { return (value << 24); }
        static constexpr unsigned SMP9_POS = 27;
        static constexpr unsigned SMP9_MASK = 0x38000000;
        static constexpr unsigned SMP9(unsigned value) { return (value << 27); }
    } SMPR2;

    volatile union JOFR1_T // JOFR1: injected channel data offset register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JOFR1_BIT_T
        {
            unsigned JOFFSET1 : 12; // bits 0..11 Data offset for injected channel x
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned JOFFSET1_POS = 0;
        static constexpr unsigned JOFFSET1_MASK = 0x00000fff;
        static constexpr unsigned JOFFSET1(unsigned value) { return (value << 0); }
    } JOFR1;

    volatile union JOFR2_T // JOFR2: injected channel data offset register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JOFR2_BIT_T
        {
            unsigned JOFFSET2 : 12; // bits 0..11 Data offset for injected channel x
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned JOFFSET2_POS = 0;
        static constexpr unsigned JOFFSET2_MASK = 0x00000fff;
        static constexpr unsigned JOFFSET2(unsigned value) { return (value << 0); }
    } JOFR2;

    volatile union JOFR3_T // JOFR3: injected channel data offset register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JOFR3_BIT_T
        {
            unsigned JOFFSET3 : 12; // bits 0..11 Data offset for injected channel x
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned JOFFSET3_POS = 0;
        static constexpr unsigned JOFFSET3_MASK = 0x00000fff;
        static constexpr unsigned JOFFSET3(unsigned value) { return (value << 0); }
    } JOFR3;

    volatile union JOFR4_T // JOFR4: injected channel data offset register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JOFR4_BIT_T
        {
            unsigned JOFFSET4 : 12; // bits 0..11 Data offset for injected channel x
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned JOFFSET4_POS = 0;
        static constexpr unsigned JOFFSET4_MASK = 0x00000fff;
        static constexpr unsigned JOFFSET4(unsigned value) { return (value << 0); }
    } JOFR4;

    volatile union HTR_T // HTR: watchdog higher threshold register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HTR_BIT_T
        {
            unsigned HT : 12; // bits 0..11 Analog watchdog higher threshold
            unsigned    : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned HT_POS = 0;
        static constexpr unsigned HT_MASK = 0x00000fff;
        static constexpr unsigned HT(unsigned value) { return (value << 0); }
    } HTR;

    volatile union LTR_T // LTR: watchdog lower threshold register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LTR_BIT_T
        {
            unsigned LT : 12; // bits 0..11 Analog watchdog lower threshold
            unsigned    : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned LT_POS = 0;
        static constexpr unsigned LT_MASK = 0x00000fff;
        static constexpr unsigned LT(unsigned value) { return (value << 0); }
    } LTR;

    volatile union SQR1_T // SQR1: regular sequence register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) SQR1_BIT_T
        {
            unsigned SQ13 : 5; // bits 0..4 13th conversion in regular sequence
            unsigned SQ14 : 5; // bits 5..9 14th conversion in regular sequence
            unsigned SQ15 : 5; // bits 10..14 15th conversion in regular sequence
            unsigned SQ16 : 5; // bits 15..19 16th conversion in regular sequence
            unsigned L    : 4; // bits 20..23 Regular channel sequence length
            unsigned      : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned SQ13_POS = 0;
        static constexpr unsigned SQ13_MASK = 0x0000001f;
        static constexpr unsigned SQ13(unsigned value) { return (value << 0); }
        static constexpr unsigned SQ14_POS = 5;
        static constexpr unsigned SQ14_MASK = 0x000003e0;
        static constexpr unsigned SQ14(unsigned value) { return (value << 5); }
        static constexpr unsigned SQ15_POS = 10;
        static constexpr unsigned SQ15_MASK = 0x00007c00;
        static constexpr unsigned SQ15(unsigned value) { return (value << 10); }
        static constexpr unsigned SQ16_POS = 15;
        static constexpr unsigned SQ16_MASK = 0x000f8000;
        static constexpr unsigned SQ16(unsigned value) { return (value << 15); }
        static constexpr unsigned L_POS = 20;
        static constexpr unsigned L_MASK = 0x00f00000;
        static constexpr unsigned L(unsigned value) { return (value << 20); }
    } SQR1;

    volatile union SQR2_T // SQR2: regular sequence register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SQR2_BIT_T
        {
            unsigned SQ7  : 5; // bits 0..4 7th conversion in regular sequence
            unsigned SQ8  : 5; // bits 5..9 8th conversion in regular sequence
            unsigned SQ9  : 5; // bits 10..14 9th conversion in regular sequence
            unsigned SQ10 : 5; // bits 15..19 10th conversion in regular sequence
            unsigned SQ11 : 5; // bits 20..24 11th conversion in regular sequence
            unsigned SQ12 : 5; // bits 25..29 12th conversion in regular sequence
            unsigned      : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned SQ7_POS = 0;
        static constexpr unsigned SQ7_MASK = 0x0000001f;
        static constexpr unsigned SQ7(unsigned value) { return (value << 0); }
        static constexpr unsigned SQ8_POS = 5;
        static constexpr unsigned SQ8_MASK = 0x000003e0;
        static constexpr unsigned SQ8(unsigned value) { return (value << 5); }
        static constexpr unsigned SQ9_POS = 10;
        static constexpr unsigned SQ9_MASK = 0x00007c00;
        static constexpr unsigned SQ9(unsigned value) { return (value << 10); }
        static constexpr unsigned SQ10_POS = 15;
        static constexpr unsigned SQ10_MASK = 0x000f8000;
        static constexpr unsigned SQ10(unsigned value) { return (value << 15); }
        static constexpr unsigned SQ11_POS = 20;
        static constexpr unsigned SQ11_MASK = 0x01f00000;
        static constexpr unsigned SQ11(unsigned value) { return (value << 20); }
        static constexpr unsigned SQ12_POS = 25;
        static constexpr unsigned SQ12_MASK = 0x3e000000;
        static constexpr unsigned SQ12(unsigned value) { return (value << 25); }
    } SQR2;

    volatile union SQR3_T // SQR3: regular sequence register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) SQR3_BIT_T
        {
            unsigned SQ1 : 5; // bits 0..4 1st conversion in regular sequence
            unsigned SQ2 : 5; // bits 5..9 2nd conversion in regular sequence
            unsigned SQ3 : 5; // bits 10..14 3rd conversion in regular sequence
            unsigned SQ4 : 5; // bits 15..19 4th conversion in regular sequence
            unsigned SQ5 : 5; // bits 20..24 5th conversion in regular sequence
            unsigned SQ6 : 5; // bits 25..29 6th conversion in regular sequence
            unsigned     : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned SQ1_POS = 0;
        static constexpr unsigned SQ1_MASK = 0x0000001f;
        static constexpr unsigned SQ1(unsigned value) { return (value << 0); }
        static constexpr unsigned SQ2_POS = 5;
        static constexpr unsigned SQ2_MASK = 0x000003e0;
        static constexpr unsigned SQ2(unsigned value) { return (value << 5); }
        static constexpr unsigned SQ3_POS = 10;
        static constexpr unsigned SQ3_MASK = 0x00007c00;
        static constexpr unsigned SQ3(unsigned value) { return (value << 10); }
        static constexpr unsigned SQ4_POS = 15;
        static constexpr unsigned SQ4_MASK = 0x000f8000;
        static constexpr unsigned SQ4(unsigned value) { return (value << 15); }
        static constexpr unsigned SQ5_POS = 20;
        static constexpr unsigned SQ5_MASK = 0x01f00000;
        static constexpr unsigned SQ5(unsigned value) { return (value << 20); }
        static constexpr unsigned SQ6_POS = 25;
        static constexpr unsigned SQ6_MASK = 0x3e000000;
        static constexpr unsigned SQ6(unsigned value) { return (value << 25); }
    } SQR3;

    volatile union JSQR_T // JSQR: injected sequence register 
    {
        uint32_t reg;
        struct __attribute__((packed)) JSQR_BIT_T
        {
            unsigned JSQ1 : 5; // bits 0..4 1st conversion in injected sequence
            unsigned JSQ2 : 5; // bits 5..9 2nd conversion in injected sequence
            unsigned JSQ3 : 5; // bits 10..14 3rd conversion in injected sequence
            unsigned JSQ4 : 5; // bits 15..19 4th conversion in injected sequence
            unsigned JL   : 2; // bits 20..21 Injected sequence length
            unsigned      : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned JSQ1_POS = 0;
        static constexpr unsigned JSQ1_MASK = 0x0000001f;
        static constexpr unsigned JSQ1(unsigned value) { return (value << 0); }
        static constexpr unsigned JSQ2_POS = 5;
        static constexpr unsigned JSQ2_MASK = 0x000003e0;
        static constexpr unsigned JSQ2(unsigned value) { return (value << 5); }
        static constexpr unsigned JSQ3_POS = 10;
        static constexpr unsigned JSQ3_MASK = 0x00007c00;
        static constexpr unsigned JSQ3(unsigned value) { return (value << 10); }
        static constexpr unsigned JSQ4_POS = 15;
        static constexpr unsigned JSQ4_MASK = 0x000f8000;
        static constexpr unsigned JSQ4(unsigned value) { return (value << 15); }
        static constexpr unsigned JL_POS = 20;
        static constexpr unsigned JL_MASK = 0x00300000;
        static constexpr unsigned JL(unsigned value) { return (value << 20); }
    } JSQR;

    volatile union JDR1_T // JDR1: injected data register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JDR1_BIT_T
        {
            unsigned JDATA : 16; // bits 0..15 Injected data
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned JDATA_POS = 0;
        static constexpr unsigned JDATA_MASK = 0x0000ffff;
        static constexpr unsigned JDATA(unsigned value) { return (value << 0); }
    } JDR1;

    volatile union JDR2_T // JDR2: injected data register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JDR2_BIT_T
        {
            unsigned JDATA : 16; // bits 0..15 Injected data
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned JDATA_POS = 0;
        static constexpr unsigned JDATA_MASK = 0x0000ffff;
        static constexpr unsigned JDATA(unsigned value) { return (value << 0); }
    } JDR2;

    volatile union JDR3_T // JDR3: injected data register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JDR3_BIT_T
        {
            unsigned JDATA : 16; // bits 0..15 Injected data
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned JDATA_POS = 0;
        static constexpr unsigned JDATA_MASK = 0x0000ffff;
        static constexpr unsigned JDATA(unsigned value) { return (value << 0); }
    } JDR3;

    volatile union JDR4_T // JDR4: injected data register x 
    {
        uint32_t reg;
        struct __attribute__((packed)) JDR4_BIT_T
        {
            unsigned JDATA : 16; // bits 0..15 Injected data
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned JDATA_POS = 0;
        static constexpr unsigned JDATA_MASK = 0x0000ffff;
        static constexpr unsigned JDATA(unsigned value) { return (value << 0); }
    } JDR4;

    volatile union DR_T // DR: regular data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DATA     : 16; // bits 0..15 Regular data
            unsigned ADC2DATA : 16; // bits 16..31 ADC2 data    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0x0000ffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
        static constexpr unsigned ADC2DATA_POS = 16;
        static constexpr unsigned ADC2DATA_MASK = 0xffff0000;
        static constexpr unsigned ADC2DATA(unsigned value) { return (value << 16); }
    } DR;

}; // struct ADC1_T

static_assert(sizeof(ADC1_T) == ADC1_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp