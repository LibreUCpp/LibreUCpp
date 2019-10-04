#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SPDIF_RX_T
{
    static constexpr size_t INSTANCE_SIZE = 28;
    static constexpr size_t PADDED_INSTANCE_SIZE = 28;
    static constexpr intptr_t BASE_ADDRESS = 0x40004000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_IMR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_IFCR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_CSR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_DIR = 0x18;

    volatile union CR_T // CR: Control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned SPDIFEN : 2; // bits 0..1 Peripheral Block Enable
            unsigned RXDMAEN : 1; // bit 2 Receiver DMA ENable for data flow
            unsigned RXSTEO  : 1; // bit 3 STerEO Mode
            unsigned DRFMT   : 2; // bits 4..5 RX Data format
            unsigned PMSK    : 1; // bit 6 Mask Parity error bit
            unsigned VMSK    : 1; // bit 7 Mask of Validity bit
            unsigned CUMSK   : 1; // bit 8 Mask of channel status and user bits
            unsigned PTMSK   : 1; // bit 9 Mask of Preamble Type bits
            unsigned CBDMAEN : 1; // bit 10 Control Buffer DMA ENable for control flow
            unsigned CHSEL   : 1; // bit 11 Channel Selection
            unsigned NBTR    : 2; // bits 12..13 Maximum allowed re-tries during synchronization phase
            unsigned WFA     : 1; // bit 14 Wait For Activity
            unsigned         : 1; // bit 15 unused
            unsigned INSEL   : 3; // bits 16..18 input selection
            unsigned         : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned SPDIFEN_POS = 0;
        static constexpr unsigned SPDIFEN_MASK = 0x00000003;
        static constexpr unsigned SPDIFEN(unsigned value) { return (value << 0); }
        static constexpr unsigned RXDMAEN_POS = 2;
        static constexpr unsigned RXDMAEN_MASK = 0x00000004;
        static constexpr unsigned RXDMAEN(unsigned value) { return (value << 2); }
        static constexpr unsigned RXSTEO_POS = 3;
        static constexpr unsigned RXSTEO_MASK = 0x00000008;
        static constexpr unsigned RXSTEO(unsigned value) { return (value << 3); }
        static constexpr unsigned DRFMT_POS = 4;
        static constexpr unsigned DRFMT_MASK = 0x00000030;
        static constexpr unsigned DRFMT(unsigned value) { return (value << 4); }
        static constexpr unsigned PMSK_POS = 6;
        static constexpr unsigned PMSK_MASK = 0x00000040;
        static constexpr unsigned PMSK(unsigned value) { return (value << 6); }
        static constexpr unsigned VMSK_POS = 7;
        static constexpr unsigned VMSK_MASK = 0x00000080;
        static constexpr unsigned VMSK(unsigned value) { return (value << 7); }
        static constexpr unsigned CUMSK_POS = 8;
        static constexpr unsigned CUMSK_MASK = 0x00000100;
        static constexpr unsigned CUMSK(unsigned value) { return (value << 8); }
        static constexpr unsigned PTMSK_POS = 9;
        static constexpr unsigned PTMSK_MASK = 0x00000200;
        static constexpr unsigned PTMSK(unsigned value) { return (value << 9); }
        static constexpr unsigned CBDMAEN_POS = 10;
        static constexpr unsigned CBDMAEN_MASK = 0x00000400;
        static constexpr unsigned CBDMAEN(unsigned value) { return (value << 10); }
        static constexpr unsigned CHSEL_POS = 11;
        static constexpr unsigned CHSEL_MASK = 0x00000800;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 11); }
        static constexpr unsigned NBTR_POS = 12;
        static constexpr unsigned NBTR_MASK = 0x00003000;
        static constexpr unsigned NBTR(unsigned value) { return (value << 12); }
        static constexpr unsigned WFA_POS = 14;
        static constexpr unsigned WFA_MASK = 0x00004000;
        static constexpr unsigned WFA(unsigned value) { return (value << 14); }
        static constexpr unsigned INSEL_POS = 16;
        static constexpr unsigned INSEL_MASK = 0x00070000;
        static constexpr unsigned INSEL(unsigned value) { return (value << 16); }
    } CR;

    volatile union IMR_T // IMR: Interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IMR_BIT_T
        {
            unsigned RXNEIE  : 1; // bit 0 RXNE interrupt enable
            unsigned CSRNEIE : 1; // bit 1 Control Buffer Ready Interrupt Enable
            unsigned PERRIE  : 1; // bit 2 Parity error interrupt enable
            unsigned OVRIE   : 1; // bit 3 Overrun error Interrupt Enable
            unsigned SBLKIE  : 1; // bit 4 Synchronization Block Detected Interrupt Enable
            unsigned SYNCDIE : 1; // bit 5 Synchronization Done
            unsigned IFEIE   : 1; // bit 6 Serial Interface Error Interrupt Enable
            unsigned         : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned RXNEIE_POS = 0;
        static constexpr unsigned RXNEIE_MASK = 0x00000001;
        static constexpr unsigned RXNEIE(unsigned value) { return (value << 0); }
        static constexpr unsigned CSRNEIE_POS = 1;
        static constexpr unsigned CSRNEIE_MASK = 0x00000002;
        static constexpr unsigned CSRNEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned PERRIE_POS = 2;
        static constexpr unsigned PERRIE_MASK = 0x00000004;
        static constexpr unsigned PERRIE(unsigned value) { return (value << 2); }
        static constexpr unsigned OVRIE_POS = 3;
        static constexpr unsigned OVRIE_MASK = 0x00000008;
        static constexpr unsigned OVRIE(unsigned value) { return (value << 3); }
        static constexpr unsigned SBLKIE_POS = 4;
        static constexpr unsigned SBLKIE_MASK = 0x00000010;
        static constexpr unsigned SBLKIE(unsigned value) { return (value << 4); }
        static constexpr unsigned SYNCDIE_POS = 5;
        static constexpr unsigned SYNCDIE_MASK = 0x00000020;
        static constexpr unsigned SYNCDIE(unsigned value) { return (value << 5); }
        static constexpr unsigned IFEIE_POS = 6;
        static constexpr unsigned IFEIE_MASK = 0x00000040;
        static constexpr unsigned IFEIE(unsigned value) { return (value << 6); }
    } IMR;

    volatile union SR_T // SR: Status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned RXNE   : 1; // bit 0 Read data register not empty
            unsigned CSRNE  : 1; // bit 1 Control Buffer register is not empty
            unsigned PERR   : 1; // bit 2 Parity error
            unsigned OVR    : 1; // bit 3 Overrun error
            unsigned SBD    : 1; // bit 4 Synchronization Block Detected
            unsigned SYNCD  : 1; // bit 5 Synchronization Done
            unsigned FERR   : 1; // bit 6 Framing error
            unsigned SERR   : 1; // bit 7 Synchronization error
            unsigned TERR   : 1; // bit 8 Time-out error
            unsigned        : 7; // bits 9..15 unused
            unsigned WIDTH5 : 15; // bits 16..30 Duration of 5 symbols counted with SPDIF_CLK
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned RXNE_POS = 0;
        static constexpr unsigned RXNE_MASK = 0x00000001;
        static constexpr unsigned RXNE(unsigned value) { return (value << 0); }
        static constexpr unsigned CSRNE_POS = 1;
        static constexpr unsigned CSRNE_MASK = 0x00000002;
        static constexpr unsigned CSRNE(unsigned value) { return (value << 1); }
        static constexpr unsigned PERR_POS = 2;
        static constexpr unsigned PERR_MASK = 0x00000004;
        static constexpr unsigned PERR(unsigned value) { return (value << 2); }
        static constexpr unsigned OVR_POS = 3;
        static constexpr unsigned OVR_MASK = 0x00000008;
        static constexpr unsigned OVR(unsigned value) { return (value << 3); }
        static constexpr unsigned SBD_POS = 4;
        static constexpr unsigned SBD_MASK = 0x00000010;
        static constexpr unsigned SBD(unsigned value) { return (value << 4); }
        static constexpr unsigned SYNCD_POS = 5;
        static constexpr unsigned SYNCD_MASK = 0x00000020;
        static constexpr unsigned SYNCD(unsigned value) { return (value << 5); }
        static constexpr unsigned FERR_POS = 6;
        static constexpr unsigned FERR_MASK = 0x00000040;
        static constexpr unsigned FERR(unsigned value) { return (value << 6); }
        static constexpr unsigned SERR_POS = 7;
        static constexpr unsigned SERR_MASK = 0x00000080;
        static constexpr unsigned SERR(unsigned value) { return (value << 7); }
        static constexpr unsigned TERR_POS = 8;
        static constexpr unsigned TERR_MASK = 0x00000100;
        static constexpr unsigned TERR(unsigned value) { return (value << 8); }
        static constexpr unsigned WIDTH5_POS = 16;
        static constexpr unsigned WIDTH5_MASK = 0x7fff0000;
        static constexpr unsigned WIDTH5(unsigned value) { return (value << 16); }
    } SR;

    volatile union IFCR_T // IFCR: Interrupt Flag Clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IFCR_BIT_T
        {
            unsigned         : 2; // bits 0..1 unused
            unsigned PERRCF  : 1; // bit 2 Clears the Parity error flag
            unsigned OVRCF   : 1; // bit 3 Clears the Overrun error flag
            unsigned SBDCF   : 1; // bit 4 Clears the Synchronization Block Detected flag
            unsigned SYNCDCF : 1; // bit 5 Clears the Synchronization Done flag
            unsigned         : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned PERRCF_POS = 2;
        static constexpr unsigned PERRCF_MASK = 0x00000004;
        static constexpr unsigned PERRCF(unsigned value) { return (value << 2); }
        static constexpr unsigned OVRCF_POS = 3;
        static constexpr unsigned OVRCF_MASK = 0x00000008;
        static constexpr unsigned OVRCF(unsigned value) { return (value << 3); }
        static constexpr unsigned SBDCF_POS = 4;
        static constexpr unsigned SBDCF_MASK = 0x00000010;
        static constexpr unsigned SBDCF(unsigned value) { return (value << 4); }
        static constexpr unsigned SYNCDCF_POS = 5;
        static constexpr unsigned SYNCDCF_MASK = 0x00000020;
        static constexpr unsigned SYNCDCF(unsigned value) { return (value << 5); }
    } IFCR;

    volatile union DR_T // DR: Data input register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DR : 24; // bits 0..23 Parity Error bit
            unsigned PE : 1; // bit 24 Parity Error bit
            unsigned V  : 1; // bit 25 Validity bit
            unsigned U  : 1; // bit 26 User bit
            unsigned C  : 1; // bit 27 Channel Status bit
            unsigned PT : 2; // bits 28..29 Preamble Type
            unsigned    : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned DR_POS = 0;
        static constexpr unsigned DR_MASK = 0x00ffffff;
        static constexpr unsigned DR(unsigned value) { return (value << 0); }
        static constexpr unsigned PE_POS = 24;
        static constexpr unsigned PE_MASK = 0x01000000;
        static constexpr unsigned PE(unsigned value) { return (value << 24); }
        static constexpr unsigned V_POS = 25;
        static constexpr unsigned V_MASK = 0x02000000;
        static constexpr unsigned V(unsigned value) { return (value << 25); }
        static constexpr unsigned U_POS = 26;
        static constexpr unsigned U_MASK = 0x04000000;
        static constexpr unsigned U(unsigned value) { return (value << 26); }
        static constexpr unsigned C_POS = 27;
        static constexpr unsigned C_MASK = 0x08000000;
        static constexpr unsigned C(unsigned value) { return (value << 27); }
        static constexpr unsigned PT_POS = 28;
        static constexpr unsigned PT_MASK = 0x30000000;
        static constexpr unsigned PT(unsigned value) { return (value << 28); }
    } DR;

    volatile union CSR_T // CSR: Channel Status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned USR : 16; // bits 0..15 User data information
            unsigned CS  : 8; // bits 16..23 Channel A status information
            unsigned SOB : 1; // bit 24 Start Of Block
            unsigned     : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned USR_POS = 0;
        static constexpr unsigned USR_MASK = 0x0000ffff;
        static constexpr unsigned USR(unsigned value) { return (value << 0); }
        static constexpr unsigned CS_POS = 16;
        static constexpr unsigned CS_MASK = 0x00ff0000;
        static constexpr unsigned CS(unsigned value) { return (value << 16); }
        static constexpr unsigned SOB_POS = 24;
        static constexpr unsigned SOB_MASK = 0x01000000;
        static constexpr unsigned SOB(unsigned value) { return (value << 24); }
    } CSR;

    volatile union DIR_T // DIR: Debug Information register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIR_BIT_T
        {
            unsigned THI : 13; // bits 0..12 Threshold HIGH
            unsigned     : 3; // bits 13..15 unused
            unsigned TLO : 13; // bits 16..28 Threshold LOW
            unsigned     : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned THI_POS = 0;
        static constexpr unsigned THI_MASK = 0x00001fff;
        static constexpr unsigned THI(unsigned value) { return (value << 0); }
        static constexpr unsigned TLO_POS = 16;
        static constexpr unsigned TLO_MASK = 0x1fff0000;
        static constexpr unsigned TLO(unsigned value) { return (value << 16); }
    } DIR;

}; // struct SPDIF_RX_T

static_assert(sizeof(SPDIF_RX_T) == SPDIF_RX_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp