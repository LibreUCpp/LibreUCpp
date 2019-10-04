#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) FLASH_T
{
    static constexpr size_t INSTANCE_SIZE = 24;
    static constexpr size_t PADDED_INSTANCE_SIZE = 24;
    static constexpr intptr_t BASE_ADDRESS = 0x40023c00;

    static constexpr intptr_t ADDR_OFFSET_ACR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_KEYR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OPTKEYR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_OPTCR = 0x14;

    volatile union ACR_T // ACR: Flash access control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ACR_BIT_T
        {
            unsigned LATENCY : 3; // bits 0..2 Latency
            unsigned         : 5; // bits 3..7 unused
            unsigned PRFTEN  : 1; // bit 8 Prefetch enable
            unsigned ICEN    : 1; // bit 9 Instruction cache enable
            unsigned DCEN    : 1; // bit 10 Data cache enable
            unsigned ICRST   : 1; // bit 11 Instruction cache reset
            unsigned DCRST   : 1; // bit 12 Data cache reset
            unsigned         : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned LATENCY_POS = 0;
        static constexpr unsigned LATENCY_MASK = 0x00000007;
        static constexpr unsigned LATENCY(unsigned value) { return (value << 0); }
        static constexpr unsigned PRFTEN_POS = 8;
        static constexpr unsigned PRFTEN_MASK = 0x00000100;
        static constexpr unsigned PRFTEN(unsigned value) { return (value << 8); }
        static constexpr unsigned ICEN_POS = 9;
        static constexpr unsigned ICEN_MASK = 0x00000200;
        static constexpr unsigned ICEN(unsigned value) { return (value << 9); }
        static constexpr unsigned DCEN_POS = 10;
        static constexpr unsigned DCEN_MASK = 0x00000400;
        static constexpr unsigned DCEN(unsigned value) { return (value << 10); }
        static constexpr unsigned ICRST_POS = 11;
        static constexpr unsigned ICRST_MASK = 0x00000800;
        static constexpr unsigned ICRST(unsigned value) { return (value << 11); }
        static constexpr unsigned DCRST_POS = 12;
        static constexpr unsigned DCRST_MASK = 0x00001000;
        static constexpr unsigned DCRST(unsigned value) { return (value << 12); }
    } ACR;

    volatile union KEYR_T // KEYR: Flash key register 
    {
        uint32_t reg;
        struct __attribute__((packed)) KEYR_BIT_T
        {
            unsigned KEY : 32; // bits 0..31 FPEC key    
        } bit;
    
        static constexpr unsigned KEY_POS = 0;
        static constexpr unsigned KEY_MASK = 0xffffffff;
        static constexpr unsigned KEY(unsigned value) { return (value << 0); }
    } KEYR;

    volatile union OPTKEYR_T // OPTKEYR: Flash option key register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OPTKEYR_BIT_T
        {
            unsigned OPTKEY : 32; // bits 0..31 Option byte key    
        } bit;
    
        static constexpr unsigned OPTKEY_POS = 0;
        static constexpr unsigned OPTKEY_MASK = 0xffffffff;
        static constexpr unsigned OPTKEY(unsigned value) { return (value << 0); }
    } OPTKEYR;

    volatile union SR_T // SR: Status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned EOP    : 1; // bit 0 End of operation
            unsigned OPERR  : 1; // bit 1 Operation error
            unsigned        : 2; // bits 2..3 unused
            unsigned WRPERR : 1; // bit 4 Write protection error
            unsigned PGAERR : 1; // bit 5 Programming alignment error
            unsigned PGPERR : 1; // bit 6 Programming parallelism error
            unsigned PGSERR : 1; // bit 7 Programming sequence error
            unsigned RDERR  : 1; // bit 8 Read Protection Error
            unsigned        : 7; // bits 9..15 unused
            unsigned BSY    : 1; // bit 16 Busy
            unsigned        : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned EOP_POS = 0;
        static constexpr unsigned EOP_MASK = 0x00000001;
        static constexpr unsigned EOP(unsigned value) { return (value << 0); }
        static constexpr unsigned OPERR_POS = 1;
        static constexpr unsigned OPERR_MASK = 0x00000002;
        static constexpr unsigned OPERR(unsigned value) { return (value << 1); }
        static constexpr unsigned WRPERR_POS = 4;
        static constexpr unsigned WRPERR_MASK = 0x00000010;
        static constexpr unsigned WRPERR(unsigned value) { return (value << 4); }
        static constexpr unsigned PGAERR_POS = 5;
        static constexpr unsigned PGAERR_MASK = 0x00000020;
        static constexpr unsigned PGAERR(unsigned value) { return (value << 5); }
        static constexpr unsigned PGPERR_POS = 6;
        static constexpr unsigned PGPERR_MASK = 0x00000040;
        static constexpr unsigned PGPERR(unsigned value) { return (value << 6); }
        static constexpr unsigned PGSERR_POS = 7;
        static constexpr unsigned PGSERR_MASK = 0x00000080;
        static constexpr unsigned PGSERR(unsigned value) { return (value << 7); }
        static constexpr unsigned RDERR_POS = 8;
        static constexpr unsigned RDERR_MASK = 0x00000100;
        static constexpr unsigned RDERR(unsigned value) { return (value << 8); }
        static constexpr unsigned BSY_POS = 16;
        static constexpr unsigned BSY_MASK = 0x00010000;
        static constexpr unsigned BSY(unsigned value) { return (value << 16); }
    } SR;

    volatile union CR_T // CR: Control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned PG    : 1; // bit 0 Programming
            unsigned SER   : 1; // bit 1 Sector Erase
            unsigned MER   : 1; // bit 2 Mass Erase of sectors 0 to 11
            unsigned SNB   : 4; // bits 3..6 Sector number
            unsigned       : 1; // bit 7 unused
            unsigned PSIZE : 2; // bits 8..9 Program size
            unsigned       : 6; // bits 10..15 unused
            unsigned STRT  : 1; // bit 16 Start
            unsigned       : 7; // bits 17..23 unused
            unsigned EOPIE : 1; // bit 24 End of operation interrupt enable
            unsigned ERRIE : 1; // bit 25 Error interrupt enable
            unsigned       : 5; // bits 26..30 unused
            unsigned LOCK  : 1; // bit 31 Lock    
        } bit;
    
        static constexpr unsigned PG_POS = 0;
        static constexpr unsigned PG_MASK = 0x00000001;
        static constexpr unsigned PG(unsigned value) { return (value << 0); }
        static constexpr unsigned SER_POS = 1;
        static constexpr unsigned SER_MASK = 0x00000002;
        static constexpr unsigned SER(unsigned value) { return (value << 1); }
        static constexpr unsigned MER_POS = 2;
        static constexpr unsigned MER_MASK = 0x00000004;
        static constexpr unsigned MER(unsigned value) { return (value << 2); }
        static constexpr unsigned SNB_POS = 3;
        static constexpr unsigned SNB_MASK = 0x00000078;
        static constexpr unsigned SNB(unsigned value) { return (value << 3); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned STRT_POS = 16;
        static constexpr unsigned STRT_MASK = 0x00010000;
        static constexpr unsigned STRT(unsigned value) { return (value << 16); }
        static constexpr unsigned EOPIE_POS = 24;
        static constexpr unsigned EOPIE_MASK = 0x01000000;
        static constexpr unsigned EOPIE(unsigned value) { return (value << 24); }
        static constexpr unsigned ERRIE_POS = 25;
        static constexpr unsigned ERRIE_MASK = 0x02000000;
        static constexpr unsigned ERRIE(unsigned value) { return (value << 25); }
        static constexpr unsigned LOCK_POS = 31;
        static constexpr unsigned LOCK_MASK = 0x80000000;
        static constexpr unsigned LOCK(unsigned value) { return (value << 31); }
    } CR;

    volatile union OPTCR_T // OPTCR: Flash option control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OPTCR_BIT_T
        {
            unsigned OPTLOCK    : 1; // bit 0 Option lock
            unsigned OPTSTRT    : 1; // bit 1 Option start
            unsigned BOR_LEV    : 2; // bits 2..3 BOR reset Level
            unsigned            : 1; // bit 4 unused
            unsigned WDG_SW     : 1; // bit 5 WDG_SW User option bytes
            unsigned nRST_STOP  : 1; // bit 6 nRST_STOP User option bytes
            unsigned nRST_STDBY : 1; // bit 7 nRST_STDBY User option bytes
            unsigned RDP        : 8; // bits 8..15 Read protect
            unsigned nWRP       : 8; // bits 16..23 Not write protect
            unsigned            : 7; // bits 24..30 unused
            unsigned SPRMOD     : 1; // bit 31 Selection of Protection Mode of nWPRi bits    
        } bit;
    
        static constexpr unsigned OPTLOCK_POS = 0;
        static constexpr unsigned OPTLOCK_MASK = 0x00000001;
        static constexpr unsigned OPTLOCK(unsigned value) { return (value << 0); }
        static constexpr unsigned OPTSTRT_POS = 1;
        static constexpr unsigned OPTSTRT_MASK = 0x00000002;
        static constexpr unsigned OPTSTRT(unsigned value) { return (value << 1); }
        static constexpr unsigned BOR_LEV_POS = 2;
        static constexpr unsigned BOR_LEV_MASK = 0x0000000c;
        static constexpr unsigned BOR_LEV(unsigned value) { return (value << 2); }
        static constexpr unsigned WDG_SW_POS = 5;
        static constexpr unsigned WDG_SW_MASK = 0x00000020;
        static constexpr unsigned WDG_SW(unsigned value) { return (value << 5); }
        static constexpr unsigned nRST_STOP_POS = 6;
        static constexpr unsigned nRST_STOP_MASK = 0x00000040;
        static constexpr unsigned nRST_STOP(unsigned value) { return (value << 6); }
        static constexpr unsigned nRST_STDBY_POS = 7;
        static constexpr unsigned nRST_STDBY_MASK = 0x00000080;
        static constexpr unsigned nRST_STDBY(unsigned value) { return (value << 7); }
        static constexpr unsigned RDP_POS = 8;
        static constexpr unsigned RDP_MASK = 0x0000ff00;
        static constexpr unsigned RDP(unsigned value) { return (value << 8); }
        static constexpr unsigned nWRP_POS = 16;
        static constexpr unsigned nWRP_MASK = 0x00ff0000;
        static constexpr unsigned nWRP(unsigned value) { return (value << 16); }
        static constexpr unsigned SPRMOD_POS = 31;
        static constexpr unsigned SPRMOD_MASK = 0x80000000;
        static constexpr unsigned SPRMOD(unsigned value) { return (value << 31); }
    } OPTCR;

}; // struct FLASH_T

static_assert(sizeof(FLASH_T) == FLASH_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp