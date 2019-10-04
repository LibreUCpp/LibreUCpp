#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SCB_ACTRL_T
{
    static constexpr size_t INSTANCE_SIZE = 4;
    static constexpr size_t PADDED_INSTANCE_SIZE = 4;
    static constexpr intptr_t BASE_ADDRESS = 0xe000e008;

    static constexpr intptr_t ADDR_OFFSET_ACTRL = 0x00;

    volatile union ACTRL_T // ACTRL: Auxiliary control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ACTRL_BIT_T
        {
            unsigned DISMCYCINT : 1; // bit 0 DISMCYCINT
            unsigned DISDEFWBUF : 1; // bit 1 DISDEFWBUF
            unsigned DISFOLD    : 1; // bit 2 DISFOLD
            unsigned            : 5; // bits 3..7 unused
            unsigned DISFPCA    : 1; // bit 8 DISFPCA
            unsigned DISOOFP    : 1; // bit 9 DISOOFP
            unsigned            : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned DISMCYCINT_POS = 0;
        static constexpr unsigned DISMCYCINT_MASK = 0x00000001;
        static constexpr unsigned DISMCYCINT(unsigned value) { return (value << 0); }
        static constexpr unsigned DISDEFWBUF_POS = 1;
        static constexpr unsigned DISDEFWBUF_MASK = 0x00000002;
        static constexpr unsigned DISDEFWBUF(unsigned value) { return (value << 1); }
        static constexpr unsigned DISFOLD_POS = 2;
        static constexpr unsigned DISFOLD_MASK = 0x00000004;
        static constexpr unsigned DISFOLD(unsigned value) { return (value << 2); }
        static constexpr unsigned DISFPCA_POS = 8;
        static constexpr unsigned DISFPCA_MASK = 0x00000100;
        static constexpr unsigned DISFPCA(unsigned value) { return (value << 8); }
        static constexpr unsigned DISOOFP_POS = 9;
        static constexpr unsigned DISOOFP_MASK = 0x00000200;
        static constexpr unsigned DISOOFP(unsigned value) { return (value << 9); }
    } ACTRL;

}; // struct SCB_ACTRL_T

static_assert(sizeof(SCB_ACTRL_T) == SCB_ACTRL_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp