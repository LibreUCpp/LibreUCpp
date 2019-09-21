#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CEC_T
{
    static constexpr size_t INSTANCE_SIZE = 24;
    static constexpr intptr_t BASE_ADDRESS = 0x40006c00;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CFGR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_TXDR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_RXDR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_ISR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_IER = 0x14;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned CECEN : 1; // bit 0 CEC Enable
            unsigned TXSOM : 1; // bit 1 Tx start of message
            unsigned TXEOM : 1; // bit 2 Tx End Of Message
            unsigned       : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned CECEN_POS = 0;
        static constexpr unsigned CECEN_MASK = 0x00000001;
        static constexpr unsigned CECEN(unsigned value) { return (value << 0); }
        static constexpr unsigned TXSOM_POS = 1;
        static constexpr unsigned TXSOM_MASK = 0x00000002;
        static constexpr unsigned TXSOM(unsigned value) { return (value << 1); }
        static constexpr unsigned TXEOM_POS = 2;
        static constexpr unsigned TXEOM_MASK = 0x00000004;
        static constexpr unsigned TXEOM(unsigned value) { return (value << 2); }
    } CR;

    volatile union CFGR_T // CFGR: configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR_BIT_T
        {
            unsigned SFT      : 3; // bits 0..2 Signal Free Time
            unsigned RXTOL    : 1; // bit 3 Rx-Tolerance
            unsigned BRESTP   : 1; // bit 4 Rx-stop on bit rising error
            unsigned BREGEN   : 1; // bit 5 Generate error-bit on bit rising error
            unsigned LBPEGEN  : 1; // bit 6 Generate Error-Bit on Long Bit Period Error
            unsigned BRDNOGEN : 1; // bit 7 Avoid Error-Bit Generation in Broadcast
            unsigned SFTOP    : 1; // bit 8 SFT Option Bit
            unsigned          : 7; // bits 9..15 unused
            unsigned OAR      : 15; // bits 16..30 Own addresses configuration
            unsigned LSTN     : 1; // bit 31 Listen mode    
        } bit;
    
        static constexpr unsigned SFT_POS = 0;
        static constexpr unsigned SFT_MASK = 0x00000007;
        static constexpr unsigned SFT(unsigned value) { return (value << 0); }
        static constexpr unsigned RXTOL_POS = 3;
        static constexpr unsigned RXTOL_MASK = 0x00000008;
        static constexpr unsigned RXTOL(unsigned value) { return (value << 3); }
        static constexpr unsigned BRESTP_POS = 4;
        static constexpr unsigned BRESTP_MASK = 0x00000010;
        static constexpr unsigned BRESTP(unsigned value) { return (value << 4); }
        static constexpr unsigned BREGEN_POS = 5;
        static constexpr unsigned BREGEN_MASK = 0x00000020;
        static constexpr unsigned BREGEN(unsigned value) { return (value << 5); }
        static constexpr unsigned LBPEGEN_POS = 6;
        static constexpr unsigned LBPEGEN_MASK = 0x00000040;
        static constexpr unsigned LBPEGEN(unsigned value) { return (value << 6); }
        static constexpr unsigned BRDNOGEN_POS = 7;
        static constexpr unsigned BRDNOGEN_MASK = 0x00000080;
        static constexpr unsigned BRDNOGEN(unsigned value) { return (value << 7); }
        static constexpr unsigned SFTOP_POS = 8;
        static constexpr unsigned SFTOP_MASK = 0x00000100;
        static constexpr unsigned SFTOP(unsigned value) { return (value << 8); }
        static constexpr unsigned OAR_POS = 16;
        static constexpr unsigned OAR_MASK = 0x7fff0000;
        static constexpr unsigned OAR(unsigned value) { return (value << 16); }
        static constexpr unsigned LSTN_POS = 31;
        static constexpr unsigned LSTN_MASK = 0x80000000;
        static constexpr unsigned LSTN(unsigned value) { return (value << 31); }
    } CFGR;

    volatile union TXDR_T // TXDR: Tx data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXDR_BIT_T
        {
            unsigned TXD : 8; // bits 0..7 Tx Data register
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned TXD_POS = 0;
        static constexpr unsigned TXD_MASK = 0x000000ff;
        static constexpr unsigned TXD(unsigned value) { return (value << 0); }
    } TXDR;

    volatile union RXDR_T // RXDR: Rx Data Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXDR_BIT_T
        {
            unsigned RXDR : 8; // bits 0..7 CEC Rx Data Register
            unsigned      : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned RXDR_POS = 0;
        static constexpr unsigned RXDR_MASK = 0x000000ff;
        static constexpr unsigned RXDR(unsigned value) { return (value << 0); }
    } RXDR;

    volatile union ISR_T // ISR: Interrupt and Status Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned RXBR   : 1; // bit 0 Rx-Byte Received
            unsigned RXEND  : 1; // bit 1 End Of Reception
            unsigned RXOVR  : 1; // bit 2 Rx-Overrun
            unsigned BRE    : 1; // bit 3 Rx-Bit rising error
            unsigned SBPE   : 1; // bit 4 Rx-Short Bit period error
            unsigned LBPE   : 1; // bit 5 Rx-Long Bit Period Error
            unsigned RXACKE : 1; // bit 6 Rx-Missing Acknowledge
            unsigned ARBLST : 1; // bit 7 Arbitration Lost
            unsigned TXBR   : 1; // bit 8 Tx-Byte Request
            unsigned TXEND  : 1; // bit 9 End of Transmission
            unsigned TXUDR  : 1; // bit 10 Tx-Buffer Underrun
            unsigned TXERR  : 1; // bit 11 Tx-Error
            unsigned TXACKE : 1; // bit 12 Tx-Missing acknowledge error
            unsigned        : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned RXBR_POS = 0;
        static constexpr unsigned RXBR_MASK = 0x00000001;
        static constexpr unsigned RXBR(unsigned value) { return (value << 0); }
        static constexpr unsigned RXEND_POS = 1;
        static constexpr unsigned RXEND_MASK = 0x00000002;
        static constexpr unsigned RXEND(unsigned value) { return (value << 1); }
        static constexpr unsigned RXOVR_POS = 2;
        static constexpr unsigned RXOVR_MASK = 0x00000004;
        static constexpr unsigned RXOVR(unsigned value) { return (value << 2); }
        static constexpr unsigned BRE_POS = 3;
        static constexpr unsigned BRE_MASK = 0x00000008;
        static constexpr unsigned BRE(unsigned value) { return (value << 3); }
        static constexpr unsigned SBPE_POS = 4;
        static constexpr unsigned SBPE_MASK = 0x00000010;
        static constexpr unsigned SBPE(unsigned value) { return (value << 4); }
        static constexpr unsigned LBPE_POS = 5;
        static constexpr unsigned LBPE_MASK = 0x00000020;
        static constexpr unsigned LBPE(unsigned value) { return (value << 5); }
        static constexpr unsigned RXACKE_POS = 6;
        static constexpr unsigned RXACKE_MASK = 0x00000040;
        static constexpr unsigned RXACKE(unsigned value) { return (value << 6); }
        static constexpr unsigned ARBLST_POS = 7;
        static constexpr unsigned ARBLST_MASK = 0x00000080;
        static constexpr unsigned ARBLST(unsigned value) { return (value << 7); }
        static constexpr unsigned TXBR_POS = 8;
        static constexpr unsigned TXBR_MASK = 0x00000100;
        static constexpr unsigned TXBR(unsigned value) { return (value << 8); }
        static constexpr unsigned TXEND_POS = 9;
        static constexpr unsigned TXEND_MASK = 0x00000200;
        static constexpr unsigned TXEND(unsigned value) { return (value << 9); }
        static constexpr unsigned TXUDR_POS = 10;
        static constexpr unsigned TXUDR_MASK = 0x00000400;
        static constexpr unsigned TXUDR(unsigned value) { return (value << 10); }
        static constexpr unsigned TXERR_POS = 11;
        static constexpr unsigned TXERR_MASK = 0x00000800;
        static constexpr unsigned TXERR(unsigned value) { return (value << 11); }
        static constexpr unsigned TXACKE_POS = 12;
        static constexpr unsigned TXACKE_MASK = 0x00001000;
        static constexpr unsigned TXACKE(unsigned value) { return (value << 12); }
    } ISR;

    volatile union IER_T // IER: interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IER_BIT_T
        {
            unsigned RXBRIE   : 1; // bit 0 Rx-Byte Received Interrupt Enable
            unsigned RXENDIE  : 1; // bit 1 End Of Reception Interrupt Enable
            unsigned RXOVRIE  : 1; // bit 2 Rx-Buffer Overrun Interrupt Enable
            unsigned BREIE    : 1; // bit 3 Bit Rising Error Interrupt Enable
            unsigned SBPEIE   : 1; // bit 4 Short Bit Period Error Interrupt Enable
            unsigned LBPEIE   : 1; // bit 5 Long Bit Period Error Interrupt Enable
            unsigned RXACKIE  : 1; // bit 6 Rx-Missing Acknowledge Error Interrupt Enable
            unsigned ARBLSTIE : 1; // bit 7 Arbitration Lost Interrupt Enable
            unsigned TXBRIE   : 1; // bit 8 Tx-Byte Request Interrupt Enable
            unsigned TXENDIE  : 1; // bit 9 Tx-End of message interrupt enable
            unsigned TXUDRIE  : 1; // bit 10 Tx-Underrun interrupt enable
            unsigned TXERRIE  : 1; // bit 11 Tx-Error Interrupt Enable
            unsigned TXACKIE  : 1; // bit 12 Tx-Missing Acknowledge Error Interrupt Enable
            unsigned          : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned RXBRIE_POS = 0;
        static constexpr unsigned RXBRIE_MASK = 0x00000001;
        static constexpr unsigned RXBRIE(unsigned value) { return (value << 0); }
        static constexpr unsigned RXENDIE_POS = 1;
        static constexpr unsigned RXENDIE_MASK = 0x00000002;
        static constexpr unsigned RXENDIE(unsigned value) { return (value << 1); }
        static constexpr unsigned RXOVRIE_POS = 2;
        static constexpr unsigned RXOVRIE_MASK = 0x00000004;
        static constexpr unsigned RXOVRIE(unsigned value) { return (value << 2); }
        static constexpr unsigned BREIE_POS = 3;
        static constexpr unsigned BREIE_MASK = 0x00000008;
        static constexpr unsigned BREIE(unsigned value) { return (value << 3); }
        static constexpr unsigned SBPEIE_POS = 4;
        static constexpr unsigned SBPEIE_MASK = 0x00000010;
        static constexpr unsigned SBPEIE(unsigned value) { return (value << 4); }
        static constexpr unsigned LBPEIE_POS = 5;
        static constexpr unsigned LBPEIE_MASK = 0x00000020;
        static constexpr unsigned LBPEIE(unsigned value) { return (value << 5); }
        static constexpr unsigned RXACKIE_POS = 6;
        static constexpr unsigned RXACKIE_MASK = 0x00000040;
        static constexpr unsigned RXACKIE(unsigned value) { return (value << 6); }
        static constexpr unsigned ARBLSTIE_POS = 7;
        static constexpr unsigned ARBLSTIE_MASK = 0x00000080;
        static constexpr unsigned ARBLSTIE(unsigned value) { return (value << 7); }
        static constexpr unsigned TXBRIE_POS = 8;
        static constexpr unsigned TXBRIE_MASK = 0x00000100;
        static constexpr unsigned TXBRIE(unsigned value) { return (value << 8); }
        static constexpr unsigned TXENDIE_POS = 9;
        static constexpr unsigned TXENDIE_MASK = 0x00000200;
        static constexpr unsigned TXENDIE(unsigned value) { return (value << 9); }
        static constexpr unsigned TXUDRIE_POS = 10;
        static constexpr unsigned TXUDRIE_MASK = 0x00000400;
        static constexpr unsigned TXUDRIE(unsigned value) { return (value << 10); }
        static constexpr unsigned TXERRIE_POS = 11;
        static constexpr unsigned TXERRIE_MASK = 0x00000800;
        static constexpr unsigned TXERRIE(unsigned value) { return (value << 11); }
        static constexpr unsigned TXACKIE_POS = 12;
        static constexpr unsigned TXACKIE_MASK = 0x00001000;
        static constexpr unsigned TXACKIE(unsigned value) { return (value << 12); }
    } IER;

}; // struct CEC_T

static_assert(sizeof(CEC_T) == CEC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp