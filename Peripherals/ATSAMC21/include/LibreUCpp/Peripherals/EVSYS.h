#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) EVSYS_T
{
    static constexpr size_t INSTANCE_SIZE = 328;
    static constexpr intptr_t BASE_ADDRESS = 0x42000000;

    static constexpr intptr_t ADDR_OFFSET_CHANNEL = 0x20;
    static constexpr intptr_t ADDR_OFFSET_USER = 0x80;
    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CHSTATUS = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x14;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_SWEVT = 0x1c;

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

    uint8_t Reserved1[11];

    volatile union CHSTATUS_T // CHSTATUS: Channel Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) CHSTATUS_BIT_T
        {
            unsigned USRRDY0  : 1; // bit 0 Channel 0 User Ready
            unsigned USRRDY1  : 1; // bit 1 Channel 1 User Ready
            unsigned USRRDY2  : 1; // bit 2 Channel 2 User Ready
            unsigned USRRDY3  : 1; // bit 3 Channel 3 User Ready
            unsigned USRRDY4  : 1; // bit 4 Channel 4 User Ready
            unsigned USRRDY5  : 1; // bit 5 Channel 5 User Ready
            unsigned USRRDY6  : 1; // bit 6 Channel 6 User Ready
            unsigned USRRDY7  : 1; // bit 7 Channel 7 User Ready
            unsigned USRRDY8  : 1; // bit 8 Channel 8 User Ready
            unsigned USRRDY9  : 1; // bit 9 Channel 9 User Ready
            unsigned USRRDY10 : 1; // bit 10 Channel 10 User Ready
            unsigned USRRDY11 : 1; // bit 11 Channel 11 User Ready
            unsigned          : 4; // bits 12..15 unused
            unsigned CHBUSY0  : 1; // bit 16 Channel 0 Busy
            unsigned CHBUSY1  : 1; // bit 17 Channel 1 Busy
            unsigned CHBUSY2  : 1; // bit 18 Channel 2 Busy
            unsigned CHBUSY3  : 1; // bit 19 Channel 3 Busy
            unsigned CHBUSY4  : 1; // bit 20 Channel 4 Busy
            unsigned CHBUSY5  : 1; // bit 21 Channel 5 Busy
            unsigned CHBUSY6  : 1; // bit 22 Channel 6 Busy
            unsigned CHBUSY7  : 1; // bit 23 Channel 7 Busy
            unsigned CHBUSY8  : 1; // bit 24 Channel 8 Busy
            unsigned CHBUSY9  : 1; // bit 25 Channel 9 Busy
            unsigned CHBUSY10 : 1; // bit 26 Channel 10 Busy
            unsigned CHBUSY11 : 1; // bit 27 Channel 11 Busy
            unsigned          : 4; // bits 28..31 unused    
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
        static constexpr unsigned USRRDY6_POS = 6;
        static constexpr unsigned USRRDY6_MASK = 0x00000040;
        static constexpr unsigned USRRDY6(unsigned value) { return (value << 6); }
        static constexpr unsigned USRRDY7_POS = 7;
        static constexpr unsigned USRRDY7_MASK = 0x00000080;
        static constexpr unsigned USRRDY7(unsigned value) { return (value << 7); }
        static constexpr unsigned USRRDY8_POS = 8;
        static constexpr unsigned USRRDY8_MASK = 0x00000100;
        static constexpr unsigned USRRDY8(unsigned value) { return (value << 8); }
        static constexpr unsigned USRRDY9_POS = 9;
        static constexpr unsigned USRRDY9_MASK = 0x00000200;
        static constexpr unsigned USRRDY9(unsigned value) { return (value << 9); }
        static constexpr unsigned USRRDY10_POS = 10;
        static constexpr unsigned USRRDY10_MASK = 0x00000400;
        static constexpr unsigned USRRDY10(unsigned value) { return (value << 10); }
        static constexpr unsigned USRRDY11_POS = 11;
        static constexpr unsigned USRRDY11_MASK = 0x00000800;
        static constexpr unsigned USRRDY11(unsigned value) { return (value << 11); }
        static constexpr unsigned CHBUSY0_POS = 16;
        static constexpr unsigned CHBUSY0_MASK = 0x00010000;
        static constexpr unsigned CHBUSY0(unsigned value) { return (value << 16); }
        static constexpr unsigned CHBUSY1_POS = 17;
        static constexpr unsigned CHBUSY1_MASK = 0x00020000;
        static constexpr unsigned CHBUSY1(unsigned value) { return (value << 17); }
        static constexpr unsigned CHBUSY2_POS = 18;
        static constexpr unsigned CHBUSY2_MASK = 0x00040000;
        static constexpr unsigned CHBUSY2(unsigned value) { return (value << 18); }
        static constexpr unsigned CHBUSY3_POS = 19;
        static constexpr unsigned CHBUSY3_MASK = 0x00080000;
        static constexpr unsigned CHBUSY3(unsigned value) { return (value << 19); }
        static constexpr unsigned CHBUSY4_POS = 20;
        static constexpr unsigned CHBUSY4_MASK = 0x00100000;
        static constexpr unsigned CHBUSY4(unsigned value) { return (value << 20); }
        static constexpr unsigned CHBUSY5_POS = 21;
        static constexpr unsigned CHBUSY5_MASK = 0x00200000;
        static constexpr unsigned CHBUSY5(unsigned value) { return (value << 21); }
        static constexpr unsigned CHBUSY6_POS = 22;
        static constexpr unsigned CHBUSY6_MASK = 0x00400000;
        static constexpr unsigned CHBUSY6(unsigned value) { return (value << 22); }
        static constexpr unsigned CHBUSY7_POS = 23;
        static constexpr unsigned CHBUSY7_MASK = 0x00800000;
        static constexpr unsigned CHBUSY7(unsigned value) { return (value << 23); }
        static constexpr unsigned CHBUSY8_POS = 24;
        static constexpr unsigned CHBUSY8_MASK = 0x01000000;
        static constexpr unsigned CHBUSY8(unsigned value) { return (value << 24); }
        static constexpr unsigned CHBUSY9_POS = 25;
        static constexpr unsigned CHBUSY9_MASK = 0x02000000;
        static constexpr unsigned CHBUSY9(unsigned value) { return (value << 25); }
        static constexpr unsigned CHBUSY10_POS = 26;
        static constexpr unsigned CHBUSY10_MASK = 0x04000000;
        static constexpr unsigned CHBUSY10(unsigned value) { return (value << 26); }
        static constexpr unsigned CHBUSY11_POS = 27;
        static constexpr unsigned CHBUSY11_MASK = 0x08000000;
        static constexpr unsigned CHBUSY11(unsigned value) { return (value << 27); }
    } CHSTATUS;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned OVR0  : 1; // bit 0 Channel 0 Overrun Interrupt Enable
            unsigned OVR1  : 1; // bit 1 Channel 1 Overrun Interrupt Enable
            unsigned OVR2  : 1; // bit 2 Channel 2 Overrun Interrupt Enable
            unsigned OVR3  : 1; // bit 3 Channel 3 Overrun Interrupt Enable
            unsigned OVR4  : 1; // bit 4 Channel 4 Overrun Interrupt Enable
            unsigned OVR5  : 1; // bit 5 Channel 5 Overrun Interrupt Enable
            unsigned OVR6  : 1; // bit 6 Channel 6 Overrun Interrupt Enable
            unsigned OVR7  : 1; // bit 7 Channel 7 Overrun Interrupt Enable
            unsigned OVR8  : 1; // bit 8 Channel 8 Overrun Interrupt Enable
            unsigned OVR9  : 1; // bit 9 Channel 9 Overrun Interrupt Enable
            unsigned OVR10 : 1; // bit 10 Channel 10 Overrun Interrupt Enable
            unsigned OVR11 : 1; // bit 11 Channel 11 Overrun Interrupt Enable
            unsigned       : 4; // bits 12..15 unused
            unsigned EVD0  : 1; // bit 16 Channel 0 Event Detection Interrupt Enable
            unsigned EVD1  : 1; // bit 17 Channel 1 Event Detection Interrupt Enable
            unsigned EVD2  : 1; // bit 18 Channel 2 Event Detection Interrupt Enable
            unsigned EVD3  : 1; // bit 19 Channel 3 Event Detection Interrupt Enable
            unsigned EVD4  : 1; // bit 20 Channel 4 Event Detection Interrupt Enable
            unsigned EVD5  : 1; // bit 21 Channel 5 Event Detection Interrupt Enable
            unsigned EVD6  : 1; // bit 22 Channel 6 Event Detection Interrupt Enable
            unsigned EVD7  : 1; // bit 23 Channel 7 Event Detection Interrupt Enable
            unsigned EVD8  : 1; // bit 24 Channel 8 Event Detection Interrupt Enable
            unsigned EVD9  : 1; // bit 25 Channel 9 Event Detection Interrupt Enable
            unsigned EVD10 : 1; // bit 26 Channel 10 Event Detection Interrupt Enable
            unsigned EVD11 : 1; // bit 27 Channel 11 Event Detection Interrupt Enable
            unsigned       : 4; // bits 28..31 unused    
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
        static constexpr unsigned OVR6_POS = 6;
        static constexpr unsigned OVR6_MASK = 0x00000040;
        static constexpr unsigned OVR6(unsigned value) { return (value << 6); }
        static constexpr unsigned OVR7_POS = 7;
        static constexpr unsigned OVR7_MASK = 0x00000080;
        static constexpr unsigned OVR7(unsigned value) { return (value << 7); }
        static constexpr unsigned OVR8_POS = 8;
        static constexpr unsigned OVR8_MASK = 0x00000100;
        static constexpr unsigned OVR8(unsigned value) { return (value << 8); }
        static constexpr unsigned OVR9_POS = 9;
        static constexpr unsigned OVR9_MASK = 0x00000200;
        static constexpr unsigned OVR9(unsigned value) { return (value << 9); }
        static constexpr unsigned OVR10_POS = 10;
        static constexpr unsigned OVR10_MASK = 0x00000400;
        static constexpr unsigned OVR10(unsigned value) { return (value << 10); }
        static constexpr unsigned OVR11_POS = 11;
        static constexpr unsigned OVR11_MASK = 0x00000800;
        static constexpr unsigned OVR11(unsigned value) { return (value << 11); }
        static constexpr unsigned EVD0_POS = 16;
        static constexpr unsigned EVD0_MASK = 0x00010000;
        static constexpr unsigned EVD0(unsigned value) { return (value << 16); }
        static constexpr unsigned EVD1_POS = 17;
        static constexpr unsigned EVD1_MASK = 0x00020000;
        static constexpr unsigned EVD1(unsigned value) { return (value << 17); }
        static constexpr unsigned EVD2_POS = 18;
        static constexpr unsigned EVD2_MASK = 0x00040000;
        static constexpr unsigned EVD2(unsigned value) { return (value << 18); }
        static constexpr unsigned EVD3_POS = 19;
        static constexpr unsigned EVD3_MASK = 0x00080000;
        static constexpr unsigned EVD3(unsigned value) { return (value << 19); }
        static constexpr unsigned EVD4_POS = 20;
        static constexpr unsigned EVD4_MASK = 0x00100000;
        static constexpr unsigned EVD4(unsigned value) { return (value << 20); }
        static constexpr unsigned EVD5_POS = 21;
        static constexpr unsigned EVD5_MASK = 0x00200000;
        static constexpr unsigned EVD5(unsigned value) { return (value << 21); }
        static constexpr unsigned EVD6_POS = 22;
        static constexpr unsigned EVD6_MASK = 0x00400000;
        static constexpr unsigned EVD6(unsigned value) { return (value << 22); }
        static constexpr unsigned EVD7_POS = 23;
        static constexpr unsigned EVD7_MASK = 0x00800000;
        static constexpr unsigned EVD7(unsigned value) { return (value << 23); }
        static constexpr unsigned EVD8_POS = 24;
        static constexpr unsigned EVD8_MASK = 0x01000000;
        static constexpr unsigned EVD8(unsigned value) { return (value << 24); }
        static constexpr unsigned EVD9_POS = 25;
        static constexpr unsigned EVD9_MASK = 0x02000000;
        static constexpr unsigned EVD9(unsigned value) { return (value << 25); }
        static constexpr unsigned EVD10_POS = 26;
        static constexpr unsigned EVD10_MASK = 0x04000000;
        static constexpr unsigned EVD10(unsigned value) { return (value << 26); }
        static constexpr unsigned EVD11_POS = 27;
        static constexpr unsigned EVD11_MASK = 0x08000000;
        static constexpr unsigned EVD11(unsigned value) { return (value << 27); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned OVR0  : 1; // bit 0 Channel 0 Overrun Interrupt Enable
            unsigned OVR1  : 1; // bit 1 Channel 1 Overrun Interrupt Enable
            unsigned OVR2  : 1; // bit 2 Channel 2 Overrun Interrupt Enable
            unsigned OVR3  : 1; // bit 3 Channel 3 Overrun Interrupt Enable
            unsigned OVR4  : 1; // bit 4 Channel 4 Overrun Interrupt Enable
            unsigned OVR5  : 1; // bit 5 Channel 5 Overrun Interrupt Enable
            unsigned OVR6  : 1; // bit 6 Channel 6 Overrun Interrupt Enable
            unsigned OVR7  : 1; // bit 7 Channel 7 Overrun Interrupt Enable
            unsigned OVR8  : 1; // bit 8 Channel 8 Overrun Interrupt Enable
            unsigned OVR9  : 1; // bit 9 Channel 9 Overrun Interrupt Enable
            unsigned OVR10 : 1; // bit 10 Channel 10 Overrun Interrupt Enable
            unsigned OVR11 : 1; // bit 11 Channel 11 Overrun Interrupt Enable
            unsigned       : 4; // bits 12..15 unused
            unsigned EVD0  : 1; // bit 16 Channel 0 Event Detection Interrupt Enable
            unsigned EVD1  : 1; // bit 17 Channel 1 Event Detection Interrupt Enable
            unsigned EVD2  : 1; // bit 18 Channel 2 Event Detection Interrupt Enable
            unsigned EVD3  : 1; // bit 19 Channel 3 Event Detection Interrupt Enable
            unsigned EVD4  : 1; // bit 20 Channel 4 Event Detection Interrupt Enable
            unsigned EVD5  : 1; // bit 21 Channel 5 Event Detection Interrupt Enable
            unsigned EVD6  : 1; // bit 22 Channel 6 Event Detection Interrupt Enable
            unsigned EVD7  : 1; // bit 23 Channel 7 Event Detection Interrupt Enable
            unsigned EVD8  : 1; // bit 24 Channel 8 Event Detection Interrupt Enable
            unsigned EVD9  : 1; // bit 25 Channel 9 Event Detection Interrupt Enable
            unsigned EVD10 : 1; // bit 26 Channel 10 Event Detection Interrupt Enable
            unsigned EVD11 : 1; // bit 27 Channel 11 Event Detection Interrupt Enable
            unsigned       : 4; // bits 28..31 unused    
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
        static constexpr unsigned OVR6_POS = 6;
        static constexpr unsigned OVR6_MASK = 0x00000040;
        static constexpr unsigned OVR6(unsigned value) { return (value << 6); }
        static constexpr unsigned OVR7_POS = 7;
        static constexpr unsigned OVR7_MASK = 0x00000080;
        static constexpr unsigned OVR7(unsigned value) { return (value << 7); }
        static constexpr unsigned OVR8_POS = 8;
        static constexpr unsigned OVR8_MASK = 0x00000100;
        static constexpr unsigned OVR8(unsigned value) { return (value << 8); }
        static constexpr unsigned OVR9_POS = 9;
        static constexpr unsigned OVR9_MASK = 0x00000200;
        static constexpr unsigned OVR9(unsigned value) { return (value << 9); }
        static constexpr unsigned OVR10_POS = 10;
        static constexpr unsigned OVR10_MASK = 0x00000400;
        static constexpr unsigned OVR10(unsigned value) { return (value << 10); }
        static constexpr unsigned OVR11_POS = 11;
        static constexpr unsigned OVR11_MASK = 0x00000800;
        static constexpr unsigned OVR11(unsigned value) { return (value << 11); }
        static constexpr unsigned EVD0_POS = 16;
        static constexpr unsigned EVD0_MASK = 0x00010000;
        static constexpr unsigned EVD0(unsigned value) { return (value << 16); }
        static constexpr unsigned EVD1_POS = 17;
        static constexpr unsigned EVD1_MASK = 0x00020000;
        static constexpr unsigned EVD1(unsigned value) { return (value << 17); }
        static constexpr unsigned EVD2_POS = 18;
        static constexpr unsigned EVD2_MASK = 0x00040000;
        static constexpr unsigned EVD2(unsigned value) { return (value << 18); }
        static constexpr unsigned EVD3_POS = 19;
        static constexpr unsigned EVD3_MASK = 0x00080000;
        static constexpr unsigned EVD3(unsigned value) { return (value << 19); }
        static constexpr unsigned EVD4_POS = 20;
        static constexpr unsigned EVD4_MASK = 0x00100000;
        static constexpr unsigned EVD4(unsigned value) { return (value << 20); }
        static constexpr unsigned EVD5_POS = 21;
        static constexpr unsigned EVD5_MASK = 0x00200000;
        static constexpr unsigned EVD5(unsigned value) { return (value << 21); }
        static constexpr unsigned EVD6_POS = 22;
        static constexpr unsigned EVD6_MASK = 0x00400000;
        static constexpr unsigned EVD6(unsigned value) { return (value << 22); }
        static constexpr unsigned EVD7_POS = 23;
        static constexpr unsigned EVD7_MASK = 0x00800000;
        static constexpr unsigned EVD7(unsigned value) { return (value << 23); }
        static constexpr unsigned EVD8_POS = 24;
        static constexpr unsigned EVD8_MASK = 0x01000000;
        static constexpr unsigned EVD8(unsigned value) { return (value << 24); }
        static constexpr unsigned EVD9_POS = 25;
        static constexpr unsigned EVD9_MASK = 0x02000000;
        static constexpr unsigned EVD9(unsigned value) { return (value << 25); }
        static constexpr unsigned EVD10_POS = 26;
        static constexpr unsigned EVD10_MASK = 0x04000000;
        static constexpr unsigned EVD10(unsigned value) { return (value << 26); }
        static constexpr unsigned EVD11_POS = 27;
        static constexpr unsigned EVD11_MASK = 0x08000000;
        static constexpr unsigned EVD11(unsigned value) { return (value << 27); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned OVR0  : 1; // bit 0 Channel 0 Overrun
            unsigned OVR1  : 1; // bit 1 Channel 1 Overrun
            unsigned OVR2  : 1; // bit 2 Channel 2 Overrun
            unsigned OVR3  : 1; // bit 3 Channel 3 Overrun
            unsigned OVR4  : 1; // bit 4 Channel 4 Overrun
            unsigned OVR5  : 1; // bit 5 Channel 5 Overrun
            unsigned OVR6  : 1; // bit 6 Channel 6 Overrun
            unsigned OVR7  : 1; // bit 7 Channel 7 Overrun
            unsigned OVR8  : 1; // bit 8 Channel 8 Overrun
            unsigned OVR9  : 1; // bit 9 Channel 9 Overrun
            unsigned OVR10 : 1; // bit 10 Channel 10 Overrun
            unsigned OVR11 : 1; // bit 11 Channel 11 Overrun
            unsigned       : 4; // bits 12..15 unused
            unsigned EVD0  : 1; // bit 16 Channel 0 Event Detection
            unsigned EVD1  : 1; // bit 17 Channel 1 Event Detection
            unsigned EVD2  : 1; // bit 18 Channel 2 Event Detection
            unsigned EVD3  : 1; // bit 19 Channel 3 Event Detection
            unsigned EVD4  : 1; // bit 20 Channel 4 Event Detection
            unsigned EVD5  : 1; // bit 21 Channel 5 Event Detection
            unsigned EVD6  : 1; // bit 22 Channel 6 Event Detection
            unsigned EVD7  : 1; // bit 23 Channel 7 Event Detection
            unsigned EVD8  : 1; // bit 24 Channel 8 Event Detection
            unsigned EVD9  : 1; // bit 25 Channel 9 Event Detection
            unsigned EVD10 : 1; // bit 26 Channel 10 Event Detection
            unsigned EVD11 : 1; // bit 27 Channel 11 Event Detection
            unsigned       : 4; // bits 28..31 unused    
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
        static constexpr unsigned OVR6_POS = 6;
        static constexpr unsigned OVR6_MASK = 0x00000040;
        static constexpr unsigned OVR6(unsigned value) { return (value << 6); }
        static constexpr unsigned OVR7_POS = 7;
        static constexpr unsigned OVR7_MASK = 0x00000080;
        static constexpr unsigned OVR7(unsigned value) { return (value << 7); }
        static constexpr unsigned OVR8_POS = 8;
        static constexpr unsigned OVR8_MASK = 0x00000100;
        static constexpr unsigned OVR8(unsigned value) { return (value << 8); }
        static constexpr unsigned OVR9_POS = 9;
        static constexpr unsigned OVR9_MASK = 0x00000200;
        static constexpr unsigned OVR9(unsigned value) { return (value << 9); }
        static constexpr unsigned OVR10_POS = 10;
        static constexpr unsigned OVR10_MASK = 0x00000400;
        static constexpr unsigned OVR10(unsigned value) { return (value << 10); }
        static constexpr unsigned OVR11_POS = 11;
        static constexpr unsigned OVR11_MASK = 0x00000800;
        static constexpr unsigned OVR11(unsigned value) { return (value << 11); }
        static constexpr unsigned EVD0_POS = 16;
        static constexpr unsigned EVD0_MASK = 0x00010000;
        static constexpr unsigned EVD0(unsigned value) { return (value << 16); }
        static constexpr unsigned EVD1_POS = 17;
        static constexpr unsigned EVD1_MASK = 0x00020000;
        static constexpr unsigned EVD1(unsigned value) { return (value << 17); }
        static constexpr unsigned EVD2_POS = 18;
        static constexpr unsigned EVD2_MASK = 0x00040000;
        static constexpr unsigned EVD2(unsigned value) { return (value << 18); }
        static constexpr unsigned EVD3_POS = 19;
        static constexpr unsigned EVD3_MASK = 0x00080000;
        static constexpr unsigned EVD3(unsigned value) { return (value << 19); }
        static constexpr unsigned EVD4_POS = 20;
        static constexpr unsigned EVD4_MASK = 0x00100000;
        static constexpr unsigned EVD4(unsigned value) { return (value << 20); }
        static constexpr unsigned EVD5_POS = 21;
        static constexpr unsigned EVD5_MASK = 0x00200000;
        static constexpr unsigned EVD5(unsigned value) { return (value << 21); }
        static constexpr unsigned EVD6_POS = 22;
        static constexpr unsigned EVD6_MASK = 0x00400000;
        static constexpr unsigned EVD6(unsigned value) { return (value << 22); }
        static constexpr unsigned EVD7_POS = 23;
        static constexpr unsigned EVD7_MASK = 0x00800000;
        static constexpr unsigned EVD7(unsigned value) { return (value << 23); }
        static constexpr unsigned EVD8_POS = 24;
        static constexpr unsigned EVD8_MASK = 0x01000000;
        static constexpr unsigned EVD8(unsigned value) { return (value << 24); }
        static constexpr unsigned EVD9_POS = 25;
        static constexpr unsigned EVD9_MASK = 0x02000000;
        static constexpr unsigned EVD9(unsigned value) { return (value << 25); }
        static constexpr unsigned EVD10_POS = 26;
        static constexpr unsigned EVD10_MASK = 0x04000000;
        static constexpr unsigned EVD10(unsigned value) { return (value << 26); }
        static constexpr unsigned EVD11_POS = 27;
        static constexpr unsigned EVD11_MASK = 0x08000000;
        static constexpr unsigned EVD11(unsigned value) { return (value << 27); }
    } INTFLAG;

    volatile union SWEVT_T // SWEVT: Software Event 
    {
        uint32_t reg;
        struct __attribute__((packed)) SWEVT_BIT_T
        {
            unsigned CHANNEL0  : 1; // bit 0 Channel 0 Software Selection
            unsigned CHANNEL1  : 1; // bit 1 Channel 1 Software Selection
            unsigned CHANNEL2  : 1; // bit 2 Channel 2 Software Selection
            unsigned CHANNEL3  : 1; // bit 3 Channel 3 Software Selection
            unsigned CHANNEL4  : 1; // bit 4 Channel 4 Software Selection
            unsigned CHANNEL5  : 1; // bit 5 Channel 5 Software Selection
            unsigned CHANNEL6  : 1; // bit 6 Channel 6 Software Selection
            unsigned CHANNEL7  : 1; // bit 7 Channel 7 Software Selection
            unsigned CHANNEL8  : 1; // bit 8 Channel 8 Software Selection
            unsigned CHANNEL9  : 1; // bit 9 Channel 9 Software Selection
            unsigned CHANNEL10 : 1; // bit 10 Channel 10 Software Selection
            unsigned CHANNEL11 : 1; // bit 11 Channel 11 Software Selection
            unsigned           : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned CHANNEL0_POS = 0;
        static constexpr unsigned CHANNEL0_MASK = 0x00000001;
        static constexpr unsigned CHANNEL0(unsigned value) { return (value << 0); }
        static constexpr unsigned CHANNEL1_POS = 1;
        static constexpr unsigned CHANNEL1_MASK = 0x00000002;
        static constexpr unsigned CHANNEL1(unsigned value) { return (value << 1); }
        static constexpr unsigned CHANNEL2_POS = 2;
        static constexpr unsigned CHANNEL2_MASK = 0x00000004;
        static constexpr unsigned CHANNEL2(unsigned value) { return (value << 2); }
        static constexpr unsigned CHANNEL3_POS = 3;
        static constexpr unsigned CHANNEL3_MASK = 0x00000008;
        static constexpr unsigned CHANNEL3(unsigned value) { return (value << 3); }
        static constexpr unsigned CHANNEL4_POS = 4;
        static constexpr unsigned CHANNEL4_MASK = 0x00000010;
        static constexpr unsigned CHANNEL4(unsigned value) { return (value << 4); }
        static constexpr unsigned CHANNEL5_POS = 5;
        static constexpr unsigned CHANNEL5_MASK = 0x00000020;
        static constexpr unsigned CHANNEL5(unsigned value) { return (value << 5); }
        static constexpr unsigned CHANNEL6_POS = 6;
        static constexpr unsigned CHANNEL6_MASK = 0x00000040;
        static constexpr unsigned CHANNEL6(unsigned value) { return (value << 6); }
        static constexpr unsigned CHANNEL7_POS = 7;
        static constexpr unsigned CHANNEL7_MASK = 0x00000080;
        static constexpr unsigned CHANNEL7(unsigned value) { return (value << 7); }
        static constexpr unsigned CHANNEL8_POS = 8;
        static constexpr unsigned CHANNEL8_MASK = 0x00000100;
        static constexpr unsigned CHANNEL8(unsigned value) { return (value << 8); }
        static constexpr unsigned CHANNEL9_POS = 9;
        static constexpr unsigned CHANNEL9_MASK = 0x00000200;
        static constexpr unsigned CHANNEL9(unsigned value) { return (value << 9); }
        static constexpr unsigned CHANNEL10_POS = 10;
        static constexpr unsigned CHANNEL10_MASK = 0x00000400;
        static constexpr unsigned CHANNEL10(unsigned value) { return (value << 10); }
        static constexpr unsigned CHANNEL11_POS = 11;
        static constexpr unsigned CHANNEL11_MASK = 0x00000800;
        static constexpr unsigned CHANNEL11(unsigned value) { return (value << 11); }
    } SWEVT;

    volatile union CHANNEL_T // CHANNEL: Channel n 
    {
        uint32_t reg;
        struct __attribute__((packed)) CHANNEL_BIT_T
        {
            unsigned EVGEN    : 7; // bits 0..6 Event Generator Selection
            unsigned          : 1; // bit 7 unused
            unsigned PATH     : 2; // bits 8..9 Path Selection
            unsigned EDGSEL   : 2; // bits 10..11 Edge Detection Selection
            unsigned          : 2; // bits 12..13 unused
            unsigned RUNSTDBY : 1; // bit 14 Run in standby
            unsigned ONDEMAND : 1; // bit 15 Generic Clock On Demand
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EVGEN_POS = 0;
        static constexpr unsigned EVGEN_MASK = 0x0000007f;
        static constexpr unsigned EVGEN(unsigned value) { return (value << 0); }
        static constexpr unsigned PATH_POS = 8;
        static constexpr unsigned PATH_MASK = 0x00000300;
        static constexpr unsigned PATH(unsigned value) { return (value << 8); }
        static constexpr unsigned EDGSEL_POS = 10;
        static constexpr unsigned EDGSEL_MASK = 0x00000c00;
        static constexpr unsigned EDGSEL(unsigned value) { return (value << 10); }
        static constexpr unsigned RUNSTDBY_POS = 14;
        static constexpr unsigned RUNSTDBY_MASK = 0x00004000;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 14); }
        static constexpr unsigned ONDEMAND_POS = 15;
        static constexpr unsigned ONDEMAND_MASK = 0x00008000;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 15); }
    } CHANNEL[12];

    uint8_t Reserved2[48];

    volatile union USER_T // USER: User Multiplexer n 
    {
        uint32_t reg;
        struct __attribute__((packed)) USER_BIT_T
        {
            unsigned CHANNEL : 5; // bits 0..4 Channel Event Selection
            unsigned         : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned CHANNEL_POS = 0;
        static constexpr unsigned CHANNEL_MASK = 0x0000001f;
        static constexpr unsigned CHANNEL(unsigned value) { return (value << 0); }
    } USER[50];

}; // struct EVSYS_T

static_assert(sizeof(EVSYS_T) == EVSYS_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp