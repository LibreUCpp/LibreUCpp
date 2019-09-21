#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CRC_T
{
    static constexpr size_t INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0x40023000;

    static constexpr intptr_t ADDR_OFFSET_DR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_IDR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_INIT = 0x0c;

    volatile union DR_T // DR: Data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DR : 32; // bits 0..31 Data register bits    
        } bit;
    
        static constexpr unsigned DR_POS = 0;
        static constexpr unsigned DR_MASK = 0xffffffff;
        static constexpr unsigned DR(unsigned value) { return (value << 0); }
    } DR;

    volatile union IDR_T // IDR: Independent data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IDR_BIT_T
        {
            unsigned IDR : 8; // bits 0..7 General-purpose 8-bit data register bits
            unsigned     : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned IDR_POS = 0;
        static constexpr unsigned IDR_MASK = 0x000000ff;
        static constexpr unsigned IDR(unsigned value) { return (value << 0); }
    } IDR;

    volatile union CR_T // CR: Control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned RESET   : 1; // bit 0 reset bit
            unsigned         : 4; // bits 1..4 unused
            unsigned REV_IN  : 2; // bits 5..6 Reverse input data
            unsigned REV_OUT : 1; // bit 7 Reverse output data
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned RESET_POS = 0;
        static constexpr unsigned RESET_MASK = 0x00000001;
        static constexpr unsigned RESET(unsigned value) { return (value << 0); }
        static constexpr unsigned REV_IN_POS = 5;
        static constexpr unsigned REV_IN_MASK = 0x00000060;
        static constexpr unsigned REV_IN(unsigned value) { return (value << 5); }
        static constexpr unsigned REV_OUT_POS = 7;
        static constexpr unsigned REV_OUT_MASK = 0x00000080;
        static constexpr unsigned REV_OUT(unsigned value) { return (value << 7); }
    } CR;

    volatile union INIT_T // INIT: Initial CRC value 
    {
        uint32_t reg;
        struct __attribute__((packed)) INIT_BIT_T
        {
            unsigned INIT : 32; // bits 0..31 Programmable initial CRC value    
        } bit;
    
        static constexpr unsigned INIT_POS = 0;
        static constexpr unsigned INIT_MASK = 0xffffffff;
        static constexpr unsigned INIT(unsigned value) { return (value << 0); }
    } INIT;

}; // struct CRC_T

static_assert(sizeof(CRC_T) == CRC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp