#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) OTG_FS_PWRCLK_T
{
    static constexpr size_t INSTANCE_SIZE = 4;
    static constexpr intptr_t BASE_ADDRESS = 0x50000e00;

    static constexpr intptr_t ADDR_OFFSET_FS_PCGCCTL = 0x00;

    volatile union FS_PCGCCTL_T // FS_PCGCCTL: OTG_FS power and clock gating control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_PCGCCTL_BIT_T
        {
            unsigned STPPCLK  : 1; // bit 0 Stop PHY clock
            unsigned GATEHCLK : 1; // bit 1 Gate HCLK
            unsigned          : 2; // bits 2..3 unused
            unsigned PHYSUSP  : 1; // bit 4 PHY Suspended
            unsigned          : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned STPPCLK_POS = 0;
        static constexpr unsigned STPPCLK_MASK = 0x00000001;
        static constexpr unsigned STPPCLK(unsigned value) { return (value << 0); }
        static constexpr unsigned GATEHCLK_POS = 1;
        static constexpr unsigned GATEHCLK_MASK = 0x00000002;
        static constexpr unsigned GATEHCLK(unsigned value) { return (value << 1); }
        static constexpr unsigned PHYSUSP_POS = 4;
        static constexpr unsigned PHYSUSP_MASK = 0x00000010;
        static constexpr unsigned PHYSUSP(unsigned value) { return (value << 4); }
    } FS_PCGCCTL;

}; // struct OTG_FS_PWRCLK_T

static_assert(sizeof(OTG_FS_PWRCLK_T) == OTG_FS_PWRCLK_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp