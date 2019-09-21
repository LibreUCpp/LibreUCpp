#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) MPU_T
{
    static constexpr size_t INSTANCE_SIZE = 20;
    static constexpr intptr_t BASE_ADDRESS = 0xe000ed90;

    static constexpr intptr_t ADDR_OFFSET_MPU_TYPER = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MPU_CTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_MPU_RNR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_MPU_RBAR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_MPU_RASR = 0x10;

    volatile union MPU_TYPER_T // MPU_TYPER: MPU type register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MPU_TYPER_BIT_T
        {
            unsigned SEPARATE : 1; // bit 0 Separate flag
            unsigned          : 7; // bits 1..7 unused
            unsigned DREGION  : 8; // bits 8..15 Number of MPU data regions
            unsigned IREGION  : 8; // bits 16..23 Number of MPU instruction regions
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
    } MPU_TYPER;

    volatile union MPU_CTRL_T // MPU_CTRL: MPU control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MPU_CTRL_BIT_T
        {
            unsigned ENABLE     : 1; // bit 0 Enables the MPU
            unsigned HFNMIENA   : 1; // bit 1 Enables the operation of MPU during hard fault
            unsigned PRIVDEFENA : 1; // bit 2 Enable priviliged software access to default memory map
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
    } MPU_CTRL;

    volatile union MPU_RNR_T // MPU_RNR: MPU region number register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MPU_RNR_BIT_T
        {
            unsigned REGION : 8; // bits 0..7 MPU region
            unsigned        : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned REGION_POS = 0;
        static constexpr unsigned REGION_MASK = 0x000000ff;
        static constexpr unsigned REGION(unsigned value) { return (value << 0); }
    } MPU_RNR;

    volatile union MPU_RBAR_T // MPU_RBAR: MPU region base address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MPU_RBAR_BIT_T
        {
            unsigned REGION : 4; // bits 0..3 MPU region field
            unsigned VALID  : 1; // bit 4 MPU region number valid
            unsigned ADDR   : 27; // bits 5..31 Region base address field    
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
    } MPU_RBAR;

    volatile union MPU_RASR_T // MPU_RASR: MPU region attribute and size register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MPU_RASR_BIT_T
        {
            unsigned ENABLE : 1; // bit 0 Region enable bit.
            unsigned SIZE   : 5; // bits 1..5 Size of the MPU protection region
            unsigned        : 2; // bits 6..7 unused
            unsigned SRD    : 8; // bits 8..15 Subregion disable bits
            unsigned B      : 1; // bit 16 memory attribute
            unsigned C      : 1; // bit 17 memory attribute
            unsigned S      : 1; // bit 18 Shareable memory attribute
            unsigned TEX    : 3; // bits 19..21 memory attribute
            unsigned        : 2; // bits 22..23 unused
            unsigned AP     : 3; // bits 24..26 Access permission
            unsigned        : 1; // bit 27 unused
            unsigned XN     : 1; // bit 28 Instruction access disable bit
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
    } MPU_RASR;

}; // struct MPU_T

static_assert(sizeof(MPU_T) == MPU_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp