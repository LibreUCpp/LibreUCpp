#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) FPU_T
{
    static constexpr size_t INSTANCE_SIZE = 12;
    static constexpr intptr_t BASE_ADDRESS = 0xe000ef34;

    static constexpr intptr_t ADDR_OFFSET_FPCCR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_FPCAR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_FPSCR = 0x08;

    volatile union FPCCR_T // FPCCR: Floating-point context control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FPCCR_BIT_T
        {
            unsigned LSPACT : 1; // bit 0 LSPACT
            unsigned USER   : 1; // bit 1 USER
            unsigned        : 1; // bit 2 unused
            unsigned THREAD : 1; // bit 3 THREAD
            unsigned HFRDY  : 1; // bit 4 HFRDY
            unsigned MMRDY  : 1; // bit 5 MMRDY
            unsigned BFRDY  : 1; // bit 6 BFRDY
            unsigned        : 1; // bit 7 unused
            unsigned MONRDY : 1; // bit 8 MONRDY
            unsigned        : 21; // bits 9..29 unused
            unsigned LSPEN  : 1; // bit 30 LSPEN
            unsigned ASPEN  : 1; // bit 31 ASPEN    
        } bit;
    
        static constexpr unsigned LSPACT_POS = 0;
        static constexpr unsigned LSPACT_MASK = 0x00000001;
        static constexpr unsigned LSPACT(unsigned value) { return (value << 0); }
        static constexpr unsigned USER_POS = 1;
        static constexpr unsigned USER_MASK = 0x00000002;
        static constexpr unsigned USER(unsigned value) { return (value << 1); }
        static constexpr unsigned THREAD_POS = 3;
        static constexpr unsigned THREAD_MASK = 0x00000008;
        static constexpr unsigned THREAD(unsigned value) { return (value << 3); }
        static constexpr unsigned HFRDY_POS = 4;
        static constexpr unsigned HFRDY_MASK = 0x00000010;
        static constexpr unsigned HFRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned MMRDY_POS = 5;
        static constexpr unsigned MMRDY_MASK = 0x00000020;
        static constexpr unsigned MMRDY(unsigned value) { return (value << 5); }
        static constexpr unsigned BFRDY_POS = 6;
        static constexpr unsigned BFRDY_MASK = 0x00000040;
        static constexpr unsigned BFRDY(unsigned value) { return (value << 6); }
        static constexpr unsigned MONRDY_POS = 8;
        static constexpr unsigned MONRDY_MASK = 0x00000100;
        static constexpr unsigned MONRDY(unsigned value) { return (value << 8); }
        static constexpr unsigned LSPEN_POS = 30;
        static constexpr unsigned LSPEN_MASK = 0x40000000;
        static constexpr unsigned LSPEN(unsigned value) { return (value << 30); }
        static constexpr unsigned ASPEN_POS = 31;
        static constexpr unsigned ASPEN_MASK = 0x80000000;
        static constexpr unsigned ASPEN(unsigned value) { return (value << 31); }
    } FPCCR;

    volatile union FPCAR_T // FPCAR: Floating-point context address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FPCAR_BIT_T
        {
            unsigned         : 3; // bits 0..2 unused
            unsigned ADDRESS : 29; // bits 3..31 Location of unpopulated floating-point    
        } bit;
    
        static constexpr unsigned ADDRESS_POS = 3;
        static constexpr unsigned ADDRESS_MASK = 0xfffffff8;
        static constexpr unsigned ADDRESS(unsigned value) { return (value << 3); }
    } FPCAR;

    volatile union FPSCR_T // FPSCR: Floating-point status control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FPSCR_BIT_T
        {
            unsigned IOC   : 1; // bit 0 Invalid operation cumulative exception bit
            unsigned DZC   : 1; // bit 1 Division by zero cumulative exception bit.
            unsigned OFC   : 1; // bit 2 Overflow cumulative exception bit
            unsigned UFC   : 1; // bit 3 Underflow cumulative exception bit
            unsigned IXC   : 1; // bit 4 Inexact cumulative exception bit
            unsigned       : 2; // bits 5..6 unused
            unsigned IDC   : 1; // bit 7 Input denormal cumulative exception bit.
            unsigned       : 14; // bits 8..21 unused
            unsigned RMode : 2; // bits 22..23 Rounding Mode control field
            unsigned FZ    : 1; // bit 24 Flush-to-zero mode control bit:
            unsigned DN    : 1; // bit 25 Default NaN mode control bit
            unsigned AHP   : 1; // bit 26 Alternative half-precision control bit
            unsigned       : 1; // bit 27 unused
            unsigned V     : 1; // bit 28 Overflow condition code flag
            unsigned C     : 1; // bit 29 Carry condition code flag
            unsigned Z     : 1; // bit 30 Zero condition code flag
            unsigned N     : 1; // bit 31 Negative condition code flag    
        } bit;
    
        static constexpr unsigned IOC_POS = 0;
        static constexpr unsigned IOC_MASK = 0x00000001;
        static constexpr unsigned IOC(unsigned value) { return (value << 0); }
        static constexpr unsigned DZC_POS = 1;
        static constexpr unsigned DZC_MASK = 0x00000002;
        static constexpr unsigned DZC(unsigned value) { return (value << 1); }
        static constexpr unsigned OFC_POS = 2;
        static constexpr unsigned OFC_MASK = 0x00000004;
        static constexpr unsigned OFC(unsigned value) { return (value << 2); }
        static constexpr unsigned UFC_POS = 3;
        static constexpr unsigned UFC_MASK = 0x00000008;
        static constexpr unsigned UFC(unsigned value) { return (value << 3); }
        static constexpr unsigned IXC_POS = 4;
        static constexpr unsigned IXC_MASK = 0x00000010;
        static constexpr unsigned IXC(unsigned value) { return (value << 4); }
        static constexpr unsigned IDC_POS = 7;
        static constexpr unsigned IDC_MASK = 0x00000080;
        static constexpr unsigned IDC(unsigned value) { return (value << 7); }
        static constexpr unsigned RMode_POS = 22;
        static constexpr unsigned RMode_MASK = 0x00c00000;
        static constexpr unsigned RMode(unsigned value) { return (value << 22); }
        static constexpr unsigned FZ_POS = 24;
        static constexpr unsigned FZ_MASK = 0x01000000;
        static constexpr unsigned FZ(unsigned value) { return (value << 24); }
        static constexpr unsigned DN_POS = 25;
        static constexpr unsigned DN_MASK = 0x02000000;
        static constexpr unsigned DN(unsigned value) { return (value << 25); }
        static constexpr unsigned AHP_POS = 26;
        static constexpr unsigned AHP_MASK = 0x04000000;
        static constexpr unsigned AHP(unsigned value) { return (value << 26); }
        static constexpr unsigned V_POS = 28;
        static constexpr unsigned V_MASK = 0x10000000;
        static constexpr unsigned V(unsigned value) { return (value << 28); }
        static constexpr unsigned C_POS = 29;
        static constexpr unsigned C_MASK = 0x20000000;
        static constexpr unsigned C(unsigned value) { return (value << 29); }
        static constexpr unsigned Z_POS = 30;
        static constexpr unsigned Z_MASK = 0x40000000;
        static constexpr unsigned Z(unsigned value) { return (value << 30); }
        static constexpr unsigned N_POS = 31;
        static constexpr unsigned N_MASK = 0x80000000;
        static constexpr unsigned N(unsigned value) { return (value << 31); }
    } FPSCR;

}; // struct FPU_T

static_assert(sizeof(FPU_T) == FPU_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp