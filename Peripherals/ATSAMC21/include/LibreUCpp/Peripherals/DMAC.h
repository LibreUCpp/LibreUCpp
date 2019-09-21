#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DMAC_T
{
    static constexpr size_t INSTANCE_SIZE = 80;
    static constexpr intptr_t BASE_ADDRESS = 0x41006000;

    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CRCCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_CRCDATAIN = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CRCCHKSUM = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CRCSTATUS = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x0d;
    static constexpr intptr_t ADDR_OFFSET_QOSCTRL = 0x0e;
    static constexpr intptr_t ADDR_OFFSET_SWTRIGCTRL = 0x10;
    static constexpr intptr_t ADDR_OFFSET_PRICTRL = 0x14;
    static constexpr intptr_t ADDR_OFFSET_INTPEND = 0x20;
    static constexpr intptr_t ADDR_OFFSET_INTSTATUS = 0x24;
    static constexpr intptr_t ADDR_OFFSET_BUSYCH = 0x28;
    static constexpr intptr_t ADDR_OFFSET_PENDCH = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_ACTIVE = 0x30;
    static constexpr intptr_t ADDR_OFFSET_BASEADDR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_WRBADDR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_CHID = 0x3f;
    static constexpr intptr_t ADDR_OFFSET_CHCTRLA = 0x40;
    static constexpr intptr_t ADDR_OFFSET_CHCTRLB = 0x44;
    static constexpr intptr_t ADDR_OFFSET_CHINTENCLR = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_CHINTENSET = 0x4d;
    static constexpr intptr_t ADDR_OFFSET_CHINTFLAG = 0x4e;
    static constexpr intptr_t ADDR_OFFSET_CHSTATUS = 0x4f;

    volatile union CTRL_T // CTRL: Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned SWRST     : 1; // bit 0 Software Reset
            unsigned DMAENABLE : 1; // bit 1 DMA Enable
            unsigned CRCENABLE : 1; // bit 2 CRC Enable
            unsigned           : 5; // bits 3..7 unused
            unsigned LVLEN0    : 1; // bit 8 Priority Level 0 Enable
            unsigned LVLEN1    : 1; // bit 9 Priority Level 1 Enable
            unsigned LVLEN2    : 1; // bit 10 Priority Level 2 Enable
            unsigned LVLEN3    : 1; // bit 11 Priority Level 3 Enable
            unsigned           : 4; // bits 12..15 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned DMAENABLE_POS = 1;
        static constexpr unsigned DMAENABLE_MASK = 0x00000002;
        static constexpr unsigned DMAENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned CRCENABLE_POS = 2;
        static constexpr unsigned CRCENABLE_MASK = 0x00000004;
        static constexpr unsigned CRCENABLE(unsigned value) { return (value << 2); }
        static constexpr unsigned LVLEN0_POS = 8;
        static constexpr unsigned LVLEN0_MASK = 0x00000100;
        static constexpr unsigned LVLEN0(unsigned value) { return (value << 8); }
        static constexpr unsigned LVLEN1_POS = 9;
        static constexpr unsigned LVLEN1_MASK = 0x00000200;
        static constexpr unsigned LVLEN1(unsigned value) { return (value << 9); }
        static constexpr unsigned LVLEN2_POS = 10;
        static constexpr unsigned LVLEN2_MASK = 0x00000400;
        static constexpr unsigned LVLEN2(unsigned value) { return (value << 10); }
        static constexpr unsigned LVLEN3_POS = 11;
        static constexpr unsigned LVLEN3_MASK = 0x00000800;
        static constexpr unsigned LVLEN3(unsigned value) { return (value << 11); }
    } CTRL;

    volatile union CRCCTRL_T // CRCCTRL: CRC Control 
    {
        uint16_t reg;
        struct __attribute__((packed)) CRCCTRL_BIT_T
        {
            unsigned CRCBEATSIZE : 2; // bits 0..1 CRC Beat Size
            unsigned CRCPOLY     : 2; // bits 2..3 CRC Polynomial Type
            unsigned             : 4; // bits 4..7 unused
            unsigned CRCSRC      : 6; // bits 8..13 CRC Input Source
            unsigned             : 2; // bits 14..15 unused    
        } bit;
    
        static constexpr unsigned CRCBEATSIZE_POS = 0;
        static constexpr unsigned CRCBEATSIZE_MASK = 0x00000003;
        static constexpr unsigned CRCBEATSIZE(unsigned value) { return (value << 0); }
        static constexpr unsigned CRCPOLY_POS = 2;
        static constexpr unsigned CRCPOLY_MASK = 0x0000000c;
        static constexpr unsigned CRCPOLY(unsigned value) { return (value << 2); }
        static constexpr unsigned CRCSRC_POS = 8;
        static constexpr unsigned CRCSRC_MASK = 0x00003f00;
        static constexpr unsigned CRCSRC(unsigned value) { return (value << 8); }
    } CRCCTRL;

    volatile union CRCDATAIN_T // CRCDATAIN: CRC Data Input 
    {
        uint32_t reg;
        struct __attribute__((packed)) CRCDATAIN_BIT_T
        {
            unsigned CRCDATAIN : 32; // bits 0..31 CRC Data Input    
        } bit;
    
        static constexpr unsigned CRCDATAIN_POS = 0;
        static constexpr unsigned CRCDATAIN_MASK = 0xffffffff;
        static constexpr unsigned CRCDATAIN(unsigned value) { return (value << 0); }
    } CRCDATAIN;

    volatile union CRCCHKSUM_T // CRCCHKSUM: CRC Checksum 
    {
        uint32_t reg;
        struct __attribute__((packed)) CRCCHKSUM_BIT_T
        {
            unsigned CRCCHKSUM : 32; // bits 0..31 CRC Checksum    
        } bit;
    
        static constexpr unsigned CRCCHKSUM_POS = 0;
        static constexpr unsigned CRCCHKSUM_MASK = 0xffffffff;
        static constexpr unsigned CRCCHKSUM(unsigned value) { return (value << 0); }
    } CRCCHKSUM;

    volatile union CRCSTATUS_T // CRCSTATUS: CRC Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) CRCSTATUS_BIT_T
        {
            unsigned CRCBUSY : 1; // bit 0 CRC Module Busy
            unsigned CRCZERO : 1; // bit 1 CRC Zero
            unsigned         : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned CRCBUSY_POS = 0;
        static constexpr unsigned CRCBUSY_MASK = 0x00000001;
        static constexpr unsigned CRCBUSY(unsigned value) { return (value << 0); }
        static constexpr unsigned CRCZERO_POS = 1;
        static constexpr unsigned CRCZERO_MASK = 0x00000002;
        static constexpr unsigned CRCZERO(unsigned value) { return (value << 1); }
    } CRCSTATUS;

    volatile union DBGCTRL_T // DBGCTRL: Debug Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) DBGCTRL_BIT_T
        {
            unsigned DBGRUN : 1; // bit 0 Debug Run
            unsigned        : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned DBGRUN_POS = 0;
        static constexpr unsigned DBGRUN_MASK = 0x00000001;
        static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
    } DBGCTRL;

    volatile union QOSCTRL_T // QOSCTRL: QOS Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) QOSCTRL_BIT_T
        {
            unsigned WRBQOS : 2; // bits 0..1 Write-Back Quality of Service
            unsigned FQOS   : 2; // bits 2..3 Fetch Quality of Service
            unsigned DQOS   : 2; // bits 4..5 Data Transfer Quality of Service
            unsigned        : 2; // bits 6..7 unused    
        } bit;
    
        static constexpr unsigned WRBQOS_POS = 0;
        static constexpr unsigned WRBQOS_MASK = 0x00000003;
        static constexpr unsigned WRBQOS(unsigned value) { return (value << 0); }
        static constexpr unsigned FQOS_POS = 2;
        static constexpr unsigned FQOS_MASK = 0x0000000c;
        static constexpr unsigned FQOS(unsigned value) { return (value << 2); }
        static constexpr unsigned DQOS_POS = 4;
        static constexpr unsigned DQOS_MASK = 0x00000030;
        static constexpr unsigned DQOS(unsigned value) { return (value << 4); }
    } QOSCTRL;

    uint8_t Reserved1[1];

    volatile union SWTRIGCTRL_T // SWTRIGCTRL: Software Trigger Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) SWTRIGCTRL_BIT_T
        {
            unsigned SWTRIG0  : 1; // bit 0 Channel 0 Software Trigger
            unsigned SWTRIG1  : 1; // bit 1 Channel 1 Software Trigger
            unsigned SWTRIG2  : 1; // bit 2 Channel 2 Software Trigger
            unsigned SWTRIG3  : 1; // bit 3 Channel 3 Software Trigger
            unsigned SWTRIG4  : 1; // bit 4 Channel 4 Software Trigger
            unsigned SWTRIG5  : 1; // bit 5 Channel 5 Software Trigger
            unsigned SWTRIG6  : 1; // bit 6 Channel 6 Software Trigger
            unsigned SWTRIG7  : 1; // bit 7 Channel 7 Software Trigger
            unsigned SWTRIG8  : 1; // bit 8 Channel 8 Software Trigger
            unsigned SWTRIG9  : 1; // bit 9 Channel 9 Software Trigger
            unsigned SWTRIG10 : 1; // bit 10 Channel 10 Software Trigger
            unsigned SWTRIG11 : 1; // bit 11 Channel 11 Software Trigger
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned SWTRIG0_POS = 0;
        static constexpr unsigned SWTRIG0_MASK = 0x00000001;
        static constexpr unsigned SWTRIG0(unsigned value) { return (value << 0); }
        static constexpr unsigned SWTRIG1_POS = 1;
        static constexpr unsigned SWTRIG1_MASK = 0x00000002;
        static constexpr unsigned SWTRIG1(unsigned value) { return (value << 1); }
        static constexpr unsigned SWTRIG2_POS = 2;
        static constexpr unsigned SWTRIG2_MASK = 0x00000004;
        static constexpr unsigned SWTRIG2(unsigned value) { return (value << 2); }
        static constexpr unsigned SWTRIG3_POS = 3;
        static constexpr unsigned SWTRIG3_MASK = 0x00000008;
        static constexpr unsigned SWTRIG3(unsigned value) { return (value << 3); }
        static constexpr unsigned SWTRIG4_POS = 4;
        static constexpr unsigned SWTRIG4_MASK = 0x00000010;
        static constexpr unsigned SWTRIG4(unsigned value) { return (value << 4); }
        static constexpr unsigned SWTRIG5_POS = 5;
        static constexpr unsigned SWTRIG5_MASK = 0x00000020;
        static constexpr unsigned SWTRIG5(unsigned value) { return (value << 5); }
        static constexpr unsigned SWTRIG6_POS = 6;
        static constexpr unsigned SWTRIG6_MASK = 0x00000040;
        static constexpr unsigned SWTRIG6(unsigned value) { return (value << 6); }
        static constexpr unsigned SWTRIG7_POS = 7;
        static constexpr unsigned SWTRIG7_MASK = 0x00000080;
        static constexpr unsigned SWTRIG7(unsigned value) { return (value << 7); }
        static constexpr unsigned SWTRIG8_POS = 8;
        static constexpr unsigned SWTRIG8_MASK = 0x00000100;
        static constexpr unsigned SWTRIG8(unsigned value) { return (value << 8); }
        static constexpr unsigned SWTRIG9_POS = 9;
        static constexpr unsigned SWTRIG9_MASK = 0x00000200;
        static constexpr unsigned SWTRIG9(unsigned value) { return (value << 9); }
        static constexpr unsigned SWTRIG10_POS = 10;
        static constexpr unsigned SWTRIG10_MASK = 0x00000400;
        static constexpr unsigned SWTRIG10(unsigned value) { return (value << 10); }
        static constexpr unsigned SWTRIG11_POS = 11;
        static constexpr unsigned SWTRIG11_MASK = 0x00000800;
        static constexpr unsigned SWTRIG11(unsigned value) { return (value << 11); }
    } SWTRIGCTRL;

    volatile union PRICTRL_T // PRICTRL: Priority Control 0 
    {
        uint32_t reg;
        struct __attribute__((packed)) PRICTRL_BIT_T
        {
            unsigned LVLPRI0  : 4; // bits 0..3 Level 0 Channel Priority Number
            unsigned          : 3; // bits 4..6 unused
            unsigned RRLVLEN0 : 1; // bit 7 Level 0 Round-Robin Scheduling Enable
            unsigned LVLPRI1  : 4; // bits 8..11 Level 1 Channel Priority Number
            unsigned          : 3; // bits 12..14 unused
            unsigned RRLVLEN1 : 1; // bit 15 Level 1 Round-Robin Scheduling Enable
            unsigned LVLPRI2  : 4; // bits 16..19 Level 2 Channel Priority Number
            unsigned          : 3; // bits 20..22 unused
            unsigned RRLVLEN2 : 1; // bit 23 Level 2 Round-Robin Scheduling Enable
            unsigned LVLPRI3  : 4; // bits 24..27 Level 3 Channel Priority Number
            unsigned          : 3; // bits 28..30 unused
            unsigned RRLVLEN3 : 1; // bit 31 Level 3 Round-Robin Scheduling Enable    
        } bit;
    
        static constexpr unsigned LVLPRI0_POS = 0;
        static constexpr unsigned LVLPRI0_MASK = 0x0000000f;
        static constexpr unsigned LVLPRI0(unsigned value) { return (value << 0); }
        static constexpr unsigned RRLVLEN0_POS = 7;
        static constexpr unsigned RRLVLEN0_MASK = 0x00000080;
        static constexpr unsigned RRLVLEN0(unsigned value) { return (value << 7); }
        static constexpr unsigned LVLPRI1_POS = 8;
        static constexpr unsigned LVLPRI1_MASK = 0x00000f00;
        static constexpr unsigned LVLPRI1(unsigned value) { return (value << 8); }
        static constexpr unsigned RRLVLEN1_POS = 15;
        static constexpr unsigned RRLVLEN1_MASK = 0x00008000;
        static constexpr unsigned RRLVLEN1(unsigned value) { return (value << 15); }
        static constexpr unsigned LVLPRI2_POS = 16;
        static constexpr unsigned LVLPRI2_MASK = 0x000f0000;
        static constexpr unsigned LVLPRI2(unsigned value) { return (value << 16); }
        static constexpr unsigned RRLVLEN2_POS = 23;
        static constexpr unsigned RRLVLEN2_MASK = 0x00800000;
        static constexpr unsigned RRLVLEN2(unsigned value) { return (value << 23); }
        static constexpr unsigned LVLPRI3_POS = 24;
        static constexpr unsigned LVLPRI3_MASK = 0x0f000000;
        static constexpr unsigned LVLPRI3(unsigned value) { return (value << 24); }
        static constexpr unsigned RRLVLEN3_POS = 31;
        static constexpr unsigned RRLVLEN3_MASK = 0x80000000;
        static constexpr unsigned RRLVLEN3(unsigned value) { return (value << 31); }
    } PRICTRL;

    uint8_t Reserved2[8];

    volatile union INTPEND_T // INTPEND: Interrupt Pending 
    {
        uint16_t reg;
        struct __attribute__((packed)) INTPEND_BIT_T
        {
            unsigned ID    : 4; // bits 0..3 Channel ID
            unsigned       : 4; // bits 4..7 unused
            unsigned TERR  : 1; // bit 8 Transfer Error
            unsigned TCMPL : 1; // bit 9 Transfer Complete
            unsigned SUSP  : 1; // bit 10 Channel Suspend
            unsigned       : 2; // bits 11..12 unused
            unsigned FERR  : 1; // bit 13 Fetch Error
            unsigned BUSY  : 1; // bit 14 Busy
            unsigned PEND  : 1; // bit 15 Pending    
        } bit;
    
        static constexpr unsigned ID_POS = 0;
        static constexpr unsigned ID_MASK = 0x0000000f;
        static constexpr unsigned ID(unsigned value) { return (value << 0); }
        static constexpr unsigned TERR_POS = 8;
        static constexpr unsigned TERR_MASK = 0x00000100;
        static constexpr unsigned TERR(unsigned value) { return (value << 8); }
        static constexpr unsigned TCMPL_POS = 9;
        static constexpr unsigned TCMPL_MASK = 0x00000200;
        static constexpr unsigned TCMPL(unsigned value) { return (value << 9); }
        static constexpr unsigned SUSP_POS = 10;
        static constexpr unsigned SUSP_MASK = 0x00000400;
        static constexpr unsigned SUSP(unsigned value) { return (value << 10); }
        static constexpr unsigned FERR_POS = 13;
        static constexpr unsigned FERR_MASK = 0x00002000;
        static constexpr unsigned FERR(unsigned value) { return (value << 13); }
        static constexpr unsigned BUSY_POS = 14;
        static constexpr unsigned BUSY_MASK = 0x00004000;
        static constexpr unsigned BUSY(unsigned value) { return (value << 14); }
        static constexpr unsigned PEND_POS = 15;
        static constexpr unsigned PEND_MASK = 0x00008000;
        static constexpr unsigned PEND(unsigned value) { return (value << 15); }
    } INTPEND;

    uint8_t Reserved3[2];

    volatile union INTSTATUS_T // INTSTATUS: Interrupt Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTSTATUS_BIT_T
        {
            unsigned CHINT0  : 1; // bit 0 Channel 0 Pending Interrupt
            unsigned CHINT1  : 1; // bit 1 Channel 1 Pending Interrupt
            unsigned CHINT2  : 1; // bit 2 Channel 2 Pending Interrupt
            unsigned CHINT3  : 1; // bit 3 Channel 3 Pending Interrupt
            unsigned CHINT4  : 1; // bit 4 Channel 4 Pending Interrupt
            unsigned CHINT5  : 1; // bit 5 Channel 5 Pending Interrupt
            unsigned CHINT6  : 1; // bit 6 Channel 6 Pending Interrupt
            unsigned CHINT7  : 1; // bit 7 Channel 7 Pending Interrupt
            unsigned CHINT8  : 1; // bit 8 Channel 8 Pending Interrupt
            unsigned CHINT9  : 1; // bit 9 Channel 9 Pending Interrupt
            unsigned CHINT10 : 1; // bit 10 Channel 10 Pending Interrupt
            unsigned CHINT11 : 1; // bit 11 Channel 11 Pending Interrupt
            unsigned         : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned CHINT0_POS = 0;
        static constexpr unsigned CHINT0_MASK = 0x00000001;
        static constexpr unsigned CHINT0(unsigned value) { return (value << 0); }
        static constexpr unsigned CHINT1_POS = 1;
        static constexpr unsigned CHINT1_MASK = 0x00000002;
        static constexpr unsigned CHINT1(unsigned value) { return (value << 1); }
        static constexpr unsigned CHINT2_POS = 2;
        static constexpr unsigned CHINT2_MASK = 0x00000004;
        static constexpr unsigned CHINT2(unsigned value) { return (value << 2); }
        static constexpr unsigned CHINT3_POS = 3;
        static constexpr unsigned CHINT3_MASK = 0x00000008;
        static constexpr unsigned CHINT3(unsigned value) { return (value << 3); }
        static constexpr unsigned CHINT4_POS = 4;
        static constexpr unsigned CHINT4_MASK = 0x00000010;
        static constexpr unsigned CHINT4(unsigned value) { return (value << 4); }
        static constexpr unsigned CHINT5_POS = 5;
        static constexpr unsigned CHINT5_MASK = 0x00000020;
        static constexpr unsigned CHINT5(unsigned value) { return (value << 5); }
        static constexpr unsigned CHINT6_POS = 6;
        static constexpr unsigned CHINT6_MASK = 0x00000040;
        static constexpr unsigned CHINT6(unsigned value) { return (value << 6); }
        static constexpr unsigned CHINT7_POS = 7;
        static constexpr unsigned CHINT7_MASK = 0x00000080;
        static constexpr unsigned CHINT7(unsigned value) { return (value << 7); }
        static constexpr unsigned CHINT8_POS = 8;
        static constexpr unsigned CHINT8_MASK = 0x00000100;
        static constexpr unsigned CHINT8(unsigned value) { return (value << 8); }
        static constexpr unsigned CHINT9_POS = 9;
        static constexpr unsigned CHINT9_MASK = 0x00000200;
        static constexpr unsigned CHINT9(unsigned value) { return (value << 9); }
        static constexpr unsigned CHINT10_POS = 10;
        static constexpr unsigned CHINT10_MASK = 0x00000400;
        static constexpr unsigned CHINT10(unsigned value) { return (value << 10); }
        static constexpr unsigned CHINT11_POS = 11;
        static constexpr unsigned CHINT11_MASK = 0x00000800;
        static constexpr unsigned CHINT11(unsigned value) { return (value << 11); }
    } INTSTATUS;

    volatile union BUSYCH_T // BUSYCH: Busy Channels 
    {
        uint32_t reg;
        struct __attribute__((packed)) BUSYCH_BIT_T
        {
            unsigned BUSYCH0  : 1; // bit 0 Busy Channel 0
            unsigned BUSYCH1  : 1; // bit 1 Busy Channel 1
            unsigned BUSYCH2  : 1; // bit 2 Busy Channel 2
            unsigned BUSYCH3  : 1; // bit 3 Busy Channel 3
            unsigned BUSYCH4  : 1; // bit 4 Busy Channel 4
            unsigned BUSYCH5  : 1; // bit 5 Busy Channel 5
            unsigned BUSYCH6  : 1; // bit 6 Busy Channel 6
            unsigned BUSYCH7  : 1; // bit 7 Busy Channel 7
            unsigned BUSYCH8  : 1; // bit 8 Busy Channel 8
            unsigned BUSYCH9  : 1; // bit 9 Busy Channel 9
            unsigned BUSYCH10 : 1; // bit 10 Busy Channel 10
            unsigned BUSYCH11 : 1; // bit 11 Busy Channel 11
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned BUSYCH0_POS = 0;
        static constexpr unsigned BUSYCH0_MASK = 0x00000001;
        static constexpr unsigned BUSYCH0(unsigned value) { return (value << 0); }
        static constexpr unsigned BUSYCH1_POS = 1;
        static constexpr unsigned BUSYCH1_MASK = 0x00000002;
        static constexpr unsigned BUSYCH1(unsigned value) { return (value << 1); }
        static constexpr unsigned BUSYCH2_POS = 2;
        static constexpr unsigned BUSYCH2_MASK = 0x00000004;
        static constexpr unsigned BUSYCH2(unsigned value) { return (value << 2); }
        static constexpr unsigned BUSYCH3_POS = 3;
        static constexpr unsigned BUSYCH3_MASK = 0x00000008;
        static constexpr unsigned BUSYCH3(unsigned value) { return (value << 3); }
        static constexpr unsigned BUSYCH4_POS = 4;
        static constexpr unsigned BUSYCH4_MASK = 0x00000010;
        static constexpr unsigned BUSYCH4(unsigned value) { return (value << 4); }
        static constexpr unsigned BUSYCH5_POS = 5;
        static constexpr unsigned BUSYCH5_MASK = 0x00000020;
        static constexpr unsigned BUSYCH5(unsigned value) { return (value << 5); }
        static constexpr unsigned BUSYCH6_POS = 6;
        static constexpr unsigned BUSYCH6_MASK = 0x00000040;
        static constexpr unsigned BUSYCH6(unsigned value) { return (value << 6); }
        static constexpr unsigned BUSYCH7_POS = 7;
        static constexpr unsigned BUSYCH7_MASK = 0x00000080;
        static constexpr unsigned BUSYCH7(unsigned value) { return (value << 7); }
        static constexpr unsigned BUSYCH8_POS = 8;
        static constexpr unsigned BUSYCH8_MASK = 0x00000100;
        static constexpr unsigned BUSYCH8(unsigned value) { return (value << 8); }
        static constexpr unsigned BUSYCH9_POS = 9;
        static constexpr unsigned BUSYCH9_MASK = 0x00000200;
        static constexpr unsigned BUSYCH9(unsigned value) { return (value << 9); }
        static constexpr unsigned BUSYCH10_POS = 10;
        static constexpr unsigned BUSYCH10_MASK = 0x00000400;
        static constexpr unsigned BUSYCH10(unsigned value) { return (value << 10); }
        static constexpr unsigned BUSYCH11_POS = 11;
        static constexpr unsigned BUSYCH11_MASK = 0x00000800;
        static constexpr unsigned BUSYCH11(unsigned value) { return (value << 11); }
    } BUSYCH;

    volatile union PENDCH_T // PENDCH: Pending Channels 
    {
        uint32_t reg;
        struct __attribute__((packed)) PENDCH_BIT_T
        {
            unsigned PENDCH0  : 1; // bit 0 Pending Channel 0
            unsigned PENDCH1  : 1; // bit 1 Pending Channel 1
            unsigned PENDCH2  : 1; // bit 2 Pending Channel 2
            unsigned PENDCH3  : 1; // bit 3 Pending Channel 3
            unsigned PENDCH4  : 1; // bit 4 Pending Channel 4
            unsigned PENDCH5  : 1; // bit 5 Pending Channel 5
            unsigned PENDCH6  : 1; // bit 6 Pending Channel 6
            unsigned PENDCH7  : 1; // bit 7 Pending Channel 7
            unsigned PENDCH8  : 1; // bit 8 Pending Channel 8
            unsigned PENDCH9  : 1; // bit 9 Pending Channel 9
            unsigned PENDCH10 : 1; // bit 10 Pending Channel 10
            unsigned PENDCH11 : 1; // bit 11 Pending Channel 11
            unsigned          : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned PENDCH0_POS = 0;
        static constexpr unsigned PENDCH0_MASK = 0x00000001;
        static constexpr unsigned PENDCH0(unsigned value) { return (value << 0); }
        static constexpr unsigned PENDCH1_POS = 1;
        static constexpr unsigned PENDCH1_MASK = 0x00000002;
        static constexpr unsigned PENDCH1(unsigned value) { return (value << 1); }
        static constexpr unsigned PENDCH2_POS = 2;
        static constexpr unsigned PENDCH2_MASK = 0x00000004;
        static constexpr unsigned PENDCH2(unsigned value) { return (value << 2); }
        static constexpr unsigned PENDCH3_POS = 3;
        static constexpr unsigned PENDCH3_MASK = 0x00000008;
        static constexpr unsigned PENDCH3(unsigned value) { return (value << 3); }
        static constexpr unsigned PENDCH4_POS = 4;
        static constexpr unsigned PENDCH4_MASK = 0x00000010;
        static constexpr unsigned PENDCH4(unsigned value) { return (value << 4); }
        static constexpr unsigned PENDCH5_POS = 5;
        static constexpr unsigned PENDCH5_MASK = 0x00000020;
        static constexpr unsigned PENDCH5(unsigned value) { return (value << 5); }
        static constexpr unsigned PENDCH6_POS = 6;
        static constexpr unsigned PENDCH6_MASK = 0x00000040;
        static constexpr unsigned PENDCH6(unsigned value) { return (value << 6); }
        static constexpr unsigned PENDCH7_POS = 7;
        static constexpr unsigned PENDCH7_MASK = 0x00000080;
        static constexpr unsigned PENDCH7(unsigned value) { return (value << 7); }
        static constexpr unsigned PENDCH8_POS = 8;
        static constexpr unsigned PENDCH8_MASK = 0x00000100;
        static constexpr unsigned PENDCH8(unsigned value) { return (value << 8); }
        static constexpr unsigned PENDCH9_POS = 9;
        static constexpr unsigned PENDCH9_MASK = 0x00000200;
        static constexpr unsigned PENDCH9(unsigned value) { return (value << 9); }
        static constexpr unsigned PENDCH10_POS = 10;
        static constexpr unsigned PENDCH10_MASK = 0x00000400;
        static constexpr unsigned PENDCH10(unsigned value) { return (value << 10); }
        static constexpr unsigned PENDCH11_POS = 11;
        static constexpr unsigned PENDCH11_MASK = 0x00000800;
        static constexpr unsigned PENDCH11(unsigned value) { return (value << 11); }
    } PENDCH;

    volatile union ACTIVE_T // ACTIVE: Active Channel and Levels 
    {
        uint32_t reg;
        struct __attribute__((packed)) ACTIVE_BIT_T
        {
            unsigned LVLEX0 : 1; // bit 0 Level 0 Channel Trigger Request Executing
            unsigned LVLEX1 : 1; // bit 1 Level 1 Channel Trigger Request Executing
            unsigned LVLEX2 : 1; // bit 2 Level 2 Channel Trigger Request Executing
            unsigned LVLEX3 : 1; // bit 3 Level 3 Channel Trigger Request Executing
            unsigned        : 4; // bits 4..7 unused
            unsigned ID     : 5; // bits 8..12 Active Channel ID
            unsigned        : 2; // bits 13..14 unused
            unsigned ABUSY  : 1; // bit 15 Active Channel Busy
            unsigned BTCNT  : 16; // bits 16..31 Active Channel Block Transfer Count    
        } bit;
    
        static constexpr unsigned LVLEX0_POS = 0;
        static constexpr unsigned LVLEX0_MASK = 0x00000001;
        static constexpr unsigned LVLEX0(unsigned value) { return (value << 0); }
        static constexpr unsigned LVLEX1_POS = 1;
        static constexpr unsigned LVLEX1_MASK = 0x00000002;
        static constexpr unsigned LVLEX1(unsigned value) { return (value << 1); }
        static constexpr unsigned LVLEX2_POS = 2;
        static constexpr unsigned LVLEX2_MASK = 0x00000004;
        static constexpr unsigned LVLEX2(unsigned value) { return (value << 2); }
        static constexpr unsigned LVLEX3_POS = 3;
        static constexpr unsigned LVLEX3_MASK = 0x00000008;
        static constexpr unsigned LVLEX3(unsigned value) { return (value << 3); }
        static constexpr unsigned ID_POS = 8;
        static constexpr unsigned ID_MASK = 0x00001f00;
        static constexpr unsigned ID(unsigned value) { return (value << 8); }
        static constexpr unsigned ABUSY_POS = 15;
        static constexpr unsigned ABUSY_MASK = 0x00008000;
        static constexpr unsigned ABUSY(unsigned value) { return (value << 15); }
        static constexpr unsigned BTCNT_POS = 16;
        static constexpr unsigned BTCNT_MASK = 0xffff0000;
        static constexpr unsigned BTCNT(unsigned value) { return (value << 16); }
    } ACTIVE;

    volatile union BASEADDR_T // BASEADDR: Descriptor Memory Section Base Address 
    {
        uint32_t reg;
        struct __attribute__((packed)) BASEADDR_BIT_T
        {
            unsigned BASEADDR : 32; // bits 0..31 Descriptor Memory Base Address    
        } bit;
    
        static constexpr unsigned BASEADDR_POS = 0;
        static constexpr unsigned BASEADDR_MASK = 0xffffffff;
        static constexpr unsigned BASEADDR(unsigned value) { return (value << 0); }
    } BASEADDR;

    volatile union WRBADDR_T // WRBADDR: Write-Back Memory Section Base Address 
    {
        uint32_t reg;
        struct __attribute__((packed)) WRBADDR_BIT_T
        {
            unsigned WRBADDR : 32; // bits 0..31 Write-Back Memory Base Address    
        } bit;
    
        static constexpr unsigned WRBADDR_POS = 0;
        static constexpr unsigned WRBADDR_MASK = 0xffffffff;
        static constexpr unsigned WRBADDR(unsigned value) { return (value << 0); }
    } WRBADDR;

    uint8_t Reserved4[3];

    volatile union CHID_T // CHID: Channel ID 
    {
        uint8_t reg;
        struct __attribute__((packed)) CHID_BIT_T
        {
            unsigned ID : 4; // bits 0..3 Channel ID
            unsigned    : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned ID_POS = 0;
        static constexpr unsigned ID_MASK = 0x0000000f;
        static constexpr unsigned ID(unsigned value) { return (value << 0); }
    } CHID;

    volatile union CHCTRLA_T // CHCTRLA: Channel Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) CHCTRLA_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Channel Software Reset
            unsigned ENABLE   : 1; // bit 1 Channel Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Channel run in standby
            unsigned          : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
    } CHCTRLA;

    uint8_t Reserved5[3];

    volatile union CHCTRLB_T // CHCTRLB: Channel Control B 
    {
        uint32_t reg;
        struct __attribute__((packed)) CHCTRLB_BIT_T
        {
            unsigned EVACT   : 3; // bits 0..2 Event Input Action
            unsigned EVIE    : 1; // bit 3 Channel Event Input Enable
            unsigned EVOE    : 1; // bit 4 Channel Event Output Enable
            unsigned LVL     : 2; // bits 5..6 Channel Arbitration Level
            unsigned         : 1; // bit 7 unused
            unsigned TRIGSRC : 6; // bits 8..13 Trigger Source
            unsigned         : 8; // bits 14..21 unused
            unsigned TRIGACT : 2; // bits 22..23 Trigger Action
            unsigned CMD     : 2; // bits 24..25 Software Command
            unsigned         : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned EVACT_POS = 0;
        static constexpr unsigned EVACT_MASK = 0x00000007;
        static constexpr unsigned EVACT(unsigned value) { return (value << 0); }
        static constexpr unsigned EVIE_POS = 3;
        static constexpr unsigned EVIE_MASK = 0x00000008;
        static constexpr unsigned EVIE(unsigned value) { return (value << 3); }
        static constexpr unsigned EVOE_POS = 4;
        static constexpr unsigned EVOE_MASK = 0x00000010;
        static constexpr unsigned EVOE(unsigned value) { return (value << 4); }
        static constexpr unsigned LVL_POS = 5;
        static constexpr unsigned LVL_MASK = 0x00000060;
        static constexpr unsigned LVL(unsigned value) { return (value << 5); }
        static constexpr unsigned TRIGSRC_POS = 8;
        static constexpr unsigned TRIGSRC_MASK = 0x00003f00;
        static constexpr unsigned TRIGSRC(unsigned value) { return (value << 8); }
        static constexpr unsigned TRIGACT_POS = 22;
        static constexpr unsigned TRIGACT_MASK = 0x00c00000;
        static constexpr unsigned TRIGACT(unsigned value) { return (value << 22); }
        static constexpr unsigned CMD_POS = 24;
        static constexpr unsigned CMD_MASK = 0x03000000;
        static constexpr unsigned CMD(unsigned value) { return (value << 24); }
    } CHCTRLB;

    uint8_t Reserved6[4];

    volatile union CHINTENCLR_T // CHINTENCLR: Channel Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) CHINTENCLR_BIT_T
        {
            unsigned TERR  : 1; // bit 0 Channel Transfer Error Interrupt Enable
            unsigned TCMPL : 1; // bit 1 Channel Transfer Complete Interrupt Enable
            unsigned SUSP  : 1; // bit 2 Channel Suspend Interrupt Enable
            unsigned       : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned TERR_POS = 0;
        static constexpr unsigned TERR_MASK = 0x00000001;
        static constexpr unsigned TERR(unsigned value) { return (value << 0); }
        static constexpr unsigned TCMPL_POS = 1;
        static constexpr unsigned TCMPL_MASK = 0x00000002;
        static constexpr unsigned TCMPL(unsigned value) { return (value << 1); }
        static constexpr unsigned SUSP_POS = 2;
        static constexpr unsigned SUSP_MASK = 0x00000004;
        static constexpr unsigned SUSP(unsigned value) { return (value << 2); }
    } CHINTENCLR;

    volatile union CHINTENSET_T // CHINTENSET: Channel Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) CHINTENSET_BIT_T
        {
            unsigned TERR  : 1; // bit 0 Channel Transfer Error Interrupt Enable
            unsigned TCMPL : 1; // bit 1 Channel Transfer Complete Interrupt Enable
            unsigned SUSP  : 1; // bit 2 Channel Suspend Interrupt Enable
            unsigned       : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned TERR_POS = 0;
        static constexpr unsigned TERR_MASK = 0x00000001;
        static constexpr unsigned TERR(unsigned value) { return (value << 0); }
        static constexpr unsigned TCMPL_POS = 1;
        static constexpr unsigned TCMPL_MASK = 0x00000002;
        static constexpr unsigned TCMPL(unsigned value) { return (value << 1); }
        static constexpr unsigned SUSP_POS = 2;
        static constexpr unsigned SUSP_MASK = 0x00000004;
        static constexpr unsigned SUSP(unsigned value) { return (value << 2); }
    } CHINTENSET;

    volatile union CHINTFLAG_T // CHINTFLAG: Channel Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) CHINTFLAG_BIT_T
        {
            unsigned TERR  : 1; // bit 0 Channel Transfer Error
            unsigned TCMPL : 1; // bit 1 Channel Transfer Complete
            unsigned SUSP  : 1; // bit 2 Channel Suspend
            unsigned       : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned TERR_POS = 0;
        static constexpr unsigned TERR_MASK = 0x00000001;
        static constexpr unsigned TERR(unsigned value) { return (value << 0); }
        static constexpr unsigned TCMPL_POS = 1;
        static constexpr unsigned TCMPL_MASK = 0x00000002;
        static constexpr unsigned TCMPL(unsigned value) { return (value << 1); }
        static constexpr unsigned SUSP_POS = 2;
        static constexpr unsigned SUSP_MASK = 0x00000004;
        static constexpr unsigned SUSP(unsigned value) { return (value << 2); }
    } CHINTFLAG;

    volatile union CHSTATUS_T // CHSTATUS: Channel Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) CHSTATUS_BIT_T
        {
            unsigned PEND : 1; // bit 0 Channel Pending
            unsigned BUSY : 1; // bit 1 Channel Busy
            unsigned FERR : 1; // bit 2 Channel Fetch Error
            unsigned      : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned PEND_POS = 0;
        static constexpr unsigned PEND_MASK = 0x00000001;
        static constexpr unsigned PEND(unsigned value) { return (value << 0); }
        static constexpr unsigned BUSY_POS = 1;
        static constexpr unsigned BUSY_MASK = 0x00000002;
        static constexpr unsigned BUSY(unsigned value) { return (value << 1); }
        static constexpr unsigned FERR_POS = 2;
        static constexpr unsigned FERR_MASK = 0x00000004;
        static constexpr unsigned FERR(unsigned value) { return (value << 2); }
    } CHSTATUS;

}; // struct DMAC_T

static_assert(sizeof(DMAC_T) == DMAC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp