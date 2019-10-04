#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) MPU_T
{
    static constexpr size_t INSTANCE_SIZE = 20;
    static constexpr size_t PADDED_INSTANCE_SIZE = 20;
    static constexpr intptr_t BASE_ADDRESS = 0xe000ed90;

    static constexpr intptr_t ADDR_OFFSET_TYPE = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_RNR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_RBAR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_RASR = 0x10;

    volatile union TYPE_T // TYPE: MPU Type Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TYPE_BIT_T
        {
            unsigned SEPARATE : 1; // bit 0 Separate instruction and Data Memory MapsRegions
            unsigned          : 7; // bits 1..7 unused
            unsigned DREGION  : 8; // bits 8..15 Number of Data Regions
            unsigned IREGION  : 8; // bits 16..23 Number of Instruction Regions
            unsigned          : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned SEPARATE_POS = 0;
        static constexpr unsigned SEPARATE_MASK = 0x00000001;
        static constexpr unsigned SEPARATE(unsigned value) { return (value << 0); }
        static constexpr unsigned DREGION_POS = 8;
        static constexpr unsigned DREGION_MASK = 0x0000ff00;
        static constexpr unsigned DREGION(unsigned value) { return (value << 8); }
        static constexpr unsigned IREGION_POS = 16;
        static constexpr unsigned IREGION_MASK = 0x00ff0000;
        static constexpr unsigned IREGION(unsigned value) { return (value << 16); }
    } TYPE;

    volatile union CTRL_T // CTRL: MPU Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned ENABLE     : 1; // bit 0 MPU Enable
            unsigned HFNMIENA   : 1; // bit 1 Enable Hard Fault and NMI handlers
            unsigned PRIVDEFENA : 1; // bit 2 Enables privileged software access to default memory map
            unsigned            : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 0;
        static constexpr unsigned ENABLE_MASK = 0x00000001;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 0); }
        static constexpr unsigned HFNMIENA_POS = 1;
        static constexpr unsigned HFNMIENA_MASK = 0x00000002;
        static constexpr unsigned HFNMIENA(unsigned value) { return (value << 1); }
        static constexpr unsigned PRIVDEFENA_POS = 2;
        static constexpr unsigned PRIVDEFENA_MASK = 0x00000004;
        static constexpr unsigned PRIVDEFENA(unsigned value) { return (value << 2); }
    } CTRL;

    volatile union RNR_T // RNR: MPU Region Number Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RNR_BIT_T
        {
            unsigned REGION : 8; // bits 0..7 Region referenced by RBAR and RASR
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned REGION_POS = 0;
        static constexpr unsigned REGION_MASK = 0x000000ff;
        static constexpr unsigned REGION(unsigned value) { return (value << 0); }
    } RNR;

    volatile union RBAR_T // RBAR: MPU Region Base Address Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RBAR_BIT_T
        {
            unsigned REGION : 4; // bits 0..3 Region number
            unsigned VALID  : 1; // bit 4 Region number valid
            unsigned ADDR   : 27; // bits 5..31 Region base address    
        } bit;
    
        static constexpr unsigned REGION_POS = 0;
        static constexpr unsigned REGION_MASK = 0x0000000f;
        static constexpr unsigned REGION(unsigned value) { return (value << 0); }
        static constexpr unsigned VALID_POS = 4;
        static constexpr unsigned VALID_MASK = 0x00000010;
        static constexpr unsigned VALID(unsigned value) { return (value << 4); }
        static constexpr unsigned ADDR_POS = 5;
        static constexpr unsigned ADDR_MASK = 0xffffffe0;
        static constexpr unsigned ADDR(unsigned value) { return (value << 5); }
    } RBAR;

    volatile union RASR_T // RASR: MPU Region Attribute and Size Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RASR_BIT_T
        {
            unsigned ENABLE : 1; // bit 0 Region Enable
            unsigned SIZE   : 5; // bits 1..5 Region Size
            unsigned        : 2; // bits 6..7 unused
            unsigned SRD    : 8; // bits 8..15 Sub-region disable
            unsigned B      : 1; // bit 16 Bufferable bit
            unsigned C      : 1; // bit 17 Cacheable bit
            unsigned S      : 1; // bit 18 Shareable bit
            unsigned TEX    : 3; // bits 19..21 TEX bit
            unsigned        : 2; // bits 22..23 unused
            unsigned AP     : 3; // bits 24..26 Access Permission
            unsigned        : 1; // bit 27 unused
            unsigned XN     : 1; // bit 28 Execute Never Attribute
            unsigned        : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 0;
        static constexpr unsigned ENABLE_MASK = 0x00000001;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 0); }
        static constexpr unsigned SIZE_POS = 1;
        static constexpr unsigned SIZE_MASK = 0x0000003e;
        static constexpr unsigned SIZE(unsigned value) { return (value << 1); }
        static constexpr unsigned SRD_POS = 8;
        static constexpr unsigned SRD_MASK = 0x0000ff00;
        static constexpr unsigned SRD(unsigned value) { return (value << 8); }
        static constexpr unsigned B_POS = 16;
        static constexpr unsigned B_MASK = 0x00010000;
        static constexpr unsigned B(unsigned value) { return (value << 16); }
        static constexpr unsigned C_POS = 17;
        static constexpr unsigned C_MASK = 0x00020000;
        static constexpr unsigned C(unsigned value) { return (value << 17); }
        static constexpr unsigned S_POS = 18;
        static constexpr unsigned S_MASK = 0x00040000;
        static constexpr unsigned S(unsigned value) { return (value << 18); }
        static constexpr unsigned TEX_POS = 19;
        static constexpr unsigned TEX_MASK = 0x00380000;
        static constexpr unsigned TEX(unsigned value) { return (value << 19); }
        static constexpr unsigned AP_POS = 24;
        static constexpr unsigned AP_MASK = 0x07000000;
        static constexpr unsigned AP(unsigned value) { return (value << 24); }
        static constexpr unsigned XN_POS = 28;
        static constexpr unsigned XN_MASK = 0x10000000;
        static constexpr unsigned XN(unsigned value) { return (value << 28); }
    } RASR;

}; // struct MPU_T

static_assert(sizeof(MPU_T) == MPU_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp