#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) WDT_T
{
    static constexpr size_t INSTANCE_SIZE = 13;
    static constexpr size_t PADDED_INSTANCE_SIZE = 16;
    static constexpr intptr_t BASE_ADDRESS = 0x40002000;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CONFIG = 0x01;
    static constexpr intptr_t ADDR_OFFSET_EWCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x06;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CLEAR = 0x0c;

    volatile union CTRLA_T // CTRLA: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned WEN      : 1; // bit 2 Watchdog Timer Window Mode Enable
            unsigned          : 4; // bits 3..6 unused
            unsigned ALWAYSON : 1; // bit 7 Always-On    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned WEN_POS = 2;
        static constexpr unsigned WEN_MASK = 0x00000004;
        static constexpr unsigned WEN(unsigned value) { return (value << 2); }
        static constexpr unsigned ALWAYSON_POS = 7;
        static constexpr unsigned ALWAYSON_MASK = 0x00000080;
        static constexpr unsigned ALWAYSON(unsigned value) { return (value << 7); }
    } CTRLA;

    volatile union CONFIG_T // CONFIG: Configuration 
    {
        uint8_t reg;
        struct __attribute__((packed)) CONFIG_BIT_T
        {
            unsigned PER    : 4; // bits 0..3 Time-Out Period
            unsigned WINDOW : 4; // bits 4..7 Window Mode Time-Out Period    
        } bit;
    
        static constexpr unsigned PER_POS = 0;
        static constexpr unsigned PER_MASK = 0x0000000f;
        static constexpr unsigned PER(unsigned value) { return (value << 0); }
        static constexpr unsigned WINDOW_POS = 4;
        static constexpr unsigned WINDOW_MASK = 0x000000f0;
        static constexpr unsigned WINDOW(unsigned value) { return (value << 4); }
    } CONFIG;

    volatile union EWCTRL_T // EWCTRL: Early Warning Interrupt Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) EWCTRL_BIT_T
        {
            unsigned EWOFFSET : 4; // bits 0..3 Early Warning Interrupt Time Offset
            unsigned          : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned EWOFFSET_POS = 0;
        static constexpr unsigned EWOFFSET_MASK = 0x0000000f;
        static constexpr unsigned EWOFFSET(unsigned value) { return (value << 0); }
    } EWCTRL;

    uint8_t Reserved1[1];

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned EW : 1; // bit 0 Early Warning Interrupt Enable
            unsigned    : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned EW_POS = 0;
        static constexpr unsigned EW_MASK = 0x00000001;
        static constexpr unsigned EW(unsigned value) { return (value << 0); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned EW : 1; // bit 0 Early Warning Interrupt Enable
            unsigned    : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned EW_POS = 0;
        static constexpr unsigned EW_MASK = 0x00000001;
        static constexpr unsigned EW(unsigned value) { return (value << 0); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned EW : 1; // bit 0 Early Warning
            unsigned    : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned EW_POS = 0;
        static constexpr unsigned EW_MASK = 0x00000001;
        static constexpr unsigned EW(unsigned value) { return (value << 0); }
    } INTFLAG;

    uint8_t Reserved2[1];

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Enable Busy
            unsigned WEN      : 1; // bit 2 Window Enable Busy
            unsigned ALWAYSON : 1; // bit 3 Always-On Busy
            unsigned CLEAR    : 1; // bit 4 Clear Busy
            unsigned          : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned WEN_POS = 2;
        static constexpr unsigned WEN_MASK = 0x00000004;
        static constexpr unsigned WEN(unsigned value) { return (value << 2); }
        static constexpr unsigned ALWAYSON_POS = 3;
        static constexpr unsigned ALWAYSON_MASK = 0x00000008;
        static constexpr unsigned ALWAYSON(unsigned value) { return (value << 3); }
        static constexpr unsigned CLEAR_POS = 4;
        static constexpr unsigned CLEAR_MASK = 0x00000010;
        static constexpr unsigned CLEAR(unsigned value) { return (value << 4); }
    } SYNCBUSY;

    volatile union CLEAR_T // CLEAR: Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) CLEAR_BIT_T
        {
            unsigned CLEAR : 8; // bits 0..7 Watchdog Clear    
        } bit;
    
        static constexpr unsigned CLEAR_POS = 0;
        static constexpr unsigned CLEAR_MASK = 0x000000ff;
        static constexpr unsigned CLEAR(unsigned value) { return (value << 0); }
    } CLEAR;

}; // struct WDT_T

static_assert(sizeof(WDT_T) == WDT_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp