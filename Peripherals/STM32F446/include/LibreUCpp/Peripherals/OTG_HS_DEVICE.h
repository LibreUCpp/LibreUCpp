#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) OTG_HS_DEVICE_T
{
    static constexpr size_t INSTANCE_SIZE = 1004;
    static constexpr size_t PADDED_INSTANCE_SIZE = 1004;
    static constexpr intptr_t BASE_ADDRESS = 0x40040800;

    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DCFG = 0x00;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DCTL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DSTS = 0x08;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPMSK = 0x10;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPMSK = 0x14;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DAINT = 0x18;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DAINTMSK = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DVBUSDIS = 0x28;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DVBUSPULSE = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DTHRCTL = 0x30;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPEMPMSK = 0x34;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DEACHINT = 0x38;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DEACHINTMSK = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPEACHMSK1 = 0x40;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPEACHMSK1 = 0x80;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL0 = 0x100;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL1 = 0x120;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL2 = 0x140;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL3 = 0x160;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL4 = 0x180;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL5 = 0x1a0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL6 = 0x1c0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPCTL7 = 0x1e0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT0 = 0x108;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT1 = 0x128;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT2 = 0x148;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT3 = 0x168;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT4 = 0x188;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT5 = 0x1a8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT6 = 0x1c8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPINT7 = 0x1e8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTSIZ0 = 0x110;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPDMA1 = 0x114;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPDMA2 = 0x134;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPDMA3 = 0x154;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPDMA4 = 0x174;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPDMA5 = 0x194;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DTXFSTS0 = 0x118;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DTXFSTS1 = 0x138;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DTXFSTS2 = 0x158;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DTXFSTS3 = 0x178;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DTXFSTS4 = 0x198;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DTXFSTS5 = 0x1b8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTSIZ1 = 0x130;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTSIZ2 = 0x150;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTSIZ3 = 0x170;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTSIZ4 = 0x190;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DIEPTSIZ5 = 0x1b0;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPCTL0 = 0x300;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPCTL1 = 0x320;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPCTL2 = 0x340;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPCTL3 = 0x360;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT0 = 0x308;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT1 = 0x328;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT2 = 0x348;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT3 = 0x368;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT4 = 0x388;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT5 = 0x3a8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT6 = 0x3c8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPINT7 = 0x3e8;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPTSIZ0 = 0x310;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPTSIZ1 = 0x330;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPTSIZ2 = 0x350;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPTSIZ3 = 0x370;
    static constexpr intptr_t ADDR_OFFSET_OTG_HS_DOEPTSIZ4 = 0x390;

    volatile union OTG_HS_DCFG_T // OTG_HS_DCFG: OTG_HS device configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DCFG_BIT_T
        {
            unsigned DSPD      : 2; // bits 0..1 Device speed
            unsigned NZLSOHSK  : 1; // bit 2 Nonzero-length status OUT handshake
            unsigned           : 1; // bit 3 unused
            unsigned DAD       : 7; // bits 4..10 Device address
            unsigned PFIVL     : 2; // bits 11..12 Periodic (micro)frame interval
            unsigned           : 11; // bits 13..23 unused
            unsigned PERSCHIVL : 2; // bits 24..25 Periodic scheduling interval
            unsigned           : 6; // bits 26..31 unused    
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
        static constexpr unsigned PERSCHIVL_POS = 24;
        static constexpr unsigned PERSCHIVL_MASK = 0x03000000;
        static constexpr unsigned PERSCHIVL(unsigned value) { return (value << 24); }
    } OTG_HS_DCFG;

    volatile union OTG_HS_DCTL_T // OTG_HS_DCTL: OTG_HS device control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DCTL_BIT_T
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
    } OTG_HS_DCTL;

    volatile union OTG_HS_DSTS_T // OTG_HS_DSTS: OTG_HS device status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DSTS_BIT_T
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
    } OTG_HS_DSTS;

    uint8_t Reserved1[4];

    volatile union OTG_HS_DIEPMSK_T // OTG_HS_DIEPMSK: OTG_HS device IN endpoint common interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPMSK_BIT_T
        {
            unsigned XFRCM     : 1; // bit 0 Transfer completed interrupt mask
            unsigned EPDM      : 1; // bit 1 Endpoint disabled interrupt mask
            unsigned           : 1; // bit 2 unused
            unsigned TOM       : 1; // bit 3 Timeout condition mask (nonisochronous endpoints)
            unsigned ITTXFEMSK : 1; // bit 4 IN token received when TxFIFO empty mask
            unsigned INEPNMM   : 1; // bit 5 IN token received with EP mismatch mask
            unsigned INEPNEM   : 1; // bit 6 IN endpoint NAK effective mask
            unsigned           : 1; // bit 7 unused
            unsigned TXFURM    : 1; // bit 8 FIFO underrun mask
            unsigned BIM       : 1; // bit 9 BNA interrupt mask
            unsigned           : 22; // bits 10..31 unused    
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
        static constexpr unsigned TXFURM_POS = 8;
        static constexpr unsigned TXFURM_MASK = 0x00000100;
        static constexpr unsigned TXFURM(unsigned value) { return (value << 8); }
        static constexpr unsigned BIM_POS = 9;
        static constexpr unsigned BIM_MASK = 0x00000200;
        static constexpr unsigned BIM(unsigned value) { return (value << 9); }
    } OTG_HS_DIEPMSK;

    volatile union OTG_HS_DOEPMSK_T // OTG_HS_DOEPMSK: OTG_HS device OUT endpoint common interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPMSK_BIT_T
        {
            unsigned XFRCM   : 1; // bit 0 Transfer completed interrupt mask
            unsigned EPDM    : 1; // bit 1 Endpoint disabled interrupt mask
            unsigned         : 1; // bit 2 unused
            unsigned STUPM   : 1; // bit 3 SETUP phase done mask
            unsigned OTEPDM  : 1; // bit 4 OUT token received when endpoint disabled mask
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received mask
            unsigned         : 1; // bit 7 unused
            unsigned OPEM    : 1; // bit 8 OUT packet error mask
            unsigned BOIM    : 1; // bit 9 BNA interrupt mask
            unsigned         : 22; // bits 10..31 unused    
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
        static constexpr unsigned B2BSTUP_POS = 6;
        static constexpr unsigned B2BSTUP_MASK = 0x00000040;
        static constexpr unsigned B2BSTUP(unsigned value) { return (value << 6); }
        static constexpr unsigned OPEM_POS = 8;
        static constexpr unsigned OPEM_MASK = 0x00000100;
        static constexpr unsigned OPEM(unsigned value) { return (value << 8); }
        static constexpr unsigned BOIM_POS = 9;
        static constexpr unsigned BOIM_MASK = 0x00000200;
        static constexpr unsigned BOIM(unsigned value) { return (value << 9); }
    } OTG_HS_DOEPMSK;

    volatile union OTG_HS_DAINT_T // OTG_HS_DAINT: OTG_HS device all endpoints interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DAINT_BIT_T
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
    } OTG_HS_DAINT;

    volatile union OTG_HS_DAINTMSK_T // OTG_HS_DAINTMSK: OTG_HS all endpoints interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DAINTMSK_BIT_T
        {
            unsigned IEPM : 16; // bits 0..15 IN EP interrupt mask bits
            unsigned OEPM : 16; // bits 16..31 OUT EP interrupt mask bits    
        } bit;
    
        static constexpr unsigned IEPM_POS = 0;
        static constexpr unsigned IEPM_MASK = 0x0000ffff;
        static constexpr unsigned IEPM(unsigned value) { return (value << 0); }
        static constexpr unsigned OEPM_POS = 16;
        static constexpr unsigned OEPM_MASK = 0xffff0000;
        static constexpr unsigned OEPM(unsigned value) { return (value << 16); }
    } OTG_HS_DAINTMSK;

    uint8_t Reserved2[8];

    volatile union OTG_HS_DVBUSDIS_T // OTG_HS_DVBUSDIS: OTG_HS device VBUS discharge time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DVBUSDIS_BIT_T
        {
            unsigned VBUSDT : 16; // bits 0..15 Device VBUS discharge time
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned VBUSDT_POS = 0;
        static constexpr unsigned VBUSDT_MASK = 0x0000ffff;
        static constexpr unsigned VBUSDT(unsigned value) { return (value << 0); }
    } OTG_HS_DVBUSDIS;

    volatile union OTG_HS_DVBUSPULSE_T // OTG_HS_DVBUSPULSE: OTG_HS device VBUS pulsing time register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DVBUSPULSE_BIT_T
        {
            unsigned DVBUSP : 12; // bits 0..11 Device VBUS pulsing time
            unsigned        : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned DVBUSP_POS = 0;
        static constexpr unsigned DVBUSP_MASK = 0x00000fff;
        static constexpr unsigned DVBUSP(unsigned value) { return (value << 0); }
    } OTG_HS_DVBUSPULSE;

    volatile union OTG_HS_DTHRCTL_T // OTG_HS_DTHRCTL: OTG_HS Device threshold control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DTHRCTL_BIT_T
        {
            unsigned NONISOTHREN : 1; // bit 0 Nonisochronous IN endpoints threshold enable
            unsigned ISOTHREN    : 1; // bit 1 ISO IN endpoint threshold enable
            unsigned TXTHRLEN    : 9; // bits 2..10 Transmit threshold length
            unsigned             : 5; // bits 11..15 unused
            unsigned RXTHREN     : 1; // bit 16 Receive threshold enable
            unsigned RXTHRLEN    : 9; // bits 17..25 Receive threshold length
            unsigned             : 1; // bit 26 unused
            unsigned ARPEN       : 1; // bit 27 Arbiter parking enable
            unsigned             : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned NONISOTHREN_POS = 0;
        static constexpr unsigned NONISOTHREN_MASK = 0x00000001;
        static constexpr unsigned NONISOTHREN(unsigned value) { return (value << 0); }
        static constexpr unsigned ISOTHREN_POS = 1;
        static constexpr unsigned ISOTHREN_MASK = 0x00000002;
        static constexpr unsigned ISOTHREN(unsigned value) { return (value << 1); }
        static constexpr unsigned TXTHRLEN_POS = 2;
        static constexpr unsigned TXTHRLEN_MASK = 0x000007fc;
        static constexpr unsigned TXTHRLEN(unsigned value) { return (value << 2); }
        static constexpr unsigned RXTHREN_POS = 16;
        static constexpr unsigned RXTHREN_MASK = 0x00010000;
        static constexpr unsigned RXTHREN(unsigned value) { return (value << 16); }
        static constexpr unsigned RXTHRLEN_POS = 17;
        static constexpr unsigned RXTHRLEN_MASK = 0x03fe0000;
        static constexpr unsigned RXTHRLEN(unsigned value) { return (value << 17); }
        static constexpr unsigned ARPEN_POS = 27;
        static constexpr unsigned ARPEN_MASK = 0x08000000;
        static constexpr unsigned ARPEN(unsigned value) { return (value << 27); }
    } OTG_HS_DTHRCTL;

    volatile union OTG_HS_DIEPEMPMSK_T // OTG_HS_DIEPEMPMSK: OTG_HS device IN endpoint FIFO empty interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPEMPMSK_BIT_T
        {
            unsigned INEPTXFEM : 16; // bits 0..15 IN EP Tx FIFO empty interrupt mask bits
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTXFEM_POS = 0;
        static constexpr unsigned INEPTXFEM_MASK = 0x0000ffff;
        static constexpr unsigned INEPTXFEM(unsigned value) { return (value << 0); }
    } OTG_HS_DIEPEMPMSK;

    volatile union OTG_HS_DEACHINT_T // OTG_HS_DEACHINT: OTG_HS device each endpoint interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DEACHINT_BIT_T
        {
            unsigned         : 1; // bit 0 unused
            unsigned IEP1INT : 1; // bit 1 IN endpoint 1interrupt bit
            unsigned         : 15; // bits 2..16 unused
            unsigned OEP1INT : 1; // bit 17 OUT endpoint 1 interrupt bit
            unsigned         : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned IEP1INT_POS = 1;
        static constexpr unsigned IEP1INT_MASK = 0x00000002;
        static constexpr unsigned IEP1INT(unsigned value) { return (value << 1); }
        static constexpr unsigned OEP1INT_POS = 17;
        static constexpr unsigned OEP1INT_MASK = 0x00020000;
        static constexpr unsigned OEP1INT(unsigned value) { return (value << 17); }
    } OTG_HS_DEACHINT;

    volatile union OTG_HS_DEACHINTMSK_T // OTG_HS_DEACHINTMSK: OTG_HS device each endpoint interrupt register mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DEACHINTMSK_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned IEP1INTM : 1; // bit 1 IN Endpoint 1 interrupt mask bit
            unsigned          : 15; // bits 2..16 unused
            unsigned OEP1INTM : 1; // bit 17 OUT Endpoint 1 interrupt mask bit
            unsigned          : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned IEP1INTM_POS = 1;
        static constexpr unsigned IEP1INTM_MASK = 0x00000002;
        static constexpr unsigned IEP1INTM(unsigned value) { return (value << 1); }
        static constexpr unsigned OEP1INTM_POS = 17;
        static constexpr unsigned OEP1INTM_MASK = 0x00020000;
        static constexpr unsigned OEP1INTM(unsigned value) { return (value << 17); }
    } OTG_HS_DEACHINTMSK;

    volatile union OTG_HS_DIEPEACHMSK1_T // OTG_HS_DIEPEACHMSK1: OTG_HS device each in endpoint-1 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPEACHMSK1_BIT_T
        {
            unsigned XFRCM     : 1; // bit 0 Transfer completed interrupt mask
            unsigned EPDM      : 1; // bit 1 Endpoint disabled interrupt mask
            unsigned           : 1; // bit 2 unused
            unsigned TOM       : 1; // bit 3 Timeout condition mask (nonisochronous endpoints)
            unsigned ITTXFEMSK : 1; // bit 4 IN token received when TxFIFO empty mask
            unsigned INEPNMM   : 1; // bit 5 IN token received with EP mismatch mask
            unsigned INEPNEM   : 1; // bit 6 IN endpoint NAK effective mask
            unsigned           : 1; // bit 7 unused
            unsigned TXFURM    : 1; // bit 8 FIFO underrun mask
            unsigned BIM       : 1; // bit 9 BNA interrupt mask
            unsigned           : 3; // bits 10..12 unused
            unsigned NAKM      : 1; // bit 13 NAK interrupt mask
            unsigned           : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFURM_POS = 8;
        static constexpr unsigned TXFURM_MASK = 0x00000100;
        static constexpr unsigned TXFURM(unsigned value) { return (value << 8); }
        static constexpr unsigned BIM_POS = 9;
        static constexpr unsigned BIM_MASK = 0x00000200;
        static constexpr unsigned BIM(unsigned value) { return (value << 9); }
        static constexpr unsigned NAKM_POS = 13;
        static constexpr unsigned NAKM_MASK = 0x00002000;
        static constexpr unsigned NAKM(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPEACHMSK1;

    uint8_t Reserved3[60];

    volatile union OTG_HS_DOEPEACHMSK1_T // OTG_HS_DOEPEACHMSK1: OTG_HS device each OUT endpoint-1 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPEACHMSK1_BIT_T
        {
            unsigned XFRCM     : 1; // bit 0 Transfer completed interrupt mask
            unsigned EPDM      : 1; // bit 1 Endpoint disabled interrupt mask
            unsigned           : 1; // bit 2 unused
            unsigned TOM       : 1; // bit 3 Timeout condition mask
            unsigned ITTXFEMSK : 1; // bit 4 IN token received when TxFIFO empty mask
            unsigned INEPNMM   : 1; // bit 5 IN token received with EP mismatch mask
            unsigned INEPNEM   : 1; // bit 6 IN endpoint NAK effective mask
            unsigned           : 1; // bit 7 unused
            unsigned TXFURM    : 1; // bit 8 OUT packet error mask
            unsigned BIM       : 1; // bit 9 BNA interrupt mask
            unsigned           : 2; // bits 10..11 unused
            unsigned BERRM     : 1; // bit 12 Bubble error interrupt mask
            unsigned NAKM      : 1; // bit 13 NAK interrupt mask
            unsigned NYETM     : 1; // bit 14 NYET interrupt mask
            unsigned           : 17; // bits 15..31 unused    
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
        static constexpr unsigned TXFURM_POS = 8;
        static constexpr unsigned TXFURM_MASK = 0x00000100;
        static constexpr unsigned TXFURM(unsigned value) { return (value << 8); }
        static constexpr unsigned BIM_POS = 9;
        static constexpr unsigned BIM_MASK = 0x00000200;
        static constexpr unsigned BIM(unsigned value) { return (value << 9); }
        static constexpr unsigned BERRM_POS = 12;
        static constexpr unsigned BERRM_MASK = 0x00001000;
        static constexpr unsigned BERRM(unsigned value) { return (value << 12); }
        static constexpr unsigned NAKM_POS = 13;
        static constexpr unsigned NAKM_MASK = 0x00002000;
        static constexpr unsigned NAKM(unsigned value) { return (value << 13); }
        static constexpr unsigned NYETM_POS = 14;
        static constexpr unsigned NYETM_MASK = 0x00004000;
        static constexpr unsigned NYETM(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPEACHMSK1;

    uint8_t Reserved4[124];

    volatile union OTG_HS_DIEPCTL0_T // OTG_HS_DIEPCTL0: OTG device endpoint-0 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL0_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL0;

    uint8_t Reserved5[4];

    volatile union OTG_HS_DIEPINT0_T // OTG_HS_DIEPINT0: OTG device endpoint-0 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT0_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT0;

    uint8_t Reserved6[4];

    volatile union OTG_HS_DIEPTSIZ0_T // OTG_HS_DIEPTSIZ0: OTG_HS device IN endpoint 0 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTSIZ0_BIT_T
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
    } OTG_HS_DIEPTSIZ0;

    volatile union OTG_HS_DIEPDMA1_T // OTG_HS_DIEPDMA1: OTG_HS device endpoint-1 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPDMA1_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_DIEPDMA1;

    volatile union OTG_HS_DTXFSTS0_T // OTG_HS_DTXFSTS0: OTG_HS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DTXFSTS0_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space avail
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } OTG_HS_DTXFSTS0;

    uint8_t Reserved7[4];

    volatile union OTG_HS_DIEPCTL1_T // OTG_HS_DIEPCTL1: OTG device endpoint-1 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL1_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL1;

    uint8_t Reserved8[4];

    volatile union OTG_HS_DIEPINT1_T // OTG_HS_DIEPINT1: OTG device endpoint-1 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT1_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT1;

    uint8_t Reserved9[4];

    volatile union OTG_HS_DIEPTSIZ1_T // OTG_HS_DIEPTSIZ1: OTG_HS device endpoint transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTSIZ1_BIT_T
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
    } OTG_HS_DIEPTSIZ1;

    volatile union OTG_HS_DIEPDMA2_T // OTG_HS_DIEPDMA2: OTG_HS device endpoint-2 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPDMA2_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_DIEPDMA2;

    volatile union OTG_HS_DTXFSTS1_T // OTG_HS_DTXFSTS1: OTG_HS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DTXFSTS1_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space avail
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } OTG_HS_DTXFSTS1;

    uint8_t Reserved10[4];

    volatile union OTG_HS_DIEPCTL2_T // OTG_HS_DIEPCTL2: OTG device endpoint-2 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL2_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL2;

    uint8_t Reserved11[4];

    volatile union OTG_HS_DIEPINT2_T // OTG_HS_DIEPINT2: OTG device endpoint-2 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT2_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT2;

    uint8_t Reserved12[4];

    volatile union OTG_HS_DIEPTSIZ2_T // OTG_HS_DIEPTSIZ2: OTG_HS device endpoint transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTSIZ2_BIT_T
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
    } OTG_HS_DIEPTSIZ2;

    volatile union OTG_HS_DIEPDMA3_T // OTG_HS_DIEPDMA3: OTG_HS device endpoint-3 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPDMA3_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_DIEPDMA3;

    volatile union OTG_HS_DTXFSTS2_T // OTG_HS_DTXFSTS2: OTG_HS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DTXFSTS2_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space avail
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } OTG_HS_DTXFSTS2;

    uint8_t Reserved13[4];

    volatile union OTG_HS_DIEPCTL3_T // OTG_HS_DIEPCTL3: OTG device endpoint-3 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL3_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL3;

    uint8_t Reserved14[4];

    volatile union OTG_HS_DIEPINT3_T // OTG_HS_DIEPINT3: OTG device endpoint-3 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT3_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT3;

    uint8_t Reserved15[4];

    volatile union OTG_HS_DIEPTSIZ3_T // OTG_HS_DIEPTSIZ3: OTG_HS device endpoint transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTSIZ3_BIT_T
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
    } OTG_HS_DIEPTSIZ3;

    volatile union OTG_HS_DIEPDMA4_T // OTG_HS_DIEPDMA4: OTG_HS device endpoint-4 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPDMA4_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_DIEPDMA4;

    volatile union OTG_HS_DTXFSTS3_T // OTG_HS_DTXFSTS3: OTG_HS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DTXFSTS3_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space avail
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } OTG_HS_DTXFSTS3;

    uint8_t Reserved16[4];

    volatile union OTG_HS_DIEPCTL4_T // OTG_HS_DIEPCTL4: OTG device endpoint-4 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL4_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL4;

    uint8_t Reserved17[4];

    volatile union OTG_HS_DIEPINT4_T // OTG_HS_DIEPINT4: OTG device endpoint-4 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT4_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT4;

    uint8_t Reserved18[4];

    volatile union OTG_HS_DIEPTSIZ4_T // OTG_HS_DIEPTSIZ4: OTG_HS device endpoint transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTSIZ4_BIT_T
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
    } OTG_HS_DIEPTSIZ4;

    volatile union OTG_HS_DIEPDMA5_T // OTG_HS_DIEPDMA5: OTG_HS device endpoint-5 DMA address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPDMA5_BIT_T
        {
            unsigned DMAADDR : 32; // bits 0..31 DMA address    
        } bit;
    
        static constexpr unsigned DMAADDR_POS = 0;
        static constexpr unsigned DMAADDR_MASK = 0xffffffff;
        static constexpr unsigned DMAADDR(unsigned value) { return (value << 0); }
    } OTG_HS_DIEPDMA5;

    volatile union OTG_HS_DTXFSTS4_T // OTG_HS_DTXFSTS4: OTG_HS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DTXFSTS4_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space avail
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } OTG_HS_DTXFSTS4;

    uint8_t Reserved19[4];

    volatile union OTG_HS_DIEPCTL5_T // OTG_HS_DIEPCTL5: OTG device endpoint-5 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL5_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL5;

    uint8_t Reserved20[4];

    volatile union OTG_HS_DIEPINT5_T // OTG_HS_DIEPINT5: OTG device endpoint-5 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT5_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT5;

    uint8_t Reserved21[4];

    volatile union OTG_HS_DIEPTSIZ5_T // OTG_HS_DIEPTSIZ5: OTG_HS device endpoint transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPTSIZ5_BIT_T
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
    } OTG_HS_DIEPTSIZ5;

    uint8_t Reserved22[4];

    volatile union OTG_HS_DTXFSTS5_T // OTG_HS_DTXFSTS5: OTG_HS device IN endpoint transmit FIFO status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DTXFSTS5_BIT_T
        {
            unsigned INEPTFSAV : 16; // bits 0..15 IN endpoint TxFIFO space avail
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INEPTFSAV_POS = 0;
        static constexpr unsigned INEPTFSAV_MASK = 0x0000ffff;
        static constexpr unsigned INEPTFSAV(unsigned value) { return (value << 0); }
    } OTG_HS_DTXFSTS5;

    uint8_t Reserved23[4];

    volatile union OTG_HS_DIEPCTL6_T // OTG_HS_DIEPCTL6: OTG device endpoint-6 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL6_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL6;

    uint8_t Reserved24[4];

    volatile union OTG_HS_DIEPINT6_T // OTG_HS_DIEPINT6: OTG device endpoint-6 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT6_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT6;

    uint8_t Reserved25[20];

    volatile union OTG_HS_DIEPCTL7_T // OTG_HS_DIEPCTL7: OTG device endpoint-7 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPCTL7_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even/odd frame
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned                : 1; // bit 20 unused
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned TXFNUM         : 4; // bits 22..25 TxFIFO number
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DIEPCTL7;

    uint8_t Reserved26[4];

    volatile union OTG_HS_DIEPINT7_T // OTG_HS_DIEPINT7: OTG device endpoint-7 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DIEPINT7_BIT_T
        {
            unsigned XFRC       : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD     : 1; // bit 1 Endpoint disabled interrupt
            unsigned            : 1; // bit 2 unused
            unsigned TOC        : 1; // bit 3 Timeout condition
            unsigned ITTXFE     : 1; // bit 4 IN token received when TxFIFO is empty
            unsigned            : 1; // bit 5 unused
            unsigned INEPNE     : 1; // bit 6 IN endpoint NAK effective
            unsigned TXFE       : 1; // bit 7 Transmit FIFO empty
            unsigned TXFIFOUDRN : 1; // bit 8 Transmit Fifo Underrun
            unsigned BNA        : 1; // bit 9 Buffer not available interrupt
            unsigned            : 1; // bit 10 unused
            unsigned PKTDRPSTS  : 1; // bit 11 Packet dropped status
            unsigned BERR       : 1; // bit 12 Babble error interrupt
            unsigned NAK        : 1; // bit 13 NAK interrupt
            unsigned            : 18; // bits 14..31 unused    
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
        static constexpr unsigned TXFIFOUDRN_POS = 8;
        static constexpr unsigned TXFIFOUDRN_MASK = 0x00000100;
        static constexpr unsigned TXFIFOUDRN(unsigned value) { return (value << 8); }
        static constexpr unsigned BNA_POS = 9;
        static constexpr unsigned BNA_MASK = 0x00000200;
        static constexpr unsigned BNA(unsigned value) { return (value << 9); }
        static constexpr unsigned PKTDRPSTS_POS = 11;
        static constexpr unsigned PKTDRPSTS_MASK = 0x00000800;
        static constexpr unsigned PKTDRPSTS(unsigned value) { return (value << 11); }
        static constexpr unsigned BERR_POS = 12;
        static constexpr unsigned BERR_MASK = 0x00001000;
        static constexpr unsigned BERR(unsigned value) { return (value << 12); }
        static constexpr unsigned NAK_POS = 13;
        static constexpr unsigned NAK_MASK = 0x00002000;
        static constexpr unsigned NAK(unsigned value) { return (value << 13); }
    } OTG_HS_DIEPINT7;

    uint8_t Reserved27[276];

    volatile union OTG_HS_DOEPCTL0_T // OTG_HS_DOEPCTL0: OTG_HS device control OUT endpoint 0 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPCTL0_BIT_T
        {
            unsigned MPSIZ  : 2; // bits 0..1 Maximum packet size
            unsigned        : 13; // bits 2..14 unused
            unsigned USBAEP : 1; // bit 15 USB active endpoint
            unsigned        : 1; // bit 16 unused
            unsigned NAKSTS : 1; // bit 17 NAK status
            unsigned EPTYP  : 2; // bits 18..19 Endpoint type
            unsigned SNPM   : 1; // bit 20 Snoop mode
            unsigned Stall  : 1; // bit 21 STALL handshake
            unsigned        : 4; // bits 22..25 unused
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
    } OTG_HS_DOEPCTL0;

    uint8_t Reserved28[4];

    volatile union OTG_HS_DOEPINT0_T // OTG_HS_DOEPINT0: OTG_HS device endpoint-0 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT0_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT0;

    uint8_t Reserved29[4];

    volatile union OTG_HS_DOEPTSIZ0_T // OTG_HS_DOEPTSIZ0: OTG_HS device endpoint-1 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPTSIZ0_BIT_T
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
    } OTG_HS_DOEPTSIZ0;

    uint8_t Reserved30[12];

    volatile union OTG_HS_DOEPCTL1_T // OTG_HS_DOEPCTL1: OTG device endpoint-1 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPCTL1_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even odd frame/Endpoint data PID
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned SNPM           : 1; // bit 20 Snoop mode
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned                : 4; // bits 22..25 unused
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID/Set even frame
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DOEPCTL1;

    uint8_t Reserved31[4];

    volatile union OTG_HS_DOEPINT1_T // OTG_HS_DOEPINT1: OTG_HS device endpoint-1 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT1_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT1;

    uint8_t Reserved32[4];

    volatile union OTG_HS_DOEPTSIZ1_T // OTG_HS_DOEPTSIZ1: OTG_HS device endpoint-2 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPTSIZ1_BIT_T
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
    } OTG_HS_DOEPTSIZ1;

    uint8_t Reserved33[12];

    volatile union OTG_HS_DOEPCTL2_T // OTG_HS_DOEPCTL2: OTG device endpoint-2 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPCTL2_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even odd frame/Endpoint data PID
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned SNPM           : 1; // bit 20 Snoop mode
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned                : 4; // bits 22..25 unused
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID/Set even frame
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DOEPCTL2;

    uint8_t Reserved34[4];

    volatile union OTG_HS_DOEPINT2_T // OTG_HS_DOEPINT2: OTG_HS device endpoint-2 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT2_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT2;

    uint8_t Reserved35[4];

    volatile union OTG_HS_DOEPTSIZ2_T // OTG_HS_DOEPTSIZ2: OTG_HS device endpoint-3 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPTSIZ2_BIT_T
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
    } OTG_HS_DOEPTSIZ2;

    uint8_t Reserved36[12];

    volatile union OTG_HS_DOEPCTL3_T // OTG_HS_DOEPCTL3: OTG device endpoint-3 control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPCTL3_BIT_T
        {
            unsigned MPSIZ          : 11; // bits 0..10 Maximum packet size
            unsigned                : 4; // bits 11..14 unused
            unsigned USBAEP         : 1; // bit 15 USB active endpoint
            unsigned EONUM_DPID     : 1; // bit 16 Even odd frame/Endpoint data PID
            unsigned NAKSTS         : 1; // bit 17 NAK status
            unsigned EPTYP          : 2; // bits 18..19 Endpoint type
            unsigned SNPM           : 1; // bit 20 Snoop mode
            unsigned Stall          : 1; // bit 21 STALL handshake
            unsigned                : 4; // bits 22..25 unused
            unsigned CNAK           : 1; // bit 26 Clear NAK
            unsigned SNAK           : 1; // bit 27 Set NAK
            unsigned SD0PID_SEVNFRM : 1; // bit 28 Set DATA0 PID/Set even frame
            unsigned SODDFRM        : 1; // bit 29 Set odd frame
            unsigned EPDIS          : 1; // bit 30 Endpoint disable
            unsigned EPENA          : 1; // bit 31 Endpoint enable    
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
    } OTG_HS_DOEPCTL3;

    uint8_t Reserved37[4];

    volatile union OTG_HS_DOEPINT3_T // OTG_HS_DOEPINT3: OTG_HS device endpoint-3 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT3_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT3;

    uint8_t Reserved38[4];

    volatile union OTG_HS_DOEPTSIZ3_T // OTG_HS_DOEPTSIZ3: OTG_HS device endpoint-4 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPTSIZ3_BIT_T
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
    } OTG_HS_DOEPTSIZ3;

    uint8_t Reserved39[20];

    volatile union OTG_HS_DOEPINT4_T // OTG_HS_DOEPINT4: OTG_HS device endpoint-4 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT4_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT4;

    uint8_t Reserved40[4];

    volatile union OTG_HS_DOEPTSIZ4_T // OTG_HS_DOEPTSIZ4: OTG_HS device endpoint-5 transfer size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPTSIZ4_BIT_T
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
    } OTG_HS_DOEPTSIZ4;

    uint8_t Reserved41[20];

    volatile union OTG_HS_DOEPINT5_T // OTG_HS_DOEPINT5: OTG_HS device endpoint-5 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT5_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT5;

    uint8_t Reserved42[28];

    volatile union OTG_HS_DOEPINT6_T // OTG_HS_DOEPINT6: OTG_HS device endpoint-6 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT6_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT6;

    uint8_t Reserved43[28];

    volatile union OTG_HS_DOEPINT7_T // OTG_HS_DOEPINT7: OTG_HS device endpoint-7 interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OTG_HS_DOEPINT7_BIT_T
        {
            unsigned XFRC    : 1; // bit 0 Transfer completed interrupt
            unsigned EPDISD  : 1; // bit 1 Endpoint disabled interrupt
            unsigned         : 1; // bit 2 unused
            unsigned STUP    : 1; // bit 3 SETUP phase done
            unsigned OTEPDIS : 1; // bit 4 OUT token received when endpoint disabled
            unsigned         : 1; // bit 5 unused
            unsigned B2BSTUP : 1; // bit 6 Back-to-back SETUP packets received
            unsigned         : 7; // bits 7..13 unused
            unsigned NYET    : 1; // bit 14 NYET interrupt
            unsigned         : 17; // bits 15..31 unused    
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
        static constexpr unsigned NYET_POS = 14;
        static constexpr unsigned NYET_MASK = 0x00004000;
        static constexpr unsigned NYET(unsigned value) { return (value << 14); }
    } OTG_HS_DOEPINT7;

}; // struct OTG_HS_DEVICE_T

static_assert(sizeof(OTG_HS_DEVICE_T) == OTG_HS_DEVICE_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp