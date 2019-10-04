#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) IWDG_T
{
    static constexpr size_t INSTANCE_SIZE = 16;
    static constexpr size_t PADDED_INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0x40003000;

    static constexpr intptr_t ADDR_OFFSET_KR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_PR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_RLR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x0c;

    volatile union KR_T // KR: Key register (IWDG_KR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) KR_BIT_T
        {
            unsigned KEY : 16; // bits 0..15 Key value
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned KEY_POS = 0;
        static constexpr unsigned KEY_MASK = 0x0000ffff;
        static constexpr unsigned KEY(unsigned value) { return (value << 0); }
    } KR;

    volatile union PR_T // PR: Prescaler register (IWDG_PR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) PR_BIT_T
        {
            unsigned PR : 3; // bits 0..2 Prescaler divider
            unsigned    : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned PR_POS = 0;
        static constexpr unsigned PR_MASK = 0x00000007;
        static constexpr unsigned PR(unsigned value) { return (value << 0); }
    } PR;

    volatile union RLR_T // RLR: Reload register (IWDG_RLR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) RLR_BIT_T
        {
            unsigned RL : 12; // bits 0..11 Watchdog counter reload value
            unsigned    : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned RL_POS = 0;
        static constexpr unsigned RL_MASK = 0x00000fff;
        static constexpr unsigned RL(unsigned value) { return (value << 0); }
    } RLR;

    volatile union SR_T // SR: Status register (IWDG_SR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned PVU : 1; // bit 0 Watchdog prescaler value update
            unsigned RVU : 1; // bit 1 Watchdog counter reload value update
            unsigned     : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned PVU_POS = 0;
        static constexpr unsigned PVU_MASK = 0x00000001;
        static constexpr unsigned PVU(unsigned value) { return (value << 0); }
        static constexpr unsigned RVU_POS = 1;
        static constexpr unsigned RVU_MASK = 0x00000002;
        static constexpr unsigned RVU(unsigned value) { return (value << 1); }
    } SR;

}; // struct IWDG_T

static_assert(sizeof(IWDG_T) == IWDG_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp