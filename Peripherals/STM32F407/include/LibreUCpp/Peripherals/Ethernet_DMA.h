#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) Ethernet_DMA_T
{
    static constexpr size_t INSTANCE_SIZE = 88;
    static constexpr intptr_t BASE_ADDRESS = 0x40029000;

    static constexpr intptr_t ADDR_OFFSET_DMABMR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DMATPDR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DMARPDR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DMARDLAR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DMATDLAR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_DMASR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_DMAOMR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_DMAIER = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_DMAMFBOCR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_DMARSWTR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_DMACHTDR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_DMACHRDR = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_DMACHTBAR = 0x50;
    static constexpr intptr_t ADDR_OFFSET_DMACHRBAR = 0x54;

    volatile union DMABMR_T // DMABMR: Ethernet DMA bus mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMABMR_BIT_T
        {
            unsigned SR   : 1; // bit 0 SR
            unsigned DA   : 1; // bit 1 DA
            unsigned DSL  : 5; // bits 2..6 DSL
            unsigned EDFE : 1; // bit 7 EDFE
            unsigned PBL  : 6; // bits 8..13 PBL
            unsigned RTPR : 2; // bits 14..15 RTPR
            unsigned FB   : 1; // bit 16 FB
            unsigned RDP  : 6; // bits 17..22 RDP
            unsigned USP  : 1; // bit 23 USP
            unsigned FPM  : 1; // bit 24 FPM
            unsigned AAB  : 1; // bit 25 AAB
            unsigned MB   : 1; // bit 26 MB
            unsigned      : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned SR_POS = 0;
        static constexpr unsigned SR_MASK = 0x00000001;
        static constexpr unsigned SR(unsigned value) { return (value << 0); }
        static constexpr unsigned DA_POS = 1;
        static constexpr unsigned DA_MASK = 0x00000002;
        static constexpr unsigned DA(unsigned value) { return (value << 1); }
        static constexpr unsigned DSL_POS = 2;
        static constexpr unsigned DSL_MASK = 0x0000007c;
        static constexpr unsigned DSL(unsigned value) { return (value << 2); }
        static constexpr unsigned EDFE_POS = 7;
        static constexpr unsigned EDFE_MASK = 0x00000080;
        static constexpr unsigned EDFE(unsigned value) { return (value << 7); }
        static constexpr unsigned PBL_POS = 8;
        static constexpr unsigned PBL_MASK = 0x00003f00;
        static constexpr unsigned PBL(unsigned value) { return (value << 8); }
        static constexpr unsigned RTPR_POS = 14;
        static constexpr unsigned RTPR_MASK = 0x0000c000;
        static constexpr unsigned RTPR(unsigned value) { return (value << 14); }
        static constexpr unsigned FB_POS = 16;
        static constexpr unsigned FB_MASK = 0x00010000;
        static constexpr unsigned FB(unsigned value) { return (value << 16); }
        static constexpr unsigned RDP_POS = 17;
        static constexpr unsigned RDP_MASK = 0x007e0000;
        static constexpr unsigned RDP(unsigned value) { return (value << 17); }
        static constexpr unsigned USP_POS = 23;
        static constexpr unsigned USP_MASK = 0x00800000;
        static constexpr unsigned USP(unsigned value) { return (value << 23); }
        static constexpr unsigned FPM_POS = 24;
        static constexpr unsigned FPM_MASK = 0x01000000;
        static constexpr unsigned FPM(unsigned value) { return (value << 24); }
        static constexpr unsigned AAB_POS = 25;
        static constexpr unsigned AAB_MASK = 0x02000000;
        static constexpr unsigned AAB(unsigned value) { return (value << 25); }
        static constexpr unsigned MB_POS = 26;
        static constexpr unsigned MB_MASK = 0x04000000;
        static constexpr unsigned MB(unsigned value) { return (value << 26); }
    } DMABMR;

    volatile union DMATPDR_T // DMATPDR: Ethernet DMA transmit poll demand register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMATPDR_BIT_T
        {
            unsigned TPD : 32; // bits 0..31 TPD    
        } bit;
    
        static constexpr unsigned TPD_POS = 0;
        static constexpr unsigned TPD_MASK = 0xffffffff;
        static constexpr unsigned TPD(unsigned value) { return (value << 0); }
    } DMATPDR;

    volatile union DMARPDR_T // DMARPDR: EHERNET DMA receive poll demand register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMARPDR_BIT_T
        {
            unsigned RPD : 32; // bits 0..31 RPD    
        } bit;
    
        static constexpr unsigned RPD_POS = 0;
        static constexpr unsigned RPD_MASK = 0xffffffff;
        static constexpr unsigned RPD(unsigned value) { return (value << 0); }
    } DMARPDR;

    volatile union DMARDLAR_T // DMARDLAR: Ethernet DMA receive descriptor list address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMARDLAR_BIT_T
        {
            unsigned SRL : 32; // bits 0..31 SRL    
        } bit;
    
        static constexpr unsigned SRL_POS = 0;
        static constexpr unsigned SRL_MASK = 0xffffffff;
        static constexpr unsigned SRL(unsigned value) { return (value << 0); }
    } DMARDLAR;

    volatile union DMATDLAR_T // DMATDLAR: Ethernet DMA transmit descriptor list address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMATDLAR_BIT_T
        {
            unsigned STL : 32; // bits 0..31 STL    
        } bit;
    
        static constexpr unsigned STL_POS = 0;
        static constexpr unsigned STL_MASK = 0xffffffff;
        static constexpr unsigned STL(unsigned value) { return (value << 0); }
    } DMATDLAR;

    volatile union DMASR_T // DMASR: Ethernet DMA status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMASR_BIT_T
        {
            unsigned TS   : 1; // bit 0 TS
            unsigned TPSS : 1; // bit 1 TPSS
            unsigned TBUS : 1; // bit 2 TBUS
            unsigned TJTS : 1; // bit 3 TJTS
            unsigned ROS  : 1; // bit 4 ROS
            unsigned TUS  : 1; // bit 5 TUS
            unsigned RS   : 1; // bit 6 RS
            unsigned RBUS : 1; // bit 7 RBUS
            unsigned RPSS : 1; // bit 8 RPSS
            unsigned PWTS : 1; // bit 9 PWTS
            unsigned ETS  : 1; // bit 10 ETS
            unsigned      : 2; // bits 11..12 unused
            unsigned FBES : 1; // bit 13 FBES
            unsigned ERS  : 1; // bit 14 ERS
            unsigned AIS  : 1; // bit 15 AIS
            unsigned NIS  : 1; // bit 16 NIS
            unsigned RPS  : 3; // bits 17..19 RPS
            unsigned TPS  : 3; // bits 20..22 TPS
            unsigned EBS  : 3; // bits 23..25 EBS
            unsigned      : 1; // bit 26 unused
            unsigned MMCS : 1; // bit 27 MMCS
            unsigned PMTS : 1; // bit 28 PMTS
            unsigned TSTS : 1; // bit 29 TSTS
            unsigned      : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned TS_POS = 0;
        static constexpr unsigned TS_MASK = 0x00000001;
        static constexpr unsigned TS(unsigned value) { return (value << 0); }
        static constexpr unsigned TPSS_POS = 1;
        static constexpr unsigned TPSS_MASK = 0x00000002;
        static constexpr unsigned TPSS(unsigned value) { return (value << 1); }
        static constexpr unsigned TBUS_POS = 2;
        static constexpr unsigned TBUS_MASK = 0x00000004;
        static constexpr unsigned TBUS(unsigned value) { return (value << 2); }
        static constexpr unsigned TJTS_POS = 3;
        static constexpr unsigned TJTS_MASK = 0x00000008;
        static constexpr unsigned TJTS(unsigned value) { return (value << 3); }
        static constexpr unsigned ROS_POS = 4;
        static constexpr unsigned ROS_MASK = 0x00000010;
        static constexpr unsigned ROS(unsigned value) { return (value << 4); }
        static constexpr unsigned TUS_POS = 5;
        static constexpr unsigned TUS_MASK = 0x00000020;
        static constexpr unsigned TUS(unsigned value) { return (value << 5); }
        static constexpr unsigned RS_POS = 6;
        static constexpr unsigned RS_MASK = 0x00000040;
        static constexpr unsigned RS(unsigned value) { return (value << 6); }
        static constexpr unsigned RBUS_POS = 7;
        static constexpr unsigned RBUS_MASK = 0x00000080;
        static constexpr unsigned RBUS(unsigned value) { return (value << 7); }
        static constexpr unsigned RPSS_POS = 8;
        static constexpr unsigned RPSS_MASK = 0x00000100;
        static constexpr unsigned RPSS(unsigned value) { return (value << 8); }
        static constexpr unsigned PWTS_POS = 9;
        static constexpr unsigned PWTS_MASK = 0x00000200;
        static constexpr unsigned PWTS(unsigned value) { return (value << 9); }
        static constexpr unsigned ETS_POS = 10;
        static constexpr unsigned ETS_MASK = 0x00000400;
        static constexpr unsigned ETS(unsigned value) { return (value << 10); }
        static constexpr unsigned FBES_POS = 13;
        static constexpr unsigned FBES_MASK = 0x00002000;
        static constexpr unsigned FBES(unsigned value) { return (value << 13); }
        static constexpr unsigned ERS_POS = 14;
        static constexpr unsigned ERS_MASK = 0x00004000;
        static constexpr unsigned ERS(unsigned value) { return (value << 14); }
        static constexpr unsigned AIS_POS = 15;
        static constexpr unsigned AIS_MASK = 0x00008000;
        static constexpr unsigned AIS(unsigned value) { return (value << 15); }
        static constexpr unsigned NIS_POS = 16;
        static constexpr unsigned NIS_MASK = 0x00010000;
        static constexpr unsigned NIS(unsigned value) { return (value << 16); }
        static constexpr unsigned RPS_POS = 17;
        static constexpr unsigned RPS_MASK = 0x000e0000;
        static constexpr unsigned RPS(unsigned value) { return (value << 17); }
        static constexpr unsigned TPS_POS = 20;
        static constexpr unsigned TPS_MASK = 0x00700000;
        static constexpr unsigned TPS(unsigned value) { return (value << 20); }
        static constexpr unsigned EBS_POS = 23;
        static constexpr unsigned EBS_MASK = 0x03800000;
        static constexpr unsigned EBS(unsigned value) { return (value << 23); }
        static constexpr unsigned MMCS_POS = 27;
        static constexpr unsigned MMCS_MASK = 0x08000000;
        static constexpr unsigned MMCS(unsigned value) { return (value << 27); }
        static constexpr unsigned PMTS_POS = 28;
        static constexpr unsigned PMTS_MASK = 0x10000000;
        static constexpr unsigned PMTS(unsigned value) { return (value << 28); }
        static constexpr unsigned TSTS_POS = 29;
        static constexpr unsigned TSTS_MASK = 0x20000000;
        static constexpr unsigned TSTS(unsigned value) { return (value << 29); }
    } DMASR;

    volatile union DMAOMR_T // DMAOMR: Ethernet DMA operation mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMAOMR_BIT_T
        {
            unsigned        : 1; // bit 0 unused
            unsigned SR     : 1; // bit 1 SR
            unsigned OSF    : 1; // bit 2 OSF
            unsigned RTC    : 2; // bits 3..4 RTC
            unsigned        : 1; // bit 5 unused
            unsigned FUGF   : 1; // bit 6 FUGF
            unsigned FEF    : 1; // bit 7 FEF
            unsigned        : 5; // bits 8..12 unused
            unsigned ST     : 1; // bit 13 ST
            unsigned TTC    : 3; // bits 14..16 TTC
            unsigned        : 3; // bits 17..19 unused
            unsigned FTF    : 1; // bit 20 FTF
            unsigned TSF    : 1; // bit 21 TSF
            unsigned        : 2; // bits 22..23 unused
            unsigned DFRF   : 1; // bit 24 DFRF
            unsigned RSF    : 1; // bit 25 RSF
            unsigned DTCEFD : 1; // bit 26 DTCEFD
            unsigned        : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned SR_POS = 1;
        static constexpr unsigned SR_MASK = 0x00000002;
        static constexpr unsigned SR(unsigned value) { return (value << 1); }
        static constexpr unsigned OSF_POS = 2;
        static constexpr unsigned OSF_MASK = 0x00000004;
        static constexpr unsigned OSF(unsigned value) { return (value << 2); }
        static constexpr unsigned RTC_POS = 3;
        static constexpr unsigned RTC_MASK = 0x00000018;
        static constexpr unsigned RTC(unsigned value) { return (value << 3); }
        static constexpr unsigned FUGF_POS = 6;
        static constexpr unsigned FUGF_MASK = 0x00000040;
        static constexpr unsigned FUGF(unsigned value) { return (value << 6); }
        static constexpr unsigned FEF_POS = 7;
        static constexpr unsigned FEF_MASK = 0x00000080;
        static constexpr unsigned FEF(unsigned value) { return (value << 7); }
        static constexpr unsigned ST_POS = 13;
        static constexpr unsigned ST_MASK = 0x00002000;
        static constexpr unsigned ST(unsigned value) { return (value << 13); }
        static constexpr unsigned TTC_POS = 14;
        static constexpr unsigned TTC_MASK = 0x0001c000;
        static constexpr unsigned TTC(unsigned value) { return (value << 14); }
        static constexpr unsigned FTF_POS = 20;
        static constexpr unsigned FTF_MASK = 0x00100000;
        static constexpr unsigned FTF(unsigned value) { return (value << 20); }
        static constexpr unsigned TSF_POS = 21;
        static constexpr unsigned TSF_MASK = 0x00200000;
        static constexpr unsigned TSF(unsigned value) { return (value << 21); }
        static constexpr unsigned DFRF_POS = 24;
        static constexpr unsigned DFRF_MASK = 0x01000000;
        static constexpr unsigned DFRF(unsigned value) { return (value << 24); }
        static constexpr unsigned RSF_POS = 25;
        static constexpr unsigned RSF_MASK = 0x02000000;
        static constexpr unsigned RSF(unsigned value) { return (value << 25); }
        static constexpr unsigned DTCEFD_POS = 26;
        static constexpr unsigned DTCEFD_MASK = 0x04000000;
        static constexpr unsigned DTCEFD(unsigned value) { return (value << 26); }
    } DMAOMR;

    volatile union DMAIER_T // DMAIER: Ethernet DMA interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMAIER_BIT_T
        {
            unsigned TIE   : 1; // bit 0 TIE
            unsigned TPSIE : 1; // bit 1 TPSIE
            unsigned TBUIE : 1; // bit 2 TBUIE
            unsigned TJTIE : 1; // bit 3 TJTIE
            unsigned ROIE  : 1; // bit 4 ROIE
            unsigned TUIE  : 1; // bit 5 TUIE
            unsigned RIE   : 1; // bit 6 RIE
            unsigned RBUIE : 1; // bit 7 RBUIE
            unsigned RPSIE : 1; // bit 8 RPSIE
            unsigned RWTIE : 1; // bit 9 RWTIE
            unsigned ETIE  : 1; // bit 10 ETIE
            unsigned       : 2; // bits 11..12 unused
            unsigned FBEIE : 1; // bit 13 FBEIE
            unsigned ERIE  : 1; // bit 14 ERIE
            unsigned AISE  : 1; // bit 15 AISE
            unsigned NISE  : 1; // bit 16 NISE
            unsigned       : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned TIE_POS = 0;
        static constexpr unsigned TIE_MASK = 0x00000001;
        static constexpr unsigned TIE(unsigned value) { return (value << 0); }
        static constexpr unsigned TPSIE_POS = 1;
        static constexpr unsigned TPSIE_MASK = 0x00000002;
        static constexpr unsigned TPSIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TBUIE_POS = 2;
        static constexpr unsigned TBUIE_MASK = 0x00000004;
        static constexpr unsigned TBUIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TJTIE_POS = 3;
        static constexpr unsigned TJTIE_MASK = 0x00000008;
        static constexpr unsigned TJTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned ROIE_POS = 4;
        static constexpr unsigned ROIE_MASK = 0x00000010;
        static constexpr unsigned ROIE(unsigned value) { return (value << 4); }
        static constexpr unsigned TUIE_POS = 5;
        static constexpr unsigned TUIE_MASK = 0x00000020;
        static constexpr unsigned TUIE(unsigned value) { return (value << 5); }
        static constexpr unsigned RIE_POS = 6;
        static constexpr unsigned RIE_MASK = 0x00000040;
        static constexpr unsigned RIE(unsigned value) { return (value << 6); }
        static constexpr unsigned RBUIE_POS = 7;
        static constexpr unsigned RBUIE_MASK = 0x00000080;
        static constexpr unsigned RBUIE(unsigned value) { return (value << 7); }
        static constexpr unsigned RPSIE_POS = 8;
        static constexpr unsigned RPSIE_MASK = 0x00000100;
        static constexpr unsigned RPSIE(unsigned value) { return (value << 8); }
        static constexpr unsigned RWTIE_POS = 9;
        static constexpr unsigned RWTIE_MASK = 0x00000200;
        static constexpr unsigned RWTIE(unsigned value) { return (value << 9); }
        static constexpr unsigned ETIE_POS = 10;
        static constexpr unsigned ETIE_MASK = 0x00000400;
        static constexpr unsigned ETIE(unsigned value) { return (value << 10); }
        static constexpr unsigned FBEIE_POS = 13;
        static constexpr unsigned FBEIE_MASK = 0x00002000;
        static constexpr unsigned FBEIE(unsigned value) { return (value << 13); }
        static constexpr unsigned ERIE_POS = 14;
        static constexpr unsigned ERIE_MASK = 0x00004000;
        static constexpr unsigned ERIE(unsigned value) { return (value << 14); }
        static constexpr unsigned AISE_POS = 15;
        static constexpr unsigned AISE_MASK = 0x00008000;
        static constexpr unsigned AISE(unsigned value) { return (value << 15); }
        static constexpr unsigned NISE_POS = 16;
        static constexpr unsigned NISE_MASK = 0x00010000;
        static constexpr unsigned NISE(unsigned value) { return (value << 16); }
    } DMAIER;

    volatile union DMAMFBOCR_T // DMAMFBOCR: Ethernet DMA missed frame and buffer overflow counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMAMFBOCR_BIT_T
        {
            unsigned MFC  : 16; // bits 0..15 MFC
            unsigned OMFC : 1; // bit 16 OMFC
            unsigned MFA  : 11; // bits 17..27 MFA
            unsigned OFOC : 1; // bit 28 OFOC
            unsigned      : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned MFC_POS = 0;
        static constexpr unsigned MFC_MASK = 0x0000ffff;
        static constexpr unsigned MFC(unsigned value) { return (value << 0); }
        static constexpr unsigned OMFC_POS = 16;
        static constexpr unsigned OMFC_MASK = 0x00010000;
        static constexpr unsigned OMFC(unsigned value) { return (value << 16); }
        static constexpr unsigned MFA_POS = 17;
        static constexpr unsigned MFA_MASK = 0x0ffe0000;
        static constexpr unsigned MFA(unsigned value) { return (value << 17); }
        static constexpr unsigned OFOC_POS = 28;
        static constexpr unsigned OFOC_MASK = 0x10000000;
        static constexpr unsigned OFOC(unsigned value) { return (value << 28); }
    } DMAMFBOCR;

    volatile union DMARSWTR_T // DMARSWTR: Ethernet DMA receive status watchdog timer register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMARSWTR_BIT_T
        {
            unsigned RSWTC : 8; // bits 0..7 RSWTC
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned RSWTC_POS = 0;
        static constexpr unsigned RSWTC_MASK = 0x000000ff;
        static constexpr unsigned RSWTC(unsigned value) { return (value << 0); }
    } DMARSWTR;

    uint8_t Reserved1[32];

    volatile union DMACHTDR_T // DMACHTDR: Ethernet DMA current host transmit descriptor register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMACHTDR_BIT_T
        {
            unsigned HTDAP : 32; // bits 0..31 HTDAP    
        } bit;
    
        static constexpr unsigned HTDAP_POS = 0;
        static constexpr unsigned HTDAP_MASK = 0xffffffff;
        static constexpr unsigned HTDAP(unsigned value) { return (value << 0); }
    } DMACHTDR;

    volatile union DMACHRDR_T // DMACHRDR: Ethernet DMA current host receive descriptor register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMACHRDR_BIT_T
        {
            unsigned HRDAP : 32; // bits 0..31 HRDAP    
        } bit;
    
        static constexpr unsigned HRDAP_POS = 0;
        static constexpr unsigned HRDAP_MASK = 0xffffffff;
        static constexpr unsigned HRDAP(unsigned value) { return (value << 0); }
    } DMACHRDR;

    volatile union DMACHTBAR_T // DMACHTBAR: Ethernet DMA current host transmit buffer address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMACHTBAR_BIT_T
        {
            unsigned HTBAP : 32; // bits 0..31 HTBAP    
        } bit;
    
        static constexpr unsigned HTBAP_POS = 0;
        static constexpr unsigned HTBAP_MASK = 0xffffffff;
        static constexpr unsigned HTBAP(unsigned value) { return (value << 0); }
    } DMACHTBAR;

    volatile union DMACHRBAR_T // DMACHRBAR: Ethernet DMA current host receive buffer address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMACHRBAR_BIT_T
        {
            unsigned HRBAP : 32; // bits 0..31 HRBAP    
        } bit;
    
        static constexpr unsigned HRBAP_POS = 0;
        static constexpr unsigned HRBAP_MASK = 0xffffffff;
        static constexpr unsigned HRBAP(unsigned value) { return (value << 0); }
    } DMACHRBAR;

}; // struct Ethernet_DMA_T

static_assert(sizeof(Ethernet_DMA_T) == Ethernet_DMA_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp