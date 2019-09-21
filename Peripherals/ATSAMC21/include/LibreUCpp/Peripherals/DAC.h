#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DAC_T
{
    static constexpr size_t INSTANCE_SIZE = 21;
    static constexpr intptr_t BASE_ADDRESS = 0x42005400;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x01;
    static constexpr intptr_t ADDR_OFFSET_EVCTRL = 0x02;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x05;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x06;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x07;
    static constexpr intptr_t ADDR_OFFSET_DATA = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DATABUF = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SYNCBUSY = 0x10;
    static constexpr intptr_t ADDR_OFFSET_DBGCTRL = 0x14;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned SWRST    : 1; // bit 0 Software Reset
            unsigned ENABLE   : 1; // bit 1 Enable
            unsigned          : 4; // bits 2..5 unused
            unsigned RUNSTDBY : 1; // bit 6 Run in Standby
            unsigned          : 1; // bit 7 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned RUNSTDBY_POS = 6;
        static constexpr unsigned RUNSTDBY_MASK = 0x00000040;
        static constexpr unsigned RUNSTDBY(unsigned value) { return (value << 6); }
    } CTRLA;

    volatile union CTRLB_T // CTRLB: Control B 
    {
        uint8_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned EOEN    : 1; // bit 0 External Output Enable
            unsigned IOEN    : 1; // bit 1 Internal Output Enable
            unsigned LEFTADJ : 1; // bit 2 Left Adjusted Data
            unsigned VPD     : 1; // bit 3 Voltage Pump Disable
            unsigned         : 1; // bit 4 unused
            unsigned DITHER  : 1; // bit 5 Dither Enable
            unsigned REFSEL  : 2; // bits 6..7 Reference Selection    
        } bit;
    
        static constexpr unsigned EOEN_POS = 0;
        static constexpr unsigned EOEN_MASK = 0x00000001;
        static constexpr unsigned EOEN(unsigned value) { return (value << 0); }
        static constexpr unsigned IOEN_POS = 1;
        static constexpr unsigned IOEN_MASK = 0x00000002;
        static constexpr unsigned IOEN(unsigned value) { return (value << 1); }
        static constexpr unsigned LEFTADJ_POS = 2;
        static constexpr unsigned LEFTADJ_MASK = 0x00000004;
        static constexpr unsigned LEFTADJ(unsigned value) { return (value << 2); }
        static constexpr unsigned VPD_POS = 3;
        static constexpr unsigned VPD_MASK = 0x00000008;
        static constexpr unsigned VPD(unsigned value) { return (value << 3); }
        static constexpr unsigned DITHER_POS = 5;
        static constexpr unsigned DITHER_MASK = 0x00000020;
        static constexpr unsigned DITHER(unsigned value) { return (value << 5); }
        static constexpr unsigned REFSEL_POS = 6;
        static constexpr unsigned REFSEL_MASK = 0x000000c0;
        static constexpr unsigned REFSEL(unsigned value) { return (value << 6); }
    } CTRLB;

    volatile union EVCTRL_T // EVCTRL: Event Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) EVCTRL_BIT_T
        {
            unsigned STARTEI : 1; // bit 0 Start Conversion Event Input
            unsigned EMPTYEO : 1; // bit 1 Data Buffer Empty Event Output
            unsigned INVEI   : 1; // bit 2 Invert Event Input
            unsigned         : 5; // bits 3..7 unused    
        } bit;
    
        static constexpr unsigned STARTEI_POS = 0;
        static constexpr unsigned STARTEI_MASK = 0x00000001;
        static constexpr unsigned STARTEI(unsigned value) { return (value << 0); }
        static constexpr unsigned EMPTYEO_POS = 1;
        static constexpr unsigned EMPTYEO_MASK = 0x00000002;
        static constexpr unsigned EMPTYEO(unsigned value) { return (value << 1); }
        static constexpr unsigned INVEI_POS = 2;
        static constexpr unsigned INVEI_MASK = 0x00000004;
        static constexpr unsigned INVEI(unsigned value) { return (value << 2); }
    } EVCTRL;

    uint8_t Reserved1[1];

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned UNDERRUN : 1; // bit 0 Underrun Interrupt Enable
            unsigned EMPTY    : 1; // bit 1 Data Buffer Empty Interrupt Enable
            unsigned          : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned UNDERRUN_POS = 0;
        static constexpr unsigned UNDERRUN_MASK = 0x00000001;
        static constexpr unsigned UNDERRUN(unsigned value) { return (value << 0); }
        static constexpr unsigned EMPTY_POS = 1;
        static constexpr unsigned EMPTY_MASK = 0x00000002;
        static constexpr unsigned EMPTY(unsigned value) { return (value << 1); }
    } INTENCLR;

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned UNDERRUN : 1; // bit 0 Underrun Interrupt Enable
            unsigned EMPTY    : 1; // bit 1 Data Buffer Empty Interrupt Enable
            unsigned          : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned UNDERRUN_POS = 0;
        static constexpr unsigned UNDERRUN_MASK = 0x00000001;
        static constexpr unsigned UNDERRUN(unsigned value) { return (value << 0); }
        static constexpr unsigned EMPTY_POS = 1;
        static constexpr unsigned EMPTY_MASK = 0x00000002;
        static constexpr unsigned EMPTY(unsigned value) { return (value << 1); }
    } INTENSET;

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned UNDERRUN : 1; // bit 0 Underrun
            unsigned EMPTY    : 1; // bit 1 Data Buffer Empty
            unsigned          : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned UNDERRUN_POS = 0;
        static constexpr unsigned UNDERRUN_MASK = 0x00000001;
        static constexpr unsigned UNDERRUN(unsigned value) { return (value << 0); }
        static constexpr unsigned EMPTY_POS = 1;
        static constexpr unsigned EMPTY_MASK = 0x00000002;
        static constexpr unsigned EMPTY(unsigned value) { return (value << 1); }
    } INTFLAG;

    volatile union STATUS_T // STATUS: Status 
    {
        uint8_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned READY : 1; // bit 0 Ready
            unsigned       : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned READY_POS = 0;
        static constexpr unsigned READY_MASK = 0x00000001;
        static constexpr unsigned READY(unsigned value) { return (value << 0); }
    } STATUS;

    volatile union DATA_T // DATA: Data 
    {
        uint16_t reg;
        struct __attribute__((packed)) DATA_BIT_T
        {
            unsigned DATA : 16; // bits 0..15 Data value to be converted    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0x0000ffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
    } DATA;

    uint8_t Reserved2[2];

    volatile union DATABUF_T // DATABUF: Data Buffer 
    {
        uint16_t reg;
        struct __attribute__((packed)) DATABUF_BIT_T
        {
            unsigned DATABUF : 16; // bits 0..15 Data Buffer    
        } bit;
    
        static constexpr unsigned DATABUF_POS = 0;
        static constexpr unsigned DATABUF_MASK = 0x0000ffff;
        static constexpr unsigned DATABUF(unsigned value) { return (value << 0); }
    } DATABUF;

    uint8_t Reserved3[2];

    volatile union SYNCBUSY_T // SYNCBUSY: Synchronization Busy 
    {
        uint32_t reg;
        struct __attribute__((packed)) SYNCBUSY_BIT_T
        {
            unsigned SWRST   : 1; // bit 0 Software Reset
            unsigned ENABLE  : 1; // bit 1 Enable
            unsigned DATA    : 1; // bit 2 Data
            unsigned DATABUF : 1; // bit 3 Data Buffer
            unsigned         : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned SWRST_POS = 0;
        static constexpr unsigned SWRST_MASK = 0x00000001;
        static constexpr unsigned SWRST(unsigned value) { return (value << 0); }
        static constexpr unsigned ENABLE_POS = 1;
        static constexpr unsigned ENABLE_MASK = 0x00000002;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 1); }
        static constexpr unsigned DATA_POS = 2;
        static constexpr unsigned DATA_MASK = 0x00000004;
        static constexpr unsigned DATA(unsigned value) { return (value << 2); }
        static constexpr unsigned DATABUF_POS = 3;
        static constexpr unsigned DATABUF_MASK = 0x00000008;
        static constexpr unsigned DATABUF(unsigned value) { return (value << 3); }
    } SYNCBUSY;

    volatile union DBGCTRL_T // DBGCTRL: Debug Control 
    {
        uint8_t reg;
        struct __attribute__((packed)) DBGCTRL_BIT_T
        {
            unsigned DBGRUN : 1; // bit 0 Debug Run
            unsigned        : 7; // bits 1..7 unused    
        } bit;
    
        static constexpr unsigned DBGRUN_POS = 0;
        static constexpr unsigned DBGRUN_MASK = 0x00000001;
        static constexpr unsigned DBGRUN(unsigned value) { return (value << 0); }
    } DBGCTRL;

}; // struct DAC_T

static_assert(sizeof(DAC_T) == DAC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp