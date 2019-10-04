#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) Ethernet_MAC_T
{
    static constexpr size_t INSTANCE_SIZE = 96;
    static constexpr size_t PADDED_INSTANCE_SIZE = 96;
    static constexpr intptr_t BASE_ADDRESS = 0x40028000;

    static constexpr intptr_t ADDR_OFFSET_MACCR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MACFFR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_MACHTHR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_MACHTLR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_MACMIIAR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_MACMIIDR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_MACFCR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_MACVLANTR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_MACPMTCSR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_MACDBGR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_MACSR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_MACIMR = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_MACA0HR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_MACA0LR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_MACA1HR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_MACA1LR = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_MACA2HR = 0x50;
    static constexpr intptr_t ADDR_OFFSET_MACA2LR = 0x54;
    static constexpr intptr_t ADDR_OFFSET_MACA3HR = 0x58;
    static constexpr intptr_t ADDR_OFFSET_MACA3LR = 0x5c;

    volatile union MACCR_T // MACCR: Ethernet MAC configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACCR_BIT_T
        {
            unsigned      : 2; // bits 0..1 unused
            unsigned RE   : 1; // bit 2 RE
            unsigned TE   : 1; // bit 3 TE
            unsigned DC   : 1; // bit 4 DC
            unsigned BL   : 2; // bits 5..6 BL
            unsigned APCS : 1; // bit 7 APCS
            unsigned      : 1; // bit 8 unused
            unsigned RD   : 1; // bit 9 RD
            unsigned IPCO : 1; // bit 10 IPCO
            unsigned DM   : 1; // bit 11 DM
            unsigned LM   : 1; // bit 12 LM
            unsigned ROD  : 1; // bit 13 ROD
            unsigned FES  : 1; // bit 14 FES
            unsigned      : 1; // bit 15 unused
            unsigned CSD  : 1; // bit 16 CSD
            unsigned IFG  : 3; // bits 17..19 IFG
            unsigned      : 2; // bits 20..21 unused
            unsigned JD   : 1; // bit 22 JD
            unsigned WD   : 1; // bit 23 WD
            unsigned      : 1; // bit 24 unused
            unsigned CSTF : 1; // bit 25 CSTF
            unsigned      : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned RE_POS = 2;
        static constexpr unsigned RE_MASK = 0x00000004;
        static constexpr unsigned RE(unsigned value) { return (value << 2); }
        static constexpr unsigned TE_POS = 3;
        static constexpr unsigned TE_MASK = 0x00000008;
        static constexpr unsigned TE(unsigned value) { return (value << 3); }
        static constexpr unsigned DC_POS = 4;
        static constexpr unsigned DC_MASK = 0x00000010;
        static constexpr unsigned DC(unsigned value) { return (value << 4); }
        static constexpr unsigned BL_POS = 5;
        static constexpr unsigned BL_MASK = 0x00000060;
        static constexpr unsigned BL(unsigned value) { return (value << 5); }
        static constexpr unsigned APCS_POS = 7;
        static constexpr unsigned APCS_MASK = 0x00000080;
        static constexpr unsigned APCS(unsigned value) { return (value << 7); }
        static constexpr unsigned RD_POS = 9;
        static constexpr unsigned RD_MASK = 0x00000200;
        static constexpr unsigned RD(unsigned value) { return (value << 9); }
        static constexpr unsigned IPCO_POS = 10;
        static constexpr unsigned IPCO_MASK = 0x00000400;
        static constexpr unsigned IPCO(unsigned value) { return (value << 10); }
        static constexpr unsigned DM_POS = 11;
        static constexpr unsigned DM_MASK = 0x00000800;
        static constexpr unsigned DM(unsigned value) { return (value << 11); }
        static constexpr unsigned LM_POS = 12;
        static constexpr unsigned LM_MASK = 0x00001000;
        static constexpr unsigned LM(unsigned value) { return (value << 12); }
        static constexpr unsigned ROD_POS = 13;
        static constexpr unsigned ROD_MASK = 0x00002000;
        static constexpr unsigned ROD(unsigned value) { return (value << 13); }
        static constexpr unsigned FES_POS = 14;
        static constexpr unsigned FES_MASK = 0x00004000;
        static constexpr unsigned FES(unsigned value) { return (value << 14); }
        static constexpr unsigned CSD_POS = 16;
        static constexpr unsigned CSD_MASK = 0x00010000;
        static constexpr unsigned CSD(unsigned value) { return (value << 16); }
        static constexpr unsigned IFG_POS = 17;
        static constexpr unsigned IFG_MASK = 0x000e0000;
        static constexpr unsigned IFG(unsigned value) { return (value << 17); }
        static constexpr unsigned JD_POS = 22;
        static constexpr unsigned JD_MASK = 0x00400000;
        static constexpr unsigned JD(unsigned value) { return (value << 22); }
        static constexpr unsigned WD_POS = 23;
        static constexpr unsigned WD_MASK = 0x00800000;
        static constexpr unsigned WD(unsigned value) { return (value << 23); }
        static constexpr unsigned CSTF_POS = 25;
        static constexpr unsigned CSTF_MASK = 0x02000000;
        static constexpr unsigned CSTF(unsigned value) { return (value << 25); }
    } MACCR;

    volatile union MACFFR_T // MACFFR: Ethernet MAC frame filter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACFFR_BIT_T
        {
            unsigned PM   : 1; // bit 0 PM
            unsigned HU   : 1; // bit 1 HU
            unsigned HM   : 1; // bit 2 HM
            unsigned DAIF : 1; // bit 3 DAIF
            unsigned RAM  : 1; // bit 4 RAM
            unsigned BFD  : 1; // bit 5 BFD
            unsigned PCF  : 1; // bit 6 PCF
            unsigned SAIF : 1; // bit 7 SAIF
            unsigned SAF  : 1; // bit 8 SAF
            unsigned HPF  : 1; // bit 9 HPF
            unsigned      : 21; // bits 10..30 unused
            unsigned RA   : 1; // bit 31 RA    
        } bit;
    
        static constexpr unsigned PM_POS = 0;
        static constexpr unsigned PM_MASK = 0x00000001;
        static constexpr unsigned PM(unsigned value) { return (value << 0); }
        static constexpr unsigned HU_POS = 1;
        static constexpr unsigned HU_MASK = 0x00000002;
        static constexpr unsigned HU(unsigned value) { return (value << 1); }
        static constexpr unsigned HM_POS = 2;
        static constexpr unsigned HM_MASK = 0x00000004;
        static constexpr unsigned HM(unsigned value) { return (value << 2); }
        static constexpr unsigned DAIF_POS = 3;
        static constexpr unsigned DAIF_MASK = 0x00000008;
        static constexpr unsigned DAIF(unsigned value) { return (value << 3); }
        static constexpr unsigned RAM_POS = 4;
        static constexpr unsigned RAM_MASK = 0x00000010;
        static constexpr unsigned RAM(unsigned value) { return (value << 4); }
        static constexpr unsigned BFD_POS = 5;
        static constexpr unsigned BFD_MASK = 0x00000020;
        static constexpr unsigned BFD(unsigned value) { return (value << 5); }
        static constexpr unsigned PCF_POS = 6;
        static constexpr unsigned PCF_MASK = 0x00000040;
        static constexpr unsigned PCF(unsigned value) { return (value << 6); }
        static constexpr unsigned SAIF_POS = 7;
        static constexpr unsigned SAIF_MASK = 0x00000080;
        static constexpr unsigned SAIF(unsigned value) { return (value << 7); }
        static constexpr unsigned SAF_POS = 8;
        static constexpr unsigned SAF_MASK = 0x00000100;
        static constexpr unsigned SAF(unsigned value) { return (value << 8); }
        static constexpr unsigned HPF_POS = 9;
        static constexpr unsigned HPF_MASK = 0x00000200;
        static constexpr unsigned HPF(unsigned value) { return (value << 9); }
        static constexpr unsigned RA_POS = 31;
        static constexpr unsigned RA_MASK = 0x80000000;
        static constexpr unsigned RA(unsigned value) { return (value << 31); }
    } MACFFR;

    volatile union MACHTHR_T // MACHTHR: Ethernet MAC hash table high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACHTHR_BIT_T
        {
            unsigned HTH : 32; // bits 0..31 HTH    
        } bit;
    
        static constexpr unsigned HTH_POS = 0;
        static constexpr unsigned HTH_MASK = 0xffffffff;
        static constexpr unsigned HTH(unsigned value) { return (value << 0); }
    } MACHTHR;

    volatile union MACHTLR_T // MACHTLR: Ethernet MAC hash table low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACHTLR_BIT_T
        {
            unsigned HTL : 32; // bits 0..31 HTL    
        } bit;
    
        static constexpr unsigned HTL_POS = 0;
        static constexpr unsigned HTL_MASK = 0xffffffff;
        static constexpr unsigned HTL(unsigned value) { return (value << 0); }
    } MACHTLR;

    volatile union MACMIIAR_T // MACMIIAR: Ethernet MAC MII address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACMIIAR_BIT_T
        {
            unsigned MB : 1; // bit 0 MB
            unsigned MW : 1; // bit 1 MW
            unsigned CR : 3; // bits 2..4 CR
            unsigned    : 1; // bit 5 unused
            unsigned MR : 5; // bits 6..10 MR
            unsigned PA : 5; // bits 11..15 PA
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned MB_POS = 0;
        static constexpr unsigned MB_MASK = 0x00000001;
        static constexpr unsigned MB(unsigned value) { return (value << 0); }
        static constexpr unsigned MW_POS = 1;
        static constexpr unsigned MW_MASK = 0x00000002;
        static constexpr unsigned MW(unsigned value) { return (value << 1); }
        static constexpr unsigned CR_POS = 2;
        static constexpr unsigned CR_MASK = 0x0000001c;
        static constexpr unsigned CR(unsigned value) { return (value << 2); }
        static constexpr unsigned MR_POS = 6;
        static constexpr unsigned MR_MASK = 0x000007c0;
        static constexpr unsigned MR(unsigned value) { return (value << 6); }
        static constexpr unsigned PA_POS = 11;
        static constexpr unsigned PA_MASK = 0x0000f800;
        static constexpr unsigned PA(unsigned value) { return (value << 11); }
    } MACMIIAR;

    volatile union MACMIIDR_T // MACMIIDR: Ethernet MAC MII data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACMIIDR_BIT_T
        {
            unsigned TD : 16; // bits 0..15 TD
            unsigned    : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned TD_POS = 0;
        static constexpr unsigned TD_MASK = 0x0000ffff;
        static constexpr unsigned TD(unsigned value) { return (value << 0); }
    } MACMIIDR;

    volatile union MACFCR_T // MACFCR: Ethernet MAC flow control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACFCR_BIT_T
        {
            unsigned FCB  : 1; // bit 0 FCB
            unsigned TFCE : 1; // bit 1 TFCE
            unsigned RFCE : 1; // bit 2 RFCE
            unsigned UPFD : 1; // bit 3 UPFD
            unsigned PLT  : 2; // bits 4..5 PLT
            unsigned      : 1; // bit 6 unused
            unsigned ZQPD : 1; // bit 7 ZQPD
            unsigned      : 8; // bits 8..15 unused
            unsigned PT   : 16; // bits 16..31 PT    
        } bit;
    
        static constexpr unsigned FCB_POS = 0;
        static constexpr unsigned FCB_MASK = 0x00000001;
        static constexpr unsigned FCB(unsigned value) { return (value << 0); }
        static constexpr unsigned TFCE_POS = 1;
        static constexpr unsigned TFCE_MASK = 0x00000002;
        static constexpr unsigned TFCE(unsigned value) { return (value << 1); }
        static constexpr unsigned RFCE_POS = 2;
        static constexpr unsigned RFCE_MASK = 0x00000004;
        static constexpr unsigned RFCE(unsigned value) { return (value << 2); }
        static constexpr unsigned UPFD_POS = 3;
        static constexpr unsigned UPFD_MASK = 0x00000008;
        static constexpr unsigned UPFD(unsigned value) { return (value << 3); }
        static constexpr unsigned PLT_POS = 4;
        static constexpr unsigned PLT_MASK = 0x00000030;
        static constexpr unsigned PLT(unsigned value) { return (value << 4); }
        static constexpr unsigned ZQPD_POS = 7;
        static constexpr unsigned ZQPD_MASK = 0x00000080;
        static constexpr unsigned ZQPD(unsigned value) { return (value << 7); }
        static constexpr unsigned PT_POS = 16;
        static constexpr unsigned PT_MASK = 0xffff0000;
        static constexpr unsigned PT(unsigned value) { return (value << 16); }
    } MACFCR;

    volatile union MACVLANTR_T // MACVLANTR: Ethernet MAC VLAN tag register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACVLANTR_BIT_T
        {
            unsigned VLANTI : 16; // bits 0..15 VLANTI
            unsigned VLANTC : 1; // bit 16 VLANTC
            unsigned        : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned VLANTI_POS = 0;
        static constexpr unsigned VLANTI_MASK = 0x0000ffff;
        static constexpr unsigned VLANTI(unsigned value) { return (value << 0); }
        static constexpr unsigned VLANTC_POS = 16;
        static constexpr unsigned VLANTC_MASK = 0x00010000;
        static constexpr unsigned VLANTC(unsigned value) { return (value << 16); }
    } MACVLANTR;

    uint8_t Reserved1[12];

    volatile union MACPMTCSR_T // MACPMTCSR: Ethernet MAC PMT control and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACPMTCSR_BIT_T
        {
            unsigned PD     : 1; // bit 0 PD
            unsigned MPE    : 1; // bit 1 MPE
            unsigned WFE    : 1; // bit 2 WFE
            unsigned        : 2; // bits 3..4 unused
            unsigned MPR    : 1; // bit 5 MPR
            unsigned WFR    : 1; // bit 6 WFR
            unsigned        : 2; // bits 7..8 unused
            unsigned GU     : 1; // bit 9 GU
            unsigned        : 21; // bits 10..30 unused
            unsigned WFFRPR : 1; // bit 31 WFFRPR    
        } bit;
    
        static constexpr unsigned PD_POS = 0;
        static constexpr unsigned PD_MASK = 0x00000001;
        static constexpr unsigned PD(unsigned value) { return (value << 0); }
        static constexpr unsigned MPE_POS = 1;
        static constexpr unsigned MPE_MASK = 0x00000002;
        static constexpr unsigned MPE(unsigned value) { return (value << 1); }
        static constexpr unsigned WFE_POS = 2;
        static constexpr unsigned WFE_MASK = 0x00000004;
        static constexpr unsigned WFE(unsigned value) { return (value << 2); }
        static constexpr unsigned MPR_POS = 5;
        static constexpr unsigned MPR_MASK = 0x00000020;
        static constexpr unsigned MPR(unsigned value) { return (value << 5); }
        static constexpr unsigned WFR_POS = 6;
        static constexpr unsigned WFR_MASK = 0x00000040;
        static constexpr unsigned WFR(unsigned value) { return (value << 6); }
        static constexpr unsigned GU_POS = 9;
        static constexpr unsigned GU_MASK = 0x00000200;
        static constexpr unsigned GU(unsigned value) { return (value << 9); }
        static constexpr unsigned WFFRPR_POS = 31;
        static constexpr unsigned WFFRPR_MASK = 0x80000000;
        static constexpr unsigned WFFRPR(unsigned value) { return (value << 31); }
    } MACPMTCSR;

    uint8_t Reserved2[4];

    volatile union MACDBGR_T // MACDBGR: Ethernet MAC debug register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACDBGR_BIT_T
        {
            unsigned CR    : 1; // bit 0 CR
            unsigned CSR   : 1; // bit 1 CSR
            unsigned ROR   : 1; // bit 2 ROR
            unsigned MCF   : 1; // bit 3 MCF
            unsigned MCP   : 1; // bit 4 MCP
            unsigned MCFHP : 1; // bit 5 MCFHP
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned CR_POS = 0;
        static constexpr unsigned CR_MASK = 0x00000001;
        static constexpr unsigned CR(unsigned value) { return (value << 0); }
        static constexpr unsigned CSR_POS = 1;
        static constexpr unsigned CSR_MASK = 0x00000002;
        static constexpr unsigned CSR(unsigned value) { return (value << 1); }
        static constexpr unsigned ROR_POS = 2;
        static constexpr unsigned ROR_MASK = 0x00000004;
        static constexpr unsigned ROR(unsigned value) { return (value << 2); }
        static constexpr unsigned MCF_POS = 3;
        static constexpr unsigned MCF_MASK = 0x00000008;
        static constexpr unsigned MCF(unsigned value) { return (value << 3); }
        static constexpr unsigned MCP_POS = 4;
        static constexpr unsigned MCP_MASK = 0x00000010;
        static constexpr unsigned MCP(unsigned value) { return (value << 4); }
        static constexpr unsigned MCFHP_POS = 5;
        static constexpr unsigned MCFHP_MASK = 0x00000020;
        static constexpr unsigned MCFHP(unsigned value) { return (value << 5); }
    } MACDBGR;

    volatile union MACSR_T // MACSR: Ethernet MAC interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACSR_BIT_T
        {
            unsigned       : 3; // bits 0..2 unused
            unsigned PMTS  : 1; // bit 3 PMTS
            unsigned MMCS  : 1; // bit 4 MMCS
            unsigned MMCRS : 1; // bit 5 MMCRS
            unsigned MMCTS : 1; // bit 6 MMCTS
            unsigned       : 2; // bits 7..8 unused
            unsigned TSTS  : 1; // bit 9 TSTS
            unsigned       : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned PMTS_POS = 3;
        static constexpr unsigned PMTS_MASK = 0x00000008;
        static constexpr unsigned PMTS(unsigned value) { return (value << 3); }
        static constexpr unsigned MMCS_POS = 4;
        static constexpr unsigned MMCS_MASK = 0x00000010;
        static constexpr unsigned MMCS(unsigned value) { return (value << 4); }
        static constexpr unsigned MMCRS_POS = 5;
        static constexpr unsigned MMCRS_MASK = 0x00000020;
        static constexpr unsigned MMCRS(unsigned value) { return (value << 5); }
        static constexpr unsigned MMCTS_POS = 6;
        static constexpr unsigned MMCTS_MASK = 0x00000040;
        static constexpr unsigned MMCTS(unsigned value) { return (value << 6); }
        static constexpr unsigned TSTS_POS = 9;
        static constexpr unsigned TSTS_MASK = 0x00000200;
        static constexpr unsigned TSTS(unsigned value) { return (value << 9); }
    } MACSR;

    volatile union MACIMR_T // MACIMR: Ethernet MAC interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACIMR_BIT_T
        {
            unsigned       : 3; // bits 0..2 unused
            unsigned PMTIM : 1; // bit 3 PMTIM
            unsigned       : 5; // bits 4..8 unused
            unsigned TSTIM : 1; // bit 9 TSTIM
            unsigned       : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned PMTIM_POS = 3;
        static constexpr unsigned PMTIM_MASK = 0x00000008;
        static constexpr unsigned PMTIM(unsigned value) { return (value << 3); }
        static constexpr unsigned TSTIM_POS = 9;
        static constexpr unsigned TSTIM_MASK = 0x00000200;
        static constexpr unsigned TSTIM(unsigned value) { return (value << 9); }
    } MACIMR;

    volatile union MACA0HR_T // MACA0HR: Ethernet MAC address 0 high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA0HR_BIT_T
        {
            unsigned MACA0H : 16; // bits 0..15 MAC address0 high
            unsigned        : 15; // bits 16..30 unused
            unsigned MO     : 1; // bit 31 Always 1    
        } bit;
    
        static constexpr unsigned MACA0H_POS = 0;
        static constexpr unsigned MACA0H_MASK = 0x0000ffff;
        static constexpr unsigned MACA0H(unsigned value) { return (value << 0); }
        static constexpr unsigned MO_POS = 31;
        static constexpr unsigned MO_MASK = 0x80000000;
        static constexpr unsigned MO(unsigned value) { return (value << 31); }
    } MACA0HR;

    volatile union MACA0LR_T // MACA0LR: Ethernet MAC address 0 low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA0LR_BIT_T
        {
            unsigned MACA0L : 32; // bits 0..31 0    
        } bit;
    
        static constexpr unsigned MACA0L_POS = 0;
        static constexpr unsigned MACA0L_MASK = 0xffffffff;
        static constexpr unsigned MACA0L(unsigned value) { return (value << 0); }
    } MACA0LR;

    volatile union MACA1HR_T // MACA1HR: Ethernet MAC address 1 high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA1HR_BIT_T
        {
            unsigned MACA1H : 16; // bits 0..15 MACA1H
            unsigned        : 8; // bits 16..23 unused
            unsigned MBC    : 6; // bits 24..29 MBC
            unsigned SA     : 1; // bit 30 SA
            unsigned AE     : 1; // bit 31 AE    
        } bit;
    
        static constexpr unsigned MACA1H_POS = 0;
        static constexpr unsigned MACA1H_MASK = 0x0000ffff;
        static constexpr unsigned MACA1H(unsigned value) { return (value << 0); }
        static constexpr unsigned MBC_POS = 24;
        static constexpr unsigned MBC_MASK = 0x3f000000;
        static constexpr unsigned MBC(unsigned value) { return (value << 24); }
        static constexpr unsigned SA_POS = 30;
        static constexpr unsigned SA_MASK = 0x40000000;
        static constexpr unsigned SA(unsigned value) { return (value << 30); }
        static constexpr unsigned AE_POS = 31;
        static constexpr unsigned AE_MASK = 0x80000000;
        static constexpr unsigned AE(unsigned value) { return (value << 31); }
    } MACA1HR;

    volatile union MACA1LR_T // MACA1LR: Ethernet MAC address1 low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA1LR_BIT_T
        {
            unsigned MACA1LR : 32; // bits 0..31 MACA1LR    
        } bit;
    
        static constexpr unsigned MACA1LR_POS = 0;
        static constexpr unsigned MACA1LR_MASK = 0xffffffff;
        static constexpr unsigned MACA1LR(unsigned value) { return (value << 0); }
    } MACA1LR;

    volatile union MACA2HR_T // MACA2HR: Ethernet MAC address 2 high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA2HR_BIT_T
        {
            unsigned MAC2AH : 16; // bits 0..15 MAC2AH
            unsigned        : 8; // bits 16..23 unused
            unsigned MBC    : 6; // bits 24..29 MBC
            unsigned SA     : 1; // bit 30 SA
            unsigned AE     : 1; // bit 31 AE    
        } bit;
    
        static constexpr unsigned MAC2AH_POS = 0;
        static constexpr unsigned MAC2AH_MASK = 0x0000ffff;
        static constexpr unsigned MAC2AH(unsigned value) { return (value << 0); }
        static constexpr unsigned MBC_POS = 24;
        static constexpr unsigned MBC_MASK = 0x3f000000;
        static constexpr unsigned MBC(unsigned value) { return (value << 24); }
        static constexpr unsigned SA_POS = 30;
        static constexpr unsigned SA_MASK = 0x40000000;
        static constexpr unsigned SA(unsigned value) { return (value << 30); }
        static constexpr unsigned AE_POS = 31;
        static constexpr unsigned AE_MASK = 0x80000000;
        static constexpr unsigned AE(unsigned value) { return (value << 31); }
    } MACA2HR;

    volatile union MACA2LR_T // MACA2LR: Ethernet MAC address 2 low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA2LR_BIT_T
        {
            unsigned MACA2L : 31; // bits 0..30 MACA2L
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned MACA2L_POS = 0;
        static constexpr unsigned MACA2L_MASK = 0x7fffffff;
        static constexpr unsigned MACA2L(unsigned value) { return (value << 0); }
    } MACA2LR;

    volatile union MACA3HR_T // MACA3HR: Ethernet MAC address 3 high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA3HR_BIT_T
        {
            unsigned MACA3H : 16; // bits 0..15 MACA3H
            unsigned        : 8; // bits 16..23 unused
            unsigned MBC    : 6; // bits 24..29 MBC
            unsigned SA     : 1; // bit 30 SA
            unsigned AE     : 1; // bit 31 AE    
        } bit;
    
        static constexpr unsigned MACA3H_POS = 0;
        static constexpr unsigned MACA3H_MASK = 0x0000ffff;
        static constexpr unsigned MACA3H(unsigned value) { return (value << 0); }
        static constexpr unsigned MBC_POS = 24;
        static constexpr unsigned MBC_MASK = 0x3f000000;
        static constexpr unsigned MBC(unsigned value) { return (value << 24); }
        static constexpr unsigned SA_POS = 30;
        static constexpr unsigned SA_MASK = 0x40000000;
        static constexpr unsigned SA(unsigned value) { return (value << 30); }
        static constexpr unsigned AE_POS = 31;
        static constexpr unsigned AE_MASK = 0x80000000;
        static constexpr unsigned AE(unsigned value) { return (value << 31); }
    } MACA3HR;

    volatile union MACA3LR_T // MACA3LR: Ethernet MAC address 3 low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MACA3LR_BIT_T
        {
            unsigned MBCA3L : 32; // bits 0..31 MBCA3L    
        } bit;
    
        static constexpr unsigned MBCA3L_POS = 0;
        static constexpr unsigned MBCA3L_MASK = 0xffffffff;
        static constexpr unsigned MBCA3L(unsigned value) { return (value << 0); }
    } MACA3LR;

}; // struct Ethernet_MAC_T

static_assert(sizeof(Ethernet_MAC_T) == Ethernet_MAC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp