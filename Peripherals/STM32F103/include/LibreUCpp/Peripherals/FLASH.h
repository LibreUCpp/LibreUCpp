#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) FLASH_T
{
    static constexpr size_t INSTANCE_SIZE = 36;
    static constexpr size_t PADDED_INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS = 0x40022000;

    static constexpr intptr_t ADDR_OFFSET_ACR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_KEYR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_OPTKEYR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_AR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_OBR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_WRPR = 0x20;

    volatile union ACR_T // ACR: Flash access control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ACR_BIT_T
        {
            unsigned LATENCY : 3; // bits 0..2 Latency
            unsigned HLFCYA  : 1; // bit 3 Flash half cycle access enable
            unsigned PRFTBE  : 1; // bit 4 Prefetch buffer enable
            unsigned PRFTBS  : 1; // bit 5 Prefetch buffer status
            unsigned         : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned LATENCY_POS = 0;
        static constexpr unsigned LATENCY_MASK = 0x00000007;
        static constexpr unsigned LATENCY(unsigned value) { return (value << 0); }
        static constexpr unsigned HLFCYA_POS = 3;
        static constexpr unsigned HLFCYA_MASK = 0x00000008;
        static constexpr unsigned HLFCYA(unsigned value) { return (value << 3); }
        static constexpr unsigned PRFTBE_POS = 4;
        static constexpr unsigned PRFTBE_MASK = 0x00000010;
        static constexpr unsigned PRFTBE(unsigned value) { return (value << 4); }
        static constexpr unsigned PRFTBS_POS = 5;
        static constexpr unsigned PRFTBS_MASK = 0x00000020;
        static constexpr unsigned PRFTBS(unsigned value) { return (value << 5); }
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
            unsigned BSY      : 1; // bit 0 Busy
            unsigned          : 1; // bit 1 unused
            unsigned PGERR    : 1; // bit 2 Programming error
            unsigned          : 1; // bit 3 unused
            unsigned WRPRTERR : 1; // bit 4 Write protection error
            unsigned EOP      : 1; // bit 5 End of operation
            unsigned          : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned BSY_POS = 0;
        static constexpr unsigned BSY_MASK = 0x00000001;
        static constexpr unsigned BSY(unsigned value) { return (value << 0); }
        static constexpr unsigned PGERR_POS = 2;
        static constexpr unsigned PGERR_MASK = 0x00000004;
        static constexpr unsigned PGERR(unsigned value) { return (value << 2); }
        static constexpr unsigned WRPRTERR_POS = 4;
        static constexpr unsigned WRPRTERR_MASK = 0x00000010;
        static constexpr unsigned WRPRTERR(unsigned value) { return (value << 4); }
        static constexpr unsigned EOP_POS = 5;
        static constexpr unsigned EOP_MASK = 0x00000020;
        static constexpr unsigned EOP(unsigned value) { return (value << 5); }
    } SR;

    volatile union CR_T // CR: Control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned PG     : 1; // bit 0 Programming
            unsigned PER    : 1; // bit 1 Page Erase
            unsigned MER    : 1; // bit 2 Mass Erase
            unsigned        : 1; // bit 3 unused
            unsigned OPTPG  : 1; // bit 4 Option byte programming
            unsigned OPTER  : 1; // bit 5 Option byte erase
            unsigned STRT   : 1; // bit 6 Start
            unsigned LOCK   : 1; // bit 7 Lock
            unsigned        : 1; // bit 8 unused
            unsigned OPTWRE : 1; // bit 9 Option bytes write enable
            unsigned ERRIE  : 1; // bit 10 Error interrupt enable
            unsigned        : 1; // bit 11 unused
            unsigned EOPIE  : 1; // bit 12 End of operation interrupt enable
            unsigned        : 19; // bits 13..31 unused    
        } bit;
    
        static constexpr unsigned PG_POS = 0;
        static constexpr unsigned PG_MASK = 0x00000001;
        static constexpr unsigned PG(unsigned value) { return (value << 0); }
        static constexpr unsigned PER_POS = 1;
        static constexpr unsigned PER_MASK = 0x00000002;
        static constexpr unsigned PER(unsigned value) { return (value << 1); }
        static constexpr unsigned MER_POS = 2;
        static constexpr unsigned MER_MASK = 0x00000004;
        static constexpr unsigned MER(unsigned value) { return (value << 2); }
        static constexpr unsigned OPTPG_POS = 4;
        static constexpr unsigned OPTPG_MASK = 0x00000010;
        static constexpr unsigned OPTPG(unsigned value) { return (value << 4); }
        static constexpr unsigned OPTER_POS = 5;
        static constexpr unsigned OPTER_MASK = 0x00000020;
        static constexpr unsigned OPTER(unsigned value) { return (value << 5); }
        static constexpr unsigned STRT_POS = 6;
        static constexpr unsigned STRT_MASK = 0x00000040;
        static constexpr unsigned STRT(unsigned value) { return (value << 6); }
        static constexpr unsigned LOCK_POS = 7;
        static constexpr unsigned LOCK_MASK = 0x00000080;
        static constexpr unsigned LOCK(unsigned value) { return (value << 7); }
        static constexpr unsigned OPTWRE_POS = 9;
        static constexpr unsigned OPTWRE_MASK = 0x00000200;
        static constexpr unsigned OPTWRE(unsigned value) { return (value << 9); }
        static constexpr unsigned ERRIE_POS = 10;
        static constexpr unsigned ERRIE_MASK = 0x00000400;
        static constexpr unsigned ERRIE(unsigned value) { return (value << 10); }
        static constexpr unsigned EOPIE_POS = 12;
        static constexpr unsigned EOPIE_MASK = 0x00001000;
        static constexpr unsigned EOPIE(unsigned value) { return (value << 12); }
    } CR;

    volatile union AR_T // AR: Flash address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AR_BIT_T
        {
            unsigned FAR : 32; // bits 0..31 Flash Address    
        } bit;
    
        static constexpr unsigned FAR_POS = 0;
        static constexpr unsigned FAR_MASK = 0xffffffff;
        static constexpr unsigned FAR(unsigned value) { return (value << 0); }
    } AR;

    uint8_t Reserved1[4];

    volatile union OBR_T // OBR: Option byte register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OBR_BIT_T
        {
            unsigned OPTERR     : 1; // bit 0 Option byte error
            unsigned RDPRT      : 1; // bit 1 Read protection
            unsigned WDG_SW     : 1; // bit 2 WDG_SW
            unsigned nRST_STOP  : 1; // bit 3 nRST_STOP
            unsigned nRST_STDBY : 1; // bit 4 nRST_STDBY
            unsigned            : 5; // bits 5..9 unused
            unsigned Data0      : 8; // bits 10..17 Data0
            unsigned Data1      : 8; // bits 18..25 Data1
            unsigned            : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned OPTERR_POS = 0;
        static constexpr unsigned OPTERR_MASK = 0x00000001;
        static constexpr unsigned OPTERR(unsigned value) { return (value << 0); }
        static constexpr unsigned RDPRT_POS = 1;
        static constexpr unsigned RDPRT_MASK = 0x00000002;
        static constexpr unsigned RDPRT(unsigned value) { return (value << 1); }
        static constexpr unsigned WDG_SW_POS = 2;
        static constexpr unsigned WDG_SW_MASK = 0x00000004;
        static constexpr unsigned WDG_SW(unsigned value) { return (value << 2); }
        static constexpr unsigned nRST_STOP_POS = 3;
        static constexpr unsigned nRST_STOP_MASK = 0x00000008;
        static constexpr unsigned nRST_STOP(unsigned value) { return (value << 3); }
        static constexpr unsigned nRST_STDBY_POS = 4;
        static constexpr unsigned nRST_STDBY_MASK = 0x00000010;
        static constexpr unsigned nRST_STDBY(unsigned value) { return (value << 4); }
        static constexpr unsigned Data0_POS = 10;
        static constexpr unsigned Data0_MASK = 0x0003fc00;
        static constexpr unsigned Data0(unsigned value) { return (value << 10); }
        static constexpr unsigned Data1_POS = 18;
        static constexpr unsigned Data1_MASK = 0x03fc0000;
        static constexpr unsigned Data1(unsigned value) { return (value << 18); }
    } OBR;

    volatile union WRPR_T // WRPR: Write protection register 
    {
        uint32_t reg;
        struct __attribute__((packed)) WRPR_BIT_T
        {
            unsigned WRP : 32; // bits 0..31 Write protect    
        } bit;
    
        static constexpr unsigned WRP_POS = 0;
        static constexpr unsigned WRP_MASK = 0xffffffff;
        static constexpr unsigned WRP(unsigned value) { return (value << 0); }
    } WRPR;

}; // struct FLASH_T

static_assert(sizeof(FLASH_T) == FLASH_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp