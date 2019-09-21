#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) RTC_T
{
    static constexpr size_t INSTANCE_SIZE = 40;
    static constexpr intptr_t BASE_ADDRESS = 0x40002800;

    static constexpr intptr_t ADDR_OFFSET_CRH = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CRL = 0x04;
    static constexpr intptr_t ADDR_OFFSET_PRLH = 0x08;
    static constexpr intptr_t ADDR_OFFSET_PRLL = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DIVH = 0x10;
    static constexpr intptr_t ADDR_OFFSET_DIVL = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CNTH = 0x18;
    static constexpr intptr_t ADDR_OFFSET_CNTL = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_ALRH = 0x20;
    static constexpr intptr_t ADDR_OFFSET_ALRL = 0x24;

    volatile union CRH_T // CRH: RTC Control Register High 
    {
        uint32_t reg;
        struct __attribute__((packed)) CRH_BIT_T
        {
            unsigned SECIE : 1; // bit 0 Second interrupt Enable
            unsigned ALRIE : 1; // bit 1 Alarm interrupt Enable
            unsigned OWIE  : 1; // bit 2 Overflow interrupt Enable
            unsigned       : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned SECIE_POS = 0;
        static constexpr unsigned SECIE_MASK = 0x00000001;
        static constexpr unsigned SECIE(unsigned value) { return (value << 0); }
        static constexpr unsigned ALRIE_POS = 1;
        static constexpr unsigned ALRIE_MASK = 0x00000002;
        static constexpr unsigned ALRIE(unsigned value) { return (value << 1); }
        static constexpr unsigned OWIE_POS = 2;
        static constexpr unsigned OWIE_MASK = 0x00000004;
        static constexpr unsigned OWIE(unsigned value) { return (value << 2); }
    } CRH;

    volatile union CRL_T // CRL: RTC Control Register Low 
    {
        uint32_t reg;
        struct __attribute__((packed)) CRL_BIT_T
        {
            unsigned SECF  : 1; // bit 0 Second Flag
            unsigned ALRF  : 1; // bit 1 Alarm Flag
            unsigned OWF   : 1; // bit 2 Overflow Flag
            unsigned RSF   : 1; // bit 3 Registers Synchronized Flag
            unsigned CNF   : 1; // bit 4 Configuration Flag
            unsigned RTOFF : 1; // bit 5 RTC operation OFF
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned SECF_POS = 0;
        static constexpr unsigned SECF_MASK = 0x00000001;
        static constexpr unsigned SECF(unsigned value) { return (value << 0); }
        static constexpr unsigned ALRF_POS = 1;
        static constexpr unsigned ALRF_MASK = 0x00000002;
        static constexpr unsigned ALRF(unsigned value) { return (value << 1); }
        static constexpr unsigned OWF_POS = 2;
        static constexpr unsigned OWF_MASK = 0x00000004;
        static constexpr unsigned OWF(unsigned value) { return (value << 2); }
        static constexpr unsigned RSF_POS = 3;
        static constexpr unsigned RSF_MASK = 0x00000008;
        static constexpr unsigned RSF(unsigned value) { return (value << 3); }
        static constexpr unsigned CNF_POS = 4;
        static constexpr unsigned CNF_MASK = 0x00000010;
        static constexpr unsigned CNF(unsigned value) { return (value << 4); }
        static constexpr unsigned RTOFF_POS = 5;
        static constexpr unsigned RTOFF_MASK = 0x00000020;
        static constexpr unsigned RTOFF(unsigned value) { return (value << 5); }
    } CRL;

    volatile union PRLH_T // PRLH: RTC Prescaler Load Register High 
    {
        uint32_t reg;
        struct __attribute__((packed)) PRLH_BIT_T
        {
            unsigned PRLH : 4; // bits 0..3 RTC Prescaler Load Register High
            unsigned      : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned PRLH_POS = 0;
        static constexpr unsigned PRLH_MASK = 0x0000000f;
        static constexpr unsigned PRLH(unsigned value) { return (value << 0); }
    } PRLH;

    volatile union PRLL_T // PRLL: RTC Prescaler Load Register Low 
    {
        uint32_t reg;
        struct __attribute__((packed)) PRLL_BIT_T
        {
            unsigned PRLL : 16; // bits 0..15 RTC Prescaler Divider Register Low
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned PRLL_POS = 0;
        static constexpr unsigned PRLL_MASK = 0x0000ffff;
        static constexpr unsigned PRLL(unsigned value) { return (value << 0); }
    } PRLL;

    volatile union DIVH_T // DIVH: RTC Prescaler Divider Register High 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIVH_BIT_T
        {
            unsigned DIVH : 4; // bits 0..3 RTC prescaler divider register high
            unsigned      : 28; // bits 4..31 unused    
        } bit;
    
        static constexpr unsigned DIVH_POS = 0;
        static constexpr unsigned DIVH_MASK = 0x0000000f;
        static constexpr unsigned DIVH(unsigned value) { return (value << 0); }
    } DIVH;

    volatile union DIVL_T // DIVL: RTC Prescaler Divider Register Low 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIVL_BIT_T
        {
            unsigned DIVL : 16; // bits 0..15 RTC prescaler divider register Low
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned DIVL_POS = 0;
        static constexpr unsigned DIVL_MASK = 0x0000ffff;
        static constexpr unsigned DIVL(unsigned value) { return (value << 0); }
    } DIVL;

    volatile union CNTH_T // CNTH: RTC Counter Register High 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNTH_BIT_T
        {
            unsigned CNTH : 16; // bits 0..15 RTC counter register high
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CNTH_POS = 0;
        static constexpr unsigned CNTH_MASK = 0x0000ffff;
        static constexpr unsigned CNTH(unsigned value) { return (value << 0); }
    } CNTH;

    volatile union CNTL_T // CNTL: RTC Counter Register Low 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNTL_BIT_T
        {
            unsigned CNTL : 16; // bits 0..15 RTC counter register Low
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned CNTL_POS = 0;
        static constexpr unsigned CNTL_MASK = 0x0000ffff;
        static constexpr unsigned CNTL(unsigned value) { return (value << 0); }
    } CNTL;

    volatile union ALRH_T // ALRH: RTC Alarm Register High 
    {
        uint32_t reg;
        struct __attribute__((packed)) ALRH_BIT_T
        {
            unsigned ALRH : 16; // bits 0..15 RTC alarm register high
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned ALRH_POS = 0;
        static constexpr unsigned ALRH_MASK = 0x0000ffff;
        static constexpr unsigned ALRH(unsigned value) { return (value << 0); }
    } ALRH;

    volatile union ALRL_T // ALRL: RTC Alarm Register Low 
    {
        uint32_t reg;
        struct __attribute__((packed)) ALRL_BIT_T
        {
            unsigned ALRL : 16; // bits 0..15 RTC alarm register low
            unsigned      : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned ALRL_POS = 0;
        static constexpr unsigned ALRL_MASK = 0x0000ffff;
        static constexpr unsigned ALRL(unsigned value) { return (value << 0); }
    } ALRL;

}; // struct RTC_T

static_assert(sizeof(RTC_T) == RTC_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp