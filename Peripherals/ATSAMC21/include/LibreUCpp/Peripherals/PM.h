#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PM_T
{
    static constexpr size_t INSTANCE_SIZE = 10;
    static constexpr size_t PADDED_INSTANCE_SIZE = 12;
    static constexpr intptr_t BASE_ADDRESS = 0x40000400;

    static constexpr intptr_t ADDR_OFFSET_SLEEPCFG = 0x01;
    static constexpr intptr_t ADDR_OFFSET_STDBYCFG = 0x08;

    uint8_t Reserved1[1];

    volatile union SLEEPCFG_T // SLEEPCFG: Sleep Configuration 
    {
        uint8_t reg;
        struct __attribute__((packed)) SLEEPCFG_BIT_T
        {
            unsigned SLEEPMODE : 3; // bits 0..2 Sleep Mode
            unsigned           : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned SLEEPMODE_POS = 0;
        static constexpr unsigned SLEEPMODE_MASK = 0x00000007;
        static constexpr unsigned SLEEPMODE(unsigned value) { return (value << 0); }
    } SLEEPCFG;

    uint8_t Reserved2[6];

    volatile union STDBYCFG_T // STDBYCFG: Standby Configuration 
    {
        uint16_t reg;
        struct __attribute__((packed)) STDBYCFG_BIT_T
        {
            unsigned          : 6; // bits 0..5 unused
            unsigned VREGSMOD : 2; // bits 6..7 Voltage Regulator Standby mode
            unsigned          : 2; // bits 8..9 unused
            unsigned BBIASHS  : 2; // bits 10..11 Back Bias for HMCRAMCHS
            unsigned          : 4; // bits 12..15 unused    
        } bit;
    
        static constexpr unsigned VREGSMOD_POS = 6;
        static constexpr unsigned VREGSMOD_MASK = 0x000000c0;
        static constexpr unsigned VREGSMOD(unsigned value) { return (value << 6); }
        static constexpr unsigned BBIASHS_POS = 10;
        static constexpr unsigned BBIASHS_MASK = 0x00000c00;
        static constexpr unsigned BBIASHS(unsigned value) { return (value << 10); }
    } STDBYCFG;

}; // struct PM_T

static_assert(sizeof(PM_T) == PM_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp