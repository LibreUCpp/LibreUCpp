#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DBG_T
{
    static constexpr size_t INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0xe0042000;

    static constexpr intptr_t ADDR_OFFSET_DBGMCU_IDCODE = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DBGMCU_CR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DBGMCU_APB1_FZ = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DBGMCU_APB2_FZ = 0x0c;

    volatile union DBGMCU_IDCODE_T // DBGMCU_IDCODE: IDCODE 
    {
        uint32_t reg;
        struct __attribute__((packed)) DBGMCU_IDCODE_BIT_T
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
    } DBGMCU_IDCODE;

    volatile union DBGMCU_CR_T // DBGMCU_CR: Control Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DBGMCU_CR_BIT_T
        {
            unsigned DBG_SLEEP   : 1; // bit 0 DBG_SLEEP
            unsigned DBG_STOP    : 1; // bit 1 DBG_STOP
            unsigned DBG_STANDBY : 1; // bit 2 DBG_STANDBY
            unsigned             : 2; // bits 3..4 unused
            unsigned TRACE_IOEN  : 1; // bit 5 TRACE_IOEN
            unsigned TRACE_MODE  : 2; // bits 6..7 TRACE_MODE
            unsigned             : 24; // bits 8..31 unused    
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
    } DBGMCU_CR;

    volatile union DBGMCU_APB1_FZ_T // DBGMCU_APB1_FZ: Debug MCU APB1 Freeze registe 
    {
        uint32_t reg;
        struct __attribute__((packed)) DBGMCU_APB1_FZ_BIT_T
        {
            unsigned DBG_TIM2_STOP            : 1; // bit 0 DBG_TIM2_STOP
            unsigned DBG_TIM3_STOP            : 1; // bit 1 DBG_TIM3 _STOP
            unsigned DBG_TIM4_STOP            : 1; // bit 2 DBG_TIM4_STOP
            unsigned DBG_TIM5_STOP            : 1; // bit 3 DBG_TIM5_STOP
            unsigned DBG_TIM6_STOP            : 1; // bit 4 DBG_TIM6_STOP
            unsigned DBG_TIM7_STOP            : 1; // bit 5 DBG_TIM7_STOP
            unsigned DBG_TIM12_STOP           : 1; // bit 6 DBG_TIM12_STOP
            unsigned DBG_TIM13_STOP           : 1; // bit 7 DBG_TIM13_STOP
            unsigned DBG_TIM14_STOP           : 1; // bit 8 DBG_TIM14_STOP
            unsigned                          : 1; // bit 9 unused
            unsigned DBG_RTC_STOP             : 1; // bit 10 RTC stopped when Core is halted
            unsigned DBG_WWDG_STOP            : 1; // bit 11 DBG_WWDG_STOP
            unsigned DBG_IWDEG_STOP           : 1; // bit 12 DBG_IWDEG_STOP
            unsigned                          : 8; // bits 13..20 unused
            unsigned DBG_J2C1_SMBUS_TIMEOUT   : 1; // bit 21 DBG_J2C1_SMBUS_TIMEOUT
            unsigned DBG_J2C2_SMBUS_TIMEOUT   : 1; // bit 22 DBG_J2C2_SMBUS_TIMEOUT
            unsigned DBG_J2C3SMBUS_TIMEOUT    : 1; // bit 23 DBG_J2C3SMBUS_TIMEOUT
            unsigned DBG_I2CFMP_SMBUS_TIMEOUT : 1; // bit 24 SMBUS timeout mode stopped when Core is halted
            unsigned DBG_CAN1_STOP            : 1; // bit 25 DBG_CAN1_STOP
            unsigned DBG_CAN2_STOP            : 1; // bit 26 DBG_CAN2_STOP
            unsigned                          : 5; // bits 27..31 unused    
        } bit;
    
        static constexpr unsigned DBG_TIM2_STOP_POS = 0;
        static constexpr unsigned DBG_TIM2_STOP_MASK = 0x00000001;
        static constexpr unsigned DBG_TIM2_STOP(unsigned value) { return (value << 0); }
        static constexpr unsigned DBG_TIM3_STOP_POS = 1;
        static constexpr unsigned DBG_TIM3_STOP_MASK = 0x00000002;
        static constexpr unsigned DBG_TIM3_STOP(unsigned value) { return (value << 1); }
        static constexpr unsigned DBG_TIM4_STOP_POS = 2;
        static constexpr unsigned DBG_TIM4_STOP_MASK = 0x00000004;
        static constexpr unsigned DBG_TIM4_STOP(unsigned value) { return (value << 2); }
        static constexpr unsigned DBG_TIM5_STOP_POS = 3;
        static constexpr unsigned DBG_TIM5_STOP_MASK = 0x00000008;
        static constexpr unsigned DBG_TIM5_STOP(unsigned value) { return (value << 3); }
        static constexpr unsigned DBG_TIM6_STOP_POS = 4;
        static constexpr unsigned DBG_TIM6_STOP_MASK = 0x00000010;
        static constexpr unsigned DBG_TIM6_STOP(unsigned value) { return (value << 4); }
        static constexpr unsigned DBG_TIM7_STOP_POS = 5;
        static constexpr unsigned DBG_TIM7_STOP_MASK = 0x00000020;
        static constexpr unsigned DBG_TIM7_STOP(unsigned value) { return (value << 5); }
        static constexpr unsigned DBG_TIM12_STOP_POS = 6;
        static constexpr unsigned DBG_TIM12_STOP_MASK = 0x00000040;
        static constexpr unsigned DBG_TIM12_STOP(unsigned value) { return (value << 6); }
        static constexpr unsigned DBG_TIM13_STOP_POS = 7;
        static constexpr unsigned DBG_TIM13_STOP_MASK = 0x00000080;
        static constexpr unsigned DBG_TIM13_STOP(unsigned value) { return (value << 7); }
        static constexpr unsigned DBG_TIM14_STOP_POS = 8;
        static constexpr unsigned DBG_TIM14_STOP_MASK = 0x00000100;
        static constexpr unsigned DBG_TIM14_STOP(unsigned value) { return (value << 8); }
        static constexpr unsigned DBG_RTC_STOP_POS = 10;
        static constexpr unsigned DBG_RTC_STOP_MASK = 0x00000400;
        static constexpr unsigned DBG_RTC_STOP(unsigned value) { return (value << 10); }
        static constexpr unsigned DBG_WWDG_STOP_POS = 11;
        static constexpr unsigned DBG_WWDG_STOP_MASK = 0x00000800;
        static constexpr unsigned DBG_WWDG_STOP(unsigned value) { return (value << 11); }
        static constexpr unsigned DBG_IWDEG_STOP_POS = 12;
        static constexpr unsigned DBG_IWDEG_STOP_MASK = 0x00001000;
        static constexpr unsigned DBG_IWDEG_STOP(unsigned value) { return (value << 12); }
        static constexpr unsigned DBG_J2C1_SMBUS_TIMEOUT_POS = 21;
        static constexpr unsigned DBG_J2C1_SMBUS_TIMEOUT_MASK = 0x00200000;
        static constexpr unsigned DBG_J2C1_SMBUS_TIMEOUT(unsigned value) { return (value << 21); }
        static constexpr unsigned DBG_J2C2_SMBUS_TIMEOUT_POS = 22;
        static constexpr unsigned DBG_J2C2_SMBUS_TIMEOUT_MASK = 0x00400000;
        static constexpr unsigned DBG_J2C2_SMBUS_TIMEOUT(unsigned value) { return (value << 22); }
        static constexpr unsigned DBG_J2C3SMBUS_TIMEOUT_POS = 23;
        static constexpr unsigned DBG_J2C3SMBUS_TIMEOUT_MASK = 0x00800000;
        static constexpr unsigned DBG_J2C3SMBUS_TIMEOUT(unsigned value) { return (value << 23); }
        static constexpr unsigned DBG_I2CFMP_SMBUS_TIMEOUT_POS = 24;
        static constexpr unsigned DBG_I2CFMP_SMBUS_TIMEOUT_MASK = 0x01000000;
        static constexpr unsigned DBG_I2CFMP_SMBUS_TIMEOUT(unsigned value) { return (value << 24); }
        static constexpr unsigned DBG_CAN1_STOP_POS = 25;
        static constexpr unsigned DBG_CAN1_STOP_MASK = 0x02000000;
        static constexpr unsigned DBG_CAN1_STOP(unsigned value) { return (value << 25); }
        static constexpr unsigned DBG_CAN2_STOP_POS = 26;
        static constexpr unsigned DBG_CAN2_STOP_MASK = 0x04000000;
        static constexpr unsigned DBG_CAN2_STOP(unsigned value) { return (value << 26); }
    } DBGMCU_APB1_FZ;

    volatile union DBGMCU_APB2_FZ_T // DBGMCU_APB2_FZ: Debug MCU APB2 Freeze registe 
    {
        uint32_t reg;
        struct __attribute__((packed)) DBGMCU_APB2_FZ_BIT_T
        {
            unsigned DBG_TIM1_STOP  : 1; // bit 0 TIM1 counter stopped when core is halted
            unsigned DBG_TIM8_STOP  : 1; // bit 1 TIM8 counter stopped when core is halted
            unsigned                : 14; // bits 2..15 unused
            unsigned DBG_TIM9_STOP  : 1; // bit 16 TIM9 counter stopped when core is halted
            unsigned DBG_TIM10_STOP : 1; // bit 17 TIM10 counter stopped when core is halted
            unsigned DBG_TIM11_STOP : 1; // bit 18 TIM11 counter stopped when core is halted
            unsigned                : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned DBG_TIM1_STOP_POS = 0;
        static constexpr unsigned DBG_TIM1_STOP_MASK = 0x00000001;
        static constexpr unsigned DBG_TIM1_STOP(unsigned value) { return (value << 0); }
        static constexpr unsigned DBG_TIM8_STOP_POS = 1;
        static constexpr unsigned DBG_TIM8_STOP_MASK = 0x00000002;
        static constexpr unsigned DBG_TIM8_STOP(unsigned value) { return (value << 1); }
        static constexpr unsigned DBG_TIM9_STOP_POS = 16;
        static constexpr unsigned DBG_TIM9_STOP_MASK = 0x00010000;
        static constexpr unsigned DBG_TIM9_STOP(unsigned value) { return (value << 16); }
        static constexpr unsigned DBG_TIM10_STOP_POS = 17;
        static constexpr unsigned DBG_TIM10_STOP_MASK = 0x00020000;
        static constexpr unsigned DBG_TIM10_STOP(unsigned value) { return (value << 17); }
        static constexpr unsigned DBG_TIM11_STOP_POS = 18;
        static constexpr unsigned DBG_TIM11_STOP_MASK = 0x00040000;
        static constexpr unsigned DBG_TIM11_STOP(unsigned value) { return (value << 18); }
    } DBGMCU_APB2_FZ;

}; // struct DBG_T

static_assert(sizeof(DBG_T) == DBG_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp