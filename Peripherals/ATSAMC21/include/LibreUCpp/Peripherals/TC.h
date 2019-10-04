#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) TC_T
{
    static constexpr size_t INSTANCE_SIZE = 52;
    static constexpr size_t PADDED_INSTANCE_SIZE = 52;
    static constexpr intptr_t BASE_ADDRESS_TC0 = 0x42003000;
    static constexpr intptr_t BASE_ADDRESS_TC1 = 0x42003400;
    static constexpr intptr_t BASE_ADDRESS_TC2 = 0x42003800;
    static constexpr intptr_t BASE_ADDRESS_TC3 = 0x42003c00;
    static constexpr intptr_t BASE_ADDRESS_TC4 = 0x42004000;
    static constexpr intptr_t BASE_ADDRESS_TC5 = 0x43000800;
    static constexpr intptr_t BASE_ADDRESS_TC6 = 0x43000c00;
    static constexpr intptr_t BASE_ADDRESS_TC7 = 0x43001000;

    static constexpr intptr_t ADDR_OFFSET_COUNT8_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CTRLBCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CTRLBSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_EVCTRL = 0x06;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_INTENCLR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_INTENSET = 0x09;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_INTFLAG = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_STATUS = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_WAVE = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_DRVCTRL = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_DBGCTRL = 0x0f;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_SYNCBUSY = 0x10;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_COUNT = 0x14;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_PER = 0x1b;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CC = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_PERBUF = 0x2f;
    static constexpr intptr_t ADDR_OFFSET_COUNT8_CCBUF = 0x30;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CTRLBCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CTRLBSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_EVCTRL = 0x06;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_INTENCLR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_INTENSET = 0x09;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_INTFLAG = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_STATUS = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_WAVE = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_DRVCTRL = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_DBGCTRL = 0x0f;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_SYNCBUSY = 0x10;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_COUNT = 0x14;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CC = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_COUNT16_CCBUF = 0x30;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CTRLBCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CTRLBSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_EVCTRL = 0x06;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_INTENCLR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_INTENSET = 0x09;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_INTFLAG = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_STATUS = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_WAVE = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_DRVCTRL = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_DBGCTRL = 0x0f;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_SYNCBUSY = 0x10;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_COUNT = 0x14;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CC = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_COUNT32_CCBUF = 0x30;

    union // clustered register
    {
        struct __attribute__((packed)) // Cluster COUNT8
        {
        
            volatile union COUNT8_CTRLA_T // COUNT8_CTRLA: Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT8_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 Timer Counter Mode
                    unsigned PRESCSYNC : 2; // bits 4..5 Prescaler and Counter Synchronization
                    unsigned RUNSTDBY  : 1; // bit 6 Run during Standby
                    unsigned ONDEMAND  : 1; // bit 7 Clock On Demand
                    unsigned PRESCALER : 3; // bits 8..10 Prescaler
                    unsigned ALOCK     : 1; // bit 11 Auto Lock
                    unsigned           : 4; // bits 12..15 unused
                    unsigned CAPTEN0   : 1; // bit 16 Capture Channel 0 Enable
                    unsigned CAPTEN1   : 1; // bit 17 Capture Channel 1 Enable
                    unsigned           : 2; // bits 18..19 unused
                    unsigned COPEN0    : 1; // bit 20 Capture On Pin 0 Enable
                    unsigned COPEN1    : 1; // bit 21 Capture On Pin 1 Enable
                    unsigned           : 2; // bits 22..23 unused
                    unsigned CAPTMODE0 : 2; // bits 24..25 Capture Mode Channel 0
                    unsigned           : 1; // bit 26 unused
                    unsigned CAPTMODE1 : 2; // bits 27..28 Capture mode Channel 1
                    unsigned           : 3; // bits 29..31 unused    
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
                static constexpr unsigned PRESCSYNC_POS = 4;
                static constexpr unsigned PRESCSYNC_MASK = 0x00000030;
                static constexpr unsigned PRESCSYNC(unsigned value) { return (value << 4); }
                static constexpr unsigned RUNSTDBY_POS = 6;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
                static constexpr unsigned ONDEMAND_POS = 7;
                static constexpr unsigned ONDEMAND_MASK = 0x00000080;
                static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000700;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
                static constexpr unsigned ALOCK_POS = 11;
                static constexpr unsigned ALOCK_MASK = 0x00000800;
                static constexpr unsigned ALOCK(unsigned value) { return (value << 11); }
                static constexpr unsigned CAPTEN0_POS = 16;
                static constexpr unsigned CAPTEN0_MASK = 0x00010000;
                static constexpr unsigned CAPTEN0(unsigned value) { return (value << 16); }
                static constexpr unsigned CAPTEN1_POS = 17;
                static constexpr unsigned CAPTEN1_MASK = 0x00020000;
                static constexpr unsigned CAPTEN1(unsigned value) { return (value << 17); }
                static constexpr unsigned COPEN0_POS = 20;
                static constexpr unsigned COPEN0_MASK = 0x00100000;
                static constexpr unsigned COPEN0(unsigned value) { return (value << 20); }
                static constexpr unsigned COPEN1_POS = 21;
                static constexpr unsigned COPEN1_MASK = 0x00200000;
                static constexpr unsigned COPEN1(unsigned value) { return (value << 21); }
                static constexpr unsigned CAPTMODE0_POS = 24;
                static constexpr unsigned CAPTMODE0_MASK = 0x03000000;
                static constexpr unsigned CAPTMODE0(unsigned value) { return (value << 24); }
                static constexpr unsigned CAPTMODE1_POS = 27;
                static constexpr unsigned CAPTMODE1_MASK = 0x18000000;
                static constexpr unsigned CAPTMODE1(unsigned value) { return (value << 27); }
            } COUNT8_CTRLA;

            volatile union COUNT8_CTRLBCLR_T // COUNT8_CTRLBCLR: Control B Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CTRLBCLR_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned LUPD    : 1; // bit 1 Lock Update
                    unsigned ONESHOT : 1; // bit 2 One-Shot on Counter
                    unsigned         : 2; // bits 3..4 unused
                    unsigned CMD     : 3; // bits 5..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned LUPD_POS = 1;
                static constexpr unsigned LUPD_MASK = 0x00000002;
                static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 5;
                static constexpr unsigned CMD_MASK = 0x000000e0;
                static constexpr unsigned CMD(unsigned value) { return (value << 5); }
            } COUNT8_CTRLBCLR;

            volatile union COUNT8_CTRLBSET_T // COUNT8_CTRLBSET: Control B Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CTRLBSET_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned LUPD    : 1; // bit 1 Lock Update
                    unsigned ONESHOT : 1; // bit 2 One-Shot on Counter
                    unsigned         : 2; // bits 3..4 unused
                    unsigned CMD     : 3; // bits 5..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned LUPD_POS = 1;
                static constexpr unsigned LUPD_MASK = 0x00000002;
                static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 5;
                static constexpr unsigned CMD_MASK = 0x000000e0;
                static constexpr unsigned CMD(unsigned value) { return (value << 5); }
            } COUNT8_CTRLBSET;

            volatile union COUNT8_EVCTRL_T // COUNT8_EVCTRL: Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT8_EVCTRL_BIT_T
                {
                    unsigned EVACT : 3; // bits 0..2 Event Action
                    unsigned       : 1; // bit 3 unused
                    unsigned TCINV : 1; // bit 4 TC Event Input Polarity
                    unsigned TCEI  : 1; // bit 5 TC Event Enable
                    unsigned       : 2; // bits 6..7 unused
                    unsigned OVFEO : 1; // bit 8 Event Output Enable
                    unsigned       : 3; // bits 9..11 unused
                    unsigned MCEO0 : 1; // bit 12 MC Event Output Enable 0
                    unsigned MCEO1 : 1; // bit 13 MC Event Output Enable 1
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Disable
                    unsigned ERR : 1; // bit 1 ERR Interrupt Disable
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Disable 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Disable 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Enable
                    unsigned ERR : 1; // bit 1 ERR Interrupt Enable
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Enable 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Enable 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Flag
                    unsigned ERR : 1; // bit 1 ERR Interrupt Flag
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Flag 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Flag 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned STOP    : 1; // bit 0 Stop Status Flag
                    unsigned SLAVE   : 1; // bit 1 Slave Status Flag
                    unsigned         : 1; // bit 2 unused
                    unsigned PERBUFV : 1; // bit 3 Synchronization Busy Status
                    unsigned CCBUFV0 : 1; // bit 4 Compare channel buffer 0 valid
                    unsigned CCBUFV1 : 1; // bit 5 Compare channel buffer 1 valid
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned STOP_POS = 0;
                static constexpr unsigned STOP_MASK = 0x00000001;
                static constexpr unsigned STOP(unsigned value) { return (value << 0); }
                static constexpr unsigned SLAVE_POS = 1;
                static constexpr unsigned SLAVE_MASK = 0x00000002;
                static constexpr unsigned SLAVE(unsigned value) { return (value << 1); }
                static constexpr unsigned PERBUFV_POS = 3;
                static constexpr unsigned PERBUFV_MASK = 0x00000008;
                static constexpr unsigned PERBUFV(unsigned value) { return (value << 3); }
                static constexpr unsigned CCBUFV0_POS = 4;
                static constexpr unsigned CCBUFV0_MASK = 0x00000010;
                static constexpr unsigned CCBUFV0(unsigned value) { return (value << 4); }
                static constexpr unsigned CCBUFV1_POS = 5;
                static constexpr unsigned CCBUFV1_MASK = 0x00000020;
                static constexpr unsigned CCBUFV1(unsigned value) { return (value << 5); }
            } COUNT8_STATUS;

            volatile union COUNT8_WAVE_T // COUNT8_WAVE: Waveform Generation Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_WAVE_BIT_T
                {
                    unsigned WAVEGEN : 2; // bits 0..1 Waveform Generation Mode
                    unsigned         : 6; // bits 2..7 unused    
                } bit;
            
                static constexpr unsigned WAVEGEN_POS = 0;
                static constexpr unsigned WAVEGEN_MASK = 0x00000003;
                static constexpr unsigned WAVEGEN(unsigned value) { return (value << 0); }
            } COUNT8_WAVE;

            volatile union COUNT8_DRVCTRL_T // COUNT8_DRVCTRL: Control C 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_DRVCTRL_BIT_T
                {
                    unsigned INVEN0 : 1; // bit 0 Output Waveform Invert Enable 0
                    unsigned INVEN1 : 1; // bit 1 Output Waveform Invert Enable 1
                    unsigned        : 6; // bits 2..7 unused    
                } bit;
            
                static constexpr unsigned INVEN0_POS = 0;
                static constexpr unsigned INVEN0_MASK = 0x00000001;
                static constexpr unsigned INVEN0(unsigned value) { return (value << 0); }
                static constexpr unsigned INVEN1_POS = 1;
                static constexpr unsigned INVEN1_MASK = 0x00000002;
                static constexpr unsigned INVEN1(unsigned value) { return (value << 1); }
            } COUNT8_DRVCTRL;

            uint8_t Reserved1[1];

            volatile union COUNT8_DBGCTRL_T // COUNT8_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Run During Debug
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } COUNT8_DBGCTRL;

            volatile union COUNT8_SYNCBUSY_T // COUNT8_SYNCBUSY: Synchronization Status 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT8_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 swrst
                    unsigned ENABLE : 1; // bit 1 enable
                    unsigned CTRLB  : 1; // bit 2 CTRLB
                    unsigned STATUS : 1; // bit 3 STATUS
                    unsigned COUNT  : 1; // bit 4 Counter
                    unsigned PER    : 1; // bit 5 Period
                    unsigned CC0    : 1; // bit 6 Compare Channel 0
                    unsigned CC1    : 1; // bit 7 Compare Channel 1
                    unsigned        : 24; // bits 8..31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned CTRLB_POS = 2;
                static constexpr unsigned CTRLB_MASK = 0x00000004;
                static constexpr unsigned CTRLB(unsigned value) { return (value << 2); }
                static constexpr unsigned STATUS_POS = 3;
                static constexpr unsigned STATUS_MASK = 0x00000008;
                static constexpr unsigned STATUS(unsigned value) { return (value << 3); }
                static constexpr unsigned COUNT_POS = 4;
                static constexpr unsigned COUNT_MASK = 0x00000010;
                static constexpr unsigned COUNT(unsigned value) { return (value << 4); }
                static constexpr unsigned PER_POS = 5;
                static constexpr unsigned PER_MASK = 0x00000020;
                static constexpr unsigned PER(unsigned value) { return (value << 5); }
                static constexpr unsigned CC0_POS = 6;
                static constexpr unsigned CC0_MASK = 0x00000040;
                static constexpr unsigned CC0(unsigned value) { return (value << 6); }
                static constexpr unsigned CC1_POS = 7;
                static constexpr unsigned CC1_MASK = 0x00000080;
                static constexpr unsigned CC1(unsigned value) { return (value << 7); }
            } COUNT8_SYNCBUSY;

            volatile union COUNT8_COUNT_T // COUNT8_COUNT: COUNT8 Count 
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

            uint8_t Reserved2[6];

            volatile union COUNT8_PER_T // COUNT8_PER: COUNT8 Period 
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

            volatile union COUNT8_CC_T // COUNT8_CC: COUNT8 Compare and Capture 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CC_BIT_T
                {
                    unsigned CC : 8; // bits 0..7 Counter/Compare Value    
                } bit;
            
                static constexpr unsigned CC_POS = 0;
                static constexpr unsigned CC_MASK = 0x000000ff;
                static constexpr unsigned CC(unsigned value) { return (value << 0); }
            } COUNT8_CC;

            uint8_t Reserved3[18];

            volatile union COUNT8_PERBUF_T // COUNT8_PERBUF: COUNT8 Period Buffer 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_PERBUF_BIT_T
                {
                    unsigned PERBUF : 8; // bits 0..7 Period Buffer Value    
                } bit;
            
                static constexpr unsigned PERBUF_POS = 0;
                static constexpr unsigned PERBUF_MASK = 0x000000ff;
                static constexpr unsigned PERBUF(unsigned value) { return (value << 0); }
            } COUNT8_PERBUF;

            volatile union COUNT8_CCBUF_T // COUNT8_CCBUF: COUNT8 Compare and Capture Buffer 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT8_CCBUF_BIT_T
                {
                    unsigned CCBUF : 8; // bits 0..7 Counter/Compare Buffer Value    
                } bit;
            
                static constexpr unsigned CCBUF_POS = 0;
                static constexpr unsigned CCBUF_MASK = 0x000000ff;
                static constexpr unsigned CCBUF(unsigned value) { return (value << 0); }
            } COUNT8_CCBUF;

        } COUNT8;

        struct __attribute__((packed)) // Cluster COUNT16
        {
        
            volatile union COUNT16_CTRLA_T // COUNT16_CTRLA: Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT16_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 Timer Counter Mode
                    unsigned PRESCSYNC : 2; // bits 4..5 Prescaler and Counter Synchronization
                    unsigned RUNSTDBY  : 1; // bit 6 Run during Standby
                    unsigned ONDEMAND  : 1; // bit 7 Clock On Demand
                    unsigned PRESCALER : 3; // bits 8..10 Prescaler
                    unsigned ALOCK     : 1; // bit 11 Auto Lock
                    unsigned           : 4; // bits 12..15 unused
                    unsigned CAPTEN0   : 1; // bit 16 Capture Channel 0 Enable
                    unsigned CAPTEN1   : 1; // bit 17 Capture Channel 1 Enable
                    unsigned           : 2; // bits 18..19 unused
                    unsigned COPEN0    : 1; // bit 20 Capture On Pin 0 Enable
                    unsigned COPEN1    : 1; // bit 21 Capture On Pin 1 Enable
                    unsigned           : 2; // bits 22..23 unused
                    unsigned CAPTMODE0 : 2; // bits 24..25 Capture Mode Channel 0
                    unsigned           : 1; // bit 26 unused
                    unsigned CAPTMODE1 : 2; // bits 27..28 Capture mode Channel 1
                    unsigned           : 3; // bits 29..31 unused    
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
                static constexpr unsigned PRESCSYNC_POS = 4;
                static constexpr unsigned PRESCSYNC_MASK = 0x00000030;
                static constexpr unsigned PRESCSYNC(unsigned value) { return (value << 4); }
                static constexpr unsigned RUNSTDBY_POS = 6;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
                static constexpr unsigned ONDEMAND_POS = 7;
                static constexpr unsigned ONDEMAND_MASK = 0x00000080;
                static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000700;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
                static constexpr unsigned ALOCK_POS = 11;
                static constexpr unsigned ALOCK_MASK = 0x00000800;
                static constexpr unsigned ALOCK(unsigned value) { return (value << 11); }
                static constexpr unsigned CAPTEN0_POS = 16;
                static constexpr unsigned CAPTEN0_MASK = 0x00010000;
                static constexpr unsigned CAPTEN0(unsigned value) { return (value << 16); }
                static constexpr unsigned CAPTEN1_POS = 17;
                static constexpr unsigned CAPTEN1_MASK = 0x00020000;
                static constexpr unsigned CAPTEN1(unsigned value) { return (value << 17); }
                static constexpr unsigned COPEN0_POS = 20;
                static constexpr unsigned COPEN0_MASK = 0x00100000;
                static constexpr unsigned COPEN0(unsigned value) { return (value << 20); }
                static constexpr unsigned COPEN1_POS = 21;
                static constexpr unsigned COPEN1_MASK = 0x00200000;
                static constexpr unsigned COPEN1(unsigned value) { return (value << 21); }
                static constexpr unsigned CAPTMODE0_POS = 24;
                static constexpr unsigned CAPTMODE0_MASK = 0x03000000;
                static constexpr unsigned CAPTMODE0(unsigned value) { return (value << 24); }
                static constexpr unsigned CAPTMODE1_POS = 27;
                static constexpr unsigned CAPTMODE1_MASK = 0x18000000;
                static constexpr unsigned CAPTMODE1(unsigned value) { return (value << 27); }
            } COUNT16_CTRLA;

            volatile union COUNT16_CTRLBCLR_T // COUNT16_CTRLBCLR: Control B Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_CTRLBCLR_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned LUPD    : 1; // bit 1 Lock Update
                    unsigned ONESHOT : 1; // bit 2 One-Shot on Counter
                    unsigned         : 2; // bits 3..4 unused
                    unsigned CMD     : 3; // bits 5..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned LUPD_POS = 1;
                static constexpr unsigned LUPD_MASK = 0x00000002;
                static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 5;
                static constexpr unsigned CMD_MASK = 0x000000e0;
                static constexpr unsigned CMD(unsigned value) { return (value << 5); }
            } COUNT16_CTRLBCLR;

            volatile union COUNT16_CTRLBSET_T // COUNT16_CTRLBSET: Control B Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_CTRLBSET_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned LUPD    : 1; // bit 1 Lock Update
                    unsigned ONESHOT : 1; // bit 2 One-Shot on Counter
                    unsigned         : 2; // bits 3..4 unused
                    unsigned CMD     : 3; // bits 5..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned LUPD_POS = 1;
                static constexpr unsigned LUPD_MASK = 0x00000002;
                static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 5;
                static constexpr unsigned CMD_MASK = 0x000000e0;
                static constexpr unsigned CMD(unsigned value) { return (value << 5); }
            } COUNT16_CTRLBSET;

            volatile union COUNT16_EVCTRL_T // COUNT16_EVCTRL: Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_EVCTRL_BIT_T
                {
                    unsigned EVACT : 3; // bits 0..2 Event Action
                    unsigned       : 1; // bit 3 unused
                    unsigned TCINV : 1; // bit 4 TC Event Input Polarity
                    unsigned TCEI  : 1; // bit 5 TC Event Enable
                    unsigned       : 2; // bits 6..7 unused
                    unsigned OVFEO : 1; // bit 8 Event Output Enable
                    unsigned       : 3; // bits 9..11 unused
                    unsigned MCEO0 : 1; // bit 12 MC Event Output Enable 0
                    unsigned MCEO1 : 1; // bit 13 MC Event Output Enable 1
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Disable
                    unsigned ERR : 1; // bit 1 ERR Interrupt Disable
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Disable 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Disable 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Enable
                    unsigned ERR : 1; // bit 1 ERR Interrupt Enable
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Enable 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Enable 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Flag
                    unsigned ERR : 1; // bit 1 ERR Interrupt Flag
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Flag 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Flag 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned STOP    : 1; // bit 0 Stop Status Flag
                    unsigned SLAVE   : 1; // bit 1 Slave Status Flag
                    unsigned         : 1; // bit 2 unused
                    unsigned PERBUFV : 1; // bit 3 Synchronization Busy Status
                    unsigned CCBUFV0 : 1; // bit 4 Compare channel buffer 0 valid
                    unsigned CCBUFV1 : 1; // bit 5 Compare channel buffer 1 valid
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned STOP_POS = 0;
                static constexpr unsigned STOP_MASK = 0x00000001;
                static constexpr unsigned STOP(unsigned value) { return (value << 0); }
                static constexpr unsigned SLAVE_POS = 1;
                static constexpr unsigned SLAVE_MASK = 0x00000002;
                static constexpr unsigned SLAVE(unsigned value) { return (value << 1); }
                static constexpr unsigned PERBUFV_POS = 3;
                static constexpr unsigned PERBUFV_MASK = 0x00000008;
                static constexpr unsigned PERBUFV(unsigned value) { return (value << 3); }
                static constexpr unsigned CCBUFV0_POS = 4;
                static constexpr unsigned CCBUFV0_MASK = 0x00000010;
                static constexpr unsigned CCBUFV0(unsigned value) { return (value << 4); }
                static constexpr unsigned CCBUFV1_POS = 5;
                static constexpr unsigned CCBUFV1_MASK = 0x00000020;
                static constexpr unsigned CCBUFV1(unsigned value) { return (value << 5); }
            } COUNT16_STATUS;

            volatile union COUNT16_WAVE_T // COUNT16_WAVE: Waveform Generation Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_WAVE_BIT_T
                {
                    unsigned WAVEGEN : 2; // bits 0..1 Waveform Generation Mode
                    unsigned         : 6; // bits 2..7 unused    
                } bit;
            
                static constexpr unsigned WAVEGEN_POS = 0;
                static constexpr unsigned WAVEGEN_MASK = 0x00000003;
                static constexpr unsigned WAVEGEN(unsigned value) { return (value << 0); }
            } COUNT16_WAVE;

            volatile union COUNT16_DRVCTRL_T // COUNT16_DRVCTRL: Control C 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_DRVCTRL_BIT_T
                {
                    unsigned INVEN0 : 1; // bit 0 Output Waveform Invert Enable 0
                    unsigned INVEN1 : 1; // bit 1 Output Waveform Invert Enable 1
                    unsigned        : 6; // bits 2..7 unused    
                } bit;
            
                static constexpr unsigned INVEN0_POS = 0;
                static constexpr unsigned INVEN0_MASK = 0x00000001;
                static constexpr unsigned INVEN0(unsigned value) { return (value << 0); }
                static constexpr unsigned INVEN1_POS = 1;
                static constexpr unsigned INVEN1_MASK = 0x00000002;
                static constexpr unsigned INVEN1(unsigned value) { return (value << 1); }
            } COUNT16_DRVCTRL;

            uint8_t Reserved1[1];

            volatile union COUNT16_DBGCTRL_T // COUNT16_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT16_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Run During Debug
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } COUNT16_DBGCTRL;

            volatile union COUNT16_SYNCBUSY_T // COUNT16_SYNCBUSY: Synchronization Status 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT16_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 swrst
                    unsigned ENABLE : 1; // bit 1 enable
                    unsigned CTRLB  : 1; // bit 2 CTRLB
                    unsigned STATUS : 1; // bit 3 STATUS
                    unsigned COUNT  : 1; // bit 4 Counter
                    unsigned PER    : 1; // bit 5 Period
                    unsigned CC0    : 1; // bit 6 Compare Channel 0
                    unsigned CC1    : 1; // bit 7 Compare Channel 1
                    unsigned        : 24; // bits 8..31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned CTRLB_POS = 2;
                static constexpr unsigned CTRLB_MASK = 0x00000004;
                static constexpr unsigned CTRLB(unsigned value) { return (value << 2); }
                static constexpr unsigned STATUS_POS = 3;
                static constexpr unsigned STATUS_MASK = 0x00000008;
                static constexpr unsigned STATUS(unsigned value) { return (value << 3); }
                static constexpr unsigned COUNT_POS = 4;
                static constexpr unsigned COUNT_MASK = 0x00000010;
                static constexpr unsigned COUNT(unsigned value) { return (value << 4); }
                static constexpr unsigned PER_POS = 5;
                static constexpr unsigned PER_MASK = 0x00000020;
                static constexpr unsigned PER(unsigned value) { return (value << 5); }
                static constexpr unsigned CC0_POS = 6;
                static constexpr unsigned CC0_MASK = 0x00000040;
                static constexpr unsigned CC0(unsigned value) { return (value << 6); }
                static constexpr unsigned CC1_POS = 7;
                static constexpr unsigned CC1_MASK = 0x00000080;
                static constexpr unsigned CC1(unsigned value) { return (value << 7); }
            } COUNT16_SYNCBUSY;

            volatile union COUNT16_COUNT_T // COUNT16_COUNT: COUNT16 Count 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_COUNT_BIT_T
                {
                    unsigned COUNT : 16; // bits 0..15 Counter Value    
                } bit;
            
                static constexpr unsigned COUNT_POS = 0;
                static constexpr unsigned COUNT_MASK = 0x0000ffff;
                static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
            } COUNT16_COUNT;

            uint8_t Reserved2[6];

            volatile union COUNT16_CC_T // COUNT16_CC: COUNT16 Compare and Capture 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_CC_BIT_T
                {
                    unsigned CC : 16; // bits 0..15 Counter/Compare Value    
                } bit;
            
                static constexpr unsigned CC_POS = 0;
                static constexpr unsigned CC_MASK = 0x0000ffff;
                static constexpr unsigned CC(unsigned value) { return (value << 0); }
            } COUNT16_CC;

            uint8_t Reserved3[18];

            volatile union COUNT16_CCBUF_T // COUNT16_CCBUF: COUNT16 Compare and Capture Buffer 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT16_CCBUF_BIT_T
                {
                    unsigned CCBUF : 16; // bits 0..15 Counter/Compare Buffer Value    
                } bit;
            
                static constexpr unsigned CCBUF_POS = 0;
                static constexpr unsigned CCBUF_MASK = 0x0000ffff;
                static constexpr unsigned CCBUF(unsigned value) { return (value << 0); }
            } COUNT16_CCBUF;

        } COUNT16;

        struct __attribute__((packed)) // Cluster COUNT32
        {
        
            volatile union COUNT32_CTRLA_T // COUNT32_CTRLA: Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT32_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 2; // bits 2..3 Timer Counter Mode
                    unsigned PRESCSYNC : 2; // bits 4..5 Prescaler and Counter Synchronization
                    unsigned RUNSTDBY  : 1; // bit 6 Run during Standby
                    unsigned ONDEMAND  : 1; // bit 7 Clock On Demand
                    unsigned PRESCALER : 3; // bits 8..10 Prescaler
                    unsigned ALOCK     : 1; // bit 11 Auto Lock
                    unsigned           : 4; // bits 12..15 unused
                    unsigned CAPTEN0   : 1; // bit 16 Capture Channel 0 Enable
                    unsigned CAPTEN1   : 1; // bit 17 Capture Channel 1 Enable
                    unsigned           : 2; // bits 18..19 unused
                    unsigned COPEN0    : 1; // bit 20 Capture On Pin 0 Enable
                    unsigned COPEN1    : 1; // bit 21 Capture On Pin 1 Enable
                    unsigned           : 2; // bits 22..23 unused
                    unsigned CAPTMODE0 : 2; // bits 24..25 Capture Mode Channel 0
                    unsigned           : 1; // bit 26 unused
                    unsigned CAPTMODE1 : 2; // bits 27..28 Capture mode Channel 1
                    unsigned           : 3; // bits 29..31 unused    
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
                static constexpr unsigned PRESCSYNC_POS = 4;
                static constexpr unsigned PRESCSYNC_MASK = 0x00000030;
                static constexpr unsigned PRESCSYNC(unsigned value) { return (value << 4); }
                static constexpr unsigned RUNSTDBY_POS = 6;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
                static constexpr unsigned ONDEMAND_POS = 7;
                static constexpr unsigned ONDEMAND_MASK = 0x00000080;
                static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
                static constexpr unsigned PRESCALER_POS = 8;
                static constexpr unsigned PRESCALER_MASK = 0x00000700;
                static constexpr unsigned PRESCALER(unsigned value) { return (value << 8); }
                static constexpr unsigned ALOCK_POS = 11;
                static constexpr unsigned ALOCK_MASK = 0x00000800;
                static constexpr unsigned ALOCK(unsigned value) { return (value << 11); }
                static constexpr unsigned CAPTEN0_POS = 16;
                static constexpr unsigned CAPTEN0_MASK = 0x00010000;
                static constexpr unsigned CAPTEN0(unsigned value) { return (value << 16); }
                static constexpr unsigned CAPTEN1_POS = 17;
                static constexpr unsigned CAPTEN1_MASK = 0x00020000;
                static constexpr unsigned CAPTEN1(unsigned value) { return (value << 17); }
                static constexpr unsigned COPEN0_POS = 20;
                static constexpr unsigned COPEN0_MASK = 0x00100000;
                static constexpr unsigned COPEN0(unsigned value) { return (value << 20); }
                static constexpr unsigned COPEN1_POS = 21;
                static constexpr unsigned COPEN1_MASK = 0x00200000;
                static constexpr unsigned COPEN1(unsigned value) { return (value << 21); }
                static constexpr unsigned CAPTMODE0_POS = 24;
                static constexpr unsigned CAPTMODE0_MASK = 0x03000000;
                static constexpr unsigned CAPTMODE0(unsigned value) { return (value << 24); }
                static constexpr unsigned CAPTMODE1_POS = 27;
                static constexpr unsigned CAPTMODE1_MASK = 0x18000000;
                static constexpr unsigned CAPTMODE1(unsigned value) { return (value << 27); }
            } COUNT32_CTRLA;

            volatile union COUNT32_CTRLBCLR_T // COUNT32_CTRLBCLR: Control B Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_CTRLBCLR_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned LUPD    : 1; // bit 1 Lock Update
                    unsigned ONESHOT : 1; // bit 2 One-Shot on Counter
                    unsigned         : 2; // bits 3..4 unused
                    unsigned CMD     : 3; // bits 5..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned LUPD_POS = 1;
                static constexpr unsigned LUPD_MASK = 0x00000002;
                static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 5;
                static constexpr unsigned CMD_MASK = 0x000000e0;
                static constexpr unsigned CMD(unsigned value) { return (value << 5); }
            } COUNT32_CTRLBCLR;

            volatile union COUNT32_CTRLBSET_T // COUNT32_CTRLBSET: Control B Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_CTRLBSET_BIT_T
                {
                    unsigned DIR     : 1; // bit 0 Counter Direction
                    unsigned LUPD    : 1; // bit 1 Lock Update
                    unsigned ONESHOT : 1; // bit 2 One-Shot on Counter
                    unsigned         : 2; // bits 3..4 unused
                    unsigned CMD     : 3; // bits 5..7 Command    
                } bit;
            
                static constexpr unsigned DIR_POS = 0;
                static constexpr unsigned DIR_MASK = 0x00000001;
                static constexpr unsigned DIR(unsigned value) { return (value << 0); }
                static constexpr unsigned LUPD_POS = 1;
                static constexpr unsigned LUPD_MASK = 0x00000002;
                static constexpr unsigned LUPD(unsigned value) { return (value << 1); }
                static constexpr unsigned ONESHOT_POS = 2;
                static constexpr unsigned ONESHOT_MASK = 0x00000004;
                static constexpr unsigned ONESHOT(unsigned value) { return (value << 2); }
                static constexpr unsigned CMD_POS = 5;
                static constexpr unsigned CMD_MASK = 0x000000e0;
                static constexpr unsigned CMD(unsigned value) { return (value << 5); }
            } COUNT32_CTRLBSET;

            volatile union COUNT32_EVCTRL_T // COUNT32_EVCTRL: Event Control 
            {
                uint16_t reg;
                struct __attribute__((packed)) COUNT32_EVCTRL_BIT_T
                {
                    unsigned EVACT : 3; // bits 0..2 Event Action
                    unsigned       : 1; // bit 3 unused
                    unsigned TCINV : 1; // bit 4 TC Event Input Polarity
                    unsigned TCEI  : 1; // bit 5 TC Event Enable
                    unsigned       : 2; // bits 6..7 unused
                    unsigned OVFEO : 1; // bit 8 Event Output Enable
                    unsigned       : 3; // bits 9..11 unused
                    unsigned MCEO0 : 1; // bit 12 MC Event Output Enable 0
                    unsigned MCEO1 : 1; // bit 13 MC Event Output Enable 1
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Disable
                    unsigned ERR : 1; // bit 1 ERR Interrupt Disable
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Disable 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Disable 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Enable
                    unsigned ERR : 1; // bit 1 ERR Interrupt Enable
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Enable 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Enable 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned OVF : 1; // bit 0 OVF Interrupt Flag
                    unsigned ERR : 1; // bit 1 ERR Interrupt Flag
                    unsigned     : 2; // bits 2..3 unused
                    unsigned MC0 : 1; // bit 4 MC Interrupt Flag 0
                    unsigned MC1 : 1; // bit 5 MC Interrupt Flag 1
                    unsigned     : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned OVF_POS = 0;
                static constexpr unsigned OVF_MASK = 0x00000001;
                static constexpr unsigned OVF(unsigned value) { return (value << 0); }
                static constexpr unsigned ERR_POS = 1;
                static constexpr unsigned ERR_MASK = 0x00000002;
                static constexpr unsigned ERR(unsigned value) { return (value << 1); }
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
                    unsigned STOP    : 1; // bit 0 Stop Status Flag
                    unsigned SLAVE   : 1; // bit 1 Slave Status Flag
                    unsigned         : 1; // bit 2 unused
                    unsigned PERBUFV : 1; // bit 3 Synchronization Busy Status
                    unsigned CCBUFV0 : 1; // bit 4 Compare channel buffer 0 valid
                    unsigned CCBUFV1 : 1; // bit 5 Compare channel buffer 1 valid
                    unsigned         : 2; // bits 6..7 unused    
                } bit;
            
                static constexpr unsigned STOP_POS = 0;
                static constexpr unsigned STOP_MASK = 0x00000001;
                static constexpr unsigned STOP(unsigned value) { return (value << 0); }
                static constexpr unsigned SLAVE_POS = 1;
                static constexpr unsigned SLAVE_MASK = 0x00000002;
                static constexpr unsigned SLAVE(unsigned value) { return (value << 1); }
                static constexpr unsigned PERBUFV_POS = 3;
                static constexpr unsigned PERBUFV_MASK = 0x00000008;
                static constexpr unsigned PERBUFV(unsigned value) { return (value << 3); }
                static constexpr unsigned CCBUFV0_POS = 4;
                static constexpr unsigned CCBUFV0_MASK = 0x00000010;
                static constexpr unsigned CCBUFV0(unsigned value) { return (value << 4); }
                static constexpr unsigned CCBUFV1_POS = 5;
                static constexpr unsigned CCBUFV1_MASK = 0x00000020;
                static constexpr unsigned CCBUFV1(unsigned value) { return (value << 5); }
            } COUNT32_STATUS;

            volatile union COUNT32_WAVE_T // COUNT32_WAVE: Waveform Generation Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_WAVE_BIT_T
                {
                    unsigned WAVEGEN : 2; // bits 0..1 Waveform Generation Mode
                    unsigned         : 6; // bits 2..7 unused    
                } bit;
            
                static constexpr unsigned WAVEGEN_POS = 0;
                static constexpr unsigned WAVEGEN_MASK = 0x00000003;
                static constexpr unsigned WAVEGEN(unsigned value) { return (value << 0); }
            } COUNT32_WAVE;

            volatile union COUNT32_DRVCTRL_T // COUNT32_DRVCTRL: Control C 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_DRVCTRL_BIT_T
                {
                    unsigned INVEN0 : 1; // bit 0 Output Waveform Invert Enable 0
                    unsigned INVEN1 : 1; // bit 1 Output Waveform Invert Enable 1
                    unsigned        : 6; // bits 2..7 unused    
                } bit;
            
                static constexpr unsigned INVEN0_POS = 0;
                static constexpr unsigned INVEN0_MASK = 0x00000001;
                static constexpr unsigned INVEN0(unsigned value) { return (value << 0); }
                static constexpr unsigned INVEN1_POS = 1;
                static constexpr unsigned INVEN1_MASK = 0x00000002;
                static constexpr unsigned INVEN1(unsigned value) { return (value << 1); }
            } COUNT32_DRVCTRL;

            uint8_t Reserved1[1];

            volatile union COUNT32_DBGCTRL_T // COUNT32_DBGCTRL: Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) COUNT32_DBGCTRL_BIT_T
                {
                    unsigned DBGRUN : 1; // bit 0 Run During Debug
                    unsigned        : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGRUN_POS = 0;
                static constexpr unsigned DBGRUN_MASK = 0x00000001;
                static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
            } COUNT32_DBGCTRL;

            volatile union COUNT32_SYNCBUSY_T // COUNT32_SYNCBUSY: Synchronization Status 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT32_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 swrst
                    unsigned ENABLE : 1; // bit 1 enable
                    unsigned CTRLB  : 1; // bit 2 CTRLB
                    unsigned STATUS : 1; // bit 3 STATUS
                    unsigned COUNT  : 1; // bit 4 Counter
                    unsigned PER    : 1; // bit 5 Period
                    unsigned CC0    : 1; // bit 6 Compare Channel 0
                    unsigned CC1    : 1; // bit 7 Compare Channel 1
                    unsigned        : 24; // bits 8..31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned CTRLB_POS = 2;
                static constexpr unsigned CTRLB_MASK = 0x00000004;
                static constexpr unsigned CTRLB(unsigned value) { return (value << 2); }
                static constexpr unsigned STATUS_POS = 3;
                static constexpr unsigned STATUS_MASK = 0x00000008;
                static constexpr unsigned STATUS(unsigned value) { return (value << 3); }
                static constexpr unsigned COUNT_POS = 4;
                static constexpr unsigned COUNT_MASK = 0x00000010;
                static constexpr unsigned COUNT(unsigned value) { return (value << 4); }
                static constexpr unsigned PER_POS = 5;
                static constexpr unsigned PER_MASK = 0x00000020;
                static constexpr unsigned PER(unsigned value) { return (value << 5); }
                static constexpr unsigned CC0_POS = 6;
                static constexpr unsigned CC0_MASK = 0x00000040;
                static constexpr unsigned CC0(unsigned value) { return (value << 6); }
                static constexpr unsigned CC1_POS = 7;
                static constexpr unsigned CC1_MASK = 0x00000080;
                static constexpr unsigned CC1(unsigned value) { return (value << 7); }
            } COUNT32_SYNCBUSY;

            volatile union COUNT32_COUNT_T // COUNT32_COUNT: COUNT32 Count 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT32_COUNT_BIT_T
                {
                    unsigned COUNT : 32; // bits 0..31 Counter Value    
                } bit;
            
                static constexpr unsigned COUNT_POS = 0;
                static constexpr unsigned COUNT_MASK = 0xffffffff;
                static constexpr unsigned COUNT(unsigned value) { return (value << 0); }
            } COUNT32_COUNT;

            uint8_t Reserved2[4];

            volatile union COUNT32_CC_T // COUNT32_CC: COUNT32 Compare and Capture 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT32_CC_BIT_T
                {
                    unsigned CC : 32; // bits 0..31 Counter/Compare Value    
                } bit;
            
                static constexpr unsigned CC_POS = 0;
                static constexpr unsigned CC_MASK = 0xffffffff;
                static constexpr unsigned CC(unsigned value) { return (value << 0); }
            } COUNT32_CC;

            uint8_t Reserved3[16];

            volatile union COUNT32_CCBUF_T // COUNT32_CCBUF: COUNT32 Compare and Capture Buffer 
            {
                uint32_t reg;
                struct __attribute__((packed)) COUNT32_CCBUF_BIT_T
                {
                    unsigned CCBUF : 32; // bits 0..31 Counter/Compare Buffer Value    
                } bit;
            
                static constexpr unsigned CCBUF_POS = 0;
                static constexpr unsigned CCBUF_MASK = 0xffffffff;
                static constexpr unsigned CCBUF(unsigned value) { return (value << 0); }
            } COUNT32_CCBUF;

        } COUNT32;

    } // clustered register
}; // struct TC0_T

static_assert(sizeof(TC_T) == TC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp