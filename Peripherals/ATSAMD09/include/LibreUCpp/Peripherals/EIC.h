#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) EIC_T
{
    static constexpr size_t INSTANCE_SIZE = 28;
    static constexpr size_t PADDED_INSTANCE_SIZE = 28;
    static constexpr intptr_t BASE_ADDRESS = 0x40001800;

    static constexpr intptr_t ADDR_OFFSET_CONFIG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_CTRL = 0x00;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x01;
    static constexpr intptr_t ADDR_OFFSET_NMICTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_NMIFLAG = 0x03;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x10;
    static constexpr intptr_t ADDR_OFFSET_WAKEUP = 0x14;

    volatile union CTRL_T // CTRL: Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRL_BIT_T
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
    } CTRL;

    volatile union STATUS_T // STATUS: Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned          : 7; // bits 0..6 unused
            unsigned SYNCBUSY : 1; // bit 7 Synchronization Busy    
        } bit;
    
        static constexpr unsigned SYNCBUSY_POS = 7;
        static constexpr unsigned SYNCBUSY_MASK = 0x00000080;
        static constexpr unsigned SYNCBUSY(unsigned value) { return (value << 7); }
    } STATUS;

    volatile union NMICTRL_T // NMICTRL: Non-Maskable Interrupt Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) NMICTRL_BIT_T
        {
            unsigned NMISENSE  : 3; // bits 0..2 Non-Maskable Interrupt Sense
            unsigned NMIFILTEN : 1; // bit 3 Non-Maskable Interrupt Filter Enable
            unsigned           : 4; // bits 4..7 unused    
        } bit;
    
        static constexpr unsigned NMISENSE_POS = 0;
        static constexpr unsigned NMISENSE_MASK = 0x00000007;
        static constexpr unsigned NMISENSE(unsigned value) { return (value << 0); }
        static constexpr unsigned NMIFILTEN_POS = 3;
        static constexpr unsigned NMIFILTEN_MASK = 0x00000008;
        static constexpr unsigned NMIFILTEN(unsigned value) { return (value << 3); }
    } NMICTRL;

    volatile union NMIFLAG_T // NMIFLAG: Non-Maskable Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) NMIFLAG_BIT_T
        {
            unsigned NMI : 1; // bit 0 Non-Maskable Interrupt
            unsigned     : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned NMI_POS = 0;
        static constexpr unsigned NMI_MASK = 0x00000001;
        static constexpr unsigned NMI(unsigned value) { return (value << 0); }
    } NMIFLAG;

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned EXTINTEO0 : 1; // bit 0 External Interrupt 0 Event Output Enable
            unsigned EXTINTEO1 : 1; // bit 1 External Interrupt 1 Event Output Enable
            unsigned EXTINTEO2 : 1; // bit 2 External Interrupt 2 Event Output Enable
            unsigned EXTINTEO3 : 1; // bit 3 External Interrupt 3 Event Output Enable
            unsigned EXTINTEO4 : 1; // bit 4 External Interrupt 4 Event Output Enable
            unsigned EXTINTEO5 : 1; // bit 5 External Interrupt 5 Event Output Enable
            unsigned EXTINTEO6 : 1; // bit 6 External Interrupt 6 Event Output Enable
            unsigned EXTINTEO7 : 1; // bit 7 External Interrupt 7 Event Output Enable
            unsigned           : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned EXTINTEO0_POS = 0;
        static constexpr unsigned EXTINTEO0_MASK = 0x00000001;
        static constexpr unsigned EXTINTEO0(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTINTEO1_POS = 1;
        static constexpr unsigned EXTINTEO1_MASK = 0x00000002;
        static constexpr unsigned EXTINTEO1(unsigned value) { return (value << 1); }
        static constexpr unsigned EXTINTEO2_POS = 2;
        static constexpr unsigned EXTINTEO2_MASK = 0x00000004;
        static constexpr unsigned EXTINTEO2(unsigned value) { return (value << 2); }
        static constexpr unsigned EXTINTEO3_POS = 3;
        static constexpr unsigned EXTINTEO3_MASK = 0x00000008;
        static constexpr unsigned EXTINTEO3(unsigned value) { return (value << 3); }
        static constexpr unsigned EXTINTEO4_POS = 4;
        static constexpr unsigned EXTINTEO4_MASK = 0x00000010;
        static constexpr unsigned EXTINTEO4(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTINTEO5_POS = 5;
        static constexpr unsigned EXTINTEO5_MASK = 0x00000020;
        static constexpr unsigned EXTINTEO5(unsigned value) { return (value << 5); }
        static constexpr unsigned EXTINTEO6_POS = 6;
        static constexpr unsigned EXTINTEO6_MASK = 0x00000040;
        static constexpr unsigned EXTINTEO6(unsigned value) { return (value << 6); }
        static constexpr unsigned EXTINTEO7_POS = 7;
        static constexpr unsigned EXTINTEO7_MASK = 0x00000080;
        static constexpr unsigned EXTINTEO7(unsigned value) { return (value << 7); }
    } EVCTRL;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned EXTINT0 : 1; // bit 0 External Interrupt 0 Enable
            unsigned EXTINT1 : 1; // bit 1 External Interrupt 1 Enable
            unsigned EXTINT2 : 1; // bit 2 External Interrupt 2 Enable
            unsigned EXTINT3 : 1; // bit 3 External Interrupt 3 Enable
            unsigned EXTINT4 : 1; // bit 4 External Interrupt 4 Enable
            unsigned EXTINT5 : 1; // bit 5 External Interrupt 5 Enable
            unsigned EXTINT6 : 1; // bit 6 External Interrupt 6 Enable
            unsigned EXTINT7 : 1; // bit 7 External Interrupt 7 Enable
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned EXTINT0_POS = 0;
        static constexpr unsigned EXTINT0_MASK = 0x00000001;
        static constexpr unsigned EXTINT0(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTINT1_POS = 1;
        static constexpr unsigned EXTINT1_MASK = 0x00000002;
        static constexpr unsigned EXTINT1(unsigned value) { return (value << 1); }
        static constexpr unsigned EXTINT2_POS = 2;
        static constexpr unsigned EXTINT2_MASK = 0x00000004;
        static constexpr unsigned EXTINT2(unsigned value) { return (value << 2); }
        static constexpr unsigned EXTINT3_POS = 3;
        static constexpr unsigned EXTINT3_MASK = 0x00000008;
        static constexpr unsigned EXTINT3(unsigned value) { return (value << 3); }
        static constexpr unsigned EXTINT4_POS = 4;
        static constexpr unsigned EXTINT4_MASK = 0x00000010;
        static constexpr unsigned EXTINT4(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTINT5_POS = 5;
        static constexpr unsigned EXTINT5_MASK = 0x00000020;
        static constexpr unsigned EXTINT5(unsigned value) { return (value << 5); }
        static constexpr unsigned EXTINT6_POS = 6;
        static constexpr unsigned EXTINT6_MASK = 0x00000040;
        static constexpr unsigned EXTINT6(unsigned value) { return (value << 6); }
        static constexpr unsigned EXTINT7_POS = 7;
        static constexpr unsigned EXTINT7_MASK = 0x00000080;
        static constexpr unsigned EXTINT7(unsigned value) { return (value << 7); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned EXTINT0 : 1; // bit 0 External Interrupt 0 Enable
            unsigned EXTINT1 : 1; // bit 1 External Interrupt 1 Enable
            unsigned EXTINT2 : 1; // bit 2 External Interrupt 2 Enable
            unsigned EXTINT3 : 1; // bit 3 External Interrupt 3 Enable
            unsigned EXTINT4 : 1; // bit 4 External Interrupt 4 Enable
            unsigned EXTINT5 : 1; // bit 5 External Interrupt 5 Enable
            unsigned EXTINT6 : 1; // bit 6 External Interrupt 6 Enable
            unsigned EXTINT7 : 1; // bit 7 External Interrupt 7 Enable
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned EXTINT0_POS = 0;
        static constexpr unsigned EXTINT0_MASK = 0x00000001;
        static constexpr unsigned EXTINT0(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTINT1_POS = 1;
        static constexpr unsigned EXTINT1_MASK = 0x00000002;
        static constexpr unsigned EXTINT1(unsigned value) { return (value << 1); }
        static constexpr unsigned EXTINT2_POS = 2;
        static constexpr unsigned EXTINT2_MASK = 0x00000004;
        static constexpr unsigned EXTINT2(unsigned value) { return (value << 2); }
        static constexpr unsigned EXTINT3_POS = 3;
        static constexpr unsigned EXTINT3_MASK = 0x00000008;
        static constexpr unsigned EXTINT3(unsigned value) { return (value << 3); }
        static constexpr unsigned EXTINT4_POS = 4;
        static constexpr unsigned EXTINT4_MASK = 0x00000010;
        static constexpr unsigned EXTINT4(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTINT5_POS = 5;
        static constexpr unsigned EXTINT5_MASK = 0x00000020;
        static constexpr unsigned EXTINT5(unsigned value) { return (value << 5); }
        static constexpr unsigned EXTINT6_POS = 6;
        static constexpr unsigned EXTINT6_MASK = 0x00000040;
        static constexpr unsigned EXTINT6(unsigned value) { return (value << 6); }
        static constexpr unsigned EXTINT7_POS = 7;
        static constexpr unsigned EXTINT7_MASK = 0x00000080;
        static constexpr unsigned EXTINT7(unsigned value) { return (value << 7); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned EXTINT0 : 1; // bit 0 External Interrupt 0
            unsigned EXTINT1 : 1; // bit 1 External Interrupt 1
            unsigned EXTINT2 : 1; // bit 2 External Interrupt 2
            unsigned EXTINT3 : 1; // bit 3 External Interrupt 3
            unsigned EXTINT4 : 1; // bit 4 External Interrupt 4
            unsigned EXTINT5 : 1; // bit 5 External Interrupt 5
            unsigned EXTINT6 : 1; // bit 6 External Interrupt 6
            unsigned EXTINT7 : 1; // bit 7 External Interrupt 7
            unsigned         : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned EXTINT0_POS = 0;
        static constexpr unsigned EXTINT0_MASK = 0x00000001;
        static constexpr unsigned EXTINT0(unsigned value) { return (value << 0); }
        static constexpr unsigned EXTINT1_POS = 1;
        static constexpr unsigned EXTINT1_MASK = 0x00000002;
        static constexpr unsigned EXTINT1(unsigned value) { return (value << 1); }
        static constexpr unsigned EXTINT2_POS = 2;
        static constexpr unsigned EXTINT2_MASK = 0x00000004;
        static constexpr unsigned EXTINT2(unsigned value) { return (value << 2); }
        static constexpr unsigned EXTINT3_POS = 3;
        static constexpr unsigned EXTINT3_MASK = 0x00000008;
        static constexpr unsigned EXTINT3(unsigned value) { return (value << 3); }
        static constexpr unsigned EXTINT4_POS = 4;
        static constexpr unsigned EXTINT4_MASK = 0x00000010;
        static constexpr unsigned EXTINT4(unsigned value) { return (value << 4); }
        static constexpr unsigned EXTINT5_POS = 5;
        static constexpr unsigned EXTINT5_MASK = 0x00000020;
        static constexpr unsigned EXTINT5(unsigned value) { return (value << 5); }
        static constexpr unsigned EXTINT6_POS = 6;
        static constexpr unsigned EXTINT6_MASK = 0x00000040;
        static constexpr unsigned EXTINT6(unsigned value) { return (value << 6); }
        static constexpr unsigned EXTINT7_POS = 7;
        static constexpr unsigned EXTINT7_MASK = 0x00000080;
        static constexpr unsigned EXTINT7(unsigned value) { return (value << 7); }
    } INTFLAG;

    volatile union WAKEUP_T // WAKEUP: Wake-Up Enable 
    {
        uint32_t reg;
        struct __attribute__((packed)) WAKEUP_BIT_T
        {
            unsigned WAKEUPEN0 : 1; // bit 0 External Interrupt 0 Wake-up Enable
            unsigned WAKEUPEN1 : 1; // bit 1 External Interrupt 1 Wake-up Enable
            unsigned WAKEUPEN2 : 1; // bit 2 External Interrupt 2 Wake-up Enable
            unsigned WAKEUPEN3 : 1; // bit 3 External Interrupt 3 Wake-up Enable
            unsigned WAKEUPEN4 : 1; // bit 4 External Interrupt 4 Wake-up Enable
            unsigned WAKEUPEN5 : 1; // bit 5 External Interrupt 5 Wake-up Enable
            unsigned WAKEUPEN6 : 1; // bit 6 External Interrupt 6 Wake-up Enable
            unsigned WAKEUPEN7 : 1; // bit 7 External Interrupt 7 Wake-up Enable
            unsigned           : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned WAKEUPEN0_POS = 0;
        static constexpr unsigned WAKEUPEN0_MASK = 0x00000001;
        static constexpr unsigned WAKEUPEN0(unsigned value) { return (value << 0); }
        static constexpr unsigned WAKEUPEN1_POS = 1;
        static constexpr unsigned WAKEUPEN1_MASK = 0x00000002;
        static constexpr unsigned WAKEUPEN1(unsigned value) { return (value << 1); }
        static constexpr unsigned WAKEUPEN2_POS = 2;
        static constexpr unsigned WAKEUPEN2_MASK = 0x00000004;
        static constexpr unsigned WAKEUPEN2(unsigned value) { return (value << 2); }
        static constexpr unsigned WAKEUPEN3_POS = 3;
        static constexpr unsigned WAKEUPEN3_MASK = 0x00000008;
        static constexpr unsigned WAKEUPEN3(unsigned value) { return (value << 3); }
        static constexpr unsigned WAKEUPEN4_POS = 4;
        static constexpr unsigned WAKEUPEN4_MASK = 0x00000010;
        static constexpr unsigned WAKEUPEN4(unsigned value) { return (value << 4); }
        static constexpr unsigned WAKEUPEN5_POS = 5;
        static constexpr unsigned WAKEUPEN5_MASK = 0x00000020;
        static constexpr unsigned WAKEUPEN5(unsigned value) { return (value << 5); }
        static constexpr unsigned WAKEUPEN6_POS = 6;
        static constexpr unsigned WAKEUPEN6_MASK = 0x00000040;
        static constexpr unsigned WAKEUPEN6(unsigned value) { return (value << 6); }
        static constexpr unsigned WAKEUPEN7_POS = 7;
        static constexpr unsigned WAKEUPEN7_MASK = 0x00000080;
        static constexpr unsigned WAKEUPEN7(unsigned value) { return (value << 7); }
    } WAKEUP;

    volatile union CONFIG_T // CONFIG: Configuration n 
    {
        uint32_t reg;
        struct __attribute__((packed)) CONFIG_BIT_T
        {
            unsigned SENSE0  : 3; // bits 0..2 Input Sense 0 Configuration
            unsigned FILTEN0 : 1; // bit 3 Filter 0 Enable
            unsigned SENSE1  : 3; // bits 4..6 Input Sense 1 Configuration
            unsigned FILTEN1 : 1; // bit 7 Filter 1 Enable
            unsigned SENSE2  : 3; // bits 8..10 Input Sense 2 Configuration
            unsigned FILTEN2 : 1; // bit 11 Filter 2 Enable
            unsigned SENSE3  : 3; // bits 12..14 Input Sense 3 Configuration
            unsigned FILTEN3 : 1; // bit 15 Filter 3 Enable
            unsigned SENSE4  : 3; // bits 16..18 Input Sense 4 Configuration
            unsigned FILTEN4 : 1; // bit 19 Filter 4 Enable
            unsigned SENSE5  : 3; // bits 20..22 Input Sense 5 Configuration
            unsigned FILTEN5 : 1; // bit 23 Filter 5 Enable
            unsigned SENSE6  : 3; // bits 24..26 Input Sense 6 Configuration
            unsigned FILTEN6 : 1; // bit 27 Filter 6 Enable
            unsigned SENSE7  : 3; // bits 28..30 Input Sense 7 Configuration
            unsigned FILTEN7 : 1; // bit 31 Filter 7 Enable    
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
    } CONFIG;

}; // struct EIC_T

static_assert(sizeof(EIC_T) == EIC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp