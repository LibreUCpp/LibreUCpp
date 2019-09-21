#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SDIO_T
{
    static constexpr size_t INSTANCE_SIZE = 132;
    static constexpr intptr_t BASE_ADDRESS = 0x40018000;

    static constexpr intptr_t ADDR_OFFSET_POWER = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CLKCR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_ARG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CMD = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_RESPCMD = 0x10;
    static constexpr intptr_t ADDR_OFFSET_RESPI1 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_RESP2 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_RESP3 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_RESP4 = 0x20;
    static constexpr intptr_t ADDR_OFFSET_DTIMER = 0x24;
    static constexpr intptr_t ADDR_OFFSET_DLEN = 0x28;
    static constexpr intptr_t ADDR_OFFSET_DCTRL = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_DCOUNT = 0x30;
    static constexpr intptr_t ADDR_OFFSET_STA = 0x34;
    static constexpr intptr_t ADDR_OFFSET_ICR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_MASK = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_FIFOCNT = 0x48;
    static constexpr intptr_t ADDR_OFFSET_FIFO = 0x80;

    volatile union POWER_T // POWER: Bits 1:0 = PWRCTRL: Power supply control bits 
    {
        uint32_t reg;
        struct __attribute__((packed)) POWER_BIT_T
        {
            unsigned PWRCTRL : 2; // bits 0..1 PWRCTRL
            unsigned         : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned PWRCTRL_POS = 0;
        static constexpr unsigned PWRCTRL_MASK = 0x00000003;
        static constexpr unsigned PWRCTRL(unsigned value) { return (value << 0); }
    } POWER;

    volatile union CLKCR_T // CLKCR: SDI clock control register (SDIO_CLKCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CLKCR_BIT_T
        {
            unsigned CLKDIV  : 8; // bits 0..7 Clock divide factor
            unsigned CLKEN   : 1; // bit 8 Clock enable bit
            unsigned PWRSAV  : 1; // bit 9 Power saving configuration bit
            unsigned BYPASS  : 1; // bit 10 Clock divider bypass enable bit
            unsigned WIDBUS  : 2; // bits 11..12 Wide bus mode enable bit
            unsigned NEGEDGE : 1; // bit 13 SDIO_CK dephasing selection bit
            unsigned HWFC_EN : 1; // bit 14 HW Flow Control enable
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned CLKDIV_POS = 0;
        static constexpr unsigned CLKDIV_MASK = 0x000000ff;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 0); }
        static constexpr unsigned CLKEN_POS = 8;
        static constexpr unsigned CLKEN_MASK = 0x00000100;
        static constexpr unsigned CLKEN(unsigned value) { return (value << 8); }
        static constexpr unsigned PWRSAV_POS = 9;
        static constexpr unsigned PWRSAV_MASK = 0x00000200;
        static constexpr unsigned PWRSAV(unsigned value) { return (value << 9); }
        static constexpr unsigned BYPASS_POS = 10;
        static constexpr unsigned BYPASS_MASK = 0x00000400;
        static constexpr unsigned BYPASS(unsigned value) { return (value << 10); }
        static constexpr unsigned WIDBUS_POS = 11;
        static constexpr unsigned WIDBUS_MASK = 0x00001800;
        static constexpr unsigned WIDBUS(unsigned value) { return (value << 11); }
        static constexpr unsigned NEGEDGE_POS = 13;
        static constexpr unsigned NEGEDGE_MASK = 0x00002000;
        static constexpr unsigned NEGEDGE(unsigned value) { return (value << 13); }
        static constexpr unsigned HWFC_EN_POS = 14;
        static constexpr unsigned HWFC_EN_MASK = 0x00004000;
        static constexpr unsigned HWFC_EN(unsigned value) { return (value << 14); }
    } CLKCR;

    volatile union ARG_T // ARG: Bits 31:0 = : Command argument 
    {
        uint32_t reg;
        struct __attribute__((packed)) ARG_BIT_T
        {
            unsigned CMDARG : 32; // bits 0..31 Command argument    
        } bit;
    
        static constexpr unsigned CMDARG_POS = 0;
        static constexpr unsigned CMDARG_MASK = 0xffffffff;
        static constexpr unsigned CMDARG(unsigned value) { return (value << 0); }
    } ARG;

    volatile union CMD_T // CMD: SDIO command register (SDIO_CMD) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMD_BIT_T
        {
            unsigned CMDINDEX    : 6; // bits 0..5 CMDINDEX
            unsigned WAITRESP    : 2; // bits 6..7 WAITRESP
            unsigned WAITINT     : 1; // bit 8 WAITINT
            unsigned WAITPEND    : 1; // bit 9 WAITPEND
            unsigned CPSMEN      : 1; // bit 10 CPSMEN
            unsigned SDIOSuspend : 1; // bit 11 SDIOSuspend
            unsigned ENCMDcompl  : 1; // bit 12 ENCMDcompl
            unsigned nIEN        : 1; // bit 13 nIEN
            unsigned CE_ATACMD   : 1; // bit 14 CE_ATACMD
            unsigned             : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned CMDINDEX_POS = 0;
        static constexpr unsigned CMDINDEX_MASK = 0x0000003f;
        static constexpr unsigned CMDINDEX(unsigned value) { return (value << 0); }
        static constexpr unsigned WAITRESP_POS = 6;
        static constexpr unsigned WAITRESP_MASK = 0x000000c0;
        static constexpr unsigned WAITRESP(unsigned value) { return (value << 6); }
        static constexpr unsigned WAITINT_POS = 8;
        static constexpr unsigned WAITINT_MASK = 0x00000100;
        static constexpr unsigned WAITINT(unsigned value) { return (value << 8); }
        static constexpr unsigned WAITPEND_POS = 9;
        static constexpr unsigned WAITPEND_MASK = 0x00000200;
        static constexpr unsigned WAITPEND(unsigned value) { return (value << 9); }
        static constexpr unsigned CPSMEN_POS = 10;
        static constexpr unsigned CPSMEN_MASK = 0x00000400;
        static constexpr unsigned CPSMEN(unsigned value) { return (value << 10); }
        static constexpr unsigned SDIOSuspend_POS = 11;
        static constexpr unsigned SDIOSuspend_MASK = 0x00000800;
        static constexpr unsigned SDIOSuspend(unsigned value) { return (value << 11); }
        static constexpr unsigned ENCMDcompl_POS = 12;
        static constexpr unsigned ENCMDcompl_MASK = 0x00001000;
        static constexpr unsigned ENCMDcompl(unsigned value) { return (value << 12); }
        static constexpr unsigned nIEN_POS = 13;
        static constexpr unsigned nIEN_MASK = 0x00002000;
        static constexpr unsigned nIEN(unsigned value) { return (value << 13); }
        static constexpr unsigned CE_ATACMD_POS = 14;
        static constexpr unsigned CE_ATACMD_MASK = 0x00004000;
        static constexpr unsigned CE_ATACMD(unsigned value) { return (value << 14); }
    } CMD;

    volatile union RESPCMD_T // RESPCMD: SDIO command register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RESPCMD_BIT_T
        {
            unsigned RESPCMD : 6; // bits 0..5 RESPCMD
            unsigned         : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned RESPCMD_POS = 0;
        static constexpr unsigned RESPCMD_MASK = 0x0000003f;
        static constexpr unsigned RESPCMD(unsigned value) { return (value << 0); }
    } RESPCMD;

    volatile union RESPI1_T // RESPI1: Bits 31:0 = CARDSTATUS1 
    {
        uint32_t reg;
        struct __attribute__((packed)) RESPI1_BIT_T
        {
            unsigned CARDSTATUS1 : 32; // bits 0..31 CARDSTATUS1    
        } bit;
    
        static constexpr unsigned CARDSTATUS1_POS = 0;
        static constexpr unsigned CARDSTATUS1_MASK = 0xffffffff;
        static constexpr unsigned CARDSTATUS1(unsigned value) { return (value << 0); }
    } RESPI1;

    volatile union RESP2_T // RESP2: Bits 31:0 = CARDSTATUS2 
    {
        uint32_t reg;
        struct __attribute__((packed)) RESP2_BIT_T
        {
            unsigned CARDSTATUS2 : 32; // bits 0..31 CARDSTATUS2    
        } bit;
    
        static constexpr unsigned CARDSTATUS2_POS = 0;
        static constexpr unsigned CARDSTATUS2_MASK = 0xffffffff;
        static constexpr unsigned CARDSTATUS2(unsigned value) { return (value << 0); }
    } RESP2;

    volatile union RESP3_T // RESP3: Bits 31:0 = CARDSTATUS3 
    {
        uint32_t reg;
        struct __attribute__((packed)) RESP3_BIT_T
        {
            unsigned CARDSTATUS3 : 32; // bits 0..31 CARDSTATUS3    
        } bit;
    
        static constexpr unsigned CARDSTATUS3_POS = 0;
        static constexpr unsigned CARDSTATUS3_MASK = 0xffffffff;
        static constexpr unsigned CARDSTATUS3(unsigned value) { return (value << 0); }
    } RESP3;

    volatile union RESP4_T // RESP4: Bits 31:0 = CARDSTATUS4 
    {
        uint32_t reg;
        struct __attribute__((packed)) RESP4_BIT_T
        {
            unsigned CARDSTATUS4 : 32; // bits 0..31 CARDSTATUS4    
        } bit;
    
        static constexpr unsigned CARDSTATUS4_POS = 0;
        static constexpr unsigned CARDSTATUS4_MASK = 0xffffffff;
        static constexpr unsigned CARDSTATUS4(unsigned value) { return (value << 0); }
    } RESP4;

    volatile union DTIMER_T // DTIMER: Bits 31:0 = DATATIME: Data timeout period 
    {
        uint32_t reg;
        struct __attribute__((packed)) DTIMER_BIT_T
        {
            unsigned DATATIME : 32; // bits 0..31 Data timeout period    
        } bit;
    
        static constexpr unsigned DATATIME_POS = 0;
        static constexpr unsigned DATATIME_MASK = 0xffffffff;
        static constexpr unsigned DATATIME(unsigned value) { return (value << 0); }
    } DTIMER;

    volatile union DLEN_T // DLEN: Bits 24:0 = DATALENGTH: Data length value 
    {
        uint32_t reg;
        struct __attribute__((packed)) DLEN_BIT_T
        {
            unsigned DATALENGTH : 25; // bits 0..24 Data length value
            unsigned            : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned DATALENGTH_POS = 0;
        static constexpr unsigned DATALENGTH_MASK = 0x01ffffff;
        static constexpr unsigned DATALENGTH(unsigned value) { return (value << 0); }
    } DLEN;

    volatile union DCTRL_T // DCTRL: SDIO data control register (SDIO_DCTRL) 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCTRL_BIT_T
        {
            unsigned DTEN       : 1; // bit 0 DTEN
            unsigned DTDIR      : 1; // bit 1 DTDIR
            unsigned DTMODE     : 1; // bit 2 DTMODE
            unsigned DMAEN      : 1; // bit 3 DMAEN
            unsigned DBLOCKSIZE : 4; // bits 4..7 DBLOCKSIZE
            unsigned PWSTART    : 1; // bit 8 PWSTART
            unsigned PWSTOP     : 1; // bit 9 PWSTOP
            unsigned RWMOD      : 1; // bit 10 RWMOD
            unsigned SDIOEN     : 1; // bit 11 SDIOEN
            unsigned            : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned DTEN_POS = 0;
        static constexpr unsigned DTEN_MASK = 0x00000001;
        static constexpr unsigned DTEN(unsigned value) { return (value << 0); }
        static constexpr unsigned DTDIR_POS = 1;
        static constexpr unsigned DTDIR_MASK = 0x00000002;
        static constexpr unsigned DTDIR(unsigned value) { return (value << 1); }
        static constexpr unsigned DTMODE_POS = 2;
        static constexpr unsigned DTMODE_MASK = 0x00000004;
        static constexpr unsigned DTMODE(unsigned value) { return (value << 2); }
        static constexpr unsigned DMAEN_POS = 3;
        static constexpr unsigned DMAEN_MASK = 0x00000008;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 3); }
        static constexpr unsigned DBLOCKSIZE_POS = 4;
        static constexpr unsigned DBLOCKSIZE_MASK = 0x000000f0;
        static constexpr unsigned DBLOCKSIZE(unsigned value) { return (value << 4); }
        static constexpr unsigned PWSTART_POS = 8;
        static constexpr unsigned PWSTART_MASK = 0x00000100;
        static constexpr unsigned PWSTART(unsigned value) { return (value << 8); }
        static constexpr unsigned PWSTOP_POS = 9;
        static constexpr unsigned PWSTOP_MASK = 0x00000200;
        static constexpr unsigned PWSTOP(unsigned value) { return (value << 9); }
        static constexpr unsigned RWMOD_POS = 10;
        static constexpr unsigned RWMOD_MASK = 0x00000400;
        static constexpr unsigned RWMOD(unsigned value) { return (value << 10); }
        static constexpr unsigned SDIOEN_POS = 11;
        static constexpr unsigned SDIOEN_MASK = 0x00000800;
        static constexpr unsigned SDIOEN(unsigned value) { return (value << 11); }
    } DCTRL;

    volatile union DCOUNT_T // DCOUNT: Bits 24:0 = DATACOUNT: Data count value 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCOUNT_BIT_T
        {
            unsigned DATACOUNT : 25; // bits 0..24 Data count value
            unsigned           : 7; // bits 25..31 unused    
        } bit;
    
        static constexpr unsigned DATACOUNT_POS = 0;
        static constexpr unsigned DATACOUNT_MASK = 0x01ffffff;
        static constexpr unsigned DATACOUNT(unsigned value) { return (value << 0); }
    } DCOUNT;

    volatile union STA_T // STA: SDIO status register (SDIO_STA) 
    {
        uint32_t reg;
        struct __attribute__((packed)) STA_BIT_T
        {
            unsigned CCRCFAIL : 1; // bit 0 CCRCFAIL
            unsigned DCRCFAIL : 1; // bit 1 DCRCFAIL
            unsigned CTIMEOUT : 1; // bit 2 CTIMEOUT
            unsigned DTIMEOUT : 1; // bit 3 DTIMEOUT
            unsigned TXUNDERR : 1; // bit 4 TXUNDERR
            unsigned RXOVERR  : 1; // bit 5 RXOVERR
            unsigned CMDREND  : 1; // bit 6 CMDREND
            unsigned CMDSENT  : 1; // bit 7 CMDSENT
            unsigned DATAEND  : 1; // bit 8 DATAEND
            unsigned STBITERR : 1; // bit 9 STBITERR
            unsigned DBCKEND  : 1; // bit 10 DBCKEND
            unsigned CMDACT   : 1; // bit 11 CMDACT
            unsigned TXACT    : 1; // bit 12 TXACT
            unsigned RXACT    : 1; // bit 13 RXACT
            unsigned TXFIFOHE : 1; // bit 14 TXFIFOHE
            unsigned RXFIFOHF : 1; // bit 15 RXFIFOHF
            unsigned TXFIFOF  : 1; // bit 16 TXFIFOF
            unsigned RXFIFOF  : 1; // bit 17 RXFIFOF
            unsigned TXFIFOE  : 1; // bit 18 TXFIFOE
            unsigned RXFIFOE  : 1; // bit 19 RXFIFOE
            unsigned TXDAVL   : 1; // bit 20 TXDAVL
            unsigned RXDAVL   : 1; // bit 21 RXDAVL
            unsigned SDIOIT   : 1; // bit 22 SDIOIT
            unsigned CEATAEND : 1; // bit 23 CEATAEND
            unsigned          : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CCRCFAIL_POS = 0;
        static constexpr unsigned CCRCFAIL_MASK = 0x00000001;
        static constexpr unsigned CCRCFAIL(unsigned value) { return (value << 0); }
        static constexpr unsigned DCRCFAIL_POS = 1;
        static constexpr unsigned DCRCFAIL_MASK = 0x00000002;
        static constexpr unsigned DCRCFAIL(unsigned value) { return (value << 1); }
        static constexpr unsigned CTIMEOUT_POS = 2;
        static constexpr unsigned CTIMEOUT_MASK = 0x00000004;
        static constexpr unsigned CTIMEOUT(unsigned value) { return (value << 2); }
        static constexpr unsigned DTIMEOUT_POS = 3;
        static constexpr unsigned DTIMEOUT_MASK = 0x00000008;
        static constexpr unsigned DTIMEOUT(unsigned value) { return (value << 3); }
        static constexpr unsigned TXUNDERR_POS = 4;
        static constexpr unsigned TXUNDERR_MASK = 0x00000010;
        static constexpr unsigned TXUNDERR(unsigned value) { return (value << 4); }
        static constexpr unsigned RXOVERR_POS = 5;
        static constexpr unsigned RXOVERR_MASK = 0x00000020;
        static constexpr unsigned RXOVERR(unsigned value) { return (value << 5); }
        static constexpr unsigned CMDREND_POS = 6;
        static constexpr unsigned CMDREND_MASK = 0x00000040;
        static constexpr unsigned CMDREND(unsigned value) { return (value << 6); }
        static constexpr unsigned CMDSENT_POS = 7;
        static constexpr unsigned CMDSENT_MASK = 0x00000080;
        static constexpr unsigned CMDSENT(unsigned value) { return (value << 7); }
        static constexpr unsigned DATAEND_POS = 8;
        static constexpr unsigned DATAEND_MASK = 0x00000100;
        static constexpr unsigned DATAEND(unsigned value) { return (value << 8); }
        static constexpr unsigned STBITERR_POS = 9;
        static constexpr unsigned STBITERR_MASK = 0x00000200;
        static constexpr unsigned STBITERR(unsigned value) { return (value << 9); }
        static constexpr unsigned DBCKEND_POS = 10;
        static constexpr unsigned DBCKEND_MASK = 0x00000400;
        static constexpr unsigned DBCKEND(unsigned value) { return (value << 10); }
        static constexpr unsigned CMDACT_POS = 11;
        static constexpr unsigned CMDACT_MASK = 0x00000800;
        static constexpr unsigned CMDACT(unsigned value) { return (value << 11); }
        static constexpr unsigned TXACT_POS = 12;
        static constexpr unsigned TXACT_MASK = 0x00001000;
        static constexpr unsigned TXACT(unsigned value) { return (value << 12); }
        static constexpr unsigned RXACT_POS = 13;
        static constexpr unsigned RXACT_MASK = 0x00002000;
        static constexpr unsigned RXACT(unsigned value) { return (value << 13); }
        static constexpr unsigned TXFIFOHE_POS = 14;
        static constexpr unsigned TXFIFOHE_MASK = 0x00004000;
        static constexpr unsigned TXFIFOHE(unsigned value) { return (value << 14); }
        static constexpr unsigned RXFIFOHF_POS = 15;
        static constexpr unsigned RXFIFOHF_MASK = 0x00008000;
        static constexpr unsigned RXFIFOHF(unsigned value) { return (value << 15); }
        static constexpr unsigned TXFIFOF_POS = 16;
        static constexpr unsigned TXFIFOF_MASK = 0x00010000;
        static constexpr unsigned TXFIFOF(unsigned value) { return (value << 16); }
        static constexpr unsigned RXFIFOF_POS = 17;
        static constexpr unsigned RXFIFOF_MASK = 0x00020000;
        static constexpr unsigned RXFIFOF(unsigned value) { return (value << 17); }
        static constexpr unsigned TXFIFOE_POS = 18;
        static constexpr unsigned TXFIFOE_MASK = 0x00040000;
        static constexpr unsigned TXFIFOE(unsigned value) { return (value << 18); }
        static constexpr unsigned RXFIFOE_POS = 19;
        static constexpr unsigned RXFIFOE_MASK = 0x00080000;
        static constexpr unsigned RXFIFOE(unsigned value) { return (value << 19); }
        static constexpr unsigned TXDAVL_POS = 20;
        static constexpr unsigned TXDAVL_MASK = 0x00100000;
        static constexpr unsigned TXDAVL(unsigned value) { return (value << 20); }
        static constexpr unsigned RXDAVL_POS = 21;
        static constexpr unsigned RXDAVL_MASK = 0x00200000;
        static constexpr unsigned RXDAVL(unsigned value) { return (value << 21); }
        static constexpr unsigned SDIOIT_POS = 22;
        static constexpr unsigned SDIOIT_MASK = 0x00400000;
        static constexpr unsigned SDIOIT(unsigned value) { return (value << 22); }
        static constexpr unsigned CEATAEND_POS = 23;
        static constexpr unsigned CEATAEND_MASK = 0x00800000;
        static constexpr unsigned CEATAEND(unsigned value) { return (value << 23); }
    } STA;

    volatile union ICR_T // ICR: SDIO interrupt clear register (SDIO_ICR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICR_BIT_T
        {
            unsigned CCRCFAILC : 1; // bit 0 CCRCFAILC
            unsigned DCRCFAILC : 1; // bit 1 DCRCFAILC
            unsigned CTIMEOUTC : 1; // bit 2 CTIMEOUTC
            unsigned DTIMEOUTC : 1; // bit 3 DTIMEOUTC
            unsigned TXUNDERRC : 1; // bit 4 TXUNDERRC
            unsigned RXOVERRC  : 1; // bit 5 RXOVERRC
            unsigned CMDRENDC  : 1; // bit 6 CMDRENDC
            unsigned CMDSENTC  : 1; // bit 7 CMDSENTC
            unsigned DATAENDC  : 1; // bit 8 DATAENDC
            unsigned STBITERRC : 1; // bit 9 STBITERRC
            unsigned DBCKENDC  : 1; // bit 10 DBCKENDC
            unsigned           : 11; // bits 11..21 unused
            unsigned SDIOITC   : 1; // bit 22 SDIOITC
            unsigned CEATAENDC : 1; // bit 23 CEATAENDC
            unsigned           : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CCRCFAILC_POS = 0;
        static constexpr unsigned CCRCFAILC_MASK = 0x00000001;
        static constexpr unsigned CCRCFAILC(unsigned value) { return (value << 0); }
        static constexpr unsigned DCRCFAILC_POS = 1;
        static constexpr unsigned DCRCFAILC_MASK = 0x00000002;
        static constexpr unsigned DCRCFAILC(unsigned value) { return (value << 1); }
        static constexpr unsigned CTIMEOUTC_POS = 2;
        static constexpr unsigned CTIMEOUTC_MASK = 0x00000004;
        static constexpr unsigned CTIMEOUTC(unsigned value) { return (value << 2); }
        static constexpr unsigned DTIMEOUTC_POS = 3;
        static constexpr unsigned DTIMEOUTC_MASK = 0x00000008;
        static constexpr unsigned DTIMEOUTC(unsigned value) { return (value << 3); }
        static constexpr unsigned TXUNDERRC_POS = 4;
        static constexpr unsigned TXUNDERRC_MASK = 0x00000010;
        static constexpr unsigned TXUNDERRC(unsigned value) { return (value << 4); }
        static constexpr unsigned RXOVERRC_POS = 5;
        static constexpr unsigned RXOVERRC_MASK = 0x00000020;
        static constexpr unsigned RXOVERRC(unsigned value) { return (value << 5); }
        static constexpr unsigned CMDRENDC_POS = 6;
        static constexpr unsigned CMDRENDC_MASK = 0x00000040;
        static constexpr unsigned CMDRENDC(unsigned value) { return (value << 6); }
        static constexpr unsigned CMDSENTC_POS = 7;
        static constexpr unsigned CMDSENTC_MASK = 0x00000080;
        static constexpr unsigned CMDSENTC(unsigned value) { return (value << 7); }
        static constexpr unsigned DATAENDC_POS = 8;
        static constexpr unsigned DATAENDC_MASK = 0x00000100;
        static constexpr unsigned DATAENDC(unsigned value) { return (value << 8); }
        static constexpr unsigned STBITERRC_POS = 9;
        static constexpr unsigned STBITERRC_MASK = 0x00000200;
        static constexpr unsigned STBITERRC(unsigned value) { return (value << 9); }
        static constexpr unsigned DBCKENDC_POS = 10;
        static constexpr unsigned DBCKENDC_MASK = 0x00000400;
        static constexpr unsigned DBCKENDC(unsigned value) { return (value << 10); }
        static constexpr unsigned SDIOITC_POS = 22;
        static constexpr unsigned SDIOITC_MASK = 0x00400000;
        static constexpr unsigned SDIOITC(unsigned value) { return (value << 22); }
        static constexpr unsigned CEATAENDC_POS = 23;
        static constexpr unsigned CEATAENDC_MASK = 0x00800000;
        static constexpr unsigned CEATAENDC(unsigned value) { return (value << 23); }
    } ICR;

    volatile union MASK_T // MASK: SDIO mask register (SDIO_MASK) 
    {
        uint32_t reg;
        struct __attribute__((packed)) MASK_BIT_T
        {
            unsigned CCRCFAILIE : 1; // bit 0 CCRCFAILIE
            unsigned DCRCFAILIE : 1; // bit 1 DCRCFAILIE
            unsigned CTIMEOUTIE : 1; // bit 2 CTIMEOUTIE
            unsigned DTIMEOUTIE : 1; // bit 3 DTIMEOUTIE
            unsigned TXUNDERRIE : 1; // bit 4 TXUNDERRIE
            unsigned RXOVERRIE  : 1; // bit 5 RXOVERRIE
            unsigned CMDRENDIE  : 1; // bit 6 CMDRENDIE
            unsigned CMDSENTIE  : 1; // bit 7 CMDSENTIE
            unsigned DATAENDIE  : 1; // bit 8 DATAENDIE
            unsigned STBITERRIE : 1; // bit 9 STBITERRIE
            unsigned DBACKENDIE : 1; // bit 10 DBACKENDIE
            unsigned CMDACTIE   : 1; // bit 11 CMDACTIE
            unsigned TXACTIE    : 1; // bit 12 TXACTIE
            unsigned RXACTIE    : 1; // bit 13 RXACTIE
            unsigned TXFIFOHEIE : 1; // bit 14 TXFIFOHEIE
            unsigned RXFIFOHFIE : 1; // bit 15 RXFIFOHFIE
            unsigned TXFIFOFIE  : 1; // bit 16 TXFIFOFIE
            unsigned RXFIFOFIE  : 1; // bit 17 RXFIFOFIE
            unsigned TXFIFOEIE  : 1; // bit 18 TXFIFOEIE
            unsigned RXFIFOEIE  : 1; // bit 19 RXFIFOEIE
            unsigned TXDAVLIE   : 1; // bit 20 TXDAVLIE
            unsigned RXDAVLIE   : 1; // bit 21 RXDAVLIE
            unsigned SDIOITIE   : 1; // bit 22 SDIOITIE
            unsigned CEATENDIE  : 1; // bit 23 CEATENDIE
            unsigned            : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CCRCFAILIE_POS = 0;
        static constexpr unsigned CCRCFAILIE_MASK = 0x00000001;
        static constexpr unsigned CCRCFAILIE(unsigned value) { return (value << 0); }
        static constexpr unsigned DCRCFAILIE_POS = 1;
        static constexpr unsigned DCRCFAILIE_MASK = 0x00000002;
        static constexpr unsigned DCRCFAILIE(unsigned value) { return (value << 1); }
        static constexpr unsigned CTIMEOUTIE_POS = 2;
        static constexpr unsigned CTIMEOUTIE_MASK = 0x00000004;
        static constexpr unsigned CTIMEOUTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned DTIMEOUTIE_POS = 3;
        static constexpr unsigned DTIMEOUTIE_MASK = 0x00000008;
        static constexpr unsigned DTIMEOUTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TXUNDERRIE_POS = 4;
        static constexpr unsigned TXUNDERRIE_MASK = 0x00000010;
        static constexpr unsigned TXUNDERRIE(unsigned value) { return (value << 4); }
        static constexpr unsigned RXOVERRIE_POS = 5;
        static constexpr unsigned RXOVERRIE_MASK = 0x00000020;
        static constexpr unsigned RXOVERRIE(unsigned value) { return (value << 5); }
        static constexpr unsigned CMDRENDIE_POS = 6;
        static constexpr unsigned CMDRENDIE_MASK = 0x00000040;
        static constexpr unsigned CMDRENDIE(unsigned value) { return (value << 6); }
        static constexpr unsigned CMDSENTIE_POS = 7;
        static constexpr unsigned CMDSENTIE_MASK = 0x00000080;
        static constexpr unsigned CMDSENTIE(unsigned value) { return (value << 7); }
        static constexpr unsigned DATAENDIE_POS = 8;
        static constexpr unsigned DATAENDIE_MASK = 0x00000100;
        static constexpr unsigned DATAENDIE(unsigned value) { return (value << 8); }
        static constexpr unsigned STBITERRIE_POS = 9;
        static constexpr unsigned STBITERRIE_MASK = 0x00000200;
        static constexpr unsigned STBITERRIE(unsigned value) { return (value << 9); }
        static constexpr unsigned DBACKENDIE_POS = 10;
        static constexpr unsigned DBACKENDIE_MASK = 0x00000400;
        static constexpr unsigned DBACKENDIE(unsigned value) { return (value << 10); }
        static constexpr unsigned CMDACTIE_POS = 11;
        static constexpr unsigned CMDACTIE_MASK = 0x00000800;
        static constexpr unsigned CMDACTIE(unsigned value) { return (value << 11); }
        static constexpr unsigned TXACTIE_POS = 12;
        static constexpr unsigned TXACTIE_MASK = 0x00001000;
        static constexpr unsigned TXACTIE(unsigned value) { return (value << 12); }
        static constexpr unsigned RXACTIE_POS = 13;
        static constexpr unsigned RXACTIE_MASK = 0x00002000;
        static constexpr unsigned RXACTIE(unsigned value) { return (value << 13); }
        static constexpr unsigned TXFIFOHEIE_POS = 14;
        static constexpr unsigned TXFIFOHEIE_MASK = 0x00004000;
        static constexpr unsigned TXFIFOHEIE(unsigned value) { return (value << 14); }
        static constexpr unsigned RXFIFOHFIE_POS = 15;
        static constexpr unsigned RXFIFOHFIE_MASK = 0x00008000;
        static constexpr unsigned RXFIFOHFIE(unsigned value) { return (value << 15); }
        static constexpr unsigned TXFIFOFIE_POS = 16;
        static constexpr unsigned TXFIFOFIE_MASK = 0x00010000;
        static constexpr unsigned TXFIFOFIE(unsigned value) { return (value << 16); }
        static constexpr unsigned RXFIFOFIE_POS = 17;
        static constexpr unsigned RXFIFOFIE_MASK = 0x00020000;
        static constexpr unsigned RXFIFOFIE(unsigned value) { return (value << 17); }
        static constexpr unsigned TXFIFOEIE_POS = 18;
        static constexpr unsigned TXFIFOEIE_MASK = 0x00040000;
        static constexpr unsigned TXFIFOEIE(unsigned value) { return (value << 18); }
        static constexpr unsigned RXFIFOEIE_POS = 19;
        static constexpr unsigned RXFIFOEIE_MASK = 0x00080000;
        static constexpr unsigned RXFIFOEIE(unsigned value) { return (value << 19); }
        static constexpr unsigned TXDAVLIE_POS = 20;
        static constexpr unsigned TXDAVLIE_MASK = 0x00100000;
        static constexpr unsigned TXDAVLIE(unsigned value) { return (value << 20); }
        static constexpr unsigned RXDAVLIE_POS = 21;
        static constexpr unsigned RXDAVLIE_MASK = 0x00200000;
        static constexpr unsigned RXDAVLIE(unsigned value) { return (value << 21); }
        static constexpr unsigned SDIOITIE_POS = 22;
        static constexpr unsigned SDIOITIE_MASK = 0x00400000;
        static constexpr unsigned SDIOITIE(unsigned value) { return (value << 22); }
        static constexpr unsigned CEATENDIE_POS = 23;
        static constexpr unsigned CEATENDIE_MASK = 0x00800000;
        static constexpr unsigned CEATENDIE(unsigned value) { return (value << 23); }
    } MASK;

    uint8_t Reserved1[8];

    volatile union FIFOCNT_T // FIFOCNT: Bits 23:0 = FIFOCOUNT: Remaining number of words to be written to or read from the FIFO 
    {
        uint32_t reg;
        struct __attribute__((packed)) FIFOCNT_BIT_T
        {
            unsigned FIF0COUNT : 24; // bits 0..23 FIF0COUNT
            unsigned           : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned FIF0COUNT_POS = 0;
        static constexpr unsigned FIF0COUNT_MASK = 0x00ffffff;
        static constexpr unsigned FIF0COUNT(unsigned value) { return (value << 0); }
    } FIFOCNT;

    uint8_t Reserved2[52];

    volatile union FIFO_T // FIFO: bits 31:0 = FIFOData: Receive and transmit FIFO data 
    {
        uint32_t reg;
        struct __attribute__((packed)) FIFO_BIT_T
        {
            unsigned FIFOData : 32; // bits 0..31 FIFOData    
        } bit;
    
        static constexpr unsigned FIFOData_POS = 0;
        static constexpr unsigned FIFOData_MASK = 0xffffffff;
        static constexpr unsigned FIFOData(unsigned value) { return (value << 0); }
    } FIFO;

}; // struct SDIO_T

static_assert(sizeof(SDIO_T) == SDIO_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp