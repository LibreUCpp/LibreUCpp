#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CAN_T
{
    static constexpr size_t INSTANCE_SIZE = 252;
    static constexpr size_t PADDED_INSTANCE_SIZE = 252;
    static constexpr intptr_t BASE_ADDRESS_CAN0 = 0x42001c00;
    static constexpr intptr_t BASE_ADDRESS_CAN1 = 0x42002000;

    static constexpr intptr_t ADDR_OFFSET_CREL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_ENDN = 0x04;
    static constexpr intptr_t ADDR_OFFSET_MRCFG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DBTP = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_TEST = 0x10;
    static constexpr intptr_t ADDR_OFFSET_RWD = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CCCR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_NBTP = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_TSCC = 0x20;
    static constexpr intptr_t ADDR_OFFSET_TSCV = 0x24;
    static constexpr intptr_t ADDR_OFFSET_TOCC = 0x28;
    static constexpr intptr_t ADDR_OFFSET_TOCV = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_ECR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_PSR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_TDCR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_IR = 0x50;
    static constexpr intptr_t ADDR_OFFSET_IE = 0x54;
    static constexpr intptr_t ADDR_OFFSET_ILS = 0x58;
    static constexpr intptr_t ADDR_OFFSET_ILE = 0x5c;
    static constexpr intptr_t ADDR_OFFSET_GFC = 0x80;
    static constexpr intptr_t ADDR_OFFSET_SIDFC = 0x84;
    static constexpr intptr_t ADDR_OFFSET_XIDFC = 0x88;
    static constexpr intptr_t ADDR_OFFSET_XIDAM = 0x90;
    static constexpr intptr_t ADDR_OFFSET_HPMS = 0x94;
    static constexpr intptr_t ADDR_OFFSET_NDAT1 = 0x98;
    static constexpr intptr_t ADDR_OFFSET_NDAT2 = 0x9c;
    static constexpr intptr_t ADDR_OFFSET_RXF0C = 0xa0;
    static constexpr intptr_t ADDR_OFFSET_RXF0S = 0xa4;
    static constexpr intptr_t ADDR_OFFSET_RXF0A = 0xa8;
    static constexpr intptr_t ADDR_OFFSET_RXBC = 0xac;
    static constexpr intptr_t ADDR_OFFSET_RXF1C = 0xb0;
    static constexpr intptr_t ADDR_OFFSET_RXF1S = 0xb4;
    static constexpr intptr_t ADDR_OFFSET_RXF1A = 0xb8;
    static constexpr intptr_t ADDR_OFFSET_RXESC = 0xbc;
    static constexpr intptr_t ADDR_OFFSET_TXBC = 0xc0;
    static constexpr intptr_t ADDR_OFFSET_TXFQS = 0xc4;
    static constexpr intptr_t ADDR_OFFSET_TXESC = 0xc8;
    static constexpr intptr_t ADDR_OFFSET_TXBRP = 0xcc;
    static constexpr intptr_t ADDR_OFFSET_TXBAR = 0xd0;
    static constexpr intptr_t ADDR_OFFSET_TXBCR = 0xd4;
    static constexpr intptr_t ADDR_OFFSET_TXBTO = 0xd8;
    static constexpr intptr_t ADDR_OFFSET_TXBCF = 0xdc;
    static constexpr intptr_t ADDR_OFFSET_TXBTIE = 0xe0;
    static constexpr intptr_t ADDR_OFFSET_TXBCIE = 0xe4;
    static constexpr intptr_t ADDR_OFFSET_TXEFC = 0xf0;
    static constexpr intptr_t ADDR_OFFSET_TXEFS = 0xf4;
    static constexpr intptr_t ADDR_OFFSET_TXEFA = 0xf8;

    volatile union CREL_T // CREL: Core Release 
    {
        uint32_t reg;
        struct __attribute__((packed)) CREL_BIT_T
        {
            unsigned         : 20; // bits 0..19 unused
            unsigned SUBSTEP : 4; // bits 20..23 Sub-step of Core Release
            unsigned STEP    : 4; // bits 24..27 Step of Core Release
            unsigned REL     : 4; // bits 28..31 Core Release    
        } bit;
    
        static constexpr unsigned SUBSTEP_POS = 20;
        static constexpr unsigned SUBSTEP_MASK = 0x00f00000;
        static constexpr unsigned SUBSTEP(unsigned value) { return (value << 20); }
        static constexpr unsigned STEP_POS = 24;
        static constexpr unsigned STEP_MASK = 0x0f000000;
        static constexpr unsigned STEP(unsigned value) { return (value << 24); }
        static constexpr unsigned REL_POS = 28;
        static constexpr unsigned REL_MASK = 0xf0000000;
        static constexpr unsigned REL(unsigned value) { return (value << 28); }
    } CREL;

    volatile union ENDN_T // ENDN: Endian 
    {
        uint32_t reg;
        struct __attribute__((packed)) ENDN_BIT_T
        {
            unsigned ETV : 32; // bits 0..31 Endianness Test Value    
        } bit;
    
        static constexpr unsigned ETV_POS = 0;
        static constexpr unsigned ETV_MASK = 0xffffffff;
        static constexpr unsigned ETV(unsigned value) { return (value << 0); }
    } ENDN;

    volatile union MRCFG_T // MRCFG: Message RAM Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) MRCFG_BIT_T
        {
            unsigned QOS : 2; // bits 0..1 Quality of Service
            unsigned     : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned QOS_POS = 0;
        static constexpr unsigned QOS_MASK = 0x00000003;
        static constexpr unsigned QOS(unsigned value) { return (value << 0); }
    } MRCFG;

    volatile union DBTP_T // DBTP: Fast Bit Timing and Prescaler 
    {
        uint32_t reg;
        struct __attribute__((packed)) DBTP_BIT_T
        {
            unsigned DSJW   : 4; // bits 0..3 Data (Re)Synchronization Jump Width
            unsigned DTSEG2 : 4; // bits 4..7 Data time segment after sample point
            unsigned DTSEG1 : 5; // bits 8..12 Data time segment before sample point
            unsigned        : 3; // bits 13..15 unused
            unsigned DBRP   : 5; // bits 16..20 Data Baud Rate Prescaler
            unsigned        : 2; // bits 21..22 unused
            unsigned TDC    : 1; // bit 23 Tranceiver Delay Compensation
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned DSJW_POS = 0;
        static constexpr unsigned DSJW_MASK = 0x0000000f;
        static constexpr unsigned DSJW(unsigned value) { return (value << 0); }
        static constexpr unsigned DTSEG2_POS = 4;
        static constexpr unsigned DTSEG2_MASK = 0x000000f0;
        static constexpr unsigned DTSEG2(unsigned value) { return (value << 4); }
        static constexpr unsigned DTSEG1_POS = 8;
        static constexpr unsigned DTSEG1_MASK = 0x00001f00;
        static constexpr unsigned DTSEG1(unsigned value) { return (value << 8); }
        static constexpr unsigned DBRP_POS = 16;
        static constexpr unsigned DBRP_MASK = 0x001f0000;
        static constexpr unsigned DBRP(unsigned value) { return (value << 16); }
        static constexpr unsigned TDC_POS = 23;
        static constexpr unsigned TDC_MASK = 0x00800000;
        static constexpr unsigned TDC(unsigned value) { return (value << 23); }
    } DBTP;

    volatile union TEST_T // TEST: Test 
    {
        uint32_t reg;
        struct __attribute__((packed)) TEST_BIT_T
        {
            unsigned      : 4; // bits 0..3 unused
            unsigned LBCK : 1; // bit 4 Loop Back Mode
            unsigned TX   : 2; // bits 5..6 Control of Transmit Pin
            unsigned RX   : 1; // bit 7 Receive Pin
            unsigned      : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned LBCK_POS = 4;
        static constexpr unsigned LBCK_MASK = 0x00000010;
        static constexpr unsigned LBCK(unsigned value) { return (value << 4); }
        static constexpr unsigned TX_POS = 5;
        static constexpr unsigned TX_MASK = 0x00000060;
        static constexpr unsigned TX(unsigned value) { return (value << 5); }
        static constexpr unsigned RX_POS = 7;
        static constexpr unsigned RX_MASK = 0x00000080;
        static constexpr unsigned RX(unsigned value) { return (value << 7); }
    } TEST;

    volatile union RWD_T // RWD: RAM Watchdog 
    {
        uint32_t reg;
        struct __attribute__((packed)) RWD_BIT_T
        {
            unsigned WDC : 8; // bits 0..7 Watchdog Configuration
            unsigned WDV : 8; // bits 8..15 Watchdog Value
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned WDC_POS = 0;
        static constexpr unsigned WDC_MASK = 0x000000ff;
        static constexpr unsigned WDC(unsigned value) { return (value << 0); }
        static constexpr unsigned WDV_POS = 8;
        static constexpr unsigned WDV_MASK = 0x0000ff00;
        static constexpr unsigned WDV(unsigned value) { return (value << 8); }
    } RWD;

    volatile union CCCR_T // CCCR: CC Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCCR_BIT_T
        {
            unsigned INIT : 1; // bit 0 Initialization
            unsigned CCE  : 1; // bit 1 Configuration Change Enable
            unsigned ASM  : 1; // bit 2 ASM Restricted Operation Mode
            unsigned CSA  : 1; // bit 3 Clock Stop Acknowledge
            unsigned CSR  : 1; // bit 4 Clock Stop Request
            unsigned MON  : 1; // bit 5 Bus Monitoring Mode
            unsigned DAR  : 1; // bit 6 Disable Automatic Retransmission
            unsigned TEST : 1; // bit 7 Test Mode Enable
            unsigned FDOE : 1; // bit 8 FD Operation Enable
            unsigned BRSE : 1; // bit 9 Bit Rate Switch Enable
            unsigned      : 2; // bits 10..11 unused
            unsigned PXHD : 1; // bit 12 Protocol Exception Handling Disable
            unsigned EFBI : 1; // bit 13 Edge Filtering during Bus Integration
            unsigned TXP  : 1; // bit 14 Transmit Pause
            unsigned NISO : 1; // bit 15 Non ISO Operation
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INIT_POS = 0;
        static constexpr unsigned INIT_MASK = 0x00000001;
        static constexpr unsigned INIT(unsigned value) { return (value << 0); }
        static constexpr unsigned CCE_POS = 1;
        static constexpr unsigned CCE_MASK = 0x00000002;
        static constexpr unsigned CCE(unsigned value) { return (value << 1); }
        static constexpr unsigned ASM_POS = 2;
        static constexpr unsigned ASM_MASK = 0x00000004;
        static constexpr unsigned ASM(unsigned value) { return (value << 2); }
        static constexpr unsigned CSA_POS = 3;
        static constexpr unsigned CSA_MASK = 0x00000008;
        static constexpr unsigned CSA(unsigned value) { return (value << 3); }
        static constexpr unsigned CSR_POS = 4;
        static constexpr unsigned CSR_MASK = 0x00000010;
        static constexpr unsigned CSR(unsigned value) { return (value << 4); }
        static constexpr unsigned MON_POS = 5;
        static constexpr unsigned MON_MASK = 0x00000020;
        static constexpr unsigned MON(unsigned value) { return (value << 5); }
        static constexpr unsigned DAR_POS = 6;
        static constexpr unsigned DAR_MASK = 0x00000040;
        static constexpr unsigned DAR(unsigned value) { return (value << 6); }
        static constexpr unsigned TEST_POS = 7;
        static constexpr unsigned TEST_MASK = 0x00000080;
        static constexpr unsigned TEST(unsigned value) { return (value << 7); }
        static constexpr unsigned FDOE_POS = 8;
        static constexpr unsigned FDOE_MASK = 0x00000100;
        static constexpr unsigned FDOE(unsigned value) { return (value << 8); }
        static constexpr unsigned BRSE_POS = 9;
        static constexpr unsigned BRSE_MASK = 0x00000200;
        static constexpr unsigned BRSE(unsigned value) { return (value << 9); }
        static constexpr unsigned PXHD_POS = 12;
        static constexpr unsigned PXHD_MASK = 0x00001000;
        static constexpr unsigned PXHD(unsigned value) { return (value << 12); }
        static constexpr unsigned EFBI_POS = 13;
        static constexpr unsigned EFBI_MASK = 0x00002000;
        static constexpr unsigned EFBI(unsigned value) { return (value << 13); }
        static constexpr unsigned TXP_POS = 14;
        static constexpr unsigned TXP_MASK = 0x00004000;
        static constexpr unsigned TXP(unsigned value) { return (value << 14); }
        static constexpr unsigned NISO_POS = 15;
        static constexpr unsigned NISO_MASK = 0x00008000;
        static constexpr unsigned NISO(unsigned value) { return (value << 15); }
    } CCCR;

    volatile union NBTP_T // NBTP: Nominal Bit Timing and Prescaler 
    {
        uint32_t reg;
        struct __attribute__((packed)) NBTP_BIT_T
        {
            unsigned NTSEG2 : 7; // bits 0..6 Nominal Time segment after sample point
            unsigned        : 1; // bit 7 unused
            unsigned NTSEG1 : 8; // bits 8..15 Nominal Time segment before sample point
            unsigned NBRP   : 9; // bits 16..24 Nominal Baud Rate Prescaler
            unsigned NSJW   : 7; // bits 25..31 Nominal (Re)Synchronization Jump Width    
        } bit;
    
        static constexpr unsigned NTSEG2_POS = 0;
        static constexpr unsigned NTSEG2_MASK = 0x0000007f;
        static constexpr unsigned NTSEG2(unsigned value) { return (value << 0); }
        static constexpr unsigned NTSEG1_POS = 8;
        static constexpr unsigned NTSEG1_MASK = 0x0000ff00;
        static constexpr unsigned NTSEG1(unsigned value) { return (value << 8); }
        static constexpr unsigned NBRP_POS = 16;
        static constexpr unsigned NBRP_MASK = 0x01ff0000;
        static constexpr unsigned NBRP(unsigned value) { return (value << 16); }
        static constexpr unsigned NSJW_POS = 25;
        static constexpr unsigned NSJW_MASK = 0xfe000000;
        static constexpr unsigned NSJW(unsigned value) { return (value << 25); }
    } NBTP;

    volatile union TSCC_T // TSCC: Timestamp Counter Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) TSCC_BIT_T
        {
            unsigned TSS : 2; // bits 0..1 Timestamp Select
            unsigned     : 14; // bits 2..15 unused
            unsigned TCP : 4; // bits 16..19 Timestamp Counter Prescaler
            unsigned     : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned TSS_POS = 0;
        static constexpr unsigned TSS_MASK = 0x00000003;
        static constexpr unsigned TSS(unsigned value) { return (value << 0); }
        static constexpr unsigned TCP_POS = 16;
        static constexpr unsigned TCP_MASK = 0x000f0000;
        static constexpr unsigned TCP(unsigned value) { return (value << 16); }
    } TSCC;

    volatile union TSCV_T // TSCV: Timestamp Counter Value 
    {
        uint32_t reg;
        struct __attribute__((packed)) TSCV_BIT_T
        {
            unsigned TSC : 16; // bits 0..15 Timestamp Counter
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned TSC_POS = 0;
        static constexpr unsigned TSC_MASK = 0x0000ffff;
        static constexpr unsigned TSC(unsigned value) { return (value << 0); }
    } TSCV;

    volatile union TOCC_T // TOCC: Timeout Counter Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) TOCC_BIT_T
        {
            unsigned ETOC : 1; // bit 0 Enable Timeout Counter
            unsigned TOS  : 2; // bits 1..2 Timeout Select
            unsigned      : 13; // bits 3..15 unused
            unsigned TOP  : 16; // bits 16..31 Timeout Period    
        } bit;
    
        static constexpr unsigned ETOC_POS = 0;
        static constexpr unsigned ETOC_MASK = 0x00000001;
        static constexpr unsigned ETOC(unsigned value) { return (value << 0); }
        static constexpr unsigned TOS_POS = 1;
        static constexpr unsigned TOS_MASK = 0x00000006;
        static constexpr unsigned TOS(unsigned value) { return (value << 1); }
        static constexpr unsigned TOP_POS = 16;
        static constexpr unsigned TOP_MASK = 0xffff0000;
        static constexpr unsigned TOP(unsigned value) { return (value << 16); }
    } TOCC;

    volatile union TOCV_T // TOCV: Timeout Counter Value 
    {
        uint32_t reg;
        struct __attribute__((packed)) TOCV_BIT_T
        {
            unsigned TOC : 16; // bits 0..15 Timeout Counter
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned TOC_POS = 0;
        static constexpr unsigned TOC_MASK = 0x0000ffff;
        static constexpr unsigned TOC(unsigned value) { return (value << 0); }
    } TOCV;

    uint8_t Reserved1[16];

    volatile union ECR_T // ECR: Error Counter 
    {
        uint32_t reg;
        struct __attribute__((packed)) ECR_BIT_T
        {
            unsigned TEC : 8; // bits 0..7 Transmit Error Counter
            unsigned REC : 7; // bits 8..14 Receive Error Counter
            unsigned RP  : 1; // bit 15 Receive Error Passive
            unsigned CEL : 8; // bits 16..23 CAN Error Logging
            unsigned     : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned TEC_POS = 0;
        static constexpr unsigned TEC_MASK = 0x000000ff;
        static constexpr unsigned TEC(unsigned value) { return (value << 0); }
        static constexpr unsigned REC_POS = 8;
        static constexpr unsigned REC_MASK = 0x00007f00;
        static constexpr unsigned REC(unsigned value) { return (value << 8); }
        static constexpr unsigned RP_POS = 15;
        static constexpr unsigned RP_MASK = 0x00008000;
        static constexpr unsigned RP(unsigned value) { return (value << 15); }
        static constexpr unsigned CEL_POS = 16;
        static constexpr unsigned CEL_MASK = 0x00ff0000;
        static constexpr unsigned CEL(unsigned value) { return (value << 16); }
    } ECR;

    volatile union PSR_T // PSR: Protocol Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) PSR_BIT_T
        {
            unsigned LEC  : 3; // bits 0..2 Last Error Code
            unsigned ACT  : 2; // bits 3..4 Activity
            unsigned EP   : 1; // bit 5 Error Passive
            unsigned EW   : 1; // bit 6 Warning Status
            unsigned BO   : 1; // bit 7 Bus_Off Status
            unsigned DLEC : 3; // bits 8..10 Data Phase Last Error Code
            unsigned RESI : 1; // bit 11 ESI flag of last received CAN FD Message
            unsigned RBRS : 1; // bit 12 BRS flag of last received CAN FD Message
            unsigned RFDF : 1; // bit 13 Received a CAN FD Message
            unsigned PXE  : 1; // bit 14 Protocol Exception Event
            unsigned      : 1; // bit 15 unused
            unsigned TDCV : 7; // bits 16..22 Transmitter Delay Compensation Value
            unsigned      : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned LEC_POS = 0;
        static constexpr unsigned LEC_MASK = 0x00000007;
        static constexpr unsigned LEC(unsigned value) { return (value << 0); }
        static constexpr unsigned ACT_POS = 3;
        static constexpr unsigned ACT_MASK = 0x00000018;
        static constexpr unsigned ACT(unsigned value) { return (value << 3); }
        static constexpr unsigned EP_POS = 5;
        static constexpr unsigned EP_MASK = 0x00000020;
        static constexpr unsigned EP(unsigned value) { return (value << 5); }
        static constexpr unsigned EW_POS = 6;
        static constexpr unsigned EW_MASK = 0x00000040;
        static constexpr unsigned EW(unsigned value) { return (value << 6); }
        static constexpr unsigned BO_POS = 7;
        static constexpr unsigned BO_MASK = 0x00000080;
        static constexpr unsigned BO(unsigned value) { return (value << 7); }
        static constexpr unsigned DLEC_POS = 8;
        static constexpr unsigned DLEC_MASK = 0x00000700;
        static constexpr unsigned DLEC(unsigned value) { return (value << 8); }
        static constexpr unsigned RESI_POS = 11;
        static constexpr unsigned RESI_MASK = 0x00000800;
        static constexpr unsigned RESI(unsigned value) { return (value << 11); }
        static constexpr unsigned RBRS_POS = 12;
        static constexpr unsigned RBRS_MASK = 0x00001000;
        static constexpr unsigned RBRS(unsigned value) { return (value << 12); }
        static constexpr unsigned RFDF_POS = 13;
        static constexpr unsigned RFDF_MASK = 0x00002000;
        static constexpr unsigned RFDF(unsigned value) { return (value << 13); }
        static constexpr unsigned PXE_POS = 14;
        static constexpr unsigned PXE_MASK = 0x00004000;
        static constexpr unsigned PXE(unsigned value) { return (value << 14); }
        static constexpr unsigned TDCV_POS = 16;
        static constexpr unsigned TDCV_MASK = 0x007f0000;
        static constexpr unsigned TDCV(unsigned value) { return (value << 16); }
    } PSR;

    volatile union TDCR_T // TDCR: Extended ID Filter Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDCR_BIT_T
        {
            unsigned TDCF : 7; // bits 0..6 Transmitter Delay Compensation Filter Length
            unsigned      : 1; // bit 7 unused
            unsigned TDCO : 7; // bits 8..14 Transmitter Delay Compensation Offset
            unsigned      : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned TDCF_POS = 0;
        static constexpr unsigned TDCF_MASK = 0x0000007f;
        static constexpr unsigned TDCF(unsigned value) { return (value << 0); }
        static constexpr unsigned TDCO_POS = 8;
        static constexpr unsigned TDCO_MASK = 0x00007f00;
        static constexpr unsigned TDCO(unsigned value) { return (value << 8); }
    } TDCR;

    uint8_t Reserved2[4];

    volatile union IR_T // IR: Interrupt 
    {
        uint32_t reg;
        struct __attribute__((packed)) IR_BIT_T
        {
            unsigned RF0N : 1; // bit 0 Rx FIFO 0 New Message
            unsigned RF0W : 1; // bit 1 Rx FIFO 0 Watermark Reached
            unsigned RF0F : 1; // bit 2 Rx FIFO 0 Full
            unsigned RF0L : 1; // bit 3 Rx FIFO 0 Message Lost
            unsigned RF1N : 1; // bit 4 Rx FIFO 1 New Message
            unsigned RF1W : 1; // bit 5 Rx FIFO 1 Watermark Reached
            unsigned RF1F : 1; // bit 6 Rx FIFO 1 FIFO Full
            unsigned RF1L : 1; // bit 7 Rx FIFO 1 Message Lost
            unsigned HPM  : 1; // bit 8 High Priority Message
            unsigned TC   : 1; // bit 9 Timestamp Completed
            unsigned TCF  : 1; // bit 10 Transmission Cancellation Finished
            unsigned TFE  : 1; // bit 11 Tx FIFO Empty
            unsigned TEFN : 1; // bit 12 Tx Event FIFO New Entry
            unsigned TEFW : 1; // bit 13 Tx Event FIFO Watermark Reached
            unsigned TEFF : 1; // bit 14 Tx Event FIFO Full
            unsigned TEFL : 1; // bit 15 Tx Event FIFO Element Lost
            unsigned TSW  : 1; // bit 16 Timestamp Wraparound
            unsigned MRAF : 1; // bit 17 Message RAM Access Failure
            unsigned TOO  : 1; // bit 18 Timeout Occurred
            unsigned DRX  : 1; // bit 19 Message stored to Dedicated Rx Buffer
            unsigned BEC  : 1; // bit 20 Bit Error Corrected
            unsigned BEU  : 1; // bit 21 Bit Error Uncorrected
            unsigned ELO  : 1; // bit 22 Error Logging Overflow
            unsigned EP   : 1; // bit 23 Error Passive
            unsigned EW   : 1; // bit 24 Warning Status
            unsigned BO   : 1; // bit 25 Bus_Off Status
            unsigned WDI  : 1; // bit 26 Watchdog Interrupt
            unsigned PEA  : 1; // bit 27 Protocol Error in Arbitration Phase
            unsigned PED  : 1; // bit 28 Protocol Error in Data Phase
            unsigned ARA  : 1; // bit 29 Access to Reserved Address
            unsigned      : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned RF0N_POS = 0;
        static constexpr unsigned RF0N_MASK = 0x00000001;
        static constexpr unsigned RF0N(unsigned value) { return (value << 0); }
        static constexpr unsigned RF0W_POS = 1;
        static constexpr unsigned RF0W_MASK = 0x00000002;
        static constexpr unsigned RF0W(unsigned value) { return (value << 1); }
        static constexpr unsigned RF0F_POS = 2;
        static constexpr unsigned RF0F_MASK = 0x00000004;
        static constexpr unsigned RF0F(unsigned value) { return (value << 2); }
        static constexpr unsigned RF0L_POS = 3;
        static constexpr unsigned RF0L_MASK = 0x00000008;
        static constexpr unsigned RF0L(unsigned value) { return (value << 3); }
        static constexpr unsigned RF1N_POS = 4;
        static constexpr unsigned RF1N_MASK = 0x00000010;
        static constexpr unsigned RF1N(unsigned value) { return (value << 4); }
        static constexpr unsigned RF1W_POS = 5;
        static constexpr unsigned RF1W_MASK = 0x00000020;
        static constexpr unsigned RF1W(unsigned value) { return (value << 5); }
        static constexpr unsigned RF1F_POS = 6;
        static constexpr unsigned RF1F_MASK = 0x00000040;
        static constexpr unsigned RF1F(unsigned value) { return (value << 6); }
        static constexpr unsigned RF1L_POS = 7;
        static constexpr unsigned RF1L_MASK = 0x00000080;
        static constexpr unsigned RF1L(unsigned value) { return (value << 7); }
        static constexpr unsigned HPM_POS = 8;
        static constexpr unsigned HPM_MASK = 0x00000100;
        static constexpr unsigned HPM(unsigned value) { return (value << 8); }
        static constexpr unsigned TC_POS = 9;
        static constexpr unsigned TC_MASK = 0x00000200;
        static constexpr unsigned TC(unsigned value) { return (value << 9); }
        static constexpr unsigned TCF_POS = 10;
        static constexpr unsigned TCF_MASK = 0x00000400;
        static constexpr unsigned TCF(unsigned value) { return (value << 10); }
        static constexpr unsigned TFE_POS = 11;
        static constexpr unsigned TFE_MASK = 0x00000800;
        static constexpr unsigned TFE(unsigned value) { return (value << 11); }
        static constexpr unsigned TEFN_POS = 12;
        static constexpr unsigned TEFN_MASK = 0x00001000;
        static constexpr unsigned TEFN(unsigned value) { return (value << 12); }
        static constexpr unsigned TEFW_POS = 13;
        static constexpr unsigned TEFW_MASK = 0x00002000;
        static constexpr unsigned TEFW(unsigned value) { return (value << 13); }
        static constexpr unsigned TEFF_POS = 14;
        static constexpr unsigned TEFF_MASK = 0x00004000;
        static constexpr unsigned TEFF(unsigned value) { return (value << 14); }
        static constexpr unsigned TEFL_POS = 15;
        static constexpr unsigned TEFL_MASK = 0x00008000;
        static constexpr unsigned TEFL(unsigned value) { return (value << 15); }
        static constexpr unsigned TSW_POS = 16;
        static constexpr unsigned TSW_MASK = 0x00010000;
        static constexpr unsigned TSW(unsigned value) { return (value << 16); }
        static constexpr unsigned MRAF_POS = 17;
        static constexpr unsigned MRAF_MASK = 0x00020000;
        static constexpr unsigned MRAF(unsigned value) { return (value << 17); }
        static constexpr unsigned TOO_POS = 18;
        static constexpr unsigned TOO_MASK = 0x00040000;
        static constexpr unsigned TOO(unsigned value) { return (value << 18); }
        static constexpr unsigned DRX_POS = 19;
        static constexpr unsigned DRX_MASK = 0x00080000;
        static constexpr unsigned DRX(unsigned value) { return (value << 19); }
        static constexpr unsigned BEC_POS = 20;
        static constexpr unsigned BEC_MASK = 0x00100000;
        static constexpr unsigned BEC(unsigned value) { return (value << 20); }
        static constexpr unsigned BEU_POS = 21;
        static constexpr unsigned BEU_MASK = 0x00200000;
        static constexpr unsigned BEU(unsigned value) { return (value << 21); }
        static constexpr unsigned ELO_POS = 22;
        static constexpr unsigned ELO_MASK = 0x00400000;
        static constexpr unsigned ELO(unsigned value) { return (value << 22); }
        static constexpr unsigned EP_POS = 23;
        static constexpr unsigned EP_MASK = 0x00800000;
        static constexpr unsigned EP(unsigned value) { return (value << 23); }
        static constexpr unsigned EW_POS = 24;
        static constexpr unsigned EW_MASK = 0x01000000;
        static constexpr unsigned EW(unsigned value) { return (value << 24); }
        static constexpr unsigned BO_POS = 25;
        static constexpr unsigned BO_MASK = 0x02000000;
        static constexpr unsigned BO(unsigned value) { return (value << 25); }
        static constexpr unsigned WDI_POS = 26;
        static constexpr unsigned WDI_MASK = 0x04000000;
        static constexpr unsigned WDI(unsigned value) { return (value << 26); }
        static constexpr unsigned PEA_POS = 27;
        static constexpr unsigned PEA_MASK = 0x08000000;
        static constexpr unsigned PEA(unsigned value) { return (value << 27); }
        static constexpr unsigned PED_POS = 28;
        static constexpr unsigned PED_MASK = 0x10000000;
        static constexpr unsigned PED(unsigned value) { return (value << 28); }
        static constexpr unsigned ARA_POS = 29;
        static constexpr unsigned ARA_MASK = 0x20000000;
        static constexpr unsigned ARA(unsigned value) { return (value << 29); }
    } IR;

    volatile union IE_T // IE: Interrupt Enable 
    {
        uint32_t reg;
        struct __attribute__((packed)) IE_BIT_T
        {
            unsigned RF0NE : 1; // bit 0 Rx FIFO 0 New Message Interrupt Enable
            unsigned RF0WE : 1; // bit 1 Rx FIFO 0 Watermark Reached Interrupt Enable
            unsigned RF0FE : 1; // bit 2 Rx FIFO 0 Full Interrupt Enable
            unsigned RF0LE : 1; // bit 3 Rx FIFO 0 Message Lost Interrupt Enable
            unsigned RF1NE : 1; // bit 4 Rx FIFO 1 New Message Interrupt Enable
            unsigned RF1WE : 1; // bit 5 Rx FIFO 1 Watermark Reached Interrupt Enable
            unsigned RF1FE : 1; // bit 6 Rx FIFO 1 FIFO Full Interrupt Enable
            unsigned RF1LE : 1; // bit 7 Rx FIFO 1 Message Lost Interrupt Enable
            unsigned HPME  : 1; // bit 8 High Priority Message Interrupt Enable
            unsigned TCE   : 1; // bit 9 Timestamp Completed Interrupt Enable
            unsigned TCFE  : 1; // bit 10 Transmission Cancellation Finished Interrupt Enable
            unsigned TFEE  : 1; // bit 11 Tx FIFO Empty Interrupt Enable
            unsigned TEFNE : 1; // bit 12 Tx Event FIFO New Entry Interrupt Enable
            unsigned TEFWE : 1; // bit 13 Tx Event FIFO Watermark Reached Interrupt Enable
            unsigned TEFFE : 1; // bit 14 Tx Event FIFO Full Interrupt Enable
            unsigned TEFLE : 1; // bit 15 Tx Event FIFO Element Lost Interrupt Enable
            unsigned TSWE  : 1; // bit 16 Timestamp Wraparound Interrupt Enable
            unsigned MRAFE : 1; // bit 17 Message RAM Access Failure Interrupt Enable
            unsigned TOOE  : 1; // bit 18 Timeout Occurred Interrupt Enable
            unsigned DRXE  : 1; // bit 19 Message stored to Dedicated Rx Buffer Interrupt Enable
            unsigned BECE  : 1; // bit 20 Bit Error Corrected Interrupt Enable
            unsigned BEUE  : 1; // bit 21 Bit Error Uncorrected Interrupt Enable
            unsigned ELOE  : 1; // bit 22 Error Logging Overflow Interrupt Enable
            unsigned EPE   : 1; // bit 23 Error Passive Interrupt Enable
            unsigned EWE   : 1; // bit 24 Warning Status Interrupt Enable
            unsigned BOE   : 1; // bit 25 Bus_Off Status Interrupt Enable
            unsigned WDIE  : 1; // bit 26 Watchdog Interrupt Interrupt Enable
            unsigned PEAE  : 1; // bit 27 Protocol Error in Arbitration Phase Enable
            unsigned PEDE  : 1; // bit 28 Protocol Error in Data Phase Enable
            unsigned ARAE  : 1; // bit 29 Access to Reserved Address Enable
            unsigned       : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned RF0NE_POS = 0;
        static constexpr unsigned RF0NE_MASK = 0x00000001;
        static constexpr unsigned RF0NE(unsigned value) { return (value << 0); }
        static constexpr unsigned RF0WE_POS = 1;
        static constexpr unsigned RF0WE_MASK = 0x00000002;
        static constexpr unsigned RF0WE(unsigned value) { return (value << 1); }
        static constexpr unsigned RF0FE_POS = 2;
        static constexpr unsigned RF0FE_MASK = 0x00000004;
        static constexpr unsigned RF0FE(unsigned value) { return (value << 2); }
        static constexpr unsigned RF0LE_POS = 3;
        static constexpr unsigned RF0LE_MASK = 0x00000008;
        static constexpr unsigned RF0LE(unsigned value) { return (value << 3); }
        static constexpr unsigned RF1NE_POS = 4;
        static constexpr unsigned RF1NE_MASK = 0x00000010;
        static constexpr unsigned RF1NE(unsigned value) { return (value << 4); }
        static constexpr unsigned RF1WE_POS = 5;
        static constexpr unsigned RF1WE_MASK = 0x00000020;
        static constexpr unsigned RF1WE(unsigned value) { return (value << 5); }
        static constexpr unsigned RF1FE_POS = 6;
        static constexpr unsigned RF1FE_MASK = 0x00000040;
        static constexpr unsigned RF1FE(unsigned value) { return (value << 6); }
        static constexpr unsigned RF1LE_POS = 7;
        static constexpr unsigned RF1LE_MASK = 0x00000080;
        static constexpr unsigned RF1LE(unsigned value) { return (value << 7); }
        static constexpr unsigned HPME_POS = 8;
        static constexpr unsigned HPME_MASK = 0x00000100;
        static constexpr unsigned HPME(unsigned value) { return (value << 8); }
        static constexpr unsigned TCE_POS = 9;
        static constexpr unsigned TCE_MASK = 0x00000200;
        static constexpr unsigned TCE(unsigned value) { return (value << 9); }
        static constexpr unsigned TCFE_POS = 10;
        static constexpr unsigned TCFE_MASK = 0x00000400;
        static constexpr unsigned TCFE(unsigned value) { return (value << 10); }
        static constexpr unsigned TFEE_POS = 11;
        static constexpr unsigned TFEE_MASK = 0x00000800;
        static constexpr unsigned TFEE(unsigned value) { return (value << 11); }
        static constexpr unsigned TEFNE_POS = 12;
        static constexpr unsigned TEFNE_MASK = 0x00001000;
        static constexpr unsigned TEFNE(unsigned value) { return (value << 12); }
        static constexpr unsigned TEFWE_POS = 13;
        static constexpr unsigned TEFWE_MASK = 0x00002000;
        static constexpr unsigned TEFWE(unsigned value) { return (value << 13); }
        static constexpr unsigned TEFFE_POS = 14;
        static constexpr unsigned TEFFE_MASK = 0x00004000;
        static constexpr unsigned TEFFE(unsigned value) { return (value << 14); }
        static constexpr unsigned TEFLE_POS = 15;
        static constexpr unsigned TEFLE_MASK = 0x00008000;
        static constexpr unsigned TEFLE(unsigned value) { return (value << 15); }
        static constexpr unsigned TSWE_POS = 16;
        static constexpr unsigned TSWE_MASK = 0x00010000;
        static constexpr unsigned TSWE(unsigned value) { return (value << 16); }
        static constexpr unsigned MRAFE_POS = 17;
        static constexpr unsigned MRAFE_MASK = 0x00020000;
        static constexpr unsigned MRAFE(unsigned value) { return (value << 17); }
        static constexpr unsigned TOOE_POS = 18;
        static constexpr unsigned TOOE_MASK = 0x00040000;
        static constexpr unsigned TOOE(unsigned value) { return (value << 18); }
        static constexpr unsigned DRXE_POS = 19;
        static constexpr unsigned DRXE_MASK = 0x00080000;
        static constexpr unsigned DRXE(unsigned value) { return (value << 19); }
        static constexpr unsigned BECE_POS = 20;
        static constexpr unsigned BECE_MASK = 0x00100000;
        static constexpr unsigned BECE(unsigned value) { return (value << 20); }
        static constexpr unsigned BEUE_POS = 21;
        static constexpr unsigned BEUE_MASK = 0x00200000;
        static constexpr unsigned BEUE(unsigned value) { return (value << 21); }
        static constexpr unsigned ELOE_POS = 22;
        static constexpr unsigned ELOE_MASK = 0x00400000;
        static constexpr unsigned ELOE(unsigned value) { return (value << 22); }
        static constexpr unsigned EPE_POS = 23;
        static constexpr unsigned EPE_MASK = 0x00800000;
        static constexpr unsigned EPE(unsigned value) { return (value << 23); }
        static constexpr unsigned EWE_POS = 24;
        static constexpr unsigned EWE_MASK = 0x01000000;
        static constexpr unsigned EWE(unsigned value) { return (value << 24); }
        static constexpr unsigned BOE_POS = 25;
        static constexpr unsigned BOE_MASK = 0x02000000;
        static constexpr unsigned BOE(unsigned value) { return (value << 25); }
        static constexpr unsigned WDIE_POS = 26;
        static constexpr unsigned WDIE_MASK = 0x04000000;
        static constexpr unsigned WDIE(unsigned value) { return (value << 26); }
        static constexpr unsigned PEAE_POS = 27;
        static constexpr unsigned PEAE_MASK = 0x08000000;
        static constexpr unsigned PEAE(unsigned value) { return (value << 27); }
        static constexpr unsigned PEDE_POS = 28;
        static constexpr unsigned PEDE_MASK = 0x10000000;
        static constexpr unsigned PEDE(unsigned value) { return (value << 28); }
        static constexpr unsigned ARAE_POS = 29;
        static constexpr unsigned ARAE_MASK = 0x20000000;
        static constexpr unsigned ARAE(unsigned value) { return (value << 29); }
    } IE;

    volatile union ILS_T // ILS: Interrupt Line Select 
    {
        uint32_t reg;
        struct __attribute__((packed)) ILS_BIT_T
        {
            unsigned RF0NL : 1; // bit 0 Rx FIFO 0 New Message Interrupt Line
            unsigned RF0WL : 1; // bit 1 Rx FIFO 0 Watermark Reached Interrupt Line
            unsigned RF0FL : 1; // bit 2 Rx FIFO 0 Full Interrupt Line
            unsigned RF0LL : 1; // bit 3 Rx FIFO 0 Message Lost Interrupt Line
            unsigned RF1NL : 1; // bit 4 Rx FIFO 1 New Message Interrupt Line
            unsigned RF1WL : 1; // bit 5 Rx FIFO 1 Watermark Reached Interrupt Line
            unsigned RF1FL : 1; // bit 6 Rx FIFO 1 FIFO Full Interrupt Line
            unsigned RF1LL : 1; // bit 7 Rx FIFO 1 Message Lost Interrupt Line
            unsigned HPML  : 1; // bit 8 High Priority Message Interrupt Line
            unsigned TCL   : 1; // bit 9 Timestamp Completed Interrupt Line
            unsigned TCFL  : 1; // bit 10 Transmission Cancellation Finished Interrupt Line
            unsigned TFEL  : 1; // bit 11 Tx FIFO Empty Interrupt Line
            unsigned TEFNL : 1; // bit 12 Tx Event FIFO New Entry Interrupt Line
            unsigned TEFWL : 1; // bit 13 Tx Event FIFO Watermark Reached Interrupt Line
            unsigned TEFFL : 1; // bit 14 Tx Event FIFO Full Interrupt Line
            unsigned TEFLL : 1; // bit 15 Tx Event FIFO Element Lost Interrupt Line
            unsigned TSWL  : 1; // bit 16 Timestamp Wraparound Interrupt Line
            unsigned MRAFL : 1; // bit 17 Message RAM Access Failure Interrupt Line
            unsigned TOOL  : 1; // bit 18 Timeout Occurred Interrupt Line
            unsigned DRXL  : 1; // bit 19 Message stored to Dedicated Rx Buffer Interrupt Line
            unsigned BECL  : 1; // bit 20 Bit Error Corrected Interrupt Line
            unsigned BEUL  : 1; // bit 21 Bit Error Uncorrected Interrupt Line
            unsigned ELOL  : 1; // bit 22 Error Logging Overflow Interrupt Line
            unsigned EPL   : 1; // bit 23 Error Passive Interrupt Line
            unsigned EWL   : 1; // bit 24 Warning Status Interrupt Line
            unsigned BOL   : 1; // bit 25 Bus_Off Status Interrupt Line
            unsigned WDIL  : 1; // bit 26 Watchdog Interrupt Interrupt Line
            unsigned PEAL  : 1; // bit 27 Protocol Error in Arbitration Phase Line
            unsigned PEDL  : 1; // bit 28 Protocol Error in Data Phase Line
            unsigned ARAL  : 1; // bit 29 Access to Reserved Address Line
            unsigned       : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned RF0NL_POS = 0;
        static constexpr unsigned RF0NL_MASK = 0x00000001;
        static constexpr unsigned RF0NL(unsigned value) { return (value << 0); }
        static constexpr unsigned RF0WL_POS = 1;
        static constexpr unsigned RF0WL_MASK = 0x00000002;
        static constexpr unsigned RF0WL(unsigned value) { return (value << 1); }
        static constexpr unsigned RF0FL_POS = 2;
        static constexpr unsigned RF0FL_MASK = 0x00000004;
        static constexpr unsigned RF0FL(unsigned value) { return (value << 2); }
        static constexpr unsigned RF0LL_POS = 3;
        static constexpr unsigned RF0LL_MASK = 0x00000008;
        static constexpr unsigned RF0LL(unsigned value) { return (value << 3); }
        static constexpr unsigned RF1NL_POS = 4;
        static constexpr unsigned RF1NL_MASK = 0x00000010;
        static constexpr unsigned RF1NL(unsigned value) { return (value << 4); }
        static constexpr unsigned RF1WL_POS = 5;
        static constexpr unsigned RF1WL_MASK = 0x00000020;
        static constexpr unsigned RF1WL(unsigned value) { return (value << 5); }
        static constexpr unsigned RF1FL_POS = 6;
        static constexpr unsigned RF1FL_MASK = 0x00000040;
        static constexpr unsigned RF1FL(unsigned value) { return (value << 6); }
        static constexpr unsigned RF1LL_POS = 7;
        static constexpr unsigned RF1LL_MASK = 0x00000080;
        static constexpr unsigned RF1LL(unsigned value) { return (value << 7); }
        static constexpr unsigned HPML_POS = 8;
        static constexpr unsigned HPML_MASK = 0x00000100;
        static constexpr unsigned HPML(unsigned value) { return (value << 8); }
        static constexpr unsigned TCL_POS = 9;
        static constexpr unsigned TCL_MASK = 0x00000200;
        static constexpr unsigned TCL(unsigned value) { return (value << 9); }
        static constexpr unsigned TCFL_POS = 10;
        static constexpr unsigned TCFL_MASK = 0x00000400;
        static constexpr unsigned TCFL(unsigned value) { return (value << 10); }
        static constexpr unsigned TFEL_POS = 11;
        static constexpr unsigned TFEL_MASK = 0x00000800;
        static constexpr unsigned TFEL(unsigned value) { return (value << 11); }
        static constexpr unsigned TEFNL_POS = 12;
        static constexpr unsigned TEFNL_MASK = 0x00001000;
        static constexpr unsigned TEFNL(unsigned value) { return (value << 12); }
        static constexpr unsigned TEFWL_POS = 13;
        static constexpr unsigned TEFWL_MASK = 0x00002000;
        static constexpr unsigned TEFWL(unsigned value) { return (value << 13); }
        static constexpr unsigned TEFFL_POS = 14;
        static constexpr unsigned TEFFL_MASK = 0x00004000;
        static constexpr unsigned TEFFL(unsigned value) { return (value << 14); }
        static constexpr unsigned TEFLL_POS = 15;
        static constexpr unsigned TEFLL_MASK = 0x00008000;
        static constexpr unsigned TEFLL(unsigned value) { return (value << 15); }
        static constexpr unsigned TSWL_POS = 16;
        static constexpr unsigned TSWL_MASK = 0x00010000;
        static constexpr unsigned TSWL(unsigned value) { return (value << 16); }
        static constexpr unsigned MRAFL_POS = 17;
        static constexpr unsigned MRAFL_MASK = 0x00020000;
        static constexpr unsigned MRAFL(unsigned value) { return (value << 17); }
        static constexpr unsigned TOOL_POS = 18;
        static constexpr unsigned TOOL_MASK = 0x00040000;
        static constexpr unsigned TOOL(unsigned value) { return (value << 18); }
        static constexpr unsigned DRXL_POS = 19;
        static constexpr unsigned DRXL_MASK = 0x00080000;
        static constexpr unsigned DRXL(unsigned value) { return (value << 19); }
        static constexpr unsigned BECL_POS = 20;
        static constexpr unsigned BECL_MASK = 0x00100000;
        static constexpr unsigned BECL(unsigned value) { return (value << 20); }
        static constexpr unsigned BEUL_POS = 21;
        static constexpr unsigned BEUL_MASK = 0x00200000;
        static constexpr unsigned BEUL(unsigned value) { return (value << 21); }
        static constexpr unsigned ELOL_POS = 22;
        static constexpr unsigned ELOL_MASK = 0x00400000;
        static constexpr unsigned ELOL(unsigned value) { return (value << 22); }
        static constexpr unsigned EPL_POS = 23;
        static constexpr unsigned EPL_MASK = 0x00800000;
        static constexpr unsigned EPL(unsigned value) { return (value << 23); }
        static constexpr unsigned EWL_POS = 24;
        static constexpr unsigned EWL_MASK = 0x01000000;
        static constexpr unsigned EWL(unsigned value) { return (value << 24); }
        static constexpr unsigned BOL_POS = 25;
        static constexpr unsigned BOL_MASK = 0x02000000;
        static constexpr unsigned BOL(unsigned value) { return (value << 25); }
        static constexpr unsigned WDIL_POS = 26;
        static constexpr unsigned WDIL_MASK = 0x04000000;
        static constexpr unsigned WDIL(unsigned value) { return (value << 26); }
        static constexpr unsigned PEAL_POS = 27;
        static constexpr unsigned PEAL_MASK = 0x08000000;
        static constexpr unsigned PEAL(unsigned value) { return (value << 27); }
        static constexpr unsigned PEDL_POS = 28;
        static constexpr unsigned PEDL_MASK = 0x10000000;
        static constexpr unsigned PEDL(unsigned value) { return (value << 28); }
        static constexpr unsigned ARAL_POS = 29;
        static constexpr unsigned ARAL_MASK = 0x20000000;
        static constexpr unsigned ARAL(unsigned value) { return (value << 29); }
    } ILS;

    volatile union ILE_T // ILE: Interrupt Line Enable 
    {
        uint32_t reg;
        struct __attribute__((packed)) ILE_BIT_T
        {
            unsigned EINT0 : 1; // bit 0 Enable Interrupt Line 0
            unsigned EINT1 : 1; // bit 1 Enable Interrupt Line 1
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned EINT0_POS = 0;
        static constexpr unsigned EINT0_MASK = 0x00000001;
        static constexpr unsigned EINT0(unsigned value) { return (value << 0); }
        static constexpr unsigned EINT1_POS = 1;
        static constexpr unsigned EINT1_MASK = 0x00000002;
        static constexpr unsigned EINT1(unsigned value) { return (value << 1); }
    } ILE;

    uint8_t Reserved3[32];

    volatile union GFC_T // GFC: Global Filter Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) GFC_BIT_T
        {
            unsigned RRFE : 1; // bit 0 Reject Remote Frames Extended
            unsigned RRFS : 1; // bit 1 Reject Remote Frames Standard
            unsigned ANFE : 2; // bits 2..3 Accept Non-matching Frames Extended
            unsigned ANFS : 2; // bits 4..5 Accept Non-matching Frames Standard
            unsigned      : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned RRFE_POS = 0;
        static constexpr unsigned RRFE_MASK = 0x00000001;
        static constexpr unsigned RRFE(unsigned value) { return (value << 0); }
        static constexpr unsigned RRFS_POS = 1;
        static constexpr unsigned RRFS_MASK = 0x00000002;
        static constexpr unsigned RRFS(unsigned value) { return (value << 1); }
        static constexpr unsigned ANFE_POS = 2;
        static constexpr unsigned ANFE_MASK = 0x0000000c;
        static constexpr unsigned ANFE(unsigned value) { return (value << 2); }
        static constexpr unsigned ANFS_POS = 4;
        static constexpr unsigned ANFS_MASK = 0x00000030;
        static constexpr unsigned ANFS(unsigned value) { return (value << 4); }
    } GFC;

    volatile union SIDFC_T // SIDFC: Standard ID Filter Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) SIDFC_BIT_T
        {
            unsigned FLSSA : 16; // bits 0..15 Filter List Standard Start Address
            unsigned LSS   : 8; // bits 16..23 List Size Standard
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned FLSSA_POS = 0;
        static constexpr unsigned FLSSA_MASK = 0x0000ffff;
        static constexpr unsigned FLSSA(unsigned value) { return (value << 0); }
        static constexpr unsigned LSS_POS = 16;
        static constexpr unsigned LSS_MASK = 0x00ff0000;
        static constexpr unsigned LSS(unsigned value) { return (value << 16); }
    } SIDFC;

    volatile union XIDFC_T // XIDFC: Extended ID Filter Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) XIDFC_BIT_T
        {
            unsigned FLESA : 16; // bits 0..15 Filter List Extended Start Address
            unsigned LSE   : 7; // bits 16..22 List Size Extended
            unsigned       : 9; // bits 23..31 unused    
        } bit;
    
        static constexpr unsigned FLESA_POS = 0;
        static constexpr unsigned FLESA_MASK = 0x0000ffff;
        static constexpr unsigned FLESA(unsigned value) { return (value << 0); }
        static constexpr unsigned LSE_POS = 16;
        static constexpr unsigned LSE_MASK = 0x007f0000;
        static constexpr unsigned LSE(unsigned value) { return (value << 16); }
    } XIDFC;

    uint8_t Reserved4[4];

    volatile union XIDAM_T // XIDAM: Extended ID AND Mask 
    {
        uint32_t reg;
        struct __attribute__((packed)) XIDAM_BIT_T
        {
            unsigned EIDM : 29; // bits 0..28 Extended ID Mask
            unsigned      : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned EIDM_POS = 0;
        static constexpr unsigned EIDM_MASK = 0x1fffffff;
        static constexpr unsigned EIDM(unsigned value) { return (value << 0); }
    } XIDAM;

    volatile union HPMS_T // HPMS: High Priority Message Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) HPMS_BIT_T
        {
            unsigned BIDX : 6; // bits 0..5 Buffer Index
            unsigned MSI  : 2; // bits 6..7 Message Storage Indicator
            unsigned FIDX : 7; // bits 8..14 Filter Index
            unsigned FLST : 1; // bit 15 Filter List
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned BIDX_POS = 0;
        static constexpr unsigned BIDX_MASK = 0x0000003f;
        static constexpr unsigned BIDX(unsigned value) { return (value << 0); }
        static constexpr unsigned MSI_POS = 6;
        static constexpr unsigned MSI_MASK = 0x000000c0;
        static constexpr unsigned MSI(unsigned value) { return (value << 6); }
        static constexpr unsigned FIDX_POS = 8;
        static constexpr unsigned FIDX_MASK = 0x00007f00;
        static constexpr unsigned FIDX(unsigned value) { return (value << 8); }
        static constexpr unsigned FLST_POS = 15;
        static constexpr unsigned FLST_MASK = 0x00008000;
        static constexpr unsigned FLST(unsigned value) { return (value << 15); }
    } HPMS;

    volatile union NDAT1_T // NDAT1: New Data 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) NDAT1_BIT_T
        {
            unsigned ND0  : 1; // bit 0 New Data 0
            unsigned ND1  : 1; // bit 1 New Data 1
            unsigned ND2  : 1; // bit 2 New Data 2
            unsigned ND3  : 1; // bit 3 New Data 3
            unsigned ND4  : 1; // bit 4 New Data 4
            unsigned ND5  : 1; // bit 5 New Data 5
            unsigned ND6  : 1; // bit 6 New Data 6
            unsigned ND7  : 1; // bit 7 New Data 7
            unsigned ND8  : 1; // bit 8 New Data 8
            unsigned ND9  : 1; // bit 9 New Data 9
            unsigned ND10 : 1; // bit 10 New Data 10
            unsigned ND11 : 1; // bit 11 New Data 11
            unsigned ND12 : 1; // bit 12 New Data 12
            unsigned ND13 : 1; // bit 13 New Data 13
            unsigned ND14 : 1; // bit 14 New Data 14
            unsigned ND15 : 1; // bit 15 New Data 15
            unsigned ND16 : 1; // bit 16 New Data 16
            unsigned ND17 : 1; // bit 17 New Data 17
            unsigned ND18 : 1; // bit 18 New Data 18
            unsigned ND19 : 1; // bit 19 New Data 19
            unsigned ND20 : 1; // bit 20 New Data 20
            unsigned ND21 : 1; // bit 21 New Data 21
            unsigned ND22 : 1; // bit 22 New Data 22
            unsigned ND23 : 1; // bit 23 New Data 23
            unsigned ND24 : 1; // bit 24 New Data 24
            unsigned ND25 : 1; // bit 25 New Data 25
            unsigned ND26 : 1; // bit 26 New Data 26
            unsigned ND27 : 1; // bit 27 New Data 27
            unsigned ND28 : 1; // bit 28 New Data 28
            unsigned ND29 : 1; // bit 29 New Data 29
            unsigned ND30 : 1; // bit 30 New Data 30
            unsigned ND31 : 1; // bit 31 New Data 31    
        } bit;
    
        static constexpr unsigned ND0_POS = 0;
        static constexpr unsigned ND0_MASK = 0x00000001;
        static constexpr unsigned ND0(unsigned value) { return (value << 0); }
        static constexpr unsigned ND1_POS = 1;
        static constexpr unsigned ND1_MASK = 0x00000002;
        static constexpr unsigned ND1(unsigned value) { return (value << 1); }
        static constexpr unsigned ND2_POS = 2;
        static constexpr unsigned ND2_MASK = 0x00000004;
        static constexpr unsigned ND2(unsigned value) { return (value << 2); }
        static constexpr unsigned ND3_POS = 3;
        static constexpr unsigned ND3_MASK = 0x00000008;
        static constexpr unsigned ND3(unsigned value) { return (value << 3); }
        static constexpr unsigned ND4_POS = 4;
        static constexpr unsigned ND4_MASK = 0x00000010;
        static constexpr unsigned ND4(unsigned value) { return (value << 4); }
        static constexpr unsigned ND5_POS = 5;
        static constexpr unsigned ND5_MASK = 0x00000020;
        static constexpr unsigned ND5(unsigned value) { return (value << 5); }
        static constexpr unsigned ND6_POS = 6;
        static constexpr unsigned ND6_MASK = 0x00000040;
        static constexpr unsigned ND6(unsigned value) { return (value << 6); }
        static constexpr unsigned ND7_POS = 7;
        static constexpr unsigned ND7_MASK = 0x00000080;
        static constexpr unsigned ND7(unsigned value) { return (value << 7); }
        static constexpr unsigned ND8_POS = 8;
        static constexpr unsigned ND8_MASK = 0x00000100;
        static constexpr unsigned ND8(unsigned value) { return (value << 8); }
        static constexpr unsigned ND9_POS = 9;
        static constexpr unsigned ND9_MASK = 0x00000200;
        static constexpr unsigned ND9(unsigned value) { return (value << 9); }
        static constexpr unsigned ND10_POS = 10;
        static constexpr unsigned ND10_MASK = 0x00000400;
        static constexpr unsigned ND10(unsigned value) { return (value << 10); }
        static constexpr unsigned ND11_POS = 11;
        static constexpr unsigned ND11_MASK = 0x00000800;
        static constexpr unsigned ND11(unsigned value) { return (value << 11); }
        static constexpr unsigned ND12_POS = 12;
        static constexpr unsigned ND12_MASK = 0x00001000;
        static constexpr unsigned ND12(unsigned value) { return (value << 12); }
        static constexpr unsigned ND13_POS = 13;
        static constexpr unsigned ND13_MASK = 0x00002000;
        static constexpr unsigned ND13(unsigned value) { return (value << 13); }
        static constexpr unsigned ND14_POS = 14;
        static constexpr unsigned ND14_MASK = 0x00004000;
        static constexpr unsigned ND14(unsigned value) { return (value << 14); }
        static constexpr unsigned ND15_POS = 15;
        static constexpr unsigned ND15_MASK = 0x00008000;
        static constexpr unsigned ND15(unsigned value) { return (value << 15); }
        static constexpr unsigned ND16_POS = 16;
        static constexpr unsigned ND16_MASK = 0x00010000;
        static constexpr unsigned ND16(unsigned value) { return (value << 16); }
        static constexpr unsigned ND17_POS = 17;
        static constexpr unsigned ND17_MASK = 0x00020000;
        static constexpr unsigned ND17(unsigned value) { return (value << 17); }
        static constexpr unsigned ND18_POS = 18;
        static constexpr unsigned ND18_MASK = 0x00040000;
        static constexpr unsigned ND18(unsigned value) { return (value << 18); }
        static constexpr unsigned ND19_POS = 19;
        static constexpr unsigned ND19_MASK = 0x00080000;
        static constexpr unsigned ND19(unsigned value) { return (value << 19); }
        static constexpr unsigned ND20_POS = 20;
        static constexpr unsigned ND20_MASK = 0x00100000;
        static constexpr unsigned ND20(unsigned value) { return (value << 20); }
        static constexpr unsigned ND21_POS = 21;
        static constexpr unsigned ND21_MASK = 0x00200000;
        static constexpr unsigned ND21(unsigned value) { return (value << 21); }
        static constexpr unsigned ND22_POS = 22;
        static constexpr unsigned ND22_MASK = 0x00400000;
        static constexpr unsigned ND22(unsigned value) { return (value << 22); }
        static constexpr unsigned ND23_POS = 23;
        static constexpr unsigned ND23_MASK = 0x00800000;
        static constexpr unsigned ND23(unsigned value) { return (value << 23); }
        static constexpr unsigned ND24_POS = 24;
        static constexpr unsigned ND24_MASK = 0x01000000;
        static constexpr unsigned ND24(unsigned value) { return (value << 24); }
        static constexpr unsigned ND25_POS = 25;
        static constexpr unsigned ND25_MASK = 0x02000000;
        static constexpr unsigned ND25(unsigned value) { return (value << 25); }
        static constexpr unsigned ND26_POS = 26;
        static constexpr unsigned ND26_MASK = 0x04000000;
        static constexpr unsigned ND26(unsigned value) { return (value << 26); }
        static constexpr unsigned ND27_POS = 27;
        static constexpr unsigned ND27_MASK = 0x08000000;
        static constexpr unsigned ND27(unsigned value) { return (value << 27); }
        static constexpr unsigned ND28_POS = 28;
        static constexpr unsigned ND28_MASK = 0x10000000;
        static constexpr unsigned ND28(unsigned value) { return (value << 28); }
        static constexpr unsigned ND29_POS = 29;
        static constexpr unsigned ND29_MASK = 0x20000000;
        static constexpr unsigned ND29(unsigned value) { return (value << 29); }
        static constexpr unsigned ND30_POS = 30;
        static constexpr unsigned ND30_MASK = 0x40000000;
        static constexpr unsigned ND30(unsigned value) { return (value << 30); }
        static constexpr unsigned ND31_POS = 31;
        static constexpr unsigned ND31_MASK = 0x80000000;
        static constexpr unsigned ND31(unsigned value) { return (value << 31); }
    } NDAT1;

    volatile union NDAT2_T // NDAT2: New Data 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) NDAT2_BIT_T
        {
            unsigned ND32 : 1; // bit 0 New Data 32
            unsigned ND33 : 1; // bit 1 New Data 33
            unsigned ND34 : 1; // bit 2 New Data 34
            unsigned ND35 : 1; // bit 3 New Data 35
            unsigned ND36 : 1; // bit 4 New Data 36
            unsigned ND37 : 1; // bit 5 New Data 37
            unsigned ND38 : 1; // bit 6 New Data 38
            unsigned ND39 : 1; // bit 7 New Data 39
            unsigned ND40 : 1; // bit 8 New Data 40
            unsigned ND41 : 1; // bit 9 New Data 41
            unsigned ND42 : 1; // bit 10 New Data 42
            unsigned ND43 : 1; // bit 11 New Data 43
            unsigned ND44 : 1; // bit 12 New Data 44
            unsigned ND45 : 1; // bit 13 New Data 45
            unsigned ND46 : 1; // bit 14 New Data 46
            unsigned ND47 : 1; // bit 15 New Data 47
            unsigned ND48 : 1; // bit 16 New Data 48
            unsigned ND49 : 1; // bit 17 New Data 49
            unsigned ND50 : 1; // bit 18 New Data 50
            unsigned ND51 : 1; // bit 19 New Data 51
            unsigned ND52 : 1; // bit 20 New Data 52
            unsigned ND53 : 1; // bit 21 New Data 53
            unsigned ND54 : 1; // bit 22 New Data 54
            unsigned ND55 : 1; // bit 23 New Data 55
            unsigned ND56 : 1; // bit 24 New Data 56
            unsigned ND57 : 1; // bit 25 New Data 57
            unsigned ND58 : 1; // bit 26 New Data 58
            unsigned ND59 : 1; // bit 27 New Data 59
            unsigned ND60 : 1; // bit 28 New Data 60
            unsigned ND61 : 1; // bit 29 New Data 61
            unsigned ND62 : 1; // bit 30 New Data 62
            unsigned ND63 : 1; // bit 31 New Data 63    
        } bit;
    
        static constexpr unsigned ND32_POS = 0;
        static constexpr unsigned ND32_MASK = 0x00000001;
        static constexpr unsigned ND32(unsigned value) { return (value << 0); }
        static constexpr unsigned ND33_POS = 1;
        static constexpr unsigned ND33_MASK = 0x00000002;
        static constexpr unsigned ND33(unsigned value) { return (value << 1); }
        static constexpr unsigned ND34_POS = 2;
        static constexpr unsigned ND34_MASK = 0x00000004;
        static constexpr unsigned ND34(unsigned value) { return (value << 2); }
        static constexpr unsigned ND35_POS = 3;
        static constexpr unsigned ND35_MASK = 0x00000008;
        static constexpr unsigned ND35(unsigned value) { return (value << 3); }
        static constexpr unsigned ND36_POS = 4;
        static constexpr unsigned ND36_MASK = 0x00000010;
        static constexpr unsigned ND36(unsigned value) { return (value << 4); }
        static constexpr unsigned ND37_POS = 5;
        static constexpr unsigned ND37_MASK = 0x00000020;
        static constexpr unsigned ND37(unsigned value) { return (value << 5); }
        static constexpr unsigned ND38_POS = 6;
        static constexpr unsigned ND38_MASK = 0x00000040;
        static constexpr unsigned ND38(unsigned value) { return (value << 6); }
        static constexpr unsigned ND39_POS = 7;
        static constexpr unsigned ND39_MASK = 0x00000080;
        static constexpr unsigned ND39(unsigned value) { return (value << 7); }
        static constexpr unsigned ND40_POS = 8;
        static constexpr unsigned ND40_MASK = 0x00000100;
        static constexpr unsigned ND40(unsigned value) { return (value << 8); }
        static constexpr unsigned ND41_POS = 9;
        static constexpr unsigned ND41_MASK = 0x00000200;
        static constexpr unsigned ND41(unsigned value) { return (value << 9); }
        static constexpr unsigned ND42_POS = 10;
        static constexpr unsigned ND42_MASK = 0x00000400;
        static constexpr unsigned ND42(unsigned value) { return (value << 10); }
        static constexpr unsigned ND43_POS = 11;
        static constexpr unsigned ND43_MASK = 0x00000800;
        static constexpr unsigned ND43(unsigned value) { return (value << 11); }
        static constexpr unsigned ND44_POS = 12;
        static constexpr unsigned ND44_MASK = 0x00001000;
        static constexpr unsigned ND44(unsigned value) { return (value << 12); }
        static constexpr unsigned ND45_POS = 13;
        static constexpr unsigned ND45_MASK = 0x00002000;
        static constexpr unsigned ND45(unsigned value) { return (value << 13); }
        static constexpr unsigned ND46_POS = 14;
        static constexpr unsigned ND46_MASK = 0x00004000;
        static constexpr unsigned ND46(unsigned value) { return (value << 14); }
        static constexpr unsigned ND47_POS = 15;
        static constexpr unsigned ND47_MASK = 0x00008000;
        static constexpr unsigned ND47(unsigned value) { return (value << 15); }
        static constexpr unsigned ND48_POS = 16;
        static constexpr unsigned ND48_MASK = 0x00010000;
        static constexpr unsigned ND48(unsigned value) { return (value << 16); }
        static constexpr unsigned ND49_POS = 17;
        static constexpr unsigned ND49_MASK = 0x00020000;
        static constexpr unsigned ND49(unsigned value) { return (value << 17); }
        static constexpr unsigned ND50_POS = 18;
        static constexpr unsigned ND50_MASK = 0x00040000;
        static constexpr unsigned ND50(unsigned value) { return (value << 18); }
        static constexpr unsigned ND51_POS = 19;
        static constexpr unsigned ND51_MASK = 0x00080000;
        static constexpr unsigned ND51(unsigned value) { return (value << 19); }
        static constexpr unsigned ND52_POS = 20;
        static constexpr unsigned ND52_MASK = 0x00100000;
        static constexpr unsigned ND52(unsigned value) { return (value << 20); }
        static constexpr unsigned ND53_POS = 21;
        static constexpr unsigned ND53_MASK = 0x00200000;
        static constexpr unsigned ND53(unsigned value) { return (value << 21); }
        static constexpr unsigned ND54_POS = 22;
        static constexpr unsigned ND54_MASK = 0x00400000;
        static constexpr unsigned ND54(unsigned value) { return (value << 22); }
        static constexpr unsigned ND55_POS = 23;
        static constexpr unsigned ND55_MASK = 0x00800000;
        static constexpr unsigned ND55(unsigned value) { return (value << 23); }
        static constexpr unsigned ND56_POS = 24;
        static constexpr unsigned ND56_MASK = 0x01000000;
        static constexpr unsigned ND56(unsigned value) { return (value << 24); }
        static constexpr unsigned ND57_POS = 25;
        static constexpr unsigned ND57_MASK = 0x02000000;
        static constexpr unsigned ND57(unsigned value) { return (value << 25); }
        static constexpr unsigned ND58_POS = 26;
        static constexpr unsigned ND58_MASK = 0x04000000;
        static constexpr unsigned ND58(unsigned value) { return (value << 26); }
        static constexpr unsigned ND59_POS = 27;
        static constexpr unsigned ND59_MASK = 0x08000000;
        static constexpr unsigned ND59(unsigned value) { return (value << 27); }
        static constexpr unsigned ND60_POS = 28;
        static constexpr unsigned ND60_MASK = 0x10000000;
        static constexpr unsigned ND60(unsigned value) { return (value << 28); }
        static constexpr unsigned ND61_POS = 29;
        static constexpr unsigned ND61_MASK = 0x20000000;
        static constexpr unsigned ND61(unsigned value) { return (value << 29); }
        static constexpr unsigned ND62_POS = 30;
        static constexpr unsigned ND62_MASK = 0x40000000;
        static constexpr unsigned ND62(unsigned value) { return (value << 30); }
        static constexpr unsigned ND63_POS = 31;
        static constexpr unsigned ND63_MASK = 0x80000000;
        static constexpr unsigned ND63(unsigned value) { return (value << 31); }
    } NDAT2;

    volatile union RXF0C_T // RXF0C: Rx FIFO 0 Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXF0C_BIT_T
        {
            unsigned F0SA : 16; // bits 0..15 Rx FIFO 0 Start Address
            unsigned F0S  : 7; // bits 16..22 Rx FIFO 0 Size
            unsigned      : 1; // bit 23 unused
            unsigned F0WM : 7; // bits 24..30 Rx FIFO 0 Watermark
            unsigned F0OM : 1; // bit 31 FIFO 0 Operation Mode    
        } bit;
    
        static constexpr unsigned F0SA_POS = 0;
        static constexpr unsigned F0SA_MASK = 0x0000ffff;
        static constexpr unsigned F0SA(unsigned value) { return (value << 0); }
        static constexpr unsigned F0S_POS = 16;
        static constexpr unsigned F0S_MASK = 0x007f0000;
        static constexpr unsigned F0S(unsigned value) { return (value << 16); }
        static constexpr unsigned F0WM_POS = 24;
        static constexpr unsigned F0WM_MASK = 0x7f000000;
        static constexpr unsigned F0WM(unsigned value) { return (value << 24); }
        static constexpr unsigned F0OM_POS = 31;
        static constexpr unsigned F0OM_MASK = 0x80000000;
        static constexpr unsigned F0OM(unsigned value) { return (value << 31); }
    } RXF0C;

    volatile union RXF0S_T // RXF0S: Rx FIFO 0 Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXF0S_BIT_T
        {
            unsigned F0FL : 7; // bits 0..6 Rx FIFO 0 Fill Level
            unsigned      : 1; // bit 7 unused
            unsigned F0GI : 6; // bits 8..13 Rx FIFO 0 Get Index
            unsigned      : 2; // bits 14..15 unused
            unsigned F0PI : 6; // bits 16..21 Rx FIFO 0 Put Index
            unsigned      : 2; // bits 22..23 unused
            unsigned F0F  : 1; // bit 24 Rx FIFO 0 Full
            unsigned RF0L : 1; // bit 25 Rx FIFO 0 Message Lost
            unsigned      : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned F0FL_POS = 0;
        static constexpr unsigned F0FL_MASK = 0x0000007f;
        static constexpr unsigned F0FL(unsigned value) { return (value << 0); }
        static constexpr unsigned F0GI_POS = 8;
        static constexpr unsigned F0GI_MASK = 0x00003f00;
        static constexpr unsigned F0GI(unsigned value) { return (value << 8); }
        static constexpr unsigned F0PI_POS = 16;
        static constexpr unsigned F0PI_MASK = 0x003f0000;
        static constexpr unsigned F0PI(unsigned value) { return (value << 16); }
        static constexpr unsigned F0F_POS = 24;
        static constexpr unsigned F0F_MASK = 0x01000000;
        static constexpr unsigned F0F(unsigned value) { return (value << 24); }
        static constexpr unsigned RF0L_POS = 25;
        static constexpr unsigned RF0L_MASK = 0x02000000;
        static constexpr unsigned RF0L(unsigned value) { return (value << 25); }
    } RXF0S;

    volatile union RXF0A_T // RXF0A: Rx FIFO 0 Acknowledge 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXF0A_BIT_T
        {
            unsigned F0AI : 6; // bits 0..5 Rx FIFO 0 Acknowledge Index
            unsigned      : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned F0AI_POS = 0;
        static constexpr unsigned F0AI_MASK = 0x0000003f;
        static constexpr unsigned F0AI(unsigned value) { return (value << 0); }
    } RXF0A;

    volatile union RXBC_T // RXBC: Rx Buffer Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXBC_BIT_T
        {
            unsigned RBSA : 16; // bits 0..15 Rx Buffer Start Address
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned RBSA_POS = 0;
        static constexpr unsigned RBSA_MASK = 0x0000ffff;
        static constexpr unsigned RBSA(unsigned value) { return (value << 0); }
    } RXBC;

    volatile union RXF1C_T // RXF1C: Rx FIFO 1 Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXF1C_BIT_T
        {
            unsigned F1SA : 16; // bits 0..15 Rx FIFO 1 Start Address
            unsigned F1S  : 7; // bits 16..22 Rx FIFO 1 Size
            unsigned      : 1; // bit 23 unused
            unsigned F1WM : 7; // bits 24..30 Rx FIFO 1 Watermark
            unsigned F1OM : 1; // bit 31 FIFO 1 Operation Mode    
        } bit;
    
        static constexpr unsigned F1SA_POS = 0;
        static constexpr unsigned F1SA_MASK = 0x0000ffff;
        static constexpr unsigned F1SA(unsigned value) { return (value << 0); }
        static constexpr unsigned F1S_POS = 16;
        static constexpr unsigned F1S_MASK = 0x007f0000;
        static constexpr unsigned F1S(unsigned value) { return (value << 16); }
        static constexpr unsigned F1WM_POS = 24;
        static constexpr unsigned F1WM_MASK = 0x7f000000;
        static constexpr unsigned F1WM(unsigned value) { return (value << 24); }
        static constexpr unsigned F1OM_POS = 31;
        static constexpr unsigned F1OM_MASK = 0x80000000;
        static constexpr unsigned F1OM(unsigned value) { return (value << 31); }
    } RXF1C;

    volatile union RXF1S_T // RXF1S: Rx FIFO 1 Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXF1S_BIT_T
        {
            unsigned F1FL : 7; // bits 0..6 Rx FIFO 1 Fill Level
            unsigned      : 1; // bit 7 unused
            unsigned F1GI : 6; // bits 8..13 Rx FIFO 1 Get Index
            unsigned      : 2; // bits 14..15 unused
            unsigned F1PI : 6; // bits 16..21 Rx FIFO 1 Put Index
            unsigned      : 2; // bits 22..23 unused
            unsigned F1F  : 1; // bit 24 Rx FIFO 1 Full
            unsigned RF1L : 1; // bit 25 Rx FIFO 1 Message Lost
            unsigned      : 4; // bits 26..29 unused
            unsigned DMS  : 2; // bits 30..31 Debug Message Status    
        } bit;
    
        static constexpr unsigned F1FL_POS = 0;
        static constexpr unsigned F1FL_MASK = 0x0000007f;
        static constexpr unsigned F1FL(unsigned value) { return (value << 0); }
        static constexpr unsigned F1GI_POS = 8;
        static constexpr unsigned F1GI_MASK = 0x00003f00;
        static constexpr unsigned F1GI(unsigned value) { return (value << 8); }
        static constexpr unsigned F1PI_POS = 16;
        static constexpr unsigned F1PI_MASK = 0x003f0000;
        static constexpr unsigned F1PI(unsigned value) { return (value << 16); }
        static constexpr unsigned F1F_POS = 24;
        static constexpr unsigned F1F_MASK = 0x01000000;
        static constexpr unsigned F1F(unsigned value) { return (value << 24); }
        static constexpr unsigned RF1L_POS = 25;
        static constexpr unsigned RF1L_MASK = 0x02000000;
        static constexpr unsigned RF1L(unsigned value) { return (value << 25); }
        static constexpr unsigned DMS_POS = 30;
        static constexpr unsigned DMS_MASK = 0xc0000000;
        static constexpr unsigned DMS(unsigned value) { return (value << 30); }
    } RXF1S;

    volatile union RXF1A_T // RXF1A: Rx FIFO 1 Acknowledge 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXF1A_BIT_T
        {
            unsigned F1AI : 6; // bits 0..5 Rx FIFO 1 Acknowledge Index
            unsigned      : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned F1AI_POS = 0;
        static constexpr unsigned F1AI_MASK = 0x0000003f;
        static constexpr unsigned F1AI(unsigned value) { return (value << 0); }
    } RXF1A;

    volatile union RXESC_T // RXESC: Rx Buffer / FIFO Element Size Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) RXESC_BIT_T
        {
            unsigned F0DS : 3; // bits 0..2 Rx FIFO 0 Data Field Size
            unsigned      : 1; // bit 3 unused
            unsigned F1DS : 3; // bits 4..6 Rx FIFO 1 Data Field Size
            unsigned      : 1; // bit 7 unused
            unsigned RBDS : 3; // bits 8..10 Rx Buffer Data Field Size
            unsigned      : 21; // bits 11..31 unused    
        } bit;
    
        static constexpr unsigned F0DS_POS = 0;
        static constexpr unsigned F0DS_MASK = 0x00000007;
        static constexpr unsigned F0DS(unsigned value) { return (value << 0); }
        static constexpr unsigned F1DS_POS = 4;
        static constexpr unsigned F1DS_MASK = 0x00000070;
        static constexpr unsigned F1DS(unsigned value) { return (value << 4); }
        static constexpr unsigned RBDS_POS = 8;
        static constexpr unsigned RBDS_MASK = 0x00000700;
        static constexpr unsigned RBDS(unsigned value) { return (value << 8); }
    } RXESC;

    volatile union TXBC_T // TXBC: Tx Buffer Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBC_BIT_T
        {
            unsigned TBSA : 16; // bits 0..15 Tx Buffers Start Address
            unsigned NDTB : 6; // bits 16..21 Number of Dedicated Transmit Buffers
            unsigned      : 2; // bits 22..23 unused
            unsigned TFQS : 6; // bits 24..29 Transmit FIFO/Queue Size
            unsigned TFQM : 1; // bit 30 Tx FIFO/Queue Mode
            unsigned      : 1; // bit 31 unused    
        } bit;
    
        static constexpr unsigned TBSA_POS = 0;
        static constexpr unsigned TBSA_MASK = 0x0000ffff;
        static constexpr unsigned TBSA(unsigned value) { return (value << 0); }
        static constexpr unsigned NDTB_POS = 16;
        static constexpr unsigned NDTB_MASK = 0x003f0000;
        static constexpr unsigned NDTB(unsigned value) { return (value << 16); }
        static constexpr unsigned TFQS_POS = 24;
        static constexpr unsigned TFQS_MASK = 0x3f000000;
        static constexpr unsigned TFQS(unsigned value) { return (value << 24); }
        static constexpr unsigned TFQM_POS = 30;
        static constexpr unsigned TFQM_MASK = 0x40000000;
        static constexpr unsigned TFQM(unsigned value) { return (value << 30); }
    } TXBC;

    volatile union TXFQS_T // TXFQS: Tx FIFO / Queue Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXFQS_BIT_T
        {
            unsigned TFFL  : 6; // bits 0..5 Tx FIFO Free Level
            unsigned       : 2; // bits 6..7 unused
            unsigned TFGI  : 5; // bits 8..12 Tx FIFO Get Index
            unsigned       : 3; // bits 13..15 unused
            unsigned TFQPI : 5; // bits 16..20 Tx FIFO/Queue Put Index
            unsigned TFQF  : 1; // bit 21 Tx FIFO/Queue Full
            unsigned       : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned TFFL_POS = 0;
        static constexpr unsigned TFFL_MASK = 0x0000003f;
        static constexpr unsigned TFFL(unsigned value) { return (value << 0); }
        static constexpr unsigned TFGI_POS = 8;
        static constexpr unsigned TFGI_MASK = 0x00001f00;
        static constexpr unsigned TFGI(unsigned value) { return (value << 8); }
        static constexpr unsigned TFQPI_POS = 16;
        static constexpr unsigned TFQPI_MASK = 0x001f0000;
        static constexpr unsigned TFQPI(unsigned value) { return (value << 16); }
        static constexpr unsigned TFQF_POS = 21;
        static constexpr unsigned TFQF_MASK = 0x00200000;
        static constexpr unsigned TFQF(unsigned value) { return (value << 21); }
    } TXFQS;

    volatile union TXESC_T // TXESC: Tx Buffer Element Size Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXESC_BIT_T
        {
            unsigned TBDS : 3; // bits 0..2 Tx Buffer Data Field Size
            unsigned      : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned TBDS_POS = 0;
        static constexpr unsigned TBDS_MASK = 0x00000007;
        static constexpr unsigned TBDS(unsigned value) { return (value << 0); }
    } TXESC;

    volatile union TXBRP_T // TXBRP: Tx Buffer Request Pending 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBRP_BIT_T
        {
            unsigned TRP0  : 1; // bit 0 Transmission Request Pending 0
            unsigned TRP1  : 1; // bit 1 Transmission Request Pending 1
            unsigned TRP2  : 1; // bit 2 Transmission Request Pending 2
            unsigned TRP3  : 1; // bit 3 Transmission Request Pending 3
            unsigned TRP4  : 1; // bit 4 Transmission Request Pending 4
            unsigned TRP5  : 1; // bit 5 Transmission Request Pending 5
            unsigned TRP6  : 1; // bit 6 Transmission Request Pending 6
            unsigned TRP7  : 1; // bit 7 Transmission Request Pending 7
            unsigned TRP8  : 1; // bit 8 Transmission Request Pending 8
            unsigned TRP9  : 1; // bit 9 Transmission Request Pending 9
            unsigned TRP10 : 1; // bit 10 Transmission Request Pending 10
            unsigned TRP11 : 1; // bit 11 Transmission Request Pending 11
            unsigned TRP12 : 1; // bit 12 Transmission Request Pending 12
            unsigned TRP13 : 1; // bit 13 Transmission Request Pending 13
            unsigned TRP14 : 1; // bit 14 Transmission Request Pending 14
            unsigned TRP15 : 1; // bit 15 Transmission Request Pending 15
            unsigned TRP16 : 1; // bit 16 Transmission Request Pending 16
            unsigned TRP17 : 1; // bit 17 Transmission Request Pending 17
            unsigned TRP18 : 1; // bit 18 Transmission Request Pending 18
            unsigned TRP19 : 1; // bit 19 Transmission Request Pending 19
            unsigned TRP20 : 1; // bit 20 Transmission Request Pending 20
            unsigned TRP21 : 1; // bit 21 Transmission Request Pending 21
            unsigned TRP22 : 1; // bit 22 Transmission Request Pending 22
            unsigned TRP23 : 1; // bit 23 Transmission Request Pending 23
            unsigned TRP24 : 1; // bit 24 Transmission Request Pending 24
            unsigned TRP25 : 1; // bit 25 Transmission Request Pending 25
            unsigned TRP26 : 1; // bit 26 Transmission Request Pending 26
            unsigned TRP27 : 1; // bit 27 Transmission Request Pending 27
            unsigned TRP28 : 1; // bit 28 Transmission Request Pending 28
            unsigned TRP29 : 1; // bit 29 Transmission Request Pending 29
            unsigned TRP30 : 1; // bit 30 Transmission Request Pending 30
            unsigned TRP31 : 1; // bit 31 Transmission Request Pending 31    
        } bit;
    
        static constexpr unsigned TRP0_POS = 0;
        static constexpr unsigned TRP0_MASK = 0x00000001;
        static constexpr unsigned TRP0(unsigned value) { return (value << 0); }
        static constexpr unsigned TRP1_POS = 1;
        static constexpr unsigned TRP1_MASK = 0x00000002;
        static constexpr unsigned TRP1(unsigned value) { return (value << 1); }
        static constexpr unsigned TRP2_POS = 2;
        static constexpr unsigned TRP2_MASK = 0x00000004;
        static constexpr unsigned TRP2(unsigned value) { return (value << 2); }
        static constexpr unsigned TRP3_POS = 3;
        static constexpr unsigned TRP3_MASK = 0x00000008;
        static constexpr unsigned TRP3(unsigned value) { return (value << 3); }
        static constexpr unsigned TRP4_POS = 4;
        static constexpr unsigned TRP4_MASK = 0x00000010;
        static constexpr unsigned TRP4(unsigned value) { return (value << 4); }
        static constexpr unsigned TRP5_POS = 5;
        static constexpr unsigned TRP5_MASK = 0x00000020;
        static constexpr unsigned TRP5(unsigned value) { return (value << 5); }
        static constexpr unsigned TRP6_POS = 6;
        static constexpr unsigned TRP6_MASK = 0x00000040;
        static constexpr unsigned TRP6(unsigned value) { return (value << 6); }
        static constexpr unsigned TRP7_POS = 7;
        static constexpr unsigned TRP7_MASK = 0x00000080;
        static constexpr unsigned TRP7(unsigned value) { return (value << 7); }
        static constexpr unsigned TRP8_POS = 8;
        static constexpr unsigned TRP8_MASK = 0x00000100;
        static constexpr unsigned TRP8(unsigned value) { return (value << 8); }
        static constexpr unsigned TRP9_POS = 9;
        static constexpr unsigned TRP9_MASK = 0x00000200;
        static constexpr unsigned TRP9(unsigned value) { return (value << 9); }
        static constexpr unsigned TRP10_POS = 10;
        static constexpr unsigned TRP10_MASK = 0x00000400;
        static constexpr unsigned TRP10(unsigned value) { return (value << 10); }
        static constexpr unsigned TRP11_POS = 11;
        static constexpr unsigned TRP11_MASK = 0x00000800;
        static constexpr unsigned TRP11(unsigned value) { return (value << 11); }
        static constexpr unsigned TRP12_POS = 12;
        static constexpr unsigned TRP12_MASK = 0x00001000;
        static constexpr unsigned TRP12(unsigned value) { return (value << 12); }
        static constexpr unsigned TRP13_POS = 13;
        static constexpr unsigned TRP13_MASK = 0x00002000;
        static constexpr unsigned TRP13(unsigned value) { return (value << 13); }
        static constexpr unsigned TRP14_POS = 14;
        static constexpr unsigned TRP14_MASK = 0x00004000;
        static constexpr unsigned TRP14(unsigned value) { return (value << 14); }
        static constexpr unsigned TRP15_POS = 15;
        static constexpr unsigned TRP15_MASK = 0x00008000;
        static constexpr unsigned TRP15(unsigned value) { return (value << 15); }
        static constexpr unsigned TRP16_POS = 16;
        static constexpr unsigned TRP16_MASK = 0x00010000;
        static constexpr unsigned TRP16(unsigned value) { return (value << 16); }
        static constexpr unsigned TRP17_POS = 17;
        static constexpr unsigned TRP17_MASK = 0x00020000;
        static constexpr unsigned TRP17(unsigned value) { return (value << 17); }
        static constexpr unsigned TRP18_POS = 18;
        static constexpr unsigned TRP18_MASK = 0x00040000;
        static constexpr unsigned TRP18(unsigned value) { return (value << 18); }
        static constexpr unsigned TRP19_POS = 19;
        static constexpr unsigned TRP19_MASK = 0x00080000;
        static constexpr unsigned TRP19(unsigned value) { return (value << 19); }
        static constexpr unsigned TRP20_POS = 20;
        static constexpr unsigned TRP20_MASK = 0x00100000;
        static constexpr unsigned TRP20(unsigned value) { return (value << 20); }
        static constexpr unsigned TRP21_POS = 21;
        static constexpr unsigned TRP21_MASK = 0x00200000;
        static constexpr unsigned TRP21(unsigned value) { return (value << 21); }
        static constexpr unsigned TRP22_POS = 22;
        static constexpr unsigned TRP22_MASK = 0x00400000;
        static constexpr unsigned TRP22(unsigned value) { return (value << 22); }
        static constexpr unsigned TRP23_POS = 23;
        static constexpr unsigned TRP23_MASK = 0x00800000;
        static constexpr unsigned TRP23(unsigned value) { return (value << 23); }
        static constexpr unsigned TRP24_POS = 24;
        static constexpr unsigned TRP24_MASK = 0x01000000;
        static constexpr unsigned TRP24(unsigned value) { return (value << 24); }
        static constexpr unsigned TRP25_POS = 25;
        static constexpr unsigned TRP25_MASK = 0x02000000;
        static constexpr unsigned TRP25(unsigned value) { return (value << 25); }
        static constexpr unsigned TRP26_POS = 26;
        static constexpr unsigned TRP26_MASK = 0x04000000;
        static constexpr unsigned TRP26(unsigned value) { return (value << 26); }
        static constexpr unsigned TRP27_POS = 27;
        static constexpr unsigned TRP27_MASK = 0x08000000;
        static constexpr unsigned TRP27(unsigned value) { return (value << 27); }
        static constexpr unsigned TRP28_POS = 28;
        static constexpr unsigned TRP28_MASK = 0x10000000;
        static constexpr unsigned TRP28(unsigned value) { return (value << 28); }
        static constexpr unsigned TRP29_POS = 29;
        static constexpr unsigned TRP29_MASK = 0x20000000;
        static constexpr unsigned TRP29(unsigned value) { return (value << 29); }
        static constexpr unsigned TRP30_POS = 30;
        static constexpr unsigned TRP30_MASK = 0x40000000;
        static constexpr unsigned TRP30(unsigned value) { return (value << 30); }
        static constexpr unsigned TRP31_POS = 31;
        static constexpr unsigned TRP31_MASK = 0x80000000;
        static constexpr unsigned TRP31(unsigned value) { return (value << 31); }
    } TXBRP;

    volatile union TXBAR_T // TXBAR: Tx Buffer Add Request 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBAR_BIT_T
        {
            unsigned AR0  : 1; // bit 0 Add Request 0
            unsigned AR1  : 1; // bit 1 Add Request 1
            unsigned AR2  : 1; // bit 2 Add Request 2
            unsigned AR3  : 1; // bit 3 Add Request 3
            unsigned AR4  : 1; // bit 4 Add Request 4
            unsigned AR5  : 1; // bit 5 Add Request 5
            unsigned AR6  : 1; // bit 6 Add Request 6
            unsigned AR7  : 1; // bit 7 Add Request 7
            unsigned AR8  : 1; // bit 8 Add Request 8
            unsigned AR9  : 1; // bit 9 Add Request 9
            unsigned AR10 : 1; // bit 10 Add Request 10
            unsigned AR11 : 1; // bit 11 Add Request 11
            unsigned AR12 : 1; // bit 12 Add Request 12
            unsigned AR13 : 1; // bit 13 Add Request 13
            unsigned AR14 : 1; // bit 14 Add Request 14
            unsigned AR15 : 1; // bit 15 Add Request 15
            unsigned AR16 : 1; // bit 16 Add Request 16
            unsigned AR17 : 1; // bit 17 Add Request 17
            unsigned AR18 : 1; // bit 18 Add Request 18
            unsigned AR19 : 1; // bit 19 Add Request 19
            unsigned AR20 : 1; // bit 20 Add Request 20
            unsigned AR21 : 1; // bit 21 Add Request 21
            unsigned AR22 : 1; // bit 22 Add Request 22
            unsigned AR23 : 1; // bit 23 Add Request 23
            unsigned AR24 : 1; // bit 24 Add Request 24
            unsigned AR25 : 1; // bit 25 Add Request 25
            unsigned AR26 : 1; // bit 26 Add Request 26
            unsigned AR27 : 1; // bit 27 Add Request 27
            unsigned AR28 : 1; // bit 28 Add Request 28
            unsigned AR29 : 1; // bit 29 Add Request 29
            unsigned AR30 : 1; // bit 30 Add Request 30
            unsigned AR31 : 1; // bit 31 Add Request 31    
        } bit;
    
        static constexpr unsigned AR0_POS = 0;
        static constexpr unsigned AR0_MASK = 0x00000001;
        static constexpr unsigned AR0(unsigned value) { return (value << 0); }
        static constexpr unsigned AR1_POS = 1;
        static constexpr unsigned AR1_MASK = 0x00000002;
        static constexpr unsigned AR1(unsigned value) { return (value << 1); }
        static constexpr unsigned AR2_POS = 2;
        static constexpr unsigned AR2_MASK = 0x00000004;
        static constexpr unsigned AR2(unsigned value) { return (value << 2); }
        static constexpr unsigned AR3_POS = 3;
        static constexpr unsigned AR3_MASK = 0x00000008;
        static constexpr unsigned AR3(unsigned value) { return (value << 3); }
        static constexpr unsigned AR4_POS = 4;
        static constexpr unsigned AR4_MASK = 0x00000010;
        static constexpr unsigned AR4(unsigned value) { return (value << 4); }
        static constexpr unsigned AR5_POS = 5;
        static constexpr unsigned AR5_MASK = 0x00000020;
        static constexpr unsigned AR5(unsigned value) { return (value << 5); }
        static constexpr unsigned AR6_POS = 6;
        static constexpr unsigned AR6_MASK = 0x00000040;
        static constexpr unsigned AR6(unsigned value) { return (value << 6); }
        static constexpr unsigned AR7_POS = 7;
        static constexpr unsigned AR7_MASK = 0x00000080;
        static constexpr unsigned AR7(unsigned value) { return (value << 7); }
        static constexpr unsigned AR8_POS = 8;
        static constexpr unsigned AR8_MASK = 0x00000100;
        static constexpr unsigned AR8(unsigned value) { return (value << 8); }
        static constexpr unsigned AR9_POS = 9;
        static constexpr unsigned AR9_MASK = 0x00000200;
        static constexpr unsigned AR9(unsigned value) { return (value << 9); }
        static constexpr unsigned AR10_POS = 10;
        static constexpr unsigned AR10_MASK = 0x00000400;
        static constexpr unsigned AR10(unsigned value) { return (value << 10); }
        static constexpr unsigned AR11_POS = 11;
        static constexpr unsigned AR11_MASK = 0x00000800;
        static constexpr unsigned AR11(unsigned value) { return (value << 11); }
        static constexpr unsigned AR12_POS = 12;
        static constexpr unsigned AR12_MASK = 0x00001000;
        static constexpr unsigned AR12(unsigned value) { return (value << 12); }
        static constexpr unsigned AR13_POS = 13;
        static constexpr unsigned AR13_MASK = 0x00002000;
        static constexpr unsigned AR13(unsigned value) { return (value << 13); }
        static constexpr unsigned AR14_POS = 14;
        static constexpr unsigned AR14_MASK = 0x00004000;
        static constexpr unsigned AR14(unsigned value) { return (value << 14); }
        static constexpr unsigned AR15_POS = 15;
        static constexpr unsigned AR15_MASK = 0x00008000;
        static constexpr unsigned AR15(unsigned value) { return (value << 15); }
        static constexpr unsigned AR16_POS = 16;
        static constexpr unsigned AR16_MASK = 0x00010000;
        static constexpr unsigned AR16(unsigned value) { return (value << 16); }
        static constexpr unsigned AR17_POS = 17;
        static constexpr unsigned AR17_MASK = 0x00020000;
        static constexpr unsigned AR17(unsigned value) { return (value << 17); }
        static constexpr unsigned AR18_POS = 18;
        static constexpr unsigned AR18_MASK = 0x00040000;
        static constexpr unsigned AR18(unsigned value) { return (value << 18); }
        static constexpr unsigned AR19_POS = 19;
        static constexpr unsigned AR19_MASK = 0x00080000;
        static constexpr unsigned AR19(unsigned value) { return (value << 19); }
        static constexpr unsigned AR20_POS = 20;
        static constexpr unsigned AR20_MASK = 0x00100000;
        static constexpr unsigned AR20(unsigned value) { return (value << 20); }
        static constexpr unsigned AR21_POS = 21;
        static constexpr unsigned AR21_MASK = 0x00200000;
        static constexpr unsigned AR21(unsigned value) { return (value << 21); }
        static constexpr unsigned AR22_POS = 22;
        static constexpr unsigned AR22_MASK = 0x00400000;
        static constexpr unsigned AR22(unsigned value) { return (value << 22); }
        static constexpr unsigned AR23_POS = 23;
        static constexpr unsigned AR23_MASK = 0x00800000;
        static constexpr unsigned AR23(unsigned value) { return (value << 23); }
        static constexpr unsigned AR24_POS = 24;
        static constexpr unsigned AR24_MASK = 0x01000000;
        static constexpr unsigned AR24(unsigned value) { return (value << 24); }
        static constexpr unsigned AR25_POS = 25;
        static constexpr unsigned AR25_MASK = 0x02000000;
        static constexpr unsigned AR25(unsigned value) { return (value << 25); }
        static constexpr unsigned AR26_POS = 26;
        static constexpr unsigned AR26_MASK = 0x04000000;
        static constexpr unsigned AR26(unsigned value) { return (value << 26); }
        static constexpr unsigned AR27_POS = 27;
        static constexpr unsigned AR27_MASK = 0x08000000;
        static constexpr unsigned AR27(unsigned value) { return (value << 27); }
        static constexpr unsigned AR28_POS = 28;
        static constexpr unsigned AR28_MASK = 0x10000000;
        static constexpr unsigned AR28(unsigned value) { return (value << 28); }
        static constexpr unsigned AR29_POS = 29;
        static constexpr unsigned AR29_MASK = 0x20000000;
        static constexpr unsigned AR29(unsigned value) { return (value << 29); }
        static constexpr unsigned AR30_POS = 30;
        static constexpr unsigned AR30_MASK = 0x40000000;
        static constexpr unsigned AR30(unsigned value) { return (value << 30); }
        static constexpr unsigned AR31_POS = 31;
        static constexpr unsigned AR31_MASK = 0x80000000;
        static constexpr unsigned AR31(unsigned value) { return (value << 31); }
    } TXBAR;

    volatile union TXBCR_T // TXBCR: Tx Buffer Cancellation Request 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBCR_BIT_T
        {
            unsigned CR0  : 1; // bit 0 Cancellation Request 0
            unsigned CR1  : 1; // bit 1 Cancellation Request 1
            unsigned CR2  : 1; // bit 2 Cancellation Request 2
            unsigned CR3  : 1; // bit 3 Cancellation Request 3
            unsigned CR4  : 1; // bit 4 Cancellation Request 4
            unsigned CR5  : 1; // bit 5 Cancellation Request 5
            unsigned CR6  : 1; // bit 6 Cancellation Request 6
            unsigned CR7  : 1; // bit 7 Cancellation Request 7
            unsigned CR8  : 1; // bit 8 Cancellation Request 8
            unsigned CR9  : 1; // bit 9 Cancellation Request 9
            unsigned CR10 : 1; // bit 10 Cancellation Request 10
            unsigned CR11 : 1; // bit 11 Cancellation Request 11
            unsigned CR12 : 1; // bit 12 Cancellation Request 12
            unsigned CR13 : 1; // bit 13 Cancellation Request 13
            unsigned CR14 : 1; // bit 14 Cancellation Request 14
            unsigned CR15 : 1; // bit 15 Cancellation Request 15
            unsigned CR16 : 1; // bit 16 Cancellation Request 16
            unsigned CR17 : 1; // bit 17 Cancellation Request 17
            unsigned CR18 : 1; // bit 18 Cancellation Request 18
            unsigned CR19 : 1; // bit 19 Cancellation Request 19
            unsigned CR20 : 1; // bit 20 Cancellation Request 20
            unsigned CR21 : 1; // bit 21 Cancellation Request 21
            unsigned CR22 : 1; // bit 22 Cancellation Request 22
            unsigned CR23 : 1; // bit 23 Cancellation Request 23
            unsigned CR24 : 1; // bit 24 Cancellation Request 24
            unsigned CR25 : 1; // bit 25 Cancellation Request 25
            unsigned CR26 : 1; // bit 26 Cancellation Request 26
            unsigned CR27 : 1; // bit 27 Cancellation Request 27
            unsigned CR28 : 1; // bit 28 Cancellation Request 28
            unsigned CR29 : 1; // bit 29 Cancellation Request 29
            unsigned CR30 : 1; // bit 30 Cancellation Request 30
            unsigned CR31 : 1; // bit 31 Cancellation Request 31    
        } bit;
    
        static constexpr unsigned CR0_POS = 0;
        static constexpr unsigned CR0_MASK = 0x00000001;
        static constexpr unsigned CR0(unsigned value) { return (value << 0); }
        static constexpr unsigned CR1_POS = 1;
        static constexpr unsigned CR1_MASK = 0x00000002;
        static constexpr unsigned CR1(unsigned value) { return (value << 1); }
        static constexpr unsigned CR2_POS = 2;
        static constexpr unsigned CR2_MASK = 0x00000004;
        static constexpr unsigned CR2(unsigned value) { return (value << 2); }
        static constexpr unsigned CR3_POS = 3;
        static constexpr unsigned CR3_MASK = 0x00000008;
        static constexpr unsigned CR3(unsigned value) { return (value << 3); }
        static constexpr unsigned CR4_POS = 4;
        static constexpr unsigned CR4_MASK = 0x00000010;
        static constexpr unsigned CR4(unsigned value) { return (value << 4); }
        static constexpr unsigned CR5_POS = 5;
        static constexpr unsigned CR5_MASK = 0x00000020;
        static constexpr unsigned CR5(unsigned value) { return (value << 5); }
        static constexpr unsigned CR6_POS = 6;
        static constexpr unsigned CR6_MASK = 0x00000040;
        static constexpr unsigned CR6(unsigned value) { return (value << 6); }
        static constexpr unsigned CR7_POS = 7;
        static constexpr unsigned CR7_MASK = 0x00000080;
        static constexpr unsigned CR7(unsigned value) { return (value << 7); }
        static constexpr unsigned CR8_POS = 8;
        static constexpr unsigned CR8_MASK = 0x00000100;
        static constexpr unsigned CR8(unsigned value) { return (value << 8); }
        static constexpr unsigned CR9_POS = 9;
        static constexpr unsigned CR9_MASK = 0x00000200;
        static constexpr unsigned CR9(unsigned value) { return (value << 9); }
        static constexpr unsigned CR10_POS = 10;
        static constexpr unsigned CR10_MASK = 0x00000400;
        static constexpr unsigned CR10(unsigned value) { return (value << 10); }
        static constexpr unsigned CR11_POS = 11;
        static constexpr unsigned CR11_MASK = 0x00000800;
        static constexpr unsigned CR11(unsigned value) { return (value << 11); }
        static constexpr unsigned CR12_POS = 12;
        static constexpr unsigned CR12_MASK = 0x00001000;
        static constexpr unsigned CR12(unsigned value) { return (value << 12); }
        static constexpr unsigned CR13_POS = 13;
        static constexpr unsigned CR13_MASK = 0x00002000;
        static constexpr unsigned CR13(unsigned value) { return (value << 13); }
        static constexpr unsigned CR14_POS = 14;
        static constexpr unsigned CR14_MASK = 0x00004000;
        static constexpr unsigned CR14(unsigned value) { return (value << 14); }
        static constexpr unsigned CR15_POS = 15;
        static constexpr unsigned CR15_MASK = 0x00008000;
        static constexpr unsigned CR15(unsigned value) { return (value << 15); }
        static constexpr unsigned CR16_POS = 16;
        static constexpr unsigned CR16_MASK = 0x00010000;
        static constexpr unsigned CR16(unsigned value) { return (value << 16); }
        static constexpr unsigned CR17_POS = 17;
        static constexpr unsigned CR17_MASK = 0x00020000;
        static constexpr unsigned CR17(unsigned value) { return (value << 17); }
        static constexpr unsigned CR18_POS = 18;
        static constexpr unsigned CR18_MASK = 0x00040000;
        static constexpr unsigned CR18(unsigned value) { return (value << 18); }
        static constexpr unsigned CR19_POS = 19;
        static constexpr unsigned CR19_MASK = 0x00080000;
        static constexpr unsigned CR19(unsigned value) { return (value << 19); }
        static constexpr unsigned CR20_POS = 20;
        static constexpr unsigned CR20_MASK = 0x00100000;
        static constexpr unsigned CR20(unsigned value) { return (value << 20); }
        static constexpr unsigned CR21_POS = 21;
        static constexpr unsigned CR21_MASK = 0x00200000;
        static constexpr unsigned CR21(unsigned value) { return (value << 21); }
        static constexpr unsigned CR22_POS = 22;
        static constexpr unsigned CR22_MASK = 0x00400000;
        static constexpr unsigned CR22(unsigned value) { return (value << 22); }
        static constexpr unsigned CR23_POS = 23;
        static constexpr unsigned CR23_MASK = 0x00800000;
        static constexpr unsigned CR23(unsigned value) { return (value << 23); }
        static constexpr unsigned CR24_POS = 24;
        static constexpr unsigned CR24_MASK = 0x01000000;
        static constexpr unsigned CR24(unsigned value) { return (value << 24); }
        static constexpr unsigned CR25_POS = 25;
        static constexpr unsigned CR25_MASK = 0x02000000;
        static constexpr unsigned CR25(unsigned value) { return (value << 25); }
        static constexpr unsigned CR26_POS = 26;
        static constexpr unsigned CR26_MASK = 0x04000000;
        static constexpr unsigned CR26(unsigned value) { return (value << 26); }
        static constexpr unsigned CR27_POS = 27;
        static constexpr unsigned CR27_MASK = 0x08000000;
        static constexpr unsigned CR27(unsigned value) { return (value << 27); }
        static constexpr unsigned CR28_POS = 28;
        static constexpr unsigned CR28_MASK = 0x10000000;
        static constexpr unsigned CR28(unsigned value) { return (value << 28); }
        static constexpr unsigned CR29_POS = 29;
        static constexpr unsigned CR29_MASK = 0x20000000;
        static constexpr unsigned CR29(unsigned value) { return (value << 29); }
        static constexpr unsigned CR30_POS = 30;
        static constexpr unsigned CR30_MASK = 0x40000000;
        static constexpr unsigned CR30(unsigned value) { return (value << 30); }
        static constexpr unsigned CR31_POS = 31;
        static constexpr unsigned CR31_MASK = 0x80000000;
        static constexpr unsigned CR31(unsigned value) { return (value << 31); }
    } TXBCR;

    volatile union TXBTO_T // TXBTO: Tx Buffer Transmission Occurred 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBTO_BIT_T
        {
            unsigned TO0  : 1; // bit 0 Transmission Occurred 0
            unsigned TO1  : 1; // bit 1 Transmission Occurred 1
            unsigned TO2  : 1; // bit 2 Transmission Occurred 2
            unsigned TO3  : 1; // bit 3 Transmission Occurred 3
            unsigned TO4  : 1; // bit 4 Transmission Occurred 4
            unsigned TO5  : 1; // bit 5 Transmission Occurred 5
            unsigned TO6  : 1; // bit 6 Transmission Occurred 6
            unsigned TO7  : 1; // bit 7 Transmission Occurred 7
            unsigned TO8  : 1; // bit 8 Transmission Occurred 8
            unsigned TO9  : 1; // bit 9 Transmission Occurred 9
            unsigned TO10 : 1; // bit 10 Transmission Occurred 10
            unsigned TO11 : 1; // bit 11 Transmission Occurred 11
            unsigned TO12 : 1; // bit 12 Transmission Occurred 12
            unsigned TO13 : 1; // bit 13 Transmission Occurred 13
            unsigned TO14 : 1; // bit 14 Transmission Occurred 14
            unsigned TO15 : 1; // bit 15 Transmission Occurred 15
            unsigned TO16 : 1; // bit 16 Transmission Occurred 16
            unsigned TO17 : 1; // bit 17 Transmission Occurred 17
            unsigned TO18 : 1; // bit 18 Transmission Occurred 18
            unsigned TO19 : 1; // bit 19 Transmission Occurred 19
            unsigned TO20 : 1; // bit 20 Transmission Occurred 20
            unsigned TO21 : 1; // bit 21 Transmission Occurred 21
            unsigned TO22 : 1; // bit 22 Transmission Occurred 22
            unsigned TO23 : 1; // bit 23 Transmission Occurred 23
            unsigned TO24 : 1; // bit 24 Transmission Occurred 24
            unsigned TO25 : 1; // bit 25 Transmission Occurred 25
            unsigned TO26 : 1; // bit 26 Transmission Occurred 26
            unsigned TO27 : 1; // bit 27 Transmission Occurred 27
            unsigned TO28 : 1; // bit 28 Transmission Occurred 28
            unsigned TO29 : 1; // bit 29 Transmission Occurred 29
            unsigned TO30 : 1; // bit 30 Transmission Occurred 30
            unsigned TO31 : 1; // bit 31 Transmission Occurred 31    
        } bit;
    
        static constexpr unsigned TO0_POS = 0;
        static constexpr unsigned TO0_MASK = 0x00000001;
        static constexpr unsigned TO0(unsigned value) { return (value << 0); }
        static constexpr unsigned TO1_POS = 1;
        static constexpr unsigned TO1_MASK = 0x00000002;
        static constexpr unsigned TO1(unsigned value) { return (value << 1); }
        static constexpr unsigned TO2_POS = 2;
        static constexpr unsigned TO2_MASK = 0x00000004;
        static constexpr unsigned TO2(unsigned value) { return (value << 2); }
        static constexpr unsigned TO3_POS = 3;
        static constexpr unsigned TO3_MASK = 0x00000008;
        static constexpr unsigned TO3(unsigned value) { return (value << 3); }
        static constexpr unsigned TO4_POS = 4;
        static constexpr unsigned TO4_MASK = 0x00000010;
        static constexpr unsigned TO4(unsigned value) { return (value << 4); }
        static constexpr unsigned TO5_POS = 5;
        static constexpr unsigned TO5_MASK = 0x00000020;
        static constexpr unsigned TO5(unsigned value) { return (value << 5); }
        static constexpr unsigned TO6_POS = 6;
        static constexpr unsigned TO6_MASK = 0x00000040;
        static constexpr unsigned TO6(unsigned value) { return (value << 6); }
        static constexpr unsigned TO7_POS = 7;
        static constexpr unsigned TO7_MASK = 0x00000080;
        static constexpr unsigned TO7(unsigned value) { return (value << 7); }
        static constexpr unsigned TO8_POS = 8;
        static constexpr unsigned TO8_MASK = 0x00000100;
        static constexpr unsigned TO8(unsigned value) { return (value << 8); }
        static constexpr unsigned TO9_POS = 9;
        static constexpr unsigned TO9_MASK = 0x00000200;
        static constexpr unsigned TO9(unsigned value) { return (value << 9); }
        static constexpr unsigned TO10_POS = 10;
        static constexpr unsigned TO10_MASK = 0x00000400;
        static constexpr unsigned TO10(unsigned value) { return (value << 10); }
        static constexpr unsigned TO11_POS = 11;
        static constexpr unsigned TO11_MASK = 0x00000800;
        static constexpr unsigned TO11(unsigned value) { return (value << 11); }
        static constexpr unsigned TO12_POS = 12;
        static constexpr unsigned TO12_MASK = 0x00001000;
        static constexpr unsigned TO12(unsigned value) { return (value << 12); }
        static constexpr unsigned TO13_POS = 13;
        static constexpr unsigned TO13_MASK = 0x00002000;
        static constexpr unsigned TO13(unsigned value) { return (value << 13); }
        static constexpr unsigned TO14_POS = 14;
        static constexpr unsigned TO14_MASK = 0x00004000;
        static constexpr unsigned TO14(unsigned value) { return (value << 14); }
        static constexpr unsigned TO15_POS = 15;
        static constexpr unsigned TO15_MASK = 0x00008000;
        static constexpr unsigned TO15(unsigned value) { return (value << 15); }
        static constexpr unsigned TO16_POS = 16;
        static constexpr unsigned TO16_MASK = 0x00010000;
        static constexpr unsigned TO16(unsigned value) { return (value << 16); }
        static constexpr unsigned TO17_POS = 17;
        static constexpr unsigned TO17_MASK = 0x00020000;
        static constexpr unsigned TO17(unsigned value) { return (value << 17); }
        static constexpr unsigned TO18_POS = 18;
        static constexpr unsigned TO18_MASK = 0x00040000;
        static constexpr unsigned TO18(unsigned value) { return (value << 18); }
        static constexpr unsigned TO19_POS = 19;
        static constexpr unsigned TO19_MASK = 0x00080000;
        static constexpr unsigned TO19(unsigned value) { return (value << 19); }
        static constexpr unsigned TO20_POS = 20;
        static constexpr unsigned TO20_MASK = 0x00100000;
        static constexpr unsigned TO20(unsigned value) { return (value << 20); }
        static constexpr unsigned TO21_POS = 21;
        static constexpr unsigned TO21_MASK = 0x00200000;
        static constexpr unsigned TO21(unsigned value) { return (value << 21); }
        static constexpr unsigned TO22_POS = 22;
        static constexpr unsigned TO22_MASK = 0x00400000;
        static constexpr unsigned TO22(unsigned value) { return (value << 22); }
        static constexpr unsigned TO23_POS = 23;
        static constexpr unsigned TO23_MASK = 0x00800000;
        static constexpr unsigned TO23(unsigned value) { return (value << 23); }
        static constexpr unsigned TO24_POS = 24;
        static constexpr unsigned TO24_MASK = 0x01000000;
        static constexpr unsigned TO24(unsigned value) { return (value << 24); }
        static constexpr unsigned TO25_POS = 25;
        static constexpr unsigned TO25_MASK = 0x02000000;
        static constexpr unsigned TO25(unsigned value) { return (value << 25); }
        static constexpr unsigned TO26_POS = 26;
        static constexpr unsigned TO26_MASK = 0x04000000;
        static constexpr unsigned TO26(unsigned value) { return (value << 26); }
        static constexpr unsigned TO27_POS = 27;
        static constexpr unsigned TO27_MASK = 0x08000000;
        static constexpr unsigned TO27(unsigned value) { return (value << 27); }
        static constexpr unsigned TO28_POS = 28;
        static constexpr unsigned TO28_MASK = 0x10000000;
        static constexpr unsigned TO28(unsigned value) { return (value << 28); }
        static constexpr unsigned TO29_POS = 29;
        static constexpr unsigned TO29_MASK = 0x20000000;
        static constexpr unsigned TO29(unsigned value) { return (value << 29); }
        static constexpr unsigned TO30_POS = 30;
        static constexpr unsigned TO30_MASK = 0x40000000;
        static constexpr unsigned TO30(unsigned value) { return (value << 30); }
        static constexpr unsigned TO31_POS = 31;
        static constexpr unsigned TO31_MASK = 0x80000000;
        static constexpr unsigned TO31(unsigned value) { return (value << 31); }
    } TXBTO;

    volatile union TXBCF_T // TXBCF: Tx Buffer Cancellation Finished 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBCF_BIT_T
        {
            unsigned CF0  : 1; // bit 0 Tx Buffer Cancellation Finished 0
            unsigned CF1  : 1; // bit 1 Tx Buffer Cancellation Finished 1
            unsigned CF2  : 1; // bit 2 Tx Buffer Cancellation Finished 2
            unsigned CF3  : 1; // bit 3 Tx Buffer Cancellation Finished 3
            unsigned CF4  : 1; // bit 4 Tx Buffer Cancellation Finished 4
            unsigned CF5  : 1; // bit 5 Tx Buffer Cancellation Finished 5
            unsigned CF6  : 1; // bit 6 Tx Buffer Cancellation Finished 6
            unsigned CF7  : 1; // bit 7 Tx Buffer Cancellation Finished 7
            unsigned CF8  : 1; // bit 8 Tx Buffer Cancellation Finished 8
            unsigned CF9  : 1; // bit 9 Tx Buffer Cancellation Finished 9
            unsigned CF10 : 1; // bit 10 Tx Buffer Cancellation Finished 10
            unsigned CF11 : 1; // bit 11 Tx Buffer Cancellation Finished 11
            unsigned CF12 : 1; // bit 12 Tx Buffer Cancellation Finished 12
            unsigned CF13 : 1; // bit 13 Tx Buffer Cancellation Finished 13
            unsigned CF14 : 1; // bit 14 Tx Buffer Cancellation Finished 14
            unsigned CF15 : 1; // bit 15 Tx Buffer Cancellation Finished 15
            unsigned CF16 : 1; // bit 16 Tx Buffer Cancellation Finished 16
            unsigned CF17 : 1; // bit 17 Tx Buffer Cancellation Finished 17
            unsigned CF18 : 1; // bit 18 Tx Buffer Cancellation Finished 18
            unsigned CF19 : 1; // bit 19 Tx Buffer Cancellation Finished 19
            unsigned CF20 : 1; // bit 20 Tx Buffer Cancellation Finished 20
            unsigned CF21 : 1; // bit 21 Tx Buffer Cancellation Finished 21
            unsigned CF22 : 1; // bit 22 Tx Buffer Cancellation Finished 22
            unsigned CF23 : 1; // bit 23 Tx Buffer Cancellation Finished 23
            unsigned CF24 : 1; // bit 24 Tx Buffer Cancellation Finished 24
            unsigned CF25 : 1; // bit 25 Tx Buffer Cancellation Finished 25
            unsigned CF26 : 1; // bit 26 Tx Buffer Cancellation Finished 26
            unsigned CF27 : 1; // bit 27 Tx Buffer Cancellation Finished 27
            unsigned CF28 : 1; // bit 28 Tx Buffer Cancellation Finished 28
            unsigned CF29 : 1; // bit 29 Tx Buffer Cancellation Finished 29
            unsigned CF30 : 1; // bit 30 Tx Buffer Cancellation Finished 30
            unsigned CF31 : 1; // bit 31 Tx Buffer Cancellation Finished 31    
        } bit;
    
        static constexpr unsigned CF0_POS = 0;
        static constexpr unsigned CF0_MASK = 0x00000001;
        static constexpr unsigned CF0(unsigned value) { return (value << 0); }
        static constexpr unsigned CF1_POS = 1;
        static constexpr unsigned CF1_MASK = 0x00000002;
        static constexpr unsigned CF1(unsigned value) { return (value << 1); }
        static constexpr unsigned CF2_POS = 2;
        static constexpr unsigned CF2_MASK = 0x00000004;
        static constexpr unsigned CF2(unsigned value) { return (value << 2); }
        static constexpr unsigned CF3_POS = 3;
        static constexpr unsigned CF3_MASK = 0x00000008;
        static constexpr unsigned CF3(unsigned value) { return (value << 3); }
        static constexpr unsigned CF4_POS = 4;
        static constexpr unsigned CF4_MASK = 0x00000010;
        static constexpr unsigned CF4(unsigned value) { return (value << 4); }
        static constexpr unsigned CF5_POS = 5;
        static constexpr unsigned CF5_MASK = 0x00000020;
        static constexpr unsigned CF5(unsigned value) { return (value << 5); }
        static constexpr unsigned CF6_POS = 6;
        static constexpr unsigned CF6_MASK = 0x00000040;
        static constexpr unsigned CF6(unsigned value) { return (value << 6); }
        static constexpr unsigned CF7_POS = 7;
        static constexpr unsigned CF7_MASK = 0x00000080;
        static constexpr unsigned CF7(unsigned value) { return (value << 7); }
        static constexpr unsigned CF8_POS = 8;
        static constexpr unsigned CF8_MASK = 0x00000100;
        static constexpr unsigned CF8(unsigned value) { return (value << 8); }
        static constexpr unsigned CF9_POS = 9;
        static constexpr unsigned CF9_MASK = 0x00000200;
        static constexpr unsigned CF9(unsigned value) { return (value << 9); }
        static constexpr unsigned CF10_POS = 10;
        static constexpr unsigned CF10_MASK = 0x00000400;
        static constexpr unsigned CF10(unsigned value) { return (value << 10); }
        static constexpr unsigned CF11_POS = 11;
        static constexpr unsigned CF11_MASK = 0x00000800;
        static constexpr unsigned CF11(unsigned value) { return (value << 11); }
        static constexpr unsigned CF12_POS = 12;
        static constexpr unsigned CF12_MASK = 0x00001000;
        static constexpr unsigned CF12(unsigned value) { return (value << 12); }
        static constexpr unsigned CF13_POS = 13;
        static constexpr unsigned CF13_MASK = 0x00002000;
        static constexpr unsigned CF13(unsigned value) { return (value << 13); }
        static constexpr unsigned CF14_POS = 14;
        static constexpr unsigned CF14_MASK = 0x00004000;
        static constexpr unsigned CF14(unsigned value) { return (value << 14); }
        static constexpr unsigned CF15_POS = 15;
        static constexpr unsigned CF15_MASK = 0x00008000;
        static constexpr unsigned CF15(unsigned value) { return (value << 15); }
        static constexpr unsigned CF16_POS = 16;
        static constexpr unsigned CF16_MASK = 0x00010000;
        static constexpr unsigned CF16(unsigned value) { return (value << 16); }
        static constexpr unsigned CF17_POS = 17;
        static constexpr unsigned CF17_MASK = 0x00020000;
        static constexpr unsigned CF17(unsigned value) { return (value << 17); }
        static constexpr unsigned CF18_POS = 18;
        static constexpr unsigned CF18_MASK = 0x00040000;
        static constexpr unsigned CF18(unsigned value) { return (value << 18); }
        static constexpr unsigned CF19_POS = 19;
        static constexpr unsigned CF19_MASK = 0x00080000;
        static constexpr unsigned CF19(unsigned value) { return (value << 19); }
        static constexpr unsigned CF20_POS = 20;
        static constexpr unsigned CF20_MASK = 0x00100000;
        static constexpr unsigned CF20(unsigned value) { return (value << 20); }
        static constexpr unsigned CF21_POS = 21;
        static constexpr unsigned CF21_MASK = 0x00200000;
        static constexpr unsigned CF21(unsigned value) { return (value << 21); }
        static constexpr unsigned CF22_POS = 22;
        static constexpr unsigned CF22_MASK = 0x00400000;
        static constexpr unsigned CF22(unsigned value) { return (value << 22); }
        static constexpr unsigned CF23_POS = 23;
        static constexpr unsigned CF23_MASK = 0x00800000;
        static constexpr unsigned CF23(unsigned value) { return (value << 23); }
        static constexpr unsigned CF24_POS = 24;
        static constexpr unsigned CF24_MASK = 0x01000000;
        static constexpr unsigned CF24(unsigned value) { return (value << 24); }
        static constexpr unsigned CF25_POS = 25;
        static constexpr unsigned CF25_MASK = 0x02000000;
        static constexpr unsigned CF25(unsigned value) { return (value << 25); }
        static constexpr unsigned CF26_POS = 26;
        static constexpr unsigned CF26_MASK = 0x04000000;
        static constexpr unsigned CF26(unsigned value) { return (value << 26); }
        static constexpr unsigned CF27_POS = 27;
        static constexpr unsigned CF27_MASK = 0x08000000;
        static constexpr unsigned CF27(unsigned value) { return (value << 27); }
        static constexpr unsigned CF28_POS = 28;
        static constexpr unsigned CF28_MASK = 0x10000000;
        static constexpr unsigned CF28(unsigned value) { return (value << 28); }
        static constexpr unsigned CF29_POS = 29;
        static constexpr unsigned CF29_MASK = 0x20000000;
        static constexpr unsigned CF29(unsigned value) { return (value << 29); }
        static constexpr unsigned CF30_POS = 30;
        static constexpr unsigned CF30_MASK = 0x40000000;
        static constexpr unsigned CF30(unsigned value) { return (value << 30); }
        static constexpr unsigned CF31_POS = 31;
        static constexpr unsigned CF31_MASK = 0x80000000;
        static constexpr unsigned CF31(unsigned value) { return (value << 31); }
    } TXBCF;

    volatile union TXBTIE_T // TXBTIE: Tx Buffer Transmission Interrupt Enable 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBTIE_BIT_T
        {
            unsigned TIE0  : 1; // bit 0 Transmission Interrupt Enable 0
            unsigned TIE1  : 1; // bit 1 Transmission Interrupt Enable 1
            unsigned TIE2  : 1; // bit 2 Transmission Interrupt Enable 2
            unsigned TIE3  : 1; // bit 3 Transmission Interrupt Enable 3
            unsigned TIE4  : 1; // bit 4 Transmission Interrupt Enable 4
            unsigned TIE5  : 1; // bit 5 Transmission Interrupt Enable 5
            unsigned TIE6  : 1; // bit 6 Transmission Interrupt Enable 6
            unsigned TIE7  : 1; // bit 7 Transmission Interrupt Enable 7
            unsigned TIE8  : 1; // bit 8 Transmission Interrupt Enable 8
            unsigned TIE9  : 1; // bit 9 Transmission Interrupt Enable 9
            unsigned TIE10 : 1; // bit 10 Transmission Interrupt Enable 10
            unsigned TIE11 : 1; // bit 11 Transmission Interrupt Enable 11
            unsigned TIE12 : 1; // bit 12 Transmission Interrupt Enable 12
            unsigned TIE13 : 1; // bit 13 Transmission Interrupt Enable 13
            unsigned TIE14 : 1; // bit 14 Transmission Interrupt Enable 14
            unsigned TIE15 : 1; // bit 15 Transmission Interrupt Enable 15
            unsigned TIE16 : 1; // bit 16 Transmission Interrupt Enable 16
            unsigned TIE17 : 1; // bit 17 Transmission Interrupt Enable 17
            unsigned TIE18 : 1; // bit 18 Transmission Interrupt Enable 18
            unsigned TIE19 : 1; // bit 19 Transmission Interrupt Enable 19
            unsigned TIE20 : 1; // bit 20 Transmission Interrupt Enable 20
            unsigned TIE21 : 1; // bit 21 Transmission Interrupt Enable 21
            unsigned TIE22 : 1; // bit 22 Transmission Interrupt Enable 22
            unsigned TIE23 : 1; // bit 23 Transmission Interrupt Enable 23
            unsigned TIE24 : 1; // bit 24 Transmission Interrupt Enable 24
            unsigned TIE25 : 1; // bit 25 Transmission Interrupt Enable 25
            unsigned TIE26 : 1; // bit 26 Transmission Interrupt Enable 26
            unsigned TIE27 : 1; // bit 27 Transmission Interrupt Enable 27
            unsigned TIE28 : 1; // bit 28 Transmission Interrupt Enable 28
            unsigned TIE29 : 1; // bit 29 Transmission Interrupt Enable 29
            unsigned TIE30 : 1; // bit 30 Transmission Interrupt Enable 30
            unsigned TIE31 : 1; // bit 31 Transmission Interrupt Enable 31    
        } bit;
    
        static constexpr unsigned TIE0_POS = 0;
        static constexpr unsigned TIE0_MASK = 0x00000001;
        static constexpr unsigned TIE0(unsigned value) { return (value << 0); }
        static constexpr unsigned TIE1_POS = 1;
        static constexpr unsigned TIE1_MASK = 0x00000002;
        static constexpr unsigned TIE1(unsigned value) { return (value << 1); }
        static constexpr unsigned TIE2_POS = 2;
        static constexpr unsigned TIE2_MASK = 0x00000004;
        static constexpr unsigned TIE2(unsigned value) { return (value << 2); }
        static constexpr unsigned TIE3_POS = 3;
        static constexpr unsigned TIE3_MASK = 0x00000008;
        static constexpr unsigned TIE3(unsigned value) { return (value << 3); }
        static constexpr unsigned TIE4_POS = 4;
        static constexpr unsigned TIE4_MASK = 0x00000010;
        static constexpr unsigned TIE4(unsigned value) { return (value << 4); }
        static constexpr unsigned TIE5_POS = 5;
        static constexpr unsigned TIE5_MASK = 0x00000020;
        static constexpr unsigned TIE5(unsigned value) { return (value << 5); }
        static constexpr unsigned TIE6_POS = 6;
        static constexpr unsigned TIE6_MASK = 0x00000040;
        static constexpr unsigned TIE6(unsigned value) { return (value << 6); }
        static constexpr unsigned TIE7_POS = 7;
        static constexpr unsigned TIE7_MASK = 0x00000080;
        static constexpr unsigned TIE7(unsigned value) { return (value << 7); }
        static constexpr unsigned TIE8_POS = 8;
        static constexpr unsigned TIE8_MASK = 0x00000100;
        static constexpr unsigned TIE8(unsigned value) { return (value << 8); }
        static constexpr unsigned TIE9_POS = 9;
        static constexpr unsigned TIE9_MASK = 0x00000200;
        static constexpr unsigned TIE9(unsigned value) { return (value << 9); }
        static constexpr unsigned TIE10_POS = 10;
        static constexpr unsigned TIE10_MASK = 0x00000400;
        static constexpr unsigned TIE10(unsigned value) { return (value << 10); }
        static constexpr unsigned TIE11_POS = 11;
        static constexpr unsigned TIE11_MASK = 0x00000800;
        static constexpr unsigned TIE11(unsigned value) { return (value << 11); }
        static constexpr unsigned TIE12_POS = 12;
        static constexpr unsigned TIE12_MASK = 0x00001000;
        static constexpr unsigned TIE12(unsigned value) { return (value << 12); }
        static constexpr unsigned TIE13_POS = 13;
        static constexpr unsigned TIE13_MASK = 0x00002000;
        static constexpr unsigned TIE13(unsigned value) { return (value << 13); }
        static constexpr unsigned TIE14_POS = 14;
        static constexpr unsigned TIE14_MASK = 0x00004000;
        static constexpr unsigned TIE14(unsigned value) { return (value << 14); }
        static constexpr unsigned TIE15_POS = 15;
        static constexpr unsigned TIE15_MASK = 0x00008000;
        static constexpr unsigned TIE15(unsigned value) { return (value << 15); }
        static constexpr unsigned TIE16_POS = 16;
        static constexpr unsigned TIE16_MASK = 0x00010000;
        static constexpr unsigned TIE16(unsigned value) { return (value << 16); }
        static constexpr unsigned TIE17_POS = 17;
        static constexpr unsigned TIE17_MASK = 0x00020000;
        static constexpr unsigned TIE17(unsigned value) { return (value << 17); }
        static constexpr unsigned TIE18_POS = 18;
        static constexpr unsigned TIE18_MASK = 0x00040000;
        static constexpr unsigned TIE18(unsigned value) { return (value << 18); }
        static constexpr unsigned TIE19_POS = 19;
        static constexpr unsigned TIE19_MASK = 0x00080000;
        static constexpr unsigned TIE19(unsigned value) { return (value << 19); }
        static constexpr unsigned TIE20_POS = 20;
        static constexpr unsigned TIE20_MASK = 0x00100000;
        static constexpr unsigned TIE20(unsigned value) { return (value << 20); }
        static constexpr unsigned TIE21_POS = 21;
        static constexpr unsigned TIE21_MASK = 0x00200000;
        static constexpr unsigned TIE21(unsigned value) { return (value << 21); }
        static constexpr unsigned TIE22_POS = 22;
        static constexpr unsigned TIE22_MASK = 0x00400000;
        static constexpr unsigned TIE22(unsigned value) { return (value << 22); }
        static constexpr unsigned TIE23_POS = 23;
        static constexpr unsigned TIE23_MASK = 0x00800000;
        static constexpr unsigned TIE23(unsigned value) { return (value << 23); }
        static constexpr unsigned TIE24_POS = 24;
        static constexpr unsigned TIE24_MASK = 0x01000000;
        static constexpr unsigned TIE24(unsigned value) { return (value << 24); }
        static constexpr unsigned TIE25_POS = 25;
        static constexpr unsigned TIE25_MASK = 0x02000000;
        static constexpr unsigned TIE25(unsigned value) { return (value << 25); }
        static constexpr unsigned TIE26_POS = 26;
        static constexpr unsigned TIE26_MASK = 0x04000000;
        static constexpr unsigned TIE26(unsigned value) { return (value << 26); }
        static constexpr unsigned TIE27_POS = 27;
        static constexpr unsigned TIE27_MASK = 0x08000000;
        static constexpr unsigned TIE27(unsigned value) { return (value << 27); }
        static constexpr unsigned TIE28_POS = 28;
        static constexpr unsigned TIE28_MASK = 0x10000000;
        static constexpr unsigned TIE28(unsigned value) { return (value << 28); }
        static constexpr unsigned TIE29_POS = 29;
        static constexpr unsigned TIE29_MASK = 0x20000000;
        static constexpr unsigned TIE29(unsigned value) { return (value << 29); }
        static constexpr unsigned TIE30_POS = 30;
        static constexpr unsigned TIE30_MASK = 0x40000000;
        static constexpr unsigned TIE30(unsigned value) { return (value << 30); }
        static constexpr unsigned TIE31_POS = 31;
        static constexpr unsigned TIE31_MASK = 0x80000000;
        static constexpr unsigned TIE31(unsigned value) { return (value << 31); }
    } TXBTIE;

    volatile union TXBCIE_T // TXBCIE: Tx Buffer Cancellation Finished Interrupt Enable 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXBCIE_BIT_T
        {
            unsigned CFIE0  : 1; // bit 0 Cancellation Finished Interrupt Enable 0
            unsigned CFIE1  : 1; // bit 1 Cancellation Finished Interrupt Enable 1
            unsigned CFIE2  : 1; // bit 2 Cancellation Finished Interrupt Enable 2
            unsigned CFIE3  : 1; // bit 3 Cancellation Finished Interrupt Enable 3
            unsigned CFIE4  : 1; // bit 4 Cancellation Finished Interrupt Enable 4
            unsigned CFIE5  : 1; // bit 5 Cancellation Finished Interrupt Enable 5
            unsigned CFIE6  : 1; // bit 6 Cancellation Finished Interrupt Enable 6
            unsigned CFIE7  : 1; // bit 7 Cancellation Finished Interrupt Enable 7
            unsigned CFIE8  : 1; // bit 8 Cancellation Finished Interrupt Enable 8
            unsigned CFIE9  : 1; // bit 9 Cancellation Finished Interrupt Enable 9
            unsigned CFIE10 : 1; // bit 10 Cancellation Finished Interrupt Enable 10
            unsigned CFIE11 : 1; // bit 11 Cancellation Finished Interrupt Enable 11
            unsigned CFIE12 : 1; // bit 12 Cancellation Finished Interrupt Enable 12
            unsigned CFIE13 : 1; // bit 13 Cancellation Finished Interrupt Enable 13
            unsigned CFIE14 : 1; // bit 14 Cancellation Finished Interrupt Enable 14
            unsigned CFIE15 : 1; // bit 15 Cancellation Finished Interrupt Enable 15
            unsigned CFIE16 : 1; // bit 16 Cancellation Finished Interrupt Enable 16
            unsigned CFIE17 : 1; // bit 17 Cancellation Finished Interrupt Enable 17
            unsigned CFIE18 : 1; // bit 18 Cancellation Finished Interrupt Enable 18
            unsigned CFIE19 : 1; // bit 19 Cancellation Finished Interrupt Enable 19
            unsigned CFIE20 : 1; // bit 20 Cancellation Finished Interrupt Enable 20
            unsigned CFIE21 : 1; // bit 21 Cancellation Finished Interrupt Enable 21
            unsigned CFIE22 : 1; // bit 22 Cancellation Finished Interrupt Enable 22
            unsigned CFIE23 : 1; // bit 23 Cancellation Finished Interrupt Enable 23
            unsigned CFIE24 : 1; // bit 24 Cancellation Finished Interrupt Enable 24
            unsigned CFIE25 : 1; // bit 25 Cancellation Finished Interrupt Enable 25
            unsigned CFIE26 : 1; // bit 26 Cancellation Finished Interrupt Enable 26
            unsigned CFIE27 : 1; // bit 27 Cancellation Finished Interrupt Enable 27
            unsigned CFIE28 : 1; // bit 28 Cancellation Finished Interrupt Enable 28
            unsigned CFIE29 : 1; // bit 29 Cancellation Finished Interrupt Enable 29
            unsigned CFIE30 : 1; // bit 30 Cancellation Finished Interrupt Enable 30
            unsigned CFIE31 : 1; // bit 31 Cancellation Finished Interrupt Enable 31    
        } bit;
    
        static constexpr unsigned CFIE0_POS = 0;
        static constexpr unsigned CFIE0_MASK = 0x00000001;
        static constexpr unsigned CFIE0(unsigned value) { return (value << 0); }
        static constexpr unsigned CFIE1_POS = 1;
        static constexpr unsigned CFIE1_MASK = 0x00000002;
        static constexpr unsigned CFIE1(unsigned value) { return (value << 1); }
        static constexpr unsigned CFIE2_POS = 2;
        static constexpr unsigned CFIE2_MASK = 0x00000004;
        static constexpr unsigned CFIE2(unsigned value) { return (value << 2); }
        static constexpr unsigned CFIE3_POS = 3;
        static constexpr unsigned CFIE3_MASK = 0x00000008;
        static constexpr unsigned CFIE3(unsigned value) { return (value << 3); }
        static constexpr unsigned CFIE4_POS = 4;
        static constexpr unsigned CFIE4_MASK = 0x00000010;
        static constexpr unsigned CFIE4(unsigned value) { return (value << 4); }
        static constexpr unsigned CFIE5_POS = 5;
        static constexpr unsigned CFIE5_MASK = 0x00000020;
        static constexpr unsigned CFIE5(unsigned value) { return (value << 5); }
        static constexpr unsigned CFIE6_POS = 6;
        static constexpr unsigned CFIE6_MASK = 0x00000040;
        static constexpr unsigned CFIE6(unsigned value) { return (value << 6); }
        static constexpr unsigned CFIE7_POS = 7;
        static constexpr unsigned CFIE7_MASK = 0x00000080;
        static constexpr unsigned CFIE7(unsigned value) { return (value << 7); }
        static constexpr unsigned CFIE8_POS = 8;
        static constexpr unsigned CFIE8_MASK = 0x00000100;
        static constexpr unsigned CFIE8(unsigned value) { return (value << 8); }
        static constexpr unsigned CFIE9_POS = 9;
        static constexpr unsigned CFIE9_MASK = 0x00000200;
        static constexpr unsigned CFIE9(unsigned value) { return (value << 9); }
        static constexpr unsigned CFIE10_POS = 10;
        static constexpr unsigned CFIE10_MASK = 0x00000400;
        static constexpr unsigned CFIE10(unsigned value) { return (value << 10); }
        static constexpr unsigned CFIE11_POS = 11;
        static constexpr unsigned CFIE11_MASK = 0x00000800;
        static constexpr unsigned CFIE11(unsigned value) { return (value << 11); }
        static constexpr unsigned CFIE12_POS = 12;
        static constexpr unsigned CFIE12_MASK = 0x00001000;
        static constexpr unsigned CFIE12(unsigned value) { return (value << 12); }
        static constexpr unsigned CFIE13_POS = 13;
        static constexpr unsigned CFIE13_MASK = 0x00002000;
        static constexpr unsigned CFIE13(unsigned value) { return (value << 13); }
        static constexpr unsigned CFIE14_POS = 14;
        static constexpr unsigned CFIE14_MASK = 0x00004000;
        static constexpr unsigned CFIE14(unsigned value) { return (value << 14); }
        static constexpr unsigned CFIE15_POS = 15;
        static constexpr unsigned CFIE15_MASK = 0x00008000;
        static constexpr unsigned CFIE15(unsigned value) { return (value << 15); }
        static constexpr unsigned CFIE16_POS = 16;
        static constexpr unsigned CFIE16_MASK = 0x00010000;
        static constexpr unsigned CFIE16(unsigned value) { return (value << 16); }
        static constexpr unsigned CFIE17_POS = 17;
        static constexpr unsigned CFIE17_MASK = 0x00020000;
        static constexpr unsigned CFIE17(unsigned value) { return (value << 17); }
        static constexpr unsigned CFIE18_POS = 18;
        static constexpr unsigned CFIE18_MASK = 0x00040000;
        static constexpr unsigned CFIE18(unsigned value) { return (value << 18); }
        static constexpr unsigned CFIE19_POS = 19;
        static constexpr unsigned CFIE19_MASK = 0x00080000;
        static constexpr unsigned CFIE19(unsigned value) { return (value << 19); }
        static constexpr unsigned CFIE20_POS = 20;
        static constexpr unsigned CFIE20_MASK = 0x00100000;
        static constexpr unsigned CFIE20(unsigned value) { return (value << 20); }
        static constexpr unsigned CFIE21_POS = 21;
        static constexpr unsigned CFIE21_MASK = 0x00200000;
        static constexpr unsigned CFIE21(unsigned value) { return (value << 21); }
        static constexpr unsigned CFIE22_POS = 22;
        static constexpr unsigned CFIE22_MASK = 0x00400000;
        static constexpr unsigned CFIE22(unsigned value) { return (value << 22); }
        static constexpr unsigned CFIE23_POS = 23;
        static constexpr unsigned CFIE23_MASK = 0x00800000;
        static constexpr unsigned CFIE23(unsigned value) { return (value << 23); }
        static constexpr unsigned CFIE24_POS = 24;
        static constexpr unsigned CFIE24_MASK = 0x01000000;
        static constexpr unsigned CFIE24(unsigned value) { return (value << 24); }
        static constexpr unsigned CFIE25_POS = 25;
        static constexpr unsigned CFIE25_MASK = 0x02000000;
        static constexpr unsigned CFIE25(unsigned value) { return (value << 25); }
        static constexpr unsigned CFIE26_POS = 26;
        static constexpr unsigned CFIE26_MASK = 0x04000000;
        static constexpr unsigned CFIE26(unsigned value) { return (value << 26); }
        static constexpr unsigned CFIE27_POS = 27;
        static constexpr unsigned CFIE27_MASK = 0x08000000;
        static constexpr unsigned CFIE27(unsigned value) { return (value << 27); }
        static constexpr unsigned CFIE28_POS = 28;
        static constexpr unsigned CFIE28_MASK = 0x10000000;
        static constexpr unsigned CFIE28(unsigned value) { return (value << 28); }
        static constexpr unsigned CFIE29_POS = 29;
        static constexpr unsigned CFIE29_MASK = 0x20000000;
        static constexpr unsigned CFIE29(unsigned value) { return (value << 29); }
        static constexpr unsigned CFIE30_POS = 30;
        static constexpr unsigned CFIE30_MASK = 0x40000000;
        static constexpr unsigned CFIE30(unsigned value) { return (value << 30); }
        static constexpr unsigned CFIE31_POS = 31;
        static constexpr unsigned CFIE31_MASK = 0x80000000;
        static constexpr unsigned CFIE31(unsigned value) { return (value << 31); }
    } TXBCIE;

    uint8_t Reserved5[8];

    volatile union TXEFC_T // TXEFC: Tx Event FIFO Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXEFC_BIT_T
        {
            unsigned EFSA : 16; // bits 0..15 Event FIFO Start Address
            unsigned EFS  : 6; // bits 16..21 Event FIFO Size
            unsigned      : 2; // bits 22..23 unused
            unsigned EFWM : 6; // bits 24..29 Event FIFO Watermark
            unsigned      : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned EFSA_POS = 0;
        static constexpr unsigned EFSA_MASK = 0x0000ffff;
        static constexpr unsigned EFSA(unsigned value) { return (value << 0); }
        static constexpr unsigned EFS_POS = 16;
        static constexpr unsigned EFS_MASK = 0x003f0000;
        static constexpr unsigned EFS(unsigned value) { return (value << 16); }
        static constexpr unsigned EFWM_POS = 24;
        static constexpr unsigned EFWM_MASK = 0x3f000000;
        static constexpr unsigned EFWM(unsigned value) { return (value << 24); }
    } TXEFC;

    volatile union TXEFS_T // TXEFS: Tx Event FIFO Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXEFS_BIT_T
        {
            unsigned EFFL : 6; // bits 0..5 Event FIFO Fill Level
            unsigned      : 2; // bits 6..7 unused
            unsigned EFGI : 5; // bits 8..12 Event FIFO Get Index
            unsigned      : 3; // bits 13..15 unused
            unsigned EFPI : 5; // bits 16..20 Event FIFO Put Index
            unsigned      : 3; // bits 21..23 unused
            unsigned EFF  : 1; // bit 24 Event FIFO Full
            unsigned TEFL : 1; // bit 25 Tx Event FIFO Element Lost
            unsigned      : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned EFFL_POS = 0;
        static constexpr unsigned EFFL_MASK = 0x0000003f;
        static constexpr unsigned EFFL(unsigned value) { return (value << 0); }
        static constexpr unsigned EFGI_POS = 8;
        static constexpr unsigned EFGI_MASK = 0x00001f00;
        static constexpr unsigned EFGI(unsigned value) { return (value << 8); }
        static constexpr unsigned EFPI_POS = 16;
        static constexpr unsigned EFPI_MASK = 0x001f0000;
        static constexpr unsigned EFPI(unsigned value) { return (value << 16); }
        static constexpr unsigned EFF_POS = 24;
        static constexpr unsigned EFF_MASK = 0x01000000;
        static constexpr unsigned EFF(unsigned value) { return (value << 24); }
        static constexpr unsigned TEFL_POS = 25;
        static constexpr unsigned TEFL_MASK = 0x02000000;
        static constexpr unsigned TEFL(unsigned value) { return (value << 25); }
    } TXEFS;

    volatile union TXEFA_T // TXEFA: Tx Event FIFO Acknowledge 
    {
        uint32_t reg;
        struct __attribute__((packed)) TXEFA_BIT_T
        {
            unsigned EFAI : 5; // bits 0..4 Event FIFO Acknowledge Index
            unsigned      : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned EFAI_POS = 0;
        static constexpr unsigned EFAI_MASK = 0x0000001f;
        static constexpr unsigned EFAI(unsigned value) { return (value << 0); }
    } TXEFA;

}; // struct CAN0_T

static_assert(sizeof(CAN_T) == CAN_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp