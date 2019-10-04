#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) OTG_HS_HOST_T
{
    static constexpr size_t INSTANCE_SIZE = 632;
    static constexpr size_t PADDED_INSTANCE_SIZE = 632;
    static constexpr intptr_t BASE_ADDRESS = 0x40040400;

    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCFG = 0x00;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HFIR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HFNUM = 0x08;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HPTXSTS = 0x10;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HAINT = 0x14;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HAINTMSK = 0x18;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HPRT = 0x40;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR0 = 0x100;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR1 = 0x120;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR2 = 0x140;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR3 = 0x160;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR4 = 0x180;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR5 = 0x1a0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR6 = 0x1c0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR7 = 0x1e0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR8 = 0x200;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR9 = 0x220;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR10 = 0x240;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCCHAR11 = 0x260;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT0 = 0x104;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT1 = 0x124;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT2 = 0x144;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT3 = 0x164;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT4 = 0x184;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT5 = 0x1a4;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT6 = 0x1c4;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT7 = 0x1e4;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT8 = 0x204;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT9 = 0x224;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT10 = 0x244;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCSPLT11 = 0x264;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT0 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT1 = 0x128;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT2 = 0x148;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT3 = 0x168;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT4 = 0x188;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT5 = 0x1a8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT6 = 0x1c8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT7 = 0x1e8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT8 = 0x208;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT9 = 0x228;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT10 = 0x248;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINT11 = 0x268;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK0 = 0x10c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK1 = 0x12c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK2 = 0x14c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK3 = 0x16c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK4 = 0x18c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK5 = 0x1ac;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK6 = 0x1cc;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK7 = 0x1ec;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK8 = 0x20c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK9 = 0x22c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK10 = 0x24c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCINTMSK11 = 0x26c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ0 = 0x110;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ1 = 0x130;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ2 = 0x150;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ3 = 0x170;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ4 = 0x190;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ5 = 0x1b0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ6 = 0x1d0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ7 = 0x1f0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ8 = 0x210;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ9 = 0x230;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ10 = 0x250;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCTSIZ11 = 0x270;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA0 = 0x114;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA1 = 0x134;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA2 = 0x154;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA3 = 0x174;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA4 = 0x194;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA5 = 0x1b4;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA6 = 0x1d4;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA7 = 0x1f4;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA8 = 0x214;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA9 = 0x234;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA10 = 0x254;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_HCDMA11 = 0x274;

    volatile union OTG_HS_HCFG_T // OTG_HS_HCFG: OTG_HS host configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCFG_BIT_T
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
    } OTG_HS_HCFG;

    volatile union OTG_HS_HFIR_T // OTG_HS_HFIR: OTG_HS Host frame interval register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HFIR_BIT_T
        {
            unsigned FRIVL : 16; // bits 0..15 Frame interval
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned FRIVL_POS = 0;
        static constexpr unsigned FRIVL_MASK = 0x0000ffff;
        static constexpr unsigned FRIVL(unsigned value) { return (value << 0); }
    } OTG_HS_HFIR;

    volatile union OTG_HS_HFNUM_T // OTG_HS_HFNUM: OTG_HS host frame number/frame time remaining register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HFNUM_BIT_T
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
    } OTG_HS_HFNUM;

    uint8_t Reserved1[4];

    volatile union OTG_HS_HPTXSTS_T // OTG_HS_HPTXSTS: OTG_HS_Host periodic transmit FIFO/queue status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HPTXSTS_BIT_T
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
    } OTG_HS_HPTXSTS;

    volatile union OTG_HS_HAINT_T // OTG_HS_HAINT: OTG_HS Host all channels interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HAINT_BIT_T
        {
            unsigned HAINT : 16; // bits 0..15 Channel interrupts
            unsigned       : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned HAINT_POS = 0;
        static constexpr unsigned HAINT_MASK = 0x0000ffff;
        static constexpr unsigned HAINT(unsigned value) { return (value << 0); }
    } OTG_HS_HAINT;

    volatile union OTG_HS_HAINTMSK_T // OTG_HS_HAINTMSK: OTG_HS host all channels interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HAINTMSK_BIT_T
        {
            unsigned HAINTM : 16; // bits 0..15 Channel interrupt mask
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned HAINTM_POS = 0;
        static constexpr unsigned HAINTM_MASK = 0x0000ffff;
        static constexpr unsigned HAINTM(unsigned value) { return (value << 0); }
    } OTG_HS_HAINTMSK;

    uint8_t Reserved2[36];

    volatile union OTG_HS_HPRT_T // OTG_HS_HPRT: OTG_HS host port control and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HPRT_BIT_T
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
    } OTG_HS_HPRT;

    uint8_t Reserved3[188];

    volatile union OTG_HS_HCCHAR0_T // OTG_HS_HCCHAR0: OTG_HS host channel-0 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR0_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR0;

    volatile union OTG_HS_HCSPLT0_T // OTG_HS_HCSPLT0: OTG_HS host channel-0 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT0_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT0;

    volatile union OTG_HS_HCINT0_T // OTG_HS_HCINT0: OTG_HS host channel-11 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT0_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT0;

    volatile union OTG_HS_HCINTMSK0_T // OTG_HS_HCINTMSK0: OTG_HS host channel-11 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK0_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK0;

    volatile union OTG_HS_HCTSIZ0_T // OTG_HS_HCTSIZ0: OTG_HS host channel-11 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ0_BIT_T
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
    } OTG_HS_HCTSIZ0;

    volatile union OTG_HS_HCDMA0_T // OTG_HS_HCDMA0: OTG_HS host channel-0 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA0_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA0;

    uint8_t Reserved4[8];

    volatile union OTG_HS_HCCHAR1_T // OTG_HS_HCCHAR1: OTG_HS host channel-1 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR1_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR1;

    volatile union OTG_HS_HCSPLT1_T // OTG_HS_HCSPLT1: OTG_HS host channel-1 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT1_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT1;

    volatile union OTG_HS_HCINT1_T // OTG_HS_HCINT1: OTG_HS host channel-1 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT1_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT1;

    volatile union OTG_HS_HCINTMSK1_T // OTG_HS_HCINTMSK1: OTG_HS host channel-1 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK1_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK1;

    volatile union OTG_HS_HCTSIZ1_T // OTG_HS_HCTSIZ1: OTG_HS host channel-1 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ1_BIT_T
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
    } OTG_HS_HCTSIZ1;

    volatile union OTG_HS_HCDMA1_T // OTG_HS_HCDMA1: OTG_HS host channel-1 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA1_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA1;

    uint8_t Reserved5[8];

    volatile union OTG_HS_HCCHAR2_T // OTG_HS_HCCHAR2: OTG_HS host channel-2 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR2_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR2;

    volatile union OTG_HS_HCSPLT2_T // OTG_HS_HCSPLT2: OTG_HS host channel-2 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT2_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT2;

    volatile union OTG_HS_HCINT2_T // OTG_HS_HCINT2: OTG_HS host channel-2 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT2_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT2;

    volatile union OTG_HS_HCINTMSK2_T // OTG_HS_HCINTMSK2: OTG_HS host channel-2 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK2_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK2;

    volatile union OTG_HS_HCTSIZ2_T // OTG_HS_HCTSIZ2: OTG_HS host channel-2 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ2_BIT_T
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
    } OTG_HS_HCTSIZ2;

    volatile union OTG_HS_HCDMA2_T // OTG_HS_HCDMA2: OTG_HS host channel-2 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA2_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA2;

    uint8_t Reserved6[8];

    volatile union OTG_HS_HCCHAR3_T // OTG_HS_HCCHAR3: OTG_HS host channel-3 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR3_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR3;

    volatile union OTG_HS_HCSPLT3_T // OTG_HS_HCSPLT3: OTG_HS host channel-3 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT3_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT3;

    volatile union OTG_HS_HCINT3_T // OTG_HS_HCINT3: OTG_HS host channel-3 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT3_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT3;

    volatile union OTG_HS_HCINTMSK3_T // OTG_HS_HCINTMSK3: OTG_HS host channel-3 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK3_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK3;

    volatile union OTG_HS_HCTSIZ3_T // OTG_HS_HCTSIZ3: OTG_HS host channel-3 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ3_BIT_T
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
    } OTG_HS_HCTSIZ3;

    volatile union OTG_HS_HCDMA3_T // OTG_HS_HCDMA3: OTG_HS host channel-3 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA3_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA3;

    uint8_t Reserved7[8];

    volatile union OTG_HS_HCCHAR4_T // OTG_HS_HCCHAR4: OTG_HS host channel-4 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR4_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR4;

    volatile union OTG_HS_HCSPLT4_T // OTG_HS_HCSPLT4: OTG_HS host channel-4 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT4_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT4;

    volatile union OTG_HS_HCINT4_T // OTG_HS_HCINT4: OTG_HS host channel-4 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT4_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT4;

    volatile union OTG_HS_HCINTMSK4_T // OTG_HS_HCINTMSK4: OTG_HS host channel-4 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK4_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK4;

    volatile union OTG_HS_HCTSIZ4_T // OTG_HS_HCTSIZ4: OTG_HS host channel-4 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ4_BIT_T
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
    } OTG_HS_HCTSIZ4;

    volatile union OTG_HS_HCDMA4_T // OTG_HS_HCDMA4: OTG_HS host channel-4 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA4_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA4;

    uint8_t Reserved8[8];

    volatile union OTG_HS_HCCHAR5_T // OTG_HS_HCCHAR5: OTG_HS host channel-5 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR5_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR5;

    volatile union OTG_HS_HCSPLT5_T // OTG_HS_HCSPLT5: OTG_HS host channel-5 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT5_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT5;

    volatile union OTG_HS_HCINT5_T // OTG_HS_HCINT5: OTG_HS host channel-5 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT5_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT5;

    volatile union OTG_HS_HCINTMSK5_T // OTG_HS_HCINTMSK5: OTG_HS host channel-5 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK5_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK5;

    volatile union OTG_HS_HCTSIZ5_T // OTG_HS_HCTSIZ5: OTG_HS host channel-5 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ5_BIT_T
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
    } OTG_HS_HCTSIZ5;

    volatile union OTG_HS_HCDMA5_T // OTG_HS_HCDMA5: OTG_HS host channel-5 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA5_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA5;

    uint8_t Reserved9[8];

    volatile union OTG_HS_HCCHAR6_T // OTG_HS_HCCHAR6: OTG_HS host channel-6 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR6_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR6;

    volatile union OTG_HS_HCSPLT6_T // OTG_HS_HCSPLT6: OTG_HS host channel-6 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT6_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT6;

    volatile union OTG_HS_HCINT6_T // OTG_HS_HCINT6: OTG_HS host channel-6 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT6_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT6;

    volatile union OTG_HS_HCINTMSK6_T // OTG_HS_HCINTMSK6: OTG_HS host channel-6 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK6_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK6;

    volatile union OTG_HS_HCTSIZ6_T // OTG_HS_HCTSIZ6: OTG_HS host channel-6 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ6_BIT_T
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
    } OTG_HS_HCTSIZ6;

    volatile union OTG_HS_HCDMA6_T // OTG_HS_HCDMA6: OTG_HS host channel-6 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA6_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA6;

    uint8_t Reserved10[8];

    volatile union OTG_HS_HCCHAR7_T // OTG_HS_HCCHAR7: OTG_HS host channel-7 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR7_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR7;

    volatile union OTG_HS_HCSPLT7_T // OTG_HS_HCSPLT7: OTG_HS host channel-7 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT7_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT7;

    volatile union OTG_HS_HCINT7_T // OTG_HS_HCINT7: OTG_HS host channel-7 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT7_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT7;

    volatile union OTG_HS_HCINTMSK7_T // OTG_HS_HCINTMSK7: OTG_HS host channel-7 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK7_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK7;

    volatile union OTG_HS_HCTSIZ7_T // OTG_HS_HCTSIZ7: OTG_HS host channel-7 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ7_BIT_T
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
    } OTG_HS_HCTSIZ7;

    volatile union OTG_HS_HCDMA7_T // OTG_HS_HCDMA7: OTG_HS host channel-7 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA7_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA7;

    uint8_t Reserved11[8];

    volatile union OTG_HS_HCCHAR8_T // OTG_HS_HCCHAR8: OTG_HS host channel-8 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR8_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR8;

    volatile union OTG_HS_HCSPLT8_T // OTG_HS_HCSPLT8: OTG_HS host channel-8 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT8_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT8;

    volatile union OTG_HS_HCINT8_T // OTG_HS_HCINT8: OTG_HS host channel-8 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT8_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT8;

    volatile union OTG_HS_HCINTMSK8_T // OTG_HS_HCINTMSK8: OTG_HS host channel-8 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK8_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK8;

    volatile union OTG_HS_HCTSIZ8_T // OTG_HS_HCTSIZ8: OTG_HS host channel-8 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ8_BIT_T
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
    } OTG_HS_HCTSIZ8;

    volatile union OTG_HS_HCDMA8_T // OTG_HS_HCDMA8: OTG_HS host channel-8 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA8_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA8;

    uint8_t Reserved12[8];

    volatile union OTG_HS_HCCHAR9_T // OTG_HS_HCCHAR9: OTG_HS host channel-9 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR9_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR9;

    volatile union OTG_HS_HCSPLT9_T // OTG_HS_HCSPLT9: OTG_HS host channel-9 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT9_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT9;

    volatile union OTG_HS_HCINT9_T // OTG_HS_HCINT9: OTG_HS host channel-9 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT9_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT9;

    volatile union OTG_HS_HCINTMSK9_T // OTG_HS_HCINTMSK9: OTG_HS host channel-9 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK9_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK9;

    volatile union OTG_HS_HCTSIZ9_T // OTG_HS_HCTSIZ9: OTG_HS host channel-9 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ9_BIT_T
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
    } OTG_HS_HCTSIZ9;

    volatile union OTG_HS_HCDMA9_T // OTG_HS_HCDMA9: OTG_HS host channel-9 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA9_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA9;

    uint8_t Reserved13[8];

    volatile union OTG_HS_HCCHAR10_T // OTG_HS_HCCHAR10: OTG_HS host channel-10 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR10_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR10;

    volatile union OTG_HS_HCSPLT10_T // OTG_HS_HCSPLT10: OTG_HS host channel-10 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT10_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT10;

    volatile union OTG_HS_HCINT10_T // OTG_HS_HCINT10: OTG_HS host channel-10 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT10_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT10;

    volatile union OTG_HS_HCINTMSK10_T // OTG_HS_HCINTMSK10: OTG_HS host channel-10 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK10_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK10;

    volatile union OTG_HS_HCTSIZ10_T // OTG_HS_HCTSIZ10: OTG_HS host channel-10 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ10_BIT_T
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
    } OTG_HS_HCTSIZ10;

    volatile union OTG_HS_HCDMA10_T // OTG_HS_HCDMA10: OTG_HS host channel-10 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA10_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA10;

    uint8_t Reserved14[8];

    volatile union OTG_HS_HCCHAR11_T // OTG_HS_HCCHAR11: OTG_HS host channel-11 characteristics register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCCHAR11_BIT_T
        {
            unsigned MPSIZ  : 11; // bits 0..10 Maximum packet size
            unsigned EPNUM  : 4; // bits 11..14 Endpoint number
            unsigned EPDIR  : 1; // bit 15 Endpoint direction
            unsigned        : 1; // bit 16 unused
            unsigned LSDEV  : 1; // bit 17 Low-speed device
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned MC     : 2; // bits 20..21 Multi Count (MC) / Error Count (EC)
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
        static constexpr unsigned MC_POS = 20;
        static constexpr unsigned MC_MASK = 0x00300000;
        static constexpr unsigned MC(unsigned value) { return (value << 20); }
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
    } OTG_HS_HCCHAR11;

    volatile union OTG_HS_HCSPLT11_T // OTG_HS_HCSPLT11: OTG_HS host channel-11 split control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCSPLT11_BIT_T
        {
            unsigned PRTADDR   : 7; // bits 0..6 Port address
            unsigned HUBADDR   : 7; // bits 7..13 Hub address
            unsigned XACTPOS   : 2; // bits 14..15 XACTPOS
            unsigned COMPLSPLT : 1; // bit 16 Do complete split
            unsigned           : 14; // bits 17..30 unused
            unsigned SPLITEN   : 1; // bit 31 Split enable    
        } bit;
    
        static constexpr unsigned PRTADDR_POS = 0;
        static constexpr unsigned PRTADDR_MASK = 0x0000007f;
        static constexpr unsigned PRTADDR(unsigned value) { return (value << 0); }
        static constexpr unsigned HUBADDR_POS = 7;
        static constexpr unsigned HUBADDR_MASK = 0x00003f80;
        static constexpr unsigned HUBADDR(unsigned value) { return (value << 7); }
        static constexpr unsigned XACTPOS_POS = 14;
        static constexpr unsigned XACTPOS_MASK = 0x0000c000;
        static constexpr unsigned XACTPOS(unsigned value) { return (value << 14); }
        static constexpr unsigned COMPLSPLT_POS = 16;
        static constexpr unsigned COMPLSPLT_MASK = 0x00010000;
        static constexpr unsigned COMPLSPLT(unsigned value) { return (value << 16); }
        static constexpr unsigned SPLITEN_POS = 31;
        static constexpr unsigned SPLITEN_MASK = 0x80000000;
        static constexpr unsigned SPLITEN(unsigned value) { return (value << 31); }
    } OTG_HS_HCSPLT11;

    volatile union OTG_HS_HCINT11_T // OTG_HS_HCINT11: OTG_HS host channel-11 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINT11_BIT_T
        {
            unsigned XFRC   : 1; // bit 0 Transfer completed
            unsigned CHH    : 1; // bit 1 Channel halted
            unsigned AHBERR : 1; // bit 2 AHB error
            unsigned STALL  : 1; // bit 3 STALL response received interrupt
            unsigned NAK    : 1; // bit 4 NAK response received interrupt
            unsigned ACK    : 1; // bit 5 ACK response received/transmitted interrupt
            unsigned NYET   : 1; // bit 6 Response received interrupt
            unsigned TXERR  : 1; // bit 7 Transaction error
            unsigned BBERR  : 1; // bit 8 Babble error
            unsigned FRMOR  : 1; // bit 9 Frame overrun
            unsigned DTERR  : 1; // bit 10 Data toggle error
            unsigned        : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned XFRC_POS = 0;
        static constexpr unsigned XFRC_MASK = 0x00000001;
        static constexpr unsigned XFRC(unsigned value) { return (value << 0); }
        static constexpr unsigned CHH_POS = 1;
        static constexpr unsigned CHH_MASK = 0x00000002;
        static constexpr unsigned CHH(unsigned value) { return (value << 1); }
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
        static constexpr unsigned STALL_POS = 3;
        static constexpr unsigned STALL_MASK = 0x00000008;
        static constexpr unsigned STALL(unsigned value) { return (value << 3); }
        static constexpr unsigned NAK_POS = 4;
        static constexpr unsigned NAK_MASK = 0x00000010;
        static constexpr unsigned NAK(unsigned value) { return (value << 4); }
        static constexpr unsigned ACK_POS = 5;
        static constexpr unsigned ACK_MASK = 0x00000020;
        static constexpr unsigned ACK(unsigned value) { return (value << 5); }
        static constexpr unsigned NYET_POS = 6;
        static constexpr unsigned NYET_MASK = 0x00000040;
        static constexpr unsigned NYET(unsigned value) { return (value << 6); }
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
    } OTG_HS_HCINT11;

    volatile union OTG_HS_HCINTMSK11_T // OTG_HS_HCINTMSK11: OTG_HS host channel-11 interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCINTMSK11_BIT_T
        {
            unsigned XFRCM  : 1; // bit 0 Transfer completed mask
            unsigned CHHM   : 1; // bit 1 Channel halted mask
            unsigned AHBERR : 1; // bit 2 AHB error
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
        static constexpr unsigned AHBERR_POS = 2;
        static constexpr unsigned AHBERR_MASK = 0x00000004;
        static constexpr unsigned AHBERR(unsigned value) { return (value << 2); }
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
    } OTG_HS_HCINTMSK11;

    volatile union OTG_HS_HCTSIZ11_T // OTG_HS_HCTSIZ11: OTG_HS host channel-11 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCTSIZ11_BIT_T
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
    } OTG_HS_HCTSIZ11;

    volatile union OTG_HS_HCDMA11_T // OTG_HS_HCDMA11: OTG_HS host channel-11 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_HCDMA11_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_HCDMA11;

}; // struct OTG_HS_HOST_T

static_assert(sizeof(OTG_HS_HOST_T) == OTG_HS_HOST_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp