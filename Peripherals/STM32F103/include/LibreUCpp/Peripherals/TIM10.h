#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TIM10_T
{
    static constexpr size_t INSTANCE_SIZE = 56;
    static constexpr size_t PADDED_INSTANCE_SIZE = 56;
    static constexpr intptr_t BASE_ADDRESS_TIM10 = 0x40015000;
    static constexpr intptr_t BASE_ADDRESS_TIM11 = 0x40015400;
    static constexpr intptr_t BASE_ADDRESS_TIM13 = 0x40001c00;
    static constexpr intptr_t BASE_ADDRESS_TIM14 = 0x40002000;

    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DIER = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EGR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CCMR1_Output = 0x18;
    static constexpr intptr_t ADDR_OFFSET_CCER = 0x20;
    static constexpr intptr_t ADDR_OFFSET_CNT = 0x24;
    static constexpr intptr_t ADDR_OFFSET_PSC = 0x28;
    static constexpr intptr_t ADDR_OFFSET_ARR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_CCR1 = 0x34;

    volatile union CR1_T // CR1: control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned CEN  : 1; // bit 0 Counter enable
            unsigned UDIS : 1; // bit 1 Update disable
            unsigned URS  : 1; // bit 2 Update request source
            unsigned      : 4; // bits 3..6 unused
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

    uint8_t Reserved1[4];

    volatile union DIER_T // DIER: DMA/Interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIER_BIT_T
        {
            unsigned UIE   : 1; // bit 0 Update interrupt enable
            unsigned CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned UIE_POS = 0;
        static constexpr unsigned UIE_MASK = 0x00000001;
        static constexpr unsigned UIE(unsigned value) { return (value << 0); }
        static constexpr unsigned CC1IE_POS = 1;
        static constexpr unsigned CC1IE_MASK = 0x00000002;
        static constexpr unsigned CC1IE(unsigned value) { return (value << 1); }
    } DIER;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned UIF   : 1; // bit 0 Update interrupt flag
            unsigned CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
            unsigned       : 7; // bits 2..8 unused
            unsigned CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
            unsigned       : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned UIF_POS = 0;
        static constexpr unsigned UIF_MASK = 0x00000001;
        static constexpr unsigned UIF(unsigned value) { return (value << 0); }
        static constexpr unsigned CC1IF_POS = 1;
        static constexpr unsigned CC1IF_MASK = 0x00000002;
        static constexpr unsigned CC1IF(unsigned value) { return (value << 1); }
        static constexpr unsigned CC1OF_POS = 9;
        static constexpr unsigned CC1OF_MASK = 0x00000200;
        static constexpr unsigned CC1OF(unsigned value) { return (value << 9); }
    } SR;

    volatile union EGR_T // EGR: event generation register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EGR_BIT_T
        {
            unsigned UG   : 1; // bit 0 Update generation
            unsigned CC1G : 1; // bit 1 Capture/compare 1 generation
            unsigned      : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned UG_POS = 0;
        static constexpr unsigned UG_MASK = 0x00000001;
        static constexpr unsigned UG(unsigned value) { return (value << 0); }
        static constexpr unsigned CC1G_POS = 1;
        static constexpr unsigned CC1G_MASK = 0x00000002;
        static constexpr unsigned CC1G(unsigned value) { return (value << 1); }
    } EGR;

    volatile union CCMR1_Output_T // CCMR1_Output: capture/compare mode register (output mode) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCMR1_Output_BIT_T
        {
            unsigned CC1S  : 2; // bits 0..1 Capture/Compare 1 selection
            unsigned       : 1; // bit 2 unused
            unsigned OC1PE : 1; // bit 3 Output Compare 1 preload enable
            unsigned OC1M  : 3; // bits 4..6 Output Compare 1 mode
            unsigned       : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned CC1S_POS = 0;
        static constexpr unsigned CC1S_MASK = 0x00000003;
        static constexpr unsigned CC1S(unsigned value) { return (value << 0); }
        static constexpr unsigned OC1PE_POS = 3;
        static constexpr unsigned OC1PE_MASK = 0x00000008;
        static constexpr unsigned OC1PE(unsigned value) { return (value << 3); }
        static constexpr unsigned OC1M_POS = 4;
        static constexpr unsigned OC1M_MASK = 0x00000070;
        static constexpr unsigned OC1M(unsigned value) { return (value << 4); }
    } CCMR1_Output;

    uint8_t Reserved2[4];

    volatile union CCER_T // CCER: capture/compare enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCER_BIT_T
        {
            unsigned CC1E  : 1; // bit 0 Capture/Compare 1 output enable
            unsigned CC1P  : 1; // bit 1 Capture/Compare 1 output Polarity
            unsigned       : 1; // bit 2 unused
            unsigned CC1NP : 1; // bit 3 Capture/Compare 1 output Polarity
            unsigned       : 28; // bits 4..31 unused    
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

    uint8_t Reserved3[4];

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

}; // struct TIM10_T

static_assert(sizeof(TIM10_T) == TIM10_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp