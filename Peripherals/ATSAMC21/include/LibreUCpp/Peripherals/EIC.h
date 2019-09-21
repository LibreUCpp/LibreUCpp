#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) EIC_T
{
    static constexpr size_t INSTANCE_SIZE = 60;
    static constexpr intptr_t BASE_ADDRESS = 0x40002800;

    static constexpr intptr_t ADDR_OFFSET_CONFIG = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_NMICTRL = 0x01;
    static constexpr intptr_t ADDR_OFFSET_NMIFLAG = 0x02;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x04;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x08;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x10;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x14;
    static constexpr intptr_t ADDR_OFFSET_ASYNCH = 0x18;
    static constexpr intptr_t ADDR_OFFSET_DEBOUNCEN = 0x30;
    static constexpr intptr_t ADDR_OFFSET_DPRESCALER = 0x34;
    static constexpr intptr_t ADDR_OFFSET_PINSTATE = 0x38;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST  : 1; // bit 0 Software Reset
            unsigned ENABLE : 1; // bit 1 Enable
            unsigned        : 2; // bits 2..3 unused
            unsigned CKSEL  : 1; // bit 4 Clock Selection
            unsigned        : 3; // bits 5..7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned CKSEL_POS = 4;
        static constexpr unsigned CKSEL_MASK = 0x00000010;
        static constexpr unsigned CKSEL(unsigned value) { return (value << 4); }
    } CTRLA;

    volatile union NMICTRL_T // NMICTRL: Non-Maskable Interrupt Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) NMICTRL_BIT_T
        {
            unsigned NMISENSE  : 3; // bits 0..2 Non-Maskable Interrupt Sense Configuration
            unsigned NMIFILTEN : 1; // bit 3 Non-Maskable Interrupt Filter Enable
            unsigned NMIASYNCH : 1; // bit 4 Asynchronous Edge Detection Mode
            unsigned           : 3; // bits 5..7 unused    
        } bit;
    
        static constexpr unsigned NMISENSE_POS = 0;
        static constexpr unsigned NMISENSE_MASK = 0x00000007;
        static constexpr unsigned NMISENSE(unsigned value) { return (value << 0); }
        static constexpr unsigned NMIFILTEN_POS = 3;
        static constexpr unsigned NMIFILTEN_MASK = 0x00000008;
        static constexpr unsigned NMIFILTEN(unsigned value) { return (value << 3); }
        static constexpr unsigned NMIASYNCH_POS = 4;
        static constexpr unsigned NMIASYNCH_MASK = 0x00000010;
        static constexpr unsigned NMIASYNCH(unsigned value) { return (value << 4); }
    } NMICTRL;

    volatile union NMIFLAG_T // NMIFLAG: Non-Maskable Interrupt Flag Status and Clear 
    {
        uint16_t reg;
        struct __attribute__((packed)) NMIFLAG_BIT_T
        {
            unsigned NMI : 1; // bit 0 Non-Maskable Interrupt
            unsigned     : 15; // bits 1..15 unused    
        } bit;
    
        static constexpr unsigned NMI_POS = 0;
        static constexpr unsigned NMI_MASK = 0x00000001;
        static constexpr unsigned NMI(unsigned value) { return (value << 0); }
    } NMIFLAG;

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST  : 1; // bit 0 Software Reset Synchronization Busy Status
            unsigned ENABLE : 1; // bit 1 Enable Synchronization Busy Status
            unsigned        : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
    } SYNCBUSY;

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned EXTINTEO : 16; // bits 0..15 External Interrupt Event Output Enable
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTINTEO_POS = 0;
        static constexpr unsigned EXTINTEO_MASK = 0x0000ffff;
        static constexpr unsigned EXTINTEO(unsigned value) { return (value << 0); }
    } EVCTRL;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned EXTINT : 16; // bits 0..15 External Interrupt Enable
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTINT_POS = 0;
        static constexpr unsigned EXTINT_MASK = 0x0000ffff;
        static constexpr unsigned EXTINT(unsigned value) { return (value << 0); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned EXTINT : 16; // bits 0..15 External Interrupt Enable
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTINT_POS = 0;
        static constexpr unsigned EXTINT_MASK = 0x0000ffff;
        static constexpr unsigned EXTINT(unsigned value) { return (value << 0); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned EXTINT : 16; // bits 0..15 External Interrupt
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned EXTINT_POS = 0;
        static constexpr unsigned EXTINT_MASK = 0x0000ffff;
        static constexpr unsigned EXTINT(unsigned value) { return (value << 0); }
    } INTFLAG;

    volatile union ASYNCH_T // ASYNCH: External Interrupt Asynchronous Mode 
    {
        uint32_t reg;
        struct __attribute__((packed)) ASYNCH_BIT_T
        {
            unsigned ASYNCH : 16; // bits 0..15 Asynchronous Edge Detection Mode
            unsigned        : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned ASYNCH_POS = 0;
        static constexpr unsigned ASYNCH_MASK = 0x0000ffff;
        static constexpr unsigned ASYNCH(unsigned value) { return (value << 0); }
    } ASYNCH;

    volatile union CONFIG_T // CONFIG: External Interrupt Sense Configuration 
    {
        uint32_t reg;
        struct __attribute__((packed)) CONFIG_BIT_T
        {
            unsigned SENSE0  : 3; // bits 0..2 Input Sense Configuration 0
            unsigned FILTEN0 : 1; // bit 3 Filter Enable 0
            unsigned SENSE1  : 3; // bits 4..6 Input Sense Configuration 1
            unsigned FILTEN1 : 1; // bit 7 Filter Enable 1
            unsigned SENSE2  : 3; // bits 8..10 Input Sense Configuration 2
            unsigned FILTEN2 : 1; // bit 11 Filter Enable 2
            unsigned SENSE3  : 3; // bits 12..14 Input Sense Configuration 3
            unsigned FILTEN3 : 1; // bit 15 Filter Enable 3
            unsigned SENSE4  : 3; // bits 16..18 Input Sense Configuration 4
            unsigned FILTEN4 : 1; // bit 19 Filter Enable 4
            unsigned SENSE5  : 3; // bits 20..22 Input Sense Configuration 5
            unsigned FILTEN5 : 1; // bit 23 Filter Enable 5
            unsigned SENSE6  : 3; // bits 24..26 Input Sense Configuration 6
            unsigned FILTEN6 : 1; // bit 27 Filter Enable 6
            unsigned SENSE7  : 3; // bits 28..30 Input Sense Configuration 7
            unsigned FILTEN7 : 1; // bit 31 Filter Enable 7    
        } bit;
    
        static constexpr unsigned SENSE0_POS = 0;
        static constexpr unsigned SENSE0_MASK = 0x00000007;
        static constexpr unsigned SENSE0(unsigned value) { return (value << 0); }
        static constexpr unsigned FILTEN0_POS = 3;
        static constexpr unsigned FILTEN0_MASK = 0x00000008;
        static constexpr unsigned FILTEN0(unsigned value) { return (value << 3); }
        static constexpr unsigned SENSE1_POS = 4;
        static constexpr unsigned SENSE1_MASK = 0x00000070;
        static constexpr unsigned SENSE1(unsigned value) { return (value << 4); }
        static constexpr unsigned FILTEN1_POS = 7;
        static constexpr unsigned FILTEN1_MASK = 0x00000080;
        static constexpr unsigned FILTEN1(unsigned value) { return (value << 7); }
        static constexpr unsigned SENSE2_POS = 8;
        static constexpr unsigned SENSE2_MASK = 0x00000700;
        static constexpr unsigned SENSE2(unsigned value) { return (value << 8); }
        static constexpr unsigned FILTEN2_POS = 11;
        static constexpr unsigned FILTEN2_MASK = 0x00000800;
        static constexpr unsigned FILTEN2(unsigned value) { return (value << 11); }
        static constexpr unsigned SENSE3_POS = 12;
        static constexpr unsigned SENSE3_MASK = 0x00007000;
        static constexpr unsigned SENSE3(unsigned value) { return (value << 12); }
        static constexpr unsigned FILTEN3_POS = 15;
        static constexpr unsigned FILTEN3_MASK = 0x00008000;
        static constexpr unsigned FILTEN3(unsigned value) { return (value << 15); }
        static constexpr unsigned SENSE4_POS = 16;
        static constexpr unsigned SENSE4_MASK = 0x00070000;
        static constexpr unsigned SENSE4(unsigned value) { return (value << 16); }
        static constexpr unsigned FILTEN4_POS = 19;
        static constexpr unsigned FILTEN4_MASK = 0x00080000;
        static constexpr unsigned FILTEN4(unsigned value) { return (value << 19); }
        static constexpr unsigned SENSE5_POS = 20;
        static constexpr unsigned SENSE5_MASK = 0x00700000;
        static constexpr unsigned SENSE5(unsigned value) { return (value << 20); }
        static constexpr unsigned FILTEN5_POS = 23;
        static constexpr unsigned FILTEN5_MASK = 0x00800000;
        static constexpr unsigned FILTEN5(unsigned value) { return (value << 23); }
        static constexpr unsigned SENSE6_POS = 24;
        static constexpr unsigned SENSE6_MASK = 0x07000000;
        static constexpr unsigned SENSE6(unsigned value) { return (value << 24); }
        static constexpr unsigned FILTEN6_POS = 27;
        static constexpr unsigned FILTEN6_MASK = 0x08000000;
        static constexpr unsigned FILTEN6(unsigned value) { return (value << 27); }
        static constexpr unsigned SENSE7_POS = 28;
        static constexpr unsigned SENSE7_MASK = 0x70000000;
        static constexpr unsigned SENSE7(unsigned value) { return (value << 28); }
        static constexpr unsigned FILTEN7_POS = 31;
        static constexpr unsigned FILTEN7_MASK = 0x80000000;
        static constexpr unsigned FILTEN7(unsigned value) { return (value << 31); }
    } CONFIG[2];

    uint8_t Reserved1[12];

    volatile union DEBOUNCEN_T // DEBOUNCEN: Debouncer Enable 
    {
        uint32_t reg;
        struct __attribute__((packed)) DEBOUNCEN_BIT_T
        {
            unsigned DEBOUNCEN : 16; // bits 0..15 Debouncer Enable
            unsigned           : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DEBOUNCEN_POS = 0;
        static constexpr unsigned DEBOUNCEN_MASK = 0x0000ffff;
        static constexpr unsigned DEBOUNCEN(unsigned value) { return (value << 0); }
    } DEBOUNCEN;

    volatile union DPRESCALER_T // DPRESCALER: Debouncer Prescaler 
    {
        uint32_t reg;
        struct __attribute__((packed)) DPRESCALER_BIT_T
        {
            unsigned PRESCALER0 : 3; // bits 0..2 Debouncer Prescaler
            unsigned STATES0    : 1; // bit 3 Debouncer number of states
            unsigned PRESCALER1 : 3; // bits 4..6 Debouncer Prescaler
            unsigned STATES1    : 1; // bit 7 Debouncer number of states
            unsigned            : 8; // bits 8..15 unused
            unsigned TICKON     : 1; // bit 16 Pin Sampler frequency selection
            unsigned            : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned PRESCALER0_POS = 0;
        static constexpr unsigned PRESCALER0_MASK = 0x00000007;
        static constexpr unsigned PRESCALER0(unsigned value) { return (value << 0); }
        static constexpr unsigned STATES0_POS = 3;
        static constexpr unsigned STATES0_MASK = 0x00000008;
        static constexpr unsigned STATES0(unsigned value) { return (value << 3); }
        static constexpr unsigned PRESCALER1_POS = 4;
        static constexpr unsigned PRESCALER1_MASK = 0x00000070;
        static constexpr unsigned PRESCALER1(unsigned value) { return (value << 4); }
        static constexpr unsigned STATES1_POS = 7;
        static constexpr unsigned STATES1_MASK = 0x00000080;
        static constexpr unsigned STATES1(unsigned value) { return (value << 7); }
        static constexpr unsigned TICKON_POS = 16;
        static constexpr unsigned TICKON_MASK = 0x00010000;
        static constexpr unsigned TICKON(unsigned value) { return (value << 16); }
    } DPRESCALER;

    volatile union PINSTATE_T // PINSTATE: Pin State 
    {
        uint32_t reg;
        struct __attribute__((packed)) PINSTATE_BIT_T
        {
            unsigned PINSTATE : 16; // bits 0..15 Pin State
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned PINSTATE_POS = 0;
        static constexpr unsigned PINSTATE_MASK = 0x0000ffff;
        static constexpr unsigned PINSTATE(unsigned value) { return (value << 0); }
    } PINSTATE;

}; // struct EIC_T

static_assert(sizeof(EIC_T) == EIC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp