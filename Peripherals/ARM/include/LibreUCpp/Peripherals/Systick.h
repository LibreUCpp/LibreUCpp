#pragma once

#include <stdint.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SYSTICK_T
{
    static constexpr uintptr_t BASE_ADDRESS = 0xE000E010;

    static constexpr intptr_t ADDR_OFFSET_CSR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_RELOAD = 0x04;
    static constexpr intptr_t ADDR_OFFSET_VALUE = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CAL = 0x0C;

    volatile union CSR_T // CSR: Control and Status
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            uint32_t ENABLE : 1; // bit 0: enable counter
            uint32_t TICKINT : 1; // bit 1: enable interrupt
            uint32_t CLKSOURCE : 1; // bit 2: clock source
            uint32_t :13; // reserved
            uint32_t COUNTFLAG : 1; // bit 16: timer counted to zero since last read
            uint32_t :15; // reserved
        } bit;
    } CSR;

    volatile union RELOAD_T // RELOAD: Reload Value
    {
        uint32_t reg;
        struct __attribute__((packed)) RELOAD_BIT_T
        {
            uint32_t RELOAD : 24; // reload value
            uint32_t : 8; // reserved
        } bit;
    } RELOAD;

    volatile union CURRENT_T // RELOAD: Current Value
    {
        uint32_t reg;
        struct __attribute__((packed)) CURRENT_BIT_T
        {
            uint32_t CURRENT : 24; // current value
            uint32_t : 8; // reserved
        } bit;
    } CURRENT;

    volatile union CAL_T // CAL: Calibration Value
    {
        uint32_t reg;
        struct __attribute__((packed)) CAL_BIT_T
        {
            uint32_t TENMS : 24; // ten ms calibration value
            uint32_t : 6; // reserved
            uint32_t SKEW : 1;
            uint32_t NOREF : 1;
        } bit;
    } CAL;

}; // struct SYSTICK_T

static_assert(sizeof(SYSTICK_T) == 16, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp