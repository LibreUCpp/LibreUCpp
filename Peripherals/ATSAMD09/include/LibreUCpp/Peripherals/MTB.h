#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) MTB_T
{
    static constexpr size_t INSTANCE_SIZE = 4096;
    static constexpr intptr_t BASE_ADDRESS = 0x41006000;

    static constexpr intptr_t ADDR_OFFSET_POSITION = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MASTER = 0x04;
    static constexpr intptr_t ADDR_OFFSET_FLOW = 0x08;
    static constexpr intptr_t ADDR_OFFSET_BASE = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_ITCTRL = 0xf00;
    static constexpr intptr_t ADDR_OFFSET_CLAIMSET = 0xfa0;
    static constexpr intptr_t ADDR_OFFSET_CLAIMCLR = 0xfa4;
    static constexpr intptr_t ADDR_OFFSET_LOCKACCESS = 0xfb0;
    static constexpr intptr_t ADDR_OFFSET_LOCKSTATUS = 0xfb4;
    static constexpr intptr_t ADDR_OFFSET_AUTHSTATUS = 0xfb8;
    static constexpr intptr_t ADDR_OFFSET_DEVARCH = 0xfbc;
    static constexpr intptr_t ADDR_OFFSET_DEVID = 0xfc8;
    static constexpr intptr_t ADDR_OFFSET_DEVTYPE = 0xfcc;
    static constexpr intptr_t ADDR_OFFSET_PID4 = 0xfd0;
    static constexpr intptr_t ADDR_OFFSET_PID5 = 0xfd4;
    static constexpr intptr_t ADDR_OFFSET_PID6 = 0xfd8;
    static constexpr intptr_t ADDR_OFFSET_PID7 = 0xfdc;
    static constexpr intptr_t ADDR_OFFSET_PID0 = 0xfe0;
    static constexpr intptr_t ADDR_OFFSET_PID1 = 0xfe4;
    static constexpr intptr_t ADDR_OFFSET_PID2 = 0xfe8;
    static constexpr intptr_t ADDR_OFFSET_PID3 = 0xfec;
    static constexpr intptr_t ADDR_OFFSET_CID0 = 0xff0;
    static constexpr intptr_t ADDR_OFFSET_CID1 = 0xff4;
    static constexpr intptr_t ADDR_OFFSET_CID2 = 0xff8;
    static constexpr intptr_t ADDR_OFFSET_CID3 = 0xffc;

    volatile union POSITION_T // POSITION: MTB Position 
    {
        uint32_t reg;
        struct __attribute__((packed)) POSITION_BIT_T
        {
            unsigned         : 2; // bits 0..1 unused
            unsigned WRAP    : 1; // bit 2 Pointer Value Wraps
            unsigned POINTER : 29; // bits 3..31 Trace Packet Location Pointer    
        } bit;
    
        static constexpr unsigned WRAP_POS = 2;
        static constexpr unsigned WRAP_MASK = 0x00000004;
        static constexpr unsigned WRAP(unsigned value) { return (value << 2); }
        static constexpr unsigned POINTER_POS = 3;
        static constexpr unsigned POINTER_MASK = 0xfffffff8;
        static constexpr unsigned POINTER(unsigned value) { return (value << 3); }
    } POSITION;

    volatile union MASTER_T // MASTER: MTB Master 
    {
        uint32_t reg;
        struct __attribute__((packed)) MASTER_BIT_T
        {
            unsigned MASK     : 5; // bits 0..4 Maximum Value of the Trace Buffer in SRAM
            unsigned TSTARTEN : 1; // bit 5 Trace Start Input Enable
            unsigned TSTOPEN  : 1; // bit 6 Trace Stop Input Enable
            unsigned SFRWPRIV : 1; // bit 7 Special Function Register Write Privilege
            unsigned RAMPRIV  : 1; // bit 8 SRAM Privilege
            unsigned HALTREQ  : 1; // bit 9 Halt Request
            unsigned          : 21; // bits 10..30 unused
            unsigned EN       : 1; // bit 31 Main Trace Enable    
        } bit;
    
        static constexpr unsigned MASK_POS = 0;
        static constexpr unsigned MASK_MASK = 0x0000001f;
        static constexpr unsigned MASK(unsigned value) { return (value << 0); }
        static constexpr unsigned TSTARTEN_POS = 5;
        static constexpr unsigned TSTARTEN_MASK = 0x00000020;
        static constexpr unsigned TSTARTEN(unsigned value) { return (value << 5); }
        static constexpr unsigned TSTOPEN_POS = 6;
        static constexpr unsigned TSTOPEN_MASK = 0x00000040;
        static constexpr unsigned TSTOPEN(unsigned value) { return (value << 6); }
        static constexpr unsigned SFRWPRIV_POS = 7;
        static constexpr unsigned SFRWPRIV_MASK = 0x00000080;
        static constexpr unsigned SFRWPRIV(unsigned value) { return (value << 7); }
        static constexpr unsigned RAMPRIV_POS = 8;
        static constexpr unsigned RAMPRIV_MASK = 0x00000100;
        static constexpr unsigned RAMPRIV(unsigned value) { return (value << 8); }
        static constexpr unsigned HALTREQ_POS = 9;
        static constexpr unsigned HALTREQ_MASK = 0x00000200;
        static constexpr unsigned HALTREQ(unsigned value) { return (value << 9); }
        static constexpr unsigned EN_POS = 31;
        static constexpr unsigned EN_MASK = 0x80000000;
        static constexpr unsigned EN(unsigned value) { return (value << 31); }
    } MASTER;

    volatile union FLOW_T // FLOW: MTB Flow 
    {
        uint32_t reg;
        struct __attribute__((packed)) FLOW_BIT_T
        {
            unsigned AUTOSTOP  : 1; // bit 0 Auto Stop Tracing
            unsigned AUTOHALT  : 1; // bit 1 Auto Halt Request
            unsigned           : 1; // bit 2 unused
            unsigned WATERMARK : 29; // bits 3..31 Watermark value    
        } bit;
    
        static constexpr unsigned AUTOSTOP_POS = 0;
        static constexpr unsigned AUTOSTOP_MASK = 0x00000001;
        static constexpr unsigned AUTOSTOP(unsigned value) { return (value << 0); }
        static constexpr unsigned AUTOHALT_POS = 1;
        static constexpr unsigned AUTOHALT_MASK = 0x00000002;
        static constexpr unsigned AUTOHALT(unsigned value) { return (value << 1); }
        static constexpr unsigned WATERMARK_POS = 3;
        static constexpr unsigned WATERMARK_MASK = 0xfffffff8;
        static constexpr unsigned WATERMARK(unsigned value) { return (value << 3); }
    } FLOW;

    volatile union BASE_T // BASE: MTB Base 
    {
        uint32_t reg;
    } BASE;

    uint8_t Reserved1[3824];

    volatile union ITCTRL_T // ITCTRL: MTB Integration Mode Control 
    {
        uint32_t reg;
    } ITCTRL;

    uint8_t Reserved2[156];

    volatile union CLAIMSET_T // CLAIMSET: MTB Claim Set 
    {
        uint32_t reg;
    } CLAIMSET;

    volatile union CLAIMCLR_T // CLAIMCLR: MTB Claim Clear 
    {
        uint32_t reg;
    } CLAIMCLR;

    uint8_t Reserved3[8];

    volatile union LOCKACCESS_T // LOCKACCESS: MTB Lock Access 
    {
        uint32_t reg;
    } LOCKACCESS;

    volatile union LOCKSTATUS_T // LOCKSTATUS: MTB Lock Status 
    {
        uint32_t reg;
    } LOCKSTATUS;

    volatile union AUTHSTATUS_T // AUTHSTATUS: MTB Authentication Status 
    {
        uint32_t reg;
    } AUTHSTATUS;

    volatile union DEVARCH_T // DEVARCH: MTB Device Architecture 
    {
        uint32_t reg;
    } DEVARCH;

    uint8_t Reserved4[8];

    volatile union DEVID_T // DEVID: MTB Device Configuration 
    {
        uint32_t reg;
    } DEVID;

    volatile union DEVTYPE_T // DEVTYPE: MTB Device Type 
    {
        uint32_t reg;
    } DEVTYPE;

    volatile union PID4_T // PID4: CoreSight 
    {
        uint32_t reg;
    } PID4;

    volatile union PID5_T // PID5: CoreSight 
    {
        uint32_t reg;
    } PID5;

    volatile union PID6_T // PID6: CoreSight 
    {
        uint32_t reg;
    } PID6;

    volatile union PID7_T // PID7: CoreSight 
    {
        uint32_t reg;
    } PID7;

    volatile union PID0_T // PID0: CoreSight 
    {
        uint32_t reg;
    } PID0;

    volatile union PID1_T // PID1: CoreSight 
    {
        uint32_t reg;
    } PID1;

    volatile union PID2_T // PID2: CoreSight 
    {
        uint32_t reg;
    } PID2;

    volatile union PID3_T // PID3: CoreSight 
    {
        uint32_t reg;
    } PID3;

    volatile union CID0_T // CID0: CoreSight 
    {
        uint32_t reg;
    } CID0;

    volatile union CID1_T // CID1: CoreSight 
    {
        uint32_t reg;
    } CID1;

    volatile union CID2_T // CID2: CoreSight 
    {
        uint32_t reg;
    } CID2;

    volatile union CID3_T // CID3: CoreSight 
    {
        uint32_t reg;
    } CID3;

}; // struct MTB_T

static_assert(sizeof(MTB_T) == MTB_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp