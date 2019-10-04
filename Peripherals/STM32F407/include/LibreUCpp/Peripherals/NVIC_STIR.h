#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) NVIC_STIR_T
{
    static constexpr size_t INSTANCE_SIZE = 4;
    static constexpr size_t PADDED_INSTANCE_SIZE = 4;
    static constexpr intptr_t BASE_ADDRESS = 0xe000ef00;

    static constexpr intptr_t ADDR_OFFSET_STIR = 0x00;

    volatile union STIR_T // STIR: Software trigger interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) STIR_BIT_T
        {
            unsigned INTID : 9; // bits 0..8 Software generated interrupt ID
            unsigned       : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned INTID_POS = 0;
        static constexpr unsigned INTID_MASK = 0x000001ff;
        static constexpr unsigned INTID(unsigned value) { return (value << 0); }
    } STIR;

}; // struct NVIC_STIR_T

static_assert(sizeof(NVIC_STIR_T) == NVIC_STIR_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp