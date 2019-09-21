#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PORT_T
{
    static constexpr size_t INSTANCE_SIZE = 96;
    static constexpr intptr_t BASE_ADDRESS_PORT = 0x41004400;
    static constexpr intptr_t BASE_ADDRESS_PORT_IOBUS = 0x60000000;

    static constexpr intptr_t ADDR_OFFSET_DIR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DIRCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DIRSET = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DIRTGL = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_OUT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_OUTCLR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_OUTSET = 0x18;
    static constexpr intptr_t ADDR_OFFSET_OUTTGL = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_IN = 0x20;
    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x24;
    static constexpr intptr_t ADDR_OFFSET_WRCONFIG = 0x28;
    static constexpr intptr_t ADDR_OFFSET_PMUX = 0x30;
    static constexpr intptr_t ADDR_OFFSET_PINCFG = 0x40;

    volatile union DIR_T // DIR: Data Direction 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIR_BIT_T
        {
            unsigned DIR : 32; // bits 0..31 Port Data Direction    
        } bit;
    
        static constexpr unsigned DIR_POS = 0;
        static constexpr unsigned DIR_MASK = 0xffffffff;
        static constexpr unsigned DIR(unsigned value) { return (value << 0); }
    } DIR;

    volatile union DIRCLR_T // DIRCLR: Data Direction Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIRCLR_BIT_T
        {
            unsigned DIRCLR : 32; // bits 0..31 Port Data Direction Clear    
        } bit;
    
        static constexpr unsigned DIRCLR_POS = 0;
        static constexpr unsigned DIRCLR_MASK = 0xffffffff;
        static constexpr unsigned DIRCLR(unsigned value) { return (value << 0); }
    } DIRCLR;

    volatile union DIRSET_T // DIRSET: Data Direction Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIRSET_BIT_T
        {
            unsigned DIRSET : 32; // bits 0..31 Port Data Direction Set    
        } bit;
    
        static constexpr unsigned DIRSET_POS = 0;
        static constexpr unsigned DIRSET_MASK = 0xffffffff;
        static constexpr unsigned DIRSET(unsigned value) { return (value << 0); }
    } DIRSET;

    volatile union DIRTGL_T // DIRTGL: Data Direction Toggle 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIRTGL_BIT_T
        {
            unsigned DIRTGL : 32; // bits 0..31 Port Data Direction Toggle    
        } bit;
    
        static constexpr unsigned DIRTGL_POS = 0;
        static constexpr unsigned DIRTGL_MASK = 0xffffffff;
        static constexpr unsigned DIRTGL(unsigned value) { return (value << 0); }
    } DIRTGL;

    volatile union OUT_T // OUT: Data Output Value 
    {
        uint32_t reg;
        struct __attribute__((packed)) OUT_BIT_T
        {
            unsigned OUT : 32; // bits 0..31 Port Data Output Value    
        } bit;
    
        static constexpr unsigned OUT_POS = 0;
        static constexpr unsigned OUT_MASK = 0xffffffff;
        static constexpr unsigned OUT(unsigned value) { return (value << 0); }
    } OUT;

    volatile union OUTCLR_T // OUTCLR: Data Output Value Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) OUTCLR_BIT_T
        {
            unsigned OUTCLR : 32; // bits 0..31 Port Data Output Value Clear    
        } bit;
    
        static constexpr unsigned OUTCLR_POS = 0;
        static constexpr unsigned OUTCLR_MASK = 0xffffffff;
        static constexpr unsigned OUTCLR(unsigned value) { return (value << 0); }
    } OUTCLR;

    volatile union OUTSET_T // OUTSET: Data Output Value Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) OUTSET_BIT_T
        {
            unsigned OUTSET : 32; // bits 0..31 Port Data Output Value Set    
        } bit;
    
        static constexpr unsigned OUTSET_POS = 0;
        static constexpr unsigned OUTSET_MASK = 0xffffffff;
        static constexpr unsigned OUTSET(unsigned value) { return (value << 0); }
    } OUTSET;

    volatile union OUTTGL_T // OUTTGL: Data Output Value Toggle 
    {
        uint32_t reg;
        struct __attribute__((packed)) OUTTGL_BIT_T
        {
            unsigned OUTTGL : 32; // bits 0..31 Port Data Output Value Toggle    
        } bit;
    
        static constexpr unsigned OUTTGL_POS = 0;
        static constexpr unsigned OUTTGL_MASK = 0xffffffff;
        static constexpr unsigned OUTTGL(unsigned value) { return (value << 0); }
    } OUTTGL;

    volatile union IN_T // IN: Data Input Value 
    {
        uint32_t reg;
        struct __attribute__((packed)) IN_BIT_T
        {
            unsigned IN : 32; // bits 0..31 Port Data Input Value    
        } bit;
    
        static constexpr unsigned IN_POS = 0;
        static constexpr unsigned IN_MASK = 0xffffffff;
        static constexpr unsigned IN(unsigned value) { return (value << 0); }
    } IN;

    volatile union CTRL_T // CTRL: Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned SAMPLING : 32; // bits 0..31 Input Sampling Mode    
        } bit;
    
        static constexpr unsigned SAMPLING_POS = 0;
        static constexpr unsigned SAMPLING_MASK = 0xffffffff;
        static constexpr unsigned SAMPLING(unsigned value) { return (value << 0); }
    } CTRL;

    volatile union WRCONFIG_T // WRCONFIG: Write Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) WRCONFIG_BIT_T
        {
            unsigned PINMASK  : 16; // bits 0..15 Pin Mask for Multiple Pin Configuration
            unsigned PMUXEN   : 1; // bit 16 Peripheral Multiplexer Enable
            unsigned INEN     : 1; // bit 17 Input Enable
            unsigned PULLEN   : 1; // bit 18 Pull Enable
            unsigned          : 3; // bits 19..21 unused
            unsigned DRVSTR   : 1; // bit 22 Output Driver Strength Selection
            unsigned          : 1; // bit 23 unused
            unsigned PMUX     : 4; // bits 24..27 Peripheral Multiplexing
            unsigned WRPMUX   : 1; // bit 28 Write PMUX
            unsigned          : 1; // bit 29 unused
            unsigned WRPINCFG : 1; // bit 30 Write PINCFG
            unsigned HWSEL    : 1; // bit 31 Half-Word Select    
        } bit;
    
        static constexpr unsigned PINMASK_POS = 0;
        static constexpr unsigned PINMASK_MASK = 0x0000ffff;
        static constexpr unsigned PINMASK(unsigned value) { return (value << 0); }
        static constexpr unsigned PMUXEN_POS = 16;
        static constexpr unsigned PMUXEN_MASK = 0x00010000;
        static constexpr unsigned PMUXEN(unsigned value) { return (value << 16); }
        static constexpr unsigned INEN_POS = 17;
        static constexpr unsigned INEN_MASK = 0x00020000;
        static constexpr unsigned INEN(unsigned value) { return (value << 17); }
        static constexpr unsigned PULLEN_POS = 18;
        static constexpr unsigned PULLEN_MASK = 0x00040000;
        static constexpr unsigned PULLEN(unsigned value) { return (value << 18); }
        static constexpr unsigned DRVSTR_POS = 22;
        static constexpr unsigned DRVSTR_MASK = 0x00400000;
        static constexpr unsigned DRVSTR(unsigned value) { return (value << 22); }
        static constexpr unsigned PMUX_POS = 24;
        static constexpr unsigned PMUX_MASK = 0x0f000000;
        static constexpr unsigned PMUX(unsigned value) { return (value << 24); }
        static constexpr unsigned WRPMUX_POS = 28;
        static constexpr unsigned WRPMUX_MASK = 0x10000000;
        static constexpr unsigned WRPMUX(unsigned value) { return (value << 28); }
        static constexpr unsigned WRPINCFG_POS = 30;
        static constexpr unsigned WRPINCFG_MASK = 0x40000000;
        static constexpr unsigned WRPINCFG(unsigned value) { return (value << 30); }
        static constexpr unsigned HWSEL_POS = 31;
        static constexpr unsigned HWSEL_MASK = 0x80000000;
        static constexpr unsigned HWSEL(unsigned value) { return (value << 31); }
    } WRCONFIG;

    uint8_t Reserved1[4];

    volatile union PMUX_T // PMUX: Peripheral Multiplexing n - Group 0 
    {
        uint8_t reg;
        struct __attribute__((packed)) PMUX_BIT_T
        {
            unsigned PMUXE : 4; // bits 0..3 Peripheral Multiplexing Even
            unsigned PMUXO : 4; // bits 4..7 Peripheral Multiplexing Odd    
        } bit;
    
        static constexpr unsigned PMUXE_POS = 0;
        static constexpr unsigned PMUXE_MASK = 0x0000000f;
        static constexpr unsigned PMUXE(unsigned value) { return (value << 0); }
        static constexpr unsigned PMUXO_POS = 4;
        static constexpr unsigned PMUXO_MASK = 0x000000f0;
        static constexpr unsigned PMUXO(unsigned value) { return (value << 4); }
    } PMUX[16];

    volatile union PINCFG_T // PINCFG: Pin Configuration n - Group 0 
    {
        uint8_t reg;
        struct __attribute__((packed)) PINCFG_BIT_T
        {
            unsigned PMUXEN : 1; // bit 0 Peripheral Multiplexer Enable
            unsigned INEN   : 1; // bit 1 Input Enable
            unsigned PULLEN : 1; // bit 2 Pull Enable
            unsigned        : 3; // bits 3..5 unused
            unsigned DRVSTR : 1; // bit 6 Output Driver Strength Selection
            unsigned        : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned PMUXEN_POS = 0;
        static constexpr unsigned PMUXEN_MASK = 0x00000001;
        static constexpr unsigned PMUXEN(unsigned value) { return (value << 0); }
        static constexpr unsigned INEN_POS = 1;
        static constexpr unsigned INEN_MASK = 0x00000002;
        static constexpr unsigned INEN(unsigned value) { return (value << 1); }
        static constexpr unsigned PULLEN_POS = 2;
        static constexpr unsigned PULLEN_MASK = 0x00000004;
        static constexpr unsigned PULLEN(unsigned value) { return (value << 2); }
        static constexpr unsigned DRVSTR_POS = 6;
        static constexpr unsigned DRVSTR_MASK = 0x00000040;
        static constexpr unsigned DRVSTR(unsigned value) { return (value << 6); }
    } PINCFG[32];

}; // struct PORT_T

static_assert(sizeof(PORT_T) == PORT_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp