#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DBGMCU_T
{
    static constexpr size_t INSTANCE_SIZE = 16;
    static constexpr size_t PADDED_INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0x40015800;

    static constexpr intptr_t ADDR_OFFSET_IDCODE = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_APBLFZ = 0x08;
    static constexpr intptr_t ADDR_OFFSET_APBHFZ = 0x0c;

    volatile union IDCODE_T // IDCODE: MCU Device ID Code Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IDCODE_BIT_T
        {
            unsigned DEV_ID : 12; // bits 0..11 Device Identifier
            unsigned DIV_ID : 4; // bits 12..15 Division Identifier
            unsigned REV_ID : 16; // bits 16..31 Revision Identifier    
        } bit;
    
        static constexpr unsigned DEV_ID_POS = 0;
        static constexpr unsigned DEV_ID_MASK = 0x00000fff;
        static constexpr unsigned DEV_ID(unsigned value) { return (value << 0); }
        static constexpr unsigned DIV_ID_POS = 12;
        static constexpr unsigned DIV_ID_MASK = 0x0000f000;
        static constexpr unsigned DIV_ID(unsigned value) { return (value << 12); }
        static constexpr unsigned REV_ID_POS = 16;
        static constexpr unsigned REV_ID_MASK = 0xffff0000;
        static constexpr unsigned REV_ID(unsigned value) { return (value << 16); }
    } IDCODE;

    volatile union CR_T // CR: Debug MCU Configuration Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned             : 1; // bit 0 unused
            unsigned DBG_STOP    : 1; // bit 1 Debug Stop Mode
            unsigned DBG_STANDBY : 1; // bit 2 Debug Standby Mode
            unsigned             : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned DBG_STOP_POS = 1;
        static constexpr unsigned DBG_STOP_MASK = 0x00000002;
        static constexpr unsigned DBG_STOP(unsigned value) { return (value << 1); }
        static constexpr unsigned DBG_STANDBY_POS = 2;
        static constexpr unsigned DBG_STANDBY_MASK = 0x00000004;
        static constexpr unsigned DBG_STANDBY(unsigned value) { return (value << 2); }
    } CR;

    volatile union APBLFZ_T // APBLFZ: APB Low Freeze Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBLFZ_BIT_T
        {
            unsigned DBG_TIMER2_STOP    : 1; // bit 0 Debug Timer 2 stopped when Core is halted
            unsigned DBG_TIMER3_STOP    : 1; // bit 1 Debug Timer 3 stopped when Core is halted
            unsigned                    : 2; // bits 2..3 unused
            unsigned DBG_TIMER6_STOP    : 1; // bit 4 Debug Timer 6 stopped when Core is halted
            unsigned                    : 3; // bits 5..7 unused
            unsigned DBG_TIMER14_STOP   : 1; // bit 8 Debug Timer 14 stopped when Core is halted
            unsigned                    : 1; // bit 9 unused
            unsigned DBG_RTC_STOP       : 1; // bit 10 Debug RTC stopped when Core is halted
            unsigned DBG_WWDG_STOP      : 1; // bit 11 Debug Window Wachdog stopped when Core is halted
            unsigned DBG_IWDG_STOP      : 1; // bit 12 Debug Independent Wachdog stopped when Core is halted
            unsigned                    : 8; // bits 13..20 unused
            unsigned I2C1_SMBUS_TIMEOUT : 1; // bit 21 SMBUS timeout mode stopped when Core is halted
            unsigned                    : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned DBG_TIMER2_STOP_POS = 0;
        static constexpr unsigned DBG_TIMER2_STOP_MASK = 0x00000001;
        static constexpr unsigned DBG_TIMER2_STOP(unsigned value) { return (value << 0); }
        static constexpr unsigned DBG_TIMER3_STOP_POS = 1;
        static constexpr unsigned DBG_TIMER3_STOP_MASK = 0x00000002;
        static constexpr unsigned DBG_TIMER3_STOP(unsigned value) { return (value << 1); }
        static constexpr unsigned DBG_TIMER6_STOP_POS = 4;
        static constexpr unsigned DBG_TIMER6_STOP_MASK = 0x00000010;
        static constexpr unsigned DBG_TIMER6_STOP(unsigned value) { return (value << 4); }
        static constexpr unsigned DBG_TIMER14_STOP_POS = 8;
        static constexpr unsigned DBG_TIMER14_STOP_MASK = 0x00000100;
        static constexpr unsigned DBG_TIMER14_STOP(unsigned value) { return (value << 8); }
        static constexpr unsigned DBG_RTC_STOP_POS = 10;
        static constexpr unsigned DBG_RTC_STOP_MASK = 0x00000400;
        static constexpr unsigned DBG_RTC_STOP(unsigned value) { return (value << 10); }
        static constexpr unsigned DBG_WWDG_STOP_POS = 11;
        static constexpr unsigned DBG_WWDG_STOP_MASK = 0x00000800;
        static constexpr unsigned DBG_WWDG_STOP(unsigned value) { return (value << 11); }
        static constexpr unsigned DBG_IWDG_STOP_POS = 12;
        static constexpr unsigned DBG_IWDG_STOP_MASK = 0x00001000;
        static constexpr unsigned DBG_IWDG_STOP(unsigned value) { return (value << 12); }
        static constexpr unsigned I2C1_SMBUS_TIMEOUT_POS = 21;
        static constexpr unsigned I2C1_SMBUS_TIMEOUT_MASK = 0x00200000;
        static constexpr unsigned I2C1_SMBUS_TIMEOUT(unsigned value) { return (value << 21); }
    } APBLFZ;

    volatile union APBHFZ_T // APBHFZ: APB High Freeze Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) APBHFZ_BIT_T
        {
            unsigned                 : 11; // bits 0..10 unused
            unsigned DBG_TIMER1_STOP : 1; // bit 11 Debug Timer 1 stopped when Core is halted
            unsigned                 : 4; // bits 12..15 unused
            unsigned DBG_TIMER15_STO : 1; // bit 16 Debug Timer 15 stopped when Core is halted
            unsigned DBG_TIMER16_STO : 1; // bit 17 Debug Timer 16 stopped when Core is halted
            unsigned DBG_TIMER17_STO : 1; // bit 18 Debug Timer 17 stopped when Core is halted
            unsigned                 : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned DBG_TIMER1_STOP_POS = 11;
        static constexpr unsigned DBG_TIMER1_STOP_MASK = 0x00000800;
        static constexpr unsigned DBG_TIMER1_STOP(unsigned value) { return (value << 11); }
        static constexpr unsigned DBG_TIMER15_STO_POS = 16;
        static constexpr unsigned DBG_TIMER15_STO_MASK = 0x00010000;
        static constexpr unsigned DBG_TIMER15_STO(unsigned value) { return (value << 16); }
        static constexpr unsigned DBG_TIMER16_STO_POS = 17;
        static constexpr unsigned DBG_TIMER16_STO_MASK = 0x00020000;
        static constexpr unsigned DBG_TIMER16_STO(unsigned value) { return (value << 17); }
        static constexpr unsigned DBG_TIMER17_STO_POS = 18;
        static constexpr unsigned DBG_TIMER17_STO_MASK = 0x00040000;
        static constexpr unsigned DBG_TIMER17_STO(unsigned value) { return (value << 18); }
    } APBHFZ;

}; // struct DBGMCU_T

static_assert(sizeof(DBGMCU_T) == DBGMCU_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp