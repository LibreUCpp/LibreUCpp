#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PAC_T
{
    static constexpr size_t INSTANCE_SIZE = 8;
    static constexpr size_t PADDED_INSTANCE_SIZE = 8;
    static constexpr intptr_t BASE_ADDRESS_PAC0 = 0x40000000;
    static constexpr intptr_t BASE_ADDRESS_PAC1 = 0x41000000;
    static constexpr intptr_t BASE_ADDRESS_PAC2 = 0x42000000;

    static constexpr intptr_t ADDR_OFFSET_WPCLR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_WPSET = 0x04;

    volatile union WPCLR_T // WPCLR: Write Protection Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) WPCLR_BIT_T
        {
            unsigned    : 1; // bit 0 unused
            unsigned WP : 31; // bits 1..31 Write Protection Clear    
        } bit;
    
        static constexpr unsigned WP_POS = 1;
        static constexpr unsigned WP_MASK = 0xfffffffe;
        static constexpr unsigned WP(unsigned value) { return (value << 1); }
    } WPCLR;

    volatile union WPSET_T // WPSET: Write Protection Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) WPSET_BIT_T
        {
            unsigned    : 1; // bit 0 unused
            unsigned WP : 31; // bits 1..31 Write Protection Set    
        } bit;
    
        static constexpr unsigned WP_POS = 1;
        static constexpr unsigned WP_MASK = 0xfffffffe;
        static constexpr unsigned WP(unsigned value) { return (value << 1); }
    } WPSET;

}; // struct PAC0_T

static_assert(sizeof(PAC_T) == PAC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp