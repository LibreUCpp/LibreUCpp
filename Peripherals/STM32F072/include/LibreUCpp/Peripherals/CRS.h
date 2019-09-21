#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CRS_T
{
    static constexpr size_t INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0x40006c00;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CFGR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_ISR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_ICR = 0x0c;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned SYNCOKIE   : 1; // bit 0 SYNC event OK interrupt enable
            unsigned SYNCWARNIE : 1; // bit 1 SYNC warning interrupt enable
            unsigned ERRIE      : 1; // bit 2 Synchronization or trimming error interrupt enable
            unsigned ESYNCIE    : 1; // bit 3 Expected SYNC interrupt enable
            unsigned            : 1; // bit 4 unused
            unsigned CEN        : 1; // bit 5 Frequency error counter enable
            unsigned AUTOTRIMEN : 1; // bit 6 Automatic trimming enable
            unsigned SWSYNC     : 1; // bit 7 Generate software SYNC event
            unsigned TRIM       : 6; // bits 8..13 HSI48 oscillator smooth trimming
            unsigned            : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned SYNCOKIE_POS = 0;
        static constexpr unsigned SYNCOKIE_MASK = 0x00000001;
        static constexpr unsigned SYNCOKIE(unsigned value) { return (value << 0); }
        static constexpr unsigned SYNCWARNIE_POS = 1;
        static constexpr unsigned SYNCWARNIE_MASK = 0x00000002;
        static constexpr unsigned SYNCWARNIE(unsigned value) { return (value << 1); }
        static constexpr unsigned ERRIE_POS = 2;
        static constexpr unsigned ERRIE_MASK = 0x00000004;
        static constexpr unsigned ERRIE(unsigned value) { return (value << 2); }
        static constexpr unsigned ESYNCIE_POS = 3;
        static constexpr unsigned ESYNCIE_MASK = 0x00000008;
        static constexpr unsigned ESYNCIE(unsigned value) { return (value << 3); }
        static constexpr unsigned CEN_POS = 5;
        static constexpr unsigned CEN_MASK = 0x00000020;
        static constexpr unsigned CEN(unsigned value) { return (value << 5); }
        static constexpr unsigned AUTOTRIMEN_POS = 6;
        static constexpr unsigned AUTOTRIMEN_MASK = 0x00000040;
        static constexpr unsigned AUTOTRIMEN(unsigned value) { return (value << 6); }
        static constexpr unsigned SWSYNC_POS = 7;
        static constexpr unsigned SWSYNC_MASK = 0x00000080;
        static constexpr unsigned SWSYNC(unsigned value) { return (value << 7); }
        static constexpr unsigned TRIM_POS = 8;
        static constexpr unsigned TRIM_MASK = 0x00003f00;
        static constexpr unsigned TRIM(unsigned value) { return (value << 8); }
    } CR;

    volatile union CFGR_T // CFGR: configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFGR_BIT_T
        {
            unsigned RELOAD  : 16; // bits 0..15 Counter reload value
            unsigned FELIM   : 8; // bits 16..23 Frequency error limit
            unsigned SYNCDIV : 3; // bits 24..26 SYNC divider
            unsigned         : 1; // bit 27 unused
            unsigned SYNCSRC : 2; // bits 28..29 SYNC signal source selection
            unsigned         : 1; // bit 30 unused
            unsigned SYNCPOL : 1; // bit 31 SYNC polarity selection    
        } bit;
    
        static constexpr unsigned RELOAD_POS = 0;
        static constexpr unsigned RELOAD_MASK = 0x0000ffff;
        static constexpr unsigned RELOAD(unsigned value) { return (value << 0); }
        static constexpr unsigned FELIM_POS = 16;
        static constexpr unsigned FELIM_MASK = 0x00ff0000;
        static constexpr unsigned FELIM(unsigned value) { return (value << 16); }
        static constexpr unsigned SYNCDIV_POS = 24;
        static constexpr unsigned SYNCDIV_MASK = 0x07000000;
        static constexpr unsigned SYNCDIV(unsigned value) { return (value << 24); }
        static constexpr unsigned SYNCSRC_POS = 28;
        static constexpr unsigned SYNCSRC_MASK = 0x30000000;
        static constexpr unsigned SYNCSRC(unsigned value) { return (value << 28); }
        static constexpr unsigned SYNCPOL_POS = 31;
        static constexpr unsigned SYNCPOL_MASK = 0x80000000;
        static constexpr unsigned SYNCPOL(unsigned value) { return (value << 31); }
    } CFGR;

    volatile union ISR_T // ISR: interrupt and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned SYNCOKF   : 1; // bit 0 SYNC event OK flag
            unsigned SYNCWARNF : 1; // bit 1 SYNC warning flag
            unsigned ERRF      : 1; // bit 2 Error flag
            unsigned ESYNCF    : 1; // bit 3 Expected SYNC flag
            unsigned           : 4; // bits 4..7 unused
            unsigned SYNCERR   : 1; // bit 8 SYNC error
            unsigned SYNCMISS  : 1; // bit 9 SYNC missed
            unsigned TRIMOVF   : 1; // bit 10 Trimming overflow or underflow
            unsigned           : 4; // bits 11..14 unused
            unsigned FEDIR     : 1; // bit 15 Frequency error direction
            unsigned FECAP     : 16; // bits 16..31 Frequency error capture    
        } bit;
    
        static constexpr unsigned SYNCOKF_POS = 0;
        static constexpr unsigned SYNCOKF_MASK = 0x00000001;
        static constexpr unsigned SYNCOKF(unsigned value) { return (value << 0); }
        static constexpr unsigned SYNCWARNF_POS = 1;
        static constexpr unsigned SYNCWARNF_MASK = 0x00000002;
        static constexpr unsigned SYNCWARNF(unsigned value) { return (value << 1); }
        static constexpr unsigned ERRF_POS = 2;
        static constexpr unsigned ERRF_MASK = 0x00000004;
        static constexpr unsigned ERRF(unsigned value) { return (value << 2); }
        static constexpr unsigned ESYNCF_POS = 3;
        static constexpr unsigned ESYNCF_MASK = 0x00000008;
        static constexpr unsigned ESYNCF(unsigned value) { return (value << 3); }
        static constexpr unsigned SYNCERR_POS = 8;
        static constexpr unsigned SYNCERR_MASK = 0x00000100;
        static constexpr unsigned SYNCERR(unsigned value) { return (value << 8); }
        static constexpr unsigned SYNCMISS_POS = 9;
        static constexpr unsigned SYNCMISS_MASK = 0x00000200;
        static constexpr unsigned SYNCMISS(unsigned value) { return (value << 9); }
        static constexpr unsigned TRIMOVF_POS = 10;
        static constexpr unsigned TRIMOVF_MASK = 0x00000400;
        static constexpr unsigned TRIMOVF(unsigned value) { return (value << 10); }
        static constexpr unsigned FEDIR_POS = 15;
        static constexpr unsigned FEDIR_MASK = 0x00008000;
        static constexpr unsigned FEDIR(unsigned value) { return (value << 15); }
        static constexpr unsigned FECAP_POS = 16;
        static constexpr unsigned FECAP_MASK = 0xffff0000;
        static constexpr unsigned FECAP(unsigned value) { return (value << 16); }
    } ISR;

    volatile union ICR_T // ICR: interrupt flag clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICR_BIT_T
        {
            unsigned SYNCOKC   : 1; // bit 0 SYNC event OK clear flag
            unsigned SYNCWARNC : 1; // bit 1 SYNC warning clear flag
            unsigned ERRC      : 1; // bit 2 Error clear flag
            unsigned ESYNCC    : 1; // bit 3 Expected SYNC clear flag
            unsigned           : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned SYNCOKC_POS = 0;
        static constexpr unsigned SYNCOKC_MASK = 0x00000001;
        static constexpr unsigned SYNCOKC(unsigned value) { return (value << 0); }
        static constexpr unsigned SYNCWARNC_POS = 1;
        static constexpr unsigned SYNCWARNC_MASK = 0x00000002;
        static constexpr unsigned SYNCWARNC(unsigned value) { return (value << 1); }
        static constexpr unsigned ERRC_POS = 2;
        static constexpr unsigned ERRC_MASK = 0x00000004;
        static constexpr unsigned ERRC(unsigned value) { return (value << 2); }
        static constexpr unsigned ESYNCC_POS = 3;
        static constexpr unsigned ESYNCC_MASK = 0x00000008;
        static constexpr unsigned ESYNCC(unsigned value) { return (value << 3); }
    } ICR;

}; // struct CRS_T

static_assert(sizeof(CRS_T) == CRS_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp