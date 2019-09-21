#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) ADC_T
{
    static constexpr size_t INSTANCE_SIZE = 780;
    static constexpr intptr_t BASE_ADDRESS = 0x40012400;

    static constexpr intptr_t ADDR_OFFSET_ISR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_IER = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CFGR1 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_CFGR2 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_SMPR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_TR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_CHSELR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_CCR = 0x308;

    volatile union ISR_T // ISR: interrupt and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned ADRDY : 1; // bit 0 ADC ready
            unsigned EOSMP : 1; // bit 1 End of sampling flag
            unsigned EOC   : 1; // bit 2 End of conversion flag
            unsigned EOS   : 1; // bit 3 End of sequence flag
            unsigned OVR   : 1; // bit 4 ADC overrun
            unsigned       : 2; // bits 5..6 unused
            unsigned AWD   : 1; // bit 7 Analog watchdog flag
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned ADRDY_POS = 0;
        static constexpr unsigned ADRDY_MASK = 0x00000001;
        static constexpr unsigned ADRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned EOSMP_POS = 1;
        static constexpr unsigned EOSMP_MASK = 0x00000002;
        static constexpr unsigned EOSMP(unsigned value) { return (value << 1); }
        static constexpr unsigned EOC_POS = 2;
        static constexpr unsigned EOC_MASK = 0x00000004;
        static constexpr unsigned EOC(unsigned value) { return (value << 2); }
        static constexpr unsigned EOS_POS = 3;
        static constexpr unsigned EOS_MASK = 0x00000008;
        static constexpr unsigned EOS(unsigned value) { return (value << 3); }
        static constexpr unsigned OVR_POS = 4;
        static constexpr unsigned OVR_MASK = 0x00000010;
        static constexpr unsigned OVR(unsigned value) { return (value << 4); }
        static constexpr unsigned AWD_POS = 7;
        static constexpr unsigned AWD_MASK = 0x00000080;
        static constexpr unsigned AWD(unsigned value) { return (value << 7); }
    } ISR;

    volatile union IER_T // IER: interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IER_BIT_T
        {
            unsigned ADRDYIE : 1; // bit 0 ADC ready interrupt enable
            unsigned EOSMPIE : 1; // bit 1 End of sampling flag interrupt enable
            unsigned EOCIE   : 1; // bit 2 End of conversion interrupt enable
            unsigned EOSIE   : 1; // bit 3 End of conversion sequence interrupt enable
            unsigned OVRIE   : 1; // bit 4 Overrun interrupt enable
            unsigned         : 2; // bits 5..6 unused
            unsigned AWDIE   : 1; // bit 7 Analog watchdog interrupt enable
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned ADRDYIE_POS = 0;
        static constexpr unsigned ADRDYIE_MASK = 0x00000001;
        static constexpr unsigned ADRDYIE(unsigned value) { return (value << 0); }
        static constexpr unsigned EOSMPIE_POS = 1;
        static constexpr unsigned EOSMPIE_MASK = 0x00000002;
        static constexpr unsigned EOSMPIE(unsigned value) { return (value << 1); }
        static constexpr unsigned EOCIE_POS = 2;
        static constexpr unsigned EOCIE_MASK = 0x00000004;
        static constexpr unsigned EOCIE(unsigned value) { return (value << 2); }
        static constexpr unsigned EOSIE_POS = 3;
        static constexpr unsigned EOSIE_MASK = 0x00000008;
        static constexpr unsigned EOSIE(unsigned value) { return (value << 3); }
        static constexpr unsigned OVRIE_POS = 4;
        static constexpr unsigned OVRIE_MASK = 0x00000010;
        static constexpr unsigned OVRIE(unsigned value) { return (value << 4); }
        static constexpr unsigned AWDIE_POS = 7;
        static constexpr unsigned AWDIE_MASK = 0x00000080;
        static constexpr unsigned AWDIE(unsigned value) { return (value << 7); }
    } IER;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned ADEN    : 1; // bit 0 ADC enable command
            unsigned ADDIS   : 1; // bit 1 ADC disable command
            unsigned ADSTART : 1; // bit 2 ADC start conversion command
            unsigned         : 1; // bit 3 unused
            unsigned ADSTP   : 1; // bit 4 ADC stop conversion command
            unsigned         : 26; // bits 5..30 unused
            unsigned ADCAL   : 1; // bit 31 ADC calibration    
        } bit;
    
        static constexpr unsigned ADEN_POS = 0;
        static constexpr unsigned ADEN_MASK = 0x00000001;
        static constexpr unsigned ADEN(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDIS_POS = 1;
        static constexpr unsigned ADDIS_MASK = 0x00000002;
        static constexpr unsigned ADDIS(unsigned value) { return (value << 1); }
        static constexpr unsigned ADSTART_POS = 2;
        static constexpr unsigned ADSTART_MASK = 0x00000004;
        static constexpr unsigned ADSTART(unsigned value) { return (value << 2); }
        static constexpr unsigned ADSTP_POS = 4;
        static constexpr unsigned ADSTP_MASK = 0x00000010;
        static constexpr unsigned ADSTP(unsigned value) { return (value << 4); }
        static constexpr unsigned ADCAL_POS = 31;
        static constexpr unsigned ADCAL_MASK = 0x80000000;
        static constexpr unsigned ADCAL(unsigned value) { return (value << 31); }
    } CR;

    volatile union CFGR1_T // CFGR1: configuration register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR1_BIT_T
        {
            unsigned DMAEN   : 1; // bit 0 Direct memory access enable
            unsigned DMACFG  : 1; // bit 1 Direct memery access configuration
            unsigned SCANDIR : 1; // bit 2 Scan sequence direction
            unsigned RES     : 2; // bits 3..4 Data resolution
            unsigned ALIGN   : 1; // bit 5 Data alignment
            unsigned EXTSEL  : 3; // bits 6..8 External trigger selection
            unsigned         : 1; // bit 9 unused
            unsigned EXTEN   : 2; // bits 10..11 External trigger enable and polarity selection
            unsigned OVRMOD  : 1; // bit 12 Overrun management mode
            unsigned CONT    : 1; // bit 13 Single / continuous conversion mode
            unsigned AUTDLY  : 1; // bit 14 Auto-delayed conversion mode
            unsigned AUTOFF  : 1; // bit 15 Auto-off mode
            unsigned DISCEN  : 1; // bit 16 Discontinuous mode
            unsigned         : 5; // bits 17..21 unused
            unsigned AWDSGL  : 1; // bit 22 Enable the watchdog on a single channel or on all channels
            unsigned AWDEN   : 1; // bit 23 Analog watchdog enable
            unsigned         : 2; // bits 24..25 unused
            unsigned AWDCH   : 5; // bits 26..30 Analog watchdog channel selection
            unsigned         : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned DMAEN_POS = 0;
        static constexpr unsigned DMAEN_MASK = 0x00000001;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMACFG_POS = 1;
        static constexpr unsigned DMACFG_MASK = 0x00000002;
        static constexpr unsigned DMACFG(unsigned value) { return (value << 1); }
        static constexpr unsigned SCANDIR_POS = 2;
        static constexpr unsigned SCANDIR_MASK = 0x00000004;
        static constexpr unsigned SCANDIR(unsigned value) { return (value << 2); }
        static constexpr unsigned RES_POS = 3;
        static constexpr unsigned RES_MASK = 0x00000018;
        static constexpr unsigned RES(unsigned value) { return (value << 3); }
        static constexpr unsigned ALIGN_POS = 5;
        static constexpr unsigned ALIGN_MASK = 0x00000020;
        static constexpr unsigned ALIGN(unsigned value) { return (value << 5); }
        static constexpr unsigned EXTSEL_POS = 6;
        static constexpr unsigned EXTSEL_MASK = 0x000001c0;
        static constexpr unsigned EXTSEL(unsigned value) { return (value << 6); }
        static constexpr unsigned EXTEN_POS = 10;
        static constexpr unsigned EXTEN_MASK = 0x00000c00;
        static constexpr unsigned EXTEN(unsigned value) { return (value << 10); }
        static constexpr unsigned OVRMOD_POS = 12;
        static constexpr unsigned OVRMOD_MASK = 0x00001000;
        static constexpr unsigned OVRMOD(unsigned value) { return (value << 12); }
        static constexpr unsigned CONT_POS = 13;
        static constexpr unsigned CONT_MASK = 0x00002000;
        static constexpr unsigned CONT(unsigned value) { return (value << 13); }
        static constexpr unsigned AUTDLY_POS = 14;
        static constexpr unsigned AUTDLY_MASK = 0x00004000;
        static constexpr unsigned AUTDLY(unsigned value) { return (value << 14); }
        static constexpr unsigned AUTOFF_POS = 15;
        static constexpr unsigned AUTOFF_MASK = 0x00008000;
        static constexpr unsigned AUTOFF(unsigned value) { return (value << 15); }
        static constexpr unsigned DISCEN_POS = 16;
        static constexpr unsigned DISCEN_MASK = 0x00010000;
        static constexpr unsigned DISCEN(unsigned value) { return (value << 16); }
        static constexpr unsigned AWDSGL_POS = 22;
        static constexpr unsigned AWDSGL_MASK = 0x00400000;
        static constexpr unsigned AWDSGL(unsigned value) { return (value << 22); }
        static constexpr unsigned AWDEN_POS = 23;
        static constexpr unsigned AWDEN_MASK = 0x00800000;
        static constexpr unsigned AWDEN(unsigned value) { return (value << 23); }
        static constexpr unsigned AWDCH_POS = 26;
        static constexpr unsigned AWDCH_MASK = 0x7c000000;
        static constexpr unsigned AWDCH(unsigned value) { return (value << 26); }
    } CFGR1;

    volatile union CFGR2_T // CFGR2: configuration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR2_BIT_T
        {
            unsigned           : 30; // bits 0..29 unused
            unsigned JITOFF_D2 : 1; // bit 30 JITOFF_D2
            unsigned JITOFF_D4 : 1; // bit 31 JITOFF_D4    
        } bit;
    
        static constexpr unsigned JITOFF_D2_POS = 30;
        static constexpr unsigned JITOFF_D2_MASK = 0x40000000;
        static constexpr unsigned JITOFF_D2(unsigned value) { return (value << 30); }
        static constexpr unsigned JITOFF_D4_POS = 31;
        static constexpr unsigned JITOFF_D4_MASK = 0x80000000;
        static constexpr unsigned JITOFF_D4(unsigned value) { return (value << 31); }
    } CFGR2;

    volatile union SMPR_T // SMPR: sampling time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SMPR_BIT_T
        {
            unsigned SMPR : 3; // bits 0..2 Sampling time selection
            unsigned      : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned SMPR_POS = 0;
        static constexpr unsigned SMPR_MASK = 0x00000007;
        static constexpr unsigned SMPR(unsigned value) { return (value << 0); }
    } SMPR;

    uint8_t Reserved1[8];

    volatile union TR_T // TR: watchdog threshold register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TR_BIT_T
        {
            unsigned LT : 12; // bits 0..11 Analog watchdog lower threshold
            unsigned    : 4; // bits 12..15 unused
            unsigned HT : 12; // bits 16..27 Analog watchdog higher threshold
            unsigned    : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned LT_POS = 0;
        static constexpr unsigned LT_MASK = 0x00000fff;
        static constexpr unsigned LT(unsigned value) { return (value << 0); }
        static constexpr unsigned HT_POS = 16;
        static constexpr unsigned HT_MASK = 0x0fff0000;
        static constexpr unsigned HT(unsigned value) { return (value << 16); }
    } TR;

    uint8_t Reserved2[4];

    volatile union CHSELR_T // CHSELR: channel selection register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CHSELR_BIT_T
        {
            unsigned CHSEL0  : 1; // bit 0 Channel-x selection
            unsigned CHSEL1  : 1; // bit 1 Channel-x selection
            unsigned CHSEL2  : 1; // bit 2 Channel-x selection
            unsigned CHSEL3  : 1; // bit 3 Channel-x selection
            unsigned CHSEL4  : 1; // bit 4 Channel-x selection
            unsigned CHSEL5  : 1; // bit 5 Channel-x selection
            unsigned CHSEL6  : 1; // bit 6 Channel-x selection
            unsigned CHSEL7  : 1; // bit 7 Channel-x selection
            unsigned CHSEL8  : 1; // bit 8 Channel-x selection
            unsigned CHSEL9  : 1; // bit 9 Channel-x selection
            unsigned CHSEL10 : 1; // bit 10 Channel-x selection
            unsigned CHSEL11 : 1; // bit 11 Channel-x selection
            unsigned CHSEL12 : 1; // bit 12 Channel-x selection
            unsigned CHSEL13 : 1; // bit 13 Channel-x selection
            unsigned CHSEL14 : 1; // bit 14 Channel-x selection
            unsigned CHSEL15 : 1; // bit 15 Channel-x selection
            unsigned CHSEL16 : 1; // bit 16 Channel-x selection
            unsigned CHSEL17 : 1; // bit 17 Channel-x selection
            unsigned CHSEL18 : 1; // bit 18 Channel-x selection
            unsigned         : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned CHSEL0_POS = 0;
        static constexpr unsigned CHSEL0_MASK = 0x00000001;
        static constexpr unsigned CHSEL0(unsigned value) { return (value << 0); }
        static constexpr unsigned CHSEL1_POS = 1;
        static constexpr unsigned CHSEL1_MASK = 0x00000002;
        static constexpr unsigned CHSEL1(unsigned value) { return (value << 1); }
        static constexpr unsigned CHSEL2_POS = 2;
        static constexpr unsigned CHSEL2_MASK = 0x00000004;
        static constexpr unsigned CHSEL2(unsigned value) { return (value << 2); }
        static constexpr unsigned CHSEL3_POS = 3;
        static constexpr unsigned CHSEL3_MASK = 0x00000008;
        static constexpr unsigned CHSEL3(unsigned value) { return (value << 3); }
        static constexpr unsigned CHSEL4_POS = 4;
        static constexpr unsigned CHSEL4_MASK = 0x00000010;
        static constexpr unsigned CHSEL4(unsigned value) { return (value << 4); }
        static constexpr unsigned CHSEL5_POS = 5;
        static constexpr unsigned CHSEL5_MASK = 0x00000020;
        static constexpr unsigned CHSEL5(unsigned value) { return (value << 5); }
        static constexpr unsigned CHSEL6_POS = 6;
        static constexpr unsigned CHSEL6_MASK = 0x00000040;
        static constexpr unsigned CHSEL6(unsigned value) { return (value << 6); }
        static constexpr unsigned CHSEL7_POS = 7;
        static constexpr unsigned CHSEL7_MASK = 0x00000080;
        static constexpr unsigned CHSEL7(unsigned value) { return (value << 7); }
        static constexpr unsigned CHSEL8_POS = 8;
        static constexpr unsigned CHSEL8_MASK = 0x00000100;
        static constexpr unsigned CHSEL8(unsigned value) { return (value << 8); }
        static constexpr unsigned CHSEL9_POS = 9;
        static constexpr unsigned CHSEL9_MASK = 0x00000200;
        static constexpr unsigned CHSEL9(unsigned value) { return (value << 9); }
        static constexpr unsigned CHSEL10_POS = 10;
        static constexpr unsigned CHSEL10_MASK = 0x00000400;
        static constexpr unsigned CHSEL10(unsigned value) { return (value << 10); }
        static constexpr unsigned CHSEL11_POS = 11;
        static constexpr unsigned CHSEL11_MASK = 0x00000800;
        static constexpr unsigned CHSEL11(unsigned value) { return (value << 11); }
        static constexpr unsigned CHSEL12_POS = 12;
        static constexpr unsigned CHSEL12_MASK = 0x00001000;
        static constexpr unsigned CHSEL12(unsigned value) { return (value << 12); }
        static constexpr unsigned CHSEL13_POS = 13;
        static constexpr unsigned CHSEL13_MASK = 0x00002000;
        static constexpr unsigned CHSEL13(unsigned value) { return (value << 13); }
        static constexpr unsigned CHSEL14_POS = 14;
        static constexpr unsigned CHSEL14_MASK = 0x00004000;
        static constexpr unsigned CHSEL14(unsigned value) { return (value << 14); }
        static constexpr unsigned CHSEL15_POS = 15;
        static constexpr unsigned CHSEL15_MASK = 0x00008000;
        static constexpr unsigned CHSEL15(unsigned value) { return (value << 15); }
        static constexpr unsigned CHSEL16_POS = 16;
        static constexpr unsigned CHSEL16_MASK = 0x00010000;
        static constexpr unsigned CHSEL16(unsigned value) { return (value << 16); }
        static constexpr unsigned CHSEL17_POS = 17;
        static constexpr unsigned CHSEL17_MASK = 0x00020000;
        static constexpr unsigned CHSEL17(unsigned value) { return (value << 17); }
        static constexpr unsigned CHSEL18_POS = 18;
        static constexpr unsigned CHSEL18_MASK = 0x00040000;
        static constexpr unsigned CHSEL18(unsigned value) { return (value << 18); }
    } CHSELR;

    uint8_t Reserved3[20];

    volatile union DR_T // DR: data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DATA : 16; // bits 0..15 Converted data
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0x0000ffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
    } DR;

    uint8_t Reserved4[708];

    volatile union CCR_T // CCR: common configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR_BIT_T
        {
            unsigned        : 22; // bits 0..21 unused
            unsigned VREFEN : 1; // bit 22 Temperature sensor and VREFINT enable
            unsigned TSEN   : 1; // bit 23 Temperature sensor enable
            unsigned VBATEN : 1; // bit 24 VBAT enable
            unsigned        : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned VREFEN_POS = 22;
        static constexpr unsigned VREFEN_MASK = 0x00400000;
        static constexpr unsigned VREFEN(unsigned value) { return (value << 22); }
        static constexpr unsigned TSEN_POS = 23;
        static constexpr unsigned TSEN_MASK = 0x00800000;
        static constexpr unsigned TSEN(unsigned value) { return (value << 23); }
        static constexpr unsigned VBATEN_POS = 24;
        static constexpr unsigned VBATEN_MASK = 0x01000000;
        static constexpr unsigned VBATEN(unsigned value) { return (value << 24); }
    } CCR;

}; // struct ADC_T

static_assert(sizeof(ADC_T) == ADC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp