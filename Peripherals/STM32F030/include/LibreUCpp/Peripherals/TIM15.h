#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TIM15_T
{
    static constexpr size_t INSTANCE_SIZE = 80;
    static constexpr size_t PADDED_INSTANCE_SIZE = 80;
    static constexpr intptr_t BASE_ADDRESS = 0x40014000;

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
    static constexpr intptr_t ADDR_OFFSET_RCR = 0x30;
    static constexpr intptr_t ADDR_OFFSET_CCR1 = 0x34;
    static constexpr intptr_t ADDR_OFFSET_CCR2 = 0x38;
    static constexpr intptr_t ADDR_OFFSET_BDTR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_DCR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_DMAR = 0x4c;

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
            unsigned CCPC  : 1; // bit 0 Capture/compare preloaded control
            unsigned       : 1; // bit 1 unused
            unsigned CCUS  : 1; // bit 2 Capture/compare control update selection
            unsigned CCDS  : 1; // bit 3 Capture/compare DMA selection
            unsigned MMS   : 3; // bits 4..6 Master mode selection
            unsigned       : 1; // bit 7 unused
            unsigned OIS1  : 1; // bit 8 Output Idle state 1
            unsigned OIS1N : 1; // bit 9 Output Idle state 1
            unsigned OIS2  : 1; // bit 10 Output Idle state 2
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned CCPC_POS = 0;
        static constexpr unsigned CCPC_MASK = 0x00000001;
        static constexpr unsigned CCPC(unsigned value) { return (value << 0); }
        static constexpr unsigned CCUS_POS = 2;
        static constexpr unsigned CCUS_MASK = 0x00000004;
        static constexpr unsigned CCUS(unsigned value) { return (value << 2); }
        static constexpr unsigned CCDS_POS = 3;
        static constexpr unsigned CCDS_MASK = 0x00000008;
        static constexpr unsigned CCDS(unsigned value) { return (value << 3); }
        static constexpr unsigned MMS_POS = 4;
        static constexpr unsigned MMS_MASK = 0x00000070;
        static constexpr unsigned MMS(unsigned value) { return (value << 4); }
        static constexpr unsigned OIS1_POS = 8;
        static constexpr unsigned OIS1_MASK = 0x00000100;
        static constexpr unsigned OIS1(unsigned value) { return (value << 8); }
        static constexpr unsigned OIS1N_POS = 9;
        static constexpr unsigned OIS1N_MASK = 0x00000200;
        static constexpr unsigned OIS1N(unsigned value) { return (value << 9); }
        static constexpr unsigned OIS2_POS = 10;
        static constexpr unsigned OIS2_MASK = 0x00000400;
        static constexpr unsigned OIS2(unsigned value) { return (value << 10); }
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
            unsigned       : 2; // bits 3..4 unused
            unsigned COMIE : 1; // bit 5 COM interrupt enable
            unsigned TIE   : 1; // bit 6 Trigger interrupt enable
            unsigned BIE   : 1; // bit 7 Break interrupt enable
            unsigned UDE   : 1; // bit 8 Update DMA request enable
            unsigned CC1DE : 1; // bit 9 Capture/Compare 1 DMA request enable
            unsigned CC2DE : 1; // bit 10 Capture/Compare 2 DMA request enable
            unsigned       : 3; // bits 11..13 unused
            unsigned TDE   : 1; // bit 14 Trigger DMA request enable
            unsigned       : 17; // bits 15..31 unused    
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
        static constexpr unsigned COMIE_POS = 5;
        static constexpr unsigned COMIE_MASK = 0x00000020;
        static constexpr unsigned COMIE(unsigned value) { return (value << 5); }
        static constexpr unsigned TIE_POS = 6;
        static constexpr unsigned TIE_MASK = 0x00000040;
        static constexpr unsigned TIE(unsigned value) { return (value << 6); }
        static constexpr unsigned BIE_POS = 7;
        static constexpr unsigned BIE_MASK = 0x00000080;
        static constexpr unsigned BIE(unsigned value) { return (value << 7); }
        static constexpr unsigned UDE_POS = 8;
        static constexpr unsigned UDE_MASK = 0x00000100;
        static constexpr unsigned UDE(unsigned value) { return (value << 8); }
        static constexpr unsigned CC1DE_POS = 9;
        static constexpr unsigned CC1DE_MASK = 0x00000200;
        static constexpr unsigned CC1DE(unsigned value) { return (value << 9); }
        static constexpr unsigned CC2DE_POS = 10;
        static constexpr unsigned CC2DE_MASK = 0x00000400;
        static constexpr unsigned CC2DE(unsigned value) { return (value << 10); }
        static constexpr unsigned TDE_POS = 14;
        static constexpr unsigned TDE_MASK = 0x00004000;
        static constexpr unsigned TDE(unsigned value) { return (value << 14); }
    } DIER;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned UIF   : 1; // bit 0 Update interrupt flag
            unsigned CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
            unsigned CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
            unsigned       : 2; // bits 3..4 unused
            unsigned COMIF : 1; // bit 5 COM interrupt flag
            unsigned TIF   : 1; // bit 6 Trigger interrupt flag
            unsigned BIF   : 1; // bit 7 Break interrupt flag
            unsigned       : 1; // bit 8 unused
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
        static constexpr unsigned COMIF_POS = 5;
        static constexpr unsigned COMIF_MASK = 0x00000020;
        static constexpr unsigned COMIF(unsigned value) { return (value << 5); }
        static constexpr unsigned TIF_POS = 6;
        static constexpr unsigned TIF_MASK = 0x00000040;
        static constexpr unsigned TIF(unsigned value) { return (value << 6); }
        static constexpr unsigned BIF_POS = 7;
        static constexpr unsigned BIF_MASK = 0x00000080;
        static constexpr unsigned BIF(unsigned value) { return (value << 7); }
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
            unsigned      : 2; // bits 3..4 unused
            unsigned COMG : 1; // bit 5 Capture/Compare control update generation
            unsigned TG   : 1; // bit 6 Trigger generation
            unsigned BG   : 1; // bit 7 Break generation
            unsigned      : 24; // bits 8..31 unused    
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
        static constexpr unsigned COMG_POS = 5;
        static constexpr unsigned COMG_MASK = 0x00000020;
        static constexpr unsigned COMG(unsigned value) { return (value << 5); }
        static constexpr unsigned TG_POS = 6;
        static constexpr unsigned TG_MASK = 0x00000040;
        static constexpr unsigned TG(unsigned value) { return (value << 6); }
        static constexpr unsigned BG_POS = 7;
        static constexpr unsigned BG_MASK = 0x00000080;
        static constexpr unsigned BG(unsigned value) { return (value << 7); }
    } EGR;

    volatile union CCMR1_Output_T // CCMR1_Output: capture/compare mode register (output mode) 
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
            unsigned CC1NE : 1; // bit 2 Capture/Compare 1 complementary output enable
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
        static constexpr unsigned CC1NE_POS = 2;
        static constexpr unsigned CC1NE_MASK = 0x00000004;
        static constexpr unsigned CC1NE(unsigned value) { return (value << 2); }
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

    volatile union RCR_T // RCR: repetition counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RCR_BIT_T
        {
            unsigned REP : 8; // bits 0..7 Repetition counter value
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned REP_POS = 0;
        static constexpr unsigned REP_MASK = 0x000000ff;
        static constexpr unsigned REP(unsigned value) { return (value << 0); }
    } RCR;

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

    uint8_t Reserved2[8];

    volatile union BDTR_T // BDTR: break and dead-time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BDTR_BIT_T
        {
            unsigned DTG  : 8; // bits 0..7 Dead-time generator setup
            unsigned LOCK : 2; // bits 8..9 Lock configuration
            unsigned OSSI : 1; // bit 10 Off-state selection for Idle mode
            unsigned OSSR : 1; // bit 11 Off-state selection for Run mode
            unsigned BKE  : 1; // bit 12 Break enable
            unsigned BKP  : 1; // bit 13 Break polarity
            unsigned AOE  : 1; // bit 14 Automatic output enable
            unsigned MOE  : 1; // bit 15 Main output enable
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DTG_POS = 0;
        static constexpr unsigned DTG_MASK = 0x000000ff;
        static constexpr unsigned DTG(unsigned value) { return (value << 0); }
        static constexpr unsigned LOCK_POS = 8;
        static constexpr unsigned LOCK_MASK = 0x00000300;
        static constexpr unsigned LOCK(unsigned value) { return (value << 8); }
        static constexpr unsigned OSSI_POS = 10;
        static constexpr unsigned OSSI_MASK = 0x00000400;
        static constexpr unsigned OSSI(unsigned value) { return (value << 10); }
        static constexpr unsigned OSSR_POS = 11;
        static constexpr unsigned OSSR_MASK = 0x00000800;
        static constexpr unsigned OSSR(unsigned value) { return (value << 11); }
        static constexpr unsigned BKE_POS = 12;
        static constexpr unsigned BKE_MASK = 0x00001000;
        static constexpr unsigned BKE(unsigned value) { return (value << 12); }
        static constexpr unsigned BKP_POS = 13;
        static constexpr unsigned BKP_MASK = 0x00002000;
        static constexpr unsigned BKP(unsigned value) { return (value << 13); }
        static constexpr unsigned AOE_POS = 14;
        static constexpr unsigned AOE_MASK = 0x00004000;
        static constexpr unsigned AOE(unsigned value) { return (value << 14); }
        static constexpr unsigned MOE_POS = 15;
        static constexpr unsigned MOE_MASK = 0x00008000;
        static constexpr unsigned MOE(unsigned value) { return (value << 15); }
    } BDTR;

    volatile union DCR_T // DCR: DMA control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCR_BIT_T
        {
            unsigned DBA : 5; // bits 0..4 DMA base address
            unsigned     : 3; // bits 5..7 unused
            unsigned DBL : 5; // bits 8..12 DMA burst length
            unsigned     : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned DBA_POS = 0;
        static constexpr unsigned DBA_MASK = 0x0000001f;
        static constexpr unsigned DBA(unsigned value) { return (value << 0); }
        static constexpr unsigned DBL_POS = 8;
        static constexpr unsigned DBL_MASK = 0x00001f00;
        static constexpr unsigned DBL(unsigned value) { return (value << 8); }
    } DCR;

    volatile union DMAR_T // DMAR: DMA address for full transfer 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMAR_BIT_T
        {
            unsigned DMAB : 16; // bits 0..15 DMA register for burst accesses
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DMAB_POS = 0;
        static constexpr unsigned DMAB_MASK = 0x0000ffff;
        static constexpr unsigned DMAB(unsigned value) { return (value << 0); }
    } DMAR;

}; // struct TIM15_T

static_assert(sizeof(TIM15_T) == TIM15_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp