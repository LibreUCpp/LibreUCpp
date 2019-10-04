#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PTC_T
{
    static constexpr size_t INSTANCE_SIZE = 0;
    static constexpr size_t PADDED_INSTANCE_SIZE = 4;
    static constexpr intptr_t BASE_ADDRESS = 0x42005800;


}; // struct PTC_T

static_assert(sizeof(PTC_T) == PTC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp