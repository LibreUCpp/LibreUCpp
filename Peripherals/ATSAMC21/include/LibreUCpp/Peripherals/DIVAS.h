#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DIVAS_T
{
    static constexpr size_t INSTANCE_SIZE = 28;
    static constexpr size_t PADDED_INSTANCE_SIZE = 28;
    static constexpr intptr_t BASE_ADDRESS = 0x48000000;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DIVIDEND = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DIVISOR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_RESULT = 0x10;
    static constexpr intptr_t ADDR_OFFSET_REM = 0x14;
    static constexpr intptr_t ADDR_OFFSET_SQRNUM = 0x18;

    volatile union CTRLA_T // CTRLA: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SIGNED : 1; // bit 0 Signed
            unsigned DLZ    : 1; // bit 1 Disable Leading Zero Optimization
            unsigned        : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned SIGNED_POS = 0;
        static constexpr unsigned SIGNED_MASK = 0x00000001;
        static constexpr unsigned SIGNED(unsigned value) { return (value << 0); }
        static constexpr unsigned DLZ_POS = 1;
        static constexpr unsigned DLZ_MASK = 0x00000002;
        static constexpr unsigned DLZ(unsigned value) { return (value << 1); }
    } CTRLA;

    uint8_t Reserved1[3];

    volatile union STATUS_T // STATUS: Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned BUSY : 1; // bit 0 DIVAS Accelerator Busy
            unsigned DBZ  : 1; // bit 1 Writing a one to this bit clears DBZ to zero
            unsigned      : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned BUSY_POS = 0;
        static constexpr unsigned BUSY_MASK = 0x00000001;
        static constexpr unsigned BUSY(unsigned value) { return (value << 0); }
        static constexpr unsigned DBZ_POS = 1;
        static constexpr unsigned DBZ_MASK = 0x00000002;
        static constexpr unsigned DBZ(unsigned value) { return (value << 1); }
    } STATUS;

    uint8_t Reserved2[3];

    volatile union DIVIDEND_T // DIVIDEND: Dividend 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIVIDEND_BIT_T
        {
            unsigned DIVIDEND : 32; // bits 0..31 DIVIDEND    
        } bit;
    
        static constexpr unsigned DIVIDEND_POS = 0;
        static constexpr unsigned DIVIDEND_MASK = 0xffffffff;
        static constexpr unsigned DIVIDEND(unsigned value) { return (value << 0); }
    } DIVIDEND;

    volatile union DIVISOR_T // DIVISOR: Divisor 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIVISOR_BIT_T
        {
            unsigned DIVISOR : 32; // bits 0..31 DIVISOR    
        } bit;
    
        static constexpr unsigned DIVISOR_POS = 0;
        static constexpr unsigned DIVISOR_MASK = 0xffffffff;
        static constexpr unsigned DIVISOR(unsigned value) { return (value << 0); }
    } DIVISOR;

    volatile union RESULT_T // RESULT: Result 
    {
        uint32_t reg;
        struct __attribute__((packed)) RESULT_BIT_T
        {
            unsigned RESULT : 32; // bits 0..31 RESULT    
        } bit;
    
        static constexpr unsigned RESULT_POS = 0;
        static constexpr unsigned RESULT_MASK = 0xffffffff;
        static constexpr unsigned RESULT(unsigned value) { return (value << 0); }
    } RESULT;

    volatile union REM_T // REM: Remainder 
    {
        uint32_t reg;
        struct __attribute__((packed)) REM_BIT_T
        {
            unsigned REM : 32; // bits 0..31 REM    
        } bit;
    
        static constexpr unsigned REM_POS = 0;
        static constexpr unsigned REM_MASK = 0xffffffff;
        static constexpr unsigned REM(unsigned value) { return (value << 0); }
    } REM;

    volatile union SQRNUM_T // SQRNUM: Square Root Input 
    {
        uint32_t reg;
        struct __attribute__((packed)) SQRNUM_BIT_T
        {
            unsigned SQRNUM : 32; // bits 0..31 Square Root Input    
        } bit;
    
        static constexpr unsigned SQRNUM_POS = 0;
        static constexpr unsigned SQRNUM_MASK = 0xffffffff;
        static constexpr unsigned SQRNUM(unsigned value) { return (value << 0); }
    } SQRNUM;

}; // struct DIVAS_T

static_assert(sizeof(DIVAS_T) == DIVAS_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp