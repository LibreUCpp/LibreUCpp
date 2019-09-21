#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SUPC_T
{
    static constexpr size_t INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS = 0x40001800;

    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x08;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_BODVDD = 0x10;
    static constexpr intptr_t ADDR_OFFSET_VREG = 0x18;
    static constexpr intptr_t ADDR_OFFSET_VREF = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_VREG33 = 0x20;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned BODVDDRDY : 1; // bit 0 BODVDD Ready
            unsigned BODVDDDET : 1; // bit 1 BODVDD Detection
            unsigned BVDDSRDY  : 1; // bit 2 BODVDD Synchronization Ready
            unsigned           : 3; // bits 3..5 unused
            unsigned VREG33RDY : 1; // bit 6 VREG33 Ready
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned BODVDDRDY_POS = 0;
        static constexpr unsigned BODVDDRDY_MASK = 0x00000001;
        static constexpr unsigned BODVDDRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned BODVDDDET_POS = 1;
        static constexpr unsigned BODVDDDET_MASK = 0x00000002;
        static constexpr unsigned BODVDDDET(unsigned value) { return (value << 1); }
        static constexpr unsigned BVDDSRDY_POS = 2;
        static constexpr unsigned BVDDSRDY_MASK = 0x00000004;
        static constexpr unsigned BVDDSRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned VREG33RDY_POS = 6;
        static constexpr unsigned VREG33RDY_MASK = 0x00000040;
        static constexpr unsigned VREG33RDY(unsigned value) { return (value << 6); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned BODVDDRDY : 1; // bit 0 BODVDD Ready
            unsigned BODVDDDET : 1; // bit 1 BODVDD Detection
            unsigned BVDDSRDY  : 1; // bit 2 BODVDD Synchronization Ready
            unsigned           : 3; // bits 3..5 unused
            unsigned VREG33RDY : 1; // bit 6 VREG33 Ready
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned BODVDDRDY_POS = 0;
        static constexpr unsigned BODVDDRDY_MASK = 0x00000001;
        static constexpr unsigned BODVDDRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned BODVDDDET_POS = 1;
        static constexpr unsigned BODVDDDET_MASK = 0x00000002;
        static constexpr unsigned BODVDDDET(unsigned value) { return (value << 1); }
        static constexpr unsigned BVDDSRDY_POS = 2;
        static constexpr unsigned BVDDSRDY_MASK = 0x00000004;
        static constexpr unsigned BVDDSRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned VREG33RDY_POS = 6;
        static constexpr unsigned VREG33RDY_MASK = 0x00000040;
        static constexpr unsigned VREG33RDY(unsigned value) { return (value << 6); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint32_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned BODVDDRDY : 1; // bit 0 BODVDD Ready
            unsigned BODVDDDET : 1; // bit 1 BODVDD Detection
            unsigned BVDDSRDY  : 1; // bit 2 BODVDD Synchronization Ready
            unsigned           : 3; // bits 3..5 unused
            unsigned VREG33RDY : 1; // bit 6 VREG33 Ready
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned BODVDDRDY_POS = 0;
        static constexpr unsigned BODVDDRDY_MASK = 0x00000001;
        static constexpr unsigned BODVDDRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned BODVDDDET_POS = 1;
        static constexpr unsigned BODVDDDET_MASK = 0x00000002;
        static constexpr unsigned BODVDDDET(unsigned value) { return (value << 1); }
        static constexpr unsigned BVDDSRDY_POS = 2;
        static constexpr unsigned BVDDSRDY_MASK = 0x00000004;
        static constexpr unsigned BVDDSRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned VREG33RDY_POS = 6;
        static constexpr unsigned VREG33RDY_MASK = 0x00000040;
        static constexpr unsigned VREG33RDY(unsigned value) { return (value << 6); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Power and Clocks Status 
    {
        uint32_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned BODVDDRDY : 1; // bit 0 BODVDD Ready
            unsigned BODVDDDET : 1; // bit 1 BODVDD Detection
            unsigned BVDDSRDY  : 1; // bit 2 BODVDD Synchronization Ready
            unsigned           : 3; // bits 3..5 unused
            unsigned VREG33RDY : 1; // bit 6 VREG33 Ready
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned BODVDDRDY_POS = 0;
        static constexpr unsigned BODVDDRDY_MASK = 0x00000001;
        static constexpr unsigned BODVDDRDY(unsigned value) { return (value << 0); }
        static constexpr unsigned BODVDDDET_POS = 1;
        static constexpr unsigned BODVDDDET_MASK = 0x00000002;
        static constexpr unsigned BODVDDDET(unsigned value) { return (value << 1); }
        static constexpr unsigned BVDDSRDY_POS = 2;
        static constexpr unsigned BVDDSRDY_MASK = 0x00000004;
        static constexpr unsigned BVDDSRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned VREG33RDY_POS = 6;
        static constexpr unsigned VREG33RDY_MASK = 0x00000040;
        static constexpr unsigned VREG33RDY(unsigned value) { return (value << 6); }
    } STATUS;

    volatile union BODVDD_T // BODVDD: BODVDD Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) BODVDD_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned HYST     : 1; // bit 2 Hysteresis Enable
            unsigned ACTION   : 2; // bits 3..4 Action when Threshold Crossed
            unsigned STDBYCFG : 1; // bit 5 Configuration in Standby mode
            unsigned RUNSTDBY : 1; // bit 6 Run during Standby
            unsigned          : 1; // bit 7 unused
            unsigned ACTCFG   : 1; // bit 8 Configuration in Active mode
            unsigned          : 3; // bits 9..11 unused
            unsigned PSEL     : 4; // bits 12..15 Prescaler Select
            unsigned LEVEL    : 6; // bits 16..21 Threshold Level for VDD
            unsigned          : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned HYST_POS = 2;
        static constexpr unsigned HYST_MASK = 0x00000004;
        static constexpr unsigned HYST(unsigned value) { return (value << 2); }
        static constexpr unsigned ACTION_POS = 3;
        static constexpr unsigned ACTION_MASK = 0x00000018;
        static constexpr unsigned ACTION(unsigned value) { return (value << 3); }
        static constexpr unsigned STDBYCFG_POS = 5;
        static constexpr unsigned STDBYCFG_MASK = 0x00000020;
        static constexpr unsigned STDBYCFG(unsigned value) { return (value << 5); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ACTCFG_POS = 8;
        static constexpr unsigned ACTCFG_MASK = 0x00000100;
        static constexpr unsigned ACTCFG(unsigned value) { return (value << 8); }
        static constexpr unsigned PSEL_POS = 12;
        static constexpr unsigned PSEL_MASK = 0x0000f000;
        static constexpr unsigned PSEL(unsigned value) { return (value << 12); }
        static constexpr unsigned LEVEL_POS = 16;
        static constexpr unsigned LEVEL_MASK = 0x003f0000;
        static constexpr unsigned LEVEL(unsigned value) { return (value << 16); }
    } BODVDD;

    uint8_t Reserved1[4];

    volatile union VREG_T // VREG: VREG Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) VREG_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run during Standby
            unsigned          : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
    } VREG;

    volatile union VREF_T // VREF: VREF Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) VREF_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned TSEN     : 1; // bit 1 Temperature Sensor Output Enable
            unsigned VREFOE   : 1; // bit 2 Voltage Reference Output Enable
            unsigned          : 3; // bits 3..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run during Standby
            unsigned ONDEMAND : 1; // bit 7 On Demand Control
            unsigned          : 8; // bits 8..15 unused
            unsigned SEL      : 4; // bits 16..19 Voltage Reference Selection
            unsigned          : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned TSEN_POS = 1;
        static constexpr unsigned TSEN_MASK = 0x00000002;
        static constexpr unsigned TSEN(unsigned value) { return (value << 1); }
        static constexpr unsigned VREFOE_POS = 2;
        static constexpr unsigned VREFOE_MASK = 0x00000004;
        static constexpr unsigned VREFOE(unsigned value) { return (value << 2); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
        static constexpr unsigned ONDEMAND_POS = 7;
        static constexpr unsigned ONDEMAND_MASK = 0x00000080;
        static constexpr unsigned ONDEMAND(unsigned value) { return (value << 7); }
        static constexpr unsigned SEL_POS = 16;
        static constexpr unsigned SEL_MASK = 0x000f0000;
        static constexpr unsigned SEL(unsigned value) { return (value << 16); }
    } VREF;

    volatile union VREG33_T // VREG33: VREG33 Control 
    {
        uint32_t reg;
        struct __attribute__((packed)) VREG33_BIT_T
        {
            unsigned        : 1; // bit 0 unused
            unsigned ENABLE : 1; // bit 1 VREG33 Enable
            unsigned ENRDY  : 1; // bit 2 VREG33 Ready Enable
            unsigned BYPASS : 1; // bit 3 VREG33 Bypass
            unsigned ISOEN  : 1; // bit 4 Isolation Enable
            unsigned        : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned ENRDY_POS = 2;
        static constexpr unsigned ENRDY_MASK = 0x00000004;
        static constexpr unsigned ENRDY(unsigned value) { return (value << 2); }
        static constexpr unsigned BYPASS_POS = 3;
        static constexpr unsigned BYPASS_MASK = 0x00000008;
        static constexpr unsigned BYPASS(unsigned value) { return (value << 3); }
        static constexpr unsigned ISOEN_POS = 4;
        static constexpr unsigned ISOEN_MASK = 0x00000010;
        static constexpr unsigned ISOEN(unsigned value) { return (value << 4); }
    } VREG33;

}; // struct SUPC_T

static_assert(sizeof(SUPC_T) == SUPC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp