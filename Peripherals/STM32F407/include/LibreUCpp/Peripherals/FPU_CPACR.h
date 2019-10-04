#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) FPU_CPACR_T
{
    static constexpr size_t INSTANCE_SIZE = 4;
    static constexpr size_t PADDED_INSTANCE_SIZE = 4;
    static constexpr intptr_t BASE_ADDRESS = 0xe000ed88;

    static constexpr intptr_t ADDR_OFFSET_CPACR = 0x00;

    volatile union CPACR_T // CPACR: Coprocessor access control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPACR_BIT_T
        {
            unsigned    : 20; // bits 0..19 unused
            unsigned CP : 4; // bits 20..23 CP
            unsigned    : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CP_POS = 20;
        static constexpr unsigned CP_MASK = 0x00f00000;
        static constexpr unsigned CP(unsigned value) { return (value << 20); }
    } CPACR;

}; // struct FPU_CPACR_T

static_assert(sizeof(FPU_CPACR_T) == FPU_CPACR_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp