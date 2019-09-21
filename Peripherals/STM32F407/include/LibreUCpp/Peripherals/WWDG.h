#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) WWDG_T
{
    static constexpr size_t INSTANCE_SIZE = 12;
    static constexpr intptr_t BASE_ADDRESS = 0x40002c00;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CFR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x08;

    volatile union CR_T // CR: Control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned T    : 7; // bits 0..6 7-bit counter (MSB to LSB)
            unsigned WDGA : 1; // bit 7 Activation bit
            unsigned      : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned T_POS = 0;
        static constexpr unsigned T_MASK = 0x0000007f;
        static constexpr unsigned T(unsigned value) { return (value << 0); }
        static constexpr unsigned WDGA_POS = 7;
        static constexpr unsigned WDGA_MASK = 0x00000080;
        static constexpr unsigned WDGA(unsigned value) { return (value << 7); }
    } CR;

    volatile union CFR_T // CFR: Configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFR_BIT_T
        {
            unsigned W      : 7; // bits 0..6 7-bit window value
            unsigned WDGTB0 : 1; // bit 7 Timer base
            unsigned WDGTB1 : 1; // bit 8 Timer base
            unsigned EWI    : 1; // bit 9 Early wakeup interrupt
            unsigned        : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned W_POS = 0;
        static constexpr unsigned W_MASK = 0x0000007f;
        static constexpr unsigned W(unsigned value) { return (value << 0); }
        static constexpr unsigned WDGTB0_POS = 7;
        static constexpr unsigned WDGTB0_MASK = 0x00000080;
        static constexpr unsigned WDGTB0(unsigned value) { return (value << 7); }
        static constexpr unsigned WDGTB1_POS = 8;
        static constexpr unsigned WDGTB1_MASK = 0x00000100;
        static constexpr unsigned WDGTB1(unsigned value) { return (value << 8); }
        static constexpr unsigned EWI_POS = 9;
        static constexpr unsigned EWI_MASK = 0x00000200;
        static constexpr unsigned EWI(unsigned value) { return (value << 9); }
    } CFR;

    volatile union SR_T // SR: Status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned EWIF : 1; // bit 0 Early wakeup interrupt flag
            unsigned      : 31; // bits 1..31 unused    
        } bit;
    
        static constexpr unsigned EWIF_POS = 0;
        static constexpr unsigned EWIF_MASK = 0x00000001;
        static constexpr unsigned EWIF(unsigned value) { return (value << 0); }
    } SR;

}; // struct WWDG_T

static_assert(sizeof(WWDG_T) == WWDG_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp