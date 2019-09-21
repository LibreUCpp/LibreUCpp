#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TIM12_T
{
    static constexpr size_t INSTANCE_SIZE = 60;
    static constexpr intptr_t BASE_ADDRESS_TIM12 = 0x40001800;
    static constexpr intptr_t BASE_ADDRESS_TIM9 = 0x40014000;

    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SMCR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DIER = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EGR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CCMR1_Output = 0x18;
    static constexpr intptr_t ADDR_OFFSET_CCER = 0x20;
    static constexpr intptr_t ADDR_OFFSET_CNT = 0x24;
    static constexpr intptr_t ADDR_OFFSET_PSC = 0x28;
    static constexpr intptr_t ADDR_OFFSET_ARR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_CCR1 = 0x34;
    static constexpr intptr_t ADDR_OFFSET_CCR2 = 0x38;

    volatile union CR1_T // CR1: control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned CEN  : 1; // bit 0 Counter enable
            unsigned UDIS : 1; // bit 1 Update disable
            unsigned URS  : 1; // bit 2 Update request source
            unsigned OPM  : 1; // bit 3 One-pulse mode
            unsigned      : 3; // bits 4..6 unused
            unsigned ARPE : 1; // bit 7 Auto-reload preload enable
            unsigned CKD  : 2; // bits 8..9 Clock division
            unsigned      : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned CEN_POS = 0;
        static constexpr unsigned CEN_MASK = 0x00000001;
        static constexpr unsigned CEN(unsigned value) { return (value << 0); }
        static constexpr unsigned UDIS_POS = 1;
        static constexpr unsigned UDIS_MASK = 0x00000002;
        static constexpr unsigned UDIS(unsigned value) { return (value << 1); }
        static constexpr unsigned URS_POS = 2;
        static constexpr unsigned URS_MASK = 0x00000004;
        static constexpr unsigned URS(unsigned value) { return (value << 2); }
        static constexpr unsigned OPM_POS = 3;
        static constexpr unsigned OPM_MASK = 0x00000008;
        static constexpr unsigned OPM(unsigned value) { return (value << 3); }
        static constexpr unsigned ARPE_POS = 7;
        static constexpr unsigned ARPE_MASK = 0x00000080;
        static constexpr unsigned ARPE(unsigned value) { return (value << 7); }
        static constexpr unsigned CKD_POS = 8;
        static constexpr unsigned CKD_MASK = 0x00000300;
        static constexpr unsigned CKD(unsigned value) { return (value << 8); }
    } CR1;

    volatile union CR2_T // CR2: control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned     : 4; // bits 0..3 unused
            unsigned MMS : 3; // bits 4..6 Master mode selection
            unsigned     : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned MMS_POS = 4;
        static constexpr unsigned MMS_MASK = 0x00000070;
        static constexpr unsigned MMS(unsigned value) { return (value << 4); }
    } CR2;

    volatile union SMCR_T // SMCR: slave mode control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SMCR_BIT_T
        {
            unsigned SMS : 3; // bits 0..2 Slave mode selection
            unsigned     : 1; // bit 3 unused
            unsigned TS  : 3; // bits 4..6 Trigger selection
            unsigned MSM : 1; // bit 7 Master/Slave mode
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned SMS_POS = 0;
        static constexpr unsigned SMS_MASK = 0x00000007;
        static constexpr unsigned SMS(unsigned value) { return (value << 0); }
        static constexpr unsigned TS_POS = 4;
        static constexpr unsigned TS_MASK = 0x00000070;
        static constexpr unsigned TS(unsigned value) { return (value << 4); }
        static constexpr unsigned MSM_POS = 7;
        static constexpr unsigned MSM_MASK = 0x00000080;
        static constexpr unsigned MSM(unsigned value) { return (value << 7); }
    } SMCR;

    volatile union DIER_T // DIER: DMA/Interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIER_BIT_T
        {
            unsigned UIE   : 1; // bit 0 Update interrupt enable
            unsigned CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
            unsigned CC2IE : 1; // bit 2 Capture/Compare 2 interrupt enable
            unsigned       : 3; // bits 3..5 unused
            unsigned TIE   : 1; // bit 6 Trigger interrupt enable
            unsigned       : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned UIE_POS = 0;
        static constexpr unsigned UIE_MASK = 0x00000001;
        static constexpr unsigned UIE(unsigned value) { return (value << 0); }
        static constexpr unsigned CC1IE_POS = 1;
        static constexpr unsigned CC1IE_MASK = 0x00000002;
        static constexpr unsigned CC1IE(unsigned value) { return (value << 1); }
        static constexpr unsigned CC2IE_POS = 2;
        static constexpr unsigned CC2IE_MASK = 0x00000004;
        static constexpr unsigned CC2IE(unsigned value) { return (value << 2); }
        static constexpr unsigned TIE_POS = 6;
        static constexpr unsigned TIE_MASK = 0x00000040;
        static constexpr unsigned TIE(unsigned value) { return (value << 6); }
    } DIER;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned UIF   : 1; // bit 0 Update interrupt flag
            unsigned CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
            unsigned CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
            unsigned       : 3; // bits 3..5 unused
            unsigned TIF   : 1; // bit 6 Trigger interrupt flag
            unsigned       : 2; // bits 7..8 unused
            unsigned CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
            unsigned CC2OF : 1; // bit 10 Capture/compare 2 overcapture flag
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned UIF_POS = 0;
        static constexpr unsigned UIF_MASK = 0x00000001;
        static constexpr unsigned UIF(unsigned value) { return (value << 0); }
        static constexpr unsigned CC1IF_POS = 1;
        static constexpr unsigned CC1IF_MASK = 0x00000002;
        static constexpr unsigned CC1IF(unsigned value) { return (value << 1); }
        static constexpr unsigned CC2IF_POS = 2;
        static constexpr unsigned CC2IF_MASK = 0x00000004;
        static constexpr unsigned CC2IF(unsigned value) { return (value << 2); }
        static constexpr unsigned TIF_POS = 6;
        static constexpr unsigned TIF_MASK = 0x00000040;
        static constexpr unsigned TIF(unsigned value) { return (value << 6); }
        static constexpr unsigned CC1OF_POS = 9;
        static constexpr unsigned CC1OF_MASK = 0x00000200;
        static constexpr unsigned CC1OF(unsigned value) { return (value << 9); }
        static constexpr unsigned CC2OF_POS = 10;
        static constexpr unsigned CC2OF_MASK = 0x00000400;
        static constexpr unsigned CC2OF(unsigned value) { return (value << 10); }
    } SR;

    volatile union EGR_T // EGR: event generation register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EGR_BIT_T
        {
            unsigned UG   : 1; // bit 0 Update generation
            unsigned CC1G : 1; // bit 1 Capture/compare 1 generation
            unsigned CC2G : 1; // bit 2 Capture/compare 2 generation
            unsigned      : 3; // bits 3..5 unused
            unsigned TG   : 1; // bit 6 Trigger generation
            unsigned      : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned UG_POS = 0;
        static constexpr unsigned UG_MASK = 0x00000001;
        static constexpr unsigned UG(unsigned value) { return (value << 0); }
        static constexpr unsigned CC1G_POS = 1;
        static constexpr unsigned CC1G_MASK = 0x00000002;
        static constexpr unsigned CC1G(unsigned value) { return (value << 1); }
        static constexpr unsigned CC2G_POS = 2;
        static constexpr unsigned CC2G_MASK = 0x00000004;
        static constexpr unsigned CC2G(unsigned value) { return (value << 2); }
        static constexpr unsigned TG_POS = 6;
        static constexpr unsigned TG_MASK = 0x00000040;
        static constexpr unsigned TG(unsigned value) { return (value << 6); }
    } EGR;

    volatile union CCMR1_Output_T // CCMR1_Output: capture/compare mode register 1 (output mode) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCMR1_Output_BIT_T
        {
            unsigned CC1S  : 2; // bits 0..1 Capture/Compare 1 selection
            unsigned OC1FE : 1; // bit 2 Output Compare 1 fast enable
            unsigned OC1PE : 1; // bit 3 Output Compare 1 preload enable
            unsigned OC1M  : 3; // bits 4..6 Output Compare 1 mode
            unsigned       : 1; // bit 7 unused
            unsigned CC2S  : 2; // bits 8..9 Capture/Compare 2 selection
            unsigned OC2FE : 1; // bit 10 Output Compare 2 fast enable
            unsigned OC2PE : 1; // bit 11 Output Compare 2 preload enable
            unsigned OC2M  : 3; // bits 12..14 Output Compare 2 mode
            unsigned       : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned CC1S_POS = 0;
        static constexpr unsigned CC1S_MASK = 0x00000003;
        static constexpr unsigned CC1S(unsigned value) { return (value << 0); }
        static constexpr unsigned OC1FE_POS = 2;
        static constexpr unsigned OC1FE_MASK = 0x00000004;
        static constexpr unsigned OC1FE(unsigned value) { return (value << 2); }
        static constexpr unsigned OC1PE_POS = 3;
        static constexpr unsigned OC1PE_MASK = 0x00000008;
        static constexpr unsigned OC1PE(unsigned value) { return (value << 3); }
        static constexpr unsigned OC1M_POS = 4;
        static constexpr unsigned OC1M_MASK = 0x00000070;
        static constexpr unsigned OC1M(unsigned value) { return (value << 4); }
        static constexpr unsigned CC2S_POS = 8;
        static constexpr unsigned CC2S_MASK = 0x00000300;
        static constexpr unsigned CC2S(unsigned value) { return (value << 8); }
        static constexpr unsigned OC2FE_POS = 10;
        static constexpr unsigned OC2FE_MASK = 0x00000400;
        static constexpr unsigned OC2FE(unsigned value) { return (value << 10); }
        static constexpr unsigned OC2PE_POS = 11;
        static constexpr unsigned OC2PE_MASK = 0x00000800;
        static constexpr unsigned OC2PE(unsigned value) { return (value << 11); }
        static constexpr unsigned OC2M_POS = 12;
        static constexpr unsigned OC2M_MASK = 0x00007000;
        static constexpr unsigned OC2M(unsigned value) { return (value << 12); }
    } CCMR1_Output;

    uint8_t Reserved1[4];

    volatile union CCER_T // CCER: capture/compare enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCER_BIT_T
        {
            unsigned CC1E  : 1; // bit 0 Capture/Compare 1 output enable
            unsigned CC1P  : 1; // bit 1 Capture/Compare 1 output Polarity
            unsigned       : 1; // bit 2 unused
            unsigned CC1NP : 1; // bit 3 Capture/Compare 1 output Polarity
            unsigned CC2E  : 1; // bit 4 Capture/Compare 2 output enable
            unsigned CC2P  : 1; // bit 5 Capture/Compare 2 output Polarity
            unsigned       : 1; // bit 6 unused
            unsigned CC2NP : 1; // bit 7 Capture/Compare 2 output Polarity
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned CC1E_POS = 0;
        static constexpr unsigned CC1E_MASK = 0x00000001;
        static constexpr unsigned CC1E(unsigned value) { return (value << 0); }
        static constexpr unsigned CC1P_POS = 1;
        static constexpr unsigned CC1P_MASK = 0x00000002;
        static constexpr unsigned CC1P(unsigned value) { return (value << 1); }
        static constexpr unsigned CC1NP_POS = 3;
        static constexpr unsigned CC1NP_MASK = 0x00000008;
        static constexpr unsigned CC1NP(unsigned value) { return (value << 3); }
        static constexpr unsigned CC2E_POS = 4;
        static constexpr unsigned CC2E_MASK = 0x00000010;
        static constexpr unsigned CC2E(unsigned value) { return (value << 4); }
        static constexpr unsigned CC2P_POS = 5;
        static constexpr unsigned CC2P_MASK = 0x00000020;
        static constexpr unsigned CC2P(unsigned value) { return (value << 5); }
        static constexpr unsigned CC2NP_POS = 7;
        static constexpr unsigned CC2NP_MASK = 0x00000080;
        static constexpr unsigned CC2NP(unsigned value) { return (value << 7); }
    } CCER;

    volatile union CNT_T // CNT: counter 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNT_BIT_T
        {
            unsigned CNT : 16; // bits 0..15 counter value
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CNT_POS = 0;
        static constexpr unsigned CNT_MASK = 0x0000ffff;
        static constexpr unsigned CNT(unsigned value) { return (value << 0); }
    } CNT;

    volatile union PSC_T // PSC: prescaler 
    {
        uint32_t reg;
        struct __attribute__((packed)) PSC_BIT_T
        {
            unsigned PSC : 16; // bits 0..15 Prescaler value
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned PSC_POS = 0;
        static constexpr unsigned PSC_MASK = 0x0000ffff;
        static constexpr unsigned PSC(unsigned value) { return (value << 0); }
    } PSC;

    volatile union ARR_T // ARR: auto-reload register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ARR_BIT_T
        {
            unsigned ARR : 16; // bits 0..15 Auto-reload value
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned ARR_POS = 0;
        static constexpr unsigned ARR_MASK = 0x0000ffff;
        static constexpr unsigned ARR(unsigned value) { return (value << 0); }
    } ARR;

    uint8_t Reserved2[4];

    volatile union CCR1_T // CCR1: capture/compare register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR1_BIT_T
        {
            unsigned CCR1 : 16; // bits 0..15 Capture/Compare 1 value
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CCR1_POS = 0;
        static constexpr unsigned CCR1_MASK = 0x0000ffff;
        static constexpr unsigned CCR1(unsigned value) { return (value << 0); }
    } CCR1;

    volatile union CCR2_T // CCR2: capture/compare register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR2_BIT_T
        {
            unsigned CCR2 : 16; // bits 0..15 Capture/Compare 2 value
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CCR2_POS = 0;
        static constexpr unsigned CCR2_MASK = 0x0000ffff;
        static constexpr unsigned CCR2(unsigned value) { return (value << 0); }
    } CCR2;

}; // struct TIM12_T

static_assert(sizeof(TIM12_T) == TIM12_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp