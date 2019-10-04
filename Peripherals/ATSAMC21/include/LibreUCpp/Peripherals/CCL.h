#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CCL_T
{
    static constexpr size_t INSTANCE_SIZE = 24;
    static constexpr size_t PADDED_INSTANCE_SIZE = 24;
    static constexpr intptr_t BASE_ADDRESS = 0x42005c00;

    static constexpr intptr_t ADDR_OFFSET_SEQCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_LUTCTRL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;

    volatile union CTRL_T // CTRL: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Software Reset
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run during Standby
            unsigned          : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
    } CTRL;

    uint8_t Reserved1[3];

    volatile union SEQCTRL_T // SEQCTRL: SEQ Control x 
    {
        uint8_t reg;
        struct __attribute__((packed)) SEQCTRL_BIT_T
        {
            unsigned SEQSEL : 4; // bits 0..3 Sequential Selection
            unsigned        : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned SEQSEL_POS = 0;
        static constexpr unsigned SEQSEL_MASK = 0x0000000f;
        static constexpr unsigned SEQSEL(unsigned value) { return (value << 0); }
    } SEQCTRL[2];

    uint8_t Reserved2[2];

    volatile union LUTCTRL_T // LUTCTRL: LUT Control x 
    {
        uint32_t reg;
        struct __attribute__((packed)) LUTCTRL_BIT_T
        {
            unsigned         : 1; // bit 0 unused
            unsigned ENABLE  : 1; // bit 1 LUT Enable
            unsigned         : 2; // bits 2..3 unused
            unsigned FILTSEL : 2; // bits 4..5 Filter Selection
            unsigned         : 1; // bit 6 unused
            unsigned EDGESEL : 1; // bit 7 Edge Selection
            unsigned INSEL0  : 4; // bits 8..11 Input Selection 0
            unsigned INSEL1  : 4; // bits 12..15 Input Selection 1
            unsigned INSEL2  : 4; // bits 16..19 Input Selection 2
            unsigned INVEI   : 1; // bit 20 Input Event Invert
            unsigned LUTEI   : 1; // bit 21 Event Input Enable
            unsigned LUTEO   : 1; // bit 22 Event Output Enable
            unsigned         : 1; // bit 23 unused
            unsigned TRUTH   : 8; // bits 24..31 Truth Value    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned FILTSEL_POS = 4;
        static constexpr unsigned FILTSEL_MASK = 0x00000030;
        static constexpr unsigned FILTSEL(unsigned value) { return (value << 4); }
        static constexpr unsigned EDGESEL_POS = 7;
        static constexpr unsigned EDGESEL_MASK = 0x00000080;
        static constexpr unsigned EDGESEL(unsigned value) { return (value << 7); }
        static constexpr unsigned INSEL0_POS = 8;
        static constexpr unsigned INSEL0_MASK = 0x00000f00;
        static constexpr unsigned INSEL0(unsigned value) { return (value << 8); }
        static constexpr unsigned INSEL1_POS = 12;
        static constexpr unsigned INSEL1_MASK = 0x0000f000;
        static constexpr unsigned INSEL1(unsigned value) { return (value << 12); }
        static constexpr unsigned INSEL2_POS = 16;
        static constexpr unsigned INSEL2_MASK = 0x000f0000;
        static constexpr unsigned INSEL2(unsigned value) { return (value << 16); }
        static constexpr unsigned INVEI_POS = 20;
        static constexpr unsigned INVEI_MASK = 0x00100000;
        static constexpr unsigned INVEI(unsigned value) { return (value << 20); }
        static constexpr unsigned LUTEI_POS = 21;
        static constexpr unsigned LUTEI_MASK = 0x00200000;
        static constexpr unsigned LUTEI(unsigned value) { return (value << 21); }
        static constexpr unsigned LUTEO_POS = 22;
        static constexpr unsigned LUTEO_MASK = 0x00400000;
        static constexpr unsigned LUTEO(unsigned value) { return (value << 22); }
        static constexpr unsigned TRUTH_POS = 24;
        static constexpr unsigned TRUTH_MASK = 0xff000000;
        static constexpr unsigned TRUTH(unsigned value) { return (value << 24); }
    } LUTCTRL[4];

}; // struct CCL_T

static_assert(sizeof(CCL_T) == CCL_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp