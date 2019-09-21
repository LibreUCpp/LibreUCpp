#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TIM6_T
{
    static constexpr size_t INSTANCE_SIZE = 48;
    static constexpr intptr_t BASE_ADDRESS = 0x40001000;

    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DIER = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EGR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CNT = 0x24;
    static constexpr intptr_t ADDR_OFFSET_PSC = 0x28;
    static constexpr intptr_t ADDR_OFFSET_ARR = 0x2c;

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
            unsigned      : 24; // bits 8..31 unused    
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
            unsigned UIE : 1; // bit 0 Update interrupt enable
            unsigned     : 7; // bits 1..7 unused
            unsigned UDE : 1; // bit 8 Update DMA request enable
            unsigned     : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned UIE_POS = 0;
        static constexpr unsigned UIE_MASK = 0x00000001;
        static constexpr unsigned UIE(unsigned value) { return (value << 0); }
        static constexpr unsigned UDE_POS = 8;
        static constexpr unsigned UDE_MASK = 0x00000100;
        static constexpr unsigned UDE(unsigned value) { return (value << 8); }
    } DIER;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned UIF : 1; // bit 0 Update interrupt flag
            unsigned     : 31; // bits 1..31 unused    
        } bit;
    
        static constexpr unsigned UIF_POS = 0;
        static constexpr unsigned UIF_MASK = 0x00000001;
        static constexpr unsigned UIF(unsigned value) { return (value << 0); }
    } SR;

    volatile union EGR_T // EGR: event generation register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EGR_BIT_T
        {
            unsigned UG : 1; // bit 0 Update generation
            unsigned    : 31; // bits 1..31 unused    
        } bit;
    
        static constexpr unsigned UG_POS = 0;
        static constexpr unsigned UG_MASK = 0x00000001;
        static constexpr unsigned UG(unsigned value) { return (value << 0); }
    } EGR;

    uint8_t Reserved2[12];

    volatile union CNT_T // CNT: counter 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNT_BIT_T
        {
            unsigned CNT : 16; // bits 0..15 Low counter value
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
            unsigned ARR : 16; // bits 0..15 Low Auto-reload value
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned ARR_POS = 0;
        static constexpr unsigned ARR_MASK = 0x0000ffff;
        static constexpr unsigned ARR(unsigned value) { return (value << 0); }
    } ARR;

}; // struct TIM6_T

static_assert(sizeof(TIM6_T) == TIM6_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp