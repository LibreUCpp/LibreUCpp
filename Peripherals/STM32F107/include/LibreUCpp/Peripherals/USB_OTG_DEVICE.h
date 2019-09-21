#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) USB_OTG_DEVICE_T
{
    static constexpr size_t INSTANCE_SIZE = 884;
    static constexpr intptr_t BASE_ADDRESS = 0x50000800;

    static constexpr intptr_t ADDR_OFFSET_FS_DCFG = 0x00;
    static constexpr intptr_t ADDR_OFFSET_FS_DCTL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_FS_DSTS = 0x08;
    static constexpr intptr_t ADDR_OFFSET_FS_DIEPMSK = 0x10;
    static constexpr intptr_t ADDR_OFFSET_FS_DOEPMSK = 0x14;
    static constexpr intptr_t ADDR_OFFSET_FS_DAINT = 0x18;
    static constexpr intptr_t ADDR_OFFSET_FS_DAINTMSK = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_DVBUSDIS = 0x28;
    static constexpr intptr_t ADDR_OFFSET_DVBUSPULSE = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_DIEPEMPMSK = 0x34;
    static constexpr intptr_t ADDR_OFFSET_FS_DIEPCTL = 0x100;
    static constexpr intptr_t ADDR_OFFSET_DIEPCTL1 = 0x120;
    static constexpr intptr_t ADDR_OFFSET_DIEPCTL2 = 0x140;
    static constexpr intptr_t ADDR_OFFSET_DIEPCTL3 = 0x160;
    static constexpr intptr_t ADDR_OFFSET_DOEPCTL0 = 0x300;
    static constexpr intptr_t ADDR_OFFSET_DOEPCTL1 = 0x320;
    static constexpr intptr_t ADDR_OFFSET_DOEPCTL2 = 0x340;
    static constexpr intptr_t ADDR_OFFSET_DOEPCTL3 = 0x360;
    static constexpr intptr_t ADDR_OFFSET_DIEPINT0 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_DIEPINT1 = 0x128;
    static constexpr intptr_t ADDR_OFFSET_DIEPINT2 = 0x148;
    static constexpr intptr_t ADDR_OFFSET_DIEPINT3 = 0x168;
    static constexpr intptr_t ADDR_OFFSET_DOEPINT0 = 0x308;
    static constexpr intptr_t ADDR_OFFSET_DOEPINT1 = 0x328;
    static constexpr intptr_t ADDR_OFFSET_DOEPINT2 = 0x348;
    static constexpr intptr_t ADDR_OFFSET_DOEPINT3 = 0x368;
    static constexpr intptr_t ADDR_OFFSET_DIEPTSIZ0 = 0x110;
    static constexpr intptr_t ADDR_OFFSET_DOEPTSIZ0 = 0x310;
    static constexpr intptr_t ADDR_OFFSET_DIEPTSIZ1 = 0x130;
    static constexpr intptr_t ADDR_OFFSET_DIEPTSIZ2 = 0x150;
    static constexpr intptr_t ADDR_OFFSET_DIEPTSIZ3 = 0x170;
    static constexpr intptr_t ADDR_OFFSET_DTXFSTS0 = 0x118;
    static constexpr intptr_t ADDR_OFFSET_DTXFSTS1 = 0x138;
    static constexpr intptr_t ADDR_OFFSET_DTXFSTS2 = 0x158;
    static constexpr intptr_t ADDR_OFFSET_DTXFSTS3 = 0x178;
    static constexpr intptr_t ADDR_OFFSET_DOEPTSIZ1 = 0x330;
    static constexpr intptr_t ADDR_OFFSET_DOEPTSIZ2 = 0x350;
    static constexpr intptr_t ADDR_OFFSET_DOEPTSIZ3 = 0x370;

    volatile union FS_DCFG_T // FS_DCFG: OTG_FS device configuration register (OTG_FS_DCFG) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DCFG_BIT_T
        {
            unsigned DSPD     : 2; // bits 0..1 Device speed
            unsigned NZLSOHSK : 1; // bit 2 Non-zero-length status OUT handshake
            unsigned          : 1; // bit 3 unused
            unsigned DAD      : 7; // bits 4..10 Device address
            unsigned PFIVL    : 2; // bits 11..12 Periodic frame interval
            unsigned          : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned DSPD_POS = 0;
        static constexpr unsigned DSPD_MASK = 0x00000003;
        static constexpr unsigned DSPD(unsigned value) { return (value << 0); }
        static constexpr unsigned NZLSOHSK_POS = 2;
        static constexpr unsigned NZLSOHSK_MASK = 0x00000004;
        static constexpr unsigned NZLSOHSK(unsigned value) { return (value << 2); }
        static constexpr unsigned DAD_POS = 4;
        static constexpr unsigned DAD_MASK = 0x000007f0;
        static constexpr unsigned DAD(unsigned value) { return (value << 4); }
        static constexpr unsigned PFIVL_POS = 11;
        static constexpr unsigned PFIVL_MASK = 0x00001800;
        static constexpr unsigned PFIVL(unsigned value) { return (value << 11); }
    } FS_DCFG;

    volatile union FS_DCTL_T // FS_DCTL: OTG_FS device control register (OTG_FS_DCTL) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DCTL_BIT_T
        {
            unsigned RWUSIG   : 1; // bit 0 Remote wakeup signaling
            unsigned SDIS     : 1; // bit 1 Soft disconnect
            unsigned GINSTS   : 1; // bit 2 Global IN NAK status
            unsigned GONSTS   : 1; // bit 3 Global OUT NAK status
            unsigned TCTL     : 3; // bits 4..6 Test control
            unsigned SGINAK   : 1; // bit 7 Set global IN NAK
            unsigned CGINAK   : 1; // bit 8 Clear global IN NAK
            unsigned SGONAK   : 1; // bit 9 Set global OUT NAK
            unsigned CGONAK   : 1; // bit 10 Clear global OUT NAK
            unsigned POPRGDNE : 1; // bit 11 Power-on programming done
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned RWUSIG_POS = 0;
        static constexpr unsigned RWUSIG_MASK = 0x00000001;
        static constexpr unsigned RWUSIG(unsigned value) { return (value << 0); }
        static constexpr unsigned SDIS_POS = 1;
        static constexpr unsigned SDIS_MASK = 0x00000002;
        static constexpr unsigned SDIS(unsigned value) { return (value << 1); }
        static constexpr unsigned GINSTS_POS = 2;
        static constexpr unsigned GINSTS_MASK = 0x00000004;
        static constexpr unsigned GINSTS(unsigned value) { return (value << 2); }
        static constexpr unsigned GONSTS_POS = 3;
        static constexpr unsigned GONSTS_MASK = 0x00000008;
        static constexpr unsigned GONSTS(unsigned value) { return (value << 3); }
        static constexpr unsigned TCTL_POS = 4;
        static constexpr unsigned TCTL_MASK = 0x00000070;
        static constexpr unsigned TCTL(unsigned value) { return (value << 4); }
        static constexpr unsigned SGINAK_POS = 7;
        static constexpr unsigned SGINAK_MASK = 0x00000080;
        static constexpr unsigned SGINAK(unsigned value) { return (value << 7); }
        static constexpr unsigned CGINAK_POS = 8;
        static constexpr unsigned CGINAK_MASK = 0x00000100;
        static constexpr unsigned CGINAK(unsigned value) { return (value << 8); }
        static constexpr unsigned SGONAK_POS = 9;
        static constexpr unsigned SGONAK_MASK = 0x00000200;
        static constexpr unsigned SGONAK(unsigned value) { return (value << 9); }
        static constexpr unsigned CGONAK_POS = 10;
        static constexpr unsigned CGONAK_MASK = 0x00000400;
        static constexpr unsigned CGONAK(unsigned value) { return (value << 10); }
        static constexpr unsigned POPRGDNE_POS = 11;
        static constexpr unsigned POPRGDNE_MASK = 0x00000800;
        static constexpr unsigned POPRGDNE(unsigned value) { return (value << 11); }
    } FS_DCTL;

    volatile union FS_DSTS_T // FS_DSTS: OTG_FS device status register (OTG_FS_DSTS) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DSTS_BIT_T
        {
            unsigned SUSPSTS : 1; // bit 0 Suspend status
            unsigned ENUMSPD : 2; // bits 1..2 Enumerated speed
            unsigned EERR    : 1; // bit 3 Erratic error
            unsigned         : 4; // bits 4..7 unused
            unsigned FNSOF   : 14; // bits 8..21 Frame number of the received SOF
            unsigned         : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned SUSPSTS_POS = 0;
        static constexpr unsigned SUSPSTS_MASK = 0x00000001;
        static constexpr unsigned SUSPSTS(unsigned value) { return (value << 0); }
        static constexpr unsigned ENUMSPD_POS = 1;
        static constexpr unsigned ENUMSPD_MASK = 0x00000006;
        static constexpr unsigned ENUMSPD(unsigned value) { return (value << 1); }
        static constexpr unsigned EERR_POS = 3;
        static constexpr unsigned EERR_MASK = 0x00000008;
        static constexpr unsigned EERR(unsigned value) { return (value << 3); }
        static constexpr unsigned FNSOF_POS = 8;
        static constexpr unsigned FNSOF_MASK = 0x003fff00;
        static constexpr unsigned FNSOF(unsigned value) { return (value << 8); }
    } FS_DSTS;

    uint8_t Reserved1[4];

    volatile union FS_DIEPMSK_T // FS_DIEPMSK: OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DIEPMSK_BIT_T
        {
            unsigned XFRCM     : 1; // bit 0 Transfer completed interrupt mask
            unsigned EPDM      : 1; // bit 1 Endpoint disabled interrupt mask
            unsigned           : 1; // bit 2 unused
            unsigned TOM       : 1; // bit 3 Timeout condition mask (Non-isochronous endpoints)
            unsigned ITTXFEMSK : 1; // bit 4 IN token received when TxFIFO empty mask
            unsigned INEPNMM   : 1; // bit 5 IN token received with EP mismatch mask
            unsigned INEPNEM   : 1; // bit 6 IN endpoint NAK effective mask
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDM_POS = 1;
        static constexpr unsigned EPDM_MASK = 0x00000002;
        static constexpr unsigned EPDM(unsigned value) { return (value << 1); }
        static constexpr unsigned TOM_POS = 3;
        static constexpr unsigned TOM_MASK = 0x00000008;
        static constexpr unsigned TOM(unsigned value) { return (value << 3); }
        static constexpr unsigned ITTXFEMSK_POS = 4;
        static constexpr unsigned ITTXFEMSK_MASK = 0x00000010;
        static constexpr unsigned ITTXFEMSK(unsigned value) { return (value << 4); }
        static constexpr unsigned INEPNMM_POS = 5;
        static constexpr unsigned INEPNMM_MASK = 0x00000020;
        static constexpr unsigned INEPNMM(unsigned value) { return (value << 5); }
        static constexpr unsigned INEPNEM_POS = 6;
        static constexpr unsigned INEPNEM_MASK = 0x00000040;
        static constexpr unsigned INEPNEM(unsigned value) { return (value << 6); }
    } FS_DIEPMSK;

    volatile union FS_DOEPMSK_T // FS_DOEPMSK: OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DOEPMSK_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed interrupt mask
            unsigned EPDM   : 1; // bit 1 Endpoint disabled interrupt mask
            unsigned        : 1; // bit 2 unused
            unsigned STUPM  : 1; // bit 3 SETUP phase done mask
            unsigned OTEPDM : 1; // bit 4 OUT token received when endpoint disabled mask
            unsigned        : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDM_POS = 1;
        static constexpr unsigned EPDM_MASK = 0x00000002;
        static constexpr unsigned EPDM(unsigned value) { return (value << 1); }
        static constexpr unsigned STUPM_POS = 3;
        static constexpr unsigned STUPM_MASK = 0x00000008;
        static constexpr unsigned STUPM(unsigned value) { return (value << 3); }
        static constexpr unsigned OTEPDM_POS = 4;
        static constexpr unsigned OTEPDM_MASK = 0x00000010;
        static constexpr unsigned OTEPDM(unsigned value) { return (value << 4); }
    } FS_DOEPMSK;

    volatile union FS_DAINT_T // FS_DAINT: OTG_FS device all endpoints interrupt register (OTG_FS_DAINT) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DAINT_BIT_T
        {
            unsigned IEPINT : 16; // bits 0..15 IN endpoint interrupt bits
            unsigned OEPINT : 16; // bits 16..31 OUT endpoint interrupt bits    
        } bit;
    
        static constexpr unsigned IEPINT_POS = 0;
        static constexpr unsigned IEPINT_MASK = 0x0000ffff;
        static constexpr unsigned IEPINT(unsigned value) { return (value << 0); }
        static constexpr unsigned OEPINT_POS = 16;
        static constexpr unsigned OEPINT_MASK = 0xffff0000;
        static constexpr unsigned OEPINT(unsigned value) { return (value << 16); }
    } FS_DAINT;

    volatile union FS_DAINTMSK_T // FS_DAINTMSK: OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DAINTMSK_BIT_T
        {
            unsigned IEPM   : 16; // bits 0..15 IN EP interrupt mask bits
            unsigned OEPINT : 16; // bits 16..31 OUT endpoint interrupt bits    
        } bit;
    
        static constexpr unsigned IEPM_POS = 0;
        static constexpr unsigned IEPM_MASK = 0x0000ffff;
        static constexpr unsigned IEPM(unsigned value) { return (value << 0); }
        static constexpr unsigned OEPINT_POS = 16;
        static constexpr unsigned OEPINT_MASK = 0xffff0000;
        static constexpr unsigned OEPINT(unsigned value) { return (value << 16); }
    } FS_DAINTMSK;

    uint8_t Reserved2[8];

    volatile union DVBUSDIS_T // DVBUSDIS: OTG_FS device VBUS discharge time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DVBUSDIS_BIT_T
        {
            unsigned VBUSDT : 16; // bits 0..15 Device VBUS discharge time
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned VBUSDT_POS = 0;
        static constexpr unsigned VBUSDT_MASK = 0x0000ffff;
        static constexpr unsigned VBUSDT(unsigned value) { return (value << 0); }
    } DVBUSDIS;

    volatile union DVBUSPULSE_T // DVBUSPULSE: OTG_FS device VBUS pulsing time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DVBUSPULSE_BIT_T
        {
            unsigned DVBUSP : 12; // bits 0..11 Device VBUS pulsing time
            unsigned        : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned DVBUSP_POS = 0;
        static constexpr unsigned DVBUSP_MASK = 0x00000fff;
        static constexpr unsigned DVBUSP(unsigned value) { return (value << 0); }
    } DVBUSPULSE;

    uint8_t Reserved3[4];

    volatile union DIEPEMPMSK_T // DIEPEMPMSK: OTG_FS device IN endpoint FIFO empty interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPEMPMSK_BIT_T
        {
            unsigned INEPTXFEM : 16; // bits 0..15 IN EP Tx FIFO empty interrupt mask bits
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTXFEM_POS = 0;
        static constexpr unsigned INEPTXFEM_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXFEM(unsigned value) { return (value << 0); }
    } DIEPEMPMSK;

    uint8_t Reserved4[200];

    volatile union FS_DIEPCTL_T // FS_DIEPCTL: OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_DIEPCTL_BIT_T
        {
            unsigned MPSIZ  : 2; // bits 0..1 Maximum packet size
            unsigned        : 13; // bits 2..14 unused
            unsigned USBAEP : 1; // bit 15 USB active endpoint
            unsigned        : 1; // bit 16 unused
            unsigned NAKSTS : 1; // bit 17 NAK status
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned        : 1; // bit 20 unused
            unsigned STALL  : 1; // bit 21 STALL handshake
            unsigned TXFNUM : 4; // bits 22..25 TxFIFO number
            unsigned CNAK   : 1; // bit 26 Clear NAK
            unsigned SNAK   : 1; // bit 27 Set NAK
            unsigned        : 2; // bits 28..29 unused
            unsigned EPDIS  : 1; // bit 30 Endpoint disable
            unsigned EPENA  : 1; // bit 31 Endpoint enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x00000003;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned STALL_POS = 21;
        static constexpr unsigned STALL_MASK = 0x00200000;
        static constexpr unsigned STALL(unsigned value) { return (value << 21); }
        static constexpr unsigned TXFNUM_POS = 22;
        static constexpr unsigned TXFNUM_MASK = 0x03c00000;
        static constexpr unsigned TXFNUM(unsigned value) { return (value << 22); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } FS_DIEPCTL;

    uint8_t Reserved5[4];

    volatile union DIEPINT0_T // DIEPINT0: device endpoint-x interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPINT0_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 XFRC
            unsigned EPDISD : 1; // bit 1 EPDISD
            unsigned        : 1; // bit 2 unused
            unsigned TOC    : 1; // bit 3 TOC
            unsigned ITTXFE : 1; // bit 4 ITTXFE
            unsigned        : 1; // bit 5 unused
            unsigned INEPNE : 1; // bit 6 INEPNE
            unsigned TXFE   : 1; // bit 7 TXFE
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned TOC_POS = 3;
        static constexpr unsigned TOC_MASK = 0x00000008;
        static constexpr unsigned TOC(unsigned value) { return (value << 3); }
        static constexpr unsigned ITTXFE_POS = 4;
        static constexpr unsigned ITTXFE_MASK = 0x00000010;
        static constexpr unsigned ITTXFE(unsigned value) { return (value << 4); }
        static constexpr unsigned INEPNE_POS = 6;
        static constexpr unsigned INEPNE_MASK = 0x00000040;
        static constexpr unsigned INEPNE(unsigned value) { return (value << 6); }
        static constexpr unsigned TXFE_POS = 7;
        static constexpr unsigned TXFE_MASK = 0x00000080;
        static constexpr unsigned TXFE(unsigned value) { return (value << 7); }
    } DIEPINT0;

    uint8_t Reserved6[4];

    volatile union DIEPTSIZ0_T // DIEPTSIZ0: device endpoint-0 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPTSIZ0_BIT_T
        {
            unsigned XFRSIZ : 7; // bits 0..6 Transfer size
            unsigned        : 12; // bits 7..18 unused
            unsigned PKTCNT : 2; // bits 19..20 Packet count
            unsigned        : 11; // bits 21..31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0000007f;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x00180000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
    } DIEPTSIZ0;

    uint8_t Reserved7[4];

    volatile union DTXFSTS0_T // DTXFSTS0: OTG_FS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DTXFSTS0_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space available
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } DTXFSTS0;

    uint8_t Reserved8[4];

    volatile union DIEPCTL1_T // DIEPCTL1: OTG device endpoint-1 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPCTL1_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 MPSIZ
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USBAEP
            unsigned EONUM_DPID     : 1; // bit 16 EONUM/DPID
            unsigned NAKSTS         : 1; // bit 17 NAKSTS
            unsigned EPTYP          : 2; // bits 18..19 EPTYP
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 Stall
            unsigned TXFNUM         : 4; // bits 22..25 TXFNUM
            unsigned CNAK           : 1; // bit 26 CNAK
            unsigned SNAK           : 1; // bit 27 SNAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
            unsigned SODDFRM_SD1PID : 1; // bit 29 SODDFRM/SD1PID
            unsigned EPDIS          : 1; // bit 30 EPDIS
            unsigned EPENA          : 1; // bit 31 EPENA    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned EONUM_DPID_POS = 16;
        static constexpr unsigned EONUM_DPID_MASK = 0x00010000;
        static constexpr unsigned EONUM_DPID(unsigned value) { return (value << 16); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned Stall_POS = 21;
        static constexpr unsigned Stall_MASK = 0x00200000;
        static constexpr unsigned Stall(unsigned value) { return (value << 21); }
        static constexpr unsigned TXFNUM_POS = 22;
        static constexpr unsigned TXFNUM_MASK = 0x03c00000;
        static constexpr unsigned TXFNUM(unsigned value) { return (value << 22); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned SD0PID_SEVNFRM_POS = 28;
        static constexpr unsigned SD0PID_SEVNFRM_MASK = 0x10000000;
        static constexpr unsigned SD0PID_SEVNFRM(unsigned value) { return (value << 28); }
        static constexpr unsigned SODDFRM_SD1PID_POS = 29;
        static constexpr unsigned SODDFRM_SD1PID_MASK = 0x20000000;
        static constexpr unsigned SODDFRM_SD1PID(unsigned value) { return (value << 29); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } DIEPCTL1;

    uint8_t Reserved9[4];

    volatile union DIEPINT1_T // DIEPINT1: device endpoint-1 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPINT1_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 XFRC
            unsigned EPDISD : 1; // bit 1 EPDISD
            unsigned        : 1; // bit 2 unused
            unsigned TOC    : 1; // bit 3 TOC
            unsigned ITTXFE : 1; // bit 4 ITTXFE
            unsigned        : 1; // bit 5 unused
            unsigned INEPNE : 1; // bit 6 INEPNE
            unsigned TXFE   : 1; // bit 7 TXFE
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned TOC_POS = 3;
        static constexpr unsigned TOC_MASK = 0x00000008;
        static constexpr unsigned TOC(unsigned value) { return (value << 3); }
        static constexpr unsigned ITTXFE_POS = 4;
        static constexpr unsigned ITTXFE_MASK = 0x00000010;
        static constexpr unsigned ITTXFE(unsigned value) { return (value << 4); }
        static constexpr unsigned INEPNE_POS = 6;
        static constexpr unsigned INEPNE_MASK = 0x00000040;
        static constexpr unsigned INEPNE(unsigned value) { return (value << 6); }
        static constexpr unsigned TXFE_POS = 7;
        static constexpr unsigned TXFE_MASK = 0x00000080;
        static constexpr unsigned TXFE(unsigned value) { return (value << 7); }
    } DIEPINT1;

    uint8_t Reserved10[4];

    volatile union DIEPTSIZ1_T // DIEPTSIZ1: device endpoint-1 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPTSIZ1_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned MCNT   : 2; // bits 29..30 Multi count
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned MCNT_POS = 29;
        static constexpr unsigned MCNT_MASK = 0x60000000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 29); }
    } DIEPTSIZ1;

    uint8_t Reserved11[4];

    volatile union DTXFSTS1_T // DTXFSTS1: OTG_FS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DTXFSTS1_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space available
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } DTXFSTS1;

    uint8_t Reserved12[4];

    volatile union DIEPCTL2_T // DIEPCTL2: OTG device endpoint-2 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPCTL2_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 MPSIZ
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USBAEP
            unsigned EONUM_DPID     : 1; // bit 16 EONUM/DPID
            unsigned NAKSTS         : 1; // bit 17 NAKSTS
            unsigned EPTYP          : 2; // bits 18..19 EPTYP
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 Stall
            unsigned TXFNUM         : 4; // bits 22..25 TXFNUM
            unsigned CNAK           : 1; // bit 26 CNAK
            unsigned SNAK           : 1; // bit 27 SNAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
            unsigned SODDFRM        : 1; // bit 29 SODDFRM
            unsigned EPDIS          : 1; // bit 30 EPDIS
            unsigned EPENA          : 1; // bit 31 EPENA    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned EONUM_DPID_POS = 16;
        static constexpr unsigned EONUM_DPID_MASK = 0x00010000;
        static constexpr unsigned EONUM_DPID(unsigned value) { return (value << 16); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned Stall_POS = 21;
        static constexpr unsigned Stall_MASK = 0x00200000;
        static constexpr unsigned Stall(unsigned value) { return (value << 21); }
        static constexpr unsigned TXFNUM_POS = 22;
        static constexpr unsigned TXFNUM_MASK = 0x03c00000;
        static constexpr unsigned TXFNUM(unsigned value) { return (value << 22); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned SD0PID_SEVNFRM_POS = 28;
        static constexpr unsigned SD0PID_SEVNFRM_MASK = 0x10000000;
        static constexpr unsigned SD0PID_SEVNFRM(unsigned value) { return (value << 28); }
        static constexpr unsigned SODDFRM_POS = 29;
        static constexpr unsigned SODDFRM_MASK = 0x20000000;
        static constexpr unsigned SODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } DIEPCTL2;

    uint8_t Reserved13[4];

    volatile union DIEPINT2_T // DIEPINT2: device endpoint-2 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPINT2_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 XFRC
            unsigned EPDISD : 1; // bit 1 EPDISD
            unsigned        : 1; // bit 2 unused
            unsigned TOC    : 1; // bit 3 TOC
            unsigned ITTXFE : 1; // bit 4 ITTXFE
            unsigned        : 1; // bit 5 unused
            unsigned INEPNE : 1; // bit 6 INEPNE
            unsigned TXFE   : 1; // bit 7 TXFE
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned TOC_POS = 3;
        static constexpr unsigned TOC_MASK = 0x00000008;
        static constexpr unsigned TOC(unsigned value) { return (value << 3); }
        static constexpr unsigned ITTXFE_POS = 4;
        static constexpr unsigned ITTXFE_MASK = 0x00000010;
        static constexpr unsigned ITTXFE(unsigned value) { return (value << 4); }
        static constexpr unsigned INEPNE_POS = 6;
        static constexpr unsigned INEPNE_MASK = 0x00000040;
        static constexpr unsigned INEPNE(unsigned value) { return (value << 6); }
        static constexpr unsigned TXFE_POS = 7;
        static constexpr unsigned TXFE_MASK = 0x00000080;
        static constexpr unsigned TXFE(unsigned value) { return (value << 7); }
    } DIEPINT2;

    uint8_t Reserved14[4];

    volatile union DIEPTSIZ2_T // DIEPTSIZ2: device endpoint-2 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPTSIZ2_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned MCNT   : 2; // bits 29..30 Multi count
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned MCNT_POS = 29;
        static constexpr unsigned MCNT_MASK = 0x60000000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 29); }
    } DIEPTSIZ2;

    uint8_t Reserved15[4];

    volatile union DTXFSTS2_T // DTXFSTS2: OTG_FS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DTXFSTS2_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space available
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } DTXFSTS2;

    uint8_t Reserved16[4];

    volatile union DIEPCTL3_T // DIEPCTL3: OTG device endpoint-3 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPCTL3_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 MPSIZ
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USBAEP
            unsigned EONUM_DPID     : 1; // bit 16 EONUM/DPID
            unsigned NAKSTS         : 1; // bit 17 NAKSTS
            unsigned EPTYP          : 2; // bits 18..19 EPTYP
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 Stall
            unsigned TXFNUM         : 4; // bits 22..25 TXFNUM
            unsigned CNAK           : 1; // bit 26 CNAK
            unsigned SNAK           : 1; // bit 27 SNAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
            unsigned SODDFRM        : 1; // bit 29 SODDFRM
            unsigned EPDIS          : 1; // bit 30 EPDIS
            unsigned EPENA          : 1; // bit 31 EPENA    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned EONUM_DPID_POS = 16;
        static constexpr unsigned EONUM_DPID_MASK = 0x00010000;
        static constexpr unsigned EONUM_DPID(unsigned value) { return (value << 16); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned Stall_POS = 21;
        static constexpr unsigned Stall_MASK = 0x00200000;
        static constexpr unsigned Stall(unsigned value) { return (value << 21); }
        static constexpr unsigned TXFNUM_POS = 22;
        static constexpr unsigned TXFNUM_MASK = 0x03c00000;
        static constexpr unsigned TXFNUM(unsigned value) { return (value << 22); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned SD0PID_SEVNFRM_POS = 28;
        static constexpr unsigned SD0PID_SEVNFRM_MASK = 0x10000000;
        static constexpr unsigned SD0PID_SEVNFRM(unsigned value) { return (value << 28); }
        static constexpr unsigned SODDFRM_POS = 29;
        static constexpr unsigned SODDFRM_MASK = 0x20000000;
        static constexpr unsigned SODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } DIEPCTL3;

    uint8_t Reserved17[4];

    volatile union DIEPINT3_T // DIEPINT3: device endpoint-3 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPINT3_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 XFRC
            unsigned EPDISD : 1; // bit 1 EPDISD
            unsigned        : 1; // bit 2 unused
            unsigned TOC    : 1; // bit 3 TOC
            unsigned ITTXFE : 1; // bit 4 ITTXFE
            unsigned        : 1; // bit 5 unused
            unsigned INEPNE : 1; // bit 6 INEPNE
            unsigned TXFE   : 1; // bit 7 TXFE
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned TOC_POS = 3;
        static constexpr unsigned TOC_MASK = 0x00000008;
        static constexpr unsigned TOC(unsigned value) { return (value << 3); }
        static constexpr unsigned ITTXFE_POS = 4;
        static constexpr unsigned ITTXFE_MASK = 0x00000010;
        static constexpr unsigned ITTXFE(unsigned value) { return (value << 4); }
        static constexpr unsigned INEPNE_POS = 6;
        static constexpr unsigned INEPNE_MASK = 0x00000040;
        static constexpr unsigned INEPNE(unsigned value) { return (value << 6); }
        static constexpr unsigned TXFE_POS = 7;
        static constexpr unsigned TXFE_MASK = 0x00000080;
        static constexpr unsigned TXFE(unsigned value) { return (value << 7); }
    } DIEPINT3;

    uint8_t Reserved18[4];

    volatile union DIEPTSIZ3_T // DIEPTSIZ3: device endpoint-3 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIEPTSIZ3_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned MCNT   : 2; // bits 29..30 Multi count
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned MCNT_POS = 29;
        static constexpr unsigned MCNT_MASK = 0x60000000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 29); }
    } DIEPTSIZ3;

    uint8_t Reserved19[4];

    volatile union DTXFSTS3_T // DTXFSTS3: OTG_FS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DTXFSTS3_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space available
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } DTXFSTS3;

    uint8_t Reserved20[388];

    volatile union DOEPCTL0_T // DOEPCTL0: device endpoint-0 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPCTL0_BIT_T
        {
            unsigned MPSIZ  : 2; // bits 0..1 MPSIZ
            unsigned        : 13; // bits 2..14 unused
            unsigned USBAEP : 1; // bit 15 USBAEP
            unsigned        : 1; // bit 16 unused
            unsigned NAKSTS : 1; // bit 17 NAKSTS
            unsigned EPTYP  : 2; // bits 18..19 EPTYP
            unsigned SNPM   : 1; // bit 20 SNPM
            unsigned Stall  : 1; // bit 21 Stall
            unsigned        : 4; // bits 22..25 unused
            unsigned CNAK   : 1; // bit 26 CNAK
            unsigned SNAK   : 1; // bit 27 SNAK
            unsigned        : 2; // bits 28..29 unused
            unsigned EPDIS  : 1; // bit 30 EPDIS
            unsigned EPENA  : 1; // bit 31 EPENA    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x00000003;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned SNPM_POS = 20;
        static constexpr unsigned SNPM_MASK = 0x00100000;
        static constexpr unsigned SNPM(unsigned value) { return (value << 20); }
        static constexpr unsigned Stall_POS = 21;
        static constexpr unsigned Stall_MASK = 0x00200000;
        static constexpr unsigned Stall(unsigned value) { return (value << 21); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } DOEPCTL0;

    uint8_t Reserved21[4];

    volatile union DOEPINT0_T // DOEPINT0: device endpoint-0 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPINT0_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 XFRC
            unsigned EPDISD  : 1; // bit 1 EPDISD
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 STUP
            unsigned OTEPDIS : 1; // bit 4 OTEPDIS
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 B2BSTUP
            unsigned         : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned STUP_POS = 3;
        static constexpr unsigned STUP_MASK = 0x00000008;
        static constexpr unsigned STUP(unsigned value) { return (value << 3); }
        static constexpr unsigned OTEPDIS_POS = 4;
        static constexpr unsigned OTEPDIS_MASK = 0x00000010;
        static constexpr unsigned OTEPDIS(unsigned value) { return (value << 4); }
        static constexpr unsigned B2BSTUP_POS = 6;
        static constexpr unsigned B2BSTUP_MASK = 0x00000040;
        static constexpr unsigned B2BSTUP(unsigned value) { return (value << 6); }
    } DOEPINT0;

    uint8_t Reserved22[4];

    volatile union DOEPTSIZ0_T // DOEPTSIZ0: device OUT endpoint-0 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPTSIZ0_BIT_T
        {
            unsigned XFRSIZ  : 7; // bits 0..6 Transfer size
            unsigned         : 12; // bits 7..18 unused
            unsigned PKTCNT  : 1; // bit 19 Packet count
            unsigned         : 9; // bits 20..28 unused
            unsigned STUPCNT : 2; // bits 29..30 SETUP packet count
            unsigned         : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0000007f;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x00080000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned STUPCNT_POS = 29;
        static constexpr unsigned STUPCNT_MASK = 0x60000000;
        static constexpr unsigned STUPCNT(unsigned value) { return (value << 29); }
    } DOEPTSIZ0;

    uint8_t Reserved23[12];

    volatile union DOEPCTL1_T // DOEPCTL1: device endpoint-1 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPCTL1_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 MPSIZ
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USBAEP
            unsigned EONUM_DPID     : 1; // bit 16 EONUM/DPID
            unsigned NAKSTS         : 1; // bit 17 NAKSTS
            unsigned EPTYP          : 2; // bits 18..19 EPTYP
            unsigned SNPM           : 1; // bit 20 SNPM
            unsigned Stall          : 1; // bit 21 Stall
            unsigned                : 4; // bits 22..25 unused
            unsigned CNAK           : 1; // bit 26 CNAK
            unsigned SNAK           : 1; // bit 27 SNAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
            unsigned SODDFRM        : 1; // bit 29 SODDFRM
            unsigned EPDIS          : 1; // bit 30 EPDIS
            unsigned EPENA          : 1; // bit 31 EPENA    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned EONUM_DPID_POS = 16;
        static constexpr unsigned EONUM_DPID_MASK = 0x00010000;
        static constexpr unsigned EONUM_DPID(unsigned value) { return (value << 16); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned SNPM_POS = 20;
        static constexpr unsigned SNPM_MASK = 0x00100000;
        static constexpr unsigned SNPM(unsigned value) { return (value << 20); }
        static constexpr unsigned Stall_POS = 21;
        static constexpr unsigned Stall_MASK = 0x00200000;
        static constexpr unsigned Stall(unsigned value) { return (value << 21); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned SD0PID_SEVNFRM_POS = 28;
        static constexpr unsigned SD0PID_SEVNFRM_MASK = 0x10000000;
        static constexpr unsigned SD0PID_SEVNFRM(unsigned value) { return (value << 28); }
        static constexpr unsigned SODDFRM_POS = 29;
        static constexpr unsigned SODDFRM_MASK = 0x20000000;
        static constexpr unsigned SODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } DOEPCTL1;

    uint8_t Reserved24[4];

    volatile union DOEPINT1_T // DOEPINT1: device endpoint-1 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPINT1_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 XFRC
            unsigned EPDISD  : 1; // bit 1 EPDISD
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 STUP
            unsigned OTEPDIS : 1; // bit 4 OTEPDIS
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 B2BSTUP
            unsigned         : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned STUP_POS = 3;
        static constexpr unsigned STUP_MASK = 0x00000008;
        static constexpr unsigned STUP(unsigned value) { return (value << 3); }
        static constexpr unsigned OTEPDIS_POS = 4;
        static constexpr unsigned OTEPDIS_MASK = 0x00000010;
        static constexpr unsigned OTEPDIS(unsigned value) { return (value << 4); }
        static constexpr unsigned B2BSTUP_POS = 6;
        static constexpr unsigned B2BSTUP_MASK = 0x00000040;
        static constexpr unsigned B2BSTUP(unsigned value) { return (value << 6); }
    } DOEPINT1;

    uint8_t Reserved25[4];

    volatile union DOEPTSIZ1_T // DOEPTSIZ1: device OUT endpoint-1 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPTSIZ1_BIT_T
        {
            unsigned XFRSIZ         : 19; // bits 0..18 Transfer size
            unsigned PKTCNT         : 10; // bits 19..28 Packet count
            unsigned RXDPID_STUPCNT : 2; // bits 29..30 Received data PID/SETUP packet count
            unsigned                : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned RXDPID_STUPCNT_POS = 29;
        static constexpr unsigned RXDPID_STUPCNT_MASK = 0x60000000;
        static constexpr unsigned RXDPID_STUPCNT(unsigned value) { return (value << 29); }
    } DOEPTSIZ1;

    uint8_t Reserved26[12];

    volatile union DOEPCTL2_T // DOEPCTL2: device endpoint-2 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPCTL2_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 MPSIZ
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USBAEP
            unsigned EONUM_DPID     : 1; // bit 16 EONUM/DPID
            unsigned NAKSTS         : 1; // bit 17 NAKSTS
            unsigned EPTYP          : 2; // bits 18..19 EPTYP
            unsigned SNPM           : 1; // bit 20 SNPM
            unsigned Stall          : 1; // bit 21 Stall
            unsigned                : 4; // bits 22..25 unused
            unsigned CNAK           : 1; // bit 26 CNAK
            unsigned SNAK           : 1; // bit 27 SNAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
            unsigned SODDFRM        : 1; // bit 29 SODDFRM
            unsigned EPDIS          : 1; // bit 30 EPDIS
            unsigned EPENA          : 1; // bit 31 EPENA    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned EONUM_DPID_POS = 16;
        static constexpr unsigned EONUM_DPID_MASK = 0x00010000;
        static constexpr unsigned EONUM_DPID(unsigned value) { return (value << 16); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned SNPM_POS = 20;
        static constexpr unsigned SNPM_MASK = 0x00100000;
        static constexpr unsigned SNPM(unsigned value) { return (value << 20); }
        static constexpr unsigned Stall_POS = 21;
        static constexpr unsigned Stall_MASK = 0x00200000;
        static constexpr unsigned Stall(unsigned value) { return (value << 21); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned SD0PID_SEVNFRM_POS = 28;
        static constexpr unsigned SD0PID_SEVNFRM_MASK = 0x10000000;
        static constexpr unsigned SD0PID_SEVNFRM(unsigned value) { return (value << 28); }
        static constexpr unsigned SODDFRM_POS = 29;
        static constexpr unsigned SODDFRM_MASK = 0x20000000;
        static constexpr unsigned SODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } DOEPCTL2;

    uint8_t Reserved27[4];

    volatile union DOEPINT2_T // DOEPINT2: device endpoint-2 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPINT2_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 XFRC
            unsigned EPDISD  : 1; // bit 1 EPDISD
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 STUP
            unsigned OTEPDIS : 1; // bit 4 OTEPDIS
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 B2BSTUP
            unsigned         : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned STUP_POS = 3;
        static constexpr unsigned STUP_MASK = 0x00000008;
        static constexpr unsigned STUP(unsigned value) { return (value << 3); }
        static constexpr unsigned OTEPDIS_POS = 4;
        static constexpr unsigned OTEPDIS_MASK = 0x00000010;
        static constexpr unsigned OTEPDIS(unsigned value) { return (value << 4); }
        static constexpr unsigned B2BSTUP_POS = 6;
        static constexpr unsigned B2BSTUP_MASK = 0x00000040;
        static constexpr unsigned B2BSTUP(unsigned value) { return (value << 6); }
    } DOEPINT2;

    uint8_t Reserved28[4];

    volatile union DOEPTSIZ2_T // DOEPTSIZ2: device OUT endpoint-2 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPTSIZ2_BIT_T
        {
            unsigned XFRSIZ         : 19; // bits 0..18 Transfer size
            unsigned PKTCNT         : 10; // bits 19..28 Packet count
            unsigned RXDPID_STUPCNT : 2; // bits 29..30 Received data PID/SETUP packet count
            unsigned                : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned RXDPID_STUPCNT_POS = 29;
        static constexpr unsigned RXDPID_STUPCNT_MASK = 0x60000000;
        static constexpr unsigned RXDPID_STUPCNT(unsigned value) { return (value << 29); }
    } DOEPTSIZ2;

    uint8_t Reserved29[12];

    volatile union DOEPCTL3_T // DOEPCTL3: device endpoint-3 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPCTL3_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 MPSIZ
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USBAEP
            unsigned EONUM_DPID     : 1; // bit 16 EONUM/DPID
            unsigned NAKSTS         : 1; // bit 17 NAKSTS
            unsigned EPTYP          : 2; // bits 18..19 EPTYP
            unsigned SNPM           : 1; // bit 20 SNPM
            unsigned Stall          : 1; // bit 21 Stall
            unsigned                : 4; // bits 22..25 unused
            unsigned CNAK           : 1; // bit 26 CNAK
            unsigned SNAK           : 1; // bit 27 SNAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 SD0PID/SEVNFRM
            unsigned SODDFRM        : 1; // bit 29 SODDFRM
            unsigned EPDIS          : 1; // bit 30 EPDIS
            unsigned EPENA          : 1; // bit 31 EPENA    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned USBAEP_POS = 15;
        static constexpr unsigned USBAEP_MASK = 0x00008000;
        static constexpr unsigned USBAEP(unsigned value) { return (value << 15); }
        static constexpr unsigned EONUM_DPID_POS = 16;
        static constexpr unsigned EONUM_DPID_MASK = 0x00010000;
        static constexpr unsigned EONUM_DPID(unsigned value) { return (value << 16); }
        static constexpr unsigned NAKSTS_POS = 17;
        static constexpr unsigned NAKSTS_MASK = 0x00020000;
        static constexpr unsigned NAKSTS(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned SNPM_POS = 20;
        static constexpr unsigned SNPM_MASK = 0x00100000;
        static constexpr unsigned SNPM(unsigned value) { return (value << 20); }
        static constexpr unsigned Stall_POS = 21;
        static constexpr unsigned Stall_MASK = 0x00200000;
        static constexpr unsigned Stall(unsigned value) { return (value << 21); }
        static constexpr unsigned CNAK_POS = 26;
        static constexpr unsigned CNAK_MASK = 0x04000000;
        static constexpr unsigned CNAK(unsigned value) { return (value << 26); }
        static constexpr unsigned SNAK_POS = 27;
        static constexpr unsigned SNAK_MASK = 0x08000000;
        static constexpr unsigned SNAK(unsigned value) { return (value << 27); }
        static constexpr unsigned SD0PID_SEVNFRM_POS = 28;
        static constexpr unsigned SD0PID_SEVNFRM_MASK = 0x10000000;
        static constexpr unsigned SD0PID_SEVNFRM(unsigned value) { return (value << 28); }
        static constexpr unsigned SODDFRM_POS = 29;
        static constexpr unsigned SODDFRM_MASK = 0x20000000;
        static constexpr unsigned SODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned EPDIS_POS = 30;
        static constexpr unsigned EPDIS_MASK = 0x40000000;
        static constexpr unsigned EPDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned EPENA_POS = 31;
        static constexpr unsigned EPENA_MASK = 0x80000000;
        static constexpr unsigned EPENA(unsigned value) { return (value << 31); }
    } DOEPCTL3;

    uint8_t Reserved30[4];

    volatile union DOEPINT3_T // DOEPINT3: device endpoint-3 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPINT3_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 XFRC
            unsigned EPDISD  : 1; // bit 1 EPDISD
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 STUP
            unsigned OTEPDIS : 1; // bit 4 OTEPDIS
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 B2BSTUP
            unsigned         : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned EPDISD_POS = 1;
        static constexpr unsigned EPDISD_MASK = 0x00000002;
        static constexpr unsigned EPDISD(unsigned value) { return (value << 1); }
        static constexpr unsigned STUP_POS = 3;
        static constexpr unsigned STUP_MASK = 0x00000008;
        static constexpr unsigned STUP(unsigned value) { return (value << 3); }
        static constexpr unsigned OTEPDIS_POS = 4;
        static constexpr unsigned OTEPDIS_MASK = 0x00000010;
        static constexpr unsigned OTEPDIS(unsigned value) { return (value << 4); }
        static constexpr unsigned B2BSTUP_POS = 6;
        static constexpr unsigned B2BSTUP_MASK = 0x00000040;
        static constexpr unsigned B2BSTUP(unsigned value) { return (value << 6); }
    } DOEPINT3;

    uint8_t Reserved31[4];

    volatile union DOEPTSIZ3_T // DOEPTSIZ3: device OUT endpoint-3 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOEPTSIZ3_BIT_T
        {
            unsigned XFRSIZ         : 19; // bits 0..18 Transfer size
            unsigned PKTCNT         : 10; // bits 19..28 Packet count
            unsigned RXDPID_STUPCNT : 2; // bits 29..30 Received data PID/SETUP packet count
            unsigned                : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned RXDPID_STUPCNT_POS = 29;
        static constexpr unsigned RXDPID_STUPCNT_MASK = 0x60000000;
        static constexpr unsigned RXDPID_STUPCNT(unsigned value) { return (value << 29); }
    } DOEPTSIZ3;

}; // struct USB_OTG_DEVICE_T

static_assert(sizeof(USB_OTG_DEVICE_T) == USB_OTG_DEVICE_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp