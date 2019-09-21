#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) GCLK_T
{
    static constexpr size_t INSTANCE_SIZE = 312;
    static constexpr intptr_t BASE_ADDRESS = 0x40001c00;

    static constexpr intptr_t ADDR_OFFSET_GENCTRL = 0x20;
    static constexpr intptr_t ADDR_OFFSET_PCHCTRL = 0x80;
    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x04;

    volatile union CTRLA_T // CTRLA: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST : 1; // bit 0 Software Reset
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
    } CTRLA;

    uint8_t Reserved1[3];

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Software Reset Synchroniation Busy bit
            unsigned          : 1; // bit 1 unused
            unsigned GENCTRL0 : 1; // bit 2 Generic Clock Generator Control 0 Synchronization Busy bits
            unsigned GENCTRL1 : 1; // bit 3 Generic Clock Generator Control 1 Synchronization Busy bits
            unsigned GENCTRL2 : 1; // bit 4 Generic Clock Generator Control 2 Synchronization Busy bits
            unsigned GENCTRL3 : 1; // bit 5 Generic Clock Generator Control 3 Synchronization Busy bits
            unsigned GENCTRL4 : 1; // bit 6 Generic Clock Generator Control 4 Synchronization Busy bits
            unsigned GENCTRL5 : 1; // bit 7 Generic Clock Generator Control 5 Synchronization Busy bits
            unsigned GENCTRL6 : 1; // bit 8 Generic Clock Generator Control 6 Synchronization Busy bits
            unsigned GENCTRL7 : 1; // bit 9 Generic Clock Generator Control 7 Synchronization Busy bits
            unsigned GENCTRL8 : 1; // bit 10 Generic Clock Generator Control 8 Synchronization Busy bits
            unsigned          : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned GENCTRL0_POS = 2;
        static constexpr unsigned GENCTRL0_MASK = 0x00000004;
        static constexpr unsigned GENCTRL0(unsigned value) { return (value << 2); }
        static constexpr unsigned GENCTRL1_POS = 3;
        static constexpr unsigned GENCTRL1_MASK = 0x00000008;
        static constexpr unsigned GENCTRL1(unsigned value) { return (value << 3); }
        static constexpr unsigned GENCTRL2_POS = 4;
        static constexpr unsigned GENCTRL2_MASK = 0x00000010;
        static constexpr unsigned GENCTRL2(unsigned value) { return (value << 4); }
        static constexpr unsigned GENCTRL3_POS = 5;
        static constexpr unsigned GENCTRL3_MASK = 0x00000020;
        static constexpr unsigned GENCTRL3(unsigned value) { return (value << 5); }
        static constexpr unsigned GENCTRL4_POS = 6;
        static constexpr unsigned GENCTRL4_MASK = 0x00000040;
        static constexpr unsigned GENCTRL4(unsigned value) { return (value << 6); }
        static constexpr unsigned GENCTRL5_POS = 7;
        static constexpr unsigned GENCTRL5_MASK = 0x00000080;
        static constexpr unsigned GENCTRL5(unsigned value) { return (value << 7); }
        static constexpr unsigned GENCTRL6_POS = 8;
        static constexpr unsigned GENCTRL6_MASK = 0x00000100;
        static constexpr unsigned GENCTRL6(unsigned value) { return (value << 8); }
        static constexpr unsigned GENCTRL7_POS = 9;
        static constexpr unsigned GENCTRL7_MASK = 0x00000200;
        static constexpr unsigned GENCTRL7(unsigned value) { return (value << 9); }
        static constexpr unsigned GENCTRL8_POS = 10;
        static constexpr unsigned GENCTRL8_MASK = 0x00000400;
        static constexpr unsigned GENCTRL8(unsigned value) { return (value << 10); }
    } SYNCBUSY;

    uint8_t Reserved2[24];

    volatile union GENCTRL_T // GENCTRL: Generic Clock Generator Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) GENCTRL_BIT_T
        {
            unsigned SRC      : 3; // bits 0..2 Source Select
            unsigned          : 5; // bits 3..7 unused
            unsigned GENEN    : 1; // bit 8 Generic Clock Generator Enable
            unsigned IDC      : 1; // bit 9 Improve Duty Cycle
            unsigned OOV      : 1; // bit 10 Output Off Value
            unsigned OE       : 1; // bit 11 Output Enable
            unsigned DIVSEL   : 1; // bit 12 Divide Selection
            unsigned RUNSTDBY : 1; // bit 13 Run in Standby
            unsigned          : 2; // bits 14..15 unused
            unsigned DIV      : 16; // bits 16..31 Division Factor    
        } bit;
    
        static constexpr unsigned SRC_POS = 0;
        static constexpr unsigned SRC_MASK = 0x00000007;
        static constexpr unsigned SRC(unsigned value) { return (value << 0); }
        static constexpr unsigned GENEN_POS = 8;
        static constexpr unsigned GENEN_MASK = 0x00000100;
        static constexpr unsigned GENEN(unsigned value) { return (value << 8); }
        static constexpr unsigned IDC_POS = 9;
        static constexpr unsigned IDC_MASK = 0x00000200;
        static constexpr unsigned IDC(unsigned value) { return (value << 9); }
        static constexpr unsigned OOV_POS = 10;
        static constexpr unsigned OOV_MASK = 0x00000400;
        static constexpr unsigned OOV(unsigned value) { return (value << 10); }
        static constexpr unsigned OE_POS = 11;
        static constexpr unsigned OE_MASK = 0x00000800;
        static constexpr unsigned OE(unsigned value) { return (value << 11); }
        static constexpr unsigned DIVSEL_POS = 12;
        static constexpr unsigned DIVSEL_MASK = 0x00001000;
        static constexpr unsigned DIVSEL(unsigned value) { return (value << 12); }
        static constexpr unsigned RUNSTDBY_POS = 13;
        static constexpr unsigned RUNSTDBY_MASK = 0x00002000;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 13); }
        static constexpr unsigned DIV_POS = 16;
        static constexpr unsigned DIV_MASK = 0xffff0000;
        static constexpr unsigned DIV(unsigned value) { return (value << 16); }
    } GENCTRL[9];

    uint8_t Reserved3[60];

    volatile union PCHCTRL_T // PCHCTRL: Peripheral Clock Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) PCHCTRL_BIT_T
        {
            unsigned GEN     : 4; // bits 0..3 Generic Clock Generator
            unsigned         : 2; // bits 4..5 unused
            unsigned CHEN    : 1; // bit 6 Channel Enable
            unsigned WRTLOCK : 1; // bit 7 Write Lock
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned GEN_POS = 0;
        static constexpr unsigned GEN_MASK = 0x0000000f;
        static constexpr unsigned GEN(unsigned value) { return (value << 0); }
        static constexpr unsigned CHEN_POS = 6;
        static constexpr unsigned CHEN_MASK = 0x00000040;
        static constexpr unsigned CHEN(unsigned value) { return (value << 6); }
        static constexpr unsigned WRTLOCK_POS = 7;
        static constexpr unsigned WRTLOCK_MASK = 0x00000080;
        static constexpr unsigned WRTLOCK(unsigned value) { return (value << 7); }
    } PCHCTRL[46];

}; // struct GCLK_T

static_assert(sizeof(GCLK_T) == GCLK_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp