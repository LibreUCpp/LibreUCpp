#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) OTG_FS_HOST_T
{
    static constexpr size_t INSTANCE_SIZE = 500;
    static constexpr intptr_t BASE_ADDRESS = 0x50000400;

    static constexpr intptr_t ADDR_OFFSET_FS_HCFG = 0x00;
    static constexpr intptr_t ADDR_OFFSET_HFIR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_FS_HFNUM = 0x08;
    static constexpr intptr_t ADDR_OFFSET_FS_HPTXSTS = 0x10;
    static constexpr intptr_t ADDR_OFFSET_HAINT = 0x14;
    static constexpr intptr_t ADDR_OFFSET_HAINTMSK = 0x18;
    static constexpr intptr_t ADDR_OFFSET_FS_HPRT = 0x40;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR0 = 0x100;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR1 = 0x120;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR2 = 0x140;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR3 = 0x160;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR4 = 0x180;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR5 = 0x1a0;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR6 = 0x1c0;
    static constexpr intptr_t ADDR_OFFSET_FS_HCCHAR7 = 0x1e0;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT0 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT1 = 0x128;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT2 = 0x148;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT3 = 0x168;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT4 = 0x188;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT5 = 0x1a8;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT6 = 0x1c8;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINT7 = 0x1e8;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK0 = 0x10c;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK1 = 0x12c;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK2 = 0x14c;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK3 = 0x16c;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK4 = 0x18c;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK5 = 0x1ac;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK6 = 0x1cc;
    static constexpr intptr_t ADDR_OFFSET_FS_HCINTMSK7 = 0x1ec;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ0 = 0x110;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ1 = 0x130;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ2 = 0x150;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ3 = 0x170;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ4 = 0x190;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ5 = 0x1b0;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ6 = 0x1d0;
    static constexpr intptr_t ADDR_OFFSET_FS_HCTSIZ7 = 0x1f0;

    volatile union FS_HCFG_T // FS_HCFG: OTG_FS host configuration register (OTG_FS_HCFG) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCFG_BIT_T
        {
            unsigned FSLSPCS : 2; // bits 0..1 FS/LS PHY clock select
            unsigned FSLSS   : 1; // bit 2 FS- and LS-only support
            unsigned         : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned FSLSPCS_POS = 0;
        static constexpr unsigned FSLSPCS_MASK = 0x00000003;
        static constexpr unsigned FSLSPCS(unsigned value) { return (value << 0); }
        static constexpr unsigned FSLSS_POS = 2;
        static constexpr unsigned FSLSS_MASK = 0x00000004;
        static constexpr unsigned FSLSS(unsigned value) { return (value << 2); }
    } FS_HCFG;

    volatile union HFIR_T // HFIR: OTG_FS Host frame interval register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HFIR_BIT_T
        {
            unsigned FRIVL : 16; // bits 0..15 Frame interval
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned FRIVL_POS = 0;
        static constexpr unsigned FRIVL_MASK = 0x0000ffff;
        static constexpr unsigned FRIVL(unsigned value) { return (value << 0); }
    } HFIR;

    volatile union FS_HFNUM_T // FS_HFNUM: OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HFNUM_BIT_T
        {
            unsigned FRNUM : 16; // bits 0..15 Frame number
            unsigned FTREM : 16; // bits 16..31 Frame time remaining    
        } bit;
    
        static constexpr unsigned FRNUM_POS = 0;
        static constexpr unsigned FRNUM_MASK = 0x0000ffff;
        static constexpr unsigned FRNUM(unsigned value) { return (value << 0); }
        static constexpr unsigned FTREM_POS = 16;
        static constexpr unsigned FTREM_MASK = 0xffff0000;
        static constexpr unsigned FTREM(unsigned value) { return (value << 16); }
    } FS_HFNUM;

    uint8_t Reserved1[4];

    volatile union FS_HPTXSTS_T // FS_HPTXSTS: OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HPTXSTS_BIT_T
        {
            unsigned PTXFSAVL : 16; // bits 0..15 Periodic transmit data FIFO space available
            unsigned PTXQSAV  : 8; // bits 16..23 Periodic transmit request queue space available
            unsigned PTXQTOP  : 8; // bits 24..31 Top of the periodic transmit request queue    
        } bit;
    
        static constexpr unsigned PTXFSAVL_POS = 0;
        static constexpr unsigned PTXFSAVL_MASK = 0x0000ffff;
        static constexpr unsigned PTXFSAVL(unsigned value) { return (value << 0); }
        static constexpr unsigned PTXQSAV_POS = 16;
        static constexpr unsigned PTXQSAV_MASK = 0x00ff0000;
        static constexpr unsigned PTXQSAV(unsigned value) { return (value << 16); }
        static constexpr unsigned PTXQTOP_POS = 24;
        static constexpr unsigned PTXQTOP_MASK = 0xff000000;
        static constexpr unsigned PTXQTOP(unsigned value) { return (value << 24); }
    } FS_HPTXSTS;

    volatile union HAINT_T // HAINT: OTG_FS Host all channels interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HAINT_BIT_T
        {
            unsigned HAINT : 16; // bits 0..15 Channel interrupts
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned HAINT_POS = 0;
        static constexpr unsigned HAINT_MASK = 0x0000ffff;
        static constexpr unsigned HAINT(unsigned value) { return (value << 0); }
    } HAINT;

    volatile union HAINTMSK_T // HAINTMSK: OTG_FS host all channels interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HAINTMSK_BIT_T
        {
            unsigned HAINTM : 16; // bits 0..15 Channel interrupt mask
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned HAINTM_POS = 0;
        static constexpr unsigned HAINTM_MASK = 0x0000ffff;
        static constexpr unsigned HAINTM(unsigned value) { return (value << 0); }
    } HAINTMSK;

    uint8_t Reserved2[36];

    volatile union FS_HPRT_T // FS_HPRT: OTG_FS host port control and status register (OTG_FS_HPRT) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HPRT_BIT_T
        {
            unsigned PCSTS   : 1; // bit 0 Port connect status
            unsigned PCDET   : 1; // bit 1 Port connect detected
            unsigned PENA    : 1; // bit 2 Port enable
            unsigned PENCHNG : 1; // bit 3 Port enable/disable change
            unsigned POCA    : 1; // bit 4 Port overcurrent active
            unsigned POCCHNG : 1; // bit 5 Port overcurrent change
            unsigned PRES    : 1; // bit 6 Port resume
            unsigned PSUSP   : 1; // bit 7 Port suspend
            unsigned PRST    : 1; // bit 8 Port reset
            unsigned         : 1; // bit 9 unused
            unsigned PLSTS   : 2; // bits 10..11 Port line status
            unsigned PPWR    : 1; // bit 12 Port power
            unsigned PTCTL   : 4; // bits 13..16 Port test control
            unsigned PSPD    : 2; // bits 17..18 Port speed
            unsigned         : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned PCSTS_POS = 0;
        static constexpr unsigned PCSTS_MASK = 0x00000001;
        static constexpr unsigned PCSTS(unsigned value) { return (value << 0); }
        static constexpr unsigned PCDET_POS = 1;
        static constexpr unsigned PCDET_MASK = 0x00000002;
        static constexpr unsigned PCDET(unsigned value) { return (value << 1); }
        static constexpr unsigned PENA_POS = 2;
        static constexpr unsigned PENA_MASK = 0x00000004;
        static constexpr unsigned PENA(unsigned value) { return (value << 2); }
        static constexpr unsigned PENCHNG_POS = 3;
        static constexpr unsigned PENCHNG_MASK = 0x00000008;
        static constexpr unsigned PENCHNG(unsigned value) { return (value << 3); }
        static constexpr unsigned POCA_POS = 4;
        static constexpr unsigned POCA_MASK = 0x00000010;
        static constexpr unsigned POCA(unsigned value) { return (value << 4); }
        static constexpr unsigned POCCHNG_POS = 5;
        static constexpr unsigned POCCHNG_MASK = 0x00000020;
        static constexpr unsigned POCCHNG(unsigned value) { return (value << 5); }
        static constexpr unsigned PRES_POS = 6;
        static constexpr unsigned PRES_MASK = 0x00000040;
        static constexpr unsigned PRES(unsigned value) { return (value << 6); }
        static constexpr unsigned PSUSP_POS = 7;
        static constexpr unsigned PSUSP_MASK = 0x00000080;
        static constexpr unsigned PSUSP(unsigned value) { return (value << 7); }
        static constexpr unsigned PRST_POS = 8;
        static constexpr unsigned PRST_MASK = 0x00000100;
        static constexpr unsigned PRST(unsigned value) { return (value << 8); }
        static constexpr unsigned PLSTS_POS = 10;
        static constexpr unsigned PLSTS_MASK = 0x00000c00;
        static constexpr unsigned PLSTS(unsigned value) { return (value << 10); }
        static constexpr unsigned PPWR_POS = 12;
        static constexpr unsigned PPWR_MASK = 0x00001000;
        static constexpr unsigned PPWR(unsigned value) { return (value << 12); }
        static constexpr unsigned PTCTL_POS = 13;
        static constexpr unsigned PTCTL_MASK = 0x0001e000;
        static constexpr unsigned PTCTL(unsigned value) { return (value << 13); }
        static constexpr unsigned PSPD_POS = 17;
        static constexpr unsigned PSPD_MASK = 0x00060000;
        static constexpr unsigned PSPD(unsigned value) { return (value << 17); }
    } FS_HPRT;

    uint8_t Reserved3[188];

    volatile union FS_HCCHAR0_T // FS_HCCHAR0: OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR0_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR0;

    uint8_t Reserved4[4];

    volatile union FS_HCINT0_T // FS_HCINT0: OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT0_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT0;

    volatile union FS_HCINTMSK0_T // FS_HCINTMSK0: OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK0_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK0;

    volatile union FS_HCTSIZ0_T // FS_HCTSIZ0: OTG_FS host channel-0 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ0_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ0;

    uint8_t Reserved5[12];

    volatile union FS_HCCHAR1_T // FS_HCCHAR1: OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR1_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR1;

    uint8_t Reserved6[4];

    volatile union FS_HCINT1_T // FS_HCINT1: OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT1_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT1;

    volatile union FS_HCINTMSK1_T // FS_HCINTMSK1: OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK1_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK1;

    volatile union FS_HCTSIZ1_T // FS_HCTSIZ1: OTG_FS host channel-1 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ1_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ1;

    uint8_t Reserved7[12];

    volatile union FS_HCCHAR2_T // FS_HCCHAR2: OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR2_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR2;

    uint8_t Reserved8[4];

    volatile union FS_HCINT2_T // FS_HCINT2: OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT2_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT2;

    volatile union FS_HCINTMSK2_T // FS_HCINTMSK2: OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK2_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK2;

    volatile union FS_HCTSIZ2_T // FS_HCTSIZ2: OTG_FS host channel-2 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ2_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ2;

    uint8_t Reserved9[12];

    volatile union FS_HCCHAR3_T // FS_HCCHAR3: OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR3_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR3;

    uint8_t Reserved10[4];

    volatile union FS_HCINT3_T // FS_HCINT3: OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT3_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT3;

    volatile union FS_HCINTMSK3_T // FS_HCINTMSK3: OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK3_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK3;

    volatile union FS_HCTSIZ3_T // FS_HCTSIZ3: OTG_FS host channel-3 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ3_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ3;

    uint8_t Reserved11[12];

    volatile union FS_HCCHAR4_T // FS_HCCHAR4: OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR4_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR4;

    uint8_t Reserved12[4];

    volatile union FS_HCINT4_T // FS_HCINT4: OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT4_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT4;

    volatile union FS_HCINTMSK4_T // FS_HCINTMSK4: OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK4_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK4;

    volatile union FS_HCTSIZ4_T // FS_HCTSIZ4: OTG_FS host channel-x transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ4_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ4;

    uint8_t Reserved13[12];

    volatile union FS_HCCHAR5_T // FS_HCCHAR5: OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR5_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR5;

    uint8_t Reserved14[4];

    volatile union FS_HCINT5_T // FS_HCINT5: OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT5_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT5;

    volatile union FS_HCINTMSK5_T // FS_HCINTMSK5: OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK5_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK5;

    volatile union FS_HCTSIZ5_T // FS_HCTSIZ5: OTG_FS host channel-5 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ5_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ5;

    uint8_t Reserved15[12];

    volatile union FS_HCCHAR6_T // FS_HCCHAR6: OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR6_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR6;

    uint8_t Reserved16[4];

    volatile union FS_HCINT6_T // FS_HCINT6: OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT6_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT6;

    volatile union FS_HCINTMSK6_T // FS_HCINTMSK6: OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK6_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK6;

    volatile union FS_HCTSIZ6_T // FS_HCTSIZ6: OTG_FS host channel-6 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ6_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ6;

    uint8_t Reserved17[12];

    volatile union FS_HCCHAR7_T // FS_HCCHAR7: OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCCHAR7_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MCNT   : 2; // bits 20..21 Multicount
            unsigned DAD    : 7; // bits 22..28 Device address
            unsigned ODDFRM : 1; // bit 29 Odd frame
            unsigned CHDIS  : 1; // bit 30 Channel disable
            unsigned CHENA  : 1; // bit 31 Channel enable    
        } bit;
    
        static constexpr unsigned MPSIZ_POS = 0;
        static constexpr unsigned MPSIZ_MASK = 0x000007ff;
        static constexpr unsigned MPSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned EPNUM_POS = 11;
        static constexpr unsigned EPNUM_MASK = 0x00007800;
        static constexpr unsigned EPNUM(unsigned value) { return (value << 11); }
        static constexpr unsigned EPDIR_POS = 15;
        static constexpr unsigned EPDIR_MASK = 0x00008000;
        static constexpr unsigned EPDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned LSDEV_POS = 17;
        static constexpr unsigned LSDEV_MASK = 0x00020000;
        static constexpr unsigned LSDEV(unsigned value) { return (value << 17); }
        static constexpr unsigned EPTYP_POS = 18;
        static constexpr unsigned EPTYP_MASK = 0x000c0000;
        static constexpr unsigned EPTYP(unsigned value) { return (value << 18); }
        static constexpr unsigned MCNT_POS = 20;
        static constexpr unsigned MCNT_MASK = 0x00300000;
        static constexpr unsigned MCNT(unsigned value) { return (value << 20); }
        static constexpr unsigned DAD_POS = 22;
        static constexpr unsigned DAD_MASK = 0x1fc00000;
        static constexpr unsigned DAD(unsigned value) { return (value << 22); }
        static constexpr unsigned ODDFRM_POS = 29;
        static constexpr unsigned ODDFRM_MASK = 0x20000000;
        static constexpr unsigned ODDFRM(unsigned value) { return (value << 29); }
        static constexpr unsigned CHDIS_POS = 30;
        static constexpr unsigned CHDIS_MASK = 0x40000000;
        static constexpr unsigned CHDIS(unsigned value) { return (value << 30); }
        static constexpr unsigned CHENA_POS = 31;
        static constexpr unsigned CHENA_MASK = 0x80000000;
        static constexpr unsigned CHENA(unsigned value) { return (value << 31); }
    } FS_HCCHAR7;

    uint8_t Reserved18[4];

    volatile union FS_HCINT7_T // FS_HCINT7: OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINT7_BIT_T
        {
            unsigned XFRC  : 1; // bit 0 Transfer completed
            unsigned CHH   : 1; // bit 1 Channel halted
            unsigned       : 1; // bit 2 unused
            unsigned STALL : 1; // bit 3 STALL response received interrupt
            unsigned NAK   : 1; // bit 4 NAK response received interrupt
            unsigned ACK   : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned       : 1; // bit 6 unused
            unsigned TXERR : 1; // bit 7 Transaction error
            unsigned BBERR : 1; // bit 8 Babble error
            unsigned FRMOR : 1; // bit 9 Frame overrun
            unsigned DTERR : 1; // bit 10 Data toggle error
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned TXERR_POS = 7;
        static constexpr unsigned TXERR_MASK = 0x00000080;
        static constexpr unsigned TXERR(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERR_POS = 8;
        static constexpr unsigned BBERR_MASK = 0x00000100;
        static constexpr unsigned BBERR(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMOR_POS = 9;
        static constexpr unsigned FRMOR_MASK = 0x00000200;
        static constexpr unsigned FRMOR(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERR_POS = 10;
        static constexpr unsigned DTERR_MASK = 0x00000400;
        static constexpr unsigned DTERR(unsigned value) { return (value << 10); }
    } FS_HCINT7;

    volatile union FS_HCINTMSK7_T // FS_HCINTMSK7: OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCINTMSK7_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned        : 1; // bit 2 unused
            unsigned STALLM : 1; // bit 3 STALL response received interrupt mask
            unsigned NAKM   : 1; // bit 4 NAK response received interrupt mask
            unsigned ACKM   : 1; // bit 5 ACK response received/transmitted interrupt mask
            unsigned NYET   : 1; // bit 6 response received interrupt mask
            unsigned TXERRM : 1; // bit 7 Transaction error mask
            unsigned BBERRM : 1; // bit 8 Babble error mask
            unsigned FRMORM : 1; // bit 9 Frame overrun mask
            unsigned DTERRM : 1; // bit 10 Data toggle error mask
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRCM_POS = 0;
        static constexpr unsigned XFRCM_MASK = 0x00000001;
        static constexpr unsigned XFRCM(unsigned value) { return (value << 0); }
        static constexpr unsigned CHHM_POS = 1;
        static constexpr unsigned CHHM_MASK = 0x00000002;
        static constexpr unsigned CHHM(unsigned value) { return (value << 1); }
        static constexpr unsigned STALLM_POS = 3;
        static constexpr unsigned STALLM_MASK = 0x00000008;
        static constexpr unsigned STALLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NAKM_POS = 4;
        static constexpr unsigned NAKM_MASK = 0x00000010;
        static constexpr unsigned NAKM(unsigned value) { return (value << 4); }
        static constexpr unsigned ACKM_POS = 5;
        static constexpr unsigned ACKM_MASK = 0x00000020;
        static constexpr unsigned ACKM(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
        static constexpr unsigned TXERRM_POS = 7;
        static constexpr unsigned TXERRM_MASK = 0x00000080;
        static constexpr unsigned TXERRM(unsigned value) { return (value << 7); }
        static constexpr unsigned BBERRM_POS = 8;
        static constexpr unsigned BBERRM_MASK = 0x00000100;
        static constexpr unsigned BBERRM(unsigned value) { return (value << 8); }
        static constexpr unsigned FRMORM_POS = 9;
        static constexpr unsigned FRMORM_MASK = 0x00000200;
        static constexpr unsigned FRMORM(unsigned value) { return (value << 9); }
        static constexpr unsigned DTERRM_POS = 10;
        static constexpr unsigned DTERRM_MASK = 0x00000400;
        static constexpr unsigned DTERRM(unsigned value) { return (value << 10); }
    } FS_HCINTMSK7;

    volatile union FS_HCTSIZ7_T // FS_HCTSIZ7: OTG_FS host channel-7 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS_HCTSIZ7_BIT_T
        {
            unsigned XFRSIZ : 19; // bits 0..18 Transfer size
            unsigned PKTCNT : 10; // bits 19..28 Packet count
            unsigned DPID   : 2; // bits 29..30 Data PID
            unsigned        : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned XFRSIZ_POS = 0;
        static constexpr unsigned XFRSIZ_MASK = 0x0007ffff;
        static constexpr unsigned XFRSIZ(unsigned value) { return (value << 0); }
        static constexpr unsigned PKTCNT_POS = 19;
        static constexpr unsigned PKTCNT_MASK = 0x1ff80000;
        static constexpr unsigned PKTCNT(unsigned value) { return (value << 19); }
        static constexpr unsigned DPID_POS = 29;
        static constexpr unsigned DPID_MASK = 0x60000000;
        static constexpr unsigned DPID(unsigned value) { return (value << 29); }
    } FS_HCTSIZ7;

}; // struct OTG_FS_HOST_T

static_assert(sizeof(OTG_FS_HOST_T) == OTG_FS_HOST_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp