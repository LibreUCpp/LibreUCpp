#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) I2C_T
{
    static constexpr size_t INSTANCE_SIZE = 44;
    static constexpr intptr_t BASE_ADDRESS_I2C1 = 0x40005400;
    static constexpr intptr_t BASE_ADDRESS_I2C2 = 0x40005800;

    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OAR1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_OAR2 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_TIMINGR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_TIMEOUTR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_ISR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_ICR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_PECR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_RXDR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_TXDR = 0x28;

    volatile union CR1_T // CR1: Control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned PE        : 1; // bit 0 Peripheral enable
            unsigned TXIE      : 1; // bit 1 TX Interrupt enable
            unsigned RXIE      : 1; // bit 2 RX Interrupt enable
            unsigned ADDRIE    : 1; // bit 3 Address match interrupt enable (slave only)
            unsigned NACKIE    : 1; // bit 4 Not acknowledge received interrupt enable
            unsigned STOPIE    : 1; // bit 5 STOP detection Interrupt enable
            unsigned TCIE      : 1; // bit 6 Transfer Complete interrupt enable
            unsigned ERRIE     : 1; // bit 7 Error interrupts enable
            unsigned DNF       : 4; // bits 8..11 Digital noise filter
            unsigned ANFOFF    : 1; // bit 12 Analog noise filter OFF
            unsigned SWRST     : 1; // bit 13 Software reset
            unsigned TXDMAEN   : 1; // bit 14 DMA transmission requests enable
            unsigned RXDMAEN   : 1; // bit 15 DMA reception requests enable
            unsigned SBC       : 1; // bit 16 Slave byte control
            unsigned NOSTRETCH : 1; // bit 17 Clock stretching disable
            unsigned WUPEN     : 1; // bit 18 Wakeup from STOP enable
            unsigned GCEN      : 1; // bit 19 General call enable
            unsigned SMBHEN    : 1; // bit 20 SMBus Host address enable
            unsigned SMBDEN    : 1; // bit 21 SMBus Device Default address enable
            unsigned ALERTEN   : 1; // bit 22 SMBUS alert enable
            unsigned PECEN     : 1; // bit 23 PEC enable
            unsigned           : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned PE_POS = 0;
        static constexpr unsigned PE_MASK = 0x00000001;
        static constexpr unsigned PE(unsigned value) { return (value << 0); }
        static constexpr unsigned TXIE_POS = 1;
        static constexpr unsigned TXIE_MASK = 0x00000002;
        static constexpr unsigned TXIE(unsigned value) { return (value << 1); }
        static constexpr unsigned RXIE_POS = 2;
        static constexpr unsigned RXIE_MASK = 0x00000004;
        static constexpr unsigned RXIE(unsigned value) { return (value << 2); }
        static constexpr unsigned ADDRIE_POS = 3;
        static constexpr unsigned ADDRIE_MASK = 0x00000008;
        static constexpr unsigned ADDRIE(unsigned value) { return (value << 3); }
        static constexpr unsigned NACKIE_POS = 4;
        static constexpr unsigned NACKIE_MASK = 0x00000010;
        static constexpr unsigned NACKIE(unsigned value) { return (value << 4); }
        static constexpr unsigned STOPIE_POS = 5;
        static constexpr unsigned STOPIE_MASK = 0x00000020;
        static constexpr unsigned STOPIE(unsigned value) { return (value << 5); }
        static constexpr unsigned TCIE_POS = 6;
        static constexpr unsigned TCIE_MASK = 0x00000040;
        static constexpr unsigned TCIE(unsigned value) { return (value << 6); }
        static constexpr unsigned ERRIE_POS = 7;
        static constexpr unsigned ERRIE_MASK = 0x00000080;
        static constexpr unsigned ERRIE(unsigned value) { return (value << 7); }
        static constexpr unsigned DNF_POS = 8;
        static constexpr unsigned DNF_MASK = 0x00000f00;
        static constexpr unsigned DNF(unsigned value) { return (value << 8); }
        static constexpr unsigned ANFOFF_POS = 12;
        static constexpr unsigned ANFOFF_MASK = 0x00001000;
        static constexpr unsigned ANFOFF(unsigned value) { return (value << 12); }
        static constexpr unsigned SWRST_POS = 13;
        static constexpr unsigned SWRST_MASK = 0x00002000;
        static constexpr unsigned SWRST(unsigned value) { return (value << 13); }
        static constexpr unsigned TXDMAEN_POS = 14;
        static constexpr unsigned TXDMAEN_MASK = 0x00004000;
        static constexpr unsigned TXDMAEN(unsigned value) { return (value << 14); }
        static constexpr unsigned RXDMAEN_POS = 15;
        static constexpr unsigned RXDMAEN_MASK = 0x00008000;
        static constexpr unsigned RXDMAEN(unsigned value) { return (value << 15); }
        static constexpr unsigned SBC_POS = 16;
        static constexpr unsigned SBC_MASK = 0x00010000;
        static constexpr unsigned SBC(unsigned value) { return (value << 16); }
        static constexpr unsigned NOSTRETCH_POS = 17;
        static constexpr unsigned NOSTRETCH_MASK = 0x00020000;
        static constexpr unsigned NOSTRETCH(unsigned value) { return (value << 17); }
        static constexpr unsigned WUPEN_POS = 18;
        static constexpr unsigned WUPEN_MASK = 0x00040000;
        static constexpr unsigned WUPEN(unsigned value) { return (value << 18); }
        static constexpr unsigned GCEN_POS = 19;
        static constexpr unsigned GCEN_MASK = 0x00080000;
        static constexpr unsigned GCEN(unsigned value) { return (value << 19); }
        static constexpr unsigned SMBHEN_POS = 20;
        static constexpr unsigned SMBHEN_MASK = 0x00100000;
        static constexpr unsigned SMBHEN(unsigned value) { return (value << 20); }
        static constexpr unsigned SMBDEN_POS = 21;
        static constexpr unsigned SMBDEN_MASK = 0x00200000;
        static constexpr unsigned SMBDEN(unsigned value) { return (value << 21); }
        static constexpr unsigned ALERTEN_POS = 22;
        static constexpr unsigned ALERTEN_MASK = 0x00400000;
        static constexpr unsigned ALERTEN(unsigned value) { return (value << 22); }
        static constexpr unsigned PECEN_POS = 23;
        static constexpr unsigned PECEN_MASK = 0x00800000;
        static constexpr unsigned PECEN(unsigned value) { return (value << 23); }
    } CR1;

    volatile union CR2_T // CR2: Control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned SADD0   : 1; // bit 0 Slave address bit 0 (master mode)
            unsigned SADD1   : 7; // bits 1..7 Slave address bit 7:1 (master mode)
            unsigned SADD8   : 2; // bits 8..9 Slave address bit 9:8 (master mode)
            unsigned RD_WRN  : 1; // bit 10 Transfer direction (master mode)
            unsigned ADD10   : 1; // bit 11 10-bit addressing mode (master mode)
            unsigned HEAD10R : 1; // bit 12 10-bit address header only read direction (master receiver mode)
            unsigned START   : 1; // bit 13 Start generation
            unsigned STOP    : 1; // bit 14 Stop generation (master mode)
            unsigned NACK    : 1; // bit 15 NACK generation (slave mode)
            unsigned NBYTES  : 8; // bits 16..23 Number of bytes
            unsigned RELOAD  : 1; // bit 24 NBYTES reload mode
            unsigned AUTOEND : 1; // bit 25 Automatic end mode (master mode)
            unsigned PECBYTE : 1; // bit 26 Packet error checking byte
            unsigned         : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned SADD0_POS = 0;
        static constexpr unsigned SADD0_MASK = 0x00000001;
        static constexpr unsigned SADD0(unsigned value) { return (value << 0); }
        static constexpr unsigned SADD1_POS = 1;
        static constexpr unsigned SADD1_MASK = 0x000000fe;
        static constexpr unsigned SADD1(unsigned value) { return (value << 1); }
        static constexpr unsigned SADD8_POS = 8;
        static constexpr unsigned SADD8_MASK = 0x00000300;
        static constexpr unsigned SADD8(unsigned value) { return (value << 8); }
        static constexpr unsigned RD_WRN_POS = 10;
        static constexpr unsigned RD_WRN_MASK = 0x00000400;
        static constexpr unsigned RD_WRN(unsigned value) { return (value << 10); }
        static constexpr unsigned ADD10_POS = 11;
        static constexpr unsigned ADD10_MASK = 0x00000800;
        static constexpr unsigned ADD10(unsigned value) { return (value << 11); }
        static constexpr unsigned HEAD10R_POS = 12;
        static constexpr unsigned HEAD10R_MASK = 0x00001000;
        static constexpr unsigned HEAD10R(unsigned value) { return (value << 12); }
        static constexpr unsigned START_POS = 13;
        static constexpr unsigned START_MASK = 0x00002000;
        static constexpr unsigned START(unsigned value) { return (value << 13); }
        static constexpr unsigned STOP_POS = 14;
        static constexpr unsigned STOP_MASK = 0x00004000;
        static constexpr unsigned STOP(unsigned value) { return (value << 14); }
        static constexpr unsigned NACK_POS = 15;
        static constexpr unsigned NACK_MASK = 0x00008000;
        static constexpr unsigned NACK(unsigned value) { return (value << 15); }
        static constexpr unsigned NBYTES_POS = 16;
        static constexpr unsigned NBYTES_MASK = 0x00ff0000;
        static constexpr unsigned NBYTES(unsigned value) { return (value << 16); }
        static constexpr unsigned RELOAD_POS = 24;
        static constexpr unsigned RELOAD_MASK = 0x01000000;
        static constexpr unsigned RELOAD(unsigned value) { return (value << 24); }
        static constexpr unsigned AUTOEND_POS = 25;
        static constexpr unsigned AUTOEND_MASK = 0x02000000;
        static constexpr unsigned AUTOEND(unsigned value) { return (value << 25); }
        static constexpr unsigned PECBYTE_POS = 26;
        static constexpr unsigned PECBYTE_MASK = 0x04000000;
        static constexpr unsigned PECBYTE(unsigned value) { return (value << 26); }
    } CR2;

    volatile union OAR1_T // OAR1: Own address register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) OAR1_BIT_T
        {
            unsigned OA1_0   : 1; // bit 0 Interface address
            unsigned OA1_1   : 7; // bits 1..7 Interface address
            unsigned OA1_8   : 2; // bits 8..9 Interface address
            unsigned OA1MODE : 1; // bit 10 Own Address 1 10-bit mode
            unsigned         : 4; // bits 11..14 unused
            unsigned OA1EN   : 1; // bit 15 Own Address 1 enable
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned OA1_0_POS = 0;
        static constexpr unsigned OA1_0_MASK = 0x00000001;
        static constexpr unsigned OA1_0(unsigned value) { return (value << 0); }
        static constexpr unsigned OA1_1_POS = 1;
        static constexpr unsigned OA1_1_MASK = 0x000000fe;
        static constexpr unsigned OA1_1(unsigned value) { return (value << 1); }
        static constexpr unsigned OA1_8_POS = 8;
        static constexpr unsigned OA1_8_MASK = 0x00000300;
        static constexpr unsigned OA1_8(unsigned value) { return (value << 8); }
        static constexpr unsigned OA1MODE_POS = 10;
        static constexpr unsigned OA1MODE_MASK = 0x00000400;
        static constexpr unsigned OA1MODE(unsigned value) { return (value << 10); }
        static constexpr unsigned OA1EN_POS = 15;
        static constexpr unsigned OA1EN_MASK = 0x00008000;
        static constexpr unsigned OA1EN(unsigned value) { return (value << 15); }
    } OAR1;

    volatile union OAR2_T // OAR2: Own address register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) OAR2_BIT_T
        {
            unsigned        : 1; // bit 0 unused
            unsigned OA2    : 7; // bits 1..7 Interface address
            unsigned OA2MSK : 3; // bits 8..10 Own Address 2 masks
            unsigned        : 4; // bits 11..14 unused
            unsigned OA2EN  : 1; // bit 15 Own Address 2 enable
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned OA2_POS = 1;
        static constexpr unsigned OA2_MASK = 0x000000fe;
        static constexpr unsigned OA2(unsigned value) { return (value << 1); }
        static constexpr unsigned OA2MSK_POS = 8;
        static constexpr unsigned OA2MSK_MASK = 0x00000700;
        static constexpr unsigned OA2MSK(unsigned value) { return (value << 8); }
        static constexpr unsigned OA2EN_POS = 15;
        static constexpr unsigned OA2EN_MASK = 0x00008000;
        static constexpr unsigned OA2EN(unsigned value) { return (value << 15); }
    } OAR2;

    volatile union TIMINGR_T // TIMINGR: Timing register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TIMINGR_BIT_T
        {
            unsigned SCLL   : 8; // bits 0..7 SCL low period (master mode)
            unsigned SCLH   : 8; // bits 8..15 SCL high period (master mode)
            unsigned SDADEL : 4; // bits 16..19 Data hold time
            unsigned SCLDEL : 4; // bits 20..23 Data setup time
            unsigned        : 4; // bits 24..27 unused
            unsigned PRESC  : 4; // bits 28..31 Timing prescaler    
        } bit;
    
        static constexpr unsigned SCLL_POS = 0;
        static constexpr unsigned SCLL_MASK = 0x000000ff;
        static constexpr unsigned SCLL(unsigned value) { return (value << 0); }
        static constexpr unsigned SCLH_POS = 8;
        static constexpr unsigned SCLH_MASK = 0x0000ff00;
        static constexpr unsigned SCLH(unsigned value) { return (value << 8); }
        static constexpr unsigned SDADEL_POS = 16;
        static constexpr unsigned SDADEL_MASK = 0x000f0000;
        static constexpr unsigned SDADEL(unsigned value) { return (value << 16); }
        static constexpr unsigned SCLDEL_POS = 20;
        static constexpr unsigned SCLDEL_MASK = 0x00f00000;
        static constexpr unsigned SCLDEL(unsigned value) { return (value << 20); }
        static constexpr unsigned PRESC_POS = 28;
        static constexpr unsigned PRESC_MASK = 0xf0000000;
        static constexpr unsigned PRESC(unsigned value) { return (value << 28); }
    } TIMINGR;

    volatile union TIMEOUTR_T // TIMEOUTR: Status register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) TIMEOUTR_BIT_T
        {
            unsigned TIMEOUTA : 12; // bits 0..11 Bus timeout A
            unsigned TIDLE    : 1; // bit 12 Idle clock timeout detection
            unsigned          : 2; // bits 13..14 unused
            unsigned TIMOUTEN : 1; // bit 15 Clock timeout enable
            unsigned TIMEOUTB : 12; // bits 16..27 Bus timeout B
            unsigned          : 3; // bits 28..30 unused
            unsigned TEXTEN   : 1; // bit 31 Extended clock timeout enable    
        } bit;
    
        static constexpr unsigned TIMEOUTA_POS = 0;
        static constexpr unsigned TIMEOUTA_MASK = 0x00000fff;
        static constexpr unsigned TIMEOUTA(unsigned value) { return (value << 0); }
        static constexpr unsigned TIDLE_POS = 12;
        static constexpr unsigned TIDLE_MASK = 0x00001000;
        static constexpr unsigned TIDLE(unsigned value) { return (value << 12); }
        static constexpr unsigned TIMOUTEN_POS = 15;
        static constexpr unsigned TIMOUTEN_MASK = 0x00008000;
        static constexpr unsigned TIMOUTEN(unsigned value) { return (value << 15); }
        static constexpr unsigned TIMEOUTB_POS = 16;
        static constexpr unsigned TIMEOUTB_MASK = 0x0fff0000;
        static constexpr unsigned TIMEOUTB(unsigned value) { return (value << 16); }
        static constexpr unsigned TEXTEN_POS = 31;
        static constexpr unsigned TEXTEN_MASK = 0x80000000;
        static constexpr unsigned TEXTEN(unsigned value) { return (value << 31); }
    } TIMEOUTR;

    volatile union ISR_T // ISR: Interrupt and Status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned TXE     : 1; // bit 0 Transmit data register empty (transmitters)
            unsigned TXIS    : 1; // bit 1 Transmit interrupt status (transmitters)
            unsigned RXNE    : 1; // bit 2 Receive data register not empty (receivers)
            unsigned ADDR    : 1; // bit 3 Address matched (slave mode)
            unsigned NACKF   : 1; // bit 4 Not acknowledge received flag
            unsigned STOPF   : 1; // bit 5 Stop detection flag
            unsigned TC      : 1; // bit 6 Transfer Complete (master mode)
            unsigned TCR     : 1; // bit 7 Transfer Complete Reload
            unsigned BERR    : 1; // bit 8 Bus error
            unsigned ARLO    : 1; // bit 9 Arbitration lost
            unsigned OVR     : 1; // bit 10 Overrun/Underrun (slave mode)
            unsigned PECERR  : 1; // bit 11 PEC Error in reception
            unsigned TIMEOUT : 1; // bit 12 Timeout or t_low detection flag
            unsigned ALERT   : 1; // bit 13 SMBus alert
            unsigned         : 1; // bit 14 unused
            unsigned BUSY    : 1; // bit 15 Bus busy
            unsigned DIR     : 1; // bit 16 Transfer direction (Slave mode)
            unsigned ADDCODE : 7; // bits 17..23 Address match code (Slave mode)
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned TXE_POS = 0;
        static constexpr unsigned TXE_MASK = 0x00000001;
        static constexpr unsigned TXE(unsigned value) { return (value << 0); }
        static constexpr unsigned TXIS_POS = 1;
        static constexpr unsigned TXIS_MASK = 0x00000002;
        static constexpr unsigned TXIS(unsigned value) { return (value << 1); }
        static constexpr unsigned RXNE_POS = 2;
        static constexpr unsigned RXNE_MASK = 0x00000004;
        static constexpr unsigned RXNE(unsigned value) { return (value << 2); }
        static constexpr unsigned ADDR_POS = 3;
        static constexpr unsigned ADDR_MASK = 0x00000008;
        static constexpr unsigned ADDR(unsigned value) { return (value << 3); }
        static constexpr unsigned NACKF_POS = 4;
        static constexpr unsigned NACKF_MASK = 0x00000010;
        static constexpr unsigned NACKF(unsigned value) { return (value << 4); }
        static constexpr unsigned STOPF_POS = 5;
        static constexpr unsigned STOPF_MASK = 0x00000020;
        static constexpr unsigned STOPF(unsigned value) { return (value << 5); }
        static constexpr unsigned TC_POS = 6;
        static constexpr unsigned TC_MASK = 0x00000040;
        static constexpr unsigned TC(unsigned value) { return (value << 6); }
        static constexpr unsigned TCR_POS = 7;
        static constexpr unsigned TCR_MASK = 0x00000080;
        static constexpr unsigned TCR(unsigned value) { return (value << 7); }
        static constexpr unsigned BERR_POS = 8;
        static constexpr unsigned BERR_MASK = 0x00000100;
        static constexpr unsigned BERR(unsigned value) { return (value << 8); }
        static constexpr unsigned ARLO_POS = 9;
        static constexpr unsigned ARLO_MASK = 0x00000200;
        static constexpr unsigned ARLO(unsigned value) { return (value << 9); }
        static constexpr unsigned OVR_POS = 10;
        static constexpr unsigned OVR_MASK = 0x00000400;
        static constexpr unsigned OVR(unsigned value) { return (value << 10); }
        static constexpr unsigned PECERR_POS = 11;
        static constexpr unsigned PECERR_MASK = 0x00000800;
        static constexpr unsigned PECERR(unsigned value) { return (value << 11); }
        static constexpr unsigned TIMEOUT_POS = 12;
        static constexpr unsigned TIMEOUT_MASK = 0x00001000;
        static constexpr unsigned TIMEOUT(unsigned value) { return (value << 12); }
        static constexpr unsigned ALERT_POS = 13;
        static constexpr unsigned ALERT_MASK = 0x00002000;
        static constexpr unsigned ALERT(unsigned value) { return (value << 13); }
        static constexpr unsigned BUSY_POS = 15;
        static constexpr unsigned BUSY_MASK = 0x00008000;
        static constexpr unsigned BUSY(unsigned value) { return (value << 15); }
        static constexpr unsigned DIR_POS = 16;
        static constexpr unsigned DIR_MASK = 0x00010000;
        static constexpr unsigned DIR(unsigned value) { return (value << 16); }
        static constexpr unsigned ADDCODE_POS = 17;
        static constexpr unsigned ADDCODE_MASK = 0x00fe0000;
        static constexpr unsigned ADDCODE(unsigned value) { return (value << 17); }
    } ISR;

    volatile union ICR_T // ICR: Interrupt clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICR_BIT_T
        {
            unsigned          : 3; // bits 0..2 unused
            unsigned ADDRCF   : 1; // bit 3 Address Matched flag clear
            unsigned NACKCF   : 1; // bit 4 Not Acknowledge flag clear
            unsigned STOPCF   : 1; // bit 5 Stop detection flag clear
            unsigned          : 2; // bits 6..7 unused
            unsigned BERRCF   : 1; // bit 8 Bus error flag clear
            unsigned ARLOCF   : 1; // bit 9 Arbitration lost flag clear
            unsigned OVRCF    : 1; // bit 10 Overrun/Underrun flag clear
            unsigned PECCF    : 1; // bit 11 PEC Error flag clear
            unsigned TIMOUTCF : 1; // bit 12 Timeout detection flag clear
            unsigned ALERTCF  : 1; // bit 13 Alert flag clear
            unsigned          : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned ADDRCF_POS = 3;
        static constexpr unsigned ADDRCF_MASK = 0x00000008;
        static constexpr unsigned ADDRCF(unsigned value) { return (value << 3); }
        static constexpr unsigned NACKCF_POS = 4;
        static constexpr unsigned NACKCF_MASK = 0x00000010;
        static constexpr unsigned NACKCF(unsigned value) { return (value << 4); }
        static constexpr unsigned STOPCF_POS = 5;
        static constexpr unsigned STOPCF_MASK = 0x00000020;
        static constexpr unsigned STOPCF(unsigned value) { return (value << 5); }
        static constexpr unsigned BERRCF_POS = 8;
        static constexpr unsigned BERRCF_MASK = 0x00000100;
        static constexpr unsigned BERRCF(unsigned value) { return (value << 8); }
        static constexpr unsigned ARLOCF_POS = 9;
        static constexpr unsigned ARLOCF_MASK = 0x00000200;
        static constexpr unsigned ARLOCF(unsigned value) { return (value << 9); }
        static constexpr unsigned OVRCF_POS = 10;
        static constexpr unsigned OVRCF_MASK = 0x00000400;
        static constexpr unsigned OVRCF(unsigned value) { return (value << 10); }
        static constexpr unsigned PECCF_POS = 11;
        static constexpr unsigned PECCF_MASK = 0x00000800;
        static constexpr unsigned PECCF(unsigned value) { return (value << 11); }
        static constexpr unsigned TIMOUTCF_POS = 12;
        static constexpr unsigned TIMOUTCF_MASK = 0x00001000;
        static constexpr unsigned TIMOUTCF(unsigned value) { return (value << 12); }
        static constexpr unsigned ALERTCF_POS = 13;
        static constexpr unsigned ALERTCF_MASK = 0x00002000;
        static constexpr unsigned ALERTCF(unsigned value) { return (value << 13); }
    } ICR;

    volatile union PECR_T // PECR: PEC register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PECR_BIT_T
        {
            unsigned PEC : 8; // bits 0..7 Packet error checking register
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PEC_POS = 0;
        static constexpr unsigned PEC_MASK = 0x000000ff;
        static constexpr unsigned PEC(unsigned value) { return (value << 0); }
    } PECR;

    volatile union RXDR_T // RXDR: Receive data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXDR_BIT_T
        {
            unsigned RXDATA : 8; // bits 0..7 8-bit receive data
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned RXDATA_POS = 0;
        static constexpr unsigned RXDATA_MASK = 0x000000ff;
        static constexpr unsigned RXDATA(unsigned value) { return (value << 0); }
    } RXDR;

    volatile union TXDR_T // TXDR: Transmit data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXDR_BIT_T
        {
            unsigned TXDATA : 8; // bits 0..7 8-bit transmit data
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned TXDATA_POS = 0;
        static constexpr unsigned TXDATA_MASK = 0x000000ff;
        static constexpr unsigned TXDATA(unsigned value) { return (value << 0); }
    } TXDR;

}; // struct I2C1_T

static_assert(sizeof(I2C_T) == I2C_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp