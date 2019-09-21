#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SERCOM_T
{
    static constexpr size_t INSTANCE_SIZE = 49;
    static constexpr intptr_t BASE_ADDRESS_SERCOM0 = 0x42000400;
    static constexpr intptr_t BASE_ADDRESS_SERCOM1 = 0x42000800;
    static constexpr intptr_t BASE_ADDRESS_SERCOM2 = 0x42000c00;
    static constexpr intptr_t BASE_ADDRESS_SERCOM3 = 0x42001000;
    static constexpr intptr_t BASE_ADDRESS_SERCOM4 = 0x42001400;
    static constexpr intptr_t BASE_ADDRESS_SERCOM5 = 0x42001800;
    static constexpr intptr_t BASE_ADDRESS_SERCOM6 = 0x43000000;
    static constexpr intptr_t BASE_ADDRESS_SERCOM7 = 0x43000400;

    static constexpr intptr_t ADDR_OFFSET_I2CM_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_I2CM_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_I2CM_BAUD = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_I2CM_INTENCLR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_I2CM_INTENSET = 0x16;
    static constexpr intptr_t ADDR_OFFSET_I2CM_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_I2CM_STATUS = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_I2CM_SYNCBUSY = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_I2CM_ADDR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_I2CM_DATA = 0x28;
    static constexpr intptr_t ADDR_OFFSET_I2CM_DBGCTRL = 0x30;
    static constexpr intptr_t ADDR_OFFSET_I2CS_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_I2CS_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_I2CS_INTENCLR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_I2CS_INTENSET = 0x16;
    static constexpr intptr_t ADDR_OFFSET_I2CS_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_I2CS_STATUS = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_I2CS_SYNCBUSY = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_I2CS_ADDR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_I2CS_DATA = 0x28;
    static constexpr intptr_t ADDR_OFFSET_SPIS_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SPIS_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SPIS_BAUD = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SPIS_INTENCLR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_SPIS_INTENSET = 0x16;
    static constexpr intptr_t ADDR_OFFSET_SPIS_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_SPIS_STATUS = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_SPIS_SYNCBUSY = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_SPIS_ADDR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_SPIS_DATA = 0x28;
    static constexpr intptr_t ADDR_OFFSET_SPIS_DBGCTRL = 0x30;
    static constexpr intptr_t ADDR_OFFSET_SPIM_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SPIM_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SPIM_BAUD = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SPIM_INTENCLR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_SPIM_INTENSET = 0x16;
    static constexpr intptr_t ADDR_OFFSET_SPIM_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_SPIM_STATUS = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_SPIM_SYNCBUSY = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_SPIM_ADDR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_SPIM_DATA = 0x28;
    static constexpr intptr_t ADDR_OFFSET_SPIM_DBGCTRL = 0x30;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_CTRLC = 0x08;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_BAUD = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_RXPL = 0x0e;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_INTENCLR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_INTENSET = 0x16;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_STATUS = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_SYNCBUSY = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_DATA = 0x28;
    static constexpr intptr_t ADDR_OFFSET_USART_EXT_DBGCTRL = 0x30;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_CTRLC = 0x08;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_BAUD = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_RXPL = 0x0e;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_INTENCLR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_INTENSET = 0x16;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_INTFLAG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_STATUS = 0x1a;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_SYNCBUSY = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_DATA = 0x28;
    static constexpr intptr_t ADDR_OFFSET_USART_INT_DBGCTRL = 0x30;

    union // clustered register
    {
        struct __attribute__((packed)) // Cluster I2CM
        {
        
            volatile union I2CM_CTRLA_T // I2CM_CTRLA: I2CM Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CM_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 3; // bits 2..4 Operating Mode
                    unsigned           : 2; // bits 5..6 unused
                    unsigned RUNSTDBY  : 1; // bit 7 Run in Standby
                    unsigned           : 8; // bits 8..15 unused
                    unsigned PINOUT    : 1; // bit 16 Pin Usage
                    unsigned           : 3; // bits 17..19 unused
                    unsigned SDAHOLD   : 2; // bits 20..21 SDA Hold Time
                    unsigned MEXTTOEN  : 1; // bit 22 Master SCL Low Extend Timeout
                    unsigned SEXTTOEN  : 1; // bit 23 Slave SCL Low Extend Timeout
                    unsigned SPEED     : 2; // bits 24..25 Transfer Speed
                    unsigned           : 1; // bit 26 unused
                    unsigned SCLSM     : 1; // bit 27 SCL Clock Stretch Mode
                    unsigned INACTOUT  : 2; // bits 28..29 Inactive Time-Out
                    unsigned LOWTOUTEN : 1; // bit 30 SCL Low Timeout Enable
                    unsigned           : 1; // bit 31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000001c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned RUNSTDBY_POS = 7;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000080;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 7); }
                static constexpr unsigned PINOUT_POS = 16;
                static constexpr unsigned PINOUT_MASK = 0x00010000;
                static constexpr unsigned PINOUT(unsigned value) { return (value << 16); }
                static constexpr unsigned SDAHOLD_POS = 20;
                static constexpr unsigned SDAHOLD_MASK = 0x00300000;
                static constexpr unsigned SDAHOLD(unsigned value) { return (value << 20); }
                static constexpr unsigned MEXTTOEN_POS = 22;
                static constexpr unsigned MEXTTOEN_MASK = 0x00400000;
                static constexpr unsigned MEXTTOEN(unsigned value) { return (value << 22); }
                static constexpr unsigned SEXTTOEN_POS = 23;
                static constexpr unsigned SEXTTOEN_MASK = 0x00800000;
                static constexpr unsigned SEXTTOEN(unsigned value) { return (value << 23); }
                static constexpr unsigned SPEED_POS = 24;
                static constexpr unsigned SPEED_MASK = 0x03000000;
                static constexpr unsigned SPEED(unsigned value) { return (value << 24); }
                static constexpr unsigned SCLSM_POS = 27;
                static constexpr unsigned SCLSM_MASK = 0x08000000;
                static constexpr unsigned SCLSM(unsigned value) { return (value << 27); }
                static constexpr unsigned INACTOUT_POS = 28;
                static constexpr unsigned INACTOUT_MASK = 0x30000000;
                static constexpr unsigned INACTOUT(unsigned value) { return (value << 28); }
                static constexpr unsigned LOWTOUTEN_POS = 30;
                static constexpr unsigned LOWTOUTEN_MASK = 0x40000000;
                static constexpr unsigned LOWTOUTEN(unsigned value) { return (value << 30); }
            } I2CM_CTRLA;

            volatile union I2CM_CTRLB_T // I2CM_CTRLB: I2CM Control B 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CM_CTRLB_BIT_T
                {
                    unsigned        : 8; // bits 0..7 unused
                    unsigned SMEN   : 1; // bit 8 Smart Mode Enable
                    unsigned QCEN   : 1; // bit 9 Quick Command Enable
                    unsigned        : 6; // bits 10..15 unused
                    unsigned CMD    : 2; // bits 16..17 Command
                    unsigned ACKACT : 1; // bit 18 Acknowledge Action
                    unsigned        : 13; // bits 19..31 unused    
                } bit;
            
                static constexpr unsigned SMEN_POS = 8;
                static constexpr unsigned SMEN_MASK = 0x00000100;
                static constexpr unsigned SMEN(unsigned value) { return (value << 8); }
                static constexpr unsigned QCEN_POS = 9;
                static constexpr unsigned QCEN_MASK = 0x00000200;
                static constexpr unsigned QCEN(unsigned value) { return (value << 9); }
                static constexpr unsigned CMD_POS = 16;
                static constexpr unsigned CMD_MASK = 0x00030000;
                static constexpr unsigned CMD(unsigned value) { return (value << 16); }
                static constexpr unsigned ACKACT_POS = 18;
                static constexpr unsigned ACKACT_MASK = 0x00040000;
                static constexpr unsigned ACKACT(unsigned value) { return (value << 18); }
            } I2CM_CTRLB;

            uint8_t Reserved1[4];

            volatile union I2CM_BAUD_T // I2CM_BAUD: I2CM Baud Rate 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CM_BAUD_BIT_T
                {
                    unsigned BAUD      : 8; // bits 0..7 Baud Rate Value
                    unsigned BAUDLOW   : 8; // bits 8..15 Baud Rate Value Low
                    unsigned HSBAUD    : 8; // bits 16..23 High Speed Baud Rate Value
                    unsigned HSBAUDLOW : 8; // bits 24..31 High Speed Baud Rate Value Low    
                } bit;
            
                static constexpr unsigned BAUD_POS = 0;
                static constexpr unsigned BAUD_MASK = 0x000000ff;
                static constexpr unsigned BAUD(unsigned value) { return (value << 0); }
                static constexpr unsigned BAUDLOW_POS = 8;
                static constexpr unsigned BAUDLOW_MASK = 0x0000ff00;
                static constexpr unsigned BAUDLOW(unsigned value) { return (value << 8); }
                static constexpr unsigned HSBAUD_POS = 16;
                static constexpr unsigned HSBAUD_MASK = 0x00ff0000;
                static constexpr unsigned HSBAUD(unsigned value) { return (value << 16); }
                static constexpr unsigned HSBAUDLOW_POS = 24;
                static constexpr unsigned HSBAUDLOW_MASK = 0xff000000;
                static constexpr unsigned HSBAUDLOW(unsigned value) { return (value << 24); }
            } I2CM_BAUD;

            uint8_t Reserved2[4];

            volatile union I2CM_INTENCLR_T // I2CM_INTENCLR: I2CM Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CM_INTENCLR_BIT_T
                {
                    unsigned MB    : 1; // bit 0 Master On Bus Interrupt Disable
                    unsigned SB    : 1; // bit 1 Slave On Bus Interrupt Disable
                    unsigned       : 5; // bits 2..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Disable    
                } bit;
            
                static constexpr unsigned MB_POS = 0;
                static constexpr unsigned MB_MASK = 0x00000001;
                static constexpr unsigned MB(unsigned value) { return (value << 0); }
                static constexpr unsigned SB_POS = 1;
                static constexpr unsigned SB_MASK = 0x00000002;
                static constexpr unsigned SB(unsigned value) { return (value << 1); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } I2CM_INTENCLR;

            uint8_t Reserved3[1];

            volatile union I2CM_INTENSET_T // I2CM_INTENSET: I2CM Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CM_INTENSET_BIT_T
                {
                    unsigned MB    : 1; // bit 0 Master On Bus Interrupt Enable
                    unsigned SB    : 1; // bit 1 Slave On Bus Interrupt Enable
                    unsigned       : 5; // bits 2..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Enable    
                } bit;
            
                static constexpr unsigned MB_POS = 0;
                static constexpr unsigned MB_MASK = 0x00000001;
                static constexpr unsigned MB(unsigned value) { return (value << 0); }
                static constexpr unsigned SB_POS = 1;
                static constexpr unsigned SB_MASK = 0x00000002;
                static constexpr unsigned SB(unsigned value) { return (value << 1); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } I2CM_INTENSET;

            uint8_t Reserved4[1];

            volatile union I2CM_INTFLAG_T // I2CM_INTFLAG: I2CM Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CM_INTFLAG_BIT_T
                {
                    unsigned MB    : 1; // bit 0 Master On Bus Interrupt
                    unsigned SB    : 1; // bit 1 Slave On Bus Interrupt
                    unsigned       : 5; // bits 2..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt    
                } bit;
            
                static constexpr unsigned MB_POS = 0;
                static constexpr unsigned MB_MASK = 0x00000001;
                static constexpr unsigned MB(unsigned value) { return (value << 0); }
                static constexpr unsigned SB_POS = 1;
                static constexpr unsigned SB_MASK = 0x00000002;
                static constexpr unsigned SB(unsigned value) { return (value << 1); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } I2CM_INTFLAG;

            uint8_t Reserved5[1];

            volatile union I2CM_STATUS_T // I2CM_STATUS: I2CM Status 
            {
                uint16_t reg;
                struct __attribute__((packed)) I2CM_STATUS_BIT_T
                {
                    unsigned BUSERR   : 1; // bit 0 Bus Error
                    unsigned ARBLOST  : 1; // bit 1 Arbitration Lost
                    unsigned RXNACK   : 1; // bit 2 Received Not Acknowledge
                    unsigned          : 1; // bit 3 unused
                    unsigned BUSSTATE : 2; // bits 4..5 Bus State
                    unsigned LOWTOUT  : 1; // bit 6 SCL Low Timeout
                    unsigned CLKHOLD  : 1; // bit 7 Clock Hold
                    unsigned MEXTTOUT : 1; // bit 8 Master SCL Low Extend Timeout
                    unsigned SEXTTOUT : 1; // bit 9 Slave SCL Low Extend Timeout
                    unsigned LENERR   : 1; // bit 10 Length Error
                    unsigned          : 5; // bits 11..15 unused    
                } bit;
            
                static constexpr unsigned BUSERR_POS = 0;
                static constexpr unsigned BUSERR_MASK = 0x00000001;
                static constexpr unsigned BUSERR(unsigned value) { return (value << 0); }
                static constexpr unsigned ARBLOST_POS = 1;
                static constexpr unsigned ARBLOST_MASK = 0x00000002;
                static constexpr unsigned ARBLOST(unsigned value) { return (value << 1); }
                static constexpr unsigned RXNACK_POS = 2;
                static constexpr unsigned RXNACK_MASK = 0x00000004;
                static constexpr unsigned RXNACK(unsigned value) { return (value << 2); }
                static constexpr unsigned BUSSTATE_POS = 4;
                static constexpr unsigned BUSSTATE_MASK = 0x00000030;
                static constexpr unsigned BUSSTATE(unsigned value) { return (value << 4); }
                static constexpr unsigned LOWTOUT_POS = 6;
                static constexpr unsigned LOWTOUT_MASK = 0x00000040;
                static constexpr unsigned LOWTOUT(unsigned value) { return (value << 6); }
                static constexpr unsigned CLKHOLD_POS = 7;
                static constexpr unsigned CLKHOLD_MASK = 0x00000080;
                static constexpr unsigned CLKHOLD(unsigned value) { return (value << 7); }
                static constexpr unsigned MEXTTOUT_POS = 8;
                static constexpr unsigned MEXTTOUT_MASK = 0x00000100;
                static constexpr unsigned MEXTTOUT(unsigned value) { return (value << 8); }
                static constexpr unsigned SEXTTOUT_POS = 9;
                static constexpr unsigned SEXTTOUT_MASK = 0x00000200;
                static constexpr unsigned SEXTTOUT(unsigned value) { return (value << 9); }
                static constexpr unsigned LENERR_POS = 10;
                static constexpr unsigned LENERR_MASK = 0x00000400;
                static constexpr unsigned LENERR(unsigned value) { return (value << 10); }
            } I2CM_STATUS;

            volatile union I2CM_SYNCBUSY_T // I2CM_SYNCBUSY: I2CM Synchronization Busy 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CM_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 Software Reset Synchronization Busy
                    unsigned ENABLE : 1; // bit 1 SERCOM Enable Synchronization Busy
                    unsigned SYSOP  : 1; // bit 2 System Operation Synchronization Busy
                    unsigned        : 29; // bits 3..31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned SYSOP_POS = 2;
                static constexpr unsigned SYSOP_MASK = 0x00000004;
                static constexpr unsigned SYSOP(unsigned value) { return (value << 2); }
            } I2CM_SYNCBUSY;

            uint8_t Reserved6[4];

            volatile union I2CM_ADDR_T // I2CM_ADDR: I2CM Address 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CM_ADDR_BIT_T
                {
                    unsigned ADDR     : 11; // bits 0..10 Address Value
                    unsigned          : 2; // bits 11..12 unused
                    unsigned LENEN    : 1; // bit 13 Length Enable
                    unsigned HS       : 1; // bit 14 High Speed Mode
                    unsigned TENBITEN : 1; // bit 15 Ten Bit Addressing Enable
                    unsigned LEN      : 8; // bits 16..23 Length
                    unsigned          : 8; // bits 24..31 unused    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x000007ff;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned LENEN_POS = 13;
                static constexpr unsigned LENEN_MASK = 0x00002000;
                static constexpr unsigned LENEN(unsigned value) { return (value << 13); }
                static constexpr unsigned HS_POS = 14;
                static constexpr unsigned HS_MASK = 0x00004000;
                static constexpr unsigned HS(unsigned value) { return (value << 14); }
                static constexpr unsigned TENBITEN_POS = 15;
                static constexpr unsigned TENBITEN_MASK = 0x00008000;
                static constexpr unsigned TENBITEN(unsigned value) { return (value << 15); }
                static constexpr unsigned LEN_POS = 16;
                static constexpr unsigned LEN_MASK = 0x00ff0000;
                static constexpr unsigned LEN(unsigned value) { return (value << 16); }
            } I2CM_ADDR;

            volatile union I2CM_DATA_T // I2CM_DATA: I2CM Data 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CM_DATA_BIT_T
                {
                    unsigned DATA : 8; // bits 0..7 Data Value    
                } bit;
            
                static constexpr unsigned DATA_POS = 0;
                static constexpr unsigned DATA_MASK = 0x000000ff;
                static constexpr unsigned DATA(unsigned value) { return (value << 0); }
            } I2CM_DATA;

            uint8_t Reserved7[7];

            volatile union I2CM_DBGCTRL_T // I2CM_DBGCTRL: I2CM Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CM_DBGCTRL_BIT_T
                {
                    unsigned DBGSTOP : 1; // bit 0 Debug Mode
                    unsigned         : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGSTOP_POS = 0;
                static constexpr unsigned DBGSTOP_MASK = 0x00000001;
                static constexpr unsigned DBGSTOP(unsigned value) { return (value << 0); }
            } I2CM_DBGCTRL;

        } I2CM;

        struct __attribute__((packed)) // Cluster I2CS
        {
        
            volatile union I2CS_CTRLA_T // I2CS_CTRLA: I2CS Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CS_CTRLA_BIT_T
                {
                    unsigned SWRST     : 1; // bit 0 Software Reset
                    unsigned ENABLE    : 1; // bit 1 Enable
                    unsigned MODE      : 3; // bits 2..4 Operating Mode
                    unsigned           : 2; // bits 5..6 unused
                    unsigned RUNSTDBY  : 1; // bit 7 Run during Standby
                    unsigned           : 8; // bits 8..15 unused
                    unsigned PINOUT    : 1; // bit 16 Pin Usage
                    unsigned           : 3; // bits 17..19 unused
                    unsigned SDAHOLD   : 2; // bits 20..21 SDA Hold Time
                    unsigned           : 1; // bit 22 unused
                    unsigned SEXTTOEN  : 1; // bit 23 Slave SCL Low Extend Timeout
                    unsigned SPEED     : 2; // bits 24..25 Transfer Speed
                    unsigned           : 1; // bit 26 unused
                    unsigned SCLSM     : 1; // bit 27 SCL Clock Stretch Mode
                    unsigned           : 2; // bits 28..29 unused
                    unsigned LOWTOUTEN : 1; // bit 30 SCL Low Timeout Enable
                    unsigned           : 1; // bit 31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000001c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned RUNSTDBY_POS = 7;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000080;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 7); }
                static constexpr unsigned PINOUT_POS = 16;
                static constexpr unsigned PINOUT_MASK = 0x00010000;
                static constexpr unsigned PINOUT(unsigned value) { return (value << 16); }
                static constexpr unsigned SDAHOLD_POS = 20;
                static constexpr unsigned SDAHOLD_MASK = 0x00300000;
                static constexpr unsigned SDAHOLD(unsigned value) { return (value << 20); }
                static constexpr unsigned SEXTTOEN_POS = 23;
                static constexpr unsigned SEXTTOEN_MASK = 0x00800000;
                static constexpr unsigned SEXTTOEN(unsigned value) { return (value << 23); }
                static constexpr unsigned SPEED_POS = 24;
                static constexpr unsigned SPEED_MASK = 0x03000000;
                static constexpr unsigned SPEED(unsigned value) { return (value << 24); }
                static constexpr unsigned SCLSM_POS = 27;
                static constexpr unsigned SCLSM_MASK = 0x08000000;
                static constexpr unsigned SCLSM(unsigned value) { return (value << 27); }
                static constexpr unsigned LOWTOUTEN_POS = 30;
                static constexpr unsigned LOWTOUTEN_MASK = 0x40000000;
                static constexpr unsigned LOWTOUTEN(unsigned value) { return (value << 30); }
            } I2CS_CTRLA;

            volatile union I2CS_CTRLB_T // I2CS_CTRLB: I2CS Control B 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CS_CTRLB_BIT_T
                {
                    unsigned        : 8; // bits 0..7 unused
                    unsigned SMEN   : 1; // bit 8 Smart Mode Enable
                    unsigned GCMD   : 1; // bit 9 PMBus Group Command
                    unsigned AACKEN : 1; // bit 10 Automatic Address Acknowledge
                    unsigned        : 3; // bits 11..13 unused
                    unsigned AMODE  : 2; // bits 14..15 Address Mode
                    unsigned CMD    : 2; // bits 16..17 Command
                    unsigned ACKACT : 1; // bit 18 Acknowledge Action
                    unsigned        : 13; // bits 19..31 unused    
                } bit;
            
                static constexpr unsigned SMEN_POS = 8;
                static constexpr unsigned SMEN_MASK = 0x00000100;
                static constexpr unsigned SMEN(unsigned value) { return (value << 8); }
                static constexpr unsigned GCMD_POS = 9;
                static constexpr unsigned GCMD_MASK = 0x00000200;
                static constexpr unsigned GCMD(unsigned value) { return (value << 9); }
                static constexpr unsigned AACKEN_POS = 10;
                static constexpr unsigned AACKEN_MASK = 0x00000400;
                static constexpr unsigned AACKEN(unsigned value) { return (value << 10); }
                static constexpr unsigned AMODE_POS = 14;
                static constexpr unsigned AMODE_MASK = 0x0000c000;
                static constexpr unsigned AMODE(unsigned value) { return (value << 14); }
                static constexpr unsigned CMD_POS = 16;
                static constexpr unsigned CMD_MASK = 0x00030000;
                static constexpr unsigned CMD(unsigned value) { return (value << 16); }
                static constexpr unsigned ACKACT_POS = 18;
                static constexpr unsigned ACKACT_MASK = 0x00040000;
                static constexpr unsigned ACKACT(unsigned value) { return (value << 18); }
            } I2CS_CTRLB;

            uint8_t Reserved1[12];

            volatile union I2CS_INTENCLR_T // I2CS_INTENCLR: I2CS Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CS_INTENCLR_BIT_T
                {
                    unsigned PREC   : 1; // bit 0 Stop Received Interrupt Disable
                    unsigned AMATCH : 1; // bit 1 Address Match Interrupt Disable
                    unsigned DRDY   : 1; // bit 2 Data Interrupt Disable
                    unsigned        : 4; // bits 3..6 unused
                    unsigned ERROR  : 1; // bit 7 Combined Error Interrupt Disable    
                } bit;
            
                static constexpr unsigned PREC_POS = 0;
                static constexpr unsigned PREC_MASK = 0x00000001;
                static constexpr unsigned PREC(unsigned value) { return (value << 0); }
                static constexpr unsigned AMATCH_POS = 1;
                static constexpr unsigned AMATCH_MASK = 0x00000002;
                static constexpr unsigned AMATCH(unsigned value) { return (value << 1); }
                static constexpr unsigned DRDY_POS = 2;
                static constexpr unsigned DRDY_MASK = 0x00000004;
                static constexpr unsigned DRDY(unsigned value) { return (value << 2); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } I2CS_INTENCLR;

            uint8_t Reserved2[1];

            volatile union I2CS_INTENSET_T // I2CS_INTENSET: I2CS Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CS_INTENSET_BIT_T
                {
                    unsigned PREC   : 1; // bit 0 Stop Received Interrupt Enable
                    unsigned AMATCH : 1; // bit 1 Address Match Interrupt Enable
                    unsigned DRDY   : 1; // bit 2 Data Interrupt Enable
                    unsigned        : 4; // bits 3..6 unused
                    unsigned ERROR  : 1; // bit 7 Combined Error Interrupt Enable    
                } bit;
            
                static constexpr unsigned PREC_POS = 0;
                static constexpr unsigned PREC_MASK = 0x00000001;
                static constexpr unsigned PREC(unsigned value) { return (value << 0); }
                static constexpr unsigned AMATCH_POS = 1;
                static constexpr unsigned AMATCH_MASK = 0x00000002;
                static constexpr unsigned AMATCH(unsigned value) { return (value << 1); }
                static constexpr unsigned DRDY_POS = 2;
                static constexpr unsigned DRDY_MASK = 0x00000004;
                static constexpr unsigned DRDY(unsigned value) { return (value << 2); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } I2CS_INTENSET;

            uint8_t Reserved3[1];

            volatile union I2CS_INTFLAG_T // I2CS_INTFLAG: I2CS Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CS_INTFLAG_BIT_T
                {
                    unsigned PREC   : 1; // bit 0 Stop Received Interrupt
                    unsigned AMATCH : 1; // bit 1 Address Match Interrupt
                    unsigned DRDY   : 1; // bit 2 Data Interrupt
                    unsigned        : 4; // bits 3..6 unused
                    unsigned ERROR  : 1; // bit 7 Combined Error Interrupt    
                } bit;
            
                static constexpr unsigned PREC_POS = 0;
                static constexpr unsigned PREC_MASK = 0x00000001;
                static constexpr unsigned PREC(unsigned value) { return (value << 0); }
                static constexpr unsigned AMATCH_POS = 1;
                static constexpr unsigned AMATCH_MASK = 0x00000002;
                static constexpr unsigned AMATCH(unsigned value) { return (value << 1); }
                static constexpr unsigned DRDY_POS = 2;
                static constexpr unsigned DRDY_MASK = 0x00000004;
                static constexpr unsigned DRDY(unsigned value) { return (value << 2); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } I2CS_INTFLAG;

            uint8_t Reserved4[1];

            volatile union I2CS_STATUS_T // I2CS_STATUS: I2CS Status 
            {
                uint16_t reg;
                struct __attribute__((packed)) I2CS_STATUS_BIT_T
                {
                    unsigned BUSERR   : 1; // bit 0 Bus Error
                    unsigned COLL     : 1; // bit 1 Transmit Collision
                    unsigned RXNACK   : 1; // bit 2 Received Not Acknowledge
                    unsigned DIR      : 1; // bit 3 Read/Write Direction
                    unsigned SR       : 1; // bit 4 Repeated Start
                    unsigned          : 1; // bit 5 unused
                    unsigned LOWTOUT  : 1; // bit 6 SCL Low Timeout
                    unsigned CLKHOLD  : 1; // bit 7 Clock Hold
                    unsigned          : 1; // bit 8 unused
                    unsigned SEXTTOUT : 1; // bit 9 Slave SCL Low Extend Timeout
                    unsigned HS       : 1; // bit 10 High Speed
                    unsigned          : 5; // bits 11..15 unused    
                } bit;
            
                static constexpr unsigned BUSERR_POS = 0;
                static constexpr unsigned BUSERR_MASK = 0x00000001;
                static constexpr unsigned BUSERR(unsigned value) { return (value << 0); }
                static constexpr unsigned COLL_POS = 1;
                static constexpr unsigned COLL_MASK = 0x00000002;
                static constexpr unsigned COLL(unsigned value) { return (value << 1); }
                static constexpr unsigned RXNACK_POS = 2;
                static constexpr unsigned RXNACK_MASK = 0x00000004;
                static constexpr unsigned RXNACK(unsigned value) { return (value << 2); }
                static constexpr unsigned DIR_POS = 3;
                static constexpr unsigned DIR_MASK = 0x00000008;
                static constexpr unsigned DIR(unsigned value) { return (value << 3); }
                static constexpr unsigned SR_POS = 4;
                static constexpr unsigned SR_MASK = 0x00000010;
                static constexpr unsigned SR(unsigned value) { return (value << 4); }
                static constexpr unsigned LOWTOUT_POS = 6;
                static constexpr unsigned LOWTOUT_MASK = 0x00000040;
                static constexpr unsigned LOWTOUT(unsigned value) { return (value << 6); }
                static constexpr unsigned CLKHOLD_POS = 7;
                static constexpr unsigned CLKHOLD_MASK = 0x00000080;
                static constexpr unsigned CLKHOLD(unsigned value) { return (value << 7); }
                static constexpr unsigned SEXTTOUT_POS = 9;
                static constexpr unsigned SEXTTOUT_MASK = 0x00000200;
                static constexpr unsigned SEXTTOUT(unsigned value) { return (value << 9); }
                static constexpr unsigned HS_POS = 10;
                static constexpr unsigned HS_MASK = 0x00000400;
                static constexpr unsigned HS(unsigned value) { return (value << 10); }
            } I2CS_STATUS;

            volatile union I2CS_SYNCBUSY_T // I2CS_SYNCBUSY: I2CS Synchronization Busy 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CS_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 Software Reset Synchronization Busy
                    unsigned ENABLE : 1; // bit 1 SERCOM Enable Synchronization Busy
                    unsigned        : 30; // bits 2..31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
            } I2CS_SYNCBUSY;

            uint8_t Reserved5[4];

            volatile union I2CS_ADDR_T // I2CS_ADDR: I2CS Address 
            {
                uint32_t reg;
                struct __attribute__((packed)) I2CS_ADDR_BIT_T
                {
                    unsigned GENCEN   : 1; // bit 0 General Call Address Enable
                    unsigned ADDR     : 10; // bits 1..10 Address Value
                    unsigned          : 4; // bits 11..14 unused
                    unsigned TENBITEN : 1; // bit 15 Ten Bit Addressing Enable
                    unsigned          : 1; // bit 16 unused
                    unsigned ADDRMASK : 10; // bits 17..26 Address Mask
                    unsigned          : 5; // bits 27..31 unused    
                } bit;
            
                static constexpr unsigned GENCEN_POS = 0;
                static constexpr unsigned GENCEN_MASK = 0x00000001;
                static constexpr unsigned GENCEN(unsigned value) { return (value << 0); }
                static constexpr unsigned ADDR_POS = 1;
                static constexpr unsigned ADDR_MASK = 0x000007fe;
                static constexpr unsigned ADDR(unsigned value) { return (value << 1); }
                static constexpr unsigned TENBITEN_POS = 15;
                static constexpr unsigned TENBITEN_MASK = 0x00008000;
                static constexpr unsigned TENBITEN(unsigned value) { return (value << 15); }
                static constexpr unsigned ADDRMASK_POS = 17;
                static constexpr unsigned ADDRMASK_MASK = 0x07fe0000;
                static constexpr unsigned ADDRMASK(unsigned value) { return (value << 17); }
            } I2CS_ADDR;

            volatile union I2CS_DATA_T // I2CS_DATA: I2CS Data 
            {
                uint8_t reg;
                struct __attribute__((packed)) I2CS_DATA_BIT_T
                {
                    unsigned DATA : 8; // bits 0..7 Data Value    
                } bit;
            
                static constexpr unsigned DATA_POS = 0;
                static constexpr unsigned DATA_MASK = 0x000000ff;
                static constexpr unsigned DATA(unsigned value) { return (value << 0); }
            } I2CS_DATA;

        } I2CS;

        struct __attribute__((packed)) // Cluster SPIS
        {
        
            volatile union SPIS_CTRLA_T // SPIS_CTRLA: SPIS Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIS_CTRLA_BIT_T
                {
                    unsigned SWRST    : 1; // bit 0 Software Reset
                    unsigned ENABLE   : 1; // bit 1 Enable
                    unsigned MODE     : 3; // bits 2..4 Operating Mode
                    unsigned          : 2; // bits 5..6 unused
                    unsigned RUNSTDBY : 1; // bit 7 Run during Standby
                    unsigned IBON     : 1; // bit 8 Immediate Buffer Overflow Notification
                    unsigned          : 7; // bits 9..15 unused
                    unsigned DOPO     : 2; // bits 16..17 Data Out Pinout
                    unsigned          : 2; // bits 18..19 unused
                    unsigned DIPO     : 2; // bits 20..21 Data In Pinout
                    unsigned          : 2; // bits 22..23 unused
                    unsigned FORM     : 4; // bits 24..27 Frame Format
                    unsigned CPHA     : 1; // bit 28 Clock Phase
                    unsigned CPOL     : 1; // bit 29 Clock Polarity
                    unsigned DORD     : 1; // bit 30 Data Order
                    unsigned          : 1; // bit 31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000001c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned RUNSTDBY_POS = 7;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000080;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 7); }
                static constexpr unsigned IBON_POS = 8;
                static constexpr unsigned IBON_MASK = 0x00000100;
                static constexpr unsigned IBON(unsigned value) { return (value << 8); }
                static constexpr unsigned DOPO_POS = 16;
                static constexpr unsigned DOPO_MASK = 0x00030000;
                static constexpr unsigned DOPO(unsigned value) { return (value << 16); }
                static constexpr unsigned DIPO_POS = 20;
                static constexpr unsigned DIPO_MASK = 0x00300000;
                static constexpr unsigned DIPO(unsigned value) { return (value << 20); }
                static constexpr unsigned FORM_POS = 24;
                static constexpr unsigned FORM_MASK = 0x0f000000;
                static constexpr unsigned FORM(unsigned value) { return (value << 24); }
                static constexpr unsigned CPHA_POS = 28;
                static constexpr unsigned CPHA_MASK = 0x10000000;
                static constexpr unsigned CPHA(unsigned value) { return (value << 28); }
                static constexpr unsigned CPOL_POS = 29;
                static constexpr unsigned CPOL_MASK = 0x20000000;
                static constexpr unsigned CPOL(unsigned value) { return (value << 29); }
                static constexpr unsigned DORD_POS = 30;
                static constexpr unsigned DORD_MASK = 0x40000000;
                static constexpr unsigned DORD(unsigned value) { return (value << 30); }
            } SPIS_CTRLA;

            volatile union SPIS_CTRLB_T // SPIS_CTRLB: SPIS Control B 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIS_CTRLB_BIT_T
                {
                    unsigned CHSIZE  : 3; // bits 0..2 Character Size
                    unsigned         : 3; // bits 3..5 unused
                    unsigned PLOADEN : 1; // bit 6 Data Preload Enable
                    unsigned         : 2; // bits 7..8 unused
                    unsigned SSDE    : 1; // bit 9 Slave Select Low Detect Enable
                    unsigned         : 3; // bits 10..12 unused
                    unsigned MSSEN   : 1; // bit 13 Master Slave Select Enable
                    unsigned AMODE   : 2; // bits 14..15 Address Mode
                    unsigned         : 1; // bit 16 unused
                    unsigned RXEN    : 1; // bit 17 Receiver Enable
                    unsigned         : 14; // bits 18..31 unused    
                } bit;
            
                static constexpr unsigned CHSIZE_POS = 0;
                static constexpr unsigned CHSIZE_MASK = 0x00000007;
                static constexpr unsigned CHSIZE(unsigned value) { return (value << 0); }
                static constexpr unsigned PLOADEN_POS = 6;
                static constexpr unsigned PLOADEN_MASK = 0x00000040;
                static constexpr unsigned PLOADEN(unsigned value) { return (value << 6); }
                static constexpr unsigned SSDE_POS = 9;
                static constexpr unsigned SSDE_MASK = 0x00000200;
                static constexpr unsigned SSDE(unsigned value) { return (value << 9); }
                static constexpr unsigned MSSEN_POS = 13;
                static constexpr unsigned MSSEN_MASK = 0x00002000;
                static constexpr unsigned MSSEN(unsigned value) { return (value << 13); }
                static constexpr unsigned AMODE_POS = 14;
                static constexpr unsigned AMODE_MASK = 0x0000c000;
                static constexpr unsigned AMODE(unsigned value) { return (value << 14); }
                static constexpr unsigned RXEN_POS = 17;
                static constexpr unsigned RXEN_MASK = 0x00020000;
                static constexpr unsigned RXEN(unsigned value) { return (value << 17); }
            } SPIS_CTRLB;

            uint8_t Reserved1[4];

            volatile union SPIS_BAUD_T // SPIS_BAUD: SPIS Baud Rate 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIS_BAUD_BIT_T
                {
                    unsigned BAUD : 8; // bits 0..7 Baud Rate Value    
                } bit;
            
                static constexpr unsigned BAUD_POS = 0;
                static constexpr unsigned BAUD_MASK = 0x000000ff;
                static constexpr unsigned BAUD(unsigned value) { return (value << 0); }
            } SPIS_BAUD;

            uint8_t Reserved2[7];

            volatile union SPIS_INTENCLR_T // SPIS_INTENCLR: SPIS Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIS_INTENCLR_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Disable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Disable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Disable
                    unsigned SSL   : 1; // bit 3 Slave Select Low Interrupt Disable
                    unsigned       : 3; // bits 4..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Disable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned SSL_POS = 3;
                static constexpr unsigned SSL_MASK = 0x00000008;
                static constexpr unsigned SSL(unsigned value) { return (value << 3); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } SPIS_INTENCLR;

            uint8_t Reserved3[1];

            volatile union SPIS_INTENSET_T // SPIS_INTENSET: SPIS Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIS_INTENSET_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Enable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Enable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Enable
                    unsigned SSL   : 1; // bit 3 Slave Select Low Interrupt Enable
                    unsigned       : 3; // bits 4..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Enable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned SSL_POS = 3;
                static constexpr unsigned SSL_MASK = 0x00000008;
                static constexpr unsigned SSL(unsigned value) { return (value << 3); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } SPIS_INTENSET;

            uint8_t Reserved4[1];

            volatile union SPIS_INTFLAG_T // SPIS_INTFLAG: SPIS Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIS_INTFLAG_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt
                    unsigned SSL   : 1; // bit 3 Slave Select Low Interrupt Flag
                    unsigned       : 3; // bits 4..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned SSL_POS = 3;
                static constexpr unsigned SSL_MASK = 0x00000008;
                static constexpr unsigned SSL(unsigned value) { return (value << 3); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } SPIS_INTFLAG;

            uint8_t Reserved5[1];

            volatile union SPIS_STATUS_T // SPIS_STATUS: SPIS Status 
            {
                uint16_t reg;
                struct __attribute__((packed)) SPIS_STATUS_BIT_T
                {
                    unsigned        : 2; // bits 0..1 unused
                    unsigned BUFOVF : 1; // bit 2 Buffer Overflow
                    unsigned        : 13; // bits 3..15 unused    
                } bit;
            
                static constexpr unsigned BUFOVF_POS = 2;
                static constexpr unsigned BUFOVF_MASK = 0x00000004;
                static constexpr unsigned BUFOVF(unsigned value) { return (value << 2); }
            } SPIS_STATUS;

            volatile union SPIS_SYNCBUSY_T // SPIS_SYNCBUSY: SPIS Synchronization Busy 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIS_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 Software Reset Synchronization Busy
                    unsigned ENABLE : 1; // bit 1 SERCOM Enable Synchronization Busy
                    unsigned CTRLB  : 1; // bit 2 CTRLB Synchronization Busy
                    unsigned        : 29; // bits 3..31 unused    
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
            } SPIS_SYNCBUSY;

            uint8_t Reserved6[4];

            volatile union SPIS_ADDR_T // SPIS_ADDR: SPIS Address 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIS_ADDR_BIT_T
                {
                    unsigned ADDR     : 8; // bits 0..7 Address Value
                    unsigned          : 8; // bits 8..15 unused
                    unsigned ADDRMASK : 8; // bits 16..23 Address Mask
                    unsigned          : 8; // bits 24..31 unused    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x000000ff;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned ADDRMASK_POS = 16;
                static constexpr unsigned ADDRMASK_MASK = 0x00ff0000;
                static constexpr unsigned ADDRMASK(unsigned value) { return (value << 16); }
            } SPIS_ADDR;

            volatile union SPIS_DATA_T // SPIS_DATA: SPIS Data 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIS_DATA_BIT_T
                {
                    unsigned DATA : 9; // bits 0..8 Data Value
                    unsigned      : 23; // bits 9..31 unused    
                } bit;
            
                static constexpr unsigned DATA_POS = 0;
                static constexpr unsigned DATA_MASK = 0x000001ff;
                static constexpr unsigned DATA(unsigned value) { return (value << 0); }
            } SPIS_DATA;

            uint8_t Reserved7[4];

            volatile union SPIS_DBGCTRL_T // SPIS_DBGCTRL: SPIS Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIS_DBGCTRL_BIT_T
                {
                    unsigned DBGSTOP : 1; // bit 0 Debug Mode
                    unsigned         : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGSTOP_POS = 0;
                static constexpr unsigned DBGSTOP_MASK = 0x00000001;
                static constexpr unsigned DBGSTOP(unsigned value) { return (value << 0); }
            } SPIS_DBGCTRL;

        } SPIS;

        struct __attribute__((packed)) // Cluster SPIM
        {
        
            volatile union SPIM_CTRLA_T // SPIM_CTRLA: SPIM Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIM_CTRLA_BIT_T
                {
                    unsigned SWRST    : 1; // bit 0 Software Reset
                    unsigned ENABLE   : 1; // bit 1 Enable
                    unsigned MODE     : 3; // bits 2..4 Operating Mode
                    unsigned          : 2; // bits 5..6 unused
                    unsigned RUNSTDBY : 1; // bit 7 Run during Standby
                    unsigned IBON     : 1; // bit 8 Immediate Buffer Overflow Notification
                    unsigned          : 7; // bits 9..15 unused
                    unsigned DOPO     : 2; // bits 16..17 Data Out Pinout
                    unsigned          : 2; // bits 18..19 unused
                    unsigned DIPO     : 2; // bits 20..21 Data In Pinout
                    unsigned          : 2; // bits 22..23 unused
                    unsigned FORM     : 4; // bits 24..27 Frame Format
                    unsigned CPHA     : 1; // bit 28 Clock Phase
                    unsigned CPOL     : 1; // bit 29 Clock Polarity
                    unsigned DORD     : 1; // bit 30 Data Order
                    unsigned          : 1; // bit 31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000001c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned RUNSTDBY_POS = 7;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000080;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 7); }
                static constexpr unsigned IBON_POS = 8;
                static constexpr unsigned IBON_MASK = 0x00000100;
                static constexpr unsigned IBON(unsigned value) { return (value << 8); }
                static constexpr unsigned DOPO_POS = 16;
                static constexpr unsigned DOPO_MASK = 0x00030000;
                static constexpr unsigned DOPO(unsigned value) { return (value << 16); }
                static constexpr unsigned DIPO_POS = 20;
                static constexpr unsigned DIPO_MASK = 0x00300000;
                static constexpr unsigned DIPO(unsigned value) { return (value << 20); }
                static constexpr unsigned FORM_POS = 24;
                static constexpr unsigned FORM_MASK = 0x0f000000;
                static constexpr unsigned FORM(unsigned value) { return (value << 24); }
                static constexpr unsigned CPHA_POS = 28;
                static constexpr unsigned CPHA_MASK = 0x10000000;
                static constexpr unsigned CPHA(unsigned value) { return (value << 28); }
                static constexpr unsigned CPOL_POS = 29;
                static constexpr unsigned CPOL_MASK = 0x20000000;
                static constexpr unsigned CPOL(unsigned value) { return (value << 29); }
                static constexpr unsigned DORD_POS = 30;
                static constexpr unsigned DORD_MASK = 0x40000000;
                static constexpr unsigned DORD(unsigned value) { return (value << 30); }
            } SPIM_CTRLA;

            volatile union SPIM_CTRLB_T // SPIM_CTRLB: SPIM Control B 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIM_CTRLB_BIT_T
                {
                    unsigned CHSIZE  : 3; // bits 0..2 Character Size
                    unsigned         : 3; // bits 3..5 unused
                    unsigned PLOADEN : 1; // bit 6 Data Preload Enable
                    unsigned         : 2; // bits 7..8 unused
                    unsigned SSDE    : 1; // bit 9 Slave Select Low Detect Enable
                    unsigned         : 3; // bits 10..12 unused
                    unsigned MSSEN   : 1; // bit 13 Master Slave Select Enable
                    unsigned AMODE   : 2; // bits 14..15 Address Mode
                    unsigned         : 1; // bit 16 unused
                    unsigned RXEN    : 1; // bit 17 Receiver Enable
                    unsigned         : 14; // bits 18..31 unused    
                } bit;
            
                static constexpr unsigned CHSIZE_POS = 0;
                static constexpr unsigned CHSIZE_MASK = 0x00000007;
                static constexpr unsigned CHSIZE(unsigned value) { return (value << 0); }
                static constexpr unsigned PLOADEN_POS = 6;
                static constexpr unsigned PLOADEN_MASK = 0x00000040;
                static constexpr unsigned PLOADEN(unsigned value) { return (value << 6); }
                static constexpr unsigned SSDE_POS = 9;
                static constexpr unsigned SSDE_MASK = 0x00000200;
                static constexpr unsigned SSDE(unsigned value) { return (value << 9); }
                static constexpr unsigned MSSEN_POS = 13;
                static constexpr unsigned MSSEN_MASK = 0x00002000;
                static constexpr unsigned MSSEN(unsigned value) { return (value << 13); }
                static constexpr unsigned AMODE_POS = 14;
                static constexpr unsigned AMODE_MASK = 0x0000c000;
                static constexpr unsigned AMODE(unsigned value) { return (value << 14); }
                static constexpr unsigned RXEN_POS = 17;
                static constexpr unsigned RXEN_MASK = 0x00020000;
                static constexpr unsigned RXEN(unsigned value) { return (value << 17); }
            } SPIM_CTRLB;

            uint8_t Reserved1[4];

            volatile union SPIM_BAUD_T // SPIM_BAUD: SPIM Baud Rate 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIM_BAUD_BIT_T
                {
                    unsigned BAUD : 8; // bits 0..7 Baud Rate Value    
                } bit;
            
                static constexpr unsigned BAUD_POS = 0;
                static constexpr unsigned BAUD_MASK = 0x000000ff;
                static constexpr unsigned BAUD(unsigned value) { return (value << 0); }
            } SPIM_BAUD;

            uint8_t Reserved2[7];

            volatile union SPIM_INTENCLR_T // SPIM_INTENCLR: SPIM Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIM_INTENCLR_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Disable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Disable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Disable
                    unsigned SSL   : 1; // bit 3 Slave Select Low Interrupt Disable
                    unsigned       : 3; // bits 4..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Disable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned SSL_POS = 3;
                static constexpr unsigned SSL_MASK = 0x00000008;
                static constexpr unsigned SSL(unsigned value) { return (value << 3); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } SPIM_INTENCLR;

            uint8_t Reserved3[1];

            volatile union SPIM_INTENSET_T // SPIM_INTENSET: SPIM Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIM_INTENSET_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Enable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Enable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Enable
                    unsigned SSL   : 1; // bit 3 Slave Select Low Interrupt Enable
                    unsigned       : 3; // bits 4..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Enable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned SSL_POS = 3;
                static constexpr unsigned SSL_MASK = 0x00000008;
                static constexpr unsigned SSL(unsigned value) { return (value << 3); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } SPIM_INTENSET;

            uint8_t Reserved4[1];

            volatile union SPIM_INTFLAG_T // SPIM_INTFLAG: SPIM Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIM_INTFLAG_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt
                    unsigned SSL   : 1; // bit 3 Slave Select Low Interrupt Flag
                    unsigned       : 3; // bits 4..6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned SSL_POS = 3;
                static constexpr unsigned SSL_MASK = 0x00000008;
                static constexpr unsigned SSL(unsigned value) { return (value << 3); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } SPIM_INTFLAG;

            uint8_t Reserved5[1];

            volatile union SPIM_STATUS_T // SPIM_STATUS: SPIM Status 
            {
                uint16_t reg;
                struct __attribute__((packed)) SPIM_STATUS_BIT_T
                {
                    unsigned        : 2; // bits 0..1 unused
                    unsigned BUFOVF : 1; // bit 2 Buffer Overflow
                    unsigned        : 13; // bits 3..15 unused    
                } bit;
            
                static constexpr unsigned BUFOVF_POS = 2;
                static constexpr unsigned BUFOVF_MASK = 0x00000004;
                static constexpr unsigned BUFOVF(unsigned value) { return (value << 2); }
            } SPIM_STATUS;

            volatile union SPIM_SYNCBUSY_T // SPIM_SYNCBUSY: SPIM Synchronization Busy 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIM_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 Software Reset Synchronization Busy
                    unsigned ENABLE : 1; // bit 1 SERCOM Enable Synchronization Busy
                    unsigned CTRLB  : 1; // bit 2 CTRLB Synchronization Busy
                    unsigned        : 29; // bits 3..31 unused    
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
            } SPIM_SYNCBUSY;

            uint8_t Reserved6[4];

            volatile union SPIM_ADDR_T // SPIM_ADDR: SPIM Address 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIM_ADDR_BIT_T
                {
                    unsigned ADDR     : 8; // bits 0..7 Address Value
                    unsigned          : 8; // bits 8..15 unused
                    unsigned ADDRMASK : 8; // bits 16..23 Address Mask
                    unsigned          : 8; // bits 24..31 unused    
                } bit;
            
                static constexpr unsigned ADDR_POS = 0;
                static constexpr unsigned ADDR_MASK = 0x000000ff;
                static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
                static constexpr unsigned ADDRMASK_POS = 16;
                static constexpr unsigned ADDRMASK_MASK = 0x00ff0000;
                static constexpr unsigned ADDRMASK(unsigned value) { return (value << 16); }
            } SPIM_ADDR;

            volatile union SPIM_DATA_T // SPIM_DATA: SPIM Data 
            {
                uint32_t reg;
                struct __attribute__((packed)) SPIM_DATA_BIT_T
                {
                    unsigned DATA : 9; // bits 0..8 Data Value
                    unsigned      : 23; // bits 9..31 unused    
                } bit;
            
                static constexpr unsigned DATA_POS = 0;
                static constexpr unsigned DATA_MASK = 0x000001ff;
                static constexpr unsigned DATA(unsigned value) { return (value << 0); }
            } SPIM_DATA;

            uint8_t Reserved7[4];

            volatile union SPIM_DBGCTRL_T // SPIM_DBGCTRL: SPIM Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) SPIM_DBGCTRL_BIT_T
                {
                    unsigned DBGSTOP : 1; // bit 0 Debug Mode
                    unsigned         : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGSTOP_POS = 0;
                static constexpr unsigned DBGSTOP_MASK = 0x00000001;
                static constexpr unsigned DBGSTOP(unsigned value) { return (value << 0); }
            } SPIM_DBGCTRL;

        } SPIM;

        struct __attribute__((packed)) // Cluster USART_EXT
        {
        
            volatile union USART_EXT_CTRLA_T // USART_EXT_CTRLA: USART_EXT Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_EXT_CTRLA_BIT_T
                {
                    unsigned SWRST    : 1; // bit 0 Software Reset
                    unsigned ENABLE   : 1; // bit 1 Enable
                    unsigned MODE     : 3; // bits 2..4 Operating Mode
                    unsigned          : 2; // bits 5..6 unused
                    unsigned RUNSTDBY : 1; // bit 7 Run during Standby
                    unsigned IBON     : 1; // bit 8 Immediate Buffer Overflow Notification
                    unsigned          : 4; // bits 9..12 unused
                    unsigned SAMPR    : 3; // bits 13..15 Sample
                    unsigned TXPO     : 2; // bits 16..17 Transmit Data Pinout
                    unsigned          : 2; // bits 18..19 unused
                    unsigned RXPO     : 2; // bits 20..21 Receive Data Pinout
                    unsigned SAMPA    : 2; // bits 22..23 Sample Adjustment
                    unsigned FORM     : 4; // bits 24..27 Frame Format
                    unsigned CMODE    : 1; // bit 28 Communication Mode
                    unsigned CPOL     : 1; // bit 29 Clock Polarity
                    unsigned DORD     : 1; // bit 30 Data Order
                    unsigned          : 1; // bit 31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000001c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned RUNSTDBY_POS = 7;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000080;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 7); }
                static constexpr unsigned IBON_POS = 8;
                static constexpr unsigned IBON_MASK = 0x00000100;
                static constexpr unsigned IBON(unsigned value) { return (value << 8); }
                static constexpr unsigned SAMPR_POS = 13;
                static constexpr unsigned SAMPR_MASK = 0x0000e000;
                static constexpr unsigned SAMPR(unsigned value) { return (value << 13); }
                static constexpr unsigned TXPO_POS = 16;
                static constexpr unsigned TXPO_MASK = 0x00030000;
                static constexpr unsigned TXPO(unsigned value) { return (value << 16); }
                static constexpr unsigned RXPO_POS = 20;
                static constexpr unsigned RXPO_MASK = 0x00300000;
                static constexpr unsigned RXPO(unsigned value) { return (value << 20); }
                static constexpr unsigned SAMPA_POS = 22;
                static constexpr unsigned SAMPA_MASK = 0x00c00000;
                static constexpr unsigned SAMPA(unsigned value) { return (value << 22); }
                static constexpr unsigned FORM_POS = 24;
                static constexpr unsigned FORM_MASK = 0x0f000000;
                static constexpr unsigned FORM(unsigned value) { return (value << 24); }
                static constexpr unsigned CMODE_POS = 28;
                static constexpr unsigned CMODE_MASK = 0x10000000;
                static constexpr unsigned CMODE(unsigned value) { return (value << 28); }
                static constexpr unsigned CPOL_POS = 29;
                static constexpr unsigned CPOL_MASK = 0x20000000;
                static constexpr unsigned CPOL(unsigned value) { return (value << 29); }
                static constexpr unsigned DORD_POS = 30;
                static constexpr unsigned DORD_MASK = 0x40000000;
                static constexpr unsigned DORD(unsigned value) { return (value << 30); }
            } USART_EXT_CTRLA;

            volatile union USART_EXT_CTRLB_T // USART_EXT_CTRLB: USART_EXT Control B 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_EXT_CTRLB_BIT_T
                {
                    unsigned CHSIZE : 3; // bits 0..2 Character Size
                    unsigned        : 3; // bits 3..5 unused
                    unsigned SBMODE : 1; // bit 6 Stop Bit Mode
                    unsigned        : 1; // bit 7 unused
                    unsigned COLDEN : 1; // bit 8 Collision Detection Enable
                    unsigned SFDE   : 1; // bit 9 Start of Frame Detection Enable
                    unsigned ENC    : 1; // bit 10 Encoding Format
                    unsigned        : 2; // bits 11..12 unused
                    unsigned PMODE  : 1; // bit 13 Parity Mode
                    unsigned        : 2; // bits 14..15 unused
                    unsigned TXEN   : 1; // bit 16 Transmitter Enable
                    unsigned RXEN   : 1; // bit 17 Receiver Enable
                    unsigned        : 6; // bits 18..23 unused
                    unsigned LINCMD : 2; // bits 24..25 LIN Command
                    unsigned        : 6; // bits 26..31 unused    
                } bit;
            
                static constexpr unsigned CHSIZE_POS = 0;
                static constexpr unsigned CHSIZE_MASK = 0x00000007;
                static constexpr unsigned CHSIZE(unsigned value) { return (value << 0); }
                static constexpr unsigned SBMODE_POS = 6;
                static constexpr unsigned SBMODE_MASK = 0x00000040;
                static constexpr unsigned SBMODE(unsigned value) { return (value << 6); }
                static constexpr unsigned COLDEN_POS = 8;
                static constexpr unsigned COLDEN_MASK = 0x00000100;
                static constexpr unsigned COLDEN(unsigned value) { return (value << 8); }
                static constexpr unsigned SFDE_POS = 9;
                static constexpr unsigned SFDE_MASK = 0x00000200;
                static constexpr unsigned SFDE(unsigned value) { return (value << 9); }
                static constexpr unsigned ENC_POS = 10;
                static constexpr unsigned ENC_MASK = 0x00000400;
                static constexpr unsigned ENC(unsigned value) { return (value << 10); }
                static constexpr unsigned PMODE_POS = 13;
                static constexpr unsigned PMODE_MASK = 0x00002000;
                static constexpr unsigned PMODE(unsigned value) { return (value << 13); }
                static constexpr unsigned TXEN_POS = 16;
                static constexpr unsigned TXEN_MASK = 0x00010000;
                static constexpr unsigned TXEN(unsigned value) { return (value << 16); }
                static constexpr unsigned RXEN_POS = 17;
                static constexpr unsigned RXEN_MASK = 0x00020000;
                static constexpr unsigned RXEN(unsigned value) { return (value << 17); }
                static constexpr unsigned LINCMD_POS = 24;
                static constexpr unsigned LINCMD_MASK = 0x03000000;
                static constexpr unsigned LINCMD(unsigned value) { return (value << 24); }
            } USART_EXT_CTRLB;

            volatile union USART_EXT_CTRLC_T // USART_EXT_CTRLC: USART_EXT Control C 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_EXT_CTRLC_BIT_T
                {
                    unsigned GTIME  : 3; // bits 0..2 RS485 Guard Time
                    unsigned        : 5; // bits 3..7 unused
                    unsigned BRKLEN : 2; // bits 8..9 LIN Master Break Length
                    unsigned HDRDLY : 2; // bits 10..11 LIN Master Header Delay
                    unsigned        : 20; // bits 12..31 unused    
                } bit;
            
                static constexpr unsigned GTIME_POS = 0;
                static constexpr unsigned GTIME_MASK = 0x00000007;
                static constexpr unsigned GTIME(unsigned value) { return (value << 0); }
                static constexpr unsigned BRKLEN_POS = 8;
                static constexpr unsigned BRKLEN_MASK = 0x00000300;
                static constexpr unsigned BRKLEN(unsigned value) { return (value << 8); }
                static constexpr unsigned HDRDLY_POS = 10;
                static constexpr unsigned HDRDLY_MASK = 0x00000c00;
                static constexpr unsigned HDRDLY(unsigned value) { return (value << 10); }
            } USART_EXT_CTRLC;

            volatile union USART_EXT_BAUD_T // USART_EXT_BAUD: USART_EXT Baud Rate 
            {
                uint16_t reg;
                struct __attribute__((packed)) USART_EXT_BAUD_BIT_T
                {
                    unsigned BAUD : 16; // bits 0..15 Baud Rate Value    
                } bit;
            
                static constexpr unsigned BAUD_POS = 0;
                static constexpr unsigned BAUD_MASK = 0x0000ffff;
                static constexpr unsigned BAUD(unsigned value) { return (value << 0); }
            } USART_EXT_BAUD;

            volatile union USART_EXT_RXPL_T // USART_EXT_RXPL: USART_EXT Receive Pulse Length 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_EXT_RXPL_BIT_T
                {
                    unsigned RXPL : 8; // bits 0..7 Receive Pulse Length    
                } bit;
            
                static constexpr unsigned RXPL_POS = 0;
                static constexpr unsigned RXPL_MASK = 0x000000ff;
                static constexpr unsigned RXPL(unsigned value) { return (value << 0); }
            } USART_EXT_RXPL;

            uint8_t Reserved1[5];

            volatile union USART_EXT_INTENCLR_T // USART_EXT_INTENCLR: USART_EXT Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_EXT_INTENCLR_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Disable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Disable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Disable
                    unsigned RXS   : 1; // bit 3 Receive Start Interrupt Disable
                    unsigned CTSIC : 1; // bit 4 Clear To Send Input Change Interrupt Disable
                    unsigned RXBRK : 1; // bit 5 Break Received Interrupt Disable
                    unsigned       : 1; // bit 6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Disable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned RXS_POS = 3;
                static constexpr unsigned RXS_MASK = 0x00000008;
                static constexpr unsigned RXS(unsigned value) { return (value << 3); }
                static constexpr unsigned CTSIC_POS = 4;
                static constexpr unsigned CTSIC_MASK = 0x00000010;
                static constexpr unsigned CTSIC(unsigned value) { return (value << 4); }
                static constexpr unsigned RXBRK_POS = 5;
                static constexpr unsigned RXBRK_MASK = 0x00000020;
                static constexpr unsigned RXBRK(unsigned value) { return (value << 5); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } USART_EXT_INTENCLR;

            uint8_t Reserved2[1];

            volatile union USART_EXT_INTENSET_T // USART_EXT_INTENSET: USART_EXT Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_EXT_INTENSET_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Enable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Enable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Enable
                    unsigned RXS   : 1; // bit 3 Receive Start Interrupt Enable
                    unsigned CTSIC : 1; // bit 4 Clear To Send Input Change Interrupt Enable
                    unsigned RXBRK : 1; // bit 5 Break Received Interrupt Enable
                    unsigned       : 1; // bit 6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Enable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned RXS_POS = 3;
                static constexpr unsigned RXS_MASK = 0x00000008;
                static constexpr unsigned RXS(unsigned value) { return (value << 3); }
                static constexpr unsigned CTSIC_POS = 4;
                static constexpr unsigned CTSIC_MASK = 0x00000010;
                static constexpr unsigned CTSIC(unsigned value) { return (value << 4); }
                static constexpr unsigned RXBRK_POS = 5;
                static constexpr unsigned RXBRK_MASK = 0x00000020;
                static constexpr unsigned RXBRK(unsigned value) { return (value << 5); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } USART_EXT_INTENSET;

            uint8_t Reserved3[1];

            volatile union USART_EXT_INTFLAG_T // USART_EXT_INTFLAG: USART_EXT Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_EXT_INTFLAG_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt
                    unsigned RXS   : 1; // bit 3 Receive Start Interrupt
                    unsigned CTSIC : 1; // bit 4 Clear To Send Input Change Interrupt
                    unsigned RXBRK : 1; // bit 5 Break Received Interrupt
                    unsigned       : 1; // bit 6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned RXS_POS = 3;
                static constexpr unsigned RXS_MASK = 0x00000008;
                static constexpr unsigned RXS(unsigned value) { return (value << 3); }
                static constexpr unsigned CTSIC_POS = 4;
                static constexpr unsigned CTSIC_MASK = 0x00000010;
                static constexpr unsigned CTSIC(unsigned value) { return (value << 4); }
                static constexpr unsigned RXBRK_POS = 5;
                static constexpr unsigned RXBRK_MASK = 0x00000020;
                static constexpr unsigned RXBRK(unsigned value) { return (value << 5); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } USART_EXT_INTFLAG;

            uint8_t Reserved4[1];

            volatile union USART_EXT_STATUS_T // USART_EXT_STATUS: USART_EXT Status 
            {
                uint16_t reg;
                struct __attribute__((packed)) USART_EXT_STATUS_BIT_T
                {
                    unsigned PERR   : 1; // bit 0 Parity Error
                    unsigned FERR   : 1; // bit 1 Frame Error
                    unsigned BUFOVF : 1; // bit 2 Buffer Overflow
                    unsigned CTS    : 1; // bit 3 Clear To Send
                    unsigned ISF    : 1; // bit 4 Inconsistent Sync Field
                    unsigned COLL   : 1; // bit 5 Collision Detected
                    unsigned TXE    : 1; // bit 6 Transmitter Empty
                    unsigned        : 9; // bits 7..15 unused    
                } bit;
            
                static constexpr unsigned PERR_POS = 0;
                static constexpr unsigned PERR_MASK = 0x00000001;
                static constexpr unsigned PERR(unsigned value) { return (value << 0); }
                static constexpr unsigned FERR_POS = 1;
                static constexpr unsigned FERR_MASK = 0x00000002;
                static constexpr unsigned FERR(unsigned value) { return (value << 1); }
                static constexpr unsigned BUFOVF_POS = 2;
                static constexpr unsigned BUFOVF_MASK = 0x00000004;
                static constexpr unsigned BUFOVF(unsigned value) { return (value << 2); }
                static constexpr unsigned CTS_POS = 3;
                static constexpr unsigned CTS_MASK = 0x00000008;
                static constexpr unsigned CTS(unsigned value) { return (value << 3); }
                static constexpr unsigned ISF_POS = 4;
                static constexpr unsigned ISF_MASK = 0x00000010;
                static constexpr unsigned ISF(unsigned value) { return (value << 4); }
                static constexpr unsigned COLL_POS = 5;
                static constexpr unsigned COLL_MASK = 0x00000020;
                static constexpr unsigned COLL(unsigned value) { return (value << 5); }
                static constexpr unsigned TXE_POS = 6;
                static constexpr unsigned TXE_MASK = 0x00000040;
                static constexpr unsigned TXE(unsigned value) { return (value << 6); }
            } USART_EXT_STATUS;

            volatile union USART_EXT_SYNCBUSY_T // USART_EXT_SYNCBUSY: USART_EXT Synchronization Busy 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_EXT_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 Software Reset Synchronization Busy
                    unsigned ENABLE : 1; // bit 1 SERCOM Enable Synchronization Busy
                    unsigned CTRLB  : 1; // bit 2 CTRLB Synchronization Busy
                    unsigned        : 29; // bits 3..31 unused    
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
            } USART_EXT_SYNCBUSY;

            uint8_t Reserved5[8];

            volatile union USART_EXT_DATA_T // USART_EXT_DATA: USART_EXT Data 
            {
                uint16_t reg;
                struct __attribute__((packed)) USART_EXT_DATA_BIT_T
                {
                    unsigned DATA : 9; // bits 0..8 Data Value
                    unsigned      : 7; // bits 9..15 unused    
                } bit;
            
                static constexpr unsigned DATA_POS = 0;
                static constexpr unsigned DATA_MASK = 0x000001ff;
                static constexpr unsigned DATA(unsigned value) { return (value << 0); }
            } USART_EXT_DATA;

            uint8_t Reserved6[6];

            volatile union USART_EXT_DBGCTRL_T // USART_EXT_DBGCTRL: USART_EXT Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_EXT_DBGCTRL_BIT_T
                {
                    unsigned DBGSTOP : 1; // bit 0 Debug Mode
                    unsigned         : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGSTOP_POS = 0;
                static constexpr unsigned DBGSTOP_MASK = 0x00000001;
                static constexpr unsigned DBGSTOP(unsigned value) { return (value << 0); }
            } USART_EXT_DBGCTRL;

        } USART_EXT;

        struct __attribute__((packed)) // Cluster USART_INT
        {
        
            volatile union USART_INT_CTRLA_T // USART_INT_CTRLA: USART_INT Control A 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_INT_CTRLA_BIT_T
                {
                    unsigned SWRST    : 1; // bit 0 Software Reset
                    unsigned ENABLE   : 1; // bit 1 Enable
                    unsigned MODE     : 3; // bits 2..4 Operating Mode
                    unsigned          : 2; // bits 5..6 unused
                    unsigned RUNSTDBY : 1; // bit 7 Run during Standby
                    unsigned IBON     : 1; // bit 8 Immediate Buffer Overflow Notification
                    unsigned          : 4; // bits 9..12 unused
                    unsigned SAMPR    : 3; // bits 13..15 Sample
                    unsigned TXPO     : 2; // bits 16..17 Transmit Data Pinout
                    unsigned          : 2; // bits 18..19 unused
                    unsigned RXPO     : 2; // bits 20..21 Receive Data Pinout
                    unsigned SAMPA    : 2; // bits 22..23 Sample Adjustment
                    unsigned FORM     : 4; // bits 24..27 Frame Format
                    unsigned CMODE    : 1; // bit 28 Communication Mode
                    unsigned CPOL     : 1; // bit 29 Clock Polarity
                    unsigned DORD     : 1; // bit 30 Data Order
                    unsigned          : 1; // bit 31 unused    
                } bit;
            
                static constexpr unsigned SWRST_POS = 0;
                static constexpr unsigned SWRST_MASK = 0x00000001;
                static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
                static constexpr unsigned ENABLE_POS = 1;
                static constexpr unsigned ENABLE_MASK = 0x00000002;
                static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
                static constexpr unsigned MODE_POS = 2;
                static constexpr unsigned MODE_MASK = 0x0000001c;
                static constexpr unsigned MODE(unsigned value) { return (value << 2); }
                static constexpr unsigned RUNSTDBY_POS = 7;
                static constexpr unsigned RUNSTDBY_MASK = 0x00000080;
                static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 7); }
                static constexpr unsigned IBON_POS = 8;
                static constexpr unsigned IBON_MASK = 0x00000100;
                static constexpr unsigned IBON(unsigned value) { return (value << 8); }
                static constexpr unsigned SAMPR_POS = 13;
                static constexpr unsigned SAMPR_MASK = 0x0000e000;
                static constexpr unsigned SAMPR(unsigned value) { return (value << 13); }
                static constexpr unsigned TXPO_POS = 16;
                static constexpr unsigned TXPO_MASK = 0x00030000;
                static constexpr unsigned TXPO(unsigned value) { return (value << 16); }
                static constexpr unsigned RXPO_POS = 20;
                static constexpr unsigned RXPO_MASK = 0x00300000;
                static constexpr unsigned RXPO(unsigned value) { return (value << 20); }
                static constexpr unsigned SAMPA_POS = 22;
                static constexpr unsigned SAMPA_MASK = 0x00c00000;
                static constexpr unsigned SAMPA(unsigned value) { return (value << 22); }
                static constexpr unsigned FORM_POS = 24;
                static constexpr unsigned FORM_MASK = 0x0f000000;
                static constexpr unsigned FORM(unsigned value) { return (value << 24); }
                static constexpr unsigned CMODE_POS = 28;
                static constexpr unsigned CMODE_MASK = 0x10000000;
                static constexpr unsigned CMODE(unsigned value) { return (value << 28); }
                static constexpr unsigned CPOL_POS = 29;
                static constexpr unsigned CPOL_MASK = 0x20000000;
                static constexpr unsigned CPOL(unsigned value) { return (value << 29); }
                static constexpr unsigned DORD_POS = 30;
                static constexpr unsigned DORD_MASK = 0x40000000;
                static constexpr unsigned DORD(unsigned value) { return (value << 30); }
            } USART_INT_CTRLA;

            volatile union USART_INT_CTRLB_T // USART_INT_CTRLB: USART_INT Control B 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_INT_CTRLB_BIT_T
                {
                    unsigned CHSIZE : 3; // bits 0..2 Character Size
                    unsigned        : 3; // bits 3..5 unused
                    unsigned SBMODE : 1; // bit 6 Stop Bit Mode
                    unsigned        : 1; // bit 7 unused
                    unsigned COLDEN : 1; // bit 8 Collision Detection Enable
                    unsigned SFDE   : 1; // bit 9 Start of Frame Detection Enable
                    unsigned ENC    : 1; // bit 10 Encoding Format
                    unsigned        : 2; // bits 11..12 unused
                    unsigned PMODE  : 1; // bit 13 Parity Mode
                    unsigned        : 2; // bits 14..15 unused
                    unsigned TXEN   : 1; // bit 16 Transmitter Enable
                    unsigned RXEN   : 1; // bit 17 Receiver Enable
                    unsigned        : 6; // bits 18..23 unused
                    unsigned LINCMD : 2; // bits 24..25 LIN Command
                    unsigned        : 6; // bits 26..31 unused    
                } bit;
            
                static constexpr unsigned CHSIZE_POS = 0;
                static constexpr unsigned CHSIZE_MASK = 0x00000007;
                static constexpr unsigned CHSIZE(unsigned value) { return (value << 0); }
                static constexpr unsigned SBMODE_POS = 6;
                static constexpr unsigned SBMODE_MASK = 0x00000040;
                static constexpr unsigned SBMODE(unsigned value) { return (value << 6); }
                static constexpr unsigned COLDEN_POS = 8;
                static constexpr unsigned COLDEN_MASK = 0x00000100;
                static constexpr unsigned COLDEN(unsigned value) { return (value << 8); }
                static constexpr unsigned SFDE_POS = 9;
                static constexpr unsigned SFDE_MASK = 0x00000200;
                static constexpr unsigned SFDE(unsigned value) { return (value << 9); }
                static constexpr unsigned ENC_POS = 10;
                static constexpr unsigned ENC_MASK = 0x00000400;
                static constexpr unsigned ENC(unsigned value) { return (value << 10); }
                static constexpr unsigned PMODE_POS = 13;
                static constexpr unsigned PMODE_MASK = 0x00002000;
                static constexpr unsigned PMODE(unsigned value) { return (value << 13); }
                static constexpr unsigned TXEN_POS = 16;
                static constexpr unsigned TXEN_MASK = 0x00010000;
                static constexpr unsigned TXEN(unsigned value) { return (value << 16); }
                static constexpr unsigned RXEN_POS = 17;
                static constexpr unsigned RXEN_MASK = 0x00020000;
                static constexpr unsigned RXEN(unsigned value) { return (value << 17); }
                static constexpr unsigned LINCMD_POS = 24;
                static constexpr unsigned LINCMD_MASK = 0x03000000;
                static constexpr unsigned LINCMD(unsigned value) { return (value << 24); }
            } USART_INT_CTRLB;

            volatile union USART_INT_CTRLC_T // USART_INT_CTRLC: USART_INT Control C 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_INT_CTRLC_BIT_T
                {
                    unsigned GTIME  : 3; // bits 0..2 RS485 Guard Time
                    unsigned        : 5; // bits 3..7 unused
                    unsigned BRKLEN : 2; // bits 8..9 LIN Master Break Length
                    unsigned HDRDLY : 2; // bits 10..11 LIN Master Header Delay
                    unsigned        : 20; // bits 12..31 unused    
                } bit;
            
                static constexpr unsigned GTIME_POS = 0;
                static constexpr unsigned GTIME_MASK = 0x00000007;
                static constexpr unsigned GTIME(unsigned value) { return (value << 0); }
                static constexpr unsigned BRKLEN_POS = 8;
                static constexpr unsigned BRKLEN_MASK = 0x00000300;
                static constexpr unsigned BRKLEN(unsigned value) { return (value << 8); }
                static constexpr unsigned HDRDLY_POS = 10;
                static constexpr unsigned HDRDLY_MASK = 0x00000c00;
                static constexpr unsigned HDRDLY(unsigned value) { return (value << 10); }
            } USART_INT_CTRLC;

            volatile union USART_INT_BAUD_T // USART_INT_BAUD: USART_INT Baud Rate 
            {
                uint16_t reg;
                struct __attribute__((packed)) USART_INT_BAUD_BIT_T
                {
                    unsigned BAUD : 16; // bits 0..15 Baud Rate Value    
                } bit;
            
                static constexpr unsigned BAUD_POS = 0;
                static constexpr unsigned BAUD_MASK = 0x0000ffff;
                static constexpr unsigned BAUD(unsigned value) { return (value << 0); }
            } USART_INT_BAUD;

            volatile union USART_INT_RXPL_T // USART_INT_RXPL: USART_INT Receive Pulse Length 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_INT_RXPL_BIT_T
                {
                    unsigned RXPL : 8; // bits 0..7 Receive Pulse Length    
                } bit;
            
                static constexpr unsigned RXPL_POS = 0;
                static constexpr unsigned RXPL_MASK = 0x000000ff;
                static constexpr unsigned RXPL(unsigned value) { return (value << 0); }
            } USART_INT_RXPL;

            uint8_t Reserved1[5];

            volatile union USART_INT_INTENCLR_T // USART_INT_INTENCLR: USART_INT Interrupt Enable Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_INT_INTENCLR_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Disable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Disable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Disable
                    unsigned RXS   : 1; // bit 3 Receive Start Interrupt Disable
                    unsigned CTSIC : 1; // bit 4 Clear To Send Input Change Interrupt Disable
                    unsigned RXBRK : 1; // bit 5 Break Received Interrupt Disable
                    unsigned       : 1; // bit 6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Disable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned RXS_POS = 3;
                static constexpr unsigned RXS_MASK = 0x00000008;
                static constexpr unsigned RXS(unsigned value) { return (value << 3); }
                static constexpr unsigned CTSIC_POS = 4;
                static constexpr unsigned CTSIC_MASK = 0x00000010;
                static constexpr unsigned CTSIC(unsigned value) { return (value << 4); }
                static constexpr unsigned RXBRK_POS = 5;
                static constexpr unsigned RXBRK_MASK = 0x00000020;
                static constexpr unsigned RXBRK(unsigned value) { return (value << 5); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } USART_INT_INTENCLR;

            uint8_t Reserved2[1];

            volatile union USART_INT_INTENSET_T // USART_INT_INTENSET: USART_INT Interrupt Enable Set 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_INT_INTENSET_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt Enable
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt Enable
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt Enable
                    unsigned RXS   : 1; // bit 3 Receive Start Interrupt Enable
                    unsigned CTSIC : 1; // bit 4 Clear To Send Input Change Interrupt Enable
                    unsigned RXBRK : 1; // bit 5 Break Received Interrupt Enable
                    unsigned       : 1; // bit 6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt Enable    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned RXS_POS = 3;
                static constexpr unsigned RXS_MASK = 0x00000008;
                static constexpr unsigned RXS(unsigned value) { return (value << 3); }
                static constexpr unsigned CTSIC_POS = 4;
                static constexpr unsigned CTSIC_MASK = 0x00000010;
                static constexpr unsigned CTSIC(unsigned value) { return (value << 4); }
                static constexpr unsigned RXBRK_POS = 5;
                static constexpr unsigned RXBRK_MASK = 0x00000020;
                static constexpr unsigned RXBRK(unsigned value) { return (value << 5); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } USART_INT_INTENSET;

            uint8_t Reserved3[1];

            volatile union USART_INT_INTFLAG_T // USART_INT_INTFLAG: USART_INT Interrupt Flag Status and Clear 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_INT_INTFLAG_BIT_T
                {
                    unsigned DRE   : 1; // bit 0 Data Register Empty Interrupt
                    unsigned TXC   : 1; // bit 1 Transmit Complete Interrupt
                    unsigned RXC   : 1; // bit 2 Receive Complete Interrupt
                    unsigned RXS   : 1; // bit 3 Receive Start Interrupt
                    unsigned CTSIC : 1; // bit 4 Clear To Send Input Change Interrupt
                    unsigned RXBRK : 1; // bit 5 Break Received Interrupt
                    unsigned       : 1; // bit 6 unused
                    unsigned ERROR : 1; // bit 7 Combined Error Interrupt    
                } bit;
            
                static constexpr unsigned DRE_POS = 0;
                static constexpr unsigned DRE_MASK = 0x00000001;
                static constexpr unsigned DRE(unsigned value) { return (value << 0); }
                static constexpr unsigned TXC_POS = 1;
                static constexpr unsigned TXC_MASK = 0x00000002;
                static constexpr unsigned TXC(unsigned value) { return (value << 1); }
                static constexpr unsigned RXC_POS = 2;
                static constexpr unsigned RXC_MASK = 0x00000004;
                static constexpr unsigned RXC(unsigned value) { return (value << 2); }
                static constexpr unsigned RXS_POS = 3;
                static constexpr unsigned RXS_MASK = 0x00000008;
                static constexpr unsigned RXS(unsigned value) { return (value << 3); }
                static constexpr unsigned CTSIC_POS = 4;
                static constexpr unsigned CTSIC_MASK = 0x00000010;
                static constexpr unsigned CTSIC(unsigned value) { return (value << 4); }
                static constexpr unsigned RXBRK_POS = 5;
                static constexpr unsigned RXBRK_MASK = 0x00000020;
                static constexpr unsigned RXBRK(unsigned value) { return (value << 5); }
                static constexpr unsigned ERROR_POS = 7;
                static constexpr unsigned ERROR_MASK = 0x00000080;
                static constexpr unsigned ERROR(unsigned value) { return (value << 7); }
            } USART_INT_INTFLAG;

            uint8_t Reserved4[1];

            volatile union USART_INT_STATUS_T // USART_INT_STATUS: USART_INT Status 
            {
                uint16_t reg;
                struct __attribute__((packed)) USART_INT_STATUS_BIT_T
                {
                    unsigned PERR   : 1; // bit 0 Parity Error
                    unsigned FERR   : 1; // bit 1 Frame Error
                    unsigned BUFOVF : 1; // bit 2 Buffer Overflow
                    unsigned CTS    : 1; // bit 3 Clear To Send
                    unsigned ISF    : 1; // bit 4 Inconsistent Sync Field
                    unsigned COLL   : 1; // bit 5 Collision Detected
                    unsigned TXE    : 1; // bit 6 Transmitter Empty
                    unsigned        : 9; // bits 7..15 unused    
                } bit;
            
                static constexpr unsigned PERR_POS = 0;
                static constexpr unsigned PERR_MASK = 0x00000001;
                static constexpr unsigned PERR(unsigned value) { return (value << 0); }
                static constexpr unsigned FERR_POS = 1;
                static constexpr unsigned FERR_MASK = 0x00000002;
                static constexpr unsigned FERR(unsigned value) { return (value << 1); }
                static constexpr unsigned BUFOVF_POS = 2;
                static constexpr unsigned BUFOVF_MASK = 0x00000004;
                static constexpr unsigned BUFOVF(unsigned value) { return (value << 2); }
                static constexpr unsigned CTS_POS = 3;
                static constexpr unsigned CTS_MASK = 0x00000008;
                static constexpr unsigned CTS(unsigned value) { return (value << 3); }
                static constexpr unsigned ISF_POS = 4;
                static constexpr unsigned ISF_MASK = 0x00000010;
                static constexpr unsigned ISF(unsigned value) { return (value << 4); }
                static constexpr unsigned COLL_POS = 5;
                static constexpr unsigned COLL_MASK = 0x00000020;
                static constexpr unsigned COLL(unsigned value) { return (value << 5); }
                static constexpr unsigned TXE_POS = 6;
                static constexpr unsigned TXE_MASK = 0x00000040;
                static constexpr unsigned TXE(unsigned value) { return (value << 6); }
            } USART_INT_STATUS;

            volatile union USART_INT_SYNCBUSY_T // USART_INT_SYNCBUSY: USART_INT Synchronization Busy 
            {
                uint32_t reg;
                struct __attribute__((packed)) USART_INT_SYNCBUSY_BIT_T
                {
                    unsigned SWRST  : 1; // bit 0 Software Reset Synchronization Busy
                    unsigned ENABLE : 1; // bit 1 SERCOM Enable Synchronization Busy
                    unsigned CTRLB  : 1; // bit 2 CTRLB Synchronization Busy
                    unsigned        : 29; // bits 3..31 unused    
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
            } USART_INT_SYNCBUSY;

            uint8_t Reserved5[8];

            volatile union USART_INT_DATA_T // USART_INT_DATA: USART_INT Data 
            {
                uint16_t reg;
                struct __attribute__((packed)) USART_INT_DATA_BIT_T
                {
                    unsigned DATA : 9; // bits 0..8 Data Value
                    unsigned      : 7; // bits 9..15 unused    
                } bit;
            
                static constexpr unsigned DATA_POS = 0;
                static constexpr unsigned DATA_MASK = 0x000001ff;
                static constexpr unsigned DATA(unsigned value) { return (value << 0); }
            } USART_INT_DATA;

            uint8_t Reserved6[6];

            volatile union USART_INT_DBGCTRL_T // USART_INT_DBGCTRL: USART_INT Debug Control 
            {
                uint8_t reg;
                struct __attribute__((packed)) USART_INT_DBGCTRL_BIT_T
                {
                    unsigned DBGSTOP : 1; // bit 0 Debug Mode
                    unsigned         : 7; // bits 1..7 unused    
                } bit;
            
                static constexpr unsigned DBGSTOP_POS = 0;
                static constexpr unsigned DBGSTOP_MASK = 0x00000001;
                static constexpr unsigned DBGSTOP(unsigned value) { return (value << 0); }
            } USART_INT_DBGCTRL;

        } USART_INT;

    } // clustered register
}; // struct SERCOM0_T

static_assert(sizeof(SERCOM_T) == SERCOM_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp