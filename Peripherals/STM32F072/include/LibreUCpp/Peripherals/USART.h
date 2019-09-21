#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) USART_T
{
    static constexpr size_t INSTANCE_SIZE = 44;
    static constexpr intptr_t BASE_ADDRESS_USART1 = 0x40013800;
    static constexpr intptr_t BASE_ADDRESS_USART2 = 0x40004400;
    static constexpr intptr_t BASE_ADDRESS_USART3 = 0x40004800;
    static constexpr intptr_t BASE_ADDRESS_USART4 = 0x40004c00;

    static constexpr intptr_t ADDR_OFFSET_CR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR2 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CR3 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_BRR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_GTPR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_RTOR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_RQR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_ISR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_ICR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_RDR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_TDR = 0x28;

    volatile union CR1_T // CR1: Control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR1_BIT_T
        {
            unsigned UE     : 1; // bit 0 USART enable
            unsigned UESM   : 1; // bit 1 USART enable in Stop mode
            unsigned RE     : 1; // bit 2 Receiver enable
            unsigned TE     : 1; // bit 3 Transmitter enable
            unsigned IDLEIE : 1; // bit 4 IDLE interrupt enable
            unsigned RXNEIE : 1; // bit 5 RXNE interrupt enable
            unsigned TCIE   : 1; // bit 6 Transmission complete interrupt enable
            unsigned TXEIE  : 1; // bit 7 interrupt enable
            unsigned PEIE   : 1; // bit 8 PE interrupt enable
            unsigned PS     : 1; // bit 9 Parity selection
            unsigned PCE    : 1; // bit 10 Parity control enable
            unsigned WAKE   : 1; // bit 11 Receiver wakeup method
            unsigned M      : 1; // bit 12 Word length
            unsigned MME    : 1; // bit 13 Mute mode enable
            unsigned CMIE   : 1; // bit 14 Character match interrupt enable
            unsigned OVER8  : 1; // bit 15 Oversampling mode
            unsigned DEDT   : 5; // bits 16..20 Driver Enable deassertion time
            unsigned DEAT   : 5; // bits 21..25 Driver Enable assertion time
            unsigned RTOIE  : 1; // bit 26 Receiver timeout interrupt enable
            unsigned EOBIE  : 1; // bit 27 End of Block interrupt enable
            unsigned M1     : 1; // bit 28 Word length
            unsigned        : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned UE_POS = 0;
        static constexpr unsigned UE_MASK = 0x00000001;
        static constexpr unsigned UE(unsigned value) { return (value << 0); }
        static constexpr unsigned UESM_POS = 1;
        static constexpr unsigned UESM_MASK = 0x00000002;
        static constexpr unsigned UESM(unsigned value) { return (value << 1); }
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
        static constexpr unsigned MME_POS = 13;
        static constexpr unsigned MME_MASK = 0x00002000;
        static constexpr unsigned MME(unsigned value) { return (value << 13); }
        static constexpr unsigned CMIE_POS = 14;
        static constexpr unsigned CMIE_MASK = 0x00004000;
        static constexpr unsigned CMIE(unsigned value) { return (value << 14); }
        static constexpr unsigned OVER8_POS = 15;
        static constexpr unsigned OVER8_MASK = 0x00008000;
        static constexpr unsigned OVER8(unsigned value) { return (value << 15); }
        static constexpr unsigned DEDT_POS = 16;
        static constexpr unsigned DEDT_MASK = 0x001f0000;
        static constexpr unsigned DEDT(unsigned value) { return (value << 16); }
        static constexpr unsigned DEAT_POS = 21;
        static constexpr unsigned DEAT_MASK = 0x03e00000;
        static constexpr unsigned DEAT(unsigned value) { return (value << 21); }
        static constexpr unsigned RTOIE_POS = 26;
        static constexpr unsigned RTOIE_MASK = 0x04000000;
        static constexpr unsigned RTOIE(unsigned value) { return (value << 26); }
        static constexpr unsigned EOBIE_POS = 27;
        static constexpr unsigned EOBIE_MASK = 0x08000000;
        static constexpr unsigned EOBIE(unsigned value) { return (value << 27); }
        static constexpr unsigned M1_POS = 28;
        static constexpr unsigned M1_MASK = 0x10000000;
        static constexpr unsigned M1(unsigned value) { return (value << 28); }
    } CR1;

    volatile union CR2_T // CR2: Control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR2_BIT_T
        {
            unsigned          : 4; // bits 0..3 unused
            unsigned ADDM7    : 1; // bit 4 7-bit Address Detection/4-bit Address Detection
            unsigned LBDL     : 1; // bit 5 LIN break detection length
            unsigned LBDIE    : 1; // bit 6 LIN break detection interrupt enable
            unsigned          : 1; // bit 7 unused
            unsigned LBCL     : 1; // bit 8 Last bit clock pulse
            unsigned CPHA     : 1; // bit 9 Clock phase
            unsigned CPOL     : 1; // bit 10 Clock polarity
            unsigned CLKEN    : 1; // bit 11 Clock enable
            unsigned STOP     : 2; // bits 12..13 STOP bits
            unsigned LINEN    : 1; // bit 14 LIN mode enable
            unsigned SWAP     : 1; // bit 15 Swap TX/RX pins
            unsigned RXINV    : 1; // bit 16 RX pin active level inversion
            unsigned TXINV    : 1; // bit 17 TX pin active level inversion
            unsigned DATAINV  : 1; // bit 18 Binary data inversion
            unsigned MSBFIRST : 1; // bit 19 Most significant bit first
            unsigned ABREN    : 1; // bit 20 Auto baud rate enable
            unsigned ABRMOD   : 2; // bits 21..22 Auto baud rate mode
            unsigned RTOEN    : 1; // bit 23 Receiver timeout enable
            unsigned ADD0     : 4; // bits 24..27 Address of the USART node
            unsigned ADD4     : 4; // bits 28..31 Address of the USART node    
        } bit;
    
        static constexpr unsigned ADDM7_POS = 4;
        static constexpr unsigned ADDM7_MASK = 0x00000010;
        static constexpr unsigned ADDM7(unsigned value) { return (value << 4); }
        static constexpr unsigned LBDL_POS = 5;
        static constexpr unsigned LBDL_MASK = 0x00000020;
        static constexpr unsigned LBDL(unsigned value) { return (value << 5); }
        static constexpr unsigned LBDIE_POS = 6;
        static constexpr unsigned LBDIE_MASK = 0x00000040;
        static constexpr unsigned LBDIE(unsigned value) { return (value << 6); }
        static constexpr unsigned LBCL_POS = 8;
        static constexpr unsigned LBCL_MASK = 0x00000100;
        static constexpr unsigned LBCL(unsigned value) { return (value << 8); }
        static constexpr unsigned CPHA_POS = 9;
        static constexpr unsigned CPHA_MASK = 0x00000200;
        static constexpr unsigned CPHA(unsigned value) { return (value << 9); }
        static constexpr unsigned CPOL_POS = 10;
        static constexpr unsigned CPOL_MASK = 0x00000400;
        static constexpr unsigned CPOL(unsigned value) { return (value << 10); }
        static constexpr unsigned CLKEN_POS = 11;
        static constexpr unsigned CLKEN_MASK = 0x00000800;
        static constexpr unsigned CLKEN(unsigned value) { return (value << 11); }
        static constexpr unsigned STOP_POS = 12;
        static constexpr unsigned STOP_MASK = 0x00003000;
        static constexpr unsigned STOP(unsigned value) { return (value << 12); }
        static constexpr unsigned LINEN_POS = 14;
        static constexpr unsigned LINEN_MASK = 0x00004000;
        static constexpr unsigned LINEN(unsigned value) { return (value << 14); }
        static constexpr unsigned SWAP_POS = 15;
        static constexpr unsigned SWAP_MASK = 0x00008000;
        static constexpr unsigned SWAP(unsigned value) { return (value << 15); }
        static constexpr unsigned RXINV_POS = 16;
        static constexpr unsigned RXINV_MASK = 0x00010000;
        static constexpr unsigned RXINV(unsigned value) { return (value << 16); }
        static constexpr unsigned TXINV_POS = 17;
        static constexpr unsigned TXINV_MASK = 0x00020000;
        static constexpr unsigned TXINV(unsigned value) { return (value << 17); }
        static constexpr unsigned DATAINV_POS = 18;
        static constexpr unsigned DATAINV_MASK = 0x00040000;
        static constexpr unsigned DATAINV(unsigned value) { return (value << 18); }
        static constexpr unsigned MSBFIRST_POS = 19;
        static constexpr unsigned MSBFIRST_MASK = 0x00080000;
        static constexpr unsigned MSBFIRST(unsigned value) { return (value << 19); }
        static constexpr unsigned ABREN_POS = 20;
        static constexpr unsigned ABREN_MASK = 0x00100000;
        static constexpr unsigned ABREN(unsigned value) { return (value << 20); }
        static constexpr unsigned ABRMOD_POS = 21;
        static constexpr unsigned ABRMOD_MASK = 0x00600000;
        static constexpr unsigned ABRMOD(unsigned value) { return (value << 21); }
        static constexpr unsigned RTOEN_POS = 23;
        static constexpr unsigned RTOEN_MASK = 0x00800000;
        static constexpr unsigned RTOEN(unsigned value) { return (value << 23); }
        static constexpr unsigned ADD0_POS = 24;
        static constexpr unsigned ADD0_MASK = 0x0f000000;
        static constexpr unsigned ADD0(unsigned value) { return (value << 24); }
        static constexpr unsigned ADD4_POS = 28;
        static constexpr unsigned ADD4_MASK = 0xf0000000;
        static constexpr unsigned ADD4(unsigned value) { return (value << 28); }
    } CR2;

    volatile union CR3_T // CR3: Control register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR3_BIT_T
        {
            unsigned EIE     : 1; // bit 0 Error interrupt enable
            unsigned IREN    : 1; // bit 1 IrDA mode enable
            unsigned IRLP    : 1; // bit 2 IrDA low-power
            unsigned HDSEL   : 1; // bit 3 Half-duplex selection
            unsigned NACK    : 1; // bit 4 Smartcard NACK enable
            unsigned SCEN    : 1; // bit 5 Smartcard mode enable
            unsigned DMAR    : 1; // bit 6 DMA enable receiver
            unsigned DMAT    : 1; // bit 7 DMA enable transmitter
            unsigned RTSE    : 1; // bit 8 RTS enable
            unsigned CTSE    : 1; // bit 9 CTS enable
            unsigned CTSIE   : 1; // bit 10 CTS interrupt enable
            unsigned ONEBIT  : 1; // bit 11 One sample bit method enable
            unsigned OVRDIS  : 1; // bit 12 Overrun Disable
            unsigned DDRE    : 1; // bit 13 DMA Disable on Reception Error
            unsigned DEM     : 1; // bit 14 Driver enable mode
            unsigned DEP     : 1; // bit 15 Driver enable polarity selection
            unsigned         : 1; // bit 16 unused
            unsigned SCARCNT : 3; // bits 17..19 Smartcard auto-retry count
            unsigned WUS     : 2; // bits 20..21 Wakeup from Stop mode interrupt flag selection
            unsigned WUFIE   : 1; // bit 22 Wakeup from Stop mode interrupt enable
            unsigned         : 9; // bits 23..31 unused    
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
        static constexpr unsigned NACK_POS = 4;
        static constexpr unsigned NACK_MASK = 0x00000010;
        static constexpr unsigned NACK(unsigned value) { return (value << 4); }
        static constexpr unsigned SCEN_POS = 5;
        static constexpr unsigned SCEN_MASK = 0x00000020;
        static constexpr unsigned SCEN(unsigned value) { return (value << 5); }
        static constexpr unsigned DMAR_POS = 6;
        static constexpr unsigned DMAR_MASK = 0x00000040;
        static constexpr unsigned DMAR(unsigned value) { return (value << 6); }
        static constexpr unsigned DMAT_POS = 7;
        static constexpr unsigned DMAT_MASK = 0x00000080;
        static constexpr unsigned DMAT(unsigned value) { return (value << 7); }
        static constexpr unsigned RTSE_POS = 8;
        static constexpr unsigned RTSE_MASK = 0x00000100;
        static constexpr unsigned RTSE(unsigned value) { return (value << 8); }
        static constexpr unsigned CTSE_POS = 9;
        static constexpr unsigned CTSE_MASK = 0x00000200;
        static constexpr unsigned CTSE(unsigned value) { return (value << 9); }
        static constexpr unsigned CTSIE_POS = 10;
        static constexpr unsigned CTSIE_MASK = 0x00000400;
        static constexpr unsigned CTSIE(unsigned value) { return (value << 10); }
        static constexpr unsigned ONEBIT_POS = 11;
        static constexpr unsigned ONEBIT_MASK = 0x00000800;
        static constexpr unsigned ONEBIT(unsigned value) { return (value << 11); }
        static constexpr unsigned OVRDIS_POS = 12;
        static constexpr unsigned OVRDIS_MASK = 0x00001000;
        static constexpr unsigned OVRDIS(unsigned value) { return (value << 12); }
        static constexpr unsigned DDRE_POS = 13;
        static constexpr unsigned DDRE_MASK = 0x00002000;
        static constexpr unsigned DDRE(unsigned value) { return (value << 13); }
        static constexpr unsigned DEM_POS = 14;
        static constexpr unsigned DEM_MASK = 0x00004000;
        static constexpr unsigned DEM(unsigned value) { return (value << 14); }
        static constexpr unsigned DEP_POS = 15;
        static constexpr unsigned DEP_MASK = 0x00008000;
        static constexpr unsigned DEP(unsigned value) { return (value << 15); }
        static constexpr unsigned SCARCNT_POS = 17;
        static constexpr unsigned SCARCNT_MASK = 0x000e0000;
        static constexpr unsigned SCARCNT(unsigned value) { return (value << 17); }
        static constexpr unsigned WUS_POS = 20;
        static constexpr unsigned WUS_MASK = 0x00300000;
        static constexpr unsigned WUS(unsigned value) { return (value << 20); }
        static constexpr unsigned WUFIE_POS = 22;
        static constexpr unsigned WUFIE_MASK = 0x00400000;
        static constexpr unsigned WUFIE(unsigned value) { return (value << 22); }
    } CR3;

    volatile union BRR_T // BRR: Baud rate register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BRR_BIT_T
        {
            unsigned DIV_Fraction : 4; // bits 0..3 fraction of USARTDIV
            unsigned DIV_Mantissa : 12; // bits 4..15 mantissa of USARTDIV
            unsigned              : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DIV_Fraction_POS = 0;
        static constexpr unsigned DIV_Fraction_MASK = 0x0000000f;
        static constexpr unsigned DIV_Fraction(unsigned value) { return (value << 0); }
        static constexpr unsigned DIV_Mantissa_POS = 4;
        static constexpr unsigned DIV_Mantissa_MASK = 0x0000fff0;
        static constexpr unsigned DIV_Mantissa(unsigned value) { return (value << 4); }
    } BRR;

    volatile union GTPR_T // GTPR: Guard time and prescaler register 
    {
        uint32_t reg;
        struct __attribute__((packed)) GTPR_BIT_T
        {
            unsigned PSC : 8; // bits 0..7 Prescaler value
            unsigned GT  : 8; // bits 8..15 Guard time value
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned PSC_POS = 0;
        static constexpr unsigned PSC_MASK = 0x000000ff;
        static constexpr unsigned PSC(unsigned value) { return (value << 0); }
        static constexpr unsigned GT_POS = 8;
        static constexpr unsigned GT_MASK = 0x0000ff00;
        static constexpr unsigned GT(unsigned value) { return (value << 8); }
    } GTPR;

    volatile union RTOR_T // RTOR: Receiver timeout register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RTOR_BIT_T
        {
            unsigned RTO  : 24; // bits 0..23 Receiver timeout value
            unsigned BLEN : 8; // bits 24..31 Block Length    
        } bit;
    
        static constexpr unsigned RTO_POS = 0;
        static constexpr unsigned RTO_MASK = 0x00ffffff;
        static constexpr unsigned RTO(unsigned value) { return (value << 0); }
        static constexpr unsigned BLEN_POS = 24;
        static constexpr unsigned BLEN_MASK = 0xff000000;
        static constexpr unsigned BLEN(unsigned value) { return (value << 24); }
    } RTOR;

    volatile union RQR_T // RQR: Request register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RQR_BIT_T
        {
            unsigned ABRRQ : 1; // bit 0 Auto baud rate request
            unsigned SBKRQ : 1; // bit 1 Send break request
            unsigned MMRQ  : 1; // bit 2 Mute mode request
            unsigned RXFRQ : 1; // bit 3 Receive data flush request
            unsigned TXFRQ : 1; // bit 4 Transmit data flush request
            unsigned       : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned ABRRQ_POS = 0;
        static constexpr unsigned ABRRQ_MASK = 0x00000001;
        static constexpr unsigned ABRRQ(unsigned value) { return (value << 0); }
        static constexpr unsigned SBKRQ_POS = 1;
        static constexpr unsigned SBKRQ_MASK = 0x00000002;
        static constexpr unsigned SBKRQ(unsigned value) { return (value << 1); }
        static constexpr unsigned MMRQ_POS = 2;
        static constexpr unsigned MMRQ_MASK = 0x00000004;
        static constexpr unsigned MMRQ(unsigned value) { return (value << 2); }
        static constexpr unsigned RXFRQ_POS = 3;
        static constexpr unsigned RXFRQ_MASK = 0x00000008;
        static constexpr unsigned RXFRQ(unsigned value) { return (value << 3); }
        static constexpr unsigned TXFRQ_POS = 4;
        static constexpr unsigned TXFRQ_MASK = 0x00000010;
        static constexpr unsigned TXFRQ(unsigned value) { return (value << 4); }
    } RQR;

    volatile union ISR_T // ISR: Interrupt & status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned PE    : 1; // bit 0 Parity error
            unsigned FE    : 1; // bit 1 Framing error
            unsigned NF    : 1; // bit 2 Noise detected flag
            unsigned ORE   : 1; // bit 3 Overrun error
            unsigned IDLE  : 1; // bit 4 Idle line detected
            unsigned RXNE  : 1; // bit 5 Read data register not empty
            unsigned TC    : 1; // bit 6 Transmission complete
            unsigned TXE   : 1; // bit 7 Transmit data register empty
            unsigned LBDF  : 1; // bit 8 LIN break detection flag
            unsigned CTSIF : 1; // bit 9 CTS interrupt flag
            unsigned CTS   : 1; // bit 10 CTS flag
            unsigned RTOF  : 1; // bit 11 Receiver timeout
            unsigned EOBF  : 1; // bit 12 End of block flag
            unsigned       : 1; // bit 13 unused
            unsigned ABRE  : 1; // bit 14 Auto baud rate error
            unsigned ABRF  : 1; // bit 15 Auto baud rate flag
            unsigned BUSY  : 1; // bit 16 Busy flag
            unsigned CMF   : 1; // bit 17 character match flag
            unsigned SBKF  : 1; // bit 18 Send break flag
            unsigned RWU   : 1; // bit 19 Receiver wakeup from Mute mode
            unsigned WUF   : 1; // bit 20 Wakeup from Stop mode flag
            unsigned TEACK : 1; // bit 21 Transmit enable acknowledge flag
            unsigned REACK : 1; // bit 22 Receive enable acknowledge flag
            unsigned       : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned PE_POS = 0;
        static constexpr unsigned PE_MASK = 0x00000001;
        static constexpr unsigned PE(unsigned value) { return (value << 0); }
        static constexpr unsigned FE_POS = 1;
        static constexpr unsigned FE_MASK = 0x00000002;
        static constexpr unsigned FE(unsigned value) { return (value << 1); }
        static constexpr unsigned NF_POS = 2;
        static constexpr unsigned NF_MASK = 0x00000004;
        static constexpr unsigned NF(unsigned value) { return (value << 2); }
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
        static constexpr unsigned LBDF_POS = 8;
        static constexpr unsigned LBDF_MASK = 0x00000100;
        static constexpr unsigned LBDF(unsigned value) { return (value << 8); }
        static constexpr unsigned CTSIF_POS = 9;
        static constexpr unsigned CTSIF_MASK = 0x00000200;
        static constexpr unsigned CTSIF(unsigned value) { return (value << 9); }
        static constexpr unsigned CTS_POS = 10;
        static constexpr unsigned CTS_MASK = 0x00000400;
        static constexpr unsigned CTS(unsigned value) { return (value << 10); }
        static constexpr unsigned RTOF_POS = 11;
        static constexpr unsigned RTOF_MASK = 0x00000800;
        static constexpr unsigned RTOF(unsigned value) { return (value << 11); }
        static constexpr unsigned EOBF_POS = 12;
        static constexpr unsigned EOBF_MASK = 0x00001000;
        static constexpr unsigned EOBF(unsigned value) { return (value << 12); }
        static constexpr unsigned ABRE_POS = 14;
        static constexpr unsigned ABRE_MASK = 0x00004000;
        static constexpr unsigned ABRE(unsigned value) { return (value << 14); }
        static constexpr unsigned ABRF_POS = 15;
        static constexpr unsigned ABRF_MASK = 0x00008000;
        static constexpr unsigned ABRF(unsigned value) { return (value << 15); }
        static constexpr unsigned BUSY_POS = 16;
        static constexpr unsigned BUSY_MASK = 0x00010000;
        static constexpr unsigned BUSY(unsigned value) { return (value << 16); }
        static constexpr unsigned CMF_POS = 17;
        static constexpr unsigned CMF_MASK = 0x00020000;
        static constexpr unsigned CMF(unsigned value) { return (value << 17); }
        static constexpr unsigned SBKF_POS = 18;
        static constexpr unsigned SBKF_MASK = 0x00040000;
        static constexpr unsigned SBKF(unsigned value) { return (value << 18); }
        static constexpr unsigned RWU_POS = 19;
        static constexpr unsigned RWU_MASK = 0x00080000;
        static constexpr unsigned RWU(unsigned value) { return (value << 19); }
        static constexpr unsigned WUF_POS = 20;
        static constexpr unsigned WUF_MASK = 0x00100000;
        static constexpr unsigned WUF(unsigned value) { return (value << 20); }
        static constexpr unsigned TEACK_POS = 21;
        static constexpr unsigned TEACK_MASK = 0x00200000;
        static constexpr unsigned TEACK(unsigned value) { return (value << 21); }
        static constexpr unsigned REACK_POS = 22;
        static constexpr unsigned REACK_MASK = 0x00400000;
        static constexpr unsigned REACK(unsigned value) { return (value << 22); }
    } ISR;

    volatile union ICR_T // ICR: Interrupt flag clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICR_BIT_T
        {
            unsigned PECF   : 1; // bit 0 Parity error clear flag
            unsigned FECF   : 1; // bit 1 Framing error clear flag
            unsigned NCF    : 1; // bit 2 Noise detected clear flag
            unsigned ORECF  : 1; // bit 3 Overrun error clear flag
            unsigned IDLECF : 1; // bit 4 Idle line detected clear flag
            unsigned        : 1; // bit 5 unused
            unsigned TCCF   : 1; // bit 6 Transmission complete clear flag
            unsigned        : 1; // bit 7 unused
            unsigned LBDCF  : 1; // bit 8 LIN break detection clear flag
            unsigned CTSCF  : 1; // bit 9 CTS clear flag
            unsigned        : 1; // bit 10 unused
            unsigned RTOCF  : 1; // bit 11 Receiver timeout clear flag
            unsigned EOBCF  : 1; // bit 12 End of timeout clear flag
            unsigned        : 4; // bits 13..16 unused
            unsigned CMCF   : 1; // bit 17 Character match clear flag
            unsigned        : 2; // bits 18..19 unused
            unsigned WUCF   : 1; // bit 20 Wakeup from Stop mode clear flag
            unsigned        : 11; // bits 21..31 unused    
        } bit;
    
        static constexpr unsigned PECF_POS = 0;
        static constexpr unsigned PECF_MASK = 0x00000001;
        static constexpr unsigned PECF(unsigned value) { return (value << 0); }
        static constexpr unsigned FECF_POS = 1;
        static constexpr unsigned FECF_MASK = 0x00000002;
        static constexpr unsigned FECF(unsigned value) { return (value << 1); }
        static constexpr unsigned NCF_POS = 2;
        static constexpr unsigned NCF_MASK = 0x00000004;
        static constexpr unsigned NCF(unsigned value) { return (value << 2); }
        static constexpr unsigned ORECF_POS = 3;
        static constexpr unsigned ORECF_MASK = 0x00000008;
        static constexpr unsigned ORECF(unsigned value) { return (value << 3); }
        static constexpr unsigned IDLECF_POS = 4;
        static constexpr unsigned IDLECF_MASK = 0x00000010;
        static constexpr unsigned IDLECF(unsigned value) { return (value << 4); }
        static constexpr unsigned TCCF_POS = 6;
        static constexpr unsigned TCCF_MASK = 0x00000040;
        static constexpr unsigned TCCF(unsigned value) { return (value << 6); }
        static constexpr unsigned LBDCF_POS = 8;
        static constexpr unsigned LBDCF_MASK = 0x00000100;
        static constexpr unsigned LBDCF(unsigned value) { return (value << 8); }
        static constexpr unsigned CTSCF_POS = 9;
        static constexpr unsigned CTSCF_MASK = 0x00000200;
        static constexpr unsigned CTSCF(unsigned value) { return (value << 9); }
        static constexpr unsigned RTOCF_POS = 11;
        static constexpr unsigned RTOCF_MASK = 0x00000800;
        static constexpr unsigned RTOCF(unsigned value) { return (value << 11); }
        static constexpr unsigned EOBCF_POS = 12;
        static constexpr unsigned EOBCF_MASK = 0x00001000;
        static constexpr unsigned EOBCF(unsigned value) { return (value << 12); }
        static constexpr unsigned CMCF_POS = 17;
        static constexpr unsigned CMCF_MASK = 0x00020000;
        static constexpr unsigned CMCF(unsigned value) { return (value << 17); }
        static constexpr unsigned WUCF_POS = 20;
        static constexpr unsigned WUCF_MASK = 0x00100000;
        static constexpr unsigned WUCF(unsigned value) { return (value << 20); }
    } ICR;

    volatile union RDR_T // RDR: Receive data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RDR_BIT_T
        {
            unsigned RDR : 9; // bits 0..8 Receive data value
            unsigned     : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned RDR_POS = 0;
        static constexpr unsigned RDR_MASK = 0x000001ff;
        static constexpr unsigned RDR(unsigned value) { return (value << 0); }
    } RDR;

    volatile union TDR_T // TDR: Transmit data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDR_BIT_T
        {
            unsigned TDR : 9; // bits 0..8 Transmit data value
            unsigned     : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned TDR_POS = 0;
        static constexpr unsigned TDR_MASK = 0x000001ff;
        static constexpr unsigned TDR(unsigned value) { return (value << 0); }
    } TDR;

}; // struct USART1_T

static_assert(sizeof(USART_T) == USART_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp