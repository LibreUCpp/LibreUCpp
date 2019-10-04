#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TC_T
{
    static constexpr size_t INSTANCE_SIZE = 28;
    static constexpr size_t PADDED_INSTANCE_SIZE = 28;
    static constexpr intptr_t BASE_ADDRESS_TC1 = 0x42001800;
    static constexpr intptr_t BASE_ADDRESS_TC2 = 0x42001c00;

    static constexpr intptr_t ADDR_OFFSET_COUNT8_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_READREQ = 0x02;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CTRLBCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CTRLBSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CTRLC = 0x06;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_DBGCTRL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_EVCTRL = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_INTENCLR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_INTENSET = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_INTFLAG = 0x0e;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_STATUS = 0x0f;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_COUNT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_PER = 0x14;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CC = 0x18;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_READREQ = 0x02;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CTRLBCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CTRLBSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CTRLC = 0x06;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_DBGCTRL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_EVCTRL = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_INTENCLR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_INTENSET = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_INTFLAG = 0x0e;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_STATUS = 0x0f;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_COUNT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CC = 0x18;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_READREQ = 0x02;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CTRLBCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CTRLBSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CTRLC = 0x06;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_DBGCTRL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_EVCTRL = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_INTENCLR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_INTENSET = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_INTFLAG = 0x0e;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_STATUS = 0x0f;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_COUNT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CC = 0x18;

    union // clustered register
    {
        struct __attribute__((packed)) // Cluster COUNT8
        {
        
            volatile union COUNT8_CTRLA_T // COUNT8_CTRLA: Control A 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT8_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 TC Mode
                    unsigned           : 1; // bit 4 unused
                    unsigned WAVEGEN   : 2; // bits 5..6 Waveform Generation Operation
                    unsigned           : 1; // bit 7 unused
                    unsigned PRESCALER : 3; // bits 8..10 Prescaler
                    unsigned RUNSTDBY  : 1; // bit 11 Run in Standby
                    unsigned PRESCSYNC : 2; // bits 12..13 Prescaler and Counter Synchronization
                    unsigned           : 2; // bits 14..15 unused    
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
                static constexpr unsigned WAVEGEN_POS = 5;
                static constexpr unsigned WAVEGEN_MASK = 0x00000060;
                static constexpr unsigned WAVEGEN(unsigned value) { return (value << 5); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000700;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
                static constexpr unsigned RUNSTDBY_POS = 11;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000800;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 11); }
                static constexpr unsigned PRESCSYNC_POS = 12;
                static constexpr unsigned PRESCSYNC_MASK = 0x00003000;
                static constexpr unsigned PRESCSYNC(unsigned value) { return (value << 12); }
            } COUNT8_CTRLA;

            volatile union COUNT8_READREQ_T // COUNT8_READREQ: Read Request 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT8_READREQ_BIT_T
                {
                    unsigned ADDR  : 5; // bits 0..4 Address
                    unsigned       : 9; // bits 5..13 unused
                    unsigned RCONT : 1; // bit 14 Read Continuously
                    unsigned RREQ  : 1; // bit 15 Read Request    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x0000001f;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned RCONT_POS = 14;
                static constexpr unsigned RCONT_MASK = 0x00004000;
                static constexpr unsigned RCONT(unsigned value) { return (value << 14); }
                static constexpr unsigned RREQ_POS = 15;
                static constexpr unsigned RREQ_MASK = 0x00008000;
                static constexpr unsigned RREQ(unsigned value) { return (value << 15); }
            } COUNT8_READREQ;

            volatile union COUNT8_CTRLBCLR_T // COUNT8_CTRLBCLR: Control B Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CTRLBCLR_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned         : 1; // bit 1 unused
                    unsigned ONESHOT : 1; // bit 2 One-Shot
                    unsigned         : 3; // bits 3..5 unused
                    unsigned CMD     : 2; // bits 6..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 6;
                static constexpr unsigned CMD_MASK = 0x000000c0;
                static constexpr unsigned CMD(unsigned value) { return (value << 6); }
            } COUNT8_CTRLBCLR;

            volatile union COUNT8_CTRLBSET_T // COUNT8_CTRLBSET: Control B Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CTRLBSET_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned         : 1; // bit 1 unused
                    unsigned ONESHOT : 1; // bit 2 One-Shot
                    unsigned         : 3; // bits 3..5 unused
                    unsigned CMD     : 2; // bits 6..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 6;
                static constexpr unsigned CMD_MASK = 0x000000c0;
                static constexpr unsigned CMD(unsigned value) { return (value << 6); }
            } COUNT8_CTRLBSET;

            volatile union COUNT8_CTRLC_T // COUNT8_CTRLC: Control C 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CTRLC_BIT_T
                {
                    unsigned INVEN0 : 1; // bit 0 Output Waveform 0 Invert Enable
                    unsigned INVEN1 : 1; // bit 1 Output Waveform 1 Invert Enable
                    unsigned        : 2; // bits 2..3 unused
                    unsigned CPTEN0 : 1; // bit 4 Capture Channel 0 Enable
                    unsigned CPTEN1 : 1; // bit 5 Capture Channel 1 Enable
                    unsigned        : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned INVEN0_POS = 0;
                static constexpr unsigned INVEN0_MASK = 0x00000001;
                static constexpr unsigned INVEN0(unsigned value) { return (value << 0); }
                static constexpr unsigned INVEN1_POS = 1;
                static constexpr unsigned INVEN1_MASK = 0x00000002;
                static constexpr unsigned INVEN1(unsigned value) { return (value << 1); }
                static constexpr unsigned CPTEN0_POS = 4;
                static constexpr unsigned CPTEN0_MASK = 0x00000010;
                static constexpr unsigned CPTEN0(unsigned value) { return (value << 4); }
                static constexpr unsigned CPTEN1_POS = 5;
                static constexpr unsigned CPTEN1_MASK = 0x00000020;
                static constexpr unsigned CPTEN1(unsigned value) { return (value << 5); }
            } COUNT8_CTRLC;

            uint8_t Reserved1[1];

            volatile union COUNT8_DBGCTRL_T // COUNT8_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Debug Run Mode
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } COUNT8_DBGCTRL;

            uint8_t Reserved2[1];

            volatile union COUNT8_EVCTRL_T // COUNT8_EVCTRL: Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT8_EVCTRL_BIT_T
                {
                    unsigned EVACT : 3; // bits 0..2 Event Action
                    unsigned       : 1; // bit 3 unused
                    unsigned TCINV : 1; // bit 4 TC Inverted Event Input
                    unsigned TCEI  : 1; // bit 5 TC Event Input
                    unsigned       : 2; // bits 6..7 unused
                    unsigned OVFEO : 1; // bit 8 Overflow/Underflow Event Output Enable
                    unsigned       : 3; // bits 9..11 unused
                    unsigned MCEO0 : 1; // bit 12 Match or Capture Channel 0 Event Output Enable
                    unsigned MCEO1 : 1; // bit 13 Match or Capture Channel 1 Event Output Enable
                    unsigned       : 2; // bits 14..15 unused    
                } bit;
            
                static constexpr unsigned EVACT_POS = 0;
                static constexpr unsigned EVACT_MASK = 0x00000007;
                static constexpr unsigned EVACT(unsigned value) { return (value << 0); }
                static constexpr unsigned TCINV_POS = 4;
                static constexpr unsigned TCINV_MASK = 0x00000010;
                static constexpr unsigned TCINV(unsigned value) { return (value << 4); }
                static constexpr unsigned TCEI_POS = 5;
                static constexpr unsigned TCEI_MASK = 0x00000020;
                static constexpr unsigned TCEI(unsigned value) { return (value << 5); }
                static constexpr unsigned OVFEO_POS = 8;
                static constexpr unsigned OVFEO_MASK = 0x00000100;
                static constexpr unsigned OVFEO(unsigned value) { return (value << 8); }
                static constexpr unsigned MCEO0_POS = 12;
                static constexpr unsigned MCEO0_MASK = 0x00001000;
                static constexpr unsigned MCEO0(unsigned value) { return (value << 12); }
                static constexpr unsigned MCEO1_POS = 13;
                static constexpr unsigned MCEO1_MASK = 0x00002000;
                static constexpr unsigned MCEO1(unsigned value) { return (value << 13); }
            } COUNT8_EVCTRL;

            volatile union COUNT8_INTENCLR_T // COUNT8_INTENCLR: Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_INTENCLR_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow Interrupt Enable
                    unsigned ERR     : 1; // bit 1 Error Interrupt Enable
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0 Interrupt Enable
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1 Interrupt Enable
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT8_INTENCLR;

            volatile union COUNT8_INTENSET_T // COUNT8_INTENSET: Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_INTENSET_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow Interrupt Enable
                    unsigned ERR     : 1; // bit 1 Error Interrupt Enable
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0 Interrupt Enable
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1 Interrupt Enable
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT8_INTENSET;

            volatile union COUNT8_INTFLAG_T // COUNT8_INTFLAG: Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_INTFLAG_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow
                    unsigned ERR     : 1; // bit 1 Error
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT8_INTFLAG;

            volatile union COUNT8_STATUS_T // COUNT8_STATUS: Status 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_STATUS_BIT_T
                {
                    unsigned          : 3; // bits 0..2 unused
                    unsigned STOP     : 1; // bit 3 Stop
                    unsigned SLAVE    : 1; // bit 4 Slave
                    unsigned          : 2; // bits 5..6 unused
                    unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
                } bit;
            
                static constexpr unsigned STOP_POS = 3;
                static constexpr unsigned STOP_MASK = 0x00000008;
                static constexpr unsigned STOP(unsigned value) { return (value << 3); }
                static constexpr unsigned SLAVE_POS = 4;
                static constexpr unsigned SLAVE_MASK = 0x00000010;
                static constexpr unsigned SLAVE(unsigned value) { return (value << 4); }
                static constexpr unsigned SYNCBUSY_POS = 7;
                static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
                static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
            } COUNT8_STATUS;

            volatile union COUNT8_COUNT_T // COUNT8_COUNT: COUNT8 Counter Value 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_COUNT_BIT_T
                {
                    unsigned COUNT : 8; // bits 0..7 Counter Value    
                } bit;
            
                static constexpr unsigned COUNT_POS = 0;
                static constexpr unsigned COUNT_MASK = 0x000000ff;
                static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
            } COUNT8_COUNT;

            uint8_t Reserved3[3];

            volatile union COUNT8_PER_T // COUNT8_PER: COUNT8 Period Value 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_PER_BIT_T
                {
                    unsigned PER : 8; // bits 0..7 Period Value    
                } bit;
            
                static constexpr unsigned PER_POS = 0;
                static constexpr unsigned PER_MASK = 0x000000ff;
                static constexpr unsigned PER(unsigned value) { return (value << 0); }
            } COUNT8_PER;

            uint8_t Reserved4[3];

            volatile union COUNT8_CC_T // COUNT8_CC: COUNT8 Compare/Capture 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CC_BIT_T
                {
                    unsigned CC : 8; // bits 0..7 Compare/Capture Value    
                } bit;
            
                static constexpr unsigned CC_POS = 0;
                static constexpr unsigned CC_MASK = 0x000000ff;
                static constexpr unsigned CC(unsigned value) { return (value << 0); }
            } COUNT8_CC;

        } COUNT8;

        struct __attribute__((packed)) // Cluster COUNT16
        {
        
            volatile union COUNT16_CTRLA_T // COUNT16_CTRLA: Control A 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 TC Mode
                    unsigned           : 1; // bit 4 unused
                    unsigned WAVEGEN   : 2; // bits 5..6 Waveform Generation Operation
                    unsigned           : 1; // bit 7 unused
                    unsigned PRESCALER : 3; // bits 8..10 Prescaler
                    unsigned RUNSTDBY  : 1; // bit 11 Run in Standby
                    unsigned PRESCSYNC : 2; // bits 12..13 Prescaler and Counter Synchronization
                    unsigned           : 2; // bits 14..15 unused    
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
                static constexpr unsigned WAVEGEN_POS = 5;
                static constexpr unsigned WAVEGEN_MASK = 0x00000060;
                static constexpr unsigned WAVEGEN(unsigned value) { return (value << 5); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000700;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
                static constexpr unsigned RUNSTDBY_POS = 11;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000800;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 11); }
                static constexpr unsigned PRESCSYNC_POS = 12;
                static constexpr unsigned PRESCSYNC_MASK = 0x00003000;
                static constexpr unsigned PRESCSYNC(unsigned value) { return (value << 12); }
            } COUNT16_CTRLA;

            volatile union COUNT16_READREQ_T // COUNT16_READREQ: Read Request 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_READREQ_BIT_T
                {
                    unsigned ADDR  : 5; // bits 0..4 Address
                    unsigned       : 9; // bits 5..13 unused
                    unsigned RCONT : 1; // bit 14 Read Continuously
                    unsigned RREQ  : 1; // bit 15 Read Request    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x0000001f;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned RCONT_POS = 14;
                static constexpr unsigned RCONT_MASK = 0x00004000;
                static constexpr unsigned RCONT(unsigned value) { return (value << 14); }
                static constexpr unsigned RREQ_POS = 15;
                static constexpr unsigned RREQ_MASK = 0x00008000;
                static constexpr unsigned RREQ(unsigned value) { return (value << 15); }
            } COUNT16_READREQ;

            volatile union COUNT16_CTRLBCLR_T // COUNT16_CTRLBCLR: Control B Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_CTRLBCLR_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned         : 1; // bit 1 unused
                    unsigned ONESHOT : 1; // bit 2 One-Shot
                    unsigned         : 3; // bits 3..5 unused
                    unsigned CMD     : 2; // bits 6..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 6;
                static constexpr unsigned CMD_MASK = 0x000000c0;
                static constexpr unsigned CMD(unsigned value) { return (value << 6); }
            } COUNT16_CTRLBCLR;

            volatile union COUNT16_CTRLBSET_T // COUNT16_CTRLBSET: Control B Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_CTRLBSET_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned         : 1; // bit 1 unused
                    unsigned ONESHOT : 1; // bit 2 One-Shot
                    unsigned         : 3; // bits 3..5 unused
                    unsigned CMD     : 2; // bits 6..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 6;
                static constexpr unsigned CMD_MASK = 0x000000c0;
                static constexpr unsigned CMD(unsigned value) { return (value << 6); }
            } COUNT16_CTRLBSET;

            volatile union COUNT16_CTRLC_T // COUNT16_CTRLC: Control C 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_CTRLC_BIT_T
                {
                    unsigned INVEN0 : 1; // bit 0 Output Waveform 0 Invert Enable
                    unsigned INVEN1 : 1; // bit 1 Output Waveform 1 Invert Enable
                    unsigned        : 2; // bits 2..3 unused
                    unsigned CPTEN0 : 1; // bit 4 Capture Channel 0 Enable
                    unsigned CPTEN1 : 1; // bit 5 Capture Channel 1 Enable
                    unsigned        : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned INVEN0_POS = 0;
                static constexpr unsigned INVEN0_MASK = 0x00000001;
                static constexpr unsigned INVEN0(unsigned value) { return (value << 0); }
                static constexpr unsigned INVEN1_POS = 1;
                static constexpr unsigned INVEN1_MASK = 0x00000002;
                static constexpr unsigned INVEN1(unsigned value) { return (value << 1); }
                static constexpr unsigned CPTEN0_POS = 4;
                static constexpr unsigned CPTEN0_MASK = 0x00000010;
                static constexpr unsigned CPTEN0(unsigned value) { return (value << 4); }
                static constexpr unsigned CPTEN1_POS = 5;
                static constexpr unsigned CPTEN1_MASK = 0x00000020;
                static constexpr unsigned CPTEN1(unsigned value) { return (value << 5); }
            } COUNT16_CTRLC;

            uint8_t Reserved1[1];

            volatile union COUNT16_DBGCTRL_T // COUNT16_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Debug Run Mode
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } COUNT16_DBGCTRL;

            uint8_t Reserved2[1];

            volatile union COUNT16_EVCTRL_T // COUNT16_EVCTRL: Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_EVCTRL_BIT_T
                {
                    unsigned EVACT : 3; // bits 0..2 Event Action
                    unsigned       : 1; // bit 3 unused
                    unsigned TCINV : 1; // bit 4 TC Inverted Event Input
                    unsigned TCEI  : 1; // bit 5 TC Event Input
                    unsigned       : 2; // bits 6..7 unused
                    unsigned OVFEO : 1; // bit 8 Overflow/Underflow Event Output Enable
                    unsigned       : 3; // bits 9..11 unused
                    unsigned MCEO0 : 1; // bit 12 Match or Capture Channel 0 Event Output Enable
                    unsigned MCEO1 : 1; // bit 13 Match or Capture Channel 1 Event Output Enable
                    unsigned       : 2; // bits 14..15 unused    
                } bit;
            
                static constexpr unsigned EVACT_POS = 0;
                static constexpr unsigned EVACT_MASK = 0x00000007;
                static constexpr unsigned EVACT(unsigned value) { return (value << 0); }
                static constexpr unsigned TCINV_POS = 4;
                static constexpr unsigned TCINV_MASK = 0x00000010;
                static constexpr unsigned TCINV(unsigned value) { return (value << 4); }
                static constexpr unsigned TCEI_POS = 5;
                static constexpr unsigned TCEI_MASK = 0x00000020;
                static constexpr unsigned TCEI(unsigned value) { return (value << 5); }
                static constexpr unsigned OVFEO_POS = 8;
                static constexpr unsigned OVFEO_MASK = 0x00000100;
                static constexpr unsigned OVFEO(unsigned value) { return (value << 8); }
                static constexpr unsigned MCEO0_POS = 12;
                static constexpr unsigned MCEO0_MASK = 0x00001000;
                static constexpr unsigned MCEO0(unsigned value) { return (value << 12); }
                static constexpr unsigned MCEO1_POS = 13;
                static constexpr unsigned MCEO1_MASK = 0x00002000;
                static constexpr unsigned MCEO1(unsigned value) { return (value << 13); }
            } COUNT16_EVCTRL;

            volatile union COUNT16_INTENCLR_T // COUNT16_INTENCLR: Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_INTENCLR_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow Interrupt Enable
                    unsigned ERR     : 1; // bit 1 Error Interrupt Enable
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0 Interrupt Enable
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1 Interrupt Enable
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT16_INTENCLR;

            volatile union COUNT16_INTENSET_T // COUNT16_INTENSET: Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_INTENSET_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow Interrupt Enable
                    unsigned ERR     : 1; // bit 1 Error Interrupt Enable
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0 Interrupt Enable
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1 Interrupt Enable
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT16_INTENSET;

            volatile union COUNT16_INTFLAG_T // COUNT16_INTFLAG: Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_INTFLAG_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow
                    unsigned ERR     : 1; // bit 1 Error
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT16_INTFLAG;

            volatile union COUNT16_STATUS_T // COUNT16_STATUS: Status 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_STATUS_BIT_T
                {
                    unsigned          : 3; // bits 0..2 unused
                    unsigned STOP     : 1; // bit 3 Stop
                    unsigned SLAVE    : 1; // bit 4 Slave
                    unsigned          : 2; // bits 5..6 unused
                    unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
                } bit;
            
                static constexpr unsigned STOP_POS = 3;
                static constexpr unsigned STOP_MASK = 0x00000008;
                static constexpr unsigned STOP(unsigned value) { return (value << 3); }
                static constexpr unsigned SLAVE_POS = 4;
                static constexpr unsigned SLAVE_MASK = 0x00000010;
                static constexpr unsigned SLAVE(unsigned value) { return (value << 4); }
                static constexpr unsigned SYNCBUSY_POS = 7;
                static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
                static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
            } COUNT16_STATUS;

            volatile union COUNT16_COUNT_T // COUNT16_COUNT: COUNT16 Counter Value 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_COUNT_BIT_T
                {
                    unsigned COUNT : 16; // bits 0..15 Count Value    
                } bit;
            
                static constexpr unsigned COUNT_POS = 0;
                static constexpr unsigned COUNT_MASK = 0x0000ffff;
                static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
            } COUNT16_COUNT;

            uint8_t Reserved3[6];

            volatile union COUNT16_CC_T // COUNT16_CC: COUNT16 Compare/Capture 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_CC_BIT_T
                {
                    unsigned CC : 16; // bits 0..15 Compare/Capture Value    
                } bit;
            
                static constexpr unsigned CC_POS = 0;
                static constexpr unsigned CC_MASK = 0x0000ffff;
                static constexpr unsigned CC(unsigned value) { return (value << 0); }
            } COUNT16_CC;

        } COUNT16;

        struct __attribute__((packed)) // Cluster COUNT32
        {
        
            volatile union COUNT32_CTRLA_T // COUNT32_CTRLA: Control A 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT32_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 TC Mode
                    unsigned           : 1; // bit 4 unused
                    unsigned WAVEGEN   : 2; // bits 5..6 Waveform Generation Operation
                    unsigned           : 1; // bit 7 unused
                    unsigned PRESCALER : 3; // bits 8..10 Prescaler
                    unsigned RUNSTDBY  : 1; // bit 11 Run in Standby
                    unsigned PRESCSYNC : 2; // bits 12..13 Prescaler and Counter Synchronization
                    unsigned           : 2; // bits 14..15 unused    
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
                static constexpr unsigned WAVEGEN_POS = 5;
                static constexpr unsigned WAVEGEN_MASK = 0x00000060;
                static constexpr unsigned WAVEGEN(unsigned value) { return (value << 5); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000700;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
                static constexpr unsigned RUNSTDBY_POS = 11;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000800;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 11); }
                static constexpr unsigned PRESCSYNC_POS = 12;
                static constexpr unsigned PRESCSYNC_MASK = 0x00003000;
                static constexpr unsigned PRESCSYNC(unsigned value) { return (value << 12); }
            } COUNT32_CTRLA;

            volatile union COUNT32_READREQ_T // COUNT32_READREQ: Read Request 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT32_READREQ_BIT_T
                {
                    unsigned ADDR  : 5; // bits 0..4 Address
                    unsigned       : 9; // bits 5..13 unused
                    unsigned RCONT : 1; // bit 14 Read Continuously
                    unsigned RREQ  : 1; // bit 15 Read Request    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x0000001f;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned RCONT_POS = 14;
                static constexpr unsigned RCONT_MASK = 0x00004000;
                static constexpr unsigned RCONT(unsigned value) { return (value << 14); }
                static constexpr unsigned RREQ_POS = 15;
                static constexpr unsigned RREQ_MASK = 0x00008000;
                static constexpr unsigned RREQ(unsigned value) { return (value << 15); }
            } COUNT32_READREQ;

            volatile union COUNT32_CTRLBCLR_T // COUNT32_CTRLBCLR: Control B Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_CTRLBCLR_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned         : 1; // bit 1 unused
                    unsigned ONESHOT : 1; // bit 2 One-Shot
                    unsigned         : 3; // bits 3..5 unused
                    unsigned CMD     : 2; // bits 6..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 6;
                static constexpr unsigned CMD_MASK = 0x000000c0;
                static constexpr unsigned CMD(unsigned value) { return (value << 6); }
            } COUNT32_CTRLBCLR;

            volatile union COUNT32_CTRLBSET_T // COUNT32_CTRLBSET: Control B Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_CTRLBSET_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned         : 1; // bit 1 unused
                    unsigned ONESHOT : 1; // bit 2 One-Shot
                    unsigned         : 3; // bits 3..5 unused
                    unsigned CMD     : 2; // bits 6..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 6;
                static constexpr unsigned CMD_MASK = 0x000000c0;
                static constexpr unsigned CMD(unsigned value) { return (value << 6); }
            } COUNT32_CTRLBSET;

            volatile union COUNT32_CTRLC_T // COUNT32_CTRLC: Control C 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_CTRLC_BIT_T
                {
                    unsigned INVEN0 : 1; // bit 0 Output Waveform 0 Invert Enable
                    unsigned INVEN1 : 1; // bit 1 Output Waveform 1 Invert Enable
                    unsigned        : 2; // bits 2..3 unused
                    unsigned CPTEN0 : 1; // bit 4 Capture Channel 0 Enable
                    unsigned CPTEN1 : 1; // bit 5 Capture Channel 1 Enable
                    unsigned        : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned INVEN0_POS = 0;
                static constexpr unsigned INVEN0_MASK = 0x00000001;
                static constexpr unsigned INVEN0(unsigned value) { return (value << 0); }
                static constexpr unsigned INVEN1_POS = 1;
                static constexpr unsigned INVEN1_MASK = 0x00000002;
                static constexpr unsigned INVEN1(unsigned value) { return (value << 1); }
                static constexpr unsigned CPTEN0_POS = 4;
                static constexpr unsigned CPTEN0_MASK = 0x00000010;
                static constexpr unsigned CPTEN0(unsigned value) { return (value << 4); }
                static constexpr unsigned CPTEN1_POS = 5;
                static constexpr unsigned CPTEN1_MASK = 0x00000020;
                static constexpr unsigned CPTEN1(unsigned value) { return (value << 5); }
            } COUNT32_CTRLC;

            uint8_t Reserved1[1];

            volatile union COUNT32_DBGCTRL_T // COUNT32_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Debug Run Mode
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } COUNT32_DBGCTRL;

            uint8_t Reserved2[1];

            volatile union COUNT32_EVCTRL_T // COUNT32_EVCTRL: Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT32_EVCTRL_BIT_T
                {
                    unsigned EVACT : 3; // bits 0..2 Event Action
                    unsigned       : 1; // bit 3 unused
                    unsigned TCINV : 1; // bit 4 TC Inverted Event Input
                    unsigned TCEI  : 1; // bit 5 TC Event Input
                    unsigned       : 2; // bits 6..7 unused
                    unsigned OVFEO : 1; // bit 8 Overflow/Underflow Event Output Enable
                    unsigned       : 3; // bits 9..11 unused
                    unsigned MCEO0 : 1; // bit 12 Match or Capture Channel 0 Event Output Enable
                    unsigned MCEO1 : 1; // bit 13 Match or Capture Channel 1 Event Output Enable
                    unsigned       : 2; // bits 14..15 unused    
                } bit;
            
                static constexpr unsigned EVACT_POS = 0;
                static constexpr unsigned EVACT_MASK = 0x00000007;
                static constexpr unsigned EVACT(unsigned value) { return (value << 0); }
                static constexpr unsigned TCINV_POS = 4;
                static constexpr unsigned TCINV_MASK = 0x00000010;
                static constexpr unsigned TCINV(unsigned value) { return (value << 4); }
                static constexpr unsigned TCEI_POS = 5;
                static constexpr unsigned TCEI_MASK = 0x00000020;
                static constexpr unsigned TCEI(unsigned value) { return (value << 5); }
                static constexpr unsigned OVFEO_POS = 8;
                static constexpr unsigned OVFEO_MASK = 0x00000100;
                static constexpr unsigned OVFEO(unsigned value) { return (value << 8); }
                static constexpr unsigned MCEO0_POS = 12;
                static constexpr unsigned MCEO0_MASK = 0x00001000;
                static constexpr unsigned MCEO0(unsigned value) { return (value << 12); }
                static constexpr unsigned MCEO1_POS = 13;
                static constexpr unsigned MCEO1_MASK = 0x00002000;
                static constexpr unsigned MCEO1(unsigned value) { return (value << 13); }
            } COUNT32_EVCTRL;

            volatile union COUNT32_INTENCLR_T // COUNT32_INTENCLR: Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_INTENCLR_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow Interrupt Enable
                    unsigned ERR     : 1; // bit 1 Error Interrupt Enable
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0 Interrupt Enable
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1 Interrupt Enable
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT32_INTENCLR;

            volatile union COUNT32_INTENSET_T // COUNT32_INTENSET: Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_INTENSET_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow Interrupt Enable
                    unsigned ERR     : 1; // bit 1 Error Interrupt Enable
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready Interrupt Enable
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0 Interrupt Enable
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1 Interrupt Enable
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT32_INTENSET;

            volatile union COUNT32_INTFLAG_T // COUNT32_INTFLAG: Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_INTFLAG_BIT_T
                {
                    unsigned OVF     : 1; // bit 0 Overflow
                    unsigned ERR     : 1; // bit 1 Error
                    unsigned         : 1; // bit 2 unused
                    unsigned SYNCRDY : 1; // bit 3 Synchronization Ready
                    unsigned MC0     : 1; // bit 4 Match or Capture Channel 0
                    unsigned MC1     : 1; // bit 5 Match or Capture Channel 1
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
                static constexpr unsigned SYNCRDY_POS = 3;
                static constexpr unsigned SYNCRDY_MASK = 0x00000008;
                static constexpr unsigned SYNCRDY(unsigned value) { return (value << 3); }
                static constexpr unsigned MC0_POS = 4;
                static constexpr unsigned MC0_MASK = 0x00000010;
                static constexpr unsigned MC0(unsigned value) { return (value << 4); }
                static constexpr unsigned MC1_POS = 5;
                static constexpr unsigned MC1_MASK = 0x00000020;
                static constexpr unsigned MC1(unsigned value) { return (value << 5); }
            } COUNT32_INTFLAG;

            volatile union COUNT32_STATUS_T // COUNT32_STATUS: Status 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_STATUS_BIT_T
                {
                    unsigned          : 3; // bits 0..2 unused
                    unsigned STOP     : 1; // bit 3 Stop
                    unsigned SLAVE    : 1; // bit 4 Slave
                    unsigned          : 2; // bits 5..6 unused
                    unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
                } bit;
            
                static constexpr unsigned STOP_POS = 3;
                static constexpr unsigned STOP_MASK = 0x00000008;
                static constexpr unsigned STOP(unsigned value) { return (value << 3); }
                static constexpr unsigned SLAVE_POS = 4;
                static constexpr unsigned SLAVE_MASK = 0x00000010;
                static constexpr unsigned SLAVE(unsigned value) { return (value << 4); }
                static constexpr unsigned SYNCBUSY_POS = 7;
                static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
                static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
            } COUNT32_STATUS;

            volatile union COUNT32_COUNT_T // COUNT32_COUNT: COUNT32 Counter Value 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT32_COUNT_BIT_T
                {
                    unsigned COUNT : 32; // bits 0..31 Count Value    
                } bit;
            
                static constexpr unsigned COUNT_POS = 0;
                static constexpr unsigned COUNT_MASK = 0xffffffff;
                static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
            } COUNT32_COUNT;

            uint8_t Reserved3[4];

            volatile union COUNT32_CC_T // COUNT32_CC: COUNT32 Compare/Capture 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT32_CC_BIT_T
                {
                    unsigned CC : 32; // bits 0..31 Compare/Capture Value    
                } bit;
            
                static constexpr unsigned CC_POS = 0;
                static constexpr unsigned CC_MASK = 0xffffffff;
                static constexpr unsigned CC(unsigned value) { return (value << 0); }
            } COUNT32_CC;

        } COUNT32;

    } // clustered register
}; // struct TC1_T

static_assert(sizeof(TC_T) == TC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp