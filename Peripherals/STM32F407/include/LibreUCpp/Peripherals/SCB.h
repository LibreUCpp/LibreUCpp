#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SCB_T
{
    static constexpr size_t INSTANCE_SIZE = 64;
    static constexpr size_t PADDED_INSTANCE_SIZE = 64;
    static constexpr intptr_t BASE_ADDRESS = 0xe000ed00;

    static constexpr intptr_t ADDR_OFFSET_CPUID = 0x00;
    static constexpr intptr_t ADDR_OFFSET_ICSR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_VTOR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_AIRCR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SCR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_CCR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_SHPR1 = 0x18;
    static constexpr intptr_t ADDR_OFFSET_SHPR2 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_SHPR3 = 0x20;
    static constexpr intptr_t ADDR_OFFSET_SHCRS = 0x24;
    static constexpr intptr_t ADDR_OFFSET_CFSR_UFSR_BFSR_MMFSR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_HFSR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_MMFAR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_BFAR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_AFSR = 0x3c;

    volatile union CPUID_T // CPUID: CPUID base register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPUID_BIT_T
        {
            unsigned Revision    : 4; // bits 0..3 Revision number
            unsigned PartNo      : 12; // bits 4..15 Part number of the processor
            unsigned Constant    : 4; // bits 16..19 Reads as 0xF
            unsigned Variant     : 4; // bits 20..23 Variant number
            unsigned Implementer : 8; // bits 24..31 Implementer code    
        } bit;
    
        static constexpr unsigned Revision_POS = 0;
        static constexpr unsigned Revision_MASK = 0x0000000f;
        static constexpr unsigned Revision(unsigned value) { return (value << 0); }
        static constexpr unsigned PartNo_POS = 4;
        static constexpr unsigned PartNo_MASK = 0x0000fff0;
        static constexpr unsigned PartNo(unsigned value) { return (value << 4); }
        static constexpr unsigned Constant_POS = 16;
        static constexpr unsigned Constant_MASK = 0x000f0000;
        static constexpr unsigned Constant(unsigned value) { return (value << 16); }
        static constexpr unsigned Variant_POS = 20;
        static constexpr unsigned Variant_MASK = 0x00f00000;
        static constexpr unsigned Variant(unsigned value) { return (value << 20); }
        static constexpr unsigned Implementer_POS = 24;
        static constexpr unsigned Implementer_MASK = 0xff000000;
        static constexpr unsigned Implementer(unsigned value) { return (value << 24); }
    } CPUID;

    volatile union ICSR_T // ICSR: Interrupt control and state register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICSR_BIT_T
        {
            unsigned VECTACTIVE  : 9; // bits 0..8 Active vector
            unsigned             : 2; // bits 9..10 unused
            unsigned RETTOBASE   : 1; // bit 11 Return to base level
            unsigned VECTPENDING : 7; // bits 12..18 Pending vector
            unsigned             : 3; // bits 19..21 unused
            unsigned ISRPENDING  : 1; // bit 22 Interrupt pending flag
            unsigned             : 2; // bits 23..24 unused
            unsigned PENDSTCLR   : 1; // bit 25 SysTick exception clear-pending bit
            unsigned PENDSTSET   : 1; // bit 26 SysTick exception set-pending bit
            unsigned PENDSVCLR   : 1; // bit 27 PendSV clear-pending bit
            unsigned PENDSVSET   : 1; // bit 28 PendSV set-pending bit
            unsigned             : 2; // bits 29..30 unused
            unsigned NMIPENDSET  : 1; // bit 31 NMI set-pending bit.    
        } bit;
    
        static constexpr unsigned VECTACTIVE_POS = 0;
        static constexpr unsigned VECTACTIVE_MASK = 0x000001ff;
        static constexpr unsigned VECTACTIVE(unsigned value) { return (value << 0); }
        static constexpr unsigned RETTOBASE_POS = 11;
        static constexpr unsigned RETTOBASE_MASK = 0x00000800;
        static constexpr unsigned RETTOBASE(unsigned value) { return (value << 11); }
        static constexpr unsigned VECTPENDING_POS = 12;
        static constexpr unsigned VECTPENDING_MASK = 0x0007f000;
        static constexpr unsigned VECTPENDING(unsigned value) { return (value << 12); }
        static constexpr unsigned ISRPENDING_POS = 22;
        static constexpr unsigned ISRPENDING_MASK = 0x00400000;
        static constexpr unsigned ISRPENDING(unsigned value) { return (value << 22); }
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

    volatile union VTOR_T // VTOR: Vector table offset register 
    {
        uint32_t reg;
        struct __attribute__((packed)) VTOR_BIT_T
        {
            unsigned        : 9; // bits 0..8 unused
            unsigned TBLOFF : 21; // bits 9..29 Vector table base offset field
            unsigned        : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned TBLOFF_POS = 9;
        static constexpr unsigned TBLOFF_MASK = 0x3ffffe00;
        static constexpr unsigned TBLOFF(unsigned value) { return (value << 9); }
    } VTOR;

    volatile union AIRCR_T // AIRCR: Application interrupt and reset control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AIRCR_BIT_T
        {
            unsigned VECTRESET     : 1; // bit 0 VECTRESET
            unsigned VECTCLRACTIVE : 1; // bit 1 VECTCLRACTIVE
            unsigned SYSRESETREQ   : 1; // bit 2 SYSRESETREQ
            unsigned               : 5; // bits 3..7 unused
            unsigned PRIGROUP      : 3; // bits 8..10 PRIGROUP
            unsigned               : 4; // bits 11..14 unused
            unsigned ENDIANESS     : 1; // bit 15 ENDIANESS
            unsigned VECTKEYSTAT   : 16; // bits 16..31 Register key    
        } bit;
    
        static constexpr unsigned VECTRESET_POS = 0;
        static constexpr unsigned VECTRESET_MASK = 0x00000001;
        static constexpr unsigned VECTRESET(unsigned value) { return (value << 0); }
        static constexpr unsigned VECTCLRACTIVE_POS = 1;
        static constexpr unsigned VECTCLRACTIVE_MASK = 0x00000002;
        static constexpr unsigned VECTCLRACTIVE(unsigned value) { return (value << 1); }
        static constexpr unsigned SYSRESETREQ_POS = 2;
        static constexpr unsigned SYSRESETREQ_MASK = 0x00000004;
        static constexpr unsigned SYSRESETREQ(unsigned value) { return (value << 2); }
        static constexpr unsigned PRIGROUP_POS = 8;
        static constexpr unsigned PRIGROUP_MASK = 0x00000700;
        static constexpr unsigned PRIGROUP(unsigned value) { return (value << 8); }
        static constexpr unsigned ENDIANESS_POS = 15;
        static constexpr unsigned ENDIANESS_MASK = 0x00008000;
        static constexpr unsigned ENDIANESS(unsigned value) { return (value << 15); }
        static constexpr unsigned VECTKEYSTAT_POS = 16;
        static constexpr unsigned VECTKEYSTAT_MASK = 0xffff0000;
        static constexpr unsigned VECTKEYSTAT(unsigned value) { return (value << 16); }
    } AIRCR;

    volatile union SCR_T // SCR: System control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SCR_BIT_T
        {
            unsigned             : 1; // bit 0 unused
            unsigned SLEEPONEXIT : 1; // bit 1 SLEEPONEXIT
            unsigned SLEEPDEEP   : 1; // bit 2 SLEEPDEEP
            unsigned             : 1; // bit 3 unused
            unsigned SEVEONPEND  : 1; // bit 4 Send Event on Pending bit
            unsigned             : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned SLEEPONEXIT_POS = 1;
        static constexpr unsigned SLEEPONEXIT_MASK = 0x00000002;
        static constexpr unsigned SLEEPONEXIT(unsigned value) { return (value << 1); }
        static constexpr unsigned SLEEPDEEP_POS = 2;
        static constexpr unsigned SLEEPDEEP_MASK = 0x00000004;
        static constexpr unsigned SLEEPDEEP(unsigned value) { return (value << 2); }
        static constexpr unsigned SEVEONPEND_POS = 4;
        static constexpr unsigned SEVEONPEND_MASK = 0x00000010;
        static constexpr unsigned SEVEONPEND(unsigned value) { return (value << 4); }
    } SCR;

    volatile union CCR_T // CCR: Configuration and control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR_BIT_T
        {
            unsigned NONBASETHRDENA : 1; // bit 0 Configures how the processor enters Thread mode
            unsigned USERSETMPEND   : 1; // bit 1 USERSETMPEND
            unsigned                : 1; // bit 2 unused
            unsigned UNALIGN__TRP   : 1; // bit 3 UNALIGN_ TRP
            unsigned DIV_0_TRP      : 1; // bit 4 DIV_0_TRP
            unsigned                : 3; // bits 5..7 unused
            unsigned BFHFNMIGN      : 1; // bit 8 BFHFNMIGN
            unsigned STKALIGN       : 1; // bit 9 STKALIGN
            unsigned                : 22; // bits 10..31 unused    
        } bit;
    
        static constexpr unsigned NONBASETHRDENA_POS = 0;
        static constexpr unsigned NONBASETHRDENA_MASK = 0x00000001;
        static constexpr unsigned NONBASETHRDENA(unsigned value) { return (value << 0); }
        static constexpr unsigned USERSETMPEND_POS = 1;
        static constexpr unsigned USERSETMPEND_MASK = 0x00000002;
        static constexpr unsigned USERSETMPEND(unsigned value) { return (value << 1); }
        static constexpr unsigned UNALIGN__TRP_POS = 3;
        static constexpr unsigned UNALIGN__TRP_MASK = 0x00000008;
        static constexpr unsigned UNALIGN__TRP(unsigned value) { return (value << 3); }
        static constexpr unsigned DIV_0_TRP_POS = 4;
        static constexpr unsigned DIV_0_TRP_MASK = 0x00000010;
        static constexpr unsigned DIV_0_TRP(unsigned value) { return (value << 4); }
        static constexpr unsigned BFHFNMIGN_POS = 8;
        static constexpr unsigned BFHFNMIGN_MASK = 0x00000100;
        static constexpr unsigned BFHFNMIGN(unsigned value) { return (value << 8); }
        static constexpr unsigned STKALIGN_POS = 9;
        static constexpr unsigned STKALIGN_MASK = 0x00000200;
        static constexpr unsigned STKALIGN(unsigned value) { return (value << 9); }
    } CCR;

    volatile union SHPR1_T // SHPR1: System handler priority registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHPR1_BIT_T
        {
            unsigned PRI_4 : 8; // bits 0..7 Priority of system handler 4
            unsigned PRI_5 : 8; // bits 8..15 Priority of system handler 5
            unsigned PRI_6 : 8; // bits 16..23 Priority of system handler 6
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned PRI_4_POS = 0;
        static constexpr unsigned PRI_4_MASK = 0x000000ff;
        static constexpr unsigned PRI_4(unsigned value) { return (value << 0); }
        static constexpr unsigned PRI_5_POS = 8;
        static constexpr unsigned PRI_5_MASK = 0x0000ff00;
        static constexpr unsigned PRI_5(unsigned value) { return (value << 8); }
        static constexpr unsigned PRI_6_POS = 16;
        static constexpr unsigned PRI_6_MASK = 0x00ff0000;
        static constexpr unsigned PRI_6(unsigned value) { return (value << 16); }
    } SHPR1;

    volatile union SHPR2_T // SHPR2: System handler priority registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHPR2_BIT_T
        {
            unsigned        : 24; // bits 0..23 unused
            unsigned PRI_11 : 8; // bits 24..31 Priority of system handler 11    
        } bit;
    
        static constexpr unsigned PRI_11_POS = 24;
        static constexpr unsigned PRI_11_MASK = 0xff000000;
        static constexpr unsigned PRI_11(unsigned value) { return (value << 24); }
    } SHPR2;

    volatile union SHPR3_T // SHPR3: System handler priority registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHPR3_BIT_T
        {
            unsigned        : 16; // bits 0..15 unused
            unsigned PRI_14 : 8; // bits 16..23 Priority of system handler 14
            unsigned PRI_15 : 8; // bits 24..31 Priority of system handler 15    
        } bit;
    
        static constexpr unsigned PRI_14_POS = 16;
        static constexpr unsigned PRI_14_MASK = 0x00ff0000;
        static constexpr unsigned PRI_14(unsigned value) { return (value << 16); }
        static constexpr unsigned PRI_15_POS = 24;
        static constexpr unsigned PRI_15_MASK = 0xff000000;
        static constexpr unsigned PRI_15(unsigned value) { return (value << 24); }
    } SHPR3;

    volatile union SHCRS_T // SHCRS: System handler control and state register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SHCRS_BIT_T
        {
            unsigned MEMFAULTACT    : 1; // bit 0 Memory management fault exception active bit
            unsigned BUSFAULTACT    : 1; // bit 1 Bus fault exception active bit
            unsigned                : 1; // bit 2 unused
            unsigned USGFAULTACT    : 1; // bit 3 Usage fault exception active bit
            unsigned                : 3; // bits 4..6 unused
            unsigned SVCALLACT      : 1; // bit 7 SVC call active bit
            unsigned MONITORACT     : 1; // bit 8 Debug monitor active bit
            unsigned                : 1; // bit 9 unused
            unsigned PENDSVACT      : 1; // bit 10 PendSV exception active bit
            unsigned SYSTICKACT     : 1; // bit 11 SysTick exception active bit
            unsigned USGFAULTPENDED : 1; // bit 12 Usage fault exception pending bit
            unsigned MEMFAULTPENDED : 1; // bit 13 Memory management fault exception pending bit
            unsigned BUSFAULTPENDED : 1; // bit 14 Bus fault exception pending bit
            unsigned SVCALLPENDED   : 1; // bit 15 SVC call pending bit
            unsigned MEMFAULTENA    : 1; // bit 16 Memory management fault enable bit
            unsigned BUSFAULTENA    : 1; // bit 17 Bus fault enable bit
            unsigned USGFAULTENA    : 1; // bit 18 Usage fault enable bit
            unsigned                : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned MEMFAULTACT_POS = 0;
        static constexpr unsigned MEMFAULTACT_MASK = 0x00000001;
        static constexpr unsigned MEMFAULTACT(unsigned value) { return (value << 0); }
        static constexpr unsigned BUSFAULTACT_POS = 1;
        static constexpr unsigned BUSFAULTACT_MASK = 0x00000002;
        static constexpr unsigned BUSFAULTACT(unsigned value) { return (value << 1); }
        static constexpr unsigned USGFAULTACT_POS = 3;
        static constexpr unsigned USGFAULTACT_MASK = 0x00000008;
        static constexpr unsigned USGFAULTACT(unsigned value) { return (value << 3); }
        static constexpr unsigned SVCALLACT_POS = 7;
        static constexpr unsigned SVCALLACT_MASK = 0x00000080;
        static constexpr unsigned SVCALLACT(unsigned value) { return (value << 7); }
        static constexpr unsigned MONITORACT_POS = 8;
        static constexpr unsigned MONITORACT_MASK = 0x00000100;
        static constexpr unsigned MONITORACT(unsigned value) { return (value << 8); }
        static constexpr unsigned PENDSVACT_POS = 10;
        static constexpr unsigned PENDSVACT_MASK = 0x00000400;
        static constexpr unsigned PENDSVACT(unsigned value) { return (value << 10); }
        static constexpr unsigned SYSTICKACT_POS = 11;
        static constexpr unsigned SYSTICKACT_MASK = 0x00000800;
        static constexpr unsigned SYSTICKACT(unsigned value) { return (value << 11); }
        static constexpr unsigned USGFAULTPENDED_POS = 12;
        static constexpr unsigned USGFAULTPENDED_MASK = 0x00001000;
        static constexpr unsigned USGFAULTPENDED(unsigned value) { return (value << 12); }
        static constexpr unsigned MEMFAULTPENDED_POS = 13;
        static constexpr unsigned MEMFAULTPENDED_MASK = 0x00002000;
        static constexpr unsigned MEMFAULTPENDED(unsigned value) { return (value << 13); }
        static constexpr unsigned BUSFAULTPENDED_POS = 14;
        static constexpr unsigned BUSFAULTPENDED_MASK = 0x00004000;
        static constexpr unsigned BUSFAULTPENDED(unsigned value) { return (value << 14); }
        static constexpr unsigned SVCALLPENDED_POS = 15;
        static constexpr unsigned SVCALLPENDED_MASK = 0x00008000;
        static constexpr unsigned SVCALLPENDED(unsigned value) { return (value << 15); }
        static constexpr unsigned MEMFAULTENA_POS = 16;
        static constexpr unsigned MEMFAULTENA_MASK = 0x00010000;
        static constexpr unsigned MEMFAULTENA(unsigned value) { return (value << 16); }
        static constexpr unsigned BUSFAULTENA_POS = 17;
        static constexpr unsigned BUSFAULTENA_MASK = 0x00020000;
        static constexpr unsigned BUSFAULTENA(unsigned value) { return (value << 17); }
        static constexpr unsigned USGFAULTENA_POS = 18;
        static constexpr unsigned USGFAULTENA_MASK = 0x00040000;
        static constexpr unsigned USGFAULTENA(unsigned value) { return (value << 18); }
    } SHCRS;

    volatile union CFSR_UFSR_BFSR_MMFSR_T // CFSR_UFSR_BFSR_MMFSR: Configurable fault status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CFSR_UFSR_BFSR_MMFSR_BIT_T
        {
            unsigned             : 1; // bit 0 unused
            unsigned IACCVIOL    : 1; // bit 1 Instruction access violation flag
            unsigned             : 1; // bit 2 unused
            unsigned MUNSTKERR   : 1; // bit 3 Memory manager fault on unstacking for a return from exception
            unsigned MSTKERR     : 1; // bit 4 Memory manager fault on stacking for exception entry.
            unsigned MLSPERR     : 1; // bit 5 MLSPERR
            unsigned             : 1; // bit 6 unused
            unsigned MMARVALID   : 1; // bit 7 Memory Management Fault Address Register (MMAR) valid flag
            unsigned IBUSERR     : 1; // bit 8 Instruction bus error
            unsigned PRECISERR   : 1; // bit 9 Precise data bus error
            unsigned IMPRECISERR : 1; // bit 10 Imprecise data bus error
            unsigned UNSTKERR    : 1; // bit 11 Bus fault on unstacking for a return from exception
            unsigned STKERR      : 1; // bit 12 Bus fault on stacking for exception entry
            unsigned LSPERR      : 1; // bit 13 Bus fault on floating-point lazy state preservation
            unsigned             : 1; // bit 14 unused
            unsigned BFARVALID   : 1; // bit 15 Bus Fault Address Register (BFAR) valid flag
            unsigned UNDEFINSTR  : 1; // bit 16 Undefined instruction usage fault
            unsigned INVSTATE    : 1; // bit 17 Invalid state usage fault
            unsigned INVPC       : 1; // bit 18 Invalid PC load usage fault
            unsigned NOCP        : 1; // bit 19 No coprocessor usage fault.
            unsigned             : 4; // bits 20..23 unused
            unsigned UNALIGNED   : 1; // bit 24 Unaligned access usage fault
            unsigned DIVBYZERO   : 1; // bit 25 Divide by zero usage fault
            unsigned             : 6; // bits 26..31 unused    
        } bit;
    
        static constexpr unsigned IACCVIOL_POS = 1;
        static constexpr unsigned IACCVIOL_MASK = 0x00000002;
        static constexpr unsigned IACCVIOL(unsigned value) { return (value << 1); }
        static constexpr unsigned MUNSTKERR_POS = 3;
        static constexpr unsigned MUNSTKERR_MASK = 0x00000008;
        static constexpr unsigned MUNSTKERR(unsigned value) { return (value << 3); }
        static constexpr unsigned MSTKERR_POS = 4;
        static constexpr unsigned MSTKERR_MASK = 0x00000010;
        static constexpr unsigned MSTKERR(unsigned value) { return (value << 4); }
        static constexpr unsigned MLSPERR_POS = 5;
        static constexpr unsigned MLSPERR_MASK = 0x00000020;
        static constexpr unsigned MLSPERR(unsigned value) { return (value << 5); }
        static constexpr unsigned MMARVALID_POS = 7;
        static constexpr unsigned MMARVALID_MASK = 0x00000080;
        static constexpr unsigned MMARVALID(unsigned value) { return (value << 7); }
        static constexpr unsigned IBUSERR_POS = 8;
        static constexpr unsigned IBUSERR_MASK = 0x00000100;
        static constexpr unsigned IBUSERR(unsigned value) { return (value << 8); }
        static constexpr unsigned PRECISERR_POS = 9;
        static constexpr unsigned PRECISERR_MASK = 0x00000200;
        static constexpr unsigned PRECISERR(unsigned value) { return (value << 9); }
        static constexpr unsigned IMPRECISERR_POS = 10;
        static constexpr unsigned IMPRECISERR_MASK = 0x00000400;
        static constexpr unsigned IMPRECISERR(unsigned value) { return (value << 10); }
        static constexpr unsigned UNSTKERR_POS = 11;
        static constexpr unsigned UNSTKERR_MASK = 0x00000800;
        static constexpr unsigned UNSTKERR(unsigned value) { return (value << 11); }
        static constexpr unsigned STKERR_POS = 12;
        static constexpr unsigned STKERR_MASK = 0x00001000;
        static constexpr unsigned STKERR(unsigned value) { return (value << 12); }
        static constexpr unsigned LSPERR_POS = 13;
        static constexpr unsigned LSPERR_MASK = 0x00002000;
        static constexpr unsigned LSPERR(unsigned value) { return (value << 13); }
        static constexpr unsigned BFARVALID_POS = 15;
        static constexpr unsigned BFARVALID_MASK = 0x00008000;
        static constexpr unsigned BFARVALID(unsigned value) { return (value << 15); }
        static constexpr unsigned UNDEFINSTR_POS = 16;
        static constexpr unsigned UNDEFINSTR_MASK = 0x00010000;
        static constexpr unsigned UNDEFINSTR(unsigned value) { return (value << 16); }
        static constexpr unsigned INVSTATE_POS = 17;
        static constexpr unsigned INVSTATE_MASK = 0x00020000;
        static constexpr unsigned INVSTATE(unsigned value) { return (value << 17); }
        static constexpr unsigned INVPC_POS = 18;
        static constexpr unsigned INVPC_MASK = 0x00040000;
        static constexpr unsigned INVPC(unsigned value) { return (value << 18); }
        static constexpr unsigned NOCP_POS = 19;
        static constexpr unsigned NOCP_MASK = 0x00080000;
        static constexpr unsigned NOCP(unsigned value) { return (value << 19); }
        static constexpr unsigned UNALIGNED_POS = 24;
        static constexpr unsigned UNALIGNED_MASK = 0x01000000;
        static constexpr unsigned UNALIGNED(unsigned value) { return (value << 24); }
        static constexpr unsigned DIVBYZERO_POS = 25;
        static constexpr unsigned DIVBYZERO_MASK = 0x02000000;
        static constexpr unsigned DIVBYZERO(unsigned value) { return (value << 25); }
    } CFSR_UFSR_BFSR_MMFSR;

    volatile union HFSR_T // HFSR: Hard fault status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HFSR_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned VECTTBL  : 1; // bit 1 Vector table hard fault
            unsigned          : 28; // bits 2..29 unused
            unsigned FORCED   : 1; // bit 30 Forced hard fault
            unsigned DEBUG_VT : 1; // bit 31 Reserved for Debug use    
        } bit;
    
        static constexpr unsigned VECTTBL_POS = 1;
        static constexpr unsigned VECTTBL_MASK = 0x00000002;
        static constexpr unsigned VECTTBL(unsigned value) { return (value << 1); }
        static constexpr unsigned FORCED_POS = 30;
        static constexpr unsigned FORCED_MASK = 0x40000000;
        static constexpr unsigned FORCED(unsigned value) { return (value << 30); }
        static constexpr unsigned DEBUG_VT_POS = 31;
        static constexpr unsigned DEBUG_VT_MASK = 0x80000000;
        static constexpr unsigned DEBUG_VT(unsigned value) { return (value << 31); }
    } HFSR;

    uint8_t Reserved1[4];

    volatile union MMFAR_T // MMFAR: Memory management fault address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMFAR_BIT_T
        {
            unsigned MMFAR : 32; // bits 0..31 Memory management fault address    
        } bit;
    
        static constexpr unsigned MMFAR_POS = 0;
        static constexpr unsigned MMFAR_MASK = 0xffffffff;
        static constexpr unsigned MMFAR(unsigned value) { return (value << 0); }
    } MMFAR;

    volatile union BFAR_T // BFAR: Bus fault address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BFAR_BIT_T
        {
            unsigned BFAR : 32; // bits 0..31 Bus fault address    
        } bit;
    
        static constexpr unsigned BFAR_POS = 0;
        static constexpr unsigned BFAR_MASK = 0xffffffff;
        static constexpr unsigned BFAR(unsigned value) { return (value << 0); }
    } BFAR;

    volatile union AFSR_T // AFSR: Auxiliary fault status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AFSR_BIT_T
        {
            unsigned IMPDEF : 32; // bits 0..31 Implementation defined    
        } bit;
    
        static constexpr unsigned IMPDEF_POS = 0;
        static constexpr unsigned IMPDEF_MASK = 0xffffffff;
        static constexpr unsigned IMPDEF(unsigned value) { return (value << 0); }
    } AFSR;

}; // struct SCB_T

static_assert(sizeof(SCB_T) == SCB_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp