#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) I2C_T
{
    static constexpr size_t INSTANCE_SIZE = 40;
    static constexpr intptr_t BASE_ADDRESS_I2C1 = 0x40005400;
    static constexpr intptr_t BASE_ADDRESS_I2C2 = 0x40005800;
    static constexpr intptr_t BASE_ADDRESS_I2C3 = 0x40005c00;

    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OAR1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_OAR2 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_SR1 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_SR2 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_CCR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_TRISE = 0x20;
    static constexpr intptr_t ADDR_OFFSET_FLTR = 0x24;

    volatile union CR1_T // CR1: Control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned PE        : 1; // bit 0 Peripheral enable
            unsigned SMBUS     : 1; // bit 1 SMBus mode
            unsigned           : 1; // bit 2 unused
            unsigned SMBTYPE   : 1; // bit 3 SMBus type
            unsigned ENARP     : 1; // bit 4 ARP enable
            unsigned ENPEC     : 1; // bit 5 PEC enable
            unsigned ENGC      : 1; // bit 6 General call enable
            unsigned NOSTRETCH : 1; // bit 7 Clock stretching disable (Slave mode)
            unsigned START     : 1; // bit 8 Start generation
            unsigned STOP      : 1; // bit 9 Stop generation
            unsigned ACK       : 1; // bit 10 Acknowledge enable
            unsigned POS       : 1; // bit 11 Acknowledge/PEC Position (for data reception)
            unsigned PEC       : 1; // bit 12 Packet error checking
            unsigned ALERT     : 1; // bit 13 SMBus alert
            unsigned           : 1; // bit 14 unused
            unsigned SWRST     : 1; // bit 15 Software reset
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned PE_POS = 0;
        static constexpr unsigned PE_MASK = 0x00000001;
        static constexpr unsigned PE(unsigned value) { return (value << 0); }
        static constexpr unsigned SMBUS_POS = 1;
        static constexpr unsigned SMBUS_MASK = 0x00000002;
        static constexpr unsigned SMBUS(unsigned value) { return (value << 1); }
        static constexpr unsigned SMBTYPE_POS = 3;
        static constexpr unsigned SMBTYPE_MASK = 0x00000008;
        static constexpr unsigned SMBTYPE(unsigned value) { return (value << 3); }
        static constexpr unsigned ENARP_POS = 4;
        static constexpr unsigned ENARP_MASK = 0x00000010;
        static constexpr unsigned ENARP(unsigned value) { return (value << 4); }
        static constexpr unsigned ENPEC_POS = 5;
        static constexpr unsigned ENPEC_MASK = 0x00000020;
        static constexpr unsigned ENPEC(unsigned value) { return (value << 5); }
        static constexpr unsigned ENGC_POS = 6;
        static constexpr unsigned ENGC_MASK = 0x00000040;
        static constexpr unsigned ENGC(unsigned value) { return (value << 6); }
        static constexpr unsigned NOSTRETCH_POS = 7;
        static constexpr unsigned NOSTRETCH_MASK = 0x00000080;
        static constexpr unsigned NOSTRETCH(unsigned value) { return (value << 7); }
        static constexpr unsigned START_POS = 8;
        static constexpr unsigned START_MASK = 0x00000100;
        static constexpr unsigned START(unsigned value) { return (value << 8); }
        static constexpr unsigned STOP_POS = 9;
        static constexpr unsigned STOP_MASK = 0x00000200;
        static constexpr unsigned STOP(unsigned value) { return (value << 9); }
        static constexpr unsigned ACK_POS = 10;
        static constexpr unsigned ACK_MASK = 0x00000400;
        static constexpr unsigned ACK(unsigned value) { return (value << 10); }
        static constexpr unsigned POS_POS = 11;
        static constexpr unsigned POS_MASK = 0x00000800;
        static constexpr unsigned POS(unsigned value) { return (value << 11); }
        static constexpr unsigned PEC_POS = 12;
        static constexpr unsigned PEC_MASK = 0x00001000;
        static constexpr unsigned PEC(unsigned value) { return (value << 12); }
        static constexpr unsigned ALERT_POS = 13;
        static constexpr unsigned ALERT_MASK = 0x00002000;
        static constexpr unsigned ALERT(unsigned value) { return (value << 13); }
        static constexpr unsigned SWRST_POS = 15;
        static constexpr unsigned SWRST_MASK = 0x00008000;
        static constexpr unsigned SWRST(unsigned value) { return (value << 15); }
    } CR1;

    volatile union CR2_T // CR2: Control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned FREQ    : 6; // bits 0..5 Peripheral clock frequency
            unsigned         : 2; // bits 6..7 unused
            unsigned ITERREN : 1; // bit 8 Error interrupt enable
            unsigned ITEVTEN : 1; // bit 9 Event interrupt enable
            unsigned ITBUFEN : 1; // bit 10 Buffer interrupt enable
            unsigned DMAEN   : 1; // bit 11 DMA requests enable
            unsigned LAST    : 1; // bit 12 DMA last transfer
            unsigned         : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned FREQ_POS = 0;
        static constexpr unsigned FREQ_MASK = 0x0000003f;
        static constexpr unsigned FREQ(unsigned value) { return (value << 0); }
        static constexpr unsigned ITERREN_POS = 8;
        static constexpr unsigned ITERREN_MASK = 0x00000100;
        static constexpr unsigned ITERREN(unsigned value) { return (value << 8); }
        static constexpr unsigned ITEVTEN_POS = 9;
        static constexpr unsigned ITEVTEN_MASK = 0x00000200;
        static constexpr unsigned ITEVTEN(unsigned value) { return (value << 9); }
        static constexpr unsigned ITBUFEN_POS = 10;
        static constexpr unsigned ITBUFEN_MASK = 0x00000400;
        static constexpr unsigned ITBUFEN(unsigned value) { return (value << 10); }
        static constexpr unsigned DMAEN_POS = 11;
        static constexpr unsigned DMAEN_MASK = 0x00000800;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 11); }
        static constexpr unsigned LAST_POS = 12;
        static constexpr unsigned LAST_MASK = 0x00001000;
        static constexpr unsigned LAST(unsigned value) { return (value << 12); }
    } CR2;

    volatile union OAR1_T // OAR1: Own address register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) OAR1_BIT_T
        {
            unsigned ADD0    : 1; // bit 0 Interface address
            unsigned ADD7    : 7; // bits 1..7 Interface address
            unsigned ADD10   : 2; // bits 8..9 Interface address
            unsigned         : 5; // bits 10..14 unused
            unsigned ADDMODE : 1; // bit 15 Addressing mode (slave mode)
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned ADD0_POS = 0;
        static constexpr unsigned ADD0_MASK = 0x00000001;
        static constexpr unsigned ADD0(unsigned value) { return (value << 0); }
        static constexpr unsigned ADD7_POS = 1;
        static constexpr unsigned ADD7_MASK = 0x000000fe;
        static constexpr unsigned ADD7(unsigned value) { return (value << 1); }
        static constexpr unsigned ADD10_POS = 8;
        static constexpr unsigned ADD10_MASK = 0x00000300;
        static constexpr unsigned ADD10(unsigned value) { return (value << 8); }
        static constexpr unsigned ADDMODE_POS = 15;
        static constexpr unsigned ADDMODE_MASK = 0x00008000;
        static constexpr unsigned ADDMODE(unsigned value) { return (value << 15); }
    } OAR1;

    volatile union OAR2_T // OAR2: Own address register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) OAR2_BIT_T
        {
            unsigned ENDUAL : 1; // bit 0 Dual addressing mode enable
            unsigned ADD2   : 7; // bits 1..7 Interface address
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned ENDUAL_POS = 0;
        static constexpr unsigned ENDUAL_MASK = 0x00000001;
        static constexpr unsigned ENDUAL(unsigned value) { return (value << 0); }
        static constexpr unsigned ADD2_POS = 1;
        static constexpr unsigned ADD2_MASK = 0x000000fe;
        static constexpr unsigned ADD2(unsigned value) { return (value << 1); }
    } OAR2;

    volatile union DR_T // DR: Data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DR : 8; // bits 0..7 8-bit data register
            unsigned    : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned DR_POS = 0;
        static constexpr unsigned DR_MASK = 0x000000ff;
        static constexpr unsigned DR(unsigned value) { return (value << 0); }
    } DR;

    volatile union SR1_T // SR1: Status register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR1_BIT_T
        {
            unsigned SB       : 1; // bit 0 Start bit (Master mode)
            unsigned ADDR     : 1; // bit 1 Address sent (master mode)/matched (slave mode)
            unsigned BTF      : 1; // bit 2 Byte transfer finished
            unsigned ADD10    : 1; // bit 3 10-bit header sent (Master mode)
            unsigned STOPF    : 1; // bit 4 Stop detection (slave mode)
            unsigned          : 1; // bit 5 unused
            unsigned RxNE     : 1; // bit 6 Data register not empty (receivers)
            unsigned TxE      : 1; // bit 7 Data register empty (transmitters)
            unsigned BERR     : 1; // bit 8 Bus error
            unsigned ARLO     : 1; // bit 9 Arbitration lost (master mode)
            unsigned AF       : 1; // bit 10 Acknowledge failure
            unsigned OVR      : 1; // bit 11 Overrun/Underrun
            unsigned PECERR   : 1; // bit 12 PEC Error in reception
            unsigned          : 1; // bit 13 unused
            unsigned TIMEOUT  : 1; // bit 14 Timeout or Tlow error
            unsigned SMBALERT : 1; // bit 15 SMBus alert
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned SB_POS = 0;
        static constexpr unsigned SB_MASK = 0x00000001;
        static constexpr unsigned SB(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDR_POS = 1;
        static constexpr unsigned ADDR_MASK = 0x00000002;
        static constexpr unsigned ADDR(unsigned value) { return (value << 1); }
        static constexpr unsigned BTF_POS = 2;
        static constexpr unsigned BTF_MASK = 0x00000004;
        static constexpr unsigned BTF(unsigned value) { return (value << 2); }
        static constexpr unsigned ADD10_POS = 3;
        static constexpr unsigned ADD10_MASK = 0x00000008;
        static constexpr unsigned ADD10(unsigned value) { return (value << 3); }
        static constexpr unsigned STOPF_POS = 4;
        static constexpr unsigned STOPF_MASK = 0x00000010;
        static constexpr unsigned STOPF(unsigned value) { return (value << 4); }
        static constexpr unsigned RxNE_POS = 6;
        static constexpr unsigned RxNE_MASK = 0x00000040;
        static constexpr unsigned RxNE(unsigned value) { return (value << 6); }
        static constexpr unsigned TxE_POS = 7;
        static constexpr unsigned TxE_MASK = 0x00000080;
        static constexpr unsigned TxE(unsigned value) { return (value << 7); }
        static constexpr unsigned BERR_POS = 8;
        static constexpr unsigned BERR_MASK = 0x00000100;
        static constexpr unsigned BERR(unsigned value) { return (value << 8); }
        static constexpr unsigned ARLO_POS = 9;
        static constexpr unsigned ARLO_MASK = 0x00000200;
        static constexpr unsigned ARLO(unsigned value) { return (value << 9); }
        static constexpr unsigned AF_POS = 10;
        static constexpr unsigned AF_MASK = 0x00000400;
        static constexpr unsigned AF(unsigned value) { return (value << 10); }
        static constexpr unsigned OVR_POS = 11;
        static constexpr unsigned OVR_MASK = 0x00000800;
        static constexpr unsigned OVR(unsigned value) { return (value << 11); }
        static constexpr unsigned PECERR_POS = 12;
        static constexpr unsigned PECERR_MASK = 0x00001000;
        static constexpr unsigned PECERR(unsigned value) { return (value << 12); }
        static constexpr unsigned TIMEOUT_POS = 14;
        static constexpr unsigned TIMEOUT_MASK = 0x00004000;
        static constexpr unsigned TIMEOUT(unsigned value) { return (value << 14); }
        static constexpr unsigned SMBALERT_POS = 15;
        static constexpr unsigned SMBALERT_MASK = 0x00008000;
        static constexpr unsigned SMBALERT(unsigned value) { return (value << 15); }
    } SR1;

    volatile union SR2_T // SR2: Status register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR2_BIT_T
        {
            unsigned MSL        : 1; // bit 0 Master/slave
            unsigned BUSY       : 1; // bit 1 Bus busy
            unsigned TRA        : 1; // bit 2 Transmitter/receiver
            unsigned            : 1; // bit 3 unused
            unsigned GENCALL    : 1; // bit 4 General call address (Slave mode)
            unsigned SMBDEFAULT : 1; // bit 5 SMBus device default address (Slave mode)
            unsigned SMBHOST    : 1; // bit 6 SMBus host header (Slave mode)
            unsigned DUALF      : 1; // bit 7 Dual flag (Slave mode)
            unsigned PEC        : 8; // bits 8..15 acket error checking register
            unsigned            : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned MSL_POS = 0;
        static constexpr unsigned MSL_MASK = 0x00000001;
        static constexpr unsigned MSL(unsigned value) { return (value << 0); }
        static constexpr unsigned BUSY_POS = 1;
        static constexpr unsigned BUSY_MASK = 0x00000002;
        static constexpr unsigned BUSY(unsigned value) { return (value << 1); }
        static constexpr unsigned TRA_POS = 2;
        static constexpr unsigned TRA_MASK = 0x00000004;
        static constexpr unsigned TRA(unsigned value) { return (value << 2); }
        static constexpr unsigned GENCALL_POS = 4;
        static constexpr unsigned GENCALL_MASK = 0x00000010;
        static constexpr unsigned GENCALL(unsigned value) { return (value << 4); }
        static constexpr unsigned SMBDEFAULT_POS = 5;
        static constexpr unsigned SMBDEFAULT_MASK = 0x00000020;
        static constexpr unsigned SMBDEFAULT(unsigned value) { return (value << 5); }
        static constexpr unsigned SMBHOST_POS = 6;
        static constexpr unsigned SMBHOST_MASK = 0x00000040;
        static constexpr unsigned SMBHOST(unsigned value) { return (value << 6); }
        static constexpr unsigned DUALF_POS = 7;
        static constexpr unsigned DUALF_MASK = 0x00000080;
        static constexpr unsigned DUALF(unsigned value) { return (value << 7); }
        static constexpr unsigned PEC_POS = 8;
        static constexpr unsigned PEC_MASK = 0x0000ff00;
        static constexpr unsigned PEC(unsigned value) { return (value << 8); }
    } SR2;

    volatile union CCR_T // CCR: Clock control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR_BIT_T
        {
            unsigned CCR  : 12; // bits 0..11 Clock control register in Fast/Standard mode (Master mode)
            unsigned      : 2; // bits 12..13 unused
            unsigned DUTY : 1; // bit 14 Fast mode duty cycle
            unsigned F_S  : 1; // bit 15 I2C master mode selection
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CCR_POS = 0;
        static constexpr unsigned CCR_MASK = 0x00000fff;
        static constexpr unsigned CCR(unsigned value) { return (value << 0); }
        static constexpr unsigned DUTY_POS = 14;
        static constexpr unsigned DUTY_MASK = 0x00004000;
        static constexpr unsigned DUTY(unsigned value) { return (value << 14); }
        static constexpr unsigned F_S_POS = 15;
        static constexpr unsigned F_S_MASK = 0x00008000;
        static constexpr unsigned F_S(unsigned value) { return (value << 15); }
    } CCR;

    volatile union TRISE_T // TRISE: TRISE register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TRISE_BIT_T
        {
            unsigned TRISE : 6; // bits 0..5 Maximum rise time in Fast/Standard mode (Master mode)
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned TRISE_POS = 0;
        static constexpr unsigned TRISE_MASK = 0x0000003f;
        static constexpr unsigned TRISE(unsigned value) { return (value << 0); }
    } TRISE;

    volatile union FLTR_T // FLTR: I2C FLTR register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FLTR_BIT_T
        {
            unsigned DNF   : 4; // bits 0..3 Digital noise filter
            unsigned ANOFF : 1; // bit 4 Analog noise filter OFF
            unsigned       : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned DNF_POS = 0;
        static constexpr unsigned DNF_MASK = 0x0000000f;
        static constexpr unsigned DNF(unsigned value) { return (value << 0); }
        static constexpr unsigned ANOFF_POS = 4;
        static constexpr unsigned ANOFF_MASK = 0x00000010;
        static constexpr unsigned ANOFF(unsigned value) { return (value << 4); }
    } FLTR;

}; // struct I2C1_T

static_assert(sizeof(I2C_T) == I2C_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp