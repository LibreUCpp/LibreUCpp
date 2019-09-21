#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) LTDC_T
{
    static constexpr size_t INSTANCE_SIZE = 328;
    static constexpr intptr_t BASE_ADDRESS = 0x40016800;

    static constexpr intptr_t ADDR_OFFSET_SSCR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_BPCR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_AWCR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_TWCR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_GCR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_SRCR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_BCCR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_IER = 0x34;
    static constexpr intptr_t ADDR_OFFSET_ISR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_ICR = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_LIPCR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_CPSR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_CDSR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_L1CR = 0x84;
    static constexpr intptr_t ADDR_OFFSET_L1WHPCR = 0x88;
    static constexpr intptr_t ADDR_OFFSET_L1WVPCR = 0x8c;
    static constexpr intptr_t ADDR_OFFSET_L1CKCR = 0x90;
    static constexpr intptr_t ADDR_OFFSET_L1PFCR = 0x94;
    static constexpr intptr_t ADDR_OFFSET_L1CACR = 0x98;
    static constexpr intptr_t ADDR_OFFSET_L1DCCR = 0x9c;
    static constexpr intptr_t ADDR_OFFSET_L1BFCR = 0xa0;
    static constexpr intptr_t ADDR_OFFSET_L1CFBAR = 0xac;
    static constexpr intptr_t ADDR_OFFSET_L1CFBLR = 0xb0;
    static constexpr intptr_t ADDR_OFFSET_L1CFBLNR = 0xb4;
    static constexpr intptr_t ADDR_OFFSET_L1CLUTWR = 0xc4;
    static constexpr intptr_t ADDR_OFFSET_L2CR = 0x104;
    static constexpr intptr_t ADDR_OFFSET_L2WHPCR = 0x108;
    static constexpr intptr_t ADDR_OFFSET_L2WVPCR = 0x10c;
    static constexpr intptr_t ADDR_OFFSET_L2CKCR = 0x110;
    static constexpr intptr_t ADDR_OFFSET_L2PFCR = 0x114;
    static constexpr intptr_t ADDR_OFFSET_L2CACR = 0x118;
    static constexpr intptr_t ADDR_OFFSET_L2DCCR = 0x11c;
    static constexpr intptr_t ADDR_OFFSET_L2BFCR = 0x120;
    static constexpr intptr_t ADDR_OFFSET_L2CFBAR = 0x12c;
    static constexpr intptr_t ADDR_OFFSET_L2CFBLR = 0x130;
    static constexpr intptr_t ADDR_OFFSET_L2CFBLNR = 0x134;
    static constexpr intptr_t ADDR_OFFSET_L2CLUTWR = 0x144;

    uint8_t Reserved1[8];

    volatile union SSCR_T // SSCR: Synchronization Size Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SSCR_BIT_T
        {
            unsigned VSH : 11; // bits 0..10 Vertical Synchronization Height (in units of horizontal scan line)
            unsigned     : 5; // bits 11..15 unused
            unsigned HSW : 10; // bits 16..25 Horizontal Synchronization Width (in units of pixel clock period)
            unsigned     : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned VSH_POS = 0;
        static constexpr unsigned VSH_MASK = 0x000007ff;
        static constexpr unsigned VSH(unsigned value) { return (value << 0); }
        static constexpr unsigned HSW_POS = 16;
        static constexpr unsigned HSW_MASK = 0x03ff0000;
        static constexpr unsigned HSW(unsigned value) { return (value << 16); }
    } SSCR;

    volatile union BPCR_T // BPCR: Back Porch Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BPCR_BIT_T
        {
            unsigned AVBP : 11; // bits 0..10 Accumulated Vertical back porch (in units of horizontal scan line)
            unsigned      : 5; // bits 11..15 unused
            unsigned AHBP : 10; // bits 16..25 Accumulated Horizontal back porch (in units of pixel clock period)
            unsigned      : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned AVBP_POS = 0;
        static constexpr unsigned AVBP_MASK = 0x000007ff;
        static constexpr unsigned AVBP(unsigned value) { return (value << 0); }
        static constexpr unsigned AHBP_POS = 16;
        static constexpr unsigned AHBP_MASK = 0x03ff0000;
        static constexpr unsigned AHBP(unsigned value) { return (value << 16); }
    } BPCR;

    volatile union AWCR_T // AWCR: Active Width Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AWCR_BIT_T
        {
            unsigned AAH : 11; // bits 0..10 Accumulated Active Height (in units of horizontal scan line)
            unsigned     : 5; // bits 11..15 unused
            unsigned AAV : 10; // bits 16..25 AAV
            unsigned     : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned AAH_POS = 0;
        static constexpr unsigned AAH_MASK = 0x000007ff;
        static constexpr unsigned AAH(unsigned value) { return (value << 0); }
        static constexpr unsigned AAV_POS = 16;
        static constexpr unsigned AAV_MASK = 0x03ff0000;
        static constexpr unsigned AAV(unsigned value) { return (value << 16); }
    } AWCR;

    volatile union TWCR_T // TWCR: Total Width Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TWCR_BIT_T
        {
            unsigned TOTALH : 11; // bits 0..10 Total Height (in units of horizontal scan line)
            unsigned        : 5; // bits 11..15 unused
            unsigned TOTALW : 10; // bits 16..25 Total Width (in units of pixel clock period)
            unsigned        : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned TOTALH_POS = 0;
        static constexpr unsigned TOTALH_MASK = 0x000007ff;
        static constexpr unsigned TOTALH(unsigned value) { return (value << 0); }
        static constexpr unsigned TOTALW_POS = 16;
        static constexpr unsigned TOTALW_MASK = 0x03ff0000;
        static constexpr unsigned TOTALW(unsigned value) { return (value << 16); }
    } TWCR;

    volatile union GCR_T // GCR: Global Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) GCR_BIT_T
        {
            unsigned LTDCEN : 1; // bit 0 LCD-TFT controller enable bit
            unsigned        : 3; // bits 1..3 unused
            unsigned DBW    : 3; // bits 4..6 Dither Blue Width
            unsigned        : 1; // bit 7 unused
            unsigned DGW    : 3; // bits 8..10 Dither Green Width
            unsigned        : 1; // bit 11 unused
            unsigned DRW    : 3; // bits 12..14 Dither Red Width
            unsigned        : 1; // bit 15 unused
            unsigned DEN    : 1; // bit 16 Dither Enable
            unsigned        : 11; // bits 17..27 unused
            unsigned PCPOL  : 1; // bit 28 Pixel Clock Polarity
            unsigned DEPOL  : 1; // bit 29 Data Enable Polarity
            unsigned VSPOL  : 1; // bit 30 Vertical Synchronization Polarity
            unsigned HSPOL  : 1; // bit 31 Horizontal Synchronization Polarity    
        } bit;
    
        static constexpr unsigned LTDCEN_POS = 0;
        static constexpr unsigned LTDCEN_MASK = 0x00000001;
        static constexpr unsigned LTDCEN(unsigned value) { return (value << 0); }
        static constexpr unsigned DBW_POS = 4;
        static constexpr unsigned DBW_MASK = 0x00000070;
        static constexpr unsigned DBW(unsigned value) { return (value << 4); }
        static constexpr unsigned DGW_POS = 8;
        static constexpr unsigned DGW_MASK = 0x00000700;
        static constexpr unsigned DGW(unsigned value) { return (value << 8); }
        static constexpr unsigned DRW_POS = 12;
        static constexpr unsigned DRW_MASK = 0x00007000;
        static constexpr unsigned DRW(unsigned value) { return (value << 12); }
        static constexpr unsigned DEN_POS = 16;
        static constexpr unsigned DEN_MASK = 0x00010000;
        static constexpr unsigned DEN(unsigned value) { return (value << 16); }
        static constexpr unsigned PCPOL_POS = 28;
        static constexpr unsigned PCPOL_MASK = 0x10000000;
        static constexpr unsigned PCPOL(unsigned value) { return (value << 28); }
        static constexpr unsigned DEPOL_POS = 29;
        static constexpr unsigned DEPOL_MASK = 0x20000000;
        static constexpr unsigned DEPOL(unsigned value) { return (value << 29); }
        static constexpr unsigned VSPOL_POS = 30;
        static constexpr unsigned VSPOL_MASK = 0x40000000;
        static constexpr unsigned VSPOL(unsigned value) { return (value << 30); }
        static constexpr unsigned HSPOL_POS = 31;
        static constexpr unsigned HSPOL_MASK = 0x80000000;
        static constexpr unsigned HSPOL(unsigned value) { return (value << 31); }
    } GCR;

    uint8_t Reserved2[8];

    volatile union SRCR_T // SRCR: Shadow Reload Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SRCR_BIT_T
        {
            unsigned IMR : 1; // bit 0 Immediate Reload
            unsigned VBR : 1; // bit 1 Vertical Blanking Reload
            unsigned     : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned IMR_POS = 0;
        static constexpr unsigned IMR_MASK = 0x00000001;
        static constexpr unsigned IMR(unsigned value) { return (value << 0); }
        static constexpr unsigned VBR_POS = 1;
        static constexpr unsigned VBR_MASK = 0x00000002;
        static constexpr unsigned VBR(unsigned value) { return (value << 1); }
    } SRCR;

    uint8_t Reserved3[4];

    volatile union BCCR_T // BCCR: Background Color Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BCCR_BIT_T
        {
            unsigned BC : 24; // bits 0..23 Background Color Red value
            unsigned    : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned BC_POS = 0;
        static constexpr unsigned BC_MASK = 0x00ffffff;
        static constexpr unsigned BC(unsigned value) { return (value << 0); }
    } BCCR;

    uint8_t Reserved4[4];

    volatile union IER_T // IER: Interrupt Enable Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IER_BIT_T
        {
            unsigned LIE    : 1; // bit 0 Line Interrupt Enable
            unsigned FUIE   : 1; // bit 1 FIFO Underrun Interrupt Enable
            unsigned TERRIE : 1; // bit 2 Transfer Error Interrupt Enable
            unsigned RRIE   : 1; // bit 3 Register Reload interrupt enable
            unsigned        : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned LIE_POS = 0;
        static constexpr unsigned LIE_MASK = 0x00000001;
        static constexpr unsigned LIE(unsigned value) { return (value << 0); }
        static constexpr unsigned FUIE_POS = 1;
        static constexpr unsigned FUIE_MASK = 0x00000002;
        static constexpr unsigned FUIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TERRIE_POS = 2;
        static constexpr unsigned TERRIE_MASK = 0x00000004;
        static constexpr unsigned TERRIE(unsigned value) { return (value << 2); }
        static constexpr unsigned RRIE_POS = 3;
        static constexpr unsigned RRIE_MASK = 0x00000008;
        static constexpr unsigned RRIE(unsigned value) { return (value << 3); }
    } IER;

    volatile union ISR_T // ISR: Interrupt Status Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned LIF    : 1; // bit 0 Line Interrupt flag
            unsigned FUIF   : 1; // bit 1 FIFO Underrun Interrupt flag
            unsigned TERRIF : 1; // bit 2 Transfer Error interrupt flag
            unsigned RRIF   : 1; // bit 3 Register Reload Interrupt Flag
            unsigned        : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned LIF_POS = 0;
        static constexpr unsigned LIF_MASK = 0x00000001;
        static constexpr unsigned LIF(unsigned value) { return (value << 0); }
        static constexpr unsigned FUIF_POS = 1;
        static constexpr unsigned FUIF_MASK = 0x00000002;
        static constexpr unsigned FUIF(unsigned value) { return (value << 1); }
        static constexpr unsigned TERRIF_POS = 2;
        static constexpr unsigned TERRIF_MASK = 0x00000004;
        static constexpr unsigned TERRIF(unsigned value) { return (value << 2); }
        static constexpr unsigned RRIF_POS = 3;
        static constexpr unsigned RRIF_MASK = 0x00000008;
        static constexpr unsigned RRIF(unsigned value) { return (value << 3); }
    } ISR;

    volatile union ICR_T // ICR: Interrupt Clear Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICR_BIT_T
        {
            unsigned CLIF    : 1; // bit 0 Clears the Line Interrupt Flag
            unsigned CFUIF   : 1; // bit 1 Clears the FIFO Underrun Interrupt flag
            unsigned CTERRIF : 1; // bit 2 Clears the Transfer Error Interrupt Flag
            unsigned CRRIF   : 1; // bit 3 Clears Register Reload Interrupt Flag
            unsigned         : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned CLIF_POS = 0;
        static constexpr unsigned CLIF_MASK = 0x00000001;
        static constexpr unsigned CLIF(unsigned value) { return (value << 0); }
        static constexpr unsigned CFUIF_POS = 1;
        static constexpr unsigned CFUIF_MASK = 0x00000002;
        static constexpr unsigned CFUIF(unsigned value) { return (value << 1); }
        static constexpr unsigned CTERRIF_POS = 2;
        static constexpr unsigned CTERRIF_MASK = 0x00000004;
        static constexpr unsigned CTERRIF(unsigned value) { return (value << 2); }
        static constexpr unsigned CRRIF_POS = 3;
        static constexpr unsigned CRRIF_MASK = 0x00000008;
        static constexpr unsigned CRRIF(unsigned value) { return (value << 3); }
    } ICR;

    volatile union LIPCR_T // LIPCR: Line Interrupt Position Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LIPCR_BIT_T
        {
            unsigned LIPOS : 11; // bits 0..10 Line Interrupt Position
            unsigned       : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned LIPOS_POS = 0;
        static constexpr unsigned LIPOS_MASK = 0x000007ff;
        static constexpr unsigned LIPOS(unsigned value) { return (value << 0); }
    } LIPCR;

    volatile union CPSR_T // CPSR: Current Position Status Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPSR_BIT_T
        {
            unsigned CYPOS : 16; // bits 0..15 Current Y Position
            unsigned CXPOS : 16; // bits 16..31 Current X Position    
        } bit;
    
        static constexpr unsigned CYPOS_POS = 0;
        static constexpr unsigned CYPOS_MASK = 0x0000ffff;
        static constexpr unsigned CYPOS(unsigned value) { return (value << 0); }
        static constexpr unsigned CXPOS_POS = 16;
        static constexpr unsigned CXPOS_MASK = 0xffff0000;
        static constexpr unsigned CXPOS(unsigned value) { return (value << 16); }
    } CPSR;

    volatile union CDSR_T // CDSR: Current Display Status Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CDSR_BIT_T
        {
            unsigned VDES   : 1; // bit 0 Vertical Data Enable display Status
            unsigned HDES   : 1; // bit 1 Horizontal Data Enable display Status
            unsigned VSYNCS : 1; // bit 2 Vertical Synchronization display Status
            unsigned HSYNCS : 1; // bit 3 Horizontal Synchronization display Status
            unsigned        : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned VDES_POS = 0;
        static constexpr unsigned VDES_MASK = 0x00000001;
        static constexpr unsigned VDES(unsigned value) { return (value << 0); }
        static constexpr unsigned HDES_POS = 1;
        static constexpr unsigned HDES_MASK = 0x00000002;
        static constexpr unsigned HDES(unsigned value) { return (value << 1); }
        static constexpr unsigned VSYNCS_POS = 2;
        static constexpr unsigned VSYNCS_MASK = 0x00000004;
        static constexpr unsigned VSYNCS(unsigned value) { return (value << 2); }
        static constexpr unsigned HSYNCS_POS = 3;
        static constexpr unsigned HSYNCS_MASK = 0x00000008;
        static constexpr unsigned HSYNCS(unsigned value) { return (value << 3); }
    } CDSR;

    uint8_t Reserved5[56];

    volatile union L1CR_T // L1CR: Layerx Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1CR_BIT_T
        {
            unsigned LEN    : 1; // bit 0 Layer Enable
            unsigned COLKEN : 1; // bit 1 Color Keying Enable
            unsigned        : 2; // bits 2..3 unused
            unsigned CLUTEN : 1; // bit 4 Color Look-Up Table Enable
            unsigned        : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned LEN_POS = 0;
        static constexpr unsigned LEN_MASK = 0x00000001;
        static constexpr unsigned LEN(unsigned value) { return (value << 0); }
        static constexpr unsigned COLKEN_POS = 1;
        static constexpr unsigned COLKEN_MASK = 0x00000002;
        static constexpr unsigned COLKEN(unsigned value) { return (value << 1); }
        static constexpr unsigned CLUTEN_POS = 4;
        static constexpr unsigned CLUTEN_MASK = 0x00000010;
        static constexpr unsigned CLUTEN(unsigned value) { return (value << 4); }
    } L1CR;

    volatile union L1WHPCR_T // L1WHPCR: Layerx Window Horizontal Position Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1WHPCR_BIT_T
        {
            unsigned WHSTPOS : 12; // bits 0..11 Window Horizontal Start Position
            unsigned         : 4; // bits 12..15 unused
            unsigned WHSPPOS : 12; // bits 16..27 Window Horizontal Stop Position
            unsigned         : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned WHSTPOS_POS = 0;
        static constexpr unsigned WHSTPOS_MASK = 0x00000fff;
        static constexpr unsigned WHSTPOS(unsigned value) { return (value << 0); }
        static constexpr unsigned WHSPPOS_POS = 16;
        static constexpr unsigned WHSPPOS_MASK = 0x0fff0000;
        static constexpr unsigned WHSPPOS(unsigned value) { return (value << 16); }
    } L1WHPCR;

    volatile union L1WVPCR_T // L1WVPCR: Layerx Window Vertical Position Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1WVPCR_BIT_T
        {
            unsigned WVSTPOS : 11; // bits 0..10 Window Vertical Start Position
            unsigned         : 5; // bits 11..15 unused
            unsigned WVSPPOS : 11; // bits 16..26 Window Vertical Stop Position
            unsigned         : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned WVSTPOS_POS = 0;
        static constexpr unsigned WVSTPOS_MASK = 0x000007ff;
        static constexpr unsigned WVSTPOS(unsigned value) { return (value << 0); }
        static constexpr unsigned WVSPPOS_POS = 16;
        static constexpr unsigned WVSPPOS_MASK = 0x07ff0000;
        static constexpr unsigned WVSPPOS(unsigned value) { return (value << 16); }
    } L1WVPCR;

    volatile union L1CKCR_T // L1CKCR: Layerx Color Keying Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1CKCR_BIT_T
        {
            unsigned CKBLUE  : 8; // bits 0..7 Color Key Blue value
            unsigned CKGREEN : 8; // bits 8..15 Color Key Green value
            unsigned CKRED   : 8; // bits 16..23 Color Key Red value
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CKBLUE_POS = 0;
        static constexpr unsigned CKBLUE_MASK = 0x000000ff;
        static constexpr unsigned CKBLUE(unsigned value) { return (value << 0); }
        static constexpr unsigned CKGREEN_POS = 8;
        static constexpr unsigned CKGREEN_MASK = 0x0000ff00;
        static constexpr unsigned CKGREEN(unsigned value) { return (value << 8); }
        static constexpr unsigned CKRED_POS = 16;
        static constexpr unsigned CKRED_MASK = 0x00ff0000;
        static constexpr unsigned CKRED(unsigned value) { return (value << 16); }
    } L1CKCR;

    volatile union L1PFCR_T // L1PFCR: Layerx Pixel Format Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1PFCR_BIT_T
        {
            unsigned PF : 3; // bits 0..2 Pixel Format
            unsigned    : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned PF_POS = 0;
        static constexpr unsigned PF_MASK = 0x00000007;
        static constexpr unsigned PF(unsigned value) { return (value << 0); }
    } L1PFCR;

    volatile union L1CACR_T // L1CACR: Layerx Constant Alpha Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1CACR_BIT_T
        {
            unsigned CONSTA : 8; // bits 0..7 Constant Alpha
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned CONSTA_POS = 0;
        static constexpr unsigned CONSTA_MASK = 0x000000ff;
        static constexpr unsigned CONSTA(unsigned value) { return (value << 0); }
    } L1CACR;

    volatile union L1DCCR_T // L1DCCR: Layerx Default Color Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1DCCR_BIT_T
        {
            unsigned DCBLUE  : 8; // bits 0..7 Default Color Blue
            unsigned DCGREEN : 8; // bits 8..15 Default Color Green
            unsigned DCRED   : 8; // bits 16..23 Default Color Red
            unsigned DCALPHA : 8; // bits 24..31 Default Color Alpha    
        } bit;
    
        static constexpr unsigned DCBLUE_POS = 0;
        static constexpr unsigned DCBLUE_MASK = 0x000000ff;
        static constexpr unsigned DCBLUE(unsigned value) { return (value << 0); }
        static constexpr unsigned DCGREEN_POS = 8;
        static constexpr unsigned DCGREEN_MASK = 0x0000ff00;
        static constexpr unsigned DCGREEN(unsigned value) { return (value << 8); }
        static constexpr unsigned DCRED_POS = 16;
        static constexpr unsigned DCRED_MASK = 0x00ff0000;
        static constexpr unsigned DCRED(unsigned value) { return (value << 16); }
        static constexpr unsigned DCALPHA_POS = 24;
        static constexpr unsigned DCALPHA_MASK = 0xff000000;
        static constexpr unsigned DCALPHA(unsigned value) { return (value << 24); }
    } L1DCCR;

    volatile union L1BFCR_T // L1BFCR: Layerx Blending Factors Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1BFCR_BIT_T
        {
            unsigned BF2 : 3; // bits 0..2 Blending Factor 2
            unsigned     : 5; // bits 3..7 unused
            unsigned BF1 : 3; // bits 8..10 Blending Factor 1
            unsigned     : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned BF2_POS = 0;
        static constexpr unsigned BF2_MASK = 0x00000007;
        static constexpr unsigned BF2(unsigned value) { return (value << 0); }
        static constexpr unsigned BF1_POS = 8;
        static constexpr unsigned BF1_MASK = 0x00000700;
        static constexpr unsigned BF1(unsigned value) { return (value << 8); }
    } L1BFCR;

    uint8_t Reserved6[8];

    volatile union L1CFBAR_T // L1CFBAR: Layerx Color Frame Buffer Address Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1CFBAR_BIT_T
        {
            unsigned CFBADD : 32; // bits 0..31 Color Frame Buffer Start Address    
        } bit;
    
        static constexpr unsigned CFBADD_POS = 0;
        static constexpr unsigned CFBADD_MASK = 0xffffffff;
        static constexpr unsigned CFBADD(unsigned value) { return (value << 0); }
    } L1CFBAR;

    volatile union L1CFBLR_T // L1CFBLR: Layerx Color Frame Buffer Length Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1CFBLR_BIT_T
        {
            unsigned CFBLL : 13; // bits 0..12 Color Frame Buffer Line Length
            unsigned       : 3; // bits 13..15 unused
            unsigned CFBP  : 13; // bits 16..28 Color Frame Buffer Pitch in bytes
            unsigned       : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned CFBLL_POS = 0;
        static constexpr unsigned CFBLL_MASK = 0x00001fff;
        static constexpr unsigned CFBLL(unsigned value) { return (value << 0); }
        static constexpr unsigned CFBP_POS = 16;
        static constexpr unsigned CFBP_MASK = 0x1fff0000;
        static constexpr unsigned CFBP(unsigned value) { return (value << 16); }
    } L1CFBLR;

    volatile union L1CFBLNR_T // L1CFBLNR: Layerx ColorFrame Buffer Line Number Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1CFBLNR_BIT_T
        {
            unsigned CFBLNBR : 11; // bits 0..10 Frame Buffer Line Number
            unsigned         : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned CFBLNBR_POS = 0;
        static constexpr unsigned CFBLNBR_MASK = 0x000007ff;
        static constexpr unsigned CFBLNBR(unsigned value) { return (value << 0); }
    } L1CFBLNR;

    uint8_t Reserved7[12];

    volatile union L1CLUTWR_T // L1CLUTWR: Layerx CLUT Write Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L1CLUTWR_BIT_T
        {
            unsigned BLUE    : 8; // bits 0..7 Blue value
            unsigned GREEN   : 8; // bits 8..15 Green value
            unsigned RED     : 8; // bits 16..23 Red value
            unsigned CLUTADD : 8; // bits 24..31 CLUT Address    
        } bit;
    
        static constexpr unsigned BLUE_POS = 0;
        static constexpr unsigned BLUE_MASK = 0x000000ff;
        static constexpr unsigned BLUE(unsigned value) { return (value << 0); }
        static constexpr unsigned GREEN_POS = 8;
        static constexpr unsigned GREEN_MASK = 0x0000ff00;
        static constexpr unsigned GREEN(unsigned value) { return (value << 8); }
        static constexpr unsigned RED_POS = 16;
        static constexpr unsigned RED_MASK = 0x00ff0000;
        static constexpr unsigned RED(unsigned value) { return (value << 16); }
        static constexpr unsigned CLUTADD_POS = 24;
        static constexpr unsigned CLUTADD_MASK = 0xff000000;
        static constexpr unsigned CLUTADD(unsigned value) { return (value << 24); }
    } L1CLUTWR;

    uint8_t Reserved8[60];

    volatile union L2CR_T // L2CR: Layerx Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2CR_BIT_T
        {
            unsigned LEN    : 1; // bit 0 Layer Enable
            unsigned COLKEN : 1; // bit 1 Color Keying Enable
            unsigned        : 2; // bits 2..3 unused
            unsigned CLUTEN : 1; // bit 4 Color Look-Up Table Enable
            unsigned        : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned LEN_POS = 0;
        static constexpr unsigned LEN_MASK = 0x00000001;
        static constexpr unsigned LEN(unsigned value) { return (value << 0); }
        static constexpr unsigned COLKEN_POS = 1;
        static constexpr unsigned COLKEN_MASK = 0x00000002;
        static constexpr unsigned COLKEN(unsigned value) { return (value << 1); }
        static constexpr unsigned CLUTEN_POS = 4;
        static constexpr unsigned CLUTEN_MASK = 0x00000010;
        static constexpr unsigned CLUTEN(unsigned value) { return (value << 4); }
    } L2CR;

    volatile union L2WHPCR_T // L2WHPCR: Layerx Window Horizontal Position Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2WHPCR_BIT_T
        {
            unsigned WHSTPOS : 12; // bits 0..11 Window Horizontal Start Position
            unsigned         : 4; // bits 12..15 unused
            unsigned WHSPPOS : 12; // bits 16..27 Window Horizontal Stop Position
            unsigned         : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned WHSTPOS_POS = 0;
        static constexpr unsigned WHSTPOS_MASK = 0x00000fff;
        static constexpr unsigned WHSTPOS(unsigned value) { return (value << 0); }
        static constexpr unsigned WHSPPOS_POS = 16;
        static constexpr unsigned WHSPPOS_MASK = 0x0fff0000;
        static constexpr unsigned WHSPPOS(unsigned value) { return (value << 16); }
    } L2WHPCR;

    volatile union L2WVPCR_T // L2WVPCR: Layerx Window Vertical Position Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2WVPCR_BIT_T
        {
            unsigned WVSTPOS : 11; // bits 0..10 Window Vertical Start Position
            unsigned         : 5; // bits 11..15 unused
            unsigned WVSPPOS : 11; // bits 16..26 Window Vertical Stop Position
            unsigned         : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned WVSTPOS_POS = 0;
        static constexpr unsigned WVSTPOS_MASK = 0x000007ff;
        static constexpr unsigned WVSTPOS(unsigned value) { return (value << 0); }
        static constexpr unsigned WVSPPOS_POS = 16;
        static constexpr unsigned WVSPPOS_MASK = 0x07ff0000;
        static constexpr unsigned WVSPPOS(unsigned value) { return (value << 16); }
    } L2WVPCR;

    volatile union L2CKCR_T // L2CKCR: Layerx Color Keying Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2CKCR_BIT_T
        {
            unsigned CKBLUE  : 8; // bits 0..7 Color Key Blue value
            unsigned CKGREEN : 7; // bits 8..14 Color Key Green value
            unsigned CKRED   : 9; // bits 15..23 Color Key Red value
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CKBLUE_POS = 0;
        static constexpr unsigned CKBLUE_MASK = 0x000000ff;
        static constexpr unsigned CKBLUE(unsigned value) { return (value << 0); }
        static constexpr unsigned CKGREEN_POS = 8;
        static constexpr unsigned CKGREEN_MASK = 0x00007f00;
        static constexpr unsigned CKGREEN(unsigned value) { return (value << 8); }
        static constexpr unsigned CKRED_POS = 15;
        static constexpr unsigned CKRED_MASK = 0x00ff8000;
        static constexpr unsigned CKRED(unsigned value) { return (value << 15); }
    } L2CKCR;

    volatile union L2PFCR_T // L2PFCR: Layerx Pixel Format Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2PFCR_BIT_T
        {
            unsigned PF : 3; // bits 0..2 Pixel Format
            unsigned    : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned PF_POS = 0;
        static constexpr unsigned PF_MASK = 0x00000007;
        static constexpr unsigned PF(unsigned value) { return (value << 0); }
    } L2PFCR;

    volatile union L2CACR_T // L2CACR: Layerx Constant Alpha Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2CACR_BIT_T
        {
            unsigned CONSTA : 8; // bits 0..7 Constant Alpha
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned CONSTA_POS = 0;
        static constexpr unsigned CONSTA_MASK = 0x000000ff;
        static constexpr unsigned CONSTA(unsigned value) { return (value << 0); }
    } L2CACR;

    volatile union L2DCCR_T // L2DCCR: Layerx Default Color Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2DCCR_BIT_T
        {
            unsigned DCBLUE  : 8; // bits 0..7 Default Color Blue
            unsigned DCGREEN : 8; // bits 8..15 Default Color Green
            unsigned DCRED   : 8; // bits 16..23 Default Color Red
            unsigned DCALPHA : 8; // bits 24..31 Default Color Alpha    
        } bit;
    
        static constexpr unsigned DCBLUE_POS = 0;
        static constexpr unsigned DCBLUE_MASK = 0x000000ff;
        static constexpr unsigned DCBLUE(unsigned value) { return (value << 0); }
        static constexpr unsigned DCGREEN_POS = 8;
        static constexpr unsigned DCGREEN_MASK = 0x0000ff00;
        static constexpr unsigned DCGREEN(unsigned value) { return (value << 8); }
        static constexpr unsigned DCRED_POS = 16;
        static constexpr unsigned DCRED_MASK = 0x00ff0000;
        static constexpr unsigned DCRED(unsigned value) { return (value << 16); }
        static constexpr unsigned DCALPHA_POS = 24;
        static constexpr unsigned DCALPHA_MASK = 0xff000000;
        static constexpr unsigned DCALPHA(unsigned value) { return (value << 24); }
    } L2DCCR;

    volatile union L2BFCR_T // L2BFCR: Layerx Blending Factors Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2BFCR_BIT_T
        {
            unsigned BF2 : 3; // bits 0..2 Blending Factor 2
            unsigned     : 5; // bits 3..7 unused
            unsigned BF1 : 3; // bits 8..10 Blending Factor 1
            unsigned     : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned BF2_POS = 0;
        static constexpr unsigned BF2_MASK = 0x00000007;
        static constexpr unsigned BF2(unsigned value) { return (value << 0); }
        static constexpr unsigned BF1_POS = 8;
        static constexpr unsigned BF1_MASK = 0x00000700;
        static constexpr unsigned BF1(unsigned value) { return (value << 8); }
    } L2BFCR;

    uint8_t Reserved9[8];

    volatile union L2CFBAR_T // L2CFBAR: Layerx Color Frame Buffer Address Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2CFBAR_BIT_T
        {
            unsigned CFBADD : 32; // bits 0..31 Color Frame Buffer Start Address    
        } bit;
    
        static constexpr unsigned CFBADD_POS = 0;
        static constexpr unsigned CFBADD_MASK = 0xffffffff;
        static constexpr unsigned CFBADD(unsigned value) { return (value << 0); }
    } L2CFBAR;

    volatile union L2CFBLR_T // L2CFBLR: Layerx Color Frame Buffer Length Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2CFBLR_BIT_T
        {
            unsigned CFBLL : 13; // bits 0..12 Color Frame Buffer Line Length
            unsigned       : 3; // bits 13..15 unused
            unsigned CFBP  : 13; // bits 16..28 Color Frame Buffer Pitch in bytes
            unsigned       : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned CFBLL_POS = 0;
        static constexpr unsigned CFBLL_MASK = 0x00001fff;
        static constexpr unsigned CFBLL(unsigned value) { return (value << 0); }
        static constexpr unsigned CFBP_POS = 16;
        static constexpr unsigned CFBP_MASK = 0x1fff0000;
        static constexpr unsigned CFBP(unsigned value) { return (value << 16); }
    } L2CFBLR;

    volatile union L2CFBLNR_T // L2CFBLNR: Layerx ColorFrame Buffer Line Number Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2CFBLNR_BIT_T
        {
            unsigned CFBLNBR : 11; // bits 0..10 Frame Buffer Line Number
            unsigned         : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned CFBLNBR_POS = 0;
        static constexpr unsigned CFBLNBR_MASK = 0x000007ff;
        static constexpr unsigned CFBLNBR(unsigned value) { return (value << 0); }
    } L2CFBLNR;

    uint8_t Reserved10[12];

    volatile union L2CLUTWR_T // L2CLUTWR: Layerx CLUT Write Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) L2CLUTWR_BIT_T
        {
            unsigned BLUE    : 8; // bits 0..7 Blue value
            unsigned GREEN   : 8; // bits 8..15 Green value
            unsigned RED     : 8; // bits 16..23 Red value
            unsigned CLUTADD : 8; // bits 24..31 CLUT Address    
        } bit;
    
        static constexpr unsigned BLUE_POS = 0;
        static constexpr unsigned BLUE_MASK = 0x000000ff;
        static constexpr unsigned BLUE(unsigned value) { return (value << 0); }
        static constexpr unsigned GREEN_POS = 8;
        static constexpr unsigned GREEN_MASK = 0x0000ff00;
        static constexpr unsigned GREEN(unsigned value) { return (value << 8); }
        static constexpr unsigned RED_POS = 16;
        static constexpr unsigned RED_MASK = 0x00ff0000;
        static constexpr unsigned RED(unsigned value) { return (value << 16); }
        static constexpr unsigned CLUTADD_POS = 24;
        static constexpr unsigned CLUTADD_MASK = 0xff000000;
        static constexpr unsigned CLUTADD(unsigned value) { return (value << 24); }
    } L2CLUTWR;

}; // struct LTDC_T

static_assert(sizeof(LTDC_T) == LTDC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp