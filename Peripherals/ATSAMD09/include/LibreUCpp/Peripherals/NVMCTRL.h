#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) NVMCTRL_T
{
    static constexpr size_t INSTANCE_SIZE = 34;
    static constexpr size_t PADDED_INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS = 0x41004000;

    static constexpr intptr_t ADDR_OFFSET_CTRLA = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CTRLB = 0x04;
    static constexpr intptr_t ADDR_OFFSET_PARAM = 0x08;
    static constexpr intptr_t ADDR_OFFSET_INTENCLR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_INTENSET = 0x10;
    static constexpr intptr_t ADDR_OFFSET_INTFLAG = 0x14;
    static constexpr intptr_t ADDR_OFFSET_STATUS = 0x18;
    static constexpr intptr_t ADDR_OFFSET_ADDR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_LOCK = 0x20;

    volatile union CTRLA_T // CTRLA: Control A 
    {
        uint16_t reg;
        struct __attribute__((packed)) CTRLA_BIT_T
        {
            unsigned CMD   : 7; // bits 0..6 Command
            unsigned       : 1; // bit 7 unused
            unsigned CMDEX : 8; // bits 8..15 Command Execution    
        } bit;
    
        static constexpr unsigned CMD_POS = 0;
        static constexpr unsigned CMD_MASK = 0x0000007f;
        static constexpr unsigned CMD(unsigned value) { return (value << 0); }
        static constexpr unsigned CMDEX_POS = 8;
        static constexpr unsigned CMDEX_MASK = 0x0000ff00;
        static constexpr unsigned CMDEX(unsigned value) { return (value << 8); }
    } CTRLA;

    uint8_t Reserved1[2];

    volatile union CTRLB_T // CTRLB: Control B 
    {
        uint32_t reg;
        struct __attribute__((packed)) CTRLB_BIT_T
        {
            unsigned          : 1; // bit 0 unused
            unsigned RWS      : 4; // bits 1..4 NVM Read Wait States
            unsigned          : 2; // bits 5..6 unused
            unsigned MANW     : 1; // bit 7 Manual Write
            unsigned SLEEPPRM : 2; // bits 8..9 Power Reduction Mode during Sleep
            unsigned          : 6; // bits 10..15 unused
            unsigned READMODE : 2; // bits 16..17 NVMCTRL Read Mode
            unsigned CACHEDIS : 1; // bit 18 Cache Disable
            unsigned          : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned RWS_POS = 1;
        static constexpr unsigned RWS_MASK = 0x0000001e;
        static constexpr unsigned RWS(unsigned value) { return (value << 1); }
        static constexpr unsigned MANW_POS = 7;
        static constexpr unsigned MANW_MASK = 0x00000080;
        static constexpr unsigned MANW(unsigned value) { return (value << 7); }
        static constexpr unsigned SLEEPPRM_POS = 8;
        static constexpr unsigned SLEEPPRM_MASK = 0x00000300;
        static constexpr unsigned SLEEPPRM(unsigned value) { return (value << 8); }
        static constexpr unsigned READMODE_POS = 16;
        static constexpr unsigned READMODE_MASK = 0x00030000;
        static constexpr unsigned READMODE(unsigned value) { return (value << 16); }
        static constexpr unsigned CACHEDIS_POS = 18;
        static constexpr unsigned CACHEDIS_MASK = 0x00040000;
        static constexpr unsigned CACHEDIS(unsigned value) { return (value << 18); }
    } CTRLB;

    volatile union PARAM_T // PARAM: NVM Parameter 
    {
        uint32_t reg;
        struct __attribute__((packed)) PARAM_BIT_T
        {
            unsigned NVMP : 16; // bits 0..15 NVM Pages
            unsigned PSZ  : 3; // bits 16..18 Page Size
            unsigned      : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned NVMP_POS = 0;
        static constexpr unsigned NVMP_MASK = 0x0000ffff;
        static constexpr unsigned NVMP(unsigned value) { return (value << 0); }
        static constexpr unsigned PSZ_POS = 16;
        static constexpr unsigned PSZ_MASK = 0x00070000;
        static constexpr unsigned PSZ(unsigned value) { return (value << 16); }
    } PARAM;

    volatile union INTENCLR_T // INTENCLR: Interrupt Enable Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENCLR_BIT_T
        {
            unsigned READY : 1; // bit 0 NVM Ready Interrupt Enable
            unsigned ERROR : 1; // bit 1 Error Interrupt Enable
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned READY_POS = 0;
        static constexpr unsigned READY_MASK = 0x00000001;
        static constexpr unsigned READY(unsigned value) { return (value << 0); }
        static constexpr unsigned ERROR_POS = 1;
        static constexpr unsigned ERROR_MASK = 0x00000002;
        static constexpr unsigned ERROR(unsigned value) { return (value << 1); }
    } INTENCLR;

    uint8_t Reserved2[3];

    volatile union INTENSET_T // INTENSET: Interrupt Enable Set 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTENSET_BIT_T
        {
            unsigned READY : 1; // bit 0 NVM Ready Interrupt Enable
            unsigned ERROR : 1; // bit 1 Error Interrupt Enable
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned READY_POS = 0;
        static constexpr unsigned READY_MASK = 0x00000001;
        static constexpr unsigned READY(unsigned value) { return (value << 0); }
        static constexpr unsigned ERROR_POS = 1;
        static constexpr unsigned ERROR_MASK = 0x00000002;
        static constexpr unsigned ERROR(unsigned value) { return (value << 1); }
    } INTENSET;

    uint8_t Reserved3[3];

    volatile union INTFLAG_T // INTFLAG: Interrupt Flag Status and Clear 
    {
        uint8_t reg;
        struct __attribute__((packed)) INTFLAG_BIT_T
        {
            unsigned READY : 1; // bit 0 NVM Ready
            unsigned ERROR : 1; // bit 1 Error
            unsigned       : 6; // bits 2..7 unused    
        } bit;
    
        static constexpr unsigned READY_POS = 0;
        static constexpr unsigned READY_MASK = 0x00000001;
        static constexpr unsigned READY(unsigned value) { return (value << 0); }
        static constexpr unsigned ERROR_POS = 1;
        static constexpr unsigned ERROR_MASK = 0x00000002;
        static constexpr unsigned ERROR(unsigned value) { return (value << 1); }
    } INTFLAG;

    uint8_t Reserved4[3];

    volatile union STATUS_T // STATUS: Status 
    {
        uint16_t reg;
        struct __attribute__((packed)) STATUS_BIT_T
        {
            unsigned PRM   : 1; // bit 0 Power Reduction Mode
            unsigned LOAD  : 1; // bit 1 NVM Page Buffer Active Loading
            unsigned PROGE : 1; // bit 2 Programming Error Status
            unsigned LOCKE : 1; // bit 3 Lock Error Status
            unsigned NVME  : 1; // bit 4 NVM Error
            unsigned       : 3; // bits 5..7 unused
            unsigned SB    : 1; // bit 8 Security Bit Status
            unsigned       : 7; // bits 9..15 unused    
        } bit;
    
        static constexpr unsigned PRM_POS = 0;
        static constexpr unsigned PRM_MASK = 0x00000001;
        static constexpr unsigned PRM(unsigned value) { return (value << 0); }
        static constexpr unsigned LOAD_POS = 1;
        static constexpr unsigned LOAD_MASK = 0x00000002;
        static constexpr unsigned LOAD(unsigned value) { return (value << 1); }
        static constexpr unsigned PROGE_POS = 2;
        static constexpr unsigned PROGE_MASK = 0x00000004;
        static constexpr unsigned PROGE(unsigned value) { return (value << 2); }
        static constexpr unsigned LOCKE_POS = 3;
        static constexpr unsigned LOCKE_MASK = 0x00000008;
        static constexpr unsigned LOCKE(unsigned value) { return (value << 3); }
        static constexpr unsigned NVME_POS = 4;
        static constexpr unsigned NVME_MASK = 0x00000010;
        static constexpr unsigned NVME(unsigned value) { return (value << 4); }
        static constexpr unsigned SB_POS = 8;
        static constexpr unsigned SB_MASK = 0x00000100;
        static constexpr unsigned SB(unsigned value) { return (value << 8); }
    } STATUS;

    uint8_t Reserved5[2];

    volatile union ADDR_T // ADDR: Address 
    {
        uint32_t reg;
        struct __attribute__((packed)) ADDR_BIT_T
        {
            unsigned ADDR : 22; // bits 0..21 NVM Address
            unsigned      : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned ADDR_POS = 0;
        static constexpr unsigned ADDR_MASK = 0x003fffff;
        static constexpr unsigned ADDR(unsigned value) { return (value << 0); }
    } ADDR;

    volatile union LOCK_T // LOCK: Lock Section 
    {
        uint16_t reg;
        struct __attribute__((packed)) LOCK_BIT_T
        {
            unsigned LOCK : 16; // bits 0..15 Region Lock Bits    
        } bit;
    
        static constexpr unsigned LOCK_POS = 0;
        static constexpr unsigned LOCK_MASK = 0x0000ffff;
        static constexpr unsigned LOCK(unsigned value) { return (value << 0); }
    } LOCK;

}; // struct NVMCTRL_T

static_assert(sizeof(NVMCTRL_T) == NVMCTRL_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp