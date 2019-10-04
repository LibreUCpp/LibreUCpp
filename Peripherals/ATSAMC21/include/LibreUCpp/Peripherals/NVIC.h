#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) NVIC_T
{
    static constexpr size_t INSTANCE_SIZE = 800;
    static constexpr size_t PADDED_INSTANCE_SIZE = 800;
    static constexpr intptr_t BASE_ADDRESS = 0xe000e100;

    static constexpr intptr_t ADDR_OFFSET_IPR = 0x300;
    static constexpr intptr_t ADDR_OFFSET_ISER = 0x00;
    static constexpr intptr_t ADDR_OFFSET_ICER = 0x80;
    static constexpr intptr_t ADDR_OFFSET_ISPR = 0x100;
    static constexpr intptr_t ADDR_OFFSET_ICPR = 0x180;

    volatile union ISER_T // ISER: Interrupt Set Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISER_BIT_T
        {
            unsigned SETENA : 31; // bits 0..30 Interrupt set enable bits
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned SETENA_POS = 0;
        static constexpr unsigned SETENA_MASK = 0x7fffffff;
        static constexpr unsigned SETENA(unsigned value) { return (value << 0); }
    } ISER;

    uint8_t Reserved1[124];

    volatile union ICER_T // ICER: Interrupt Clear Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICER_BIT_T
        {
            unsigned CLRENA : 31; // bits 0..30 Interrupt clear-enable bits
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned CLRENA_POS = 0;
        static constexpr unsigned CLRENA_MASK = 0x7fffffff;
        static constexpr unsigned CLRENA(unsigned value) { return (value << 0); }
    } ICER;

    uint8_t Reserved2[124];

    volatile union ISPR_T // ISPR: Interrupt Set Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISPR_BIT_T
        {
            unsigned SETPEND : 31; // bits 0..30 Interrupt set-pending bits
            unsigned         : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned SETPEND_POS = 0;
        static constexpr unsigned SETPEND_MASK = 0x7fffffff;
        static constexpr unsigned SETPEND(unsigned value) { return (value << 0); }
    } ISPR;

    uint8_t Reserved3[124];

    volatile union ICPR_T // ICPR: Interrupt Clear Pending Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICPR_BIT_T
        {
            unsigned CLRPEND : 31; // bits 0..30 Interrupt clear-pending bits
            unsigned         : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned CLRPEND_POS = 0;
        static constexpr unsigned CLRPEND_MASK = 0x7fffffff;
        static constexpr unsigned CLRPEND(unsigned value) { return (value << 0); }
    } ICPR;

    uint8_t Reserved4[380];

    volatile union IPR_T // IPR: Interrupt Priority Register n 
    {
        uint32_t reg;
        struct __attribute__((packed)) IPR_BIT_T
        {
            unsigned PRI0 : 2; // bits 0..1 Priority of interrupt n
            unsigned      : 6; // bits 2..7 unused
            unsigned PRI1 : 2; // bits 8..9 Priority of interrupt n
            unsigned      : 6; // bits 10..15 unused
            unsigned PRI2 : 2; // bits 16..17 Priority of interrupt n
            unsigned      : 6; // bits 18..23 unused
            unsigned PRI3 : 2; // bits 24..25 Priority of interrupt n
            unsigned      : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned PRI0_POS = 0;
        static constexpr unsigned PRI0_MASK = 0x00000003;
        static constexpr unsigned PRI0(unsigned value) { return (value << 0); }
        static constexpr unsigned PRI1_POS = 8;
        static constexpr unsigned PRI1_MASK = 0x00000300;
        static constexpr unsigned PRI1(unsigned value) { return (value << 8); }
        static constexpr unsigned PRI2_POS = 16;
        static constexpr unsigned PRI2_MASK = 0x00030000;
        static constexpr unsigned PRI2(unsigned value) { return (value << 16); }
        static constexpr unsigned PRI3_POS = 24;
        static constexpr unsigned PRI3_MASK = 0x03000000;
        static constexpr unsigned PRI3(unsigned value) { return (value << 24); }
    } IPR[8];

}; // struct NVIC_T

static_assert(sizeof(NVIC_T) == NVIC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp