#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) COMP_T
{
    static constexpr size_t INSTANCE_SIZE = 4;
    static constexpr intptr_t BASE_ADDRESS = 0x4001001c;

    static constexpr intptr_t ADDR_OFFSET_CSR = 0x00;

    volatile union CSR_T // CSR: control and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned COMP1EN       : 1; // bit 0 Comparator 1 enable
            unsigned COMP1_INP_DAC : 1; // bit 1 COMP1_INP_DAC
            unsigned COMP1MODE     : 2; // bits 2..3 Comparator 1 mode
            unsigned COMP1INSEL    : 3; // bits 4..6 Comparator 1 inverting input selection
            unsigned               : 1; // bit 7 unused
            unsigned COMP1OUTSEL   : 3; // bits 8..10 Comparator 1 output selection
            unsigned COMP1POL      : 1; // bit 11 Comparator 1 output polarity
            unsigned COMP1HYST     : 2; // bits 12..13 Comparator 1 hysteresis
            unsigned COMP1OUT      : 1; // bit 14 Comparator 1 output
            unsigned COMP1LOCK     : 1; // bit 15 Comparator 1 lock
            unsigned COMP2EN       : 1; // bit 16 Comparator 2 enable
            unsigned               : 1; // bit 17 unused
            unsigned COMP2MODE     : 2; // bits 18..19 Comparator 2 mode
            unsigned COMP2INSEL    : 3; // bits 20..22 Comparator 2 inverting input selection
            unsigned WNDWEN        : 1; // bit 23 Window mode enable
            unsigned COMP2OUTSEL   : 3; // bits 24..26 Comparator 2 output selection
            unsigned COMP2POL      : 1; // bit 27 Comparator 2 output polarity
            unsigned COMP2HYST     : 2; // bits 28..29 Comparator 2 hysteresis
            unsigned COMP2OUT      : 1; // bit 30 Comparator 2 output
            unsigned COMP2LOCK     : 1; // bit 31 Comparator 2 lock    
        } bit;
    
        static constexpr unsigned COMP1EN_POS = 0;
        static constexpr unsigned COMP1EN_MASK = 0x00000001;
        static constexpr unsigned COMP1EN(unsigned value) { return (value << 0); }
        static constexpr unsigned COMP1_INP_DAC_POS = 1;
        static constexpr unsigned COMP1_INP_DAC_MASK = 0x00000002;
        static constexpr unsigned COMP1_INP_DAC(unsigned value) { return (value << 1); }
        static constexpr unsigned COMP1MODE_POS = 2;
        static constexpr unsigned COMP1MODE_MASK = 0x0000000c;
        static constexpr unsigned COMP1MODE(unsigned value) { return (value << 2); }
        static constexpr unsigned COMP1INSEL_POS = 4;
        static constexpr unsigned COMP1INSEL_MASK = 0x00000070;
        static constexpr unsigned COMP1INSEL(unsigned value) { return (value << 4); }
        static constexpr unsigned COMP1OUTSEL_POS = 8;
        static constexpr unsigned COMP1OUTSEL_MASK = 0x00000700;
        static constexpr unsigned COMP1OUTSEL(unsigned value) { return (value << 8); }
        static constexpr unsigned COMP1POL_POS = 11;
        static constexpr unsigned COMP1POL_MASK = 0x00000800;
        static constexpr unsigned COMP1POL(unsigned value) { return (value << 11); }
        static constexpr unsigned COMP1HYST_POS = 12;
        static constexpr unsigned COMP1HYST_MASK = 0x00003000;
        static constexpr unsigned COMP1HYST(unsigned value) { return (value << 12); }
        static constexpr unsigned COMP1OUT_POS = 14;
        static constexpr unsigned COMP1OUT_MASK = 0x00004000;
        static constexpr unsigned COMP1OUT(unsigned value) { return (value << 14); }
        static constexpr unsigned COMP1LOCK_POS = 15;
        static constexpr unsigned COMP1LOCK_MASK = 0x00008000;
        static constexpr unsigned COMP1LOCK(unsigned value) { return (value << 15); }
        static constexpr unsigned COMP2EN_POS = 16;
        static constexpr unsigned COMP2EN_MASK = 0x00010000;
        static constexpr unsigned COMP2EN(unsigned value) { return (value << 16); }
        static constexpr unsigned COMP2MODE_POS = 18;
        static constexpr unsigned COMP2MODE_MASK = 0x000c0000;
        static constexpr unsigned COMP2MODE(unsigned value) { return (value << 18); }
        static constexpr unsigned COMP2INSEL_POS = 20;
        static constexpr unsigned COMP2INSEL_MASK = 0x00700000;
        static constexpr unsigned COMP2INSEL(unsigned value) { return (value << 20); }
        static constexpr unsigned WNDWEN_POS = 23;
        static constexpr unsigned WNDWEN_MASK = 0x00800000;
        static constexpr unsigned WNDWEN(unsigned value) { return (value << 23); }
        static constexpr unsigned COMP2OUTSEL_POS = 24;
        static constexpr unsigned COMP2OUTSEL_MASK = 0x07000000;
        static constexpr unsigned COMP2OUTSEL(unsigned value) { return (value << 24); }
        static constexpr unsigned COMP2POL_POS = 27;
        static constexpr unsigned COMP2POL_MASK = 0x08000000;
        static constexpr unsigned COMP2POL(unsigned value) { return (value << 27); }
        static constexpr unsigned COMP2HYST_POS = 28;
        static constexpr unsigned COMP2HYST_MASK = 0x30000000;
        static constexpr unsigned COMP2HYST(unsigned value) { return (value << 28); }
        static constexpr unsigned COMP2OUT_POS = 30;
        static constexpr unsigned COMP2OUT_MASK = 0x40000000;
        static constexpr unsigned COMP2OUT(unsigned value) { return (value << 30); }
        static constexpr unsigned COMP2LOCK_POS = 31;
        static constexpr unsigned COMP2LOCK_MASK = 0x80000000;
        static constexpr unsigned COMP2LOCK(unsigned value) { return (value << 31); }
    } CSR;

}; // struct COMP_T

static_assert(sizeof(COMP_T) == COMP_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp