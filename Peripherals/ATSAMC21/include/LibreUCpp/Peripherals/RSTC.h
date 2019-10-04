#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RSTC_T
{
    static constexpr size_t INSTANCE_SIZE = 1;
    static constexpr size_t PADDED_INSTANCE_SIZE = 4;
    static constexpr intptr_t BASE_ADDRESS = 0x40000c00;

    static constexpr intptr_t ADDR_OFFSET_RCAUSE = 0x00;

    volatile union RCAUSE_T // RCAUSE: Reset Cause 
    {
        uint8_t reg;
        struct __attribute__((packed)) RCAUSE_BIT_T
        {
            unsigned POR     : 1; // bit 0 Power On Reset
            unsigned BODCORE : 1; // bit 1 Brown Out CORE Detector Reset
            unsigned BODVDD  : 1; // bit 2 Brown Out VDD Detector Reset
            unsigned         : 1; // bit 3 unused
            unsigned EXT     : 1; // bit 4 External Reset
            unsigned WDT     : 1; // bit 5 Watchdog Reset
            unsigned SYST    : 1; // bit 6 System Reset Request
            unsigned         : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned POR_POS = 0;
        static constexpr unsigned POR_MASK = 0x00000001;
        static constexpr unsigned POR(unsigned value) { return (value << 0); }
        static constexpr unsigned BODCORE_POS = 1;
        static constexpr unsigned BODCORE_MASK = 0x00000002;
        static constexpr unsigned BODCORE(unsigned value) { return (value << 1); }
        static constexpr unsigned BODVDD_POS = 2;
        static constexpr unsigned BODVDD_MASK = 0x00000004;
        static constexpr unsigned BODVDD(unsigned value) { return (value << 2); }
        static constexpr unsigned EXT_POS = 4;
        static constexpr unsigned EXT_MASK = 0x00000010;
        static constexpr unsigned EXT(unsigned value) { return (value << 4); }
        static constexpr unsigned WDT_POS = 5;
        static constexpr unsigned WDT_MASK = 0x00000020;
        static constexpr unsigned WDT(unsigned value) { return (value << 5); }
        static constexpr unsigned SYST_POS = 6;
        static constexpr unsigned SYST_MASK = 0x00000040;
        static constexpr unsigned SYST(unsigned value) { return (value << 6); }
    } RCAUSE;

}; // struct RSTC_T

static_assert(sizeof(RSTC_T) == RSTC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp