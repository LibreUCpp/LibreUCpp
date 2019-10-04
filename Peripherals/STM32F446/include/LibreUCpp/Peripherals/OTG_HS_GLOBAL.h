#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) OTG_HS_GLOBAL_T
{
    static constexpr size_t INSTANCE_SIZE = 304;
    static constexpr size_t PADDED_INSTANCE_SIZE = 304;
    static constexpr intptr_t BASE_ADDRESS = 0x40040000;

    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GOTGCTL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GOTGINT = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GAHBCFG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GUSBCFG = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GRSTCTL = 0x10;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GINTSTS = 0x14;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GINTMSK = 0x18;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GRXSTSR_Host = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GRXSTSP_Host = 0x20;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GRXFSIZ = 0x24;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GNPTXFSIZ_Host = 0x28;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GNPTXSTS = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_GCCFG = 0x38;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_CID = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HPTXFSIZ = 0x100;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTXF1 = 0x104;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTXF2 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTXF3 = 0x11c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTXF4 = 0x120;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTXF5 = 0x124;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTXF6 = 0x128;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTXF7 = 0x12c;

    volatile union OTG_HS_GOTGCTL_T // OTG_HS_GOTGCTL: OTG_HS control and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GOTGCTL_BIT_T
        {
            unsigned SRQSCS  : 1; // bit 0 Session request success
            unsigned SRQ     : 1; // bit 1 Session request
            unsigned         : 6; // bits 2..7 unused
            unsigned HNGSCS  : 1; // bit 8 Host negotiation success
            unsigned HNPRQ   : 1; // bit 9 HNP request
            unsigned HSHNPEN : 1; // bit 10 Host set HNP enable
            unsigned DHNPEN  : 1; // bit 11 Device HNP enabled
            unsigned         : 4; // bits 12..15 unused
            unsigned CIDSTS  : 1; // bit 16 Connector ID status
            unsigned DBCT    : 1; // bit 17 Long/short debounce time
            unsigned ASVLD   : 1; // bit 18 A-session valid
            unsigned BSVLD   : 1; // bit 19 B-session valid
            unsigned         : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned SRQSCS_POS = 0;
        static constexpr unsigned SRQSCS_MASK = 0x00000001;
        static constexpr unsigned SRQSCS(unsigned value) { return (value << 0); }
        static constexpr unsigned SRQ_POS = 1;
        static constexpr unsigned SRQ_MASK = 0x00000002;
        static constexpr unsigned SRQ(unsigned value) { return (value << 1); }
        static constexpr unsigned HNGSCS_POS = 8;
        static constexpr unsigned HNGSCS_MASK = 0x00000100;
        static constexpr unsigned HNGSCS(unsigned value) { return (value << 8); }
        static constexpr unsigned HNPRQ_POS = 9;
        static constexpr unsigned HNPRQ_MASK = 0x00000200;
        static constexpr unsigned HNPRQ(unsigned value) { return (value << 9); }
        static constexpr unsigned HSHNPEN_POS = 10;
        static constexpr unsigned HSHNPEN_MASK = 0x00000400;
        static constexpr unsigned HSHNPEN(unsigned value) { return (value << 10); }
        static constexpr unsigned DHNPEN_POS = 11;
        static constexpr unsigned DHNPEN_MASK = 0x00000800;
        static constexpr unsigned DHNPEN(unsigned value) { return (value << 11); }
        static constexpr unsigned CIDSTS_POS = 16;
        static constexpr unsigned CIDSTS_MASK = 0x00010000;
        static constexpr unsigned CIDSTS(unsigned value) { return (value << 16); }
        static constexpr unsigned DBCT_POS = 17;
        static constexpr unsigned DBCT_MASK = 0x00020000;
        static constexpr unsigned DBCT(unsigned value) { return (value << 17); }
        static constexpr unsigned ASVLD_POS = 18;
        static constexpr unsigned ASVLD_MASK = 0x00040000;
        static constexpr unsigned ASVLD(unsigned value) { return (value << 18); }
        static constexpr unsigned BSVLD_POS = 19;
        static constexpr unsigned BSVLD_MASK = 0x00080000;
        static constexpr unsigned BSVLD(unsigned value) { return (value << 19); }
    } OTG_HS_GOTGCTL;

    volatile union OTG_HS_GOTGINT_T // OTG_HS_GOTGINT: OTG_HS interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GOTGINT_BIT_T
        {
            unsigned         : 2; // bits 0..1 unused
            unsigned SEDET   : 1; // bit 2 Session end detected
            unsigned         : 5; // bits 3..7 unused
            unsigned SRSSCHG : 1; // bit 8 Session request success status change
            unsigned HNSSCHG : 1; // bit 9 Host negotiation success status change
            unsigned         : 7; // bits 10..16 unused
            unsigned HNGDET  : 1; // bit 17 Host negotiation detected
            unsigned ADTOCHG : 1; // bit 18 A-device timeout change
            unsigned DBCDNE  : 1; // bit 19 Debounce done
            unsigned         : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned SEDET_POS = 2;
        static constexpr unsigned SEDET_MASK = 0x00000004;
        static constexpr unsigned SEDET(unsigned value) { return (value << 2); }
        static constexpr unsigned SRSSCHG_POS = 8;
        static constexpr unsigned SRSSCHG_MASK = 0x00000100;
        static constexpr unsigned SRSSCHG(unsigned value) { return (value << 8); }
        static constexpr unsigned HNSSCHG_POS = 9;
        static constexpr unsigned HNSSCHG_MASK = 0x00000200;
        static constexpr unsigned HNSSCHG(unsigned value) { return (value << 9); }
        static constexpr unsigned HNGDET_POS = 17;
        static constexpr unsigned HNGDET_MASK = 0x00020000;
        static constexpr unsigned HNGDET(unsigned value) { return (value << 17); }
        static constexpr unsigned ADTOCHG_POS = 18;
        static constexpr unsigned ADTOCHG_MASK = 0x00040000;
        static constexpr unsigned ADTOCHG(unsigned value) { return (value << 18); }
        static constexpr unsigned DBCDNE_POS = 19;
        static constexpr unsigned DBCDNE_MASK = 0x00080000;
        static constexpr unsigned DBCDNE(unsigned value) { return (value << 19); }
    } OTG_HS_GOTGINT;

    volatile union OTG_HS_GAHBCFG_T // OTG_HS_GAHBCFG: OTG_HS AHB configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GAHBCFG_BIT_T
        {
            unsigned GINT     : 1; // bit 0 Global interrupt mask
            unsigned HBSTLEN  : 4; // bits 1..4 Burst length/type
            unsigned DMAEN    : 1; // bit 5 DMA enable
            unsigned          : 1; // bit 6 unused
            unsigned TXFELVL  : 1; // bit 7 TxFIFO empty level
            unsigned PTXFELVL : 1; // bit 8 Periodic TxFIFO empty level
            unsigned          : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned GINT_POS = 0;
        static constexpr unsigned GINT_MASK = 0x00000001;
        static constexpr unsigned GINT(unsigned value) { return (value << 0); }
        static constexpr unsigned HBSTLEN_POS = 1;
        static constexpr unsigned HBSTLEN_MASK = 0x0000001e;
        static constexpr unsigned HBSTLEN(unsigned value) { return (value << 1); }
        static constexpr unsigned DMAEN_POS = 5;
        static constexpr unsigned DMAEN_MASK = 0x00000020;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 5); }
        static constexpr unsigned TXFELVL_POS = 7;
        static constexpr unsigned TXFELVL_MASK = 0x00000080;
        static constexpr unsigned TXFELVL(unsigned value) { return (value << 7); }
        static constexpr unsigned PTXFELVL_POS = 8;
        static constexpr unsigned PTXFELVL_MASK = 0x00000100;
        static constexpr unsigned PTXFELVL(unsigned value) { return (value << 8); }
    } OTG_HS_GAHBCFG;

    volatile union OTG_HS_GUSBCFG_T // OTG_HS_GUSBCFG: OTG_HS USB configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GUSBCFG_BIT_T
        {
            unsigned TOCAL      : 3; // bits 0..2 FS timeout calibration
            unsigned            : 3; // bits 3..5 unused
            unsigned PHYSEL     : 1; // bit 6 USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select
            unsigned            : 1; // bit 7 unused
            unsigned SRPCAP     : 1; // bit 8 SRP-capable
            unsigned HNPCAP     : 1; // bit 9 HNP-capable
            unsigned TRDT       : 4; // bits 10..13 USB turnaround time
            unsigned            : 1; // bit 14 unused
            unsigned PHYLPCS    : 1; // bit 15 PHY Low-power clock select
            unsigned            : 1; // bit 16 unused
            unsigned ULPIFSLS   : 1; // bit 17 ULPI FS/LS select
            unsigned ULPIAR     : 1; // bit 18 ULPI Auto-resume
            unsigned ULPICSM    : 1; // bit 19 ULPI Clock SuspendM
            unsigned ULPIEVBUSD : 1; // bit 20 ULPI External VBUS Drive
            unsigned ULPIEVBUSI : 1; // bit 21 ULPI external VBUS indicator
            unsigned TSDPS      : 1; // bit 22 TermSel DLine pulsing selection
            unsigned PCCI       : 1; // bit 23 Indicator complement
            unsigned PTCI       : 1; // bit 24 Indicator pass through
            unsigned ULPIIPD    : 1; // bit 25 ULPI interface protect disable
            unsigned            : 3; // bits 26..28 unused
            unsigned FHMOD      : 1; // bit 29 Forced host mode
            unsigned FDMOD      : 1; // bit 30 Forced peripheral mode
            unsigned CTXPKT     : 1; // bit 31 Corrupt Tx packet    
        } bit;
    
        static constexpr unsigned TOCAL_POS = 0;
        static constexpr unsigned TOCAL_MASK = 0x00000007;
        static constexpr unsigned TOCAL(unsigned value) { return (value << 0); }
        static constexpr unsigned PHYSEL_POS = 6;
        static constexpr unsigned PHYSEL_MASK = 0x00000040;
        static constexpr unsigned PHYSEL(unsigned value) { return (value << 6); }
        static constexpr unsigned SRPCAP_POS = 8;
        static constexpr unsigned SRPCAP_MASK = 0x00000100;
        static constexpr unsigned SRPCAP(unsigned value) { return (value << 8); }
        static constexpr unsigned HNPCAP_POS = 9;
        static constexpr unsigned HNPCAP_MASK = 0x00000200;
        static constexpr unsigned HNPCAP(unsigned value) { return (value << 9); }
        static constexpr unsigned TRDT_POS = 10;
        static constexpr unsigned TRDT_MASK = 0x00003c00;
        static constexpr unsigned TRDT(unsigned value) { return (value << 10); }
        static constexpr unsigned PHYLPCS_POS = 15;
        static constexpr unsigned PHYLPCS_MASK = 0x00008000;
        static constexpr unsigned PHYLPCS(unsigned value) { return (value << 15); }
        static constexpr unsigned ULPIFSLS_POS = 17;
        static constexpr unsigned ULPIFSLS_MASK = 0x00020000;
        static constexpr unsigned ULPIFSLS(unsigned value) { return (value << 17); }
        static constexpr unsigned ULPIAR_POS = 18;
        static constexpr unsigned ULPIAR_MASK = 0x00040000;
        static constexpr unsigned ULPIAR(unsigned value) { return (value << 18); }
        static constexpr unsigned ULPICSM_POS = 19;
        static constexpr unsigned ULPICSM_MASK = 0x00080000;
        static constexpr unsigned ULPICSM(unsigned value) { return (value << 19); }
        static constexpr unsigned ULPIEVBUSD_POS = 20;
        static constexpr unsigned ULPIEVBUSD_MASK = 0x00100000;
        static constexpr unsigned ULPIEVBUSD(unsigned value) { return (value << 20); }
        static constexpr unsigned ULPIEVBUSI_POS = 21;
        static constexpr unsigned ULPIEVBUSI_MASK = 0x00200000;
        static constexpr unsigned ULPIEVBUSI(unsigned value) { return (value << 21); }
        static constexpr unsigned TSDPS_POS = 22;
        static constexpr unsigned TSDPS_MASK = 0x00400000;
        static constexpr unsigned TSDPS(unsigned value) { return (value << 22); }
        static constexpr unsigned PCCI_POS = 23;
        static constexpr unsigned PCCI_MASK = 0x00800000;
        static constexpr unsigned PCCI(unsigned value) { return (value << 23); }
        static constexpr unsigned PTCI_POS = 24;
        static constexpr unsigned PTCI_MASK = 0x01000000;
        static constexpr unsigned PTCI(unsigned value) { return (value << 24); }
        static constexpr unsigned ULPIIPD_POS = 25;
        static constexpr unsigned ULPIIPD_MASK = 0x02000000;
        static constexpr unsigned ULPIIPD(unsigned value) { return (value << 25); }
        static constexpr unsigned FHMOD_POS = 29;
        static constexpr unsigned FHMOD_MASK = 0x20000000;
        static constexpr unsigned FHMOD(unsigned value) { return (value << 29); }
        static constexpr unsigned FDMOD_POS = 30;
        static constexpr unsigned FDMOD_MASK = 0x40000000;
        static constexpr unsigned FDMOD(unsigned value) { return (value << 30); }
        static constexpr unsigned CTXPKT_POS = 31;
        static constexpr unsigned CTXPKT_MASK = 0x80000000;
        static constexpr unsigned CTXPKT(unsigned value) { return (value << 31); }
    } OTG_HS_GUSBCFG;

    volatile union OTG_HS_GRSTCTL_T // OTG_HS_GRSTCTL: OTG_HS reset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GRSTCTL_BIT_T
        {
            unsigned CSRST   : 1; // bit 0 Core soft reset
            unsigned HSRST   : 1; // bit 1 HCLK soft reset
            unsigned FCRST   : 1; // bit 2 Host frame counter reset
            unsigned         : 1; // bit 3 unused
            unsigned RXFFLSH : 1; // bit 4 RxFIFO flush
            unsigned TXFFLSH : 1; // bit 5 TxFIFO flush
            unsigned TXFNUM  : 5; // bits 6..10 TxFIFO number
            unsigned         : 19; // bits 11..29 unused
            unsigned DMAREQ  : 1; // bit 30 DMA request signal
            unsigned AHBIDL  : 1; // bit 31 AHB master idle    
        } bit;
    
        static constexpr unsigned CSRST_POS = 0;
        static constexpr unsigned CSRST_MASK = 0x00000001;
        static constexpr unsigned CSRST(unsigned value) { return (value << 0); }
        static constexpr unsigned HSRST_POS = 1;
        static constexpr unsigned HSRST_MASK = 0x00000002;
        static constexpr unsigned HSRST(unsigned value) { return (value << 1); }
        static constexpr unsigned FCRST_POS = 2;
        static constexpr unsigned FCRST_MASK = 0x00000004;
        static constexpr unsigned FCRST(unsigned value) { return (value << 2); }
        static constexpr unsigned RXFFLSH_POS = 4;
        static constexpr unsigned RXFFLSH_MASK = 0x00000010;
        static constexpr unsigned RXFFLSH(unsigned value) { return (value << 4); }
        static constexpr unsigned TXFFLSH_POS = 5;
        static constexpr unsigned TXFFLSH_MASK = 0x00000020;
        static constexpr unsigned TXFFLSH(unsigned value) { return (value << 5); }
        static constexpr unsigned TXFNUM_POS = 6;
        static constexpr unsigned TXFNUM_MASK = 0x000007c0;
        static constexpr unsigned TXFNUM(unsigned value) { return (value << 6); }
        static constexpr unsigned DMAREQ_POS = 30;
        static constexpr unsigned DMAREQ_MASK = 0x40000000;
        static constexpr unsigned DMAREQ(unsigned value) { return (value << 30); }
        static constexpr unsigned AHBIDL_POS = 31;
        static constexpr unsigned AHBIDL_MASK = 0x80000000;
        static constexpr unsigned AHBIDL(unsigned value) { return (value << 31); }
    } OTG_HS_GRSTCTL;

    volatile union OTG_HS_GINTSTS_T // OTG_HS_GINTSTS: OTG_HS core interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GINTSTS_BIT_T
        {
            unsigned CMOD              : 1; // bit 0 Current mode of operation
            unsigned MMIS              : 1; // bit 1 Mode mismatch interrupt
            unsigned OTGINT            : 1; // bit 2 OTG interrupt
            unsigned SOF               : 1; // bit 3 Start of frame
            unsigned RXFLVL            : 1; // bit 4 RxFIFO nonempty
            unsigned NPTXFE            : 1; // bit 5 Nonperiodic TxFIFO empty
            unsigned GINAKEFF          : 1; // bit 6 Global IN nonperiodic NAK effective
            unsigned BOUTNAKEFF        : 1; // bit 7 Global OUT NAK effective
            unsigned                   : 2; // bits 8..9 unused
            unsigned ESUSP             : 1; // bit 10 Early suspend
            unsigned USBSUSP           : 1; // bit 11 USB suspend
            unsigned USBRST            : 1; // bit 12 USB reset
            unsigned ENUMDNE           : 1; // bit 13 Enumeration done
            unsigned ISOODRP           : 1; // bit 14 Isochronous OUT packet dropped interrupt
            unsigned EOPF              : 1; // bit 15 End of periodic frame interrupt
            unsigned                   : 2; // bits 16..17 unused
            unsigned IEPINT            : 1; // bit 18 IN endpoint interrupt
            unsigned OEPINT            : 1; // bit 19 OUT endpoint interrupt
            unsigned IISOIXFR          : 1; // bit 20 Incomplete isochronous IN transfer
            unsigned PXFR_INCOMPISOOUT : 1; // bit 21 Incomplete periodic transfer
            unsigned DATAFSUSP         : 1; // bit 22 Data fetch suspended
            unsigned                   : 1; // bit 23 unused
            unsigned HPRTINT           : 1; // bit 24 Host port interrupt
            unsigned HCINT             : 1; // bit 25 Host channels interrupt
            unsigned PTXFE             : 1; // bit 26 Periodic TxFIFO empty
            unsigned                   : 1; // bit 27 unused
            unsigned CIDSCHG           : 1; // bit 28 Connector ID status change
            unsigned DISCINT           : 1; // bit 29 Disconnect detected interrupt
            unsigned SRQINT            : 1; // bit 30 Session request/new session detected interrupt
            unsigned WKUINT            : 1; // bit 31 Resume/remote wakeup detected interrupt    
        } bit;
    
        static constexpr unsigned CMOD_POS = 0;
        static constexpr unsigned CMOD_MASK = 0x00000001;
        static constexpr unsigned CMOD(unsigned value) { return (value << 0); }
        static constexpr unsigned MMIS_POS = 1;
        static constexpr unsigned MMIS_MASK = 0x00000002;
        static constexpr unsigned MMIS(unsigned value) { return (value << 1); }
        static constexpr unsigned OTGINT_POS = 2;
        static constexpr unsigned OTGINT_MASK = 0x00000004;
        static constexpr unsigned OTGINT(unsigned value) { return (value << 2); }
        static constexpr unsigned SOF_POS = 3;
        static constexpr unsigned SOF_MASK = 0x00000008;
        static constexpr unsigned SOF(unsigned value) { return (value << 3); }
        static constexpr unsigned RXFLVL_POS = 4;
        static constexpr unsigned RXFLVL_MASK = 0x00000010;
        static constexpr unsigned RXFLVL(unsigned value) { return (value << 4); }
        static constexpr unsigned NPTXFE_POS = 5;
        static constexpr unsigned NPTXFE_MASK = 0x00000020;
        static constexpr unsigned NPTXFE(unsigned value) { return (value << 5); }
        static constexpr unsigned GINAKEFF_POS = 6;
        static constexpr unsigned GINAKEFF_MASK = 0x00000040;
        static constexpr unsigned GINAKEFF(unsigned value) { return (value << 6); }
        static constexpr unsigned BOUTNAKEFF_POS = 7;
        static constexpr unsigned BOUTNAKEFF_MASK = 0x00000080;
        static constexpr unsigned BOUTNAKEFF(unsigned value) { return (value << 7); }
        static constexpr unsigned ESUSP_POS = 10;
        static constexpr unsigned ESUSP_MASK = 0x00000400;
        static constexpr unsigned ESUSP(unsigned value) { return (value << 10); }
        static constexpr unsigned USBSUSP_POS = 11;
        static constexpr unsigned USBSUSP_MASK = 0x00000800;
        static constexpr unsigned USBSUSP(unsigned value) { return (value << 11); }
        static constexpr unsigned USBRST_POS = 12;
        static constexpr unsigned USBRST_MASK = 0x00001000;
        static constexpr unsigned USBRST(unsigned value) { return (value << 12); }
        static constexpr unsigned ENUMDNE_POS = 13;
        static constexpr unsigned ENUMDNE_MASK = 0x00002000;
        static constexpr unsigned ENUMDNE(unsigned value) { return (value << 13); }
        static constexpr unsigned ISOODRP_POS = 14;
        static constexpr unsigned ISOODRP_MASK = 0x00004000;
        static constexpr unsigned ISOODRP(unsigned value) { return (value << 14); }
        static constexpr unsigned EOPF_POS = 15;
        static constexpr unsigned EOPF_MASK = 0x00008000;
        static constexpr unsigned EOPF(unsigned value) { return (value << 15); }
        static constexpr unsigned IEPINT_POS = 18;
        static constexpr unsigned IEPINT_MASK = 0x00040000;
        static constexpr unsigned IEPINT(unsigned value) { return (value << 18); }
        static constexpr unsigned OEPINT_POS = 19;
        static constexpr unsigned OEPINT_MASK = 0x00080000;
        static constexpr unsigned OEPINT(unsigned value) { return (value << 19); }
        static constexpr unsigned IISOIXFR_POS = 20;
        static constexpr unsigned IISOIXFR_MASK = 0x00100000;
        static constexpr unsigned IISOIXFR(unsigned value) { return (value << 20); }
        static constexpr unsigned PXFR_INCOMPISOOUT_POS = 21;
        static constexpr unsigned PXFR_INCOMPISOOUT_MASK = 0x00200000;
        static constexpr unsigned PXFR_INCOMPISOOUT(unsigned value) { return (value << 21); }
        static constexpr unsigned DATAFSUSP_POS = 22;
        static constexpr unsigned DATAFSUSP_MASK = 0x00400000;
        static constexpr unsigned DATAFSUSP(unsigned value) { return (value << 22); }
        static constexpr unsigned HPRTINT_POS = 24;
        static constexpr unsigned HPRTINT_MASK = 0x01000000;
        static constexpr unsigned HPRTINT(unsigned value) { return (value << 24); }
        static constexpr unsigned HCINT_POS = 25;
        static constexpr unsigned HCINT_MASK = 0x02000000;
        static constexpr unsigned HCINT(unsigned value) { return (value << 25); }
        static constexpr unsigned PTXFE_POS = 26;
        static constexpr unsigned PTXFE_MASK = 0x04000000;
        static constexpr unsigned PTXFE(unsigned value) { return (value << 26); }
        static constexpr unsigned CIDSCHG_POS = 28;
        static constexpr unsigned CIDSCHG_MASK = 0x10000000;
        static constexpr unsigned CIDSCHG(unsigned value) { return (value << 28); }
        static constexpr unsigned DISCINT_POS = 29;
        static constexpr unsigned DISCINT_MASK = 0x20000000;
        static constexpr unsigned DISCINT(unsigned value) { return (value << 29); }
        static constexpr unsigned SRQINT_POS = 30;
        static constexpr unsigned SRQINT_MASK = 0x40000000;
        static constexpr unsigned SRQINT(unsigned value) { return (value << 30); }
        static constexpr unsigned WKUINT_POS = 31;
        static constexpr unsigned WKUINT_MASK = 0x80000000;
        static constexpr unsigned WKUINT(unsigned value) { return (value << 31); }
    } OTG_HS_GINTSTS;

    volatile union OTG_HS_GINTMSK_T // OTG_HS_GINTMSK: OTG_HS interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GINTMSK_BIT_T
        {
            unsigned                 : 1; // bit 0 unused
            unsigned MMISM           : 1; // bit 1 Mode mismatch interrupt mask
            unsigned OTGINT          : 1; // bit 2 OTG interrupt mask
            unsigned SOFM            : 1; // bit 3 Start of frame mask
            unsigned RXFLVLM         : 1; // bit 4 Receive FIFO nonempty mask
            unsigned NPTXFEM         : 1; // bit 5 Nonperiodic TxFIFO empty mask
            unsigned GINAKEFFM       : 1; // bit 6 Global nonperiodic IN NAK effective mask
            unsigned GONAKEFFM       : 1; // bit 7 Global OUT NAK effective mask
            unsigned                 : 2; // bits 8..9 unused
            unsigned ESUSPM          : 1; // bit 10 Early suspend mask
            unsigned USBSUSPM        : 1; // bit 11 USB suspend mask
            unsigned USBRST          : 1; // bit 12 USB reset mask
            unsigned ENUMDNEM        : 1; // bit 13 Enumeration done mask
            unsigned ISOODRPM        : 1; // bit 14 Isochronous OUT packet dropped interrupt mask
            unsigned EOPFM           : 1; // bit 15 End of periodic frame interrupt mask
            unsigned                 : 1; // bit 16 unused
            unsigned EPMISM          : 1; // bit 17 Endpoint mismatch interrupt mask
            unsigned IEPINT          : 1; // bit 18 IN endpoints interrupt mask
            unsigned OEPINT          : 1; // bit 19 OUT endpoints interrupt mask
            unsigned IISOIXFRM       : 1; // bit 20 Incomplete isochronous IN transfer mask
            unsigned PXFRM_IISOOXFRM : 1; // bit 21 Incomplete periodic transfer mask
            unsigned FSUSPM          : 1; // bit 22 Data fetch suspended mask
            unsigned                 : 1; // bit 23 unused
            unsigned PRTIM           : 1; // bit 24 Host port interrupt mask
            unsigned HCIM            : 1; // bit 25 Host channels interrupt mask
            unsigned PTXFEM          : 1; // bit 26 Periodic TxFIFO empty mask
            unsigned                 : 1; // bit 27 unused
            unsigned CIDSCHGM        : 1; // bit 28 Connector ID status change mask
            unsigned DISCINT         : 1; // bit 29 Disconnect detected interrupt mask
            unsigned SRQIM           : 1; // bit 30 Session request/new session detected interrupt mask
            unsigned WUIM            : 1; // bit 31 Resume/remote wakeup detected interrupt mask    
        } bit;
    
        static constexpr unsigned MMISM_POS = 1;
        static constexpr unsigned MMISM_MASK = 0x00000002;
        static constexpr unsigned MMISM(unsigned value) { return (value << 1); }
        static constexpr unsigned OTGINT_POS = 2;
        static constexpr unsigned OTGINT_MASK = 0x00000004;
        static constexpr unsigned OTGINT(unsigned value) { return (value << 2); }
        static constexpr unsigned SOFM_POS = 3;
        static constexpr unsigned SOFM_MASK = 0x00000008;
        static constexpr unsigned SOFM(unsigned value) { return (value << 3); }
        static constexpr unsigned RXFLVLM_POS = 4;
        static constexpr unsigned RXFLVLM_MASK = 0x00000010;
        static constexpr unsigned RXFLVLM(unsigned value) { return (value << 4); }
        static constexpr unsigned NPTXFEM_POS = 5;
        static constexpr unsigned NPTXFEM_MASK = 0x00000020;
        static constexpr unsigned NPTXFEM(unsigned value) { return (value << 5); }
        static constexpr unsigned GINAKEFFM_POS = 6;
        static constexpr unsigned GINAKEFFM_MASK = 0x00000040;
        static constexpr unsigned GINAKEFFM(unsigned value) { return (value << 6); }
        static constexpr unsigned GONAKEFFM_POS = 7;
        static constexpr unsigned GONAKEFFM_MASK = 0x00000080;
        static constexpr unsigned GONAKEFFM(unsigned value) { return (value << 7); }
        static constexpr unsigned ESUSPM_POS = 10;
        static constexpr unsigned ESUSPM_MASK = 0x00000400;
        static constexpr unsigned ESUSPM(unsigned value) { return (value << 10); }
        static constexpr unsigned USBSUSPM_POS = 11;
        static constexpr unsigned USBSUSPM_MASK = 0x00000800;
        static constexpr unsigned USBSUSPM(unsigned value) { return (value << 11); }
        static constexpr unsigned USBRST_POS = 12;
        static constexpr unsigned USBRST_MASK = 0x00001000;
        static constexpr unsigned USBRST(unsigned value) { return (value << 12); }
        static constexpr unsigned ENUMDNEM_POS = 13;
        static constexpr unsigned ENUMDNEM_MASK = 0x00002000;
        static constexpr unsigned ENUMDNEM(unsigned value) { return (value << 13); }
        static constexpr unsigned ISOODRPM_POS = 14;
        static constexpr unsigned ISOODRPM_MASK = 0x00004000;
        static constexpr unsigned ISOODRPM(unsigned value) { return (value << 14); }
        static constexpr unsigned EOPFM_POS = 15;
        static constexpr unsigned EOPFM_MASK = 0x00008000;
        static constexpr unsigned EOPFM(unsigned value) { return (value << 15); }
        static constexpr unsigned EPMISM_POS = 17;
        static constexpr unsigned EPMISM_MASK = 0x00020000;
        static constexpr unsigned EPMISM(unsigned value) { return (value << 17); }
        static constexpr unsigned IEPINT_POS = 18;
        static constexpr unsigned IEPINT_MASK = 0x00040000;
        static constexpr unsigned IEPINT(unsigned value) { return (value << 18); }
        static constexpr unsigned OEPINT_POS = 19;
        static constexpr unsigned OEPINT_MASK = 0x00080000;
        static constexpr unsigned OEPINT(unsigned value) { return (value << 19); }
        static constexpr unsigned IISOIXFRM_POS = 20;
        static constexpr unsigned IISOIXFRM_MASK = 0x00100000;
        static constexpr unsigned IISOIXFRM(unsigned value) { return (value << 20); }
        static constexpr unsigned PXFRM_IISOOXFRM_POS = 21;
        static constexpr unsigned PXFRM_IISOOXFRM_MASK = 0x00200000;
        static constexpr unsigned PXFRM_IISOOXFRM(unsigned value) { return (value << 21); }
        static constexpr unsigned FSUSPM_POS = 22;
        static constexpr unsigned FSUSPM_MASK = 0x00400000;
        static constexpr unsigned FSUSPM(unsigned value) { return (value << 22); }
        static constexpr unsigned PRTIM_POS = 24;
        static constexpr unsigned PRTIM_MASK = 0x01000000;
        static constexpr unsigned PRTIM(unsigned value) { return (value << 24); }
        static constexpr unsigned HCIM_POS = 25;
        static constexpr unsigned HCIM_MASK = 0x02000000;
        static constexpr unsigned HCIM(unsigned value) { return (value << 25); }
        static constexpr unsigned PTXFEM_POS = 26;
        static constexpr unsigned PTXFEM_MASK = 0x04000000;
        static constexpr unsigned PTXFEM(unsigned value) { return (value << 26); }
        static constexpr unsigned CIDSCHGM_POS = 28;
        static constexpr unsigned CIDSCHGM_MASK = 0x10000000;
        static constexpr unsigned CIDSCHGM(unsigned value) { return (value << 28); }
        static constexpr unsigned DISCINT_POS = 29;
        static constexpr unsigned DISCINT_MASK = 0x20000000;
        static constexpr unsigned DISCINT(unsigned value) { return (value << 29); }
        static constexpr unsigned SRQIM_POS = 30;
        static constexpr unsigned SRQIM_MASK = 0x40000000;
        static constexpr unsigned SRQIM(unsigned value) { return (value << 30); }
        static constexpr unsigned WUIM_POS = 31;
        static constexpr unsigned WUIM_MASK = 0x80000000;
        static constexpr unsigned WUIM(unsigned value) { return (value << 31); }
    } OTG_HS_GINTMSK;

    volatile union OTG_HS_GRXSTSR_Host_T // OTG_HS_GRXSTSR_Host: OTG_HS Receive status debug read register (host mode) 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GRXSTSR_Host_BIT_T
        {
            unsigned CHNUM  : 4; // bits 0..3 Channel number
            unsigned BCNT   : 11; // bits 4..14 Byte count
            unsigned DPID   : 2; // bits 15..16 Data PID
            unsigned PKTSTS : 4; // bits 17..20 Packet status
            unsigned        : 11; // bits 21..31 unused    
        } bit;
    
        static constexpr unsigned CHNUM_POS = 0;
        static constexpr unsigned CHNUM_MASK = 0x0000000f;
        static constexpr unsigned CHNUM(unsigned value) { return (value << 0); }
        static constexpr unsigned BCNT_POS = 4;
        static constexpr unsigned BCNT_MASK = 0x00007ff0;
        static constexpr unsigned BCNT(unsigned value) { return (value << 4); }
        static constexpr unsigned DPID_POS = 15;
        static constexpr unsigned DPID_MASK = 0x00018000;
        static constexpr unsigned DPID(unsigned value) { return (value << 15); }
        static constexpr unsigned PKTSTS_POS = 17;
        static constexpr unsigned PKTSTS_MASK = 0x001e0000;
        static constexpr unsigned PKTSTS(unsigned value) { return (value << 17); }
    } OTG_HS_GRXSTSR_Host;

    volatile union OTG_HS_GRXSTSP_Host_T // OTG_HS_GRXSTSP_Host: OTG_HS status read and pop register (host mode) 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GRXSTSP_Host_BIT_T
        {
            unsigned CHNUM  : 4; // bits 0..3 Channel number
            unsigned BCNT   : 11; // bits 4..14 Byte count
            unsigned DPID   : 2; // bits 15..16 Data PID
            unsigned PKTSTS : 4; // bits 17..20 Packet status
            unsigned        : 11; // bits 21..31 unused    
        } bit;
    
        static constexpr unsigned CHNUM_POS = 0;
        static constexpr unsigned CHNUM_MASK = 0x0000000f;
        static constexpr unsigned CHNUM(unsigned value) { return (value << 0); }
        static constexpr unsigned BCNT_POS = 4;
        static constexpr unsigned BCNT_MASK = 0x00007ff0;
        static constexpr unsigned BCNT(unsigned value) { return (value << 4); }
        static constexpr unsigned DPID_POS = 15;
        static constexpr unsigned DPID_MASK = 0x00018000;
        static constexpr unsigned DPID(unsigned value) { return (value << 15); }
        static constexpr unsigned PKTSTS_POS = 17;
        static constexpr unsigned PKTSTS_MASK = 0x001e0000;
        static constexpr unsigned PKTSTS(unsigned value) { return (value << 17); }
    } OTG_HS_GRXSTSP_Host;

    volatile union OTG_HS_GRXFSIZ_T // OTG_HS_GRXFSIZ: OTG_HS Receive FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GRXFSIZ_BIT_T
        {
            unsigned RXFD : 16; // bits 0..15 RxFIFO depth
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned RXFD_POS = 0;
        static constexpr unsigned RXFD_MASK = 0x0000ffff;
        static constexpr unsigned RXFD(unsigned value) { return (value << 0); }
    } OTG_HS_GRXFSIZ;

    volatile union OTG_HS_GNPTXFSIZ_Host_T // OTG_HS_GNPTXFSIZ_Host: OTG_HS nonperiodic transmit FIFO size register (host mode) 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GNPTXFSIZ_Host_BIT_T
        {
            unsigned NPTXFSA : 16; // bits 0..15 Nonperiodic transmit RAM start address
            unsigned NPTXFD  : 16; // bits 16..31 Nonperiodic TxFIFO depth    
        } bit;
    
        static constexpr unsigned NPTXFSA_POS = 0;
        static constexpr unsigned NPTXFSA_MASK = 0x0000ffff;
        static constexpr unsigned NPTXFSA(unsigned value) { return (value << 0); }
        static constexpr unsigned NPTXFD_POS = 16;
        static constexpr unsigned NPTXFD_MASK = 0xffff0000;
        static constexpr unsigned NPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_GNPTXFSIZ_Host;

    volatile union OTG_HS_GNPTXSTS_T // OTG_HS_GNPTXSTS: OTG_HS nonperiodic transmit FIFO/queue status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GNPTXSTS_BIT_T
        {
            unsigned NPTXFSAV : 16; // bits 0..15 Nonperiodic TxFIFO space available
            unsigned NPTQXSAV : 8; // bits 16..23 Nonperiodic transmit request queue space available
            unsigned NPTXQTOP : 7; // bits 24..30 Top of the nonperiodic transmit request queue
            unsigned          : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned NPTXFSAV_POS = 0;
        static constexpr unsigned NPTXFSAV_MASK = 0x0000ffff;
        static constexpr unsigned NPTXFSAV(unsigned value) { return (value << 0); }
        static constexpr unsigned NPTQXSAV_POS = 16;
        static constexpr unsigned NPTQXSAV_MASK = 0x00ff0000;
        static constexpr unsigned NPTQXSAV(unsigned value) { return (value << 16); }
        static constexpr unsigned NPTXQTOP_POS = 24;
        static constexpr unsigned NPTXQTOP_MASK = 0x7f000000;
        static constexpr unsigned NPTXQTOP(unsigned value) { return (value << 24); }
    } OTG_HS_GNPTXSTS;

    uint8_t Reserved1[8];

    volatile union OTG_HS_GCCFG_T // OTG_HS_GCCFG: OTG_HS general core configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_GCCFG_BIT_T
        {
            unsigned            : 16; // bits 0..15 unused
            unsigned PWRDWN     : 1; // bit 16 Power down
            unsigned I2CPADEN   : 1; // bit 17 Enable I2C bus connection for the external I2C PHY interface
            unsigned VBUSASEN   : 1; // bit 18 Enable the VBUS sensing device
            unsigned VBUSBSEN   : 1; // bit 19 Enable the VBUS sensing device
            unsigned SOFOUTEN   : 1; // bit 20 SOF output enable
            unsigned NOVBUSSENS : 1; // bit 21 VBUS sensing disable option
            unsigned            : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned PWRDWN_POS = 16;
        static constexpr unsigned PWRDWN_MASK = 0x00010000;
        static constexpr unsigned PWRDWN(unsigned value) { return (value << 16); }
        static constexpr unsigned I2CPADEN_POS = 17;
        static constexpr unsigned I2CPADEN_MASK = 0x00020000;
        static constexpr unsigned I2CPADEN(unsigned value) { return (value << 17); }
        static constexpr unsigned VBUSASEN_POS = 18;
        static constexpr unsigned VBUSASEN_MASK = 0x00040000;
        static constexpr unsigned VBUSASEN(unsigned value) { return (value << 18); }
        static constexpr unsigned VBUSBSEN_POS = 19;
        static constexpr unsigned VBUSBSEN_MASK = 0x00080000;
        static constexpr unsigned VBUSBSEN(unsigned value) { return (value << 19); }
        static constexpr unsigned SOFOUTEN_POS = 20;
        static constexpr unsigned SOFOUTEN_MASK = 0x00100000;
        static constexpr unsigned SOFOUTEN(unsigned value) { return (value << 20); }
        static constexpr unsigned NOVBUSSENS_POS = 21;
        static constexpr unsigned NOVBUSSENS_MASK = 0x00200000;
        static constexpr unsigned NOVBUSSENS(unsigned value) { return (value << 21); }
    } OTG_HS_GCCFG;

    volatile union OTG_HS_CID_T // OTG_HS_CID: OTG_HS core ID register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_CID_BIT_T
        {
            unsigned PRODUCT_ID : 32; // bits 0..31 Product ID field    
        } bit;
    
        static constexpr unsigned PRODUCT_ID_POS = 0;
        static constexpr unsigned PRODUCT_ID_MASK = 0xffffffff;
        static constexpr unsigned PRODUCT_ID(unsigned value) { return (value << 0); }
    } OTG_HS_CID;

    uint8_t Reserved2[192];

    volatile union OTG_HS_HPTXFSIZ_T // OTG_HS_HPTXFSIZ: OTG_HS Host periodic transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HPTXFSIZ_BIT_T
        {
            unsigned PTXSA : 16; // bits 0..15 Host periodic TxFIFO start address
            unsigned PTXFD : 16; // bits 16..31 Host periodic TxFIFO depth    
        } bit;
    
        static constexpr unsigned PTXSA_POS = 0;
        static constexpr unsigned PTXSA_MASK = 0x0000ffff;
        static constexpr unsigned PTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned PTXFD_POS = 16;
        static constexpr unsigned PTXFD_MASK = 0xffff0000;
        static constexpr unsigned PTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_HPTXFSIZ;

    volatile union OTG_HS_DIEPTXF1_T // OTG_HS_DIEPTXF1: OTG_HS device IN endpoint transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTXF1_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFOx transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_DIEPTXF1;

    volatile union OTG_HS_DIEPTXF2_T // OTG_HS_DIEPTXF2: OTG_HS device IN endpoint transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTXF2_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFOx transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_DIEPTXF2;

    uint8_t Reserved3[16];

    volatile union OTG_HS_DIEPTXF3_T // OTG_HS_DIEPTXF3: OTG_HS device IN endpoint transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTXF3_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFOx transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_DIEPTXF3;

    volatile union OTG_HS_DIEPTXF4_T // OTG_HS_DIEPTXF4: OTG_HS device IN endpoint transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTXF4_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFOx transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_DIEPTXF4;

    volatile union OTG_HS_DIEPTXF5_T // OTG_HS_DIEPTXF5: OTG_HS device IN endpoint transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTXF5_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFOx transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_DIEPTXF5;

    volatile union OTG_HS_DIEPTXF6_T // OTG_HS_DIEPTXF6: OTG_HS device IN endpoint transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTXF6_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFOx transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_DIEPTXF6;

    volatile union OTG_HS_DIEPTXF7_T // OTG_HS_DIEPTXF7: OTG_HS device IN endpoint transmit FIFO size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTXF7_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFOx transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } OTG_HS_DIEPTXF7;

}; // struct OTG_HS_GLOBAL_T

static_assert(sizeof(OTG_HS_GLOBAL_T) == OTG_HS_GLOBAL_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp