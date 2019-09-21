#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) HMATRIX_T
{
    static constexpr size_t INSTANCE_SIZE = 336;
    static constexpr intptr_t BASE_ADDRESS = 0x41007000;

    static constexpr intptr_t ADDR_OFFSET_PRAS = 0x80;
    static constexpr intptr_t ADDR_OFFSET_PRBS = 0x84;
    static constexpr intptr_t ADDR_OFFSET_SFR = 0x110;

    uint8_t Reserved1[128];

    volatile union PRAS_T // PRAS: Priority A for Slave 
    {
        uint32_t reg;
        struct __attribute__((packed)) PRAS_BIT_T
        {
            unsigned M0PR : 4; // bits 0..3 Master 0 Priority
            unsigned M1PR : 4; // bits 4..7 Master 1 Priority
            unsigned M2PR : 4; // bits 8..11 Master 2 Priority
            unsigned M3PR : 4; // bits 12..15 Master 3 Priority
            unsigned M4PR : 4; // bits 16..19 Master 4 Priority
            unsigned M5PR : 4; // bits 20..23 Master 5 Priority
            unsigned M6PR : 4; // bits 24..27 Master 6 Priority
            unsigned M7PR : 4; // bits 28..31 Master 7 Priority    
        } bit;
    
        static constexpr unsigned M0PR_POS = 0;
        static constexpr unsigned M0PR_MASK = 0x0000000f;
        static constexpr unsigned M0PR(unsigned value) { return (value << 0); }
        static constexpr unsigned M1PR_POS = 4;
        static constexpr unsigned M1PR_MASK = 0x000000f0;
        static constexpr unsigned M1PR(unsigned value) { return (value << 4); }
        static constexpr unsigned M2PR_POS = 8;
        static constexpr unsigned M2PR_MASK = 0x00000f00;
        static constexpr unsigned M2PR(unsigned value) { return (value << 8); }
        static constexpr unsigned M3PR_POS = 12;
        static constexpr unsigned M3PR_MASK = 0x0000f000;
        static constexpr unsigned M3PR(unsigned value) { return (value << 12); }
        static constexpr unsigned M4PR_POS = 16;
        static constexpr unsigned M4PR_MASK = 0x000f0000;
        static constexpr unsigned M4PR(unsigned value) { return (value << 16); }
        static constexpr unsigned M5PR_POS = 20;
        static constexpr unsigned M5PR_MASK = 0x00f00000;
        static constexpr unsigned M5PR(unsigned value) { return (value << 20); }
        static constexpr unsigned M6PR_POS = 24;
        static constexpr unsigned M6PR_MASK = 0x0f000000;
        static constexpr unsigned M6PR(unsigned value) { return (value << 24); }
        static constexpr unsigned M7PR_POS = 28;
        static constexpr unsigned M7PR_MASK = 0xf0000000;
        static constexpr unsigned M7PR(unsigned value) { return (value << 28); }
    } PRAS[16];

    uint8_t Reserved2[-60];

    volatile union PRBS_T // PRBS: Priority B for Slave 
    {
        uint32_t reg;
        struct __attribute__((packed)) PRBS_BIT_T
        {
            unsigned M8PR  : 4; // bits 0..3 Master 8 Priority
            unsigned M9PR  : 4; // bits 4..7 Master 9 Priority
            unsigned M10PR : 4; // bits 8..11 Master 10 Priority
            unsigned M11PR : 4; // bits 12..15 Master 11 Priority
            unsigned M12PR : 4; // bits 16..19 Master 12 Priority
            unsigned M13PR : 4; // bits 20..23 Master 13 Priority
            unsigned M14PR : 4; // bits 24..27 Master 14 Priority
            unsigned M15PR : 4; // bits 28..31 Master 15 Priority    
        } bit;
    
        static constexpr unsigned M8PR_POS = 0;
        static constexpr unsigned M8PR_MASK = 0x0000000f;
        static constexpr unsigned M8PR(unsigned value) { return (value << 0); }
        static constexpr unsigned M9PR_POS = 4;
        static constexpr unsigned M9PR_MASK = 0x000000f0;
        static constexpr unsigned M9PR(unsigned value) { return (value << 4); }
        static constexpr unsigned M10PR_POS = 8;
        static constexpr unsigned M10PR_MASK = 0x00000f00;
        static constexpr unsigned M10PR(unsigned value) { return (value << 8); }
        static constexpr unsigned M11PR_POS = 12;
        static constexpr unsigned M11PR_MASK = 0x0000f000;
        static constexpr unsigned M11PR(unsigned value) { return (value << 12); }
        static constexpr unsigned M12PR_POS = 16;
        static constexpr unsigned M12PR_MASK = 0x000f0000;
        static constexpr unsigned M12PR(unsigned value) { return (value << 16); }
        static constexpr unsigned M13PR_POS = 20;
        static constexpr unsigned M13PR_MASK = 0x00f00000;
        static constexpr unsigned M13PR(unsigned value) { return (value << 20); }
        static constexpr unsigned M14PR_POS = 24;
        static constexpr unsigned M14PR_MASK = 0x0f000000;
        static constexpr unsigned M14PR(unsigned value) { return (value << 24); }
        static constexpr unsigned M15PR_POS = 28;
        static constexpr unsigned M15PR_MASK = 0xf0000000;
        static constexpr unsigned M15PR(unsigned value) { return (value << 28); }
    } PRBS[16];

    uint8_t Reserved3[76];

    volatile union SFR_T // SFR: Special Function 
    {
        uint32_t reg;
        struct __attribute__((packed)) SFR_BIT_T
        {
            unsigned SFR : 32; // bits 0..31 Special Function Register    
        } bit;
    
        static constexpr unsigned SFR_POS = 0;
        static constexpr unsigned SFR_MASK = 0xffffffff;
        static constexpr unsigned SFR(unsigned value) { return (value << 0); }
    } SFR[16];

}; // struct HMATRIX_T

static_assert(sizeof(HMATRIX_T) == HMATRIX_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp