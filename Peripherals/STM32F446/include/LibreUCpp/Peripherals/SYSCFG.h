#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SYSCFG_T
{
    static constexpr size_t INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS = 0x40013800;

    static constexpr intptr_t ADDR_OFFSET_MEMRM = 0x00;
    static constexpr intptr_t ADDR_OFFSET_PMC = 0x04;
    static constexpr intptr_t ADDR_OFFSET_EXTICR1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_EXTICR2 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_EXTICR3 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EXTICR4 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CMPCR = 0x20;

    volatile union MEMRM_T // MEMRM: memory remap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MEMRM_BIT_T
        {
            unsigned MEM_MODE : 3; // bits 0..2 Memory mapping selection
            unsigned          : 5; // bits 3..7 unused
            unsigned FB_MODE  : 1; // bit 8 Flash bank mode selection
            unsigned          : 1; // bit 9 unused
            unsigned SWP_FMC  : 2; // bits 10..11 FMC memory mapping swap
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned MEM_MODE_POS = 0;
        static constexpr unsigned MEM_MODE_MASK = 0x00000007;
        static constexpr unsigned MEM_MODE(unsigned value) { return (value << 0); }
        static constexpr unsigned FB_MODE_POS = 8;
        static constexpr unsigned FB_MODE_MASK = 0x00000100;
        static constexpr unsigned FB_MODE(unsigned value) { return (value << 8); }
        static constexpr unsigned SWP_FMC_POS = 10;
        static constexpr unsigned SWP_FMC_MASK = 0x00000c00;
        static constexpr unsigned SWP_FMC(unsigned value) { return (value << 10); }
    } MEMRM;

    volatile union PMC_T // PMC: peripheral mode configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PMC_BIT_T
        {
            unsigned              : 16; // bits 0..15 unused
            unsigned ADC1DC2      : 1; // bit 16 ADC1DC2
            unsigned ADC2DC2      : 1; // bit 17 ADC2DC2
            unsigned ADC3DC2      : 1; // bit 18 ADC3DC2
            unsigned              : 4; // bits 19..22 unused
            unsigned MII_RMII_SEL : 1; // bit 23 Ethernet PHY interface selection
            unsigned              : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned ADC1DC2_POS = 16;
        static constexpr unsigned ADC1DC2_MASK = 0x00010000;
        static constexpr unsigned ADC1DC2(unsigned value) { return (value << 16); }
        static constexpr unsigned ADC2DC2_POS = 17;
        static constexpr unsigned ADC2DC2_MASK = 0x00020000;
        static constexpr unsigned ADC2DC2(unsigned value) { return (value << 17); }
        static constexpr unsigned ADC3DC2_POS = 18;
        static constexpr unsigned ADC3DC2_MASK = 0x00040000;
        static constexpr unsigned ADC3DC2(unsigned value) { return (value << 18); }
        static constexpr unsigned MII_RMII_SEL_POS = 23;
        static constexpr unsigned MII_RMII_SEL_MASK = 0x00800000;
        static constexpr unsigned MII_RMII_SEL(unsigned value) { return (value << 23); }
    } PMC;

    volatile union EXTICR1_T // EXTICR1: external interrupt configuration register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR1_BIT_T
        {
            unsigned EXTI0 : 4; // bits 0..3 EXTI x configuration (x = 0 to 3)
            unsigned EXTI1 : 4; // bits 4..7 EXTI x configuration (x = 0 to 3)
            unsigned EXTI2 : 4; // bits 8..11 EXTI x configuration (x = 0 to 3)
            unsigned EXTI3 : 4; // bits 12..15 EXTI x configuration (x = 0 to 3)
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI0_POS = 0;
        static constexpr unsigned EXTI0_MASK = 0x0000000f;
        static constexpr unsigned EXTI0(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI1_POS = 4;
        static constexpr unsigned EXTI1_MASK = 0x000000f0;
        static constexpr unsigned EXTI1(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI2_POS = 8;
        static constexpr unsigned EXTI2_MASK = 0x00000f00;
        static constexpr unsigned EXTI2(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI3_POS = 12;
        static constexpr unsigned EXTI3_MASK = 0x0000f000;
        static constexpr unsigned EXTI3(unsigned value) { return (value << 12); }
    } EXTICR1;

    volatile union EXTICR2_T // EXTICR2: external interrupt configuration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR2_BIT_T
        {
            unsigned EXTI4 : 4; // bits 0..3 EXTI x configuration (x = 4 to 7)
            unsigned EXTI5 : 4; // bits 4..7 EXTI x configuration (x = 4 to 7)
            unsigned EXTI6 : 4; // bits 8..11 EXTI x configuration (x = 4 to 7)
            unsigned EXTI7 : 4; // bits 12..15 EXTI x configuration (x = 4 to 7)
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI4_POS = 0;
        static constexpr unsigned EXTI4_MASK = 0x0000000f;
        static constexpr unsigned EXTI4(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI5_POS = 4;
        static constexpr unsigned EXTI5_MASK = 0x000000f0;
        static constexpr unsigned EXTI5(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI6_POS = 8;
        static constexpr unsigned EXTI6_MASK = 0x00000f00;
        static constexpr unsigned EXTI6(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI7_POS = 12;
        static constexpr unsigned EXTI7_MASK = 0x0000f000;
        static constexpr unsigned EXTI7(unsigned value) { return (value << 12); }
    } EXTICR2;

    volatile union EXTICR3_T // EXTICR3: external interrupt configuration register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR3_BIT_T
        {
            unsigned EXTI8  : 4; // bits 0..3 EXTI x configuration (x = 8 to 11)
            unsigned EXTI9  : 4; // bits 4..7 EXTI x configuration (x = 8 to 11)
            unsigned EXTI10 : 4; // bits 8..11 EXTI10
            unsigned EXTI11 : 4; // bits 12..15 EXTI x configuration (x = 8 to 11)
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI8_POS = 0;
        static constexpr unsigned EXTI8_MASK = 0x0000000f;
        static constexpr unsigned EXTI8(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI9_POS = 4;
        static constexpr unsigned EXTI9_MASK = 0x000000f0;
        static constexpr unsigned EXTI9(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI10_POS = 8;
        static constexpr unsigned EXTI10_MASK = 0x00000f00;
        static constexpr unsigned EXTI10(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI11_POS = 12;
        static constexpr unsigned EXTI11_MASK = 0x0000f000;
        static constexpr unsigned EXTI11(unsigned value) { return (value << 12); }
    } EXTICR3;

    volatile union EXTICR4_T // EXTICR4: external interrupt configuration register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) EXTICR4_BIT_T
        {
            unsigned EXTI12 : 4; // bits 0..3 EXTI x configuration (x = 12 to 15)
            unsigned EXTI13 : 4; // bits 4..7 EXTI x configuration (x = 12 to 15)
            unsigned EXTI14 : 4; // bits 8..11 EXTI x configuration (x = 12 to 15)
            unsigned EXTI15 : 4; // bits 12..15 EXTI x configuration (x = 12 to 15)
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTI12_POS = 0;
        static constexpr unsigned EXTI12_MASK = 0x0000000f;
        static constexpr unsigned EXTI12(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTI13_POS = 4;
        static constexpr unsigned EXTI13_MASK = 0x000000f0;
        static constexpr unsigned EXTI13(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTI14_POS = 8;
        static constexpr unsigned EXTI14_MASK = 0x00000f00;
        static constexpr unsigned EXTI14(unsigned value) { return (value << 8); }
        static constexpr unsigned EXTI15_POS = 12;
        static constexpr unsigned EXTI15_MASK = 0x0000f000;
        static constexpr unsigned EXTI15(unsigned value) { return (value << 12); }
    } EXTICR4;

    uint8_t Reserved1[8];

    volatile union CMPCR_T // CMPCR: Compensation cell control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMPCR_BIT_T
        {
            unsigned CMP_PD : 1; // bit 0 Compensation cell power-down
            unsigned        : 7; // bits 1..7 unused
            unsigned READY  : 1; // bit 8 READY
            unsigned        : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned CMP_PD_POS = 0;
        static constexpr unsigned CMP_PD_MASK = 0x00000001;
        static constexpr unsigned CMP_PD(unsigned value) { return (value << 0); }
        static constexpr unsigned READY_POS = 8;
        static constexpr unsigned READY_MASK = 0x00000100;
        static constexpr unsigned READY(unsigned value) { return (value << 8); }
    } CMPCR;

}; // struct SYSCFG_T

static_assert(sizeof(SYSCFG_T) == SYSCFG_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp