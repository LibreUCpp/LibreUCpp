#pragma once

#define ALWAYS_INLINE inline __attribute__((always_inline))

namespace LibreUCpp
{
    inline void Debug_Break() { __asm__("BKPT"); }
}
