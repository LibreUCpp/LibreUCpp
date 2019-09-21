#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) ETHERNET_PTP_T
{
    static constexpr size_t INSTANCE_SIZE = 36;
    static constexpr intptr_t BASE_ADDRESS = 0x40028700;

    static constexpr intptr_t ADDR_OFFSET_PTPTSCR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_PTPSSIR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_PTPTSHR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_PTPTSLR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_PTPTSHUR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_PTPTSLUR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_PTPTSAR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_PTPTTHR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_PTPTTLR = 0x20;

    volatile union PTPTSCR_T // PTPTSCR: Ethernet PTP time stamp control register (ETH_PTPTSCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSCR_BIT_T
        {
            unsigned TSE   : 1; // bit 0 Time stamp enable
            unsigned TSFCU : 1; // bit 1 Time stamp fine or coarse update
            unsigned TSSTI : 1; // bit 2 Time stamp system time initialize
            unsigned TSSTU : 1; // bit 3 Time stamp system time update
            unsigned TSITE : 1; // bit 4 Time stamp interrupt trigger enable
            unsigned TSARU : 1; // bit 5 Time stamp addend register update
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned TSE_POS = 0;
        static constexpr unsigned TSE_MASK = 0x00000001;
        static constexpr unsigned TSE(unsigned value) { return (value << 0); }
        static constexpr unsigned TSFCU_POS = 1;
        static constexpr unsigned TSFCU_MASK = 0x00000002;
        static constexpr unsigned TSFCU(unsigned value) { return (value << 1); }
        static constexpr unsigned TSSTI_POS = 2;
        static constexpr unsigned TSSTI_MASK = 0x00000004;
        static constexpr unsigned TSSTI(unsigned value) { return (value << 2); }
        static constexpr unsigned TSSTU_POS = 3;
        static constexpr unsigned TSSTU_MASK = 0x00000008;
        static constexpr unsigned TSSTU(unsigned value) { return (value << 3); }
        static constexpr unsigned TSITE_POS = 4;
        static constexpr unsigned TSITE_MASK = 0x00000010;
        static constexpr unsigned TSITE(unsigned value) { return (value << 4); }
        static constexpr unsigned TSARU_POS = 5;
        static constexpr unsigned TSARU_MASK = 0x00000020;
        static constexpr unsigned TSARU(unsigned value) { return (value << 5); }
    } PTPTSCR;

    volatile union PTPSSIR_T // PTPSSIR: Ethernet PTP subsecond increment register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPSSIR_BIT_T
        {
            unsigned STSSI : 8; // bits 0..7 System time subsecond increment
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned STSSI_POS = 0;
        static constexpr unsigned STSSI_MASK = 0x000000ff;
        static constexpr unsigned STSSI(unsigned value) { return (value << 0); }
    } PTPSSIR;

    volatile union PTPTSHR_T // PTPTSHR: Ethernet PTP time stamp high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSHR_BIT_T
        {
            unsigned STS : 32; // bits 0..31 System time second    
        } bit;
    
        static constexpr unsigned STS_POS = 0;
        static constexpr unsigned STS_MASK = 0xffffffff;
        static constexpr unsigned STS(unsigned value) { return (value << 0); }
    } PTPTSHR;

    volatile union PTPTSLR_T // PTPTSLR: Ethernet PTP time stamp low register (ETH_PTPTSLR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSLR_BIT_T
        {
            unsigned STSS  : 31; // bits 0..30 System time subseconds
            unsigned STPNS : 1; // bit 31 System time positive or negative sign    
        } bit;
    
        static constexpr unsigned STSS_POS = 0;
        static constexpr unsigned STSS_MASK = 0x7fffffff;
        static constexpr unsigned STSS(unsigned value) { return (value << 0); }
        static constexpr unsigned STPNS_POS = 31;
        static constexpr unsigned STPNS_MASK = 0x80000000;
        static constexpr unsigned STPNS(unsigned value) { return (value << 31); }
    } PTPTSLR;

    volatile union PTPTSHUR_T // PTPTSHUR: Ethernet PTP time stamp high update register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSHUR_BIT_T
        {
            unsigned TSUS : 32; // bits 0..31 Time stamp update second    
        } bit;
    
        static constexpr unsigned TSUS_POS = 0;
        static constexpr unsigned TSUS_MASK = 0xffffffff;
        static constexpr unsigned TSUS(unsigned value) { return (value << 0); }
    } PTPTSHUR;

    volatile union PTPTSLUR_T // PTPTSLUR: Ethernet PTP time stamp low update register (ETH_PTPTSLUR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSLUR_BIT_T
        {
            unsigned TSUSS  : 31; // bits 0..30 Time stamp update subseconds
            unsigned TSUPNS : 1; // bit 31 Time stamp update positive or negative sign    
        } bit;
    
        static constexpr unsigned TSUSS_POS = 0;
        static constexpr unsigned TSUSS_MASK = 0x7fffffff;
        static constexpr unsigned TSUSS(unsigned value) { return (value << 0); }
        static constexpr unsigned TSUPNS_POS = 31;
        static constexpr unsigned TSUPNS_MASK = 0x80000000;
        static constexpr unsigned TSUPNS(unsigned value) { return (value << 31); }
    } PTPTSLUR;

    volatile union PTPTSAR_T // PTPTSAR: Ethernet PTP time stamp addend register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSAR_BIT_T
        {
            unsigned TSA : 32; // bits 0..31 Time stamp addend    
        } bit;
    
        static constexpr unsigned TSA_POS = 0;
        static constexpr unsigned TSA_MASK = 0xffffffff;
        static constexpr unsigned TSA(unsigned value) { return (value << 0); }
    } PTPTSAR;

    volatile union PTPTTHR_T // PTPTTHR: Ethernet PTP target time high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTTHR_BIT_T
        {
            unsigned TTSH : 32; // bits 0..31 Target time stamp high    
        } bit;
    
        static constexpr unsigned TTSH_POS = 0;
        static constexpr unsigned TTSH_MASK = 0xffffffff;
        static constexpr unsigned TTSH(unsigned value) { return (value << 0); }
    } PTPTTHR;

    volatile union PTPTTLR_T // PTPTTLR: Ethernet PTP target time low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTTLR_BIT_T
        {
            unsigned TTSL : 32; // bits 0..31 Target time stamp low    
        } bit;
    
        static constexpr unsigned TTSL_POS = 0;
        static constexpr unsigned TTSL_MASK = 0xffffffff;
        static constexpr unsigned TTSL(unsigned value) { return (value << 0); }
    } PTPTTLR;

}; // struct ETHERNET_PTP_T

static_assert(sizeof(ETHERNET_PTP_T) == ETHERNET_PTP_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp