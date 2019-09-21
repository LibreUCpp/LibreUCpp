#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) GCLK_T
{
    static constexpr size_t INSTANCE_SIZE = 12;
    static constexpr intptr_t BASE_ADDRESS = 0x40000c00;

    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x01;
    static constexpr intptr_t ADDR_OFFSET_CLKCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_GENCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_GENDIV = 0x08;

    volatile union CTRL_T // CTRL: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned SWRST : 1; // bit 0 Software Reset
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
    } CTRL;

    volatile union STATUS_T // STATUS: Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned          : 7; // bits 0..6 unused
            unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy Status    
        } bit;
    
        static constexpr unsigned SYNCBUSY_POS = 7;
        static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
        static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
    } STATUS;

    volatile union CLKCTRL_T // CLKCTRL: Generic Clock Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) CLKCTRL_BIT_T
        {
            unsigned ID      : 6; // bits 0..5 Generic Clock Selection ID
            unsigned         : 2; // bits 6..7 unused
            unsigned GEN     : 4; // bits 8..11 Generic Clock Generator
            unsigned         : 2; // bits 12..13 unused
            unsigned CLKEN   : 1; // bit 14 Clock Enable
            unsigned WRTLOCK : 1; // bit 15 Write Lock    
        } bit;
    
        static constexpr unsigned ID_POS = 0;
        static constexpr unsigned ID_MASK = 0x0000003f;
        static constexpr unsigned ID(unsigned value) { return (value << 0); }
        static constexpr unsigned GEN_POS = 8;
        static constexpr unsigned GEN_MASK = 0x00000f00;
        static constexpr unsigned GEN(unsigned value) { return (value << 8); }
        static constexpr unsigned CLKEN_POS = 14;
        static constexpr unsigned CLKEN_MASK = 0x00004000;
        static constexpr unsigned CLKEN(unsigned value) { return (value << 14); }
        static constexpr unsigned WRTLOCK_POS = 15;
        static constexpr unsigned WRTLOCK_MASK = 0x00008000;
        static constexpr unsigned WRTLOCK(unsigned value) { return (value << 15); }
    } CLKCTRL;

    volatile union GENCTRL_T // GENCTRL: Generic Clock Generator Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) GENCTRL_BIT_T
        {
            unsigned ID       : 4; // bits 0..3 Generic Clock Generator Selection
            unsigned          : 4; // bits 4..7 unused
            unsigned SRC      : 5; // bits 8..12 Source Select
            unsigned          : 3; // bits 13..15 unused
            unsigned GENEN    : 1; // bit 16 Generic Clock Generator Enable
            unsigned IDC      : 1; // bit 17 Improve Duty Cycle
            unsigned OOV      : 1; // bit 18 Output Off Value
            unsigned OE       : 1; // bit 19 Output Enable
            unsigned DIVSEL   : 1; // bit 20 Divide Selection
            unsigned RUNSTDBY : 1; // bit 21 Run in Standby
            unsigned          : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned ID_POS = 0;
        static constexpr unsigned ID_MASK = 0x0000000f;
        static constexpr unsigned ID(unsigned value) { return (value << 0); }
        static constexpr unsigned SRC_POS = 8;
        static constexpr unsigned SRC_MASK = 0x00001f00;
        static constexpr unsigned SRC(unsigned value) { return (value << 8); }
        static constexpr unsigned GENEN_POS = 16;
        static constexpr unsigned GENEN_MASK = 0x00010000;
        static constexpr unsigned GENEN(unsigned value) { return (value << 16); }
        static constexpr unsigned IDC_POS = 17;
        static constexpr unsigned IDC_MASK = 0x00020000;
        static constexpr unsigned IDC(unsigned value) { return (value << 17); }
        static constexpr unsigned OOV_POS = 18;
        static constexpr unsigned OOV_MASK = 0x00040000;
        static constexpr unsigned OOV(unsigned value) { return (value << 18); }
        static constexpr unsigned OE_POS = 19;
        static constexpr unsigned OE_MASK = 0x00080000;
        static constexpr unsigned OE(unsigned value) { return (value << 19); }
        static constexpr unsigned DIVSEL_POS = 20;
        static constexpr unsigned DIVSEL_MASK = 0x00100000;
        static constexpr unsigned DIVSEL(unsigned value) { return (value << 20); }
        static constexpr unsigned RUNSTDBY_POS = 21;
        static constexpr unsigned RUNSTDBY_MASK = 0x00200000;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 21); }
    } GENCTRL;

    volatile union GENDIV_T // GENDIV: Generic Clock Generator Division 
    {
        uint32_t reg;
        struct __attribute__((packed)) GENDIV_BIT_T
        {
            unsigned ID  : 4; // bits 0..3 Generic Clock Generator Selection
            unsigned     : 4; // bits 4..7 unused
            unsigned DIV : 16; // bits 8..23 Division Factor
            unsigned     : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned ID_POS = 0;
        static constexpr unsigned ID_MASK = 0x0000000f;
        static constexpr unsigned ID(unsigned value) { return (value << 0); }
        static constexpr unsigned DIV_POS = 8;
        static constexpr unsigned DIV_MASK = 0x00ffff00;
        static constexpr unsigned DIV(unsigned value) { return (value << 8); }
    } GENDIV;

}; // struct GCLK_T

static_assert(sizeof(GCLK_T) == GCLK_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp