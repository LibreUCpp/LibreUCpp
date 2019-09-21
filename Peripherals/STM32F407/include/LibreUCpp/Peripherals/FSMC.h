#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) FSMC_T
{
    static constexpr size_t INSTANCE_SIZE = 288;
    static constexpr intptr_t BASE_ADDRESS = 0xa0000000;

    static constexpr intptr_t ADDR_OFFSET_BCR1 = 0x00;
    static constexpr intptr_t ADDR_OFFSET_BTR1 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_BCR2 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_BTR2 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_BCR3 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_BTR3 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_BCR4 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_BTR4 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_PCR2 = 0x60;
    static constexpr intptr_t ADDR_OFFSET_SR2 = 0x64;
    static constexpr intptr_t ADDR_OFFSET_PMEM2 = 0x68;
    static constexpr intptr_t ADDR_OFFSET_PATT2 = 0x6c;
    static constexpr intptr_t ADDR_OFFSET_ECCR2 = 0x74;
    static constexpr intptr_t ADDR_OFFSET_PCR3 = 0x80;
    static constexpr intptr_t ADDR_OFFSET_SR3 = 0x84;
    static constexpr intptr_t ADDR_OFFSET_PMEM3 = 0x88;
    static constexpr intptr_t ADDR_OFFSET_PATT3 = 0x8c;
    static constexpr intptr_t ADDR_OFFSET_ECCR3 = 0x94;
    static constexpr intptr_t ADDR_OFFSET_PCR4 = 0xa0;
    static constexpr intptr_t ADDR_OFFSET_SR4 = 0xa4;
    static constexpr intptr_t ADDR_OFFSET_PMEM4 = 0xa8;
    static constexpr intptr_t ADDR_OFFSET_PATT4 = 0xac;
    static constexpr intptr_t ADDR_OFFSET_PIO4 = 0xb0;
    static constexpr intptr_t ADDR_OFFSET_BWTR1 = 0x104;
    static constexpr intptr_t ADDR_OFFSET_BWTR2 = 0x10c;
    static constexpr intptr_t ADDR_OFFSET_BWTR3 = 0x114;
    static constexpr intptr_t ADDR_OFFSET_BWTR4 = 0x11c;

    volatile union BCR1_T // BCR1: SRAM/NOR-Flash chip-select control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) BCR1_BIT_T
        {
            unsigned MBKEN     : 1; // bit 0 MBKEN
            unsigned MUXEN     : 1; // bit 1 MUXEN
            unsigned MTYP      : 2; // bits 2..3 MTYP
            unsigned MWID      : 2; // bits 4..5 MWID
            unsigned FACCEN    : 1; // bit 6 FACCEN
            unsigned           : 1; // bit 7 unused
            unsigned BURSTEN   : 1; // bit 8 BURSTEN
            unsigned WAITPOL   : 1; // bit 9 WAITPOL
            unsigned           : 1; // bit 10 unused
            unsigned WAITCFG   : 1; // bit 11 WAITCFG
            unsigned WREN      : 1; // bit 12 WREN
            unsigned WAITEN    : 1; // bit 13 WAITEN
            unsigned EXTMOD    : 1; // bit 14 EXTMOD
            unsigned ASYNCWAIT : 1; // bit 15 ASYNCWAIT
            unsigned           : 3; // bits 16..18 unused
            unsigned CBURSTRW  : 1; // bit 19 CBURSTRW
            unsigned           : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned MBKEN_POS = 0;
        static constexpr unsigned MBKEN_MASK = 0x00000001;
        static constexpr unsigned MBKEN(unsigned value) { return (value << 0); }
        static constexpr unsigned MUXEN_POS = 1;
        static constexpr unsigned MUXEN_MASK = 0x00000002;
        static constexpr unsigned MUXEN(unsigned value) { return (value << 1); }
        static constexpr unsigned MTYP_POS = 2;
        static constexpr unsigned MTYP_MASK = 0x0000000c;
        static constexpr unsigned MTYP(unsigned value) { return (value << 2); }
        static constexpr unsigned MWID_POS = 4;
        static constexpr unsigned MWID_MASK = 0x00000030;
        static constexpr unsigned MWID(unsigned value) { return (value << 4); }
        static constexpr unsigned FACCEN_POS = 6;
        static constexpr unsigned FACCEN_MASK = 0x00000040;
        static constexpr unsigned FACCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned BURSTEN_POS = 8;
        static constexpr unsigned BURSTEN_MASK = 0x00000100;
        static constexpr unsigned BURSTEN(unsigned value) { return (value << 8); }
        static constexpr unsigned WAITPOL_POS = 9;
        static constexpr unsigned WAITPOL_MASK = 0x00000200;
        static constexpr unsigned WAITPOL(unsigned value) { return (value << 9); }
        static constexpr unsigned WAITCFG_POS = 11;
        static constexpr unsigned WAITCFG_MASK = 0x00000800;
        static constexpr unsigned WAITCFG(unsigned value) { return (value << 11); }
        static constexpr unsigned WREN_POS = 12;
        static constexpr unsigned WREN_MASK = 0x00001000;
        static constexpr unsigned WREN(unsigned value) { return (value << 12); }
        static constexpr unsigned WAITEN_POS = 13;
        static constexpr unsigned WAITEN_MASK = 0x00002000;
        static constexpr unsigned WAITEN(unsigned value) { return (value << 13); }
        static constexpr unsigned EXTMOD_POS = 14;
        static constexpr unsigned EXTMOD_MASK = 0x00004000;
        static constexpr unsigned EXTMOD(unsigned value) { return (value << 14); }
        static constexpr unsigned ASYNCWAIT_POS = 15;
        static constexpr unsigned ASYNCWAIT_MASK = 0x00008000;
        static constexpr unsigned ASYNCWAIT(unsigned value) { return (value << 15); }
        static constexpr unsigned CBURSTRW_POS = 19;
        static constexpr unsigned CBURSTRW_MASK = 0x00080000;
        static constexpr unsigned CBURSTRW(unsigned value) { return (value << 19); }
    } BCR1;

    volatile union BTR1_T // BTR1: SRAM/NOR-Flash chip-select timing register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) BTR1_BIT_T
        {
            unsigned ADDSET  : 4; // bits 0..3 ADDSET
            unsigned ADDHLD  : 4; // bits 4..7 ADDHLD
            unsigned DATAST  : 8; // bits 8..15 DATAST
            unsigned BUSTURN : 4; // bits 16..19 BUSTURN
            unsigned CLKDIV  : 4; // bits 20..23 CLKDIV
            unsigned DATLAT  : 4; // bits 24..27 DATLAT
            unsigned ACCMOD  : 2; // bits 28..29 ACCMOD
            unsigned         : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned BUSTURN_POS = 16;
        static constexpr unsigned BUSTURN_MASK = 0x000f0000;
        static constexpr unsigned BUSTURN(unsigned value) { return (value << 16); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BTR1;

    volatile union BCR2_T // BCR2: SRAM/NOR-Flash chip-select control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) BCR2_BIT_T
        {
            unsigned MBKEN     : 1; // bit 0 MBKEN
            unsigned MUXEN     : 1; // bit 1 MUXEN
            unsigned MTYP      : 2; // bits 2..3 MTYP
            unsigned MWID      : 2; // bits 4..5 MWID
            unsigned FACCEN    : 1; // bit 6 FACCEN
            unsigned           : 1; // bit 7 unused
            unsigned BURSTEN   : 1; // bit 8 BURSTEN
            unsigned WAITPOL   : 1; // bit 9 WAITPOL
            unsigned WRAPMOD   : 1; // bit 10 WRAPMOD
            unsigned WAITCFG   : 1; // bit 11 WAITCFG
            unsigned WREN      : 1; // bit 12 WREN
            unsigned WAITEN    : 1; // bit 13 WAITEN
            unsigned EXTMOD    : 1; // bit 14 EXTMOD
            unsigned ASYNCWAIT : 1; // bit 15 ASYNCWAIT
            unsigned           : 3; // bits 16..18 unused
            unsigned CBURSTRW  : 1; // bit 19 CBURSTRW
            unsigned           : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned MBKEN_POS = 0;
        static constexpr unsigned MBKEN_MASK = 0x00000001;
        static constexpr unsigned MBKEN(unsigned value) { return (value << 0); }
        static constexpr unsigned MUXEN_POS = 1;
        static constexpr unsigned MUXEN_MASK = 0x00000002;
        static constexpr unsigned MUXEN(unsigned value) { return (value << 1); }
        static constexpr unsigned MTYP_POS = 2;
        static constexpr unsigned MTYP_MASK = 0x0000000c;
        static constexpr unsigned MTYP(unsigned value) { return (value << 2); }
        static constexpr unsigned MWID_POS = 4;
        static constexpr unsigned MWID_MASK = 0x00000030;
        static constexpr unsigned MWID(unsigned value) { return (value << 4); }
        static constexpr unsigned FACCEN_POS = 6;
        static constexpr unsigned FACCEN_MASK = 0x00000040;
        static constexpr unsigned FACCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned BURSTEN_POS = 8;
        static constexpr unsigned BURSTEN_MASK = 0x00000100;
        static constexpr unsigned BURSTEN(unsigned value) { return (value << 8); }
        static constexpr unsigned WAITPOL_POS = 9;
        static constexpr unsigned WAITPOL_MASK = 0x00000200;
        static constexpr unsigned WAITPOL(unsigned value) { return (value << 9); }
        static constexpr unsigned WRAPMOD_POS = 10;
        static constexpr unsigned WRAPMOD_MASK = 0x00000400;
        static constexpr unsigned WRAPMOD(unsigned value) { return (value << 10); }
        static constexpr unsigned WAITCFG_POS = 11;
        static constexpr unsigned WAITCFG_MASK = 0x00000800;
        static constexpr unsigned WAITCFG(unsigned value) { return (value << 11); }
        static constexpr unsigned WREN_POS = 12;
        static constexpr unsigned WREN_MASK = 0x00001000;
        static constexpr unsigned WREN(unsigned value) { return (value << 12); }
        static constexpr unsigned WAITEN_POS = 13;
        static constexpr unsigned WAITEN_MASK = 0x00002000;
        static constexpr unsigned WAITEN(unsigned value) { return (value << 13); }
        static constexpr unsigned EXTMOD_POS = 14;
        static constexpr unsigned EXTMOD_MASK = 0x00004000;
        static constexpr unsigned EXTMOD(unsigned value) { return (value << 14); }
        static constexpr unsigned ASYNCWAIT_POS = 15;
        static constexpr unsigned ASYNCWAIT_MASK = 0x00008000;
        static constexpr unsigned ASYNCWAIT(unsigned value) { return (value << 15); }
        static constexpr unsigned CBURSTRW_POS = 19;
        static constexpr unsigned CBURSTRW_MASK = 0x00080000;
        static constexpr unsigned CBURSTRW(unsigned value) { return (value << 19); }
    } BCR2;

    volatile union BTR2_T // BTR2: SRAM/NOR-Flash chip-select timing register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) BTR2_BIT_T
        {
            unsigned ADDSET  : 4; // bits 0..3 ADDSET
            unsigned ADDHLD  : 4; // bits 4..7 ADDHLD
            unsigned DATAST  : 8; // bits 8..15 DATAST
            unsigned BUSTURN : 4; // bits 16..19 BUSTURN
            unsigned CLKDIV  : 4; // bits 20..23 CLKDIV
            unsigned DATLAT  : 4; // bits 24..27 DATLAT
            unsigned ACCMOD  : 2; // bits 28..29 ACCMOD
            unsigned         : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned BUSTURN_POS = 16;
        static constexpr unsigned BUSTURN_MASK = 0x000f0000;
        static constexpr unsigned BUSTURN(unsigned value) { return (value << 16); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BTR2;

    volatile union BCR3_T // BCR3: SRAM/NOR-Flash chip-select control register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) BCR3_BIT_T
        {
            unsigned MBKEN     : 1; // bit 0 MBKEN
            unsigned MUXEN     : 1; // bit 1 MUXEN
            unsigned MTYP      : 2; // bits 2..3 MTYP
            unsigned MWID      : 2; // bits 4..5 MWID
            unsigned FACCEN    : 1; // bit 6 FACCEN
            unsigned           : 1; // bit 7 unused
            unsigned BURSTEN   : 1; // bit 8 BURSTEN
            unsigned WAITPOL   : 1; // bit 9 WAITPOL
            unsigned WRAPMOD   : 1; // bit 10 WRAPMOD
            unsigned WAITCFG   : 1; // bit 11 WAITCFG
            unsigned WREN      : 1; // bit 12 WREN
            unsigned WAITEN    : 1; // bit 13 WAITEN
            unsigned EXTMOD    : 1; // bit 14 EXTMOD
            unsigned ASYNCWAIT : 1; // bit 15 ASYNCWAIT
            unsigned           : 3; // bits 16..18 unused
            unsigned CBURSTRW  : 1; // bit 19 CBURSTRW
            unsigned           : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned MBKEN_POS = 0;
        static constexpr unsigned MBKEN_MASK = 0x00000001;
        static constexpr unsigned MBKEN(unsigned value) { return (value << 0); }
        static constexpr unsigned MUXEN_POS = 1;
        static constexpr unsigned MUXEN_MASK = 0x00000002;
        static constexpr unsigned MUXEN(unsigned value) { return (value << 1); }
        static constexpr unsigned MTYP_POS = 2;
        static constexpr unsigned MTYP_MASK = 0x0000000c;
        static constexpr unsigned MTYP(unsigned value) { return (value << 2); }
        static constexpr unsigned MWID_POS = 4;
        static constexpr unsigned MWID_MASK = 0x00000030;
        static constexpr unsigned MWID(unsigned value) { return (value << 4); }
        static constexpr unsigned FACCEN_POS = 6;
        static constexpr unsigned FACCEN_MASK = 0x00000040;
        static constexpr unsigned FACCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned BURSTEN_POS = 8;
        static constexpr unsigned BURSTEN_MASK = 0x00000100;
        static constexpr unsigned BURSTEN(unsigned value) { return (value << 8); }
        static constexpr unsigned WAITPOL_POS = 9;
        static constexpr unsigned WAITPOL_MASK = 0x00000200;
        static constexpr unsigned WAITPOL(unsigned value) { return (value << 9); }
        static constexpr unsigned WRAPMOD_POS = 10;
        static constexpr unsigned WRAPMOD_MASK = 0x00000400;
        static constexpr unsigned WRAPMOD(unsigned value) { return (value << 10); }
        static constexpr unsigned WAITCFG_POS = 11;
        static constexpr unsigned WAITCFG_MASK = 0x00000800;
        static constexpr unsigned WAITCFG(unsigned value) { return (value << 11); }
        static constexpr unsigned WREN_POS = 12;
        static constexpr unsigned WREN_MASK = 0x00001000;
        static constexpr unsigned WREN(unsigned value) { return (value << 12); }
        static constexpr unsigned WAITEN_POS = 13;
        static constexpr unsigned WAITEN_MASK = 0x00002000;
        static constexpr unsigned WAITEN(unsigned value) { return (value << 13); }
        static constexpr unsigned EXTMOD_POS = 14;
        static constexpr unsigned EXTMOD_MASK = 0x00004000;
        static constexpr unsigned EXTMOD(unsigned value) { return (value << 14); }
        static constexpr unsigned ASYNCWAIT_POS = 15;
        static constexpr unsigned ASYNCWAIT_MASK = 0x00008000;
        static constexpr unsigned ASYNCWAIT(unsigned value) { return (value << 15); }
        static constexpr unsigned CBURSTRW_POS = 19;
        static constexpr unsigned CBURSTRW_MASK = 0x00080000;
        static constexpr unsigned CBURSTRW(unsigned value) { return (value << 19); }
    } BCR3;

    volatile union BTR3_T // BTR3: SRAM/NOR-Flash chip-select timing register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) BTR3_BIT_T
        {
            unsigned ADDSET  : 4; // bits 0..3 ADDSET
            unsigned ADDHLD  : 4; // bits 4..7 ADDHLD
            unsigned DATAST  : 8; // bits 8..15 DATAST
            unsigned BUSTURN : 4; // bits 16..19 BUSTURN
            unsigned CLKDIV  : 4; // bits 20..23 CLKDIV
            unsigned DATLAT  : 4; // bits 24..27 DATLAT
            unsigned ACCMOD  : 2; // bits 28..29 ACCMOD
            unsigned         : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned BUSTURN_POS = 16;
        static constexpr unsigned BUSTURN_MASK = 0x000f0000;
        static constexpr unsigned BUSTURN(unsigned value) { return (value << 16); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BTR3;

    volatile union BCR4_T // BCR4: SRAM/NOR-Flash chip-select control register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) BCR4_BIT_T
        {
            unsigned MBKEN     : 1; // bit 0 MBKEN
            unsigned MUXEN     : 1; // bit 1 MUXEN
            unsigned MTYP      : 2; // bits 2..3 MTYP
            unsigned MWID      : 2; // bits 4..5 MWID
            unsigned FACCEN    : 1; // bit 6 FACCEN
            unsigned           : 1; // bit 7 unused
            unsigned BURSTEN   : 1; // bit 8 BURSTEN
            unsigned WAITPOL   : 1; // bit 9 WAITPOL
            unsigned WRAPMOD   : 1; // bit 10 WRAPMOD
            unsigned WAITCFG   : 1; // bit 11 WAITCFG
            unsigned WREN      : 1; // bit 12 WREN
            unsigned WAITEN    : 1; // bit 13 WAITEN
            unsigned EXTMOD    : 1; // bit 14 EXTMOD
            unsigned ASYNCWAIT : 1; // bit 15 ASYNCWAIT
            unsigned           : 3; // bits 16..18 unused
            unsigned CBURSTRW  : 1; // bit 19 CBURSTRW
            unsigned           : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned MBKEN_POS = 0;
        static constexpr unsigned MBKEN_MASK = 0x00000001;
        static constexpr unsigned MBKEN(unsigned value) { return (value << 0); }
        static constexpr unsigned MUXEN_POS = 1;
        static constexpr unsigned MUXEN_MASK = 0x00000002;
        static constexpr unsigned MUXEN(unsigned value) { return (value << 1); }
        static constexpr unsigned MTYP_POS = 2;
        static constexpr unsigned MTYP_MASK = 0x0000000c;
        static constexpr unsigned MTYP(unsigned value) { return (value << 2); }
        static constexpr unsigned MWID_POS = 4;
        static constexpr unsigned MWID_MASK = 0x00000030;
        static constexpr unsigned MWID(unsigned value) { return (value << 4); }
        static constexpr unsigned FACCEN_POS = 6;
        static constexpr unsigned FACCEN_MASK = 0x00000040;
        static constexpr unsigned FACCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned BURSTEN_POS = 8;
        static constexpr unsigned BURSTEN_MASK = 0x00000100;
        static constexpr unsigned BURSTEN(unsigned value) { return (value << 8); }
        static constexpr unsigned WAITPOL_POS = 9;
        static constexpr unsigned WAITPOL_MASK = 0x00000200;
        static constexpr unsigned WAITPOL(unsigned value) { return (value << 9); }
        static constexpr unsigned WRAPMOD_POS = 10;
        static constexpr unsigned WRAPMOD_MASK = 0x00000400;
        static constexpr unsigned WRAPMOD(unsigned value) { return (value << 10); }
        static constexpr unsigned WAITCFG_POS = 11;
        static constexpr unsigned WAITCFG_MASK = 0x00000800;
        static constexpr unsigned WAITCFG(unsigned value) { return (value << 11); }
        static constexpr unsigned WREN_POS = 12;
        static constexpr unsigned WREN_MASK = 0x00001000;
        static constexpr unsigned WREN(unsigned value) { return (value << 12); }
        static constexpr unsigned WAITEN_POS = 13;
        static constexpr unsigned WAITEN_MASK = 0x00002000;
        static constexpr unsigned WAITEN(unsigned value) { return (value << 13); }
        static constexpr unsigned EXTMOD_POS = 14;
        static constexpr unsigned EXTMOD_MASK = 0x00004000;
        static constexpr unsigned EXTMOD(unsigned value) { return (value << 14); }
        static constexpr unsigned ASYNCWAIT_POS = 15;
        static constexpr unsigned ASYNCWAIT_MASK = 0x00008000;
        static constexpr unsigned ASYNCWAIT(unsigned value) { return (value << 15); }
        static constexpr unsigned CBURSTRW_POS = 19;
        static constexpr unsigned CBURSTRW_MASK = 0x00080000;
        static constexpr unsigned CBURSTRW(unsigned value) { return (value << 19); }
    } BCR4;

    volatile union BTR4_T // BTR4: SRAM/NOR-Flash chip-select timing register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) BTR4_BIT_T
        {
            unsigned ADDSET  : 4; // bits 0..3 ADDSET
            unsigned ADDHLD  : 4; // bits 4..7 ADDHLD
            unsigned DATAST  : 8; // bits 8..15 DATAST
            unsigned BUSTURN : 4; // bits 16..19 BUSTURN
            unsigned CLKDIV  : 4; // bits 20..23 CLKDIV
            unsigned DATLAT  : 4; // bits 24..27 DATLAT
            unsigned ACCMOD  : 2; // bits 28..29 ACCMOD
            unsigned         : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned BUSTURN_POS = 16;
        static constexpr unsigned BUSTURN_MASK = 0x000f0000;
        static constexpr unsigned BUSTURN(unsigned value) { return (value << 16); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BTR4;

    uint8_t Reserved1[64];

    volatile union PCR2_T // PCR2: PC Card/NAND Flash control register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) PCR2_BIT_T
        {
            unsigned         : 1; // bit 0 unused
            unsigned PWAITEN : 1; // bit 1 PWAITEN
            unsigned PBKEN   : 1; // bit 2 PBKEN
            unsigned PTYP    : 1; // bit 3 PTYP
            unsigned PWID    : 2; // bits 4..5 PWID
            unsigned ECCEN   : 1; // bit 6 ECCEN
            unsigned         : 2; // bits 7..8 unused
            unsigned TCLR    : 4; // bits 9..12 TCLR
            unsigned TAR     : 4; // bits 13..16 TAR
            unsigned ECCPS   : 3; // bits 17..19 ECCPS
            unsigned         : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned PWAITEN_POS = 1;
        static constexpr unsigned PWAITEN_MASK = 0x00000002;
        static constexpr unsigned PWAITEN(unsigned value) { return (value << 1); }
        static constexpr unsigned PBKEN_POS = 2;
        static constexpr unsigned PBKEN_MASK = 0x00000004;
        static constexpr unsigned PBKEN(unsigned value) { return (value << 2); }
        static constexpr unsigned PTYP_POS = 3;
        static constexpr unsigned PTYP_MASK = 0x00000008;
        static constexpr unsigned PTYP(unsigned value) { return (value << 3); }
        static constexpr unsigned PWID_POS = 4;
        static constexpr unsigned PWID_MASK = 0x00000030;
        static constexpr unsigned PWID(unsigned value) { return (value << 4); }
        static constexpr unsigned ECCEN_POS = 6;
        static constexpr unsigned ECCEN_MASK = 0x00000040;
        static constexpr unsigned ECCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned TCLR_POS = 9;
        static constexpr unsigned TCLR_MASK = 0x00001e00;
        static constexpr unsigned TCLR(unsigned value) { return (value << 9); }
        static constexpr unsigned TAR_POS = 13;
        static constexpr unsigned TAR_MASK = 0x0001e000;
        static constexpr unsigned TAR(unsigned value) { return (value << 13); }
        static constexpr unsigned ECCPS_POS = 17;
        static constexpr unsigned ECCPS_MASK = 0x000e0000;
        static constexpr unsigned ECCPS(unsigned value) { return (value << 17); }
    } PCR2;

    volatile union SR2_T // SR2: FIFO status and interrupt register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR2_BIT_T
        {
            unsigned IRS   : 1; // bit 0 IRS
            unsigned ILS   : 1; // bit 1 ILS
            unsigned IFS   : 1; // bit 2 IFS
            unsigned IREN  : 1; // bit 3 IREN
            unsigned ILEN  : 1; // bit 4 ILEN
            unsigned IFEN  : 1; // bit 5 IFEN
            unsigned FEMPT : 1; // bit 6 FEMPT
            unsigned       : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned IRS_POS = 0;
        static constexpr unsigned IRS_MASK = 0x00000001;
        static constexpr unsigned IRS(unsigned value) { return (value << 0); }
        static constexpr unsigned ILS_POS = 1;
        static constexpr unsigned ILS_MASK = 0x00000002;
        static constexpr unsigned ILS(unsigned value) { return (value << 1); }
        static constexpr unsigned IFS_POS = 2;
        static constexpr unsigned IFS_MASK = 0x00000004;
        static constexpr unsigned IFS(unsigned value) { return (value << 2); }
        static constexpr unsigned IREN_POS = 3;
        static constexpr unsigned IREN_MASK = 0x00000008;
        static constexpr unsigned IREN(unsigned value) { return (value << 3); }
        static constexpr unsigned ILEN_POS = 4;
        static constexpr unsigned ILEN_MASK = 0x00000010;
        static constexpr unsigned ILEN(unsigned value) { return (value << 4); }
        static constexpr unsigned IFEN_POS = 5;
        static constexpr unsigned IFEN_MASK = 0x00000020;
        static constexpr unsigned IFEN(unsigned value) { return (value << 5); }
        static constexpr unsigned FEMPT_POS = 6;
        static constexpr unsigned FEMPT_MASK = 0x00000040;
        static constexpr unsigned FEMPT(unsigned value) { return (value << 6); }
    } SR2;

    volatile union PMEM2_T // PMEM2: Common memory space timing register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) PMEM2_BIT_T
        {
            unsigned MEMSETx  : 8; // bits 0..7 MEMSETx
            unsigned MEMWAITx : 8; // bits 8..15 MEMWAITx
            unsigned MEMHOLDx : 8; // bits 16..23 MEMHOLDx
            unsigned MEMHIZx  : 8; // bits 24..31 MEMHIZx    
        } bit;
    
        static constexpr unsigned MEMSETx_POS = 0;
        static constexpr unsigned MEMSETx_MASK = 0x000000ff;
        static constexpr unsigned MEMSETx(unsigned value) { return (value << 0); }
        static constexpr unsigned MEMWAITx_POS = 8;
        static constexpr unsigned MEMWAITx_MASK = 0x0000ff00;
        static constexpr unsigned MEMWAITx(unsigned value) { return (value << 8); }
        static constexpr unsigned MEMHOLDx_POS = 16;
        static constexpr unsigned MEMHOLDx_MASK = 0x00ff0000;
        static constexpr unsigned MEMHOLDx(unsigned value) { return (value << 16); }
        static constexpr unsigned MEMHIZx_POS = 24;
        static constexpr unsigned MEMHIZx_MASK = 0xff000000;
        static constexpr unsigned MEMHIZx(unsigned value) { return (value << 24); }
    } PMEM2;

    volatile union PATT2_T // PATT2: Attribute memory space timing register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) PATT2_BIT_T
        {
            unsigned ATTSETx  : 8; // bits 0..7 ATTSETx
            unsigned ATTWAITx : 8; // bits 8..15 ATTWAITx
            unsigned ATTHOLDx : 8; // bits 16..23 ATTHOLDx
            unsigned ATTHIZx  : 8; // bits 24..31 ATTHIZx    
        } bit;
    
        static constexpr unsigned ATTSETx_POS = 0;
        static constexpr unsigned ATTSETx_MASK = 0x000000ff;
        static constexpr unsigned ATTSETx(unsigned value) { return (value << 0); }
        static constexpr unsigned ATTWAITx_POS = 8;
        static constexpr unsigned ATTWAITx_MASK = 0x0000ff00;
        static constexpr unsigned ATTWAITx(unsigned value) { return (value << 8); }
        static constexpr unsigned ATTHOLDx_POS = 16;
        static constexpr unsigned ATTHOLDx_MASK = 0x00ff0000;
        static constexpr unsigned ATTHOLDx(unsigned value) { return (value << 16); }
        static constexpr unsigned ATTHIZx_POS = 24;
        static constexpr unsigned ATTHIZx_MASK = 0xff000000;
        static constexpr unsigned ATTHIZx(unsigned value) { return (value << 24); }
    } PATT2;

    uint8_t Reserved2[4];

    volatile union ECCR2_T // ECCR2: ECC result register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) ECCR2_BIT_T
        {
            unsigned ECCx : 32; // bits 0..31 ECCx    
        } bit;
    
        static constexpr unsigned ECCx_POS = 0;
        static constexpr unsigned ECCx_MASK = 0xffffffff;
        static constexpr unsigned ECCx(unsigned value) { return (value << 0); }
    } ECCR2;

    uint8_t Reserved3[8];

    volatile union PCR3_T // PCR3: PC Card/NAND Flash control register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) PCR3_BIT_T
        {
            unsigned         : 1; // bit 0 unused
            unsigned PWAITEN : 1; // bit 1 PWAITEN
            unsigned PBKEN   : 1; // bit 2 PBKEN
            unsigned PTYP    : 1; // bit 3 PTYP
            unsigned PWID    : 2; // bits 4..5 PWID
            unsigned ECCEN   : 1; // bit 6 ECCEN
            unsigned         : 2; // bits 7..8 unused
            unsigned TCLR    : 4; // bits 9..12 TCLR
            unsigned TAR     : 4; // bits 13..16 TAR
            unsigned ECCPS   : 3; // bits 17..19 ECCPS
            unsigned         : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned PWAITEN_POS = 1;
        static constexpr unsigned PWAITEN_MASK = 0x00000002;
        static constexpr unsigned PWAITEN(unsigned value) { return (value << 1); }
        static constexpr unsigned PBKEN_POS = 2;
        static constexpr unsigned PBKEN_MASK = 0x00000004;
        static constexpr unsigned PBKEN(unsigned value) { return (value << 2); }
        static constexpr unsigned PTYP_POS = 3;
        static constexpr unsigned PTYP_MASK = 0x00000008;
        static constexpr unsigned PTYP(unsigned value) { return (value << 3); }
        static constexpr unsigned PWID_POS = 4;
        static constexpr unsigned PWID_MASK = 0x00000030;
        static constexpr unsigned PWID(unsigned value) { return (value << 4); }
        static constexpr unsigned ECCEN_POS = 6;
        static constexpr unsigned ECCEN_MASK = 0x00000040;
        static constexpr unsigned ECCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned TCLR_POS = 9;
        static constexpr unsigned TCLR_MASK = 0x00001e00;
        static constexpr unsigned TCLR(unsigned value) { return (value << 9); }
        static constexpr unsigned TAR_POS = 13;
        static constexpr unsigned TAR_MASK = 0x0001e000;
        static constexpr unsigned TAR(unsigned value) { return (value << 13); }
        static constexpr unsigned ECCPS_POS = 17;
        static constexpr unsigned ECCPS_MASK = 0x000e0000;
        static constexpr unsigned ECCPS(unsigned value) { return (value << 17); }
    } PCR3;

    volatile union SR3_T // SR3: FIFO status and interrupt register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR3_BIT_T
        {
            unsigned IRS   : 1; // bit 0 IRS
            unsigned ILS   : 1; // bit 1 ILS
            unsigned IFS   : 1; // bit 2 IFS
            unsigned IREN  : 1; // bit 3 IREN
            unsigned ILEN  : 1; // bit 4 ILEN
            unsigned IFEN  : 1; // bit 5 IFEN
            unsigned FEMPT : 1; // bit 6 FEMPT
            unsigned       : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned IRS_POS = 0;
        static constexpr unsigned IRS_MASK = 0x00000001;
        static constexpr unsigned IRS(unsigned value) { return (value << 0); }
        static constexpr unsigned ILS_POS = 1;
        static constexpr unsigned ILS_MASK = 0x00000002;
        static constexpr unsigned ILS(unsigned value) { return (value << 1); }
        static constexpr unsigned IFS_POS = 2;
        static constexpr unsigned IFS_MASK = 0x00000004;
        static constexpr unsigned IFS(unsigned value) { return (value << 2); }
        static constexpr unsigned IREN_POS = 3;
        static constexpr unsigned IREN_MASK = 0x00000008;
        static constexpr unsigned IREN(unsigned value) { return (value << 3); }
        static constexpr unsigned ILEN_POS = 4;
        static constexpr unsigned ILEN_MASK = 0x00000010;
        static constexpr unsigned ILEN(unsigned value) { return (value << 4); }
        static constexpr unsigned IFEN_POS = 5;
        static constexpr unsigned IFEN_MASK = 0x00000020;
        static constexpr unsigned IFEN(unsigned value) { return (value << 5); }
        static constexpr unsigned FEMPT_POS = 6;
        static constexpr unsigned FEMPT_MASK = 0x00000040;
        static constexpr unsigned FEMPT(unsigned value) { return (value << 6); }
    } SR3;

    volatile union PMEM3_T // PMEM3: Common memory space timing register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) PMEM3_BIT_T
        {
            unsigned MEMSETx  : 8; // bits 0..7 MEMSETx
            unsigned MEMWAITx : 8; // bits 8..15 MEMWAITx
            unsigned MEMHOLDx : 8; // bits 16..23 MEMHOLDx
            unsigned MEMHIZx  : 8; // bits 24..31 MEMHIZx    
        } bit;
    
        static constexpr unsigned MEMSETx_POS = 0;
        static constexpr unsigned MEMSETx_MASK = 0x000000ff;
        static constexpr unsigned MEMSETx(unsigned value) { return (value << 0); }
        static constexpr unsigned MEMWAITx_POS = 8;
        static constexpr unsigned MEMWAITx_MASK = 0x0000ff00;
        static constexpr unsigned MEMWAITx(unsigned value) { return (value << 8); }
        static constexpr unsigned MEMHOLDx_POS = 16;
        static constexpr unsigned MEMHOLDx_MASK = 0x00ff0000;
        static constexpr unsigned MEMHOLDx(unsigned value) { return (value << 16); }
        static constexpr unsigned MEMHIZx_POS = 24;
        static constexpr unsigned MEMHIZx_MASK = 0xff000000;
        static constexpr unsigned MEMHIZx(unsigned value) { return (value << 24); }
    } PMEM3;

    volatile union PATT3_T // PATT3: Attribute memory space timing register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) PATT3_BIT_T
        {
            unsigned ATTSETx  : 8; // bits 0..7 ATTSETx
            unsigned ATTWAITx : 8; // bits 8..15 ATTWAITx
            unsigned ATTHOLDx : 8; // bits 16..23 ATTHOLDx
            unsigned ATTHIZx  : 8; // bits 24..31 ATTHIZx    
        } bit;
    
        static constexpr unsigned ATTSETx_POS = 0;
        static constexpr unsigned ATTSETx_MASK = 0x000000ff;
        static constexpr unsigned ATTSETx(unsigned value) { return (value << 0); }
        static constexpr unsigned ATTWAITx_POS = 8;
        static constexpr unsigned ATTWAITx_MASK = 0x0000ff00;
        static constexpr unsigned ATTWAITx(unsigned value) { return (value << 8); }
        static constexpr unsigned ATTHOLDx_POS = 16;
        static constexpr unsigned ATTHOLDx_MASK = 0x00ff0000;
        static constexpr unsigned ATTHOLDx(unsigned value) { return (value << 16); }
        static constexpr unsigned ATTHIZx_POS = 24;
        static constexpr unsigned ATTHIZx_MASK = 0xff000000;
        static constexpr unsigned ATTHIZx(unsigned value) { return (value << 24); }
    } PATT3;

    uint8_t Reserved4[4];

    volatile union ECCR3_T // ECCR3: ECC result register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) ECCR3_BIT_T
        {
            unsigned ECCx : 32; // bits 0..31 ECCx    
        } bit;
    
        static constexpr unsigned ECCx_POS = 0;
        static constexpr unsigned ECCx_MASK = 0xffffffff;
        static constexpr unsigned ECCx(unsigned value) { return (value << 0); }
    } ECCR3;

    uint8_t Reserved5[8];

    volatile union PCR4_T // PCR4: PC Card/NAND Flash control register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) PCR4_BIT_T
        {
            unsigned         : 1; // bit 0 unused
            unsigned PWAITEN : 1; // bit 1 PWAITEN
            unsigned PBKEN   : 1; // bit 2 PBKEN
            unsigned PTYP    : 1; // bit 3 PTYP
            unsigned PWID    : 2; // bits 4..5 PWID
            unsigned ECCEN   : 1; // bit 6 ECCEN
            unsigned         : 2; // bits 7..8 unused
            unsigned TCLR    : 4; // bits 9..12 TCLR
            unsigned TAR     : 4; // bits 13..16 TAR
            unsigned ECCPS   : 3; // bits 17..19 ECCPS
            unsigned         : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned PWAITEN_POS = 1;
        static constexpr unsigned PWAITEN_MASK = 0x00000002;
        static constexpr unsigned PWAITEN(unsigned value) { return (value << 1); }
        static constexpr unsigned PBKEN_POS = 2;
        static constexpr unsigned PBKEN_MASK = 0x00000004;
        static constexpr unsigned PBKEN(unsigned value) { return (value << 2); }
        static constexpr unsigned PTYP_POS = 3;
        static constexpr unsigned PTYP_MASK = 0x00000008;
        static constexpr unsigned PTYP(unsigned value) { return (value << 3); }
        static constexpr unsigned PWID_POS = 4;
        static constexpr unsigned PWID_MASK = 0x00000030;
        static constexpr unsigned PWID(unsigned value) { return (value << 4); }
        static constexpr unsigned ECCEN_POS = 6;
        static constexpr unsigned ECCEN_MASK = 0x00000040;
        static constexpr unsigned ECCEN(unsigned value) { return (value << 6); }
        static constexpr unsigned TCLR_POS = 9;
        static constexpr unsigned TCLR_MASK = 0x00001e00;
        static constexpr unsigned TCLR(unsigned value) { return (value << 9); }
        static constexpr unsigned TAR_POS = 13;
        static constexpr unsigned TAR_MASK = 0x0001e000;
        static constexpr unsigned TAR(unsigned value) { return (value << 13); }
        static constexpr unsigned ECCPS_POS = 17;
        static constexpr unsigned ECCPS_MASK = 0x000e0000;
        static constexpr unsigned ECCPS(unsigned value) { return (value << 17); }
    } PCR4;

    volatile union SR4_T // SR4: FIFO status and interrupt register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR4_BIT_T
        {
            unsigned IRS   : 1; // bit 0 IRS
            unsigned ILS   : 1; // bit 1 ILS
            unsigned IFS   : 1; // bit 2 IFS
            unsigned IREN  : 1; // bit 3 IREN
            unsigned ILEN  : 1; // bit 4 ILEN
            unsigned IFEN  : 1; // bit 5 IFEN
            unsigned FEMPT : 1; // bit 6 FEMPT
            unsigned       : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned IRS_POS = 0;
        static constexpr unsigned IRS_MASK = 0x00000001;
        static constexpr unsigned IRS(unsigned value) { return (value << 0); }
        static constexpr unsigned ILS_POS = 1;
        static constexpr unsigned ILS_MASK = 0x00000002;
        static constexpr unsigned ILS(unsigned value) { return (value << 1); }
        static constexpr unsigned IFS_POS = 2;
        static constexpr unsigned IFS_MASK = 0x00000004;
        static constexpr unsigned IFS(unsigned value) { return (value << 2); }
        static constexpr unsigned IREN_POS = 3;
        static constexpr unsigned IREN_MASK = 0x00000008;
        static constexpr unsigned IREN(unsigned value) { return (value << 3); }
        static constexpr unsigned ILEN_POS = 4;
        static constexpr unsigned ILEN_MASK = 0x00000010;
        static constexpr unsigned ILEN(unsigned value) { return (value << 4); }
        static constexpr unsigned IFEN_POS = 5;
        static constexpr unsigned IFEN_MASK = 0x00000020;
        static constexpr unsigned IFEN(unsigned value) { return (value << 5); }
        static constexpr unsigned FEMPT_POS = 6;
        static constexpr unsigned FEMPT_MASK = 0x00000040;
        static constexpr unsigned FEMPT(unsigned value) { return (value << 6); }
    } SR4;

    volatile union PMEM4_T // PMEM4: Common memory space timing register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) PMEM4_BIT_T
        {
            unsigned MEMSETx  : 8; // bits 0..7 MEMSETx
            unsigned MEMWAITx : 8; // bits 8..15 MEMWAITx
            unsigned MEMHOLDx : 8; // bits 16..23 MEMHOLDx
            unsigned MEMHIZx  : 8; // bits 24..31 MEMHIZx    
        } bit;
    
        static constexpr unsigned MEMSETx_POS = 0;
        static constexpr unsigned MEMSETx_MASK = 0x000000ff;
        static constexpr unsigned MEMSETx(unsigned value) { return (value << 0); }
        static constexpr unsigned MEMWAITx_POS = 8;
        static constexpr unsigned MEMWAITx_MASK = 0x0000ff00;
        static constexpr unsigned MEMWAITx(unsigned value) { return (value << 8); }
        static constexpr unsigned MEMHOLDx_POS = 16;
        static constexpr unsigned MEMHOLDx_MASK = 0x00ff0000;
        static constexpr unsigned MEMHOLDx(unsigned value) { return (value << 16); }
        static constexpr unsigned MEMHIZx_POS = 24;
        static constexpr unsigned MEMHIZx_MASK = 0xff000000;
        static constexpr unsigned MEMHIZx(unsigned value) { return (value << 24); }
    } PMEM4;

    volatile union PATT4_T // PATT4: Attribute memory space timing register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) PATT4_BIT_T
        {
            unsigned ATTSETx  : 8; // bits 0..7 ATTSETx
            unsigned ATTWAITx : 8; // bits 8..15 ATTWAITx
            unsigned ATTHOLDx : 8; // bits 16..23 ATTHOLDx
            unsigned ATTHIZx  : 8; // bits 24..31 ATTHIZx    
        } bit;
    
        static constexpr unsigned ATTSETx_POS = 0;
        static constexpr unsigned ATTSETx_MASK = 0x000000ff;
        static constexpr unsigned ATTSETx(unsigned value) { return (value << 0); }
        static constexpr unsigned ATTWAITx_POS = 8;
        static constexpr unsigned ATTWAITx_MASK = 0x0000ff00;
        static constexpr unsigned ATTWAITx(unsigned value) { return (value << 8); }
        static constexpr unsigned ATTHOLDx_POS = 16;
        static constexpr unsigned ATTHOLDx_MASK = 0x00ff0000;
        static constexpr unsigned ATTHOLDx(unsigned value) { return (value << 16); }
        static constexpr unsigned ATTHIZx_POS = 24;
        static constexpr unsigned ATTHIZx_MASK = 0xff000000;
        static constexpr unsigned ATTHIZx(unsigned value) { return (value << 24); }
    } PATT4;

    volatile union PIO4_T // PIO4: I/O space timing register 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) PIO4_BIT_T
        {
            unsigned IOSETx  : 8; // bits 0..7 IOSETx
            unsigned IOWAITx : 8; // bits 8..15 IOWAITx
            unsigned IOHOLDx : 8; // bits 16..23 IOHOLDx
            unsigned IOHIZx  : 8; // bits 24..31 IOHIZx    
        } bit;
    
        static constexpr unsigned IOSETx_POS = 0;
        static constexpr unsigned IOSETx_MASK = 0x000000ff;
        static constexpr unsigned IOSETx(unsigned value) { return (value << 0); }
        static constexpr unsigned IOWAITx_POS = 8;
        static constexpr unsigned IOWAITx_MASK = 0x0000ff00;
        static constexpr unsigned IOWAITx(unsigned value) { return (value << 8); }
        static constexpr unsigned IOHOLDx_POS = 16;
        static constexpr unsigned IOHOLDx_MASK = 0x00ff0000;
        static constexpr unsigned IOHOLDx(unsigned value) { return (value << 16); }
        static constexpr unsigned IOHIZx_POS = 24;
        static constexpr unsigned IOHIZx_MASK = 0xff000000;
        static constexpr unsigned IOHIZx(unsigned value) { return (value << 24); }
    } PIO4;

    uint8_t Reserved6[80];

    volatile union BWTR1_T // BWTR1: SRAM/NOR-Flash write timing registers 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) BWTR1_BIT_T
        {
            unsigned ADDSET : 4; // bits 0..3 ADDSET
            unsigned ADDHLD : 4; // bits 4..7 ADDHLD
            unsigned DATAST : 8; // bits 8..15 DATAST
            unsigned        : 4; // bits 16..19 unused
            unsigned CLKDIV : 4; // bits 20..23 CLKDIV
            unsigned DATLAT : 4; // bits 24..27 DATLAT
            unsigned ACCMOD : 2; // bits 28..29 ACCMOD
            unsigned        : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BWTR1;

    uint8_t Reserved7[4];

    volatile union BWTR2_T // BWTR2: SRAM/NOR-Flash write timing registers 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) BWTR2_BIT_T
        {
            unsigned ADDSET : 4; // bits 0..3 ADDSET
            unsigned ADDHLD : 4; // bits 4..7 ADDHLD
            unsigned DATAST : 8; // bits 8..15 DATAST
            unsigned        : 4; // bits 16..19 unused
            unsigned CLKDIV : 4; // bits 20..23 CLKDIV
            unsigned DATLAT : 4; // bits 24..27 DATLAT
            unsigned ACCMOD : 2; // bits 28..29 ACCMOD
            unsigned        : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BWTR2;

    uint8_t Reserved8[4];

    volatile union BWTR3_T // BWTR3: SRAM/NOR-Flash write timing registers 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) BWTR3_BIT_T
        {
            unsigned ADDSET : 4; // bits 0..3 ADDSET
            unsigned ADDHLD : 4; // bits 4..7 ADDHLD
            unsigned DATAST : 8; // bits 8..15 DATAST
            unsigned        : 4; // bits 16..19 unused
            unsigned CLKDIV : 4; // bits 20..23 CLKDIV
            unsigned DATLAT : 4; // bits 24..27 DATLAT
            unsigned ACCMOD : 2; // bits 28..29 ACCMOD
            unsigned        : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BWTR3;

    uint8_t Reserved9[4];

    volatile union BWTR4_T // BWTR4: SRAM/NOR-Flash write timing registers 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) BWTR4_BIT_T
        {
            unsigned ADDSET : 4; // bits 0..3 ADDSET
            unsigned ADDHLD : 4; // bits 4..7 ADDHLD
            unsigned DATAST : 8; // bits 8..15 DATAST
            unsigned        : 4; // bits 16..19 unused
            unsigned CLKDIV : 4; // bits 20..23 CLKDIV
            unsigned DATLAT : 4; // bits 24..27 DATLAT
            unsigned ACCMOD : 2; // bits 28..29 ACCMOD
            unsigned        : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned ADDSET_POS = 0;
        static constexpr unsigned ADDSET_MASK = 0x0000000f;
        static constexpr unsigned ADDSET(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDHLD_POS = 4;
        static constexpr unsigned ADDHLD_MASK = 0x000000f0;
        static constexpr unsigned ADDHLD(unsigned value) { return (value << 4); }
        static constexpr unsigned DATAST_POS = 8;
        static constexpr unsigned DATAST_MASK = 0x0000ff00;
        static constexpr unsigned DATAST(unsigned value) { return (value << 8); }
        static constexpr unsigned CLKDIV_POS = 20;
        static constexpr unsigned CLKDIV_MASK = 0x00f00000;
        static constexpr unsigned CLKDIV(unsigned value) { return (value << 20); }
        static constexpr unsigned DATLAT_POS = 24;
        static constexpr unsigned DATLAT_MASK = 0x0f000000;
        static constexpr unsigned DATLAT(unsigned value) { return (value << 24); }
        static constexpr unsigned ACCMOD_POS = 28;
        static constexpr unsigned ACCMOD_MASK = 0x30000000;
        static constexpr unsigned ACCMOD(unsigned value) { return (value << 28); }
    } BWTR4;

}; // struct FSMC_T

static_assert(sizeof(FSMC_T) == FSMC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp