#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SPI_T
{
    static constexpr size_t INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS_I2S2ext = 0x40003400;
    static constexpr intptr_t BASE_ADDRESS_SPI1 = 0x40013000;
    static constexpr intptr_t BASE_ADDRESS_SPI2 = 0x40003800;
    static constexpr intptr_t BASE_ADDRESS_SPI3 = 0x40003c00;
    static constexpr intptr_t BASE_ADDRESS_I2S3ext = 0x40004000;
    static constexpr intptr_t BASE_ADDRESS_SPI4 = 0x40013400;
    static constexpr intptr_t BASE_ADDRESS_SPI5 = 0x40015000;
    static constexpr intptr_t BASE_ADDRESS_SPI6 = 0x40015400;

    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_CRCPR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_RXCRCR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_TXCRCR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_I2SCFGR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_I2SPR = 0x20;

    volatile union CR1_T // CR1: control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned CPHA     : 1; // bit 0 Clock phase
            unsigned CPOL     : 1; // bit 1 Clock polarity
            unsigned MSTR     : 1; // bit 2 Master selection
            unsigned BR       : 3; // bits 3..5 Baud rate control
            unsigned SPE      : 1; // bit 6 SPI enable
            unsigned LSBFIRST : 1; // bit 7 Frame format
            unsigned SSI      : 1; // bit 8 Internal slave select
            unsigned SSM      : 1; // bit 9 Software slave management
            unsigned RXONLY   : 1; // bit 10 Receive only
            unsigned DFF      : 1; // bit 11 Data frame format
            unsigned CRCNEXT  : 1; // bit 12 CRC transfer next
            unsigned CRCEN    : 1; // bit 13 Hardware CRC calculation enable
            unsigned BIDIOE   : 1; // bit 14 Output enable in bidirectional mode
            unsigned BIDIMODE : 1; // bit 15 Bidirectional data mode enable
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CPHA_POS = 0;
        static constexpr unsigned CPHA_MASK = 0x00000001;
        static constexpr unsigned CPHA(unsigned value) { return (value << 0); }
        static constexpr unsigned CPOL_POS = 1;
        static constexpr unsigned CPOL_MASK = 0x00000002;
        static constexpr unsigned CPOL(unsigned value) { return (value << 1); }
        static constexpr unsigned MSTR_POS = 2;
        static constexpr unsigned MSTR_MASK = 0x00000004;
        static constexpr unsigned MSTR(unsigned value) { return (value << 2); }
        static constexpr unsigned BR_POS = 3;
        static constexpr unsigned BR_MASK = 0x00000038;
        static constexpr unsigned BR(unsigned value) { return (value << 3); }
        static constexpr unsigned SPE_POS = 6;
        static constexpr unsigned SPE_MASK = 0x00000040;
        static constexpr unsigned SPE(unsigned value) { return (value << 6); }
        static constexpr unsigned LSBFIRST_POS = 7;
        static constexpr unsigned LSBFIRST_MASK = 0x00000080;
        static constexpr unsigned LSBFIRST(unsigned value) { return (value << 7); }
        static constexpr unsigned SSI_POS = 8;
        static constexpr unsigned SSI_MASK = 0x00000100;
        static constexpr unsigned SSI(unsigned value) { return (value << 8); }
        static constexpr unsigned SSM_POS = 9;
        static constexpr unsigned SSM_MASK = 0x00000200;
        static constexpr unsigned SSM(unsigned value) { return (value << 9); }
        static constexpr unsigned RXONLY_POS = 10;
        static constexpr unsigned RXONLY_MASK = 0x00000400;
        static constexpr unsigned RXONLY(unsigned value) { return (value << 10); }
        static constexpr unsigned DFF_POS = 11;
        static constexpr unsigned DFF_MASK = 0x00000800;
        static constexpr unsigned DFF(unsigned value) { return (value << 11); }
        static constexpr unsigned CRCNEXT_POS = 12;
        static constexpr unsigned CRCNEXT_MASK = 0x00001000;
        static constexpr unsigned CRCNEXT(unsigned value) { return (value << 12); }
        static constexpr unsigned CRCEN_POS = 13;
        static constexpr unsigned CRCEN_MASK = 0x00002000;
        static constexpr unsigned CRCEN(unsigned value) { return (value << 13); }
        static constexpr unsigned BIDIOE_POS = 14;
        static constexpr unsigned BIDIOE_MASK = 0x00004000;
        static constexpr unsigned BIDIOE(unsigned value) { return (value << 14); }
        static constexpr unsigned BIDIMODE_POS = 15;
        static constexpr unsigned BIDIMODE_MASK = 0x00008000;
        static constexpr unsigned BIDIMODE(unsigned value) { return (value << 15); }
    } CR1;

    volatile union CR2_T // CR2: control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned RXDMAEN : 1; // bit 0 Rx buffer DMA enable
            unsigned TXDMAEN : 1; // bit 1 Tx buffer DMA enable
            unsigned SSOE    : 1; // bit 2 SS output enable
            unsigned         : 1; // bit 3 unused
            unsigned FRF     : 1; // bit 4 Frame format
            unsigned ERRIE   : 1; // bit 5 Error interrupt enable
            unsigned RXNEIE  : 1; // bit 6 RX buffer not empty interrupt enable
            unsigned TXEIE   : 1; // bit 7 Tx buffer empty interrupt enable
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned RXDMAEN_POS = 0;
        static constexpr unsigned RXDMAEN_MASK = 0x00000001;
        static constexpr unsigned RXDMAEN(unsigned value) { return (value << 0); }
        static constexpr unsigned TXDMAEN_POS = 1;
        static constexpr unsigned TXDMAEN_MASK = 0x00000002;
        static constexpr unsigned TXDMAEN(unsigned value) { return (value << 1); }
        static constexpr unsigned SSOE_POS = 2;
        static constexpr unsigned SSOE_MASK = 0x00000004;
        static constexpr unsigned SSOE(unsigned value) { return (value << 2); }
        static constexpr unsigned FRF_POS = 4;
        static constexpr unsigned FRF_MASK = 0x00000010;
        static constexpr unsigned FRF(unsigned value) { return (value << 4); }
        static constexpr unsigned ERRIE_POS = 5;
        static constexpr unsigned ERRIE_MASK = 0x00000020;
        static constexpr unsigned ERRIE(unsigned value) { return (value << 5); }
        static constexpr unsigned RXNEIE_POS = 6;
        static constexpr unsigned RXNEIE_MASK = 0x00000040;
        static constexpr unsigned RXNEIE(unsigned value) { return (value << 6); }
        static constexpr unsigned TXEIE_POS = 7;
        static constexpr unsigned TXEIE_MASK = 0x00000080;
        static constexpr unsigned TXEIE(unsigned value) { return (value << 7); }
    } CR2;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned RXNE   : 1; // bit 0 Receive buffer not empty
            unsigned TXE    : 1; // bit 1 Transmit buffer empty
            unsigned CHSIDE : 1; // bit 2 Channel side
            unsigned UDR    : 1; // bit 3 Underrun flag
            unsigned CRCERR : 1; // bit 4 CRC error flag
            unsigned MODF   : 1; // bit 5 Mode fault
            unsigned OVR    : 1; // bit 6 Overrun flag
            unsigned BSY    : 1; // bit 7 Busy flag
            unsigned TIFRFE : 1; // bit 8 TI frame format error
            unsigned        : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned RXNE_POS = 0;
        static constexpr unsigned RXNE_MASK = 0x00000001;
        static constexpr unsigned RXNE(unsigned value) { return (value << 0); }
        static constexpr unsigned TXE_POS = 1;
        static constexpr unsigned TXE_MASK = 0x00000002;
        static constexpr unsigned TXE(unsigned value) { return (value << 1); }
        static constexpr unsigned CHSIDE_POS = 2;
        static constexpr unsigned CHSIDE_MASK = 0x00000004;
        static constexpr unsigned CHSIDE(unsigned value) { return (value << 2); }
        static constexpr unsigned UDR_POS = 3;
        static constexpr unsigned UDR_MASK = 0x00000008;
        static constexpr unsigned UDR(unsigned value) { return (value << 3); }
        static constexpr unsigned CRCERR_POS = 4;
        static constexpr unsigned CRCERR_MASK = 0x00000010;
        static constexpr unsigned CRCERR(unsigned value) { return (value << 4); }
        static constexpr unsigned MODF_POS = 5;
        static constexpr unsigned MODF_MASK = 0x00000020;
        static constexpr unsigned MODF(unsigned value) { return (value << 5); }
        static constexpr unsigned OVR_POS = 6;
        static constexpr unsigned OVR_MASK = 0x00000040;
        static constexpr unsigned OVR(unsigned value) { return (value << 6); }
        static constexpr unsigned BSY_POS = 7;
        static constexpr unsigned BSY_MASK = 0x00000080;
        static constexpr unsigned BSY(unsigned value) { return (value << 7); }
        static constexpr unsigned TIFRFE_POS = 8;
        static constexpr unsigned TIFRFE_MASK = 0x00000100;
        static constexpr unsigned TIFRFE(unsigned value) { return (value << 8); }
    } SR;

    volatile union DR_T // DR: data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DR : 16; // bits 0..15 Data register
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DR_POS = 0;
        static constexpr unsigned DR_MASK = 0x0000ffff;
        static constexpr unsigned DR(unsigned value) { return (value << 0); }
    } DR;

    volatile union CRCPR_T // CRCPR: CRC polynomial register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CRCPR_BIT_T
        {
            unsigned CRCPOLY : 16; // bits 0..15 CRC polynomial register
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CRCPOLY_POS = 0;
        static constexpr unsigned CRCPOLY_MASK = 0x0000ffff;
        static constexpr unsigned CRCPOLY(unsigned value) { return (value << 0); }
    } CRCPR;

    volatile union RXCRCR_T // RXCRCR: RX CRC register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXCRCR_BIT_T
        {
            unsigned RxCRC : 16; // bits 0..15 Rx CRC register
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned RxCRC_POS = 0;
        static constexpr unsigned RxCRC_MASK = 0x0000ffff;
        static constexpr unsigned RxCRC(unsigned value) { return (value << 0); }
    } RXCRCR;

    volatile union TXCRCR_T // TXCRCR: TX CRC register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXCRCR_BIT_T
        {
            unsigned TxCRC : 16; // bits 0..15 Tx CRC register
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned TxCRC_POS = 0;
        static constexpr unsigned TxCRC_MASK = 0x0000ffff;
        static constexpr unsigned TxCRC(unsigned value) { return (value << 0); }
    } TXCRCR;

    volatile union I2SCFGR_T // I2SCFGR: I2S configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) I2SCFGR_BIT_T
        {
            unsigned CHLEN   : 1; // bit 0 Channel length (number of bits per audio channel)
            unsigned DATLEN  : 2; // bits 1..2 Data length to be transferred
            unsigned CKPOL   : 1; // bit 3 Steady state clock polarity
            unsigned I2SSTD  : 2; // bits 4..5 I2S standard selection
            unsigned         : 1; // bit 6 unused
            unsigned PCMSYNC : 1; // bit 7 PCM frame synchronization
            unsigned I2SCFG  : 2; // bits 8..9 I2S configuration mode
            unsigned I2SE    : 1; // bit 10 I2S Enable
            unsigned I2SMOD  : 1; // bit 11 I2S mode selection
            unsigned         : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned CHLEN_POS = 0;
        static constexpr unsigned CHLEN_MASK = 0x00000001;
        static constexpr unsigned CHLEN(unsigned value) { return (value << 0); }
        static constexpr unsigned DATLEN_POS = 1;
        static constexpr unsigned DATLEN_MASK = 0x00000006;
        static constexpr unsigned DATLEN(unsigned value) { return (value << 1); }
        static constexpr unsigned CKPOL_POS = 3;
        static constexpr unsigned CKPOL_MASK = 0x00000008;
        static constexpr unsigned CKPOL(unsigned value) { return (value << 3); }
        static constexpr unsigned I2SSTD_POS = 4;
        static constexpr unsigned I2SSTD_MASK = 0x00000030;
        static constexpr unsigned I2SSTD(unsigned value) { return (value << 4); }
        static constexpr unsigned PCMSYNC_POS = 7;
        static constexpr unsigned PCMSYNC_MASK = 0x00000080;
        static constexpr unsigned PCMSYNC(unsigned value) { return (value << 7); }
        static constexpr unsigned I2SCFG_POS = 8;
        static constexpr unsigned I2SCFG_MASK = 0x00000300;
        static constexpr unsigned I2SCFG(unsigned value) { return (value << 8); }
        static constexpr unsigned I2SE_POS = 10;
        static constexpr unsigned I2SE_MASK = 0x00000400;
        static constexpr unsigned I2SE(unsigned value) { return (value << 10); }
        static constexpr unsigned I2SMOD_POS = 11;
        static constexpr unsigned I2SMOD_MASK = 0x00000800;
        static constexpr unsigned I2SMOD(unsigned value) { return (value << 11); }
    } I2SCFGR;

    volatile union I2SPR_T // I2SPR: I2S prescaler register 
    {
        uint32_t reg;
        struct __attribute__((packed)) I2SPR_BIT_T
        {
            unsigned I2SDIV : 8; // bits 0..7 I2S Linear prescaler
            unsigned ODD    : 1; // bit 8 Odd factor for the prescaler
            unsigned MCKOE  : 1; // bit 9 Master clock output enable
            unsigned        : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned I2SDIV_POS = 0;
        static constexpr unsigned I2SDIV_MASK = 0x000000ff;
        static constexpr unsigned I2SDIV(unsigned value) { return (value << 0); }
        static constexpr unsigned ODD_POS = 8;
        static constexpr unsigned ODD_MASK = 0x00000100;
        static constexpr unsigned ODD(unsigned value) { return (value << 8); }
        static constexpr unsigned MCKOE_POS = 9;
        static constexpr unsigned MCKOE_MASK = 0x00000200;
        static constexpr unsigned MCKOE(unsigned value) { return (value << 9); }
    } I2SPR;

}; // struct I2S2ext_T

static_assert(sizeof(SPI_T) == SPI_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp