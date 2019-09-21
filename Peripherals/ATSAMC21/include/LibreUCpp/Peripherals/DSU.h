#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DSU_T
{
    static constexpr size_t INSTANCE_SIZE = 8192;
    static constexpr intptr_t BASE_ADDRESS = 0x41002000;

    static constexpr intptr_t ADDR_OFFSET_DCC = 0x10;
    static constexpr intptr_t ADDR_OFFSET_DCFG = 0xf0;
    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_STATUSA = 0x01;
    static constexpr intptr_t ADDR_OFFSET_STATUSB = 0x02;
    static constexpr intptr_t ADDR_OFFSET_ADDR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_LENGTH = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DATA = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DID = 0x18;
    static constexpr intptr_t ADDR_OFFSET_ENTRY0 = 0x1000;
    static constexpr intptr_t ADDR_OFFSET_ENTRY1 = 0x1004;
    static constexpr intptr_t ADDR_OFFSET_END = 0x1008;
    static constexpr intptr_t ADDR_OFFSET_MEMTYPE = 0x1fcc;
    static constexpr intptr_t ADDR_OFFSET_PID4 = 0x1fd0;
    static constexpr intptr_t ADDR_OFFSET_PID5 = 0x1fd4;
    static constexpr intptr_t ADDR_OFFSET_PID6 = 0x1fd8;
    static constexpr intptr_t ADDR_OFFSET_PID7 = 0x1fdc;
    static constexpr intptr_t ADDR_OFFSET_PID0 = 0x1fe0;
    static constexpr intptr_t ADDR_OFFSET_PID1 = 0x1fe4;
    static constexpr intptr_t ADDR_OFFSET_PID2 = 0x1fe8;
    static constexpr intptr_t ADDR_OFFSET_PID3 = 0x1fec;
    static constexpr intptr_t ADDR_OFFSET_CID0 = 0x1ff0;
    static constexpr intptr_t ADDR_OFFSET_CID1 = 0x1ff4;
    static constexpr intptr_t ADDR_OFFSET_CID2 = 0x1ff8;
    static constexpr intptr_t ADDR_OFFSET_CID3 = 0x1ffc;

    volatile union CTRL_T // CTRL: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned SWRST : 1; // bit 0 Software Reset
            unsigned       : 1; // bit 1 unused
            unsigned CRC   : 1; // bit 2 32-bit Cyclic Redundancy Code
            unsigned MBIST : 1; // bit 3 Memory built-in self-test
            unsigned CE    : 1; // bit 4 Chip-Erase
            unsigned       : 1; // bit 5 unused
            unsigned ARR   : 1; // bit 6 Auxiliary Row Read
            unsigned SMSA  : 1; // bit 7 Start Memory Stream Access    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned CRC_POS = 2;
        static constexpr unsigned CRC_MASK = 0x00000004;
        static constexpr unsigned CRC(unsigned value) { return (value << 2); }
        static constexpr unsigned MBIST_POS = 3;
        static constexpr unsigned MBIST_MASK = 0x00000008;
        static constexpr unsigned MBIST(unsigned value) { return (value << 3); }
        static constexpr unsigned CE_POS = 4;
        static constexpr unsigned CE_MASK = 0x00000010;
        static constexpr unsigned CE(unsigned value) { return (value << 4); }
        static constexpr unsigned ARR_POS = 6;
        static constexpr unsigned ARR_MASK = 0x00000040;
        static constexpr unsigned ARR(unsigned value) { return (value << 6); }
        static constexpr unsigned SMSA_POS = 7;
        static constexpr unsigned SMSA_MASK = 0x00000080;
        static constexpr unsigned SMSA(unsigned value) { return (value << 7); }
    } CTRL;

    volatile union STATUSA_T // STATUSA: Status A 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUSA_BIT_T
        {
            unsigned DONE    : 1; // bit 0 Done
            unsigned CRSTEXT : 1; // bit 1 CPU Reset Phase Extension
            unsigned BERR    : 1; // bit 2 Bus Error
            unsigned FAIL    : 1; // bit 3 Failure
            unsigned PERR    : 1; // bit 4 Protection Error
            unsigned         : 3; // bits 5..7 unused    
        } bit;
    
        static constexpr unsigned DONE_POS = 0;
        static constexpr unsigned DONE_MASK = 0x00000001;
        static constexpr unsigned DONE(unsigned value) { return (value << 0); }
        static constexpr unsigned CRSTEXT_POS = 1;
        static constexpr unsigned CRSTEXT_MASK = 0x00000002;
        static constexpr unsigned CRSTEXT(unsigned value) { return (value << 1); }
        static constexpr unsigned BERR_POS = 2;
        static constexpr unsigned BERR_MASK = 0x00000004;
        static constexpr unsigned BERR(unsigned value) { return (value << 2); }
        static constexpr unsigned FAIL_POS = 3;
        static constexpr unsigned FAIL_MASK = 0x00000008;
        static constexpr unsigned FAIL(unsigned value) { return (value << 3); }
        static constexpr unsigned PERR_POS = 4;
        static constexpr unsigned PERR_MASK = 0x00000010;
        static constexpr unsigned PERR(unsigned value) { return (value << 4); }
    } STATUSA;

    volatile union STATUSB_T // STATUSB: Status B 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUSB_BIT_T
        {
            unsigned PROT    : 1; // bit 0 Protected
            unsigned DBGPRES : 1; // bit 1 Debugger Present
            unsigned DCCD0   : 1; // bit 2 Debug Communication Channel 0 Dirty
            unsigned DCCD1   : 1; // bit 3 Debug Communication Channel 1 Dirty
            unsigned HPE     : 1; // bit 4 Hot-Plugging Enable
            unsigned         : 3; // bits 5..7 unused    
        } bit;
    
        static constexpr unsigned PROT_POS = 0;
        static constexpr unsigned PROT_MASK = 0x00000001;
        static constexpr unsigned PROT(unsigned value) { return (value << 0); }
        static constexpr unsigned DBGPRES_POS = 1;
        static constexpr unsigned DBGPRES_MASK = 0x00000002;
        static constexpr unsigned DBGPRES(unsigned value) { return (value << 1); }
        static constexpr unsigned DCCD0_POS = 2;
        static constexpr unsigned DCCD0_MASK = 0x00000004;
        static constexpr unsigned DCCD0(unsigned value) { return (value << 2); }
        static constexpr unsigned DCCD1_POS = 3;
        static constexpr unsigned DCCD1_MASK = 0x00000008;
        static constexpr unsigned DCCD1(unsigned value) { return (value << 3); }
        static constexpr unsigned HPE_POS = 4;
        static constexpr unsigned HPE_MASK = 0x00000010;
        static constexpr unsigned HPE(unsigned value) { return (value << 4); }
    } STATUSB;

    uint8_t Reserved1[1];

    volatile union ADDR_T // ADDR: Address 
    {
        uint32_t reg;
        struct __attribute__((packed)) ADDR_BIT_T
        {
            unsigned AMOD : 2; // bits 0..1 Access Mode
            unsigned ADDR : 30; // bits 2..31 Address    
        } bit;
    
        static constexpr unsigned AMOD_POS = 0;
        static constexpr unsigned AMOD_MASK = 0x00000003;
        static constexpr unsigned AMOD(unsigned value) { return (value << 0); }
        static constexpr unsigned ADDR_POS = 2;
        static constexpr unsigned ADDR_MASK = 0xfffffffc;
        static constexpr unsigned ADDR(unsigned value) { return (value << 2); }
    } ADDR;

    volatile union LENGTH_T // LENGTH: Length 
    {
        uint32_t reg;
        struct __attribute__((packed)) LENGTH_BIT_T
        {
            unsigned        : 2; // bits 0..1 unused
            unsigned LENGTH : 30; // bits 2..31 Length    
        } bit;
    
        static constexpr unsigned LENGTH_POS = 2;
        static constexpr unsigned LENGTH_MASK = 0xfffffffc;
        static constexpr unsigned LENGTH(unsigned value) { return (value << 2); }
    } LENGTH;

    volatile union DATA_T // DATA: Data 
    {
        uint32_t reg;
        struct __attribute__((packed)) DATA_BIT_T
        {
            unsigned DATA : 32; // bits 0..31 Data    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0xffffffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
    } DATA;

    volatile union DCC_T // DCC: Debug Communication Channel n 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCC_BIT_T
        {
            unsigned DATA : 32; // bits 0..31 Data    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0xffffffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
    } DCC[2];

    volatile union DID_T // DID: Device Identification 
    {
        uint32_t reg;
        struct __attribute__((packed)) DID_BIT_T
        {
            unsigned DEVSEL    : 8; // bits 0..7 Device Select
            unsigned REVISION  : 4; // bits 8..11 Revision Number
            unsigned DIE       : 4; // bits 12..15 Die Number
            unsigned SERIES    : 6; // bits 16..21 Series
            unsigned           : 1; // bit 22 unused
            unsigned FAMILY    : 5; // bits 23..27 Family
            unsigned PROCESSOR : 4; // bits 28..31 Processor    
        } bit;
    
        static constexpr unsigned DEVSEL_POS = 0;
        static constexpr unsigned DEVSEL_MASK = 0x000000ff;
        static constexpr unsigned DEVSEL(unsigned value) { return (value << 0); }
        static constexpr unsigned REVISION_POS = 8;
        static constexpr unsigned REVISION_MASK = 0x00000f00;
        static constexpr unsigned REVISION(unsigned value) { return (value << 8); }
        static constexpr unsigned DIE_POS = 12;
        static constexpr unsigned DIE_MASK = 0x0000f000;
        static constexpr unsigned DIE(unsigned value) { return (value << 12); }
        static constexpr unsigned SERIES_POS = 16;
        static constexpr unsigned SERIES_MASK = 0x003f0000;
        static constexpr unsigned SERIES(unsigned value) { return (value << 16); }
        static constexpr unsigned FAMILY_POS = 23;
        static constexpr unsigned FAMILY_MASK = 0x0f800000;
        static constexpr unsigned FAMILY(unsigned value) { return (value << 23); }
        static constexpr unsigned PROCESSOR_POS = 28;
        static constexpr unsigned PROCESSOR_MASK = 0xf0000000;
        static constexpr unsigned PROCESSOR(unsigned value) { return (value << 28); }
    } DID;

    uint8_t Reserved2[212];

    volatile union DCFG_T // DCFG: Device Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCFG_BIT_T
        {
            unsigned DCFG : 32; // bits 0..31 Device Configuration    
        } bit;
    
        static constexpr unsigned DCFG_POS = 0;
        static constexpr unsigned DCFG_MASK = 0xffffffff;
        static constexpr unsigned DCFG(unsigned value) { return (value << 0); }
    } DCFG[2];

    uint8_t Reserved3[3848];

    volatile union ENTRY0_T // ENTRY0: CoreSight ROM Table Entry 0 
    {
        uint32_t reg;
        struct __attribute__((packed)) ENTRY0_BIT_T
        {
            unsigned EPRES  : 1; // bit 0 Entry Present
            unsigned FMT    : 1; // bit 1 Format
            unsigned        : 10; // bits 2..11 unused
            unsigned ADDOFF : 20; // bits 12..31 Address Offset    
        } bit;
    
        static constexpr unsigned EPRES_POS = 0;
        static constexpr unsigned EPRES_MASK = 0x00000001;
        static constexpr unsigned EPRES(unsigned value) { return (value << 0); }
        static constexpr unsigned FMT_POS = 1;
        static constexpr unsigned FMT_MASK = 0x00000002;
        static constexpr unsigned FMT(unsigned value) { return (value << 1); }
        static constexpr unsigned ADDOFF_POS = 12;
        static constexpr unsigned ADDOFF_MASK = 0xfffff000;
        static constexpr unsigned ADDOFF(unsigned value) { return (value << 12); }
    } ENTRY0;

    volatile union ENTRY1_T // ENTRY1: CoreSight ROM Table Entry 1 
    {
        uint32_t reg;
    } ENTRY1;

    volatile union END_T // END: CoreSight ROM Table End 
    {
        uint32_t reg;
        struct __attribute__((packed)) END_BIT_T
        {
            unsigned END : 32; // bits 0..31 End Marker    
        } bit;
    
        static constexpr unsigned END_POS = 0;
        static constexpr unsigned END_MASK = 0xffffffff;
        static constexpr unsigned END(unsigned value) { return (value << 0); }
    } END;

    uint8_t Reserved4[4032];

    volatile union MEMTYPE_T // MEMTYPE: CoreSight ROM Table Memory Type 
    {
        uint32_t reg;
        struct __attribute__((packed)) MEMTYPE_BIT_T
        {
            unsigned SMEMP : 1; // bit 0 System Memory Present
            unsigned       : 31; // bits 1..31 unused    
        } bit;
    
        static constexpr unsigned SMEMP_POS = 0;
        static constexpr unsigned SMEMP_MASK = 0x00000001;
        static constexpr unsigned SMEMP(unsigned value) { return (value << 0); }
    } MEMTYPE;

    volatile union PID4_T // PID4: Peripheral Identification 4 
    {
        uint32_t reg;
        struct __attribute__((packed)) PID4_BIT_T
        {
            unsigned JEPCC : 4; // bits 0..3 JEP-106 Continuation Code
            unsigned FKBC  : 4; // bits 4..7 4KB count
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned JEPCC_POS = 0;
        static constexpr unsigned JEPCC_MASK = 0x0000000f;
        static constexpr unsigned JEPCC(unsigned value) { return (value << 0); }
        static constexpr unsigned FKBC_POS = 4;
        static constexpr unsigned FKBC_MASK = 0x000000f0;
        static constexpr unsigned FKBC(unsigned value) { return (value << 4); }
    } PID4;

    volatile union PID5_T // PID5: Peripheral Identification 5 
    {
        uint32_t reg;
    } PID5;

    volatile union PID6_T // PID6: Peripheral Identification 6 
    {
        uint32_t reg;
    } PID6;

    volatile union PID7_T // PID7: Peripheral Identification 7 
    {
        uint32_t reg;
    } PID7;

    volatile union PID0_T // PID0: Peripheral Identification 0 
    {
        uint32_t reg;
        struct __attribute__((packed)) PID0_BIT_T
        {
            unsigned PARTNBL : 8; // bits 0..7 Part Number Low
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PARTNBL_POS = 0;
        static constexpr unsigned PARTNBL_MASK = 0x000000ff;
        static constexpr unsigned PARTNBL(unsigned value) { return (value << 0); }
    } PID0;

    volatile union PID1_T // PID1: Peripheral Identification 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) PID1_BIT_T
        {
            unsigned PARTNBH : 4; // bits 0..3 Part Number High
            unsigned JEPIDCL : 4; // bits 4..7 Low part of the JEP-106 Identity Code
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PARTNBH_POS = 0;
        static constexpr unsigned PARTNBH_MASK = 0x0000000f;
        static constexpr unsigned PARTNBH(unsigned value) { return (value << 0); }
        static constexpr unsigned JEPIDCL_POS = 4;
        static constexpr unsigned JEPIDCL_MASK = 0x000000f0;
        static constexpr unsigned JEPIDCL(unsigned value) { return (value << 4); }
    } PID1;

    volatile union PID2_T // PID2: Peripheral Identification 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) PID2_BIT_T
        {
            unsigned JEPIDCH  : 3; // bits 0..2 JEP-106 Identity Code High
            unsigned JEPU     : 1; // bit 3 JEP-106 Identity Code is used
            unsigned REVISION : 4; // bits 4..7 Revision Number
            unsigned          : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned JEPIDCH_POS = 0;
        static constexpr unsigned JEPIDCH_MASK = 0x00000007;
        static constexpr unsigned JEPIDCH(unsigned value) { return (value << 0); }
        static constexpr unsigned JEPU_POS = 3;
        static constexpr unsigned JEPU_MASK = 0x00000008;
        static constexpr unsigned JEPU(unsigned value) { return (value << 3); }
        static constexpr unsigned REVISION_POS = 4;
        static constexpr unsigned REVISION_MASK = 0x000000f0;
        static constexpr unsigned REVISION(unsigned value) { return (value << 4); }
    } PID2;

    volatile union PID3_T // PID3: Peripheral Identification 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) PID3_BIT_T
        {
            unsigned CUSMOD : 4; // bits 0..3 ARM CUSMOD
            unsigned REVAND : 4; // bits 4..7 Revision Number
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned CUSMOD_POS = 0;
        static constexpr unsigned CUSMOD_MASK = 0x0000000f;
        static constexpr unsigned CUSMOD(unsigned value) { return (value << 0); }
        static constexpr unsigned REVAND_POS = 4;
        static constexpr unsigned REVAND_MASK = 0x000000f0;
        static constexpr unsigned REVAND(unsigned value) { return (value << 4); }
    } PID3;

    volatile union CID0_T // CID0: Component Identification 0 
    {
        uint32_t reg;
        struct __attribute__((packed)) CID0_BIT_T
        {
            unsigned PREAMBLEB0 : 8; // bits 0..7 Preamble Byte 0
            unsigned            : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PREAMBLEB0_POS = 0;
        static constexpr unsigned PREAMBLEB0_MASK = 0x000000ff;
        static constexpr unsigned PREAMBLEB0(unsigned value) { return (value << 0); }
    } CID0;

    volatile union CID1_T // CID1: Component Identification 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CID1_BIT_T
        {
            unsigned PREAMBLE : 4; // bits 0..3 Preamble
            unsigned CCLASS   : 4; // bits 4..7 Component Class
            unsigned          : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PREAMBLE_POS = 0;
        static constexpr unsigned PREAMBLE_MASK = 0x0000000f;
        static constexpr unsigned PREAMBLE(unsigned value) { return (value << 0); }
        static constexpr unsigned CCLASS_POS = 4;
        static constexpr unsigned CCLASS_MASK = 0x000000f0;
        static constexpr unsigned CCLASS(unsigned value) { return (value << 4); }
    } CID1;

    volatile union CID2_T // CID2: Component Identification 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) CID2_BIT_T
        {
            unsigned PREAMBLEB2 : 8; // bits 0..7 Preamble Byte 2
            unsigned            : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PREAMBLEB2_POS = 0;
        static constexpr unsigned PREAMBLEB2_MASK = 0x000000ff;
        static constexpr unsigned PREAMBLEB2(unsigned value) { return (value << 0); }
    } CID2;

    volatile union CID3_T // CID3: Component Identification 3 
    {
        uint32_t reg;
        struct __attribute__((packed)) CID3_BIT_T
        {
            unsigned PREAMBLEB3 : 8; // bits 0..7 Preamble Byte 3
            unsigned            : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned PREAMBLEB3_POS = 0;
        static constexpr unsigned PREAMBLEB3_MASK = 0x000000ff;
        static constexpr unsigned PREAMBLEB3(unsigned value) { return (value << 0); }
    } CID3;

}; // struct DSU_T

static_assert(sizeof(DSU_T) == DSU_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp