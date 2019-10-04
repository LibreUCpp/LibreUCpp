#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) USB_OTG_GLOBAL_T
{
    static constexpr size_t INSTANCE_SIZE = 272;
    static constexpr size_t PADDED_INSTANCE_SIZE = 272;
    static constexpr intptr_t BASE_ADDRESS = 0x50000000;

    static constexpr intptr_t ADDR_OFFSET_FS_GOTGCTL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_FS_GOTGINT = 0x04;
    static constexpr intptr_t ADDR_OFFSET_FS_GAHBCFG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_FS_GUSBCFG = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_FS_GRSTCTL = 0x10;
    static constexpr intptr_t ADDR_OFFSET_FS_GINTSTS = 0x14;
    static constexpr intptr_t ADDR_OFFSET_FS_GINTMSK = 0x18;
    static constexpr intptr_t ADDR_OFFSET_FS_GRXSTSR_Device = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_FS_GRXFSIZ = 0x24;
    static constexpr intptr_t ADDR_OFFSET_FS_GNPTXFSIZ_Device = 0x28;
    static constexpr intptr_t ADDR_OFFSET_FS_GNPTXSTS = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_FS_GCCFG = 0x38;
    static constexpr intptr_t ADDR_OFFSET_FS_CID = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_FS_HPTXFSIZ = 0x100;
    static constexpr intptr_t ADDR_OFFSET_FS_DIEPTXF1 = 0x104;
    static constexpr intptr_t ADDR_OFFSET_FS_DIEPTXF2 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_FS_DIEPTXF3 = 0x10c;

    volatile union FS_GOTGCTL_T // FS_GOTGCTL: OTG_FS control and status register (OTG_FS_GOTGCTL) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GOTGCTL_BIT_T
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
    } FS_GOTGCTL;

    volatile union FS_GOTGINT_T // FS_GOTGINT: OTG_FS interrupt register (OTG_FS_GOTGINT) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GOTGINT_BIT_T
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
    } FS_GOTGINT;

    volatile union FS_GAHBCFG_T // FS_GAHBCFG: OTG_FS AHB configuration register (OTG_FS_GAHBCFG) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GAHBCFG_BIT_T
        {
            unsigned GINT     : 1; // bit 0 Global interrupt mask
            unsigned          : 6; // bits 1..6 unused
            unsigned TXFELVL  : 1; // bit 7 TxFIFO empty level
            unsigned PTXFELVL : 1; // bit 8 Periodic TxFIFO empty level
            unsigned          : 23; // bits 9..31 unused    
        } bit;
    
        static constexpr unsigned GINT_POS = 0;
        static constexpr unsigned GINT_MASK = 0x00000001;
        static constexpr unsigned GINT(unsigned value) { return (value << 0); }
        static constexpr unsigned TXFELVL_POS = 7;
        static constexpr unsigned TXFELVL_MASK = 0x00000080;
        static constexpr unsigned TXFELVL(unsigned value) { return (value << 7); }
        static constexpr unsigned PTXFELVL_POS = 8;
        static constexpr unsigned PTXFELVL_MASK = 0x00000100;
        static constexpr unsigned PTXFELVL(unsigned value) { return (value << 8); }
    } FS_GAHBCFG;

    volatile union FS_GUSBCFG_T // FS_GUSBCFG: OTG_FS USB configuration register (OTG_FS_GUSBCFG) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GUSBCFG_BIT_T
        {
            unsigned TOCAL  : 3; // bits 0..2 FS timeout calibration
            unsigned        : 4; // bits 3..6 unused
            unsigned PHYSEL : 1; // bit 7 Full Speed serial transceiver select
            unsigned SRPCAP : 1; // bit 8 SRP-capable
            unsigned HNPCAP : 1; // bit 9 HNP-capable
            unsigned TRDT   : 4; // bits 10..13 USB turnaround time
            unsigned        : 15; // bits 14..28 unused
            unsigned FHMOD  : 1; // bit 29 Force host mode
            unsigned FDMOD  : 1; // bit 30 Force device mode
            unsigned CTXPKT : 1; // bit 31 Corrupt Tx packet    
        } bit;
    
        static constexpr unsigned TOCAL_POS = 0;
        static constexpr unsigned TOCAL_MASK = 0x00000007;
        static constexpr unsigned TOCAL(unsigned value) { return (value << 0); }
        static constexpr unsigned PHYSEL_POS = 7;
        static constexpr unsigned PHYSEL_MASK = 0x00000080;
        static constexpr unsigned PHYSEL(unsigned value) { return (value << 7); }
        static constexpr unsigned SRPCAP_POS = 8;
        static constexpr unsigned SRPCAP_MASK = 0x00000100;
        static constexpr unsigned SRPCAP(unsigned value) { return (value << 8); }
        static constexpr unsigned HNPCAP_POS = 9;
        static constexpr unsigned HNPCAP_MASK = 0x00000200;
        static constexpr unsigned HNPCAP(unsigned value) { return (value << 9); }
        static constexpr unsigned TRDT_POS = 10;
        static constexpr unsigned TRDT_MASK = 0x00003c00;
        static constexpr unsigned TRDT(unsigned value) { return (value << 10); }
        static constexpr unsigned FHMOD_POS = 29;
        static constexpr unsigned FHMOD_MASK = 0x20000000;
        static constexpr unsigned FHMOD(unsigned value) { return (value << 29); }
        static constexpr unsigned FDMOD_POS = 30;
        static constexpr unsigned FDMOD_MASK = 0x40000000;
        static constexpr unsigned FDMOD(unsigned value) { return (value << 30); }
        static constexpr unsigned CTXPKT_POS = 31;
        static constexpr unsigned CTXPKT_MASK = 0x80000000;
        static constexpr unsigned CTXPKT(unsigned value) { return (value << 31); }
    } FS_GUSBCFG;

    volatile union FS_GRSTCTL_T // FS_GRSTCTL: OTG_FS reset register (OTG_FS_GRSTCTL) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GRSTCTL_BIT_T
        {
            unsigned CSRST   : 1; // bit 0 Core soft reset
            unsigned HSRST   : 1; // bit 1 HCLK soft reset
            unsigned FCRST   : 1; // bit 2 Host frame counter reset
            unsigned         : 1; // bit 3 unused
            unsigned RXFFLSH : 1; // bit 4 RxFIFO flush
            unsigned TXFFLSH : 1; // bit 5 TxFIFO flush
            unsigned TXFNUM  : 5; // bits 6..10 TxFIFO number
            unsigned         : 20; // bits 11..30 unused
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
        static constexpr unsigned AHBIDL_POS = 31;
        static constexpr unsigned AHBIDL_MASK = 0x80000000;
        static constexpr unsigned AHBIDL(unsigned value) { return (value << 31); }
    } FS_GRSTCTL;

    volatile union FS_GINTSTS_T // FS_GINTSTS: OTG_FS core interrupt register (OTG_FS_GINTSTS) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GINTSTS_BIT_T
        {
            unsigned CMOD               : 1; // bit 0 Current mode of operation
            unsigned MMIS               : 1; // bit 1 Mode mismatch interrupt
            unsigned OTGINT             : 1; // bit 2 OTG interrupt
            unsigned SOF                : 1; // bit 3 Start of frame
            unsigned RXFLVL             : 1; // bit 4 RxFIFO non-empty
            unsigned NPTXFE             : 1; // bit 5 Non-periodic TxFIFO empty
            unsigned GINAKEFF           : 1; // bit 6 Global IN non-periodic NAK effective
            unsigned GOUTNAKEFF         : 1; // bit 7 Global OUT NAK effective
            unsigned                    : 2; // bits 8..9 unused
            unsigned ESUSP              : 1; // bit 10 Early suspend
            unsigned USBSUSP            : 1; // bit 11 USB suspend
            unsigned USBRST             : 1; // bit 12 USB reset
            unsigned ENUMDNE            : 1; // bit 13 Enumeration done
            unsigned ISOODRP            : 1; // bit 14 Isochronous OUT packet dropped interrupt
            unsigned EOPF               : 1; // bit 15 End of periodic frame interrupt
            unsigned                    : 2; // bits 16..17 unused
            unsigned IEPINT             : 1; // bit 18 IN endpoint interrupt
            unsigned OEPINT             : 1; // bit 19 OUT endpoint interrupt
            unsigned IISOIXFR           : 1; // bit 20 Incomplete isochronous IN transfer
            unsigned IPXFR_INCOMPISOOUT : 1; // bit 21 Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
            unsigned                    : 2; // bits 22..23 unused
            unsigned HPRTINT            : 1; // bit 24 Host port interrupt
            unsigned HCINT              : 1; // bit 25 Host channels interrupt
            unsigned PTXFE              : 1; // bit 26 Periodic TxFIFO empty
            unsigned                    : 1; // bit 27 unused
            unsigned CIDSCHG            : 1; // bit 28 Connector ID status change
            unsigned DISCINT            : 1; // bit 29 Disconnect detected interrupt
            unsigned SRQINT             : 1; // bit 30 Session request/new session detected interrupt
            unsigned WKUPINT            : 1; // bit 31 Resume/remote wakeup detected interrupt    
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
        static constexpr unsigned GOUTNAKEFF_POS = 7;
        static constexpr unsigned GOUTNAKEFF_MASK = 0x00000080;
        static constexpr unsigned GOUTNAKEFF(unsigned value) { return (value << 7); }
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
        static constexpr unsigned IPXFR_INCOMPISOOUT_POS = 21;
        static constexpr unsigned IPXFR_INCOMPISOOUT_MASK = 0x00200000;
        static constexpr unsigned IPXFR_INCOMPISOOUT(unsigned value) { return (value << 21); }
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
        static constexpr unsigned WKUPINT_POS = 31;
        static constexpr unsigned WKUPINT_MASK = 0x80000000;
        static constexpr unsigned WKUPINT(unsigned value) { return (value << 31); }
    } FS_GINTSTS;

    volatile union FS_GINTMSK_T // FS_GINTMSK: OTG_FS interrupt mask register (OTG_FS_GINTMSK) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GINTMSK_BIT_T
        {
            unsigned                  : 1; // bit 0 unused
            unsigned MMISM            : 1; // bit 1 Mode mismatch interrupt mask
            unsigned OTGINT           : 1; // bit 2 OTG interrupt mask
            unsigned SOFM             : 1; // bit 3 Start of frame mask
            unsigned RXFLVLM          : 1; // bit 4 Receive FIFO non-empty mask
            unsigned NPTXFEM          : 1; // bit 5 Non-periodic TxFIFO empty mask
            unsigned GINAKEFFM        : 1; // bit 6 Global non-periodic IN NAK effective mask
            unsigned GONAKEFFM        : 1; // bit 7 Global OUT NAK effective mask
            unsigned                  : 2; // bits 8..9 unused
            unsigned ESUSPM           : 1; // bit 10 Early suspend mask
            unsigned USBSUSPM         : 1; // bit 11 USB suspend mask
            unsigned USBRST           : 1; // bit 12 USB reset mask
            unsigned ENUMDNEM         : 1; // bit 13 Enumeration done mask
            unsigned ISOODRPM         : 1; // bit 14 Isochronous OUT packet dropped interrupt mask
            unsigned EOPFM            : 1; // bit 15 End of periodic frame interrupt mask
            unsigned                  : 1; // bit 16 unused
            unsigned EPMISM           : 1; // bit 17 Endpoint mismatch interrupt mask
            unsigned IEPINT           : 1; // bit 18 IN endpoints interrupt mask
            unsigned OEPINT           : 1; // bit 19 OUT endpoints interrupt mask
            unsigned IISOIXFRM        : 1; // bit 20 Incomplete isochronous IN transfer mask
            unsigned IPXFRM_IISOOXFRM : 1; // bit 21 Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
            unsigned                  : 2; // bits 22..23 unused
            unsigned PRTIM            : 1; // bit 24 Host port interrupt mask
            unsigned HCIM             : 1; // bit 25 Host channels interrupt mask
            unsigned PTXFEM           : 1; // bit 26 Periodic TxFIFO empty mask
            unsigned                  : 1; // bit 27 unused
            unsigned CIDSCHGM         : 1; // bit 28 Connector ID status change mask
            unsigned DISCINT          : 1; // bit 29 Disconnect detected interrupt mask
            unsigned SRQIM            : 1; // bit 30 Session request/new session detected interrupt mask
            unsigned WUIM             : 1; // bit 31 Resume/remote wakeup detected interrupt mask    
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
        static constexpr unsigned IPXFRM_IISOOXFRM_POS = 21;
        static constexpr unsigned IPXFRM_IISOOXFRM_MASK = 0x00200000;
        static constexpr unsigned IPXFRM_IISOOXFRM(unsigned value) { return (value << 21); }
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
    } FS_GINTMSK;

    volatile union FS_GRXSTSR_Device_T // FS_GRXSTSR_Device: OTG_FS Receive status debug read(Device mode) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GRXSTSR_Device_BIT_T
        {
            unsigned EPNUM  : 4; // bits 0..3 Endpoint number
            unsigned BCNT   : 11; // bits 4..14 Byte count
            unsigned DPID   : 2; // bits 15..16 Data PID
            unsigned PKTSTS : 4; // bits 17..20 Packet status
            unsigned FRMNUM : 4; // bits 21..24 Frame number
            unsigned        : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned EPNUM_POS = 0;
        static constexpr unsigned EPNUM_MASK = 0x0000000f;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 0); }
        static constexpr unsigned BCNT_POS = 4;
        static constexpr unsigned BCNT_MASK = 0x00007ff0;
        static constexpr unsigned BCNT(unsigned value) { return (value << 4); }
        static constexpr unsigned DPID_POS = 15;
        static constexpr unsigned DPID_MASK = 0x00018000;
        static constexpr unsigned DPID(unsigned value) { return (value << 15); }
        static constexpr unsigned PKTSTS_POS = 17;
        static constexpr unsigned PKTSTS_MASK = 0x001e0000;
        static constexpr unsigned PKTSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned FRMNUM_POS = 21;
        static constexpr unsigned FRMNUM_MASK = 0x01e00000;
        static constexpr unsigned FRMNUM(unsigned value) { return (value << 21); }
    } FS_GRXSTSR_Device;

    uint8_t Reserved1[4];

    volatile union FS_GRXFSIZ_T // FS_GRXFSIZ: OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GRXFSIZ_BIT_T
        {
            unsigned RXFD : 16; // bits 0..15 RxFIFO depth
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned RXFD_POS = 0;
        static constexpr unsigned RXFD_MASK = 0x0000ffff;
        static constexpr unsigned RXFD(unsigned value) { return (value << 0); }
    } FS_GRXFSIZ;

    volatile union FS_GNPTXFSIZ_Device_T // FS_GNPTXFSIZ_Device: OTG_FS non-periodic transmit FIFO size register (Device mode) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GNPTXFSIZ_Device_BIT_T
        {
            unsigned TX0FSA : 16; // bits 0..15 Endpoint 0 transmit RAM start address
            unsigned TX0FD  : 16; // bits 16..31 Endpoint 0 TxFIFO depth    
        } bit;
    
        static constexpr unsigned TX0FSA_POS = 0;
        static constexpr unsigned TX0FSA_MASK = 0x0000ffff;
        static constexpr unsigned TX0FSA(unsigned value) { return (value << 0); }
        static constexpr unsigned TX0FD_POS = 16;
        static constexpr unsigned TX0FD_MASK = 0xffff0000;
        static constexpr unsigned TX0FD(unsigned value) { return (value << 16); }
    } FS_GNPTXFSIZ_Device;

    volatile union FS_GNPTXSTS_T // FS_GNPTXSTS: OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GNPTXSTS_BIT_T
        {
            unsigned NPTXFSAV : 16; // bits 0..15 Non-periodic TxFIFO space available
            unsigned NPTQXSAV : 8; // bits 16..23 Non-periodic transmit request queue space available
            unsigned NPTXQTOP : 7; // bits 24..30 Top of the non-periodic transmit request queue
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
    } FS_GNPTXSTS;

    uint8_t Reserved2[8];

    volatile union FS_GCCFG_T // FS_GCCFG: OTG_FS general core configuration register (OTG_FS_GCCFG) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_GCCFG_BIT_T
        {
            unsigned          : 16; // bits 0..15 unused
            unsigned PWRDWN   : 1; // bit 16 Power down
            unsigned          : 1; // bit 17 unused
            unsigned VBUSASEN : 1; // bit 18 Enable the VBUS sensing device
            unsigned VBUSBSEN : 1; // bit 19 Enable the VBUS sensing device
            unsigned SOFOUTEN : 1; // bit 20 SOF output enable
            unsigned          : 11; // bits 21..31 unused    
        } bit;
    
        static constexpr unsigned PWRDWN_POS = 16;
        static constexpr unsigned PWRDWN_MASK = 0x00010000;
        static constexpr unsigned PWRDWN(unsigned value) { return (value << 16); }
        static constexpr unsigned VBUSASEN_POS = 18;
        static constexpr unsigned VBUSASEN_MASK = 0x00040000;
        static constexpr unsigned VBUSASEN(unsigned value) { return (value << 18); }
        static constexpr unsigned VBUSBSEN_POS = 19;
        static constexpr unsigned VBUSBSEN_MASK = 0x00080000;
        static constexpr unsigned VBUSBSEN(unsigned value) { return (value << 19); }
        static constexpr unsigned SOFOUTEN_POS = 20;
        static constexpr unsigned SOFOUTEN_MASK = 0x00100000;
        static constexpr unsigned SOFOUTEN(unsigned value) { return (value << 20); }
    } FS_GCCFG;

    volatile union FS_CID_T // FS_CID: core ID register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_CID_BIT_T
        {
            unsigned PRODUCT_ID : 32; // bits 0..31 Product ID field    
        } bit;
    
        static constexpr unsigned PRODUCT_ID_POS = 0;
        static constexpr unsigned PRODUCT_ID_MASK = 0xffffffff;
        static constexpr unsigned PRODUCT_ID(unsigned value) { return (value << 0); }
    } FS_CID;

    uint8_t Reserved3[192];

    volatile union FS_HPTXFSIZ_T // FS_HPTXFSIZ: OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HPTXFSIZ_BIT_T
        {
            unsigned PTXSA   : 16; // bits 0..15 Host periodic TxFIFO start address
            unsigned PTXFSIZ : 16; // bits 16..31 Host periodic TxFIFO depth    
        } bit;
    
        static constexpr unsigned PTXSA_POS = 0;
        static constexpr unsigned PTXSA_MASK = 0x0000ffff;
        static constexpr unsigned PTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned PTXFSIZ_POS = 16;
        static constexpr unsigned PTXFSIZ_MASK = 0xffff0000;
        static constexpr unsigned PTXFSIZ(unsigned value) { return (value << 16); }
    } FS_HPTXFSIZ;

    volatile union FS_DIEPTXF1_T // FS_DIEPTXF1: OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DIEPTXF1_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFO2 transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } FS_DIEPTXF1;

    volatile union FS_DIEPTXF2_T // FS_DIEPTXF2: OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DIEPTXF2_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFO3 transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } FS_DIEPTXF2;

    volatile union FS_DIEPTXF3_T // FS_DIEPTXF3: OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DIEPTXF3_BIT_T
        {
            unsigned INEPTXSA : 16; // bits 0..15 IN endpoint FIFO4 transmit RAM start address
            unsigned INEPTXFD : 16; // bits 16..31 IN endpoint TxFIFO depth    
        } bit;
    
        static constexpr unsigned INEPTXSA_POS = 0;
        static constexpr unsigned INEPTXSA_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXSA(unsigned value) { return (value << 0); }
        static constexpr unsigned INEPTXFD_POS = 16;
        static constexpr unsigned INEPTXFD_MASK = 0xffff0000;
        static constexpr unsigned INEPTXFD(unsigned value) { return (value << 16); }
    } FS_DIEPTXF3;

}; // struct USB_OTG_GLOBAL_T

static_assert(sizeof(USB_OTG_GLOBAL_T) == USB_OTG_GLOBAL_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp