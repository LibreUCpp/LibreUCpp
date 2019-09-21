#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PORT_T
{
    static constexpr size_t INSTANCE_SIZE = 96;
    static constexpr intptr_t BASE_ADDRESS_PORT_0 = 0x41000000;
    static constexpr intptr_t BASE_ADDRESS_PORT_1 = 0x41000080;
    static constexpr intptr_t BASE_ADDRESS_PORT_2 = 0x41000100;
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
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_PMUX = 0x30;
    static constexpr intptr_t ADDR_OFFSET_PINCFG = 0x40;

    volatile union DIR_T // DIR: Data Direction 
    {
        uint32_t reg;
    } DIR;

    volatile union DIRCLR_T // DIRCLR: Data Direction Clear 
    {
        uint32_t reg;
    } DIRCLR;

    volatile union DIRSET_T // DIRSET: Data Direction Set 
    {
        uint32_t reg;
    } DIRSET;

    volatile union DIRTGL_T // DIRTGL: Data Direction Toggle 
    {
        uint32_t reg;
    } DIRTGL;

    volatile union OUT_T // OUT: Data Output Value 
    {
        uint32_t reg;
    } OUT;

    volatile union OUTCLR_T // OUTCLR: Data Output Value Clear 
    {
        uint32_t reg;
    } OUTCLR;

    volatile union OUTSET_T // OUTSET: Data Output Value Set 
    {
        uint32_t reg;
    } OUTSET;

    volatile union OUTTGL_T // OUTTGL: Data Output Value Toggle 
    {
        uint32_t reg;
    } OUTTGL;

    volatile union IN_T // IN: Data Input Value 
    {
        uint32_t reg;
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
            unsigned PMUXEN   : 1; // bit 16 Select Peripheral Multiplexer
            unsigned INEN     : 1; // bit 17 Input Enable
            unsigned PULLEN   : 1; // bit 18 Pull Enable
            unsigned          : 3; // bits 19..21 unused
            unsigned DRVSTR   : 1; // bit 22 Output Driver Strength Selection
            unsigned          : 1; // bit 23 unused
            unsigned PMUX     : 4; // bits 24..27 Peripheral Multiplexing Template
            unsigned WRPMUX   : 1; // bit 28 Write PMUX Registers
            unsigned          : 1; // bit 29 unused
            unsigned WRPINCFG : 1; // bit 30 Write PINCFG Registers
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

    volatile union EVCTRL_T // EVCTRL: Event Input Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned PID0    : 5; // bits 0..4 Port Event Pin Identifier 0
            unsigned EVACT0  : 2; // bits 5..6 Port Event Action 0
            unsigned PORTEI0 : 1; // bit 7 Port Event Enable Input 0
            unsigned PID1    : 5; // bits 8..12 Port Event Pin Identifier 1
            unsigned EVACT1  : 2; // bits 13..14 Port Event Action 1
            unsigned PORTEI1 : 1; // bit 15 Port Event Enable Input 1
            unsigned PID2    : 5; // bits 16..20 Port Event Pin Identifier 2
            unsigned EVACT2  : 2; // bits 21..22 Port Event Action 2
            unsigned PORTEI2 : 1; // bit 23 Port Event Enable Input 2
            unsigned PID3    : 5; // bits 24..28 Port Event Pin Identifier 3
            unsigned EVACT3  : 2; // bits 29..30 Port Event Action 3
            unsigned PORTEI3 : 1; // bit 31 Port Event Enable Input 3    
        } bit;
    
        static constexpr unsigned PID0_POS = 0;
        static constexpr unsigned PID0_MASK = 0x0000001f;
        static constexpr unsigned PID0(unsigned value) { return (value << 0); }
        static constexpr unsigned EVACT0_POS = 5;
        static constexpr unsigned EVACT0_MASK = 0x00000060;
        static constexpr unsigned EVACT0(unsigned value) { return (value << 5); }
        static constexpr unsigned PORTEI0_POS = 7;
        static constexpr unsigned PORTEI0_MASK = 0x00000080;
        static constexpr unsigned PORTEI0(unsigned value) { return (value << 7); }
        static constexpr unsigned PID1_POS = 8;
        static constexpr unsigned PID1_MASK = 0x00001f00;
        static constexpr unsigned PID1(unsigned value) { return (value << 8); }
        static constexpr unsigned EVACT1_POS = 13;
        static constexpr unsigned EVACT1_MASK = 0x00006000;
        static constexpr unsigned EVACT1(unsigned value) { return (value << 13); }
        static constexpr unsigned PORTEI1_POS = 15;
        static constexpr unsigned PORTEI1_MASK = 0x00008000;
        static constexpr unsigned PORTEI1(unsigned value) { return (value << 15); }
        static constexpr unsigned PID2_POS = 16;
        static constexpr unsigned PID2_MASK = 0x001f0000;
        static constexpr unsigned PID2(unsigned value) { return (value << 16); }
        static constexpr unsigned EVACT2_POS = 21;
        static constexpr unsigned EVACT2_MASK = 0x00600000;
        static constexpr unsigned EVACT2(unsigned value) { return (value << 21); }
        static constexpr unsigned PORTEI2_POS = 23;
        static constexpr unsigned PORTEI2_MASK = 0x00800000;
        static constexpr unsigned PORTEI2(unsigned value) { return (value << 23); }
        static constexpr unsigned PID3_POS = 24;
        static constexpr unsigned PID3_MASK = 0x1f000000;
        static constexpr unsigned PID3(unsigned value) { return (value << 24); }
        static constexpr unsigned EVACT3_POS = 29;
        static constexpr unsigned EVACT3_MASK = 0x60000000;
        static constexpr unsigned EVACT3(unsigned value) { return (value << 29); }
        static constexpr unsigned PORTEI3_POS = 31;
        static constexpr unsigned PORTEI3_MASK = 0x80000000;
        static constexpr unsigned PORTEI3(unsigned value) { return (value << 31); }
    } EVCTRL;

    volatile union PMUX_T // PMUX: Peripheral Multiplexing n 
    {
        uint8_t reg;
        struct __attribute__((packed)) PMUX_BIT_T
        {
            unsigned PMUXE : 4; // bits 0..3 Peripheral Multiplexing for Even-Numbered Pin
            unsigned PMUXO : 4; // bits 4..7 Peripheral Multiplexing for Odd-Numbered Pin    
        } bit;
    
        static constexpr unsigned PMUXE_POS = 0;
        static constexpr unsigned PMUXE_MASK = 0x0000000f;
        static constexpr unsigned PMUXE(unsigned value) { return (value << 0); }
        static constexpr unsigned PMUXO_POS = 4;
        static constexpr unsigned PMUXO_MASK = 0x000000f0;
        static constexpr unsigned PMUXO(unsigned value) { return (value << 4); }
    } PMUX[16];

    volatile union PINCFG_T // PINCFG: Pin Configuration n 
    {
        uint8_t reg;
        struct __attribute__((packed)) PINCFG_BIT_T
        {
            unsigned PMUXEN : 1; // bit 0 Select Peripheral Multiplexer
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