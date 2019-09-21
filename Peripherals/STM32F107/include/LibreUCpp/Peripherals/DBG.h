#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DBG_T
{
    static constexpr size_t INSTANCE_SIZE = 8;
    static constexpr intptr_t BASE_ADDRESS = 0xe0042000;

    static constexpr intptr_t ADDR_OFFSET_IDCODE = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x04;

    volatile union IDCODE_T // IDCODE: DBGMCU_IDCODE 
    {
        uint32_t reg;
        struct __attribute__((packed)) IDCODE_BIT_T
        {
            unsigned DEV_ID : 12; // bits 0..11 DEV_ID
            unsigned        : 4; // bits 12..15 unused
            unsigned REV_ID : 16; // bits 16..31 REV_ID    
        } bit;
    
        static constexpr unsigned DEV_ID_POS = 0;
        static constexpr unsigned DEV_ID_MASK = 0x00000fff;
        static constexpr unsigned DEV_ID(unsigned value) { return (value << 0); }
        static constexpr unsigned REV_ID_POS = 16;
        static constexpr unsigned REV_ID_MASK = 0xffff0000;
        static constexpr unsigned REV_ID(unsigned value) { return (value << 16); }
    } IDCODE;

    volatile union CR_T // CR: DBGMCU_CR 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned DBG_SLEEP              : 1; // bit 0 DBG_SLEEP
            unsigned DBG_STOP               : 1; // bit 1 DBG_STOP
            unsigned DBG_STANDBY            : 1; // bit 2 DBG_STANDBY
            unsigned                        : 2; // bits 3..4 unused
            unsigned TRACE_IOEN             : 1; // bit 5 TRACE_IOEN
            unsigned TRACE_MODE             : 2; // bits 6..7 TRACE_MODE
            unsigned DBG_IWDG_STOP          : 1; // bit 8 DBG_IWDG_STOP
            unsigned DBG_WWDG_STOP          : 1; // bit 9 DBG_WWDG_STOP
            unsigned DBG_TIM1_STOP          : 1; // bit 10 DBG_TIM1_STOP
            unsigned DBG_TIM2_STOP          : 1; // bit 11 DBG_TIM2_STOP
            unsigned DBG_TIM3_STOP          : 1; // bit 12 DBG_TIM3_STOP
            unsigned DBG_TIM4_STOP          : 1; // bit 13 DBG_TIM4_STOP
            unsigned DBG_CAN1_STOP          : 1; // bit 14 DBG_CAN1_STOP
            unsigned DBG_I2C1_SMBUS_TIMEOUT : 1; // bit 15 DBG_I2C1_SMBUS_TIMEOUT
            unsigned DBG_I2C2_SMBUS_TIMEOUT : 1; // bit 16 DBG_I2C2_SMBUS_TIMEOUT
            unsigned                        : 1; // bit 17 unused
            unsigned DBG_TIM5_STOP          : 1; // bit 18 DBG_TIM5_STOP
            unsigned DBG_TIM6_STOP          : 1; // bit 19 DBG_TIM6_STOP
            unsigned DBG_TIM7_STOP          : 1; // bit 20 DBG_TIM7_STOP
            unsigned DBG_CAN2_STOP          : 1; // bit 21 DBG_CAN2_STOP
            unsigned                        : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned DBG_SLEEP_POS = 0;
        static constexpr unsigned DBG_SLEEP_MASK = 0x00000001;
        static constexpr unsigned DBG_SLEEP(unsigned value) { return (value << 0); }
        static constexpr unsigned DBG_STOP_POS = 1;
        static constexpr unsigned DBG_STOP_MASK = 0x00000002;
        static constexpr unsigned DBG_STOP(unsigned value) { return (value << 1); }
        static constexpr unsigned DBG_STANDBY_POS = 2;
        static constexpr unsigned DBG_STANDBY_MASK = 0x00000004;
        static constexpr unsigned DBG_STANDBY(unsigned value) { return (value << 2); }
        static constexpr unsigned TRACE_IOEN_POS = 5;
        static constexpr unsigned TRACE_IOEN_MASK = 0x00000020;
        static constexpr unsigned TRACE_IOEN(unsigned value) { return (value << 5); }
        static constexpr unsigned TRACE_MODE_POS = 6;
        static constexpr unsigned TRACE_MODE_MASK = 0x000000c0;
        static constexpr unsigned TRACE_MODE(unsigned value) { return (value << 6); }
        static constexpr unsigned DBG_IWDG_STOP_POS = 8;
        static constexpr unsigned DBG_IWDG_STOP_MASK = 0x00000100;
        static constexpr unsigned DBG_IWDG_STOP(unsigned value) { return (value << 8); }
        static constexpr unsigned DBG_WWDG_STOP_POS = 9;
        static constexpr unsigned DBG_WWDG_STOP_MASK = 0x00000200;
        static constexpr unsigned DBG_WWDG_STOP(unsigned value) { return (value << 9); }
        static constexpr unsigned DBG_TIM1_STOP_POS = 10;
        static constexpr unsigned DBG_TIM1_STOP_MASK = 0x00000400;
        static constexpr unsigned DBG_TIM1_STOP(unsigned value) { return (value << 10); }
        static constexpr unsigned DBG_TIM2_STOP_POS = 11;
        static constexpr unsigned DBG_TIM2_STOP_MASK = 0x00000800;
        static constexpr unsigned DBG_TIM2_STOP(unsigned value) { return (value << 11); }
        static constexpr unsigned DBG_TIM3_STOP_POS = 12;
        static constexpr unsigned DBG_TIM3_STOP_MASK = 0x00001000;
        static constexpr unsigned DBG_TIM3_STOP(unsigned value) { return (value << 12); }
        static constexpr unsigned DBG_TIM4_STOP_POS = 13;
        static constexpr unsigned DBG_TIM4_STOP_MASK = 0x00002000;
        static constexpr unsigned DBG_TIM4_STOP(unsigned value) { return (value << 13); }
        static constexpr unsigned DBG_CAN1_STOP_POS = 14;
        static constexpr unsigned DBG_CAN1_STOP_MASK = 0x00004000;
        static constexpr unsigned DBG_CAN1_STOP(unsigned value) { return (value << 14); }
        static constexpr unsigned DBG_I2C1_SMBUS_TIMEOUT_POS = 15;
        static constexpr unsigned DBG_I2C1_SMBUS_TIMEOUT_MASK = 0x00008000;
        static constexpr unsigned DBG_I2C1_SMBUS_TIMEOUT(unsigned value) { return (value << 15); }
        static constexpr unsigned DBG_I2C2_SMBUS_TIMEOUT_POS = 16;
        static constexpr unsigned DBG_I2C2_SMBUS_TIMEOUT_MASK = 0x00010000;
        static constexpr unsigned DBG_I2C2_SMBUS_TIMEOUT(unsigned value) { return (value << 16); }
        static constexpr unsigned DBG_TIM5_STOP_POS = 18;
        static constexpr unsigned DBG_TIM5_STOP_MASK = 0x00040000;
        static constexpr unsigned DBG_TIM5_STOP(unsigned value) { return (value << 18); }
        static constexpr unsigned DBG_TIM6_STOP_POS = 19;
        static constexpr unsigned DBG_TIM6_STOP_MASK = 0x00080000;
        static constexpr unsigned DBG_TIM6_STOP(unsigned value) { return (value << 19); }
        static constexpr unsigned DBG_TIM7_STOP_POS = 20;
        static constexpr unsigned DBG_TIM7_STOP_MASK = 0x00100000;
        static constexpr unsigned DBG_TIM7_STOP(unsigned value) { return (value << 20); }
        static constexpr unsigned DBG_CAN2_STOP_POS = 21;
        static constexpr unsigned DBG_CAN2_STOP_MASK = 0x00200000;
        static constexpr unsigned DBG_CAN2_STOP(unsigned value) { return (value << 21); }
    } CR;

}; // struct DBG_T

static_assert(sizeof(DBG_T) == DBG_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp