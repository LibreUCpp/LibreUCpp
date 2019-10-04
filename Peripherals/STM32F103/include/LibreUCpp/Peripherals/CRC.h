#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CRC_T
{
    static constexpr size_t INSTANCE_SIZE = 12;
    static constexpr size_t PADDED_INSTANCE_SIZE = 12;
    static constexpr intptr_t BASE_ADDRESS = 0x40023000;

    static constexpr intptr_t ADDR_OFFSET_DR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_IDR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x08;

    volatile union DR_T // DR: Data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DR : 32; // bits 0..31 Data Register    
        } bit;
    
        static constexpr unsigned DR_POS = 0;
        static constexpr unsigned DR_MASK = 0xffffffff;
        static constexpr unsigned DR(unsigned value) { return (value << 0); }
    } DR;

    volatile union IDR_T // IDR: Independent Data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IDR_BIT_T
        {
            unsigned IDR : 8; // bits 0..7 Independent Data register
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
            unsigned RESET : 1; // bit 0 Reset bit
            unsigned       : 31; // bits 1..31 unused    
        } bit;
    
        static constexpr unsigned RESET_POS = 0;
        static constexpr unsigned RESET_MASK = 0x00000001;
        static constexpr unsigned RESET(unsigned value) { return (value << 0); }
    } CR;

}; // struct CRC_T

static_assert(sizeof(CRC_T) == CRC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp