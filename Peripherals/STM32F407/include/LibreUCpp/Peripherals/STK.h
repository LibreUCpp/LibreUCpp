#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) STK_T
{
    static constexpr size_t INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0xe000e010;

    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_LOAD = 0x04;
    static constexpr intptr_t ADDR_OFFSET_VAL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CALIB = 0x0c;

    volatile union CTRL_T // CTRL: SysTick control and status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
        {
            unsigned ENABLE    : 1; // bit 0 Counter enable
            unsigned TICKINT   : 1; // bit 1 SysTick exception request enable
            unsigned CLKSOURCE : 1; // bit 2 Clock source selection
            unsigned           : 13; // bits 3..15 unused
            unsigned COUNTFLAG : 1; // bit 16 COUNTFLAG
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
    } CTRL;

    volatile union LOAD_T // LOAD: SysTick reload value register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LOAD_BIT_T
        {
            unsigned RELOAD : 24; // bits 0..23 RELOAD value
            unsigned        : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned RELOAD_POS = 0;
        static constexpr unsigned RELOAD_MASK = 0x00ffffff;
        static constexpr unsigned RELOAD(unsigned value) { return (value << 0); }
    } LOAD;

    volatile union VAL_T // VAL: SysTick current value register 
    {
        uint32_t reg;
        struct __attribute__((packed)) VAL_BIT_T
        {
            unsigned CURRENT : 24; // bits 0..23 Current counter value
            unsigned         : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned CURRENT_POS = 0;
        static constexpr unsigned CURRENT_MASK = 0x00ffffff;
        static constexpr unsigned CURRENT(unsigned value) { return (value << 0); }
    } VAL;

    volatile union CALIB_T // CALIB: SysTick calibration value register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CALIB_BIT_T
        {
            unsigned TENMS : 24; // bits 0..23 Calibration value
            unsigned       : 6; // bits 24..29 unused
            unsigned SKEW  : 1; // bit 30 SKEW flag: Indicates whether the TENMS value is exact
            unsigned NOREF : 1; // bit 31 NOREF flag. Reads as zero    
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

}; // struct STK_T

static_assert(sizeof(STK_T) == STK_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp