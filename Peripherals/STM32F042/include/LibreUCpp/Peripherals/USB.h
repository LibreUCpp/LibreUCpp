#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) USB_T
{
    static constexpr size_t INSTANCE_SIZE = 92;
    static constexpr size_t PADDED_INSTANCE_SIZE = 92;
    static constexpr intptr_t BASE_ADDRESS = 0x40005c00;

    static constexpr intptr_t ADDR_OFFSET_EP0R = 0x00;
    static constexpr intptr_t ADDR_OFFSET_EP1R = 0x04;
    static constexpr intptr_t ADDR_OFFSET_EP2R = 0x08;
    static constexpr intptr_t ADDR_OFFSET_EP3R = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_EP4R = 0x10;
    static constexpr intptr_t ADDR_OFFSET_EP5R = 0x14;
    static constexpr intptr_t ADDR_OFFSET_EP6R = 0x18;
    static constexpr intptr_t ADDR_OFFSET_EP7R = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_CNTR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_ISTR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_FNR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_DADDR = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_BTABLE = 0x50;
    static constexpr intptr_t ADDR_OFFSET_LPMCSR = 0x54;
    static constexpr intptr_t ADDR_OFFSET_BCDR = 0x58;

    volatile union EP0R_T // EP0R: endpoint 0 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP0R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP0R;

    volatile union EP1R_T // EP1R: endpoint 1 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP1R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP1R;

    volatile union EP2R_T // EP2R: endpoint 2 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP2R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP2R;

    volatile union EP3R_T // EP3R: endpoint 3 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP3R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP3R;

    volatile union EP4R_T // EP4R: endpoint 4 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP4R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP4R;

    volatile union EP5R_T // EP5R: endpoint 5 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP5R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP5R;

    volatile union EP6R_T // EP6R: endpoint 6 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP6R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP6R;

    volatile union EP7R_T // EP7R: endpoint 7 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) EP7R_BIT_T
        {
            unsigned EA      : 4; // bits 0..3 Endpoint address
            unsigned STAT_TX : 2; // bits 4..5 Status bits, for transmission transfers
            unsigned DTOG_TX : 1; // bit 6 Data Toggle, for transmission transfers
            unsigned CTR_TX  : 1; // bit 7 Correct Transfer for transmission
            unsigned EP_KIND : 1; // bit 8 Endpoint kind
            unsigned EP_TYPE : 2; // bits 9..10 Endpoint type
            unsigned SETUP   : 1; // bit 11 Setup transaction completed
            unsigned STAT_RX : 2; // bits 12..13 Status bits, for reception transfers
            unsigned DTOG_RX : 1; // bit 14 Data Toggle, for reception transfers
            unsigned CTR_RX  : 1; // bit 15 Correct transfer for reception
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EA_POS = 0;
        static constexpr unsigned EA_MASK = 0x0000000f;
        static constexpr unsigned EA(unsigned value) { return (value << 0); }
        static constexpr unsigned STAT_TX_POS = 4;
        static constexpr unsigned STAT_TX_MASK = 0x00000030;
        static constexpr unsigned STAT_TX(unsigned value) { return (value << 4); }
        static constexpr unsigned DTOG_TX_POS = 6;
        static constexpr unsigned DTOG_TX_MASK = 0x00000040;
        static constexpr unsigned DTOG_TX(unsigned value) { return (value << 6); }
        static constexpr unsigned CTR_TX_POS = 7;
        static constexpr unsigned CTR_TX_MASK = 0x00000080;
        static constexpr unsigned CTR_TX(unsigned value) { return (value << 7); }
        static constexpr unsigned EP_KIND_POS = 8;
        static constexpr unsigned EP_KIND_MASK = 0x00000100;
        static constexpr unsigned EP_KIND(unsigned value) { return (value << 8); }
        static constexpr unsigned EP_TYPE_POS = 9;
        static constexpr unsigned EP_TYPE_MASK = 0x00000600;
        static constexpr unsigned EP_TYPE(unsigned value) { return (value << 9); }
        static constexpr unsigned SETUP_POS = 11;
        static constexpr unsigned SETUP_MASK = 0x00000800;
        static constexpr unsigned SETUP(unsigned value) { return (value << 11); }
        static constexpr unsigned STAT_RX_POS = 12;
        static constexpr unsigned STAT_RX_MASK = 0x00003000;
        static constexpr unsigned STAT_RX(unsigned value) { return (value << 12); }
        static constexpr unsigned DTOG_RX_POS = 14;
        static constexpr unsigned DTOG_RX_MASK = 0x00004000;
        static constexpr unsigned DTOG_RX(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_RX_POS = 15;
        static constexpr unsigned CTR_RX_MASK = 0x00008000;
        static constexpr unsigned CTR_RX(unsigned value) { return (value << 15); }
    } EP7R;

    uint8_t Reserved1[32];

    volatile union CNTR_T // CNTR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNTR_BIT_T
        {
            unsigned FRES     : 1; // bit 0 Force USB Reset
            unsigned PDWN     : 1; // bit 1 Power down
            unsigned LPMODE   : 1; // bit 2 Low-power mode
            unsigned FSUSP    : 1; // bit 3 Force suspend
            unsigned RESUME   : 1; // bit 4 Resume request
            unsigned L1RESUME : 1; // bit 5 LPM L1 Resume request
            unsigned          : 1; // bit 6 unused
            unsigned L1REQM   : 1; // bit 7 LPM L1 state request interrupt mask
            unsigned ESOFM    : 1; // bit 8 Expected start of frame interrupt mask
            unsigned SOFM     : 1; // bit 9 Start of frame interrupt mask
            unsigned RESETM   : 1; // bit 10 USB reset interrupt mask
            unsigned SUSPM    : 1; // bit 11 Suspend mode interrupt mask
            unsigned WKUPM    : 1; // bit 12 Wakeup interrupt mask
            unsigned ERRM     : 1; // bit 13 Error interrupt mask
            unsigned PMAOVRM  : 1; // bit 14 Packet memory area over / underrun interrupt mask
            unsigned CTRM     : 1; // bit 15 Correct transfer interrupt mask
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned FRES_POS = 0;
        static constexpr unsigned FRES_MASK = 0x00000001;
        static constexpr unsigned FRES(unsigned value) { return (value << 0); }
        static constexpr unsigned PDWN_POS = 1;
        static constexpr unsigned PDWN_MASK = 0x00000002;
        static constexpr unsigned PDWN(unsigned value) { return (value << 1); }
        static constexpr unsigned LPMODE_POS = 2;
        static constexpr unsigned LPMODE_MASK = 0x00000004;
        static constexpr unsigned LPMODE(unsigned value) { return (value << 2); }
        static constexpr unsigned FSUSP_POS = 3;
        static constexpr unsigned FSUSP_MASK = 0x00000008;
        static constexpr unsigned FSUSP(unsigned value) { return (value << 3); }
        static constexpr unsigned RESUME_POS = 4;
        static constexpr unsigned RESUME_MASK = 0x00000010;
        static constexpr unsigned RESUME(unsigned value) { return (value << 4); }
        static constexpr unsigned L1RESUME_POS = 5;
        static constexpr unsigned L1RESUME_MASK = 0x00000020;
        static constexpr unsigned L1RESUME(unsigned value) { return (value << 5); }
        static constexpr unsigned L1REQM_POS = 7;
        static constexpr unsigned L1REQM_MASK = 0x00000080;
        static constexpr unsigned L1REQM(unsigned value) { return (value << 7); }
        static constexpr unsigned ESOFM_POS = 8;
        static constexpr unsigned ESOFM_MASK = 0x00000100;
        static constexpr unsigned ESOFM(unsigned value) { return (value << 8); }
        static constexpr unsigned SOFM_POS = 9;
        static constexpr unsigned SOFM_MASK = 0x00000200;
        static constexpr unsigned SOFM(unsigned value) { return (value << 9); }
        static constexpr unsigned RESETM_POS = 10;
        static constexpr unsigned RESETM_MASK = 0x00000400;
        static constexpr unsigned RESETM(unsigned value) { return (value << 10); }
        static constexpr unsigned SUSPM_POS = 11;
        static constexpr unsigned SUSPM_MASK = 0x00000800;
        static constexpr unsigned SUSPM(unsigned value) { return (value << 11); }
        static constexpr unsigned WKUPM_POS = 12;
        static constexpr unsigned WKUPM_MASK = 0x00001000;
        static constexpr unsigned WKUPM(unsigned value) { return (value << 12); }
        static constexpr unsigned ERRM_POS = 13;
        static constexpr unsigned ERRM_MASK = 0x00002000;
        static constexpr unsigned ERRM(unsigned value) { return (value << 13); }
        static constexpr unsigned PMAOVRM_POS = 14;
        static constexpr unsigned PMAOVRM_MASK = 0x00004000;
        static constexpr unsigned PMAOVRM(unsigned value) { return (value << 14); }
        static constexpr unsigned CTRM_POS = 15;
        static constexpr unsigned CTRM_MASK = 0x00008000;
        static constexpr unsigned CTRM(unsigned value) { return (value << 15); }
    } CNTR;

    volatile union ISTR_T // ISTR: interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISTR_BIT_T
        {
            unsigned EP_ID  : 4; // bits 0..3 Endpoint Identifier
            unsigned DIR    : 1; // bit 4 Direction of transaction
            unsigned        : 2; // bits 5..6 unused
            unsigned L1REQ  : 1; // bit 7 LPM L1 state request
            unsigned ESOF   : 1; // bit 8 Expected start frame
            unsigned SOF    : 1; // bit 9 start of frame
            unsigned RESET  : 1; // bit 10 reset request
            unsigned SUSP   : 1; // bit 11 Suspend mode request
            unsigned WKUP   : 1; // bit 12 Wakeup
            unsigned ERR    : 1; // bit 13 Error
            unsigned PMAOVR : 1; // bit 14 Packet memory area over / underrun
            unsigned CTR    : 1; // bit 15 Correct transfer
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EP_ID_POS = 0;
        static constexpr unsigned EP_ID_MASK = 0x0000000f;
        static constexpr unsigned EP_ID(unsigned value) { return (value << 0); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned L1REQ_POS = 7;
        static constexpr unsigned L1REQ_MASK = 0x00000080;
        static constexpr unsigned L1REQ(unsigned value) { return (value << 7); }
        static constexpr unsigned ESOF_POS = 8;
        static constexpr unsigned ESOF_MASK = 0x00000100;
        static constexpr unsigned ESOF(unsigned value) { return (value << 8); }
        static constexpr unsigned SOF_POS = 9;
        static constexpr unsigned SOF_MASK = 0x00000200;
        static constexpr unsigned SOF(unsigned value) { return (value << 9); }
        static constexpr unsigned RESET_POS = 10;
        static constexpr unsigned RESET_MASK = 0x00000400;
        static constexpr unsigned RESET(unsigned value) { return (value << 10); }
        static constexpr unsigned SUSP_POS = 11;
        static constexpr unsigned SUSP_MASK = 0x00000800;
        static constexpr unsigned SUSP(unsigned value) { return (value << 11); }
        static constexpr unsigned WKUP_POS = 12;
        static constexpr unsigned WKUP_MASK = 0x00001000;
        static constexpr unsigned WKUP(unsigned value) { return (value << 12); }
        static constexpr unsigned ERR_POS = 13;
        static constexpr unsigned ERR_MASK = 0x00002000;
        static constexpr unsigned ERR(unsigned value) { return (value << 13); }
        static constexpr unsigned PMAOVR_POS = 14;
        static constexpr unsigned PMAOVR_MASK = 0x00004000;
        static constexpr unsigned PMAOVR(unsigned value) { return (value << 14); }
        static constexpr unsigned CTR_POS = 15;
        static constexpr unsigned CTR_MASK = 0x00008000;
        static constexpr unsigned CTR(unsigned value) { return (value << 15); }
    } ISTR;

    volatile union FNR_T // FNR: frame number register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FNR_BIT_T
        {
            unsigned FN   : 11; // bits 0..10 Frame number
            unsigned LSOF : 2; // bits 11..12 Lost SOF
            unsigned LCK  : 1; // bit 13 Locked
            unsigned RXDM : 1; // bit 14 Receive data - line status
            unsigned RXDP : 1; // bit 15 Receive data + line status
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned FN_POS = 0;
        static constexpr unsigned FN_MASK = 0x000007ff;
        static constexpr unsigned FN(unsigned value) { return (value << 0); }
        static constexpr unsigned LSOF_POS = 11;
        static constexpr unsigned LSOF_MASK = 0x00001800;
        static constexpr unsigned LSOF(unsigned value) { return (value << 11); }
        static constexpr unsigned LCK_POS = 13;
        static constexpr unsigned LCK_MASK = 0x00002000;
        static constexpr unsigned LCK(unsigned value) { return (value << 13); }
        static constexpr unsigned RXDM_POS = 14;
        static constexpr unsigned RXDM_MASK = 0x00004000;
        static constexpr unsigned RXDM(unsigned value) { return (value << 14); }
        static constexpr unsigned RXDP_POS = 15;
        static constexpr unsigned RXDP_MASK = 0x00008000;
        static constexpr unsigned RXDP(unsigned value) { return (value << 15); }
    } FNR;

    volatile union DADDR_T // DADDR: device address 
    {
        uint32_t reg;
        struct __attribute__((packed)) DADDR_BIT_T
        {
            unsigned ADD : 7; // bits 0..6 Device address
            unsigned EF  : 1; // bit 7 Enable function
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned ADD_POS = 0;
        static constexpr unsigned ADD_MASK = 0x0000007f;
        static constexpr unsigned ADD(unsigned value) { return (value << 0); }
        static constexpr unsigned EF_POS = 7;
        static constexpr unsigned EF_MASK = 0x00000080;
        static constexpr unsigned EF(unsigned value) { return (value << 7); }
    } DADDR;

    volatile union BTABLE_T // BTABLE: Buffer table address 
    {
        uint32_t reg;
        struct __attribute__((packed)) BTABLE_BIT_T
        {
            unsigned        : 3; // bits 0..2 unused
            unsigned BTABLE : 13; // bits 3..15 Buffer table
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned BTABLE_POS = 3;
        static constexpr unsigned BTABLE_MASK = 0x0000fff8;
        static constexpr unsigned BTABLE(unsigned value) { return (value << 3); }
    } BTABLE;

    volatile union LPMCSR_T // LPMCSR: LPM control and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LPMCSR_BIT_T
        {
            unsigned LPMEN   : 1; // bit 0 LPM support enable
            unsigned LPMACK  : 1; // bit 1 LPM Token acknowledge enable
            unsigned         : 1; // bit 2 unused
            unsigned REMWAKE : 1; // bit 3 bRemoteWake value
            unsigned BESL    : 4; // bits 4..7 BESL value
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned LPMEN_POS = 0;
        static constexpr unsigned LPMEN_MASK = 0x00000001;
        static constexpr unsigned LPMEN(unsigned value) { return (value << 0); }
        static constexpr unsigned LPMACK_POS = 1;
        static constexpr unsigned LPMACK_MASK = 0x00000002;
        static constexpr unsigned LPMACK(unsigned value) { return (value << 1); }
        static constexpr unsigned REMWAKE_POS = 3;
        static constexpr unsigned REMWAKE_MASK = 0x00000008;
        static constexpr unsigned REMWAKE(unsigned value) { return (value << 3); }
        static constexpr unsigned BESL_POS = 4;
        static constexpr unsigned BESL_MASK = 0x000000f0;
        static constexpr unsigned BESL(unsigned value) { return (value << 4); }
    } LPMCSR;

    volatile union BCDR_T // BCDR: Battery charging detector 
    {
        uint32_t reg;
        struct __attribute__((packed)) BCDR_BIT_T
        {
            unsigned BCDEN  : 1; // bit 0 Battery charging detector (BCD) enable
            unsigned DCDEN  : 1; // bit 1 Data contact detection (DCD) mode enable
            unsigned PDEN   : 1; // bit 2 Primary detection (PD) mode enable
            unsigned SDEN   : 1; // bit 3 Secondary detection (SD) mode enable
            unsigned DCDET  : 1; // bit 4 Data contact detection (DCD) status
            unsigned PDET   : 1; // bit 5 Primary detection (PD) status
            unsigned SDET   : 1; // bit 6 Secondary detection (SD) status
            unsigned PS2DET : 1; // bit 7 DM pull-up detection status
            unsigned        : 7; // bits 8..14 unused
            unsigned DPPU   : 1; // bit 15 DP pull-up control
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned BCDEN_POS = 0;
        static constexpr unsigned BCDEN_MASK = 0x00000001;
        static constexpr unsigned BCDEN(unsigned value) { return (value << 0); }
        static constexpr unsigned DCDEN_POS = 1;
        static constexpr unsigned DCDEN_MASK = 0x00000002;
        static constexpr unsigned DCDEN(unsigned value) { return (value << 1); }
        static constexpr unsigned PDEN_POS = 2;
        static constexpr unsigned PDEN_MASK = 0x00000004;
        static constexpr unsigned PDEN(unsigned value) { return (value << 2); }
        static constexpr unsigned SDEN_POS = 3;
        static constexpr unsigned SDEN_MASK = 0x00000008;
        static constexpr unsigned SDEN(unsigned value) { return (value << 3); }
        static constexpr unsigned DCDET_POS = 4;
        static constexpr unsigned DCDET_MASK = 0x00000010;
        static constexpr unsigned DCDET(unsigned value) { return (value << 4); }
        static constexpr unsigned PDET_POS = 5;
        static constexpr unsigned PDET_MASK = 0x00000020;
        static constexpr unsigned PDET(unsigned value) { return (value << 5); }
        static constexpr unsigned SDET_POS = 6;
        static constexpr unsigned SDET_MASK = 0x00000040;
        static constexpr unsigned SDET(unsigned value) { return (value << 6); }
        static constexpr unsigned PS2DET_POS = 7;
        static constexpr unsigned PS2DET_MASK = 0x00000080;
        static constexpr unsigned PS2DET(unsigned value) { return (value << 7); }
        static constexpr unsigned DPPU_POS = 15;
        static constexpr unsigned DPPU_MASK = 0x00008000;
        static constexpr unsigned DPPU(unsigned value) { return (value << 15); }
    } BCDR;

}; // struct USB_T

static_assert(sizeof(USB_T) == USB_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp