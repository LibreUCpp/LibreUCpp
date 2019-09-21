#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) UART_T
{
    static constexpr size_t INSTANCE_SIZE = 24;
    static constexpr intptr_t BASE_ADDRESS = 0x40005000;

    static constexpr intptr_t ADDR_OFFSET_SR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_BRR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_CR3 = 0x14;

    volatile union SR_T // SR: UART5 SR 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned PE   : 1; // bit 0 PE
            unsigned FE   : 1; // bit 1 FE
            unsigned NE   : 1; // bit 2 NE
            unsigned ORE  : 1; // bit 3 ORE
            unsigned IDLE : 1; // bit 4 IDLE
            unsigned RXNE : 1; // bit 5 RXNE
            unsigned TC   : 1; // bit 6 TC
            unsigned TXE  : 1; // bit 7 TXE
            unsigned LBD  : 1; // bit 8 LBD
            unsigned      : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned PE_POS = 0;
        static constexpr unsigned PE_MASK = 0x00000001;
        static constexpr unsigned PE(unsigned value) { return (value << 0); }
        static constexpr unsigned FE_POS = 1;
        static constexpr unsigned FE_MASK = 0x00000002;
        static constexpr unsigned FE(unsigned value) { return (value << 1); }
        static constexpr unsigned NE_POS = 2;
        static constexpr unsigned NE_MASK = 0x00000004;
        static constexpr unsigned NE(unsigned value) { return (value << 2); }
        static constexpr unsigned ORE_POS = 3;
        static constexpr unsigned ORE_MASK = 0x00000008;
        static constexpr unsigned ORE(unsigned value) { return (value << 3); }
        static constexpr unsigned IDLE_POS = 4;
        static constexpr unsigned IDLE_MASK = 0x00000010;
        static constexpr unsigned IDLE(unsigned value) { return (value << 4); }
        static constexpr unsigned RXNE_POS = 5;
        static constexpr unsigned RXNE_MASK = 0x00000020;
        static constexpr unsigned RXNE(unsigned value) { return (value << 5); }
        static constexpr unsigned TC_POS = 6;
        static constexpr unsigned TC_MASK = 0x00000040;
        static constexpr unsigned TC(unsigned value) { return (value << 6); }
        static constexpr unsigned TXE_POS = 7;
        static constexpr unsigned TXE_MASK = 0x00000080;
        static constexpr unsigned TXE(unsigned value) { return (value << 7); }
        static constexpr unsigned LBD_POS = 8;
        static constexpr unsigned LBD_MASK = 0x00000100;
        static constexpr unsigned LBD(unsigned value) { return (value << 8); }
    } SR;

    volatile union DR_T // DR: UART5 DR 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DR : 9; // bits 0..8 DR
            unsigned    : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned DR_POS = 0;
        static constexpr unsigned DR_MASK = 0x000001ff;
        static constexpr unsigned DR(unsigned value) { return (value << 0); }
    } DR;

    volatile union BRR_T // BRR: UART5 BRR 
    {
        uint32_t reg;
        struct __attribute__((packed)) BRR_BIT_T
        {
            unsigned DIV_Fraction : 4; // bits 0..3 DIV_Fraction
            unsigned DIV_Mantissa : 12; // bits 4..15 DIV_Mantissa
            unsigned              : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DIV_Fraction_POS = 0;
        static constexpr unsigned DIV_Fraction_MASK = 0x0000000f;
        static constexpr unsigned DIV_Fraction(unsigned value) { return (value << 0); }
        static constexpr unsigned DIV_Mantissa_POS = 4;
        static constexpr unsigned DIV_Mantissa_MASK = 0x0000fff0;
        static constexpr unsigned DIV_Mantissa(unsigned value) { return (value << 4); }
    } BRR;

    volatile union CR1_T // CR1: UART5 CR1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned SBK    : 1; // bit 0 SBK
            unsigned RWU    : 1; // bit 1 RWU
            unsigned RE     : 1; // bit 2 RE
            unsigned TE     : 1; // bit 3 TE
            unsigned IDLEIE : 1; // bit 4 IDLEIE
            unsigned RXNEIE : 1; // bit 5 RXNEIE
            unsigned TCIE   : 1; // bit 6 TCIE
            unsigned TXEIE  : 1; // bit 7 TXEIE
            unsigned PEIE   : 1; // bit 8 PEIE
            unsigned PS     : 1; // bit 9 PS
            unsigned PCE    : 1; // bit 10 PCE
            unsigned WAKE   : 1; // bit 11 WAKE
            unsigned M      : 1; // bit 12 M
            unsigned UE     : 1; // bit 13 UE
            unsigned        : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned SBK_POS = 0;
        static constexpr unsigned SBK_MASK = 0x00000001;
        static constexpr unsigned SBK(unsigned value) { return (value << 0); }
        static constexpr unsigned RWU_POS = 1;
        static constexpr unsigned RWU_MASK = 0x00000002;
        static constexpr unsigned RWU(unsigned value) { return (value << 1); }
        static constexpr unsigned RE_POS = 2;
        static constexpr unsigned RE_MASK = 0x00000004;
        static constexpr unsigned RE(unsigned value) { return (value << 2); }
        static constexpr unsigned TE_POS = 3;
        static constexpr unsigned TE_MASK = 0x00000008;
        static constexpr unsigned TE(unsigned value) { return (value << 3); }
        static constexpr unsigned IDLEIE_POS = 4;
        static constexpr unsigned IDLEIE_MASK = 0x00000010;
        static constexpr unsigned IDLEIE(unsigned value) { return (value << 4); }
        static constexpr unsigned RXNEIE_POS = 5;
        static constexpr unsigned RXNEIE_MASK = 0x00000020;
        static constexpr unsigned RXNEIE(unsigned value) { return (value << 5); }
        static constexpr unsigned TCIE_POS = 6;
        static constexpr unsigned TCIE_MASK = 0x00000040;
        static constexpr unsigned TCIE(unsigned value) { return (value << 6); }
        static constexpr unsigned TXEIE_POS = 7;
        static constexpr unsigned TXEIE_MASK = 0x00000080;
        static constexpr unsigned TXEIE(unsigned value) { return (value << 7); }
        static constexpr unsigned PEIE_POS = 8;
        static constexpr unsigned PEIE_MASK = 0x00000100;
        static constexpr unsigned PEIE(unsigned value) { return (value << 8); }
        static constexpr unsigned PS_POS = 9;
        static constexpr unsigned PS_MASK = 0x00000200;
        static constexpr unsigned PS(unsigned value) { return (value << 9); }
        static constexpr unsigned PCE_POS = 10;
        static constexpr unsigned PCE_MASK = 0x00000400;
        static constexpr unsigned PCE(unsigned value) { return (value << 10); }
        static constexpr unsigned WAKE_POS = 11;
        static constexpr unsigned WAKE_MASK = 0x00000800;
        static constexpr unsigned WAKE(unsigned value) { return (value << 11); }
        static constexpr unsigned M_POS = 12;
        static constexpr unsigned M_MASK = 0x00001000;
        static constexpr unsigned M(unsigned value) { return (value << 12); }
        static constexpr unsigned UE_POS = 13;
        static constexpr unsigned UE_MASK = 0x00002000;
        static constexpr unsigned UE(unsigned value) { return (value << 13); }
    } CR1;

    volatile union CR2_T // CR2: UART5 CR2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned ADD   : 4; // bits 0..3 ADD
            unsigned       : 1; // bit 4 unused
            unsigned LBDL  : 1; // bit 5 LBDL
            unsigned LBDIE : 1; // bit 6 LBDIE
            unsigned       : 5; // bits 7..11 unused
            unsigned STOP  : 2; // bits 12..13 STOP
            unsigned LINEN : 1; // bit 14 LINEN
            unsigned       : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned ADD_POS = 0;
        static constexpr unsigned ADD_MASK = 0x0000000f;
        static constexpr unsigned ADD(unsigned value) { return (value << 0); }
        static constexpr unsigned LBDL_POS = 5;
        static constexpr unsigned LBDL_MASK = 0x00000020;
        static constexpr unsigned LBDL(unsigned value) { return (value << 5); }
        static constexpr unsigned LBDIE_POS = 6;
        static constexpr unsigned LBDIE_MASK = 0x00000040;
        static constexpr unsigned LBDIE(unsigned value) { return (value << 6); }
        static constexpr unsigned STOP_POS = 12;
        static constexpr unsigned STOP_MASK = 0x00003000;
        static constexpr unsigned STOP(unsigned value) { return (value << 12); }
        static constexpr unsigned LINEN_POS = 14;
        static constexpr unsigned LINEN_MASK = 0x00004000;
        static constexpr unsigned LINEN(unsigned value) { return (value << 14); }
    } CR2;

    volatile union CR3_T // CR3: UART5 CR3 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR3_BIT_T
        {
            unsigned EIE   : 1; // bit 0 Error interrupt enable
            unsigned IREN  : 1; // bit 1 IrDA mode enable
            unsigned IRLP  : 1; // bit 2 IrDA low-power
            unsigned HDSEL : 1; // bit 3 Half-duplex selection
            unsigned       : 3; // bits 4..6 unused
            unsigned DMAT  : 1; // bit 7 DMA enable transmitter
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned EIE_POS = 0;
        static constexpr unsigned EIE_MASK = 0x00000001;
        static constexpr unsigned EIE(unsigned value) { return (value << 0); }
        static constexpr unsigned IREN_POS = 1;
        static constexpr unsigned IREN_MASK = 0x00000002;
        static constexpr unsigned IREN(unsigned value) { return (value << 1); }
        static constexpr unsigned IRLP_POS = 2;
        static constexpr unsigned IRLP_MASK = 0x00000004;
        static constexpr unsigned IRLP(unsigned value) { return (value << 2); }
        static constexpr unsigned HDSEL_POS = 3;
        static constexpr unsigned HDSEL_MASK = 0x00000008;
        static constexpr unsigned HDSEL(unsigned value) { return (value << 3); }
        static constexpr unsigned DMAT_POS = 7;
        static constexpr unsigned DMAT_MASK = 0x00000080;
        static constexpr unsigned DMAT(unsigned value) { return (value << 7); }
    } CR3;

}; // struct UART5_T

static_assert(sizeof(UART_T) == UART_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp