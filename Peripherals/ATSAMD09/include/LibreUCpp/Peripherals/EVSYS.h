#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) EVSYS_T
{
    static constexpr size_t INSTANCE_SIZE = 28;
    static constexpr size_t PADDED_INSTANCE_SIZE = 28;
    static constexpr intptr_t BASE_ADDRESS = 0x42000400;

    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CHANNEL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_USER = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CHSTATUS = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x14;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x18;

    volatile union CTRL_T // CTRL: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned SWRST   : 1; // bit 0 Software Reset
            unsigned         : 3; // bits 1..3 unused
            unsigned GCLKREQ : 1; // bit 4 Generic Clock Requests
            unsigned         : 3; // bits 5..7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned GCLKREQ_POS = 4;
        static constexpr unsigned GCLKREQ_MASK = 0x00000010;
        static constexpr unsigned GCLKREQ(unsigned value) { return (value << 4); }
    } CTRL;

    uint8_t Reserved1[3];

    volatile union CHANNEL_T // CHANNEL: Channel 
    {
        uint32_t reg;
        struct __attribute__((packed)) CHANNEL_BIT_T
        {
            unsigned CHANNEL : 3; // bits 0..2 Channel Selection
            unsigned         : 5; // bits 3..7 unused
            unsigned SWEVT   : 1; // bit 8 Software Event
            unsigned         : 7; // bits 9..15 unused
            unsigned EVGEN   : 6; // bits 16..21 Event Generator Selection
            unsigned         : 2; // bits 22..23 unused
            unsigned PATH    : 2; // bits 24..25 Path Selection
            unsigned EDGSEL  : 2; // bits 26..27 Edge Detection Selection
            unsigned         : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned CHANNEL_POS = 0;
        static constexpr unsigned CHANNEL_MASK = 0x00000007;
        static constexpr unsigned CHANNEL(unsigned value) { return (value << 0); }
        static constexpr unsigned SWEVT_POS = 8;
        static constexpr unsigned SWEVT_MASK = 0x00000100;
        static constexpr unsigned SWEVT(unsigned value) { return (value << 8); }
        static constexpr unsigned EVGEN_POS = 16;
        static constexpr unsigned EVGEN_MASK = 0x003f0000;
        static constexpr unsigned EVGEN(unsigned value) { return (value << 16); }
        static constexpr unsigned PATH_POS = 24;
        static constexpr unsigned PATH_MASK = 0x03000000;
        static constexpr unsigned PATH(unsigned value) { return (value << 24); }
        static constexpr unsigned EDGSEL_POS = 26;
        static constexpr unsigned EDGSEL_MASK = 0x0c000000;
        static constexpr unsigned EDGSEL(unsigned value) { return (value << 26); }
    } CHANNEL;

    volatile union USER_T // USER: User Multiplexer 
    {
        uint16_t reg;
        struct __attribute__((packed)) USER_BIT_T
        {
            unsigned USER    : 5; // bits 0..4 User Multiplexer Selection
            unsigned         : 3; // bits 5..7 unused
            unsigned CHANNEL : 4; // bits 8..11 Channel Event Selection
            unsigned         : 4; // bits 12..15 unused    
        } bit;
    
        static constexpr unsigned USER_POS = 0;
        static constexpr unsigned USER_MASK = 0x0000001f;
        static constexpr unsigned USER(unsigned value) { return (value << 0); }
        static constexpr unsigned CHANNEL_POS = 8;
        static constexpr unsigned CHANNEL_MASK = 0x00000f00;
        static constexpr unsigned CHANNEL(unsigned value) { return (value << 8); }
    } USER;

    uint8_t Reserved2[2];

    volatile union CHSTATUS_T // CHSTATUS: Channel Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) CHSTATUS_BIT_T
        {
            unsigned USRRDY0 : 1; // bit 0 Channel 0 User Ready
            unsigned USRRDY1 : 1; // bit 1 Channel 1 User Ready
            unsigned USRRDY2 : 1; // bit 2 Channel 2 User Ready
            unsigned USRRDY3 : 1; // bit 3 Channel 3 User Ready
            unsigned USRRDY4 : 1; // bit 4 Channel 4 User Ready
            unsigned USRRDY5 : 1; // bit 5 Channel 5 User Ready
            unsigned         : 2; // bits 6..7 unused
            unsigned CHBUSY0 : 1; // bit 8 Channel 0 Busy
            unsigned CHBUSY1 : 1; // bit 9 Channel 1 Busy
            unsigned CHBUSY2 : 1; // bit 10 Channel 2 Busy
            unsigned CHBUSY3 : 1; // bit 11 Channel 3 Busy
            unsigned CHBUSY4 : 1; // bit 12 Channel 4 Busy
            unsigned CHBUSY5 : 1; // bit 13 Channel 5 Busy
            unsigned         : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned USRRDY0_POS = 0;
        static constexpr unsigned USRRDY0_MASK = 0x00000001;
        static constexpr unsigned USRRDY0(unsigned value) { return (value << 0); }
        static constexpr unsigned USRRDY1_POS = 1;
        static constexpr unsigned USRRDY1_MASK = 0x00000002;
        static constexpr unsigned USRRDY1(unsigned value) { return (value << 1); }
        static constexpr unsigned USRRDY2_POS = 2;
        static constexpr unsigned USRRDY2_MASK = 0x00000004;
        static constexpr unsigned USRRDY2(unsigned value) { return (value << 2); }
        static constexpr unsigned USRRDY3_POS = 3;
        static constexpr unsigned USRRDY3_MASK = 0x00000008;
        static constexpr unsigned USRRDY3(unsigned value) { return (value << 3); }
        static constexpr unsigned USRRDY4_POS = 4;
        static constexpr unsigned USRRDY4_MASK = 0x00000010;
        static constexpr unsigned USRRDY4(unsigned value) { return (value << 4); }
        static constexpr unsigned USRRDY5_POS = 5;
        static constexpr unsigned USRRDY5_MASK = 0x00000020;
        static constexpr unsigned USRRDY5(unsigned value) { return (value << 5); }
        static constexpr unsigned CHBUSY0_POS = 8;
        static constexpr unsigned CHBUSY0_MASK = 0x00000100;
        static constexpr unsigned CHBUSY0(unsigned value) { return (value << 8); }
        static constexpr unsigned CHBUSY1_POS = 9;
        static constexpr unsigned CHBUSY1_MASK = 0x00000200;
        static constexpr unsigned CHBUSY1(unsigned value) { return (value << 9); }
        static constexpr unsigned CHBUSY2_POS = 10;
        static constexpr unsigned CHBUSY2_MASK = 0x00000400;
        static constexpr unsigned CHBUSY2(unsigned value) { return (value << 10); }
        static constexpr unsigned CHBUSY3_POS = 11;
        static constexpr unsigned CHBUSY3_MASK = 0x00000800;
        static constexpr unsigned CHBUSY3(unsigned value) { return (value << 11); }
        static constexpr unsigned CHBUSY4_POS = 12;
        static constexpr unsigned CHBUSY4_MASK = 0x00001000;
        static constexpr unsigned CHBUSY4(unsigned value) { return (value << 12); }
        static constexpr unsigned CHBUSY5_POS = 13;
        static constexpr unsigned CHBUSY5_MASK = 0x00002000;
        static constexpr unsigned CHBUSY5(unsigned value) { return (value << 13); }
    } CHSTATUS;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned OVR0 : 1; // bit 0 Channel 0 Overrun Interrupt Enable
            unsigned OVR1 : 1; // bit 1 Channel 1 Overrun Interrupt Enable
            unsigned OVR2 : 1; // bit 2 Channel 2 Overrun Interrupt Enable
            unsigned OVR3 : 1; // bit 3 Channel 3 Overrun Interrupt Enable
            unsigned OVR4 : 1; // bit 4 Channel 4 Overrun Interrupt Enable
            unsigned OVR5 : 1; // bit 5 Channel 5 Overrun Interrupt Enable
            unsigned      : 2; // bits 6..7 unused
            unsigned EVD0 : 1; // bit 8 Channel 0 Event Detection Interrupt Enable
            unsigned EVD1 : 1; // bit 9 Channel 1 Event Detection Interrupt Enable
            unsigned EVD2 : 1; // bit 10 Channel 2 Event Detection Interrupt Enable
            unsigned EVD3 : 1; // bit 11 Channel 3 Event Detection Interrupt Enable
            unsigned EVD4 : 1; // bit 12 Channel 4 Event Detection Interrupt Enable
            unsigned EVD5 : 1; // bit 13 Channel 5 Event Detection Interrupt Enable
            unsigned      : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned OVR0_POS = 0;
        static constexpr unsigned OVR0_MASK = 0x00000001;
        static constexpr unsigned OVR0(unsigned value) { return (value << 0); }
        static constexpr unsigned OVR1_POS = 1;
        static constexpr unsigned OVR1_MASK = 0x00000002;
        static constexpr unsigned OVR1(unsigned value) { return (value << 1); }
        static constexpr unsigned OVR2_POS = 2;
        static constexpr unsigned OVR2_MASK = 0x00000004;
        static constexpr unsigned OVR2(unsigned value) { return (value << 2); }
        static constexpr unsigned OVR3_POS = 3;
        static constexpr unsigned OVR3_MASK = 0x00000008;
        static constexpr unsigned OVR3(unsigned value) { return (value << 3); }
        static constexpr unsigned OVR4_POS = 4;
        static constexpr unsigned OVR4_MASK = 0x00000010;
        static constexpr unsigned OVR4(unsigned value) { return (value << 4); }
        static constexpr unsigned OVR5_POS = 5;
        static constexpr unsigned OVR5_MASK = 0x00000020;
        static constexpr unsigned OVR5(unsigned value) { return (value << 5); }
        static constexpr unsigned EVD0_POS = 8;
        static constexpr unsigned EVD0_MASK = 0x00000100;
        static constexpr unsigned EVD0(unsigned value) { return (value << 8); }
        static constexpr unsigned EVD1_POS = 9;
        static constexpr unsigned EVD1_MASK = 0x00000200;
        static constexpr unsigned EVD1(unsigned value) { return (value << 9); }
        static constexpr unsigned EVD2_POS = 10;
        static constexpr unsigned EVD2_MASK = 0x00000400;
        static constexpr unsigned EVD2(unsigned value) { return (value << 10); }
        static constexpr unsigned EVD3_POS = 11;
        static constexpr unsigned EVD3_MASK = 0x00000800;
        static constexpr unsigned EVD3(unsigned value) { return (value << 11); }
        static constexpr unsigned EVD4_POS = 12;
        static constexpr unsigned EVD4_MASK = 0x00001000;
        static constexpr unsigned EVD4(unsigned value) { return (value << 12); }
        static constexpr unsigned EVD5_POS = 13;
        static constexpr unsigned EVD5_MASK = 0x00002000;
        static constexpr unsigned EVD5(unsigned value) { return (value << 13); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned OVR0 : 1; // bit 0 Channel 0 Overrun Interrupt Enable
            unsigned OVR1 : 1; // bit 1 Channel 1 Overrun Interrupt Enable
            unsigned OVR2 : 1; // bit 2 Channel 2 Overrun Interrupt Enable
            unsigned OVR3 : 1; // bit 3 Channel 3 Overrun Interrupt Enable
            unsigned OVR4 : 1; // bit 4 Channel 4 Overrun Interrupt Enable
            unsigned OVR5 : 1; // bit 5 Channel 5 Overrun Interrupt Enable
            unsigned      : 2; // bits 6..7 unused
            unsigned EVD0 : 1; // bit 8 Channel 0 Event Detection Interrupt Enable
            unsigned EVD1 : 1; // bit 9 Channel 1 Event Detection Interrupt Enable
            unsigned EVD2 : 1; // bit 10 Channel 2 Event Detection Interrupt Enable
            unsigned EVD3 : 1; // bit 11 Channel 3 Event Detection Interrupt Enable
            unsigned EVD4 : 1; // bit 12 Channel 4 Event Detection Interrupt Enable
            unsigned EVD5 : 1; // bit 13 Channel 5 Event Detection Interrupt Enable
            unsigned      : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned OVR0_POS = 0;
        static constexpr unsigned OVR0_MASK = 0x00000001;
        static constexpr unsigned OVR0(unsigned value) { return (value << 0); }
        static constexpr unsigned OVR1_POS = 1;
        static constexpr unsigned OVR1_MASK = 0x00000002;
        static constexpr unsigned OVR1(unsigned value) { return (value << 1); }
        static constexpr unsigned OVR2_POS = 2;
        static constexpr unsigned OVR2_MASK = 0x00000004;
        static constexpr unsigned OVR2(unsigned value) { return (value << 2); }
        static constexpr unsigned OVR3_POS = 3;
        static constexpr unsigned OVR3_MASK = 0x00000008;
        static constexpr unsigned OVR3(unsigned value) { return (value << 3); }
        static constexpr unsigned OVR4_POS = 4;
        static constexpr unsigned OVR4_MASK = 0x00000010;
        static constexpr unsigned OVR4(unsigned value) { return (value << 4); }
        static constexpr unsigned OVR5_POS = 5;
        static constexpr unsigned OVR5_MASK = 0x00000020;
        static constexpr unsigned OVR5(unsigned value) { return (value << 5); }
        static constexpr unsigned EVD0_POS = 8;
        static constexpr unsigned EVD0_MASK = 0x00000100;
        static constexpr unsigned EVD0(unsigned value) { return (value << 8); }
        static constexpr unsigned EVD1_POS = 9;
        static constexpr unsigned EVD1_MASK = 0x00000200;
        static constexpr unsigned EVD1(unsigned value) { return (value << 9); }
        static constexpr unsigned EVD2_POS = 10;
        static constexpr unsigned EVD2_MASK = 0x00000400;
        static constexpr unsigned EVD2(unsigned value) { return (value << 10); }
        static constexpr unsigned EVD3_POS = 11;
        static constexpr unsigned EVD3_MASK = 0x00000800;
        static constexpr unsigned EVD3(unsigned value) { return (value << 11); }
        static constexpr unsigned EVD4_POS = 12;
        static constexpr unsigned EVD4_MASK = 0x00001000;
        static constexpr unsigned EVD4(unsigned value) { return (value << 12); }
        static constexpr unsigned EVD5_POS = 13;
        static constexpr unsigned EVD5_MASK = 0x00002000;
        static constexpr unsigned EVD5(unsigned value) { return (value << 13); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned OVR0 : 1; // bit 0 Channel 0 Overrun
            unsigned OVR1 : 1; // bit 1 Channel 1 Overrun
            unsigned OVR2 : 1; // bit 2 Channel 2 Overrun
            unsigned OVR3 : 1; // bit 3 Channel 3 Overrun
            unsigned OVR4 : 1; // bit 4 Channel 4 Overrun
            unsigned OVR5 : 1; // bit 5 Channel 5 Overrun
            unsigned      : 2; // bits 6..7 unused
            unsigned EVD0 : 1; // bit 8 Channel 0 Event Detection
            unsigned EVD1 : 1; // bit 9 Channel 1 Event Detection
            unsigned EVD2 : 1; // bit 10 Channel 2 Event Detection
            unsigned EVD3 : 1; // bit 11 Channel 3 Event Detection
            unsigned EVD4 : 1; // bit 12 Channel 4 Event Detection
            unsigned EVD5 : 1; // bit 13 Channel 5 Event Detection
            unsigned      : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned OVR0_POS = 0;
        static constexpr unsigned OVR0_MASK = 0x00000001;
        static constexpr unsigned OVR0(unsigned value) { return (value << 0); }
        static constexpr unsigned OVR1_POS = 1;
        static constexpr unsigned OVR1_MASK = 0x00000002;
        static constexpr unsigned OVR1(unsigned value) { return (value << 1); }
        static constexpr unsigned OVR2_POS = 2;
        static constexpr unsigned OVR2_MASK = 0x00000004;
        static constexpr unsigned OVR2(unsigned value) { return (value << 2); }
        static constexpr unsigned OVR3_POS = 3;
        static constexpr unsigned OVR3_MASK = 0x00000008;
        static constexpr unsigned OVR3(unsigned value) { return (value << 3); }
        static constexpr unsigned OVR4_POS = 4;
        static constexpr unsigned OVR4_MASK = 0x00000010;
        static constexpr unsigned OVR4(unsigned value) { return (value << 4); }
        static constexpr unsigned OVR5_POS = 5;
        static constexpr unsigned OVR5_MASK = 0x00000020;
        static constexpr unsigned OVR5(unsigned value) { return (value << 5); }
        static constexpr unsigned EVD0_POS = 8;
        static constexpr unsigned EVD0_MASK = 0x00000100;
        static constexpr unsigned EVD0(unsigned value) { return (value << 8); }
        static constexpr unsigned EVD1_POS = 9;
        static constexpr unsigned EVD1_MASK = 0x00000200;
        static constexpr unsigned EVD1(unsigned value) { return (value << 9); }
        static constexpr unsigned EVD2_POS = 10;
        static constexpr unsigned EVD2_MASK = 0x00000400;
        static constexpr unsigned EVD2(unsigned value) { return (value << 10); }
        static constexpr unsigned EVD3_POS = 11;
        static constexpr unsigned EVD3_MASK = 0x00000800;
        static constexpr unsigned EVD3(unsigned value) { return (value << 11); }
        static constexpr unsigned EVD4_POS = 12;
        static constexpr unsigned EVD4_MASK = 0x00001000;
        static constexpr unsigned EVD4(unsigned value) { return (value << 12); }
        static constexpr unsigned EVD5_POS = 13;
        static constexpr unsigned EVD5_MASK = 0x00002000;
        static constexpr unsigned EVD5(unsigned value) { return (value << 13); }
    } INTFLAG;

}; // struct EVSYS_T

static_assert(sizeof(EVSYS_T) == EVSYS_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp