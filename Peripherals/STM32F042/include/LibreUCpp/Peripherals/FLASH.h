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
            unsigned LATENCY : 3; // bits 0..2 LATENCY
            unsigned         : 1; // bit 3 unused
            unsigned PRFTBE  : 1; // bit 4 PRFTBE
            unsigned PRFTBS  : 1; // bit 5 PRFTBS
            unsigned         : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned LATENCY_POS = 0;
        static constexpr unsigned LATENCY_MASK = 0x00000007;
        static constexpr unsigned LATENCY(unsigned value) { return (value << 0); }
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
            unsigned FKEYR : 32; // bits 0..31 Flash Key    
        } bit;
    
        static constexpr unsigned FKEYR_POS = 0;
        static constexpr unsigned FKEYR_MASK = 0xffffffff;
        static constexpr unsigned FKEYR(unsigned value) { return (value << 0); }
    } KEYR;

    volatile union OPTKEYR_T // OPTKEYR: Flash option key register 
    {
        uint32_t reg;
        struct __attribute__((packed)) OPTKEYR_BIT_T
        {
            unsigned OPTKEYR : 32; // bits 0..31 Option byte key    
        } bit;
    
        static constexpr unsigned OPTKEYR_POS = 0;
        static constexpr unsigned OPTKEYR_MASK = 0xffffffff;
        static constexpr unsigned OPTKEYR(unsigned value) { return (value << 0); }
    } OPTKEYR;

    volatile union SR_T // SR: Flash status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned BSY   : 1; // bit 0 Busy
            unsigned       : 1; // bit 1 unused
            unsigned PGERR : 1; // bit 2 Programming error
            unsigned       : 1; // bit 3 unused
            unsigned WRPRT : 1; // bit 4 Write protection error
            unsigned EOP   : 1; // bit 5 End of operation
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned BSY_POS = 0;
        static constexpr unsigned BSY_MASK = 0x00000001;
        static constexpr unsigned BSY(unsigned value) { return (value << 0); }
        static constexpr unsigned PGERR_POS = 2;
        static constexpr unsigned PGERR_MASK = 0x00000004;
        static constexpr unsigned PGERR(unsigned value) { return (value << 2); }
        static constexpr unsigned WRPRT_POS = 4;
        static constexpr unsigned WRPRT_MASK = 0x00000010;
        static constexpr unsigned WRPRT(unsigned value) { return (value << 4); }
        static constexpr unsigned EOP_POS = 5;
        static constexpr unsigned EOP_MASK = 0x00000020;
        static constexpr unsigned EOP(unsigned value) { return (value << 5); }
    } SR;

    volatile union CR_T // CR: Flash control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned PG            : 1; // bit 0 Programming
            unsigned PER           : 1; // bit 1 Page erase
            unsigned MER           : 1; // bit 2 Mass erase
            unsigned               : 1; // bit 3 unused
            unsigned OPTPG         : 1; // bit 4 Option byte programming
            unsigned OPTER         : 1; // bit 5 Option byte erase
            unsigned STRT          : 1; // bit 6 Start
            unsigned LOCK          : 1; // bit 7 Lock
            unsigned               : 1; // bit 8 unused
            unsigned OPTWRE        : 1; // bit 9 Option bytes write enable
            unsigned ERRIE         : 1; // bit 10 Error interrupt enable
            unsigned               : 1; // bit 11 unused
            unsigned EOPIE         : 1; // bit 12 End of operation interrupt enable
            unsigned FORCE_OPTLOAD : 1; // bit 13 Force option byte loading
            unsigned               : 18; // bits 14..31 unused    
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
        static constexpr unsigned FORCE_OPTLOAD_POS = 13;
        static constexpr unsigned FORCE_OPTLOAD_MASK = 0x00002000;
        static constexpr unsigned FORCE_OPTLOAD(unsigned value) { return (value << 13); }
    } CR;

    volatile union AR_T // AR: Flash address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AR_BIT_T
        {
            unsigned FAR : 32; // bits 0..31 Flash address    
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
            unsigned OPTERR       : 1; // bit 0 Option byte error
            unsigned LEVEL1_PROT  : 1; // bit 1 Level 1 protection status
            unsigned LEVEL2_PROT  : 1; // bit 2 Level 2 protection status
            unsigned              : 5; // bits 3..7 unused
            unsigned WDG_SW       : 1; // bit 8 WDG_SW
            unsigned nRST_STOP    : 1; // bit 9 nRST_STOP
            unsigned nRST_STDBY   : 1; // bit 10 nRST_STDBY
            unsigned              : 1; // bit 11 unused
            unsigned BOOT1        : 1; // bit 12 BOOT1
            unsigned VDDA_MONITOR : 1; // bit 13 VDDA_MONITOR
            unsigned              : 2; // bits 14..15 unused
            unsigned Data0        : 8; // bits 16..23 Data0
            unsigned Data1        : 8; // bits 24..31 Data1    
        } bit;
    
        static constexpr unsigned OPTERR_POS = 0;
        static constexpr unsigned OPTERR_MASK = 0x00000001;
        static constexpr unsigned OPTERR(unsigned value) { return (value << 0); }
        static constexpr unsigned LEVEL1_PROT_POS = 1;
        static constexpr unsigned LEVEL1_PROT_MASK = 0x00000002;
        static constexpr unsigned LEVEL1_PROT(unsigned value) { return (value << 1); }
        static constexpr unsigned LEVEL2_PROT_POS = 2;
        static constexpr unsigned LEVEL2_PROT_MASK = 0x00000004;
        static constexpr unsigned LEVEL2_PROT(unsigned value) { return (value << 2); }
        static constexpr unsigned WDG_SW_POS = 8;
        static constexpr unsigned WDG_SW_MASK = 0x00000100;
        static constexpr unsigned WDG_SW(unsigned value) { return (value << 8); }
        static constexpr unsigned nRST_STOP_POS = 9;
        static constexpr unsigned nRST_STOP_MASK = 0x00000200;
        static constexpr unsigned nRST_STOP(unsigned value) { return (value << 9); }
        static constexpr unsigned nRST_STDBY_POS = 10;
        static constexpr unsigned nRST_STDBY_MASK = 0x00000400;
        static constexpr unsigned nRST_STDBY(unsigned value) { return (value << 10); }
        static constexpr unsigned BOOT1_POS = 12;
        static constexpr unsigned BOOT1_MASK = 0x00001000;
        static constexpr unsigned BOOT1(unsigned value) { return (value << 12); }
        static constexpr unsigned VDDA_MONITOR_POS = 13;
        static constexpr unsigned VDDA_MONITOR_MASK = 0x00002000;
        static constexpr unsigned VDDA_MONITOR(unsigned value) { return (value << 13); }
        static constexpr unsigned Data0_POS = 16;
        static constexpr unsigned Data0_MASK = 0x00ff0000;
        static constexpr unsigned Data0(unsigned value) { return (value << 16); }
        static constexpr unsigned Data1_POS = 24;
        static constexpr unsigned Data1_MASK = 0xff000000;
        static constexpr unsigned Data1(unsigned value) { return (value << 24); }
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

}; // struct Flash_T

static_assert(sizeof(FLASH_T) == FLASH_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp