#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SystemControl_T
{
    static constexpr size_t INSTANCE_SIZE = 3380;
    static constexpr intptr_t BASE_ADDRESS = 0xe000e000;

    static constexpr intptr_t ADDR_OFFSET_CPUID = 0xd00;
    static constexpr intptr_t ADDR_OFFSET_ICSR = 0xd04;
    static constexpr intptr_t ADDR_OFFSET_VTOR = 0xd08;
    static constexpr intptr_t ADDR_OFFSET_AIRCR = 0xd0c;
    static constexpr intptr_t ADDR_OFFSET_SCR = 0xd10;
    static constexpr intptr_t ADDR_OFFSET_CCR = 0xd14;
    static constexpr intptr_t ADDR_OFFSET_SHPR2 = 0xd1c;
    static constexpr intptr_t ADDR_OFFSET_SHPR3 = 0xd20;
    static constexpr intptr_t ADDR_OFFSET_SHCSR = 0xd24;
    static constexpr intptr_t ADDR_OFFSET_DFSR = 0xd30;

    uint8_t Reserved1[3328];

    volatile union CPUID_T // CPUID: CPUID Base Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPUID_BIT_T
        {
            unsigned REVISION     : 4; // bits 0..3 Minor revision number
            unsigned PARTNO       : 12; // bits 4..15 Processor Part Number, 0xC60=Cortex-M0+
            unsigned ARCHITECTURE : 4; // bits 16..19 Processor Architecture, 0xC=ARMv6-M
            unsigned VARIANT      : 4; // bits 20..23 Major revision number
            unsigned IMPLEMENTER  : 8; // bits 24..31 Implementer code, ARM=0x41    
        } bit;
    
        static constexpr unsigned REVISION_POS = 0;
        static constexpr unsigned REVISION_MASK = 0x0000000f;
        static constexpr unsigned REVISION(unsigned value) { return (value << 0); }
        static constexpr unsigned PARTNO_POS = 4;
        static constexpr unsigned PARTNO_MASK = 0x0000fff0;
        static constexpr unsigned PARTNO(unsigned value) { return (value << 4); }
        static constexpr unsigned ARCHITECTURE_POS = 16;
        static constexpr unsigned ARCHITECTURE_MASK = 0x000f0000;
        static constexpr unsigned ARCHITECTURE(unsigned value) { return (value << 16); }
        static constexpr unsigned VARIANT_POS = 20;
        static constexpr unsigned VARIANT_MASK = 0x00f00000;
        static constexpr unsigned VARIANT(unsigned value) { return (value << 20); }
        static constexpr unsigned IMPLEMENTER_POS = 24;
        static constexpr unsigned IMPLEMENTER_MASK = 0xff000000;
        static constexpr unsigned IMPLEMENTER(unsigned value) { return (value << 24); }
    } CPUID;

    volatile union ICSR_T // ICSR: Interrupt Control and State Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICSR_BIT_T
        {
            unsigned VECTACTIVE  : 9; // bits 0..8 Debug: Exception number of currently executing exception, or 0 if thread mode
            unsigned             : 3; // bits 9..11 unused
            unsigned VECTPENDING : 9; // bits 12..20 Exception number of the highest priority pending enabled exception
            unsigned             : 1; // bit 21 unused
            unsigned ISRPENDING  : 1; // bit 22 Debug: NVIC interrupt pending
            unsigned ISRPREEMPT  : 1; // bit 23 Debug: Pending exception serviced on exit from debug halt
            unsigned             : 1; // bit 24 unused
            unsigned PENDSTCLR   : 1; // bit 25 SysTick exception clear-pending bit
            unsigned PENDSTSET   : 1; // bit 26 SysTick exception set-pending bit
            unsigned PENDSVCLR   : 1; // bit 27 PendSV clear-pending bit
            unsigned PENDSVSET   : 1; // bit 28 PendSV set-pending bit
            unsigned             : 2; // bits 29..30 unused
            unsigned NMIPENDSET  : 1; // bit 31 NMI set-pending bit    
        } bit;
    
        static constexpr unsigned VECTACTIVE_POS = 0;
        static constexpr unsigned VECTACTIVE_MASK = 0x000001ff;
        static constexpr unsigned VECTACTIVE(unsigned value) { return (value << 0); }
        static constexpr unsigned VECTPENDING_POS = 12;
        static constexpr unsigned VECTPENDING_MASK = 0x001ff000;
        static constexpr unsigned VECTPENDING(unsigned value) { return (value << 12); }
        static constexpr unsigned ISRPENDING_POS = 22;
        static constexpr unsigned ISRPENDING_MASK = 0x00400000;
        static constexpr unsigned ISRPENDING(unsigned value) { return (value << 22); }
        static constexpr unsigned ISRPREEMPT_POS = 23;
        static constexpr unsigned ISRPREEMPT_MASK = 0x00800000;
        static constexpr unsigned ISRPREEMPT(unsigned value) { return (value << 23); }
        static constexpr unsigned PENDSTCLR_POS = 25;
        static constexpr unsigned PENDSTCLR_MASK = 0x02000000;
        static constexpr unsigned PENDSTCLR(unsigned value) { return (value << 25); }
        static constexpr unsigned PENDSTSET_POS = 26;
        static constexpr unsigned PENDSTSET_MASK = 0x04000000;
        static constexpr unsigned PENDSTSET(unsigned value) { return (value << 26); }
        static constexpr unsigned PENDSVCLR_POS = 27;
        static constexpr unsigned PENDSVCLR_MASK = 0x08000000;
        static constexpr unsigned PENDSVCLR(unsigned value) { return (value << 27); }
        static constexpr unsigned PENDSVSET_POS = 28;
        static constexpr unsigned PENDSVSET_MASK = 0x10000000;
        static constexpr unsigned PENDSVSET(unsigned value) { return (value << 28); }
        static constexpr unsigned NMIPENDSET_POS = 31;
        static constexpr unsigned NMIPENDSET_MASK = 0x80000000;
        static constexpr unsigned NMIPENDSET(unsigned value) { return (value << 31); }
    } ICSR;

    volatile union VTOR_T // VTOR: Vector Table Offset Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) VTOR_BIT_T
        {
            unsigned        : 7; // bits 0..6 unused
            unsigned TBLOFF : 25; // bits 7..31 Vector table base offset    
        } bit;
    
        static constexpr unsigned TBLOFF_POS = 7;
        static constexpr unsigned TBLOFF_MASK = 0xffffff80;
        static constexpr unsigned TBLOFF(unsigned value) { return (value << 7); }
    } VTOR;

    volatile union AIRCR_T // AIRCR: Application Interrupt and Reset Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AIRCR_BIT_T
        {
            unsigned               : 1; // bit 0 unused
            unsigned VECTCLRACTIVE : 1; // bit 1 Debug: Clear state information
            unsigned SYSRESETREQ   : 1; // bit 2 System Reset Request
            unsigned               : 12; // bits 3..14 unused
            unsigned ENDIANNESS    : 1; // bit 15 Data Endianness, 0=little, 1=big
            unsigned VECTKEY       : 16; // bits 16..31 Register key (0x05FA)    
        } bit;
    
        static constexpr unsigned VECTCLRACTIVE_POS = 1;
        static constexpr unsigned VECTCLRACTIVE_MASK = 0x00000002;
        static constexpr unsigned VECTCLRACTIVE(unsigned value) { return (value << 1); }
        static constexpr unsigned SYSRESETREQ_POS = 2;
        static constexpr unsigned SYSRESETREQ_MASK = 0x00000004;
        static constexpr unsigned SYSRESETREQ(unsigned value) { return (value << 2); }
        static constexpr unsigned ENDIANNESS_POS = 15;
        static constexpr unsigned ENDIANNESS_MASK = 0x00008000;
        static constexpr unsigned ENDIANNESS(unsigned value) { return (value << 15); }
        static constexpr unsigned VECTKEY_POS = 16;
        static constexpr unsigned VECTKEY_MASK = 0xffff0000;
        static constexpr unsigned VECTKEY(unsigned value) { return (value << 16); }
    } AIRCR;

    volatile union SCR_T // SCR: System Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SCR_BIT_T
        {
            unsigned             : 1; // bit 0 unused
            unsigned SLEEPONEXIT : 1; // bit 1 Sleep-On-Exit when exiting Handler mode
            unsigned SLEEPDEEP   : 1; // bit 2 Uses Deep Sleep as low power mode
            unsigned             : 1; // bit 3 unused
            unsigned SEVONPEND   : 1; // bit 4 Send Event on Pending bit
            unsigned             : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned SLEEPONEXIT_POS = 1;
        static constexpr unsigned SLEEPONEXIT_MASK = 0x00000002;
        static constexpr unsigned SLEEPONEXIT(unsigned value) { return (value << 1); }
        static constexpr unsigned SLEEPDEEP_POS = 2;
        static constexpr unsigned SLEEPDEEP_MASK = 0x00000004;
        static constexpr unsigned SLEEPDEEP(unsigned value) { return (value << 2); }
        static constexpr unsigned SEVONPEND_POS = 4;
        static constexpr unsigned SEVONPEND_MASK = 0x00000010;
        static constexpr unsigned SEVONPEND(unsigned value) { return (value << 4); }
    } SCR;

    volatile union CCR_T // CCR: Configuration and Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR_BIT_T
        {
            unsigned             : 3; // bits 0..2 unused
            unsigned UNALIGN_TRP : 1; // bit 3 Unaligned accesses generates a Hard Fault
            unsigned             : 5; // bits 4..8 unused
            unsigned STKALIGN    : 1; // bit 9 Stack 8-byte aligned on exception entry
            unsigned             : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned UNALIGN_TRP_POS = 3;
        static constexpr unsigned UNALIGN_TRP_MASK = 0x00000008;
        static constexpr unsigned UNALIGN_TRP(unsigned value) { return (value << 3); }
        static constexpr unsigned STKALIGN_POS = 9;
        static constexpr unsigned STKALIGN_MASK = 0x00000200;
        static constexpr unsigned STKALIGN(unsigned value) { return (value << 9); }
    } CCR;

    uint8_t Reserved2[4];

    volatile union SHPR2_T // SHPR2: System Handler Priority Register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHPR2_BIT_T
        {
            unsigned        : 24; // bits 0..23 unused
            unsigned PRI_11 : 8; // bits 24..31 Priority of system handler 11, SVCall    
        } bit;
    
        static constexpr unsigned PRI_11_POS = 24;
        static constexpr unsigned PRI_11_MASK = 0xff000000;
        static constexpr unsigned PRI_11(unsigned value) { return (value << 24); }
    } SHPR2;

    volatile union SHPR3_T // SHPR3: System Handler Priority Register 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHPR3_BIT_T
        {
            unsigned        : 16; // bits 0..15 unused
            unsigned PRI_14 : 8; // bits 16..23 Priority of system handler 14, PendSV
            unsigned PRI_15 : 8; // bits 24..31 Priority of system handler 15, SysTick exception    
        } bit;
    
        static constexpr unsigned PRI_14_POS = 16;
        static constexpr unsigned PRI_14_MASK = 0x00ff0000;
        static constexpr unsigned PRI_14(unsigned value) { return (value << 16); }
        static constexpr unsigned PRI_15_POS = 24;
        static constexpr unsigned PRI_15_MASK = 0xff000000;
        static constexpr unsigned PRI_15(unsigned value) { return (value << 24); }
    } SHPR3;

    volatile union SHCSR_T // SHCSR: System Handler Control and State Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHCSR_BIT_T
        {
            unsigned              : 15; // bits 0..14 unused
            unsigned SVCALLPENDED : 1; // bit 15 
            unsigned              : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned SVCALLPENDED_POS = 15;
        static constexpr unsigned SVCALLPENDED_MASK = 0x00008000;
        static constexpr unsigned SVCALLPENDED(unsigned value) { return (value << 15); }
    } SHCSR;

    uint8_t Reserved3[8];

    volatile union DFSR_T // DFSR: Debug Fault Status Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DFSR_BIT_T
        {
            unsigned HALTED   : 1; // bit 0 Halt request debug event active
            unsigned BKPT     : 1; // bit 1 Breakpoint debug event
            unsigned DWTTRAP  : 1; // bit 2 DWT debug event
            unsigned VCATCH   : 1; // bit 3 Vector catch debug event
            unsigned EXTERNAL : 1; // bit 4 EDBGRQ debug event
            unsigned          : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned HALTED_POS = 0;
        static constexpr unsigned HALTED_MASK = 0x00000001;
        static constexpr unsigned HALTED(unsigned value) { return (value << 0); }
        static constexpr unsigned BKPT_POS = 1;
        static constexpr unsigned BKPT_MASK = 0x00000002;
        static constexpr unsigned BKPT(unsigned value) { return (value << 1); }
        static constexpr unsigned DWTTRAP_POS = 2;
        static constexpr unsigned DWTTRAP_MASK = 0x00000004;
        static constexpr unsigned DWTTRAP(unsigned value) { return (value << 2); }
        static constexpr unsigned VCATCH_POS = 3;
        static constexpr unsigned VCATCH_MASK = 0x00000008;
        static constexpr unsigned VCATCH(unsigned value) { return (value << 3); }
        static constexpr unsigned EXTERNAL_POS = 4;
        static constexpr unsigned EXTERNAL_MASK = 0x00000010;
        static constexpr unsigned EXTERNAL(unsigned value) { return (value << 4); }
    } DFSR;

}; // struct SystemControl_T

static_assert(sizeof(SystemControl_T) == SystemControl_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp