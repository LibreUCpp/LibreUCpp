#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) FREQM_T
{
    static constexpr size_t INSTANCE_SIZE = 20;
    static constexpr intptr_t BASE_ADDRESS = 0x40002c00;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x01;
    static constexpr intptr_t ADDR_OFFSET_CFGA = 0x02;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x09;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x0a;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x0b;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_VALUE = 0x10;

    volatile union CTRLA_T // CTRLA: Control A Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST  : 1; // bit 0 Software Reset
            unsigned ENABLE : 1; // bit 1 Enable
            unsigned        : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
    } CTRLA;

    volatile union CTRLB_T // CTRLB: Control B Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned START : 1; // bit 0 Start Measurement
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned START_POS = 0;
        static constexpr unsigned START_MASK = 0x00000001;
        static constexpr unsigned START(unsigned value) { return (value << 0); }
    } CTRLB;

    volatile union CFGA_T // CFGA: Config A register 
    {
        uint16_t reg;
        struct __attribute__((packed)) CFGA_BIT_T
        {
            unsigned REFNUM : 8; // bits 0..7 Number of Reference Clock Cycles
            unsigned        : 7; // bits 8..14 unused
            unsigned DIVREF : 1; // bit 15 Divide Reference Clock    
        } bit;
    
        static constexpr unsigned REFNUM_POS = 0;
        static constexpr unsigned REFNUM_MASK = 0x000000ff;
        static constexpr unsigned REFNUM(unsigned value) { return (value << 0); }
        static constexpr unsigned DIVREF_POS = 15;
        static constexpr unsigned DIVREF_MASK = 0x00008000;
        static constexpr unsigned DIVREF(unsigned value) { return (value << 15); }
    } CFGA;

    uint8_t Reserved1[4];

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned DONE : 1; // bit 0 Measurement Done Interrupt Enable
            unsigned      : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned DONE_POS = 0;
        static constexpr unsigned DONE_MASK = 0x00000001;
        static constexpr unsigned DONE(unsigned value) { return (value << 0); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned DONE : 1; // bit 0 Measurement Done Interrupt Enable
            unsigned      : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned DONE_POS = 0;
        static constexpr unsigned DONE_MASK = 0x00000001;
        static constexpr unsigned DONE(unsigned value) { return (value << 0); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned DONE : 1; // bit 0 Measurement Done
            unsigned      : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned DONE_POS = 0;
        static constexpr unsigned DONE_MASK = 0x00000001;
        static constexpr unsigned DONE(unsigned value) { return (value << 0); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Status Register 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned BUSY : 1; // bit 0 FREQM Status
            unsigned OVF  : 1; // bit 1 Sticky Count Value Overflow
            unsigned      : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned BUSY_POS = 0;
        static constexpr unsigned BUSY_MASK = 0x00000001;
        static constexpr unsigned BUSY(unsigned value) { return (value << 0); }
        static constexpr unsigned OVF_POS = 1;
        static constexpr unsigned OVF_MASK = 0x00000002;
        static constexpr unsigned OVF(unsigned value) { return (value << 1); }
    } STATUS;

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST  : 1; // bit 0 Software Reset
            unsigned ENABLE : 1; // bit 1 Enable
            unsigned        : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
    } SYNCBUSY;

    volatile union VALUE_T // VALUE: Count Value Register 
    {
        uint32_t reg;
        struct __attribute__((packed)) VALUE_BIT_T
        {
            unsigned VALUE : 24; // bits 0..23 Measurement Value
            unsigned       : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned VALUE_POS = 0;
        static constexpr unsigned VALUE_MASK = 0x00ffffff;
        static constexpr unsigned VALUE(unsigned value) { return (value << 0); }
    } VALUE;

}; // struct FREQM_T

static_assert(sizeof(FREQM_T) == FREQM_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp