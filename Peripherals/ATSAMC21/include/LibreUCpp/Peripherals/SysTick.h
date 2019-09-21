#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SysTick_T
{
    static constexpr size_t INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0xe000e010;

    static constexpr intptr_t ADDR_OFFSET_CSR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_RVR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CVR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CALIB = 0x0c;

    volatile union CSR_T // CSR: SysTick Control and Status Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned ENABLE    : 1; // bit 0 SysTick Counter Enable
            unsigned TICKINT   : 1; // bit 1 SysTick Exception Request Enable
            unsigned CLKSOURCE : 1; // bit 2 Clock Source 0=external, 1=processor
            unsigned           : 13; // bits 3..15 unused
            unsigned COUNTFLAG : 1; // bit 16 Timer counted to 0 since last read of register
            unsigned           : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 0;
        static constexpr unsigned ENABLE_MASK = 0x00000001;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 0); }
        static constexpr unsigned TICKINT_POS = 1;
        static constexpr unsigned TICKINT_MASK = 0x00000002;
        static constexpr unsigned TICKINT(unsigned value) { return (value << 1); }
        static constexpr unsigned CLKSOURCE_POS = 2;
        static constexpr unsigned CLKSOURCE_MASK = 0x00000004;
        static constexpr unsigned CLKSOURCE(unsigned value) { return (value << 2); }
        static constexpr unsigned COUNTFLAG_POS = 16;
        static constexpr unsigned COUNTFLAG_MASK = 0x00010000;
        static constexpr unsigned COUNTFLAG(unsigned value) { return (value << 16); }
    } CSR;

    volatile union RVR_T // RVR: SysTick Reload Value Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RVR_BIT_T
        {
            unsigned RELOAD : 24; // bits 0..23 Value to load into the SysTick Current Value Register when the counter reaches 0
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned RELOAD_POS = 0;
        static constexpr unsigned RELOAD_MASK = 0x00ffffff;
        static constexpr unsigned RELOAD(unsigned value) { return (value << 0); }
    } RVR;

    volatile union CVR_T // CVR: SysTick Current Value Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CVR_BIT_T
        {
            unsigned CURRENT : 24; // bits 0..23 Current value at the time the register is accessed
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CURRENT_POS = 0;
        static constexpr unsigned CURRENT_MASK = 0x00ffffff;
        static constexpr unsigned CURRENT(unsigned value) { return (value << 0); }
    } CVR;

    volatile union CALIB_T // CALIB: SysTick Calibration Value Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CALIB_BIT_T
        {
            unsigned TENMS : 24; // bits 0..23 Reload value to use for 10ms timing
            unsigned       : 6; // bits 24..29 unused
            unsigned SKEW  : 1; // bit 30 TENMS is rounded from non-integer ratio
            unsigned NOREF : 1; // bit 31 No Separate Reference Clock    
        } bit;
    
        static constexpr unsigned TENMS_POS = 0;
        static constexpr unsigned TENMS_MASK = 0x00ffffff;
        static constexpr unsigned TENMS(unsigned value) { return (value << 0); }
        static constexpr unsigned SKEW_POS = 30;
        static constexpr unsigned SKEW_MASK = 0x40000000;
        static constexpr unsigned SKEW(unsigned value) { return (value << 30); }
        static constexpr unsigned NOREF_POS = 31;
        static constexpr unsigned NOREF_MASK = 0x80000000;
        static constexpr unsigned NOREF(unsigned value) { return (value << 31); }
    } CALIB;

}; // struct SysTick_T

static_assert(sizeof(SysTick_T) == SysTick_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp