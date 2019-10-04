#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RTC_T
{
    static constexpr size_t INSTANCE_SIZE = 29;
    static constexpr size_t PADDED_INSTANCE_SIZE = 32;
    static constexpr intptr_t BASE_ADDRESS = 0x40001400;

    static constexpr intptr_t ADDR_OFFSET_MODE0_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MODE0_READREQ = 0x02;
    static constexpr intptr_t ADDR_OFFSET_MODE0_EVCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_MODE0_INTENCLR = 0x06;
    static constexpr intptr_t ADDR_OFFSET_MODE0_INTENSET = 0x07;
    static constexpr intptr_t ADDR_OFFSET_MODE0_INTFLAG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_MODE0_STATUS = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_MODE0_DBGCTRL = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_MODE0_FREQCORR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_MODE0_COUNT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_MODE0_COMP = 0x18;
    static constexpr intptr_t ADDR_OFFSET_MODE1_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MODE1_READREQ = 0x02;
    static constexpr intptr_t ADDR_OFFSET_MODE1_EVCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_MODE1_INTENCLR = 0x06;
    static constexpr intptr_t ADDR_OFFSET_MODE1_INTENSET = 0x07;
    static constexpr intptr_t ADDR_OFFSET_MODE1_INTFLAG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_MODE1_STATUS = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_MODE1_DBGCTRL = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_MODE1_FREQCORR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_MODE1_COUNT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_MODE1_PER = 0x14;
    static constexpr intptr_t ADDR_OFFSET_MODE1_COMP = 0x18;
    static constexpr intptr_t ADDR_OFFSET_MODE2_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MODE2_READREQ = 0x02;
    static constexpr intptr_t ADDR_OFFSET_MODE2_EVCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_MODE2_INTENCLR = 0x06;
    static constexpr intptr_t ADDR_OFFSET_MODE2_INTENSET = 0x07;
    static constexpr intptr_t ADDR_OFFSET_MODE2_INTFLAG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_MODE2_STATUS = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_MODE2_DBGCTRL = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_MODE2_FREQCORR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_MODE2_CLOCK = 0x10;
    static constexpr intptr_t ADDR_OFFSET_MODE2_ALARM = 0x18;
    static constexpr intptr_t ADDR_OFFSET_MODE2_MASK = 0x1c;

    union // clustered register
    {
        struct __attribute__((packed)) // Cluster MODE0
        {
        
            volatile union MODE0_CTRL_T // MODE0_CTRL: MODE0 Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE0_CTRL_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 Operating Mode
                    unsigned           : 3; // bits 4..6 unused
                    unsigned MATCHCLR  : 1; // bit 7 Clear on Match
                    unsigned PRESCALER : 4; // bits 8..11 Prescaler
                    unsigned           : 4; // bits 12..15 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000000c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned MATCHCLR_POS = 7;
                static constexpr unsigned MATCHCLR_MASK = 0x00000080;
                static constexpr unsigned MATCHCLR(unsigned value) { return (value << 7); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000f00;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
            } MODE0_CTRL;

            volatile union MODE0_READREQ_T // MODE0_READREQ: Read Request 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE0_READREQ_BIT_T
                {
                    unsigned ADDR  : 6; // bits 0..5 Address
                    unsigned       : 8; // bits 6..13 unused
                    unsigned RCONT : 1; // bit 14 Read Continuously
                    unsigned RREQ  : 1; // bit 15 Read Request    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x0000003f;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned RCONT_POS = 14;
                static constexpr unsigned RCONT_MASK = 0x00004000;
                static constexpr unsigned RCONT(unsigned value) { return (value << 14); }
                static constexpr unsigned RREQ_POS = 15;
                static constexpr unsigned RREQ_MASK = 0x00008000;
                static constexpr unsigned RREQ(unsigned value) { return (value << 15); }
            } MODE0_READREQ;

            volatile union MODE0_EVCTRL_T // MODE0_EVCTRL: MODE0 Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE0_EVCTRL_BIT_T
                {
                    unsigned PEREO0 : 1; // bit 0 Periodic Interval 0 Event Output Enable
                    unsigned PEREO1 : 1; // bit 1 Periodic Interval 1 Event Output Enable
                    unsigned PEREO2 : 1; // bit 2 Periodic Interval 2 Event Output Enable
                    unsigned PEREO3 : 1; // bit 3 Periodic Interval 3 Event Output Enable
                    unsigned PEREO4 : 1; // bit 4 Periodic Interval 4 Event Output Enable
                    unsigned PEREO5 : 1; // bit 5 Periodic Interval 5 Event Output Enable
                    unsigned PEREO6 : 1; // bit 6 Periodic Interval 6 Event Output Enable
                    unsigned PEREO7 : 1; // bit 7 Periodic Interval 7 Event Output Enable
                    unsigned CMPEO0 : 1; // bit 8 Compare 0 Event Output Enable
                    unsigned        : 6; // bits 9..14 unused
                    unsigned OVFEO  : 1; // bit 15 Overflow Event Output Enable    
                } bit;
            
                static constexpr unsigned PEREO0_POS = 0;
                static constexpr unsigned PEREO0_MASK = 0x00000001;
                static constexpr unsigned PEREO0(unsigned value) { return (value << 0); }
                static constexpr unsigned PEREO1_POS = 1;
                static constexpr unsigned PEREO1_MASK = 0x00000002;
                static constexpr unsigned PEREO1(unsigned value) { return (value << 1); }
                static constexpr unsigned PEREO2_POS = 2;
                static constexpr unsigned PEREO2_MASK = 0x00000004;
                static constexpr unsigned PEREO2(unsigned value) { return (value << 2); }
                static constexpr unsigned PEREO3_POS = 3;
                static constexpr unsigned PEREO3_MASK = 0x00000008;
                static constexpr unsigned PEREO3(unsigned value) { return (value << 3); }
                static constexpr unsigned PEREO4_POS = 4;
                static constexpr unsigned PEREO4_MASK = 0x00000010;
                static constexpr unsigned PEREO4(unsigned value) { return (value << 4); }
                static constexpr unsigned PEREO5_POS = 5;
                static constexpr unsigned PEREO5_MASK = 0x00000020;
                static constexpr unsigned PEREO5(unsigned value) { return (value << 5); }
                static constexpr unsigned PEREO6_POS = 6;
                static constexpr unsigned PEREO6_MASK = 0x00000040;
                static constexpr unsigned PEREO6(unsigned value) { return (value << 6); }
                static constexpr unsigned PEREO7_POS = 7;
                static constexpr unsigned PEREO7_MASK = 0x00000080;
                static constexpr unsigned PEREO7(unsigned value) { return (value << 7); }
                static constexpr unsigned CMPEO0_POS = 8;
                static constexpr unsigned CMPEO0_MASK = 0x00000100;
                static constexpr unsigned CMPEO0(unsigned value) { return (value << 8); }
                static constexpr unsigned OVFEO_POS = 15;
                static constexpr unsigned OVFEO_MASK = 0x00008000;
                static constexpr unsigned OVFEO(unsigned value) { return (value << 15); }
            } MODE0_EVCTRL;

            volatile union MODE0_INTENCLR_T // MODE0_INTENCLR: MODE0 Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE0_INTENCLR_BIT_T
                {
                    unsigned CMP0    : 1; // bit 0 Compare 0 Interrupt Enable
                    unsigned         : 5; // bits 1..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready Interrupt Enable
                    unsigned OVF     : 1; // bit 7 Overflow Interrupt Enable    
                } bit;
            
                static constexpr unsigned CMP0_POS = 0;
                static constexpr unsigned CMP0_MASK = 0x00000001;
                static constexpr unsigned CMP0(unsigned value) { return (value << 0); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE0_INTENCLR;

            volatile union MODE0_INTENSET_T // MODE0_INTENSET: MODE0 Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE0_INTENSET_BIT_T
                {
                    unsigned CMP0    : 1; // bit 0 Compare 0 Interrupt Enable
                    unsigned         : 5; // bits 1..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready Interrupt Enable
                    unsigned OVF     : 1; // bit 7 Overflow Interrupt Enable    
                } bit;
            
                static constexpr unsigned CMP0_POS = 0;
                static constexpr unsigned CMP0_MASK = 0x00000001;
                static constexpr unsigned CMP0(unsigned value) { return (value << 0); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE0_INTENSET;

            volatile union MODE0_INTFLAG_T // MODE0_INTFLAG: MODE0 Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE0_INTFLAG_BIT_T
                {
                    unsigned CMP0    : 1; // bit 0 Compare 0
                    unsigned         : 5; // bits 1..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready
                    unsigned OVF     : 1; // bit 7 Overflow    
                } bit;
            
                static constexpr unsigned CMP0_POS = 0;
                static constexpr unsigned CMP0_MASK = 0x00000001;
                static constexpr unsigned CMP0(unsigned value) { return (value << 0); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE0_INTFLAG;

            uint8_t Reserved1[1];

            volatile union MODE0_STATUS_T // MODE0_STATUS: Status 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE0_STATUS_BIT_T
                {
                    unsigned          : 7; // bits 0..6 unused
                    unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
                } bit;
            
                static constexpr unsigned SYNCBUSY_POS = 7;
                static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
                static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
            } MODE0_STATUS;

            volatile union MODE0_DBGCTRL_T // MODE0_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE0_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Run During Debug
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } MODE0_DBGCTRL;

            volatile union MODE0_FREQCORR_T // MODE0_FREQCORR: Frequency Correction 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE0_FREQCORR_BIT_T
                {
                    unsigned VALUE : 7; // bits 0..6 Correction Value
                    unsigned SIGN  : 1; // bit 7 Correction Sign    
                } bit;
            
                static constexpr unsigned VALUE_POS = 0;
                static constexpr unsigned VALUE_MASK = 0x0000007f;
                static constexpr unsigned VALUE(unsigned value) { return (value << 0); }
                static constexpr unsigned SIGN_POS = 7;
                static constexpr unsigned SIGN_MASK = 0x00000080;
                static constexpr unsigned SIGN(unsigned value) { return (value << 7); }
            } MODE0_FREQCORR;

            uint8_t Reserved2[3];

            volatile union MODE0_COUNT_T // MODE0_COUNT: MODE0 Counter Value 
            {
                uint32_t reg;
                struct __attribute__((packed)) MODE0_COUNT_BIT_T
                {
                    unsigned COUNT : 32; // bits 0..31 Counter Value    
                } bit;
            
                static constexpr unsigned COUNT_POS = 0;
                static constexpr unsigned COUNT_MASK = 0xffffffff;
                static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
            } MODE0_COUNT;

            uint8_t Reserved3[4];

            volatile union MODE0_COMP_T // MODE0_COMP: MODE0 Compare n Value 
            {
                uint32_t reg;
                struct __attribute__((packed)) MODE0_COMP_BIT_T
                {
                    unsigned COMP : 32; // bits 0..31 Compare Value    
                } bit;
            
                static constexpr unsigned COMP_POS = 0;
                static constexpr unsigned COMP_MASK = 0xffffffff;
                static constexpr unsigned COMP(unsigned value) { return (value << 0); }
            } MODE0_COMP;

        } MODE0;

        struct __attribute__((packed)) // Cluster MODE1
        {
        
            volatile union MODE1_CTRL_T // MODE1_CTRL: MODE1 Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE1_CTRL_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 Operating Mode
                    unsigned           : 4; // bits 4..7 unused
                    unsigned PRESCALER : 4; // bits 8..11 Prescaler
                    unsigned           : 4; // bits 12..15 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000000c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000f00;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
            } MODE1_CTRL;

            volatile union MODE1_READREQ_T // MODE1_READREQ: Read Request 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE1_READREQ_BIT_T
                {
                    unsigned ADDR  : 6; // bits 0..5 Address
                    unsigned       : 8; // bits 6..13 unused
                    unsigned RCONT : 1; // bit 14 Read Continuously
                    unsigned RREQ  : 1; // bit 15 Read Request    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x0000003f;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned RCONT_POS = 14;
                static constexpr unsigned RCONT_MASK = 0x00004000;
                static constexpr unsigned RCONT(unsigned value) { return (value << 14); }
                static constexpr unsigned RREQ_POS = 15;
                static constexpr unsigned RREQ_MASK = 0x00008000;
                static constexpr unsigned RREQ(unsigned value) { return (value << 15); }
            } MODE1_READREQ;

            volatile union MODE1_EVCTRL_T // MODE1_EVCTRL: MODE1 Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE1_EVCTRL_BIT_T
                {
                    unsigned PEREO0 : 1; // bit 0 Periodic Interval 0 Event Output Enable
                    unsigned PEREO1 : 1; // bit 1 Periodic Interval 1 Event Output Enable
                    unsigned PEREO2 : 1; // bit 2 Periodic Interval 2 Event Output Enable
                    unsigned PEREO3 : 1; // bit 3 Periodic Interval 3 Event Output Enable
                    unsigned PEREO4 : 1; // bit 4 Periodic Interval 4 Event Output Enable
                    unsigned PEREO5 : 1; // bit 5 Periodic Interval 5 Event Output Enable
                    unsigned PEREO6 : 1; // bit 6 Periodic Interval 6 Event Output Enable
                    unsigned PEREO7 : 1; // bit 7 Periodic Interval 7 Event Output Enable
                    unsigned CMPEO0 : 1; // bit 8 Compare 0 Event Output Enable
                    unsigned CMPEO1 : 1; // bit 9 Compare 1 Event Output Enable
                    unsigned        : 5; // bits 10..14 unused
                    unsigned OVFEO  : 1; // bit 15 Overflow Event Output Enable    
                } bit;
            
                static constexpr unsigned PEREO0_POS = 0;
                static constexpr unsigned PEREO0_MASK = 0x00000001;
                static constexpr unsigned PEREO0(unsigned value) { return (value << 0); }
                static constexpr unsigned PEREO1_POS = 1;
                static constexpr unsigned PEREO1_MASK = 0x00000002;
                static constexpr unsigned PEREO1(unsigned value) { return (value << 1); }
                static constexpr unsigned PEREO2_POS = 2;
                static constexpr unsigned PEREO2_MASK = 0x00000004;
                static constexpr unsigned PEREO2(unsigned value) { return (value << 2); }
                static constexpr unsigned PEREO3_POS = 3;
                static constexpr unsigned PEREO3_MASK = 0x00000008;
                static constexpr unsigned PEREO3(unsigned value) { return (value << 3); }
                static constexpr unsigned PEREO4_POS = 4;
                static constexpr unsigned PEREO4_MASK = 0x00000010;
                static constexpr unsigned PEREO4(unsigned value) { return (value << 4); }
                static constexpr unsigned PEREO5_POS = 5;
                static constexpr unsigned PEREO5_MASK = 0x00000020;
                static constexpr unsigned PEREO5(unsigned value) { return (value << 5); }
                static constexpr unsigned PEREO6_POS = 6;
                static constexpr unsigned PEREO6_MASK = 0x00000040;
                static constexpr unsigned PEREO6(unsigned value) { return (value << 6); }
                static constexpr unsigned PEREO7_POS = 7;
                static constexpr unsigned PEREO7_MASK = 0x00000080;
                static constexpr unsigned PEREO7(unsigned value) { return (value << 7); }
                static constexpr unsigned CMPEO0_POS = 8;
                static constexpr unsigned CMPEO0_MASK = 0x00000100;
                static constexpr unsigned CMPEO0(unsigned value) { return (value << 8); }
                static constexpr unsigned CMPEO1_POS = 9;
                static constexpr unsigned CMPEO1_MASK = 0x00000200;
                static constexpr unsigned CMPEO1(unsigned value) { return (value << 9); }
                static constexpr unsigned OVFEO_POS = 15;
                static constexpr unsigned OVFEO_MASK = 0x00008000;
                static constexpr unsigned OVFEO(unsigned value) { return (value << 15); }
            } MODE1_EVCTRL;

            volatile union MODE1_INTENCLR_T // MODE1_INTENCLR: MODE1 Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE1_INTENCLR_BIT_T
                {
                    unsigned CMP0    : 1; // bit 0 Compare 0 Interrupt Enable
                    unsigned CMP1    : 1; // bit 1 Compare 1 Interrupt Enable
                    unsigned         : 4; // bits 2..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready Interrupt Enable
                    unsigned OVF     : 1; // bit 7 Overflow Interrupt Enable    
                } bit;
            
                static constexpr unsigned CMP0_POS = 0;
                static constexpr unsigned CMP0_MASK = 0x00000001;
                static constexpr unsigned CMP0(unsigned value) { return (value << 0); }
                static constexpr unsigned CMP1_POS = 1;
                static constexpr unsigned CMP1_MASK = 0x00000002;
                static constexpr unsigned CMP1(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE1_INTENCLR;

            volatile union MODE1_INTENSET_T // MODE1_INTENSET: MODE1 Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE1_INTENSET_BIT_T
                {
                    unsigned CMP0    : 1; // bit 0 Compare 0 Interrupt Enable
                    unsigned CMP1    : 1; // bit 1 Compare 1 Interrupt Enable
                    unsigned         : 4; // bits 2..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready Interrupt Enable
                    unsigned OVF     : 1; // bit 7 Overflow Interrupt Enable    
                } bit;
            
                static constexpr unsigned CMP0_POS = 0;
                static constexpr unsigned CMP0_MASK = 0x00000001;
                static constexpr unsigned CMP0(unsigned value) { return (value << 0); }
                static constexpr unsigned CMP1_POS = 1;
                static constexpr unsigned CMP1_MASK = 0x00000002;
                static constexpr unsigned CMP1(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE1_INTENSET;

            volatile union MODE1_INTFLAG_T // MODE1_INTFLAG: MODE1 Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE1_INTFLAG_BIT_T
                {
                    unsigned CMP0    : 1; // bit 0 Compare 0
                    unsigned CMP1    : 1; // bit 1 Compare 1
                    unsigned         : 4; // bits 2..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready
                    unsigned OVF     : 1; // bit 7 Overflow    
                } bit;
            
                static constexpr unsigned CMP0_POS = 0;
                static constexpr unsigned CMP0_MASK = 0x00000001;
                static constexpr unsigned CMP0(unsigned value) { return (value << 0); }
                static constexpr unsigned CMP1_POS = 1;
                static constexpr unsigned CMP1_MASK = 0x00000002;
                static constexpr unsigned CMP1(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE1_INTFLAG;

            uint8_t Reserved1[1];

            volatile union MODE1_STATUS_T // MODE1_STATUS: Status 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE1_STATUS_BIT_T
                {
                    unsigned          : 7; // bits 0..6 unused
                    unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
                } bit;
            
                static constexpr unsigned SYNCBUSY_POS = 7;
                static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
                static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
            } MODE1_STATUS;

            volatile union MODE1_DBGCTRL_T // MODE1_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE1_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Run During Debug
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } MODE1_DBGCTRL;

            volatile union MODE1_FREQCORR_T // MODE1_FREQCORR: Frequency Correction 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE1_FREQCORR_BIT_T
                {
                    unsigned VALUE : 7; // bits 0..6 Correction Value
                    unsigned SIGN  : 1; // bit 7 Correction Sign    
                } bit;
            
                static constexpr unsigned VALUE_POS = 0;
                static constexpr unsigned VALUE_MASK = 0x0000007f;
                static constexpr unsigned VALUE(unsigned value) { return (value << 0); }
                static constexpr unsigned SIGN_POS = 7;
                static constexpr unsigned SIGN_MASK = 0x00000080;
                static constexpr unsigned SIGN(unsigned value) { return (value << 7); }
            } MODE1_FREQCORR;

            uint8_t Reserved2[3];

            volatile union MODE1_COUNT_T // MODE1_COUNT: MODE1 Counter Value 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE1_COUNT_BIT_T
                {
                    unsigned COUNT : 16; // bits 0..15 Counter Value    
                } bit;
            
                static constexpr unsigned COUNT_POS = 0;
                static constexpr unsigned COUNT_MASK = 0x0000ffff;
                static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
            } MODE1_COUNT;

            uint8_t Reserved3[2];

            volatile union MODE1_PER_T // MODE1_PER: MODE1 Counter Period 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE1_PER_BIT_T
                {
                    unsigned PER : 16; // bits 0..15 Counter Period    
                } bit;
            
                static constexpr unsigned PER_POS = 0;
                static constexpr unsigned PER_MASK = 0x0000ffff;
                static constexpr unsigned PER(unsigned value) { return (value << 0); }
            } MODE1_PER;

            uint8_t Reserved4[2];

            volatile union MODE1_COMP_T // MODE1_COMP: MODE1 Compare n Value 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE1_COMP_BIT_T
                {
                    unsigned COMP : 16; // bits 0..15 Compare Value    
                } bit;
            
                static constexpr unsigned COMP_POS = 0;
                static constexpr unsigned COMP_MASK = 0x0000ffff;
                static constexpr unsigned COMP(unsigned value) { return (value << 0); }
            } MODE1_COMP;

        } MODE1;

        struct __attribute__((packed)) // Cluster MODE2
        {
        
            volatile union MODE2_CTRL_T // MODE2_CTRL: MODE2 Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE2_CTRL_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 Operating Mode
                    unsigned           : 2; // bits 4..5 unused
                    unsigned CLKREP    : 1; // bit 6 Clock Representation
                    unsigned MATCHCLR  : 1; // bit 7 Clear on Match
                    unsigned PRESCALER : 4; // bits 8..11 Prescaler
                    unsigned           : 4; // bits 12..15 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000000c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned CLKREP_POS = 6;
                static constexpr unsigned CLKREP_MASK = 0x00000040;
                static constexpr unsigned CLKREP(unsigned value) { return (value << 6); }
                static constexpr unsigned MATCHCLR_POS = 7;
                static constexpr unsigned MATCHCLR_MASK = 0x00000080;
                static constexpr unsigned MATCHCLR(unsigned value) { return (value << 7); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000f00;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
            } MODE2_CTRL;

            volatile union MODE2_READREQ_T // MODE2_READREQ: Read Request 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE2_READREQ_BIT_T
                {
                    unsigned ADDR  : 6; // bits 0..5 Address
                    unsigned       : 8; // bits 6..13 unused
                    unsigned RCONT : 1; // bit 14 Read Continuously
                    unsigned RREQ  : 1; // bit 15 Read Request    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x0000003f;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned RCONT_POS = 14;
                static constexpr unsigned RCONT_MASK = 0x00004000;
                static constexpr unsigned RCONT(unsigned value) { return (value << 14); }
                static constexpr unsigned RREQ_POS = 15;
                static constexpr unsigned RREQ_MASK = 0x00008000;
                static constexpr unsigned RREQ(unsigned value) { return (value << 15); }
            } MODE2_READREQ;

            volatile union MODE2_EVCTRL_T // MODE2_EVCTRL: MODE2 Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) MODE2_EVCTRL_BIT_T
                {
                    unsigned PEREO0   : 1; // bit 0 Periodic Interval 0 Event Output Enable
                    unsigned PEREO1   : 1; // bit 1 Periodic Interval 1 Event Output Enable
                    unsigned PEREO2   : 1; // bit 2 Periodic Interval 2 Event Output Enable
                    unsigned PEREO3   : 1; // bit 3 Periodic Interval 3 Event Output Enable
                    unsigned PEREO4   : 1; // bit 4 Periodic Interval 4 Event Output Enable
                    unsigned PEREO5   : 1; // bit 5 Periodic Interval 5 Event Output Enable
                    unsigned PEREO6   : 1; // bit 6 Periodic Interval 6 Event Output Enable
                    unsigned PEREO7   : 1; // bit 7 Periodic Interval 7 Event Output Enable
                    unsigned ALARMEO0 : 1; // bit 8 Alarm 0 Event Output Enable
                    unsigned          : 6; // bits 9..14 unused
                    unsigned OVFEO    : 1; // bit 15 Overflow Event Output Enable    
                } bit;
            
                static constexpr unsigned PEREO0_POS = 0;
                static constexpr unsigned PEREO0_MASK = 0x00000001;
                static constexpr unsigned PEREO0(unsigned value) { return (value << 0); }
                static constexpr unsigned PEREO1_POS = 1;
                static constexpr unsigned PEREO1_MASK = 0x00000002;
                static constexpr unsigned PEREO1(unsigned value) { return (value << 1); }
                static constexpr unsigned PEREO2_POS = 2;
                static constexpr unsigned PEREO2_MASK = 0x00000004;
                static constexpr unsigned PEREO2(unsigned value) { return (value << 2); }
                static constexpr unsigned PEREO3_POS = 3;
                static constexpr unsigned PEREO3_MASK = 0x00000008;
                static constexpr unsigned PEREO3(unsigned value) { return (value << 3); }
                static constexpr unsigned PEREO4_POS = 4;
                static constexpr unsigned PEREO4_MASK = 0x00000010;
                static constexpr unsigned PEREO4(unsigned value) { return (value << 4); }
                static constexpr unsigned PEREO5_POS = 5;
                static constexpr unsigned PEREO5_MASK = 0x00000020;
                static constexpr unsigned PEREO5(unsigned value) { return (value << 5); }
                static constexpr unsigned PEREO6_POS = 6;
                static constexpr unsigned PEREO6_MASK = 0x00000040;
                static constexpr unsigned PEREO6(unsigned value) { return (value << 6); }
                static constexpr unsigned PEREO7_POS = 7;
                static constexpr unsigned PEREO7_MASK = 0x00000080;
                static constexpr unsigned PEREO7(unsigned value) { return (value << 7); }
                static constexpr unsigned ALARMEO0_POS = 8;
                static constexpr unsigned ALARMEO0_MASK = 0x00000100;
                static constexpr unsigned ALARMEO0(unsigned value) { return (value << 8); }
                static constexpr unsigned OVFEO_POS = 15;
                static constexpr unsigned OVFEO_MASK = 0x00008000;
                static constexpr unsigned OVFEO(unsigned value) { return (value << 15); }
            } MODE2_EVCTRL;

            volatile union MODE2_INTENCLR_T // MODE2_INTENCLR: MODE2 Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE2_INTENCLR_BIT_T
                {
                    unsigned ALARM0  : 1; // bit 0 Alarm 0 Interrupt Enable
                    unsigned         : 5; // bits 1..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready Interrupt Enable
                    unsigned OVF     : 1; // bit 7 Overflow Interrupt Enable    
                } bit;
            
                static constexpr unsigned ALARM0_POS = 0;
                static constexpr unsigned ALARM0_MASK = 0x00000001;
                static constexpr unsigned ALARM0(unsigned value) { return (value << 0); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE2_INTENCLR;

            volatile union MODE2_INTENSET_T // MODE2_INTENSET: MODE2 Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE2_INTENSET_BIT_T
                {
                    unsigned ALARM0  : 1; // bit 0 Alarm 0 Interrupt Enable
                    unsigned         : 5; // bits 1..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready Interrupt Enable
                    unsigned OVF     : 1; // bit 7 Overflow Interrupt Enable    
                } bit;
            
                static constexpr unsigned ALARM0_POS = 0;
                static constexpr unsigned ALARM0_MASK = 0x00000001;
                static constexpr unsigned ALARM0(unsigned value) { return (value << 0); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE2_INTENSET;

            volatile union MODE2_INTFLAG_T // MODE2_INTFLAG: MODE2 Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE2_INTFLAG_BIT_T
                {
                    unsigned ALARM0  : 1; // bit 0 Alarm 0
                    unsigned         : 5; // bits 1..5 unused
                    unsigned SYNCRDY : 1; // bit 6 Synchronization Ready
                    unsigned OVF     : 1; // bit 7 Overflow    
                } bit;
            
                static constexpr unsigned ALARM0_POS = 0;
                static constexpr unsigned ALARM0_MASK = 0x00000001;
                static constexpr unsigned ALARM0(unsigned value) { return (value << 0); }
                static constexpr unsigned SYNCRDY_POS = 6;
                static constexpr unsigned SYNCRDY_MASK = 0x00000040;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 6); }
                static constexpr unsigned OVF_POS = 7;
                static constexpr unsigned OVF_MASK = 0x00000080;
                static constexpr unsigned OVF(unsigned value) { return (value << 7); }
            } MODE2_INTFLAG;

            uint8_t Reserved1[1];

            volatile union MODE2_STATUS_T // MODE2_STATUS: Status 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE2_STATUS_BIT_T
                {
                    unsigned          : 7; // bits 0..6 unused
                    unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
                } bit;
            
                static constexpr unsigned SYNCBUSY_POS = 7;
                static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
                static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
            } MODE2_STATUS;

            volatile union MODE2_DBGCTRL_T // MODE2_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE2_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Run During Debug
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } MODE2_DBGCTRL;

            volatile union MODE2_FREQCORR_T // MODE2_FREQCORR: Frequency Correction 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE2_FREQCORR_BIT_T
                {
                    unsigned VALUE : 7; // bits 0..6 Correction Value
                    unsigned SIGN  : 1; // bit 7 Correction Sign    
                } bit;
            
                static constexpr unsigned VALUE_POS = 0;
                static constexpr unsigned VALUE_MASK = 0x0000007f;
                static constexpr unsigned VALUE(unsigned value) { return (value << 0); }
                static constexpr unsigned SIGN_POS = 7;
                static constexpr unsigned SIGN_MASK = 0x00000080;
                static constexpr unsigned SIGN(unsigned value) { return (value << 7); }
            } MODE2_FREQCORR;

            uint8_t Reserved2[3];

            volatile union MODE2_CLOCK_T // MODE2_CLOCK: MODE2 Clock Value 
            {
                uint32_t reg;
                struct __attribute__((packed)) MODE2_CLOCK_BIT_T
                {
                    unsigned SECOND : 6; // bits 0..5 Second
                    unsigned MINUTE : 6; // bits 6..11 Minute
                    unsigned HOUR   : 5; // bits 12..16 Hour
                    unsigned DAY    : 5; // bits 17..21 Day
                    unsigned MONTH  : 4; // bits 22..25 Month
                    unsigned YEAR   : 6; // bits 26..31 Year    
                } bit;
            
                static constexpr unsigned SECOND_POS = 0;
                static constexpr unsigned SECOND_MASK = 0x0000003f;
                static constexpr unsigned SECOND(unsigned value) { return (value << 0); }
                static constexpr unsigned MINUTE_POS = 6;
                static constexpr unsigned MINUTE_MASK = 0x00000fc0;
                static constexpr unsigned MINUTE(unsigned value) { return (value << 6); }
                static constexpr unsigned HOUR_POS = 12;
                static constexpr unsigned HOUR_MASK = 0x0001f000;
                static constexpr unsigned HOUR(unsigned value) { return (value << 12); }
                static constexpr unsigned DAY_POS = 17;
                static constexpr unsigned DAY_MASK = 0x003e0000;
                static constexpr unsigned DAY(unsigned value) { return (value << 17); }
                static constexpr unsigned MONTH_POS = 22;
                static constexpr unsigned MONTH_MASK = 0x03c00000;
                static constexpr unsigned MONTH(unsigned value) { return (value << 22); }
                static constexpr unsigned YEAR_POS = 26;
                static constexpr unsigned YEAR_MASK = 0xfc000000;
                static constexpr unsigned YEAR(unsigned value) { return (value << 26); }
            } MODE2_CLOCK;

            uint8_t Reserved3[4];

            volatile union MODE2_ALARM_T // MODE2_ALARM: MODE2 Alarm n Value 
            {
                uint32_t reg;
                struct __attribute__((packed)) MODE2_ALARM_BIT_T
                {
                    unsigned SECOND : 6; // bits 0..5 Second
                    unsigned MINUTE : 6; // bits 6..11 Minute
                    unsigned HOUR   : 5; // bits 12..16 Hour
                    unsigned DAY    : 5; // bits 17..21 Day
                    unsigned MONTH  : 4; // bits 22..25 Month
                    unsigned YEAR   : 6; // bits 26..31 Year    
                } bit;
            
                static constexpr unsigned SECOND_POS = 0;
                static constexpr unsigned SECOND_MASK = 0x0000003f;
                static constexpr unsigned SECOND(unsigned value) { return (value << 0); }
                static constexpr unsigned MINUTE_POS = 6;
                static constexpr unsigned MINUTE_MASK = 0x00000fc0;
                static constexpr unsigned MINUTE(unsigned value) { return (value << 6); }
                static constexpr unsigned HOUR_POS = 12;
                static constexpr unsigned HOUR_MASK = 0x0001f000;
                static constexpr unsigned HOUR(unsigned value) { return (value << 12); }
                static constexpr unsigned DAY_POS = 17;
                static constexpr unsigned DAY_MASK = 0x003e0000;
                static constexpr unsigned DAY(unsigned value) { return (value << 17); }
                static constexpr unsigned MONTH_POS = 22;
                static constexpr unsigned MONTH_MASK = 0x03c00000;
                static constexpr unsigned MONTH(unsigned value) { return (value << 22); }
                static constexpr unsigned YEAR_POS = 26;
                static constexpr unsigned YEAR_MASK = 0xfc000000;
                static constexpr unsigned YEAR(unsigned value) { return (value << 26); }
            } MODE2_ALARM;

            volatile union MODE2_MASK_T // MODE2_MASK: MODE2 Alarm n Mask 
            {
                uint8_t reg;
                struct __attribute__((packed)) MODE2_MASK_BIT_T
                {
                    unsigned SEL : 3; // bits 0..2 Alarm Mask Selection
                    unsigned     : 5; // bits 3..7 unused    
                } bit;
            
                static constexpr unsigned SEL_POS = 0;
                static constexpr unsigned SEL_MASK = 0x00000007;
                static constexpr unsigned SEL(unsigned value) { return (value << 0); }
            } MODE2_MASK;

        } MODE2;

    } // clustered register
}; // struct RTC_T

static_assert(sizeof(RTC_T) == RTC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp