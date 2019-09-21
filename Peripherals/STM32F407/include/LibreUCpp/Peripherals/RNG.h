#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RNG_T
{
    static constexpr size_t INSTANCE_SIZE = 12;
    static constexpr intptr_t BASE_ADDRESS = 0x50060800;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x08;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned       : 2; // bits 0..1 unused
            unsigned RNGEN : 1; // bit 2 Random number generator enable
            unsigned IE    : 1; // bit 3 Interrupt enable
            unsigned       : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned RNGEN_POS = 2;
        static constexpr unsigned RNGEN_MASK = 0x00000004;
        static constexpr unsigned RNGEN(unsigned value) { return (value << 2); }
        static constexpr unsigned IE_POS = 3;
        static constexpr unsigned IE_MASK = 0x00000008;
        static constexpr unsigned IE(unsigned value) { return (value << 3); }
    } CR;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned DRDY : 1; // bit 0 Data ready
            unsigned CECS : 1; // bit 1 Clock error current status
            unsigned SECS : 1; // bit 2 Seed error current status
            unsigned      : 2; // bits 3..4 unused
            unsigned CEIS : 1; // bit 5 Clock error interrupt status
            unsigned SEIS : 1; // bit 6 Seed error interrupt status
            unsigned      : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned DRDY_POS = 0;
        static constexpr unsigned DRDY_MASK = 0x00000001;
        static constexpr unsigned DRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned CECS_POS = 1;
        static constexpr unsigned CECS_MASK = 0x00000002;
        static constexpr unsigned CECS(unsigned value) { return (value << 1); }
        static constexpr unsigned SECS_POS = 2;
        static constexpr unsigned SECS_MASK = 0x00000004;
        static constexpr unsigned SECS(unsigned value) { return (value << 2); }
        static constexpr unsigned CEIS_POS = 5;
        static constexpr unsigned CEIS_MASK = 0x00000020;
        static constexpr unsigned CEIS(unsigned value) { return (value << 5); }
        static constexpr unsigned SEIS_POS = 6;
        static constexpr unsigned SEIS_MASK = 0x00000040;
        static constexpr unsigned SEIS(unsigned value) { return (value << 6); }
    } SR;

    volatile union DR_T // DR: data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned RNDATA : 32; // bits 0..31 Random data    
        } bit;
    
        static constexpr unsigned RNDATA_POS = 0;
        static constexpr unsigned RNDATA_MASK = 0xffffffff;
        static constexpr unsigned RNDATA(unsigned value) { return (value << 0); }
    } DR;

}; // struct RNG_T

static_assert(sizeof(RNG_T) == RNG_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp