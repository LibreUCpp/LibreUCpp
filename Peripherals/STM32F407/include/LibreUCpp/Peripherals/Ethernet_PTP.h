#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) Ethernet_PTP_T
{
    static constexpr size_t INSTANCE_SIZE = 48;
    static constexpr size_t PADDED_INSTANCE_SIZE = 48;
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
    static constexpr intptr_t ADDR_OFFSET_PTPTSSR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_PTPPPSCR = 0x2c;

    volatile union PTPTSCR_T // PTPTSCR: Ethernet PTP time stamp control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSCR_BIT_T
        {
            unsigned TSE        : 1; // bit 0 TSE
            unsigned TSFCU      : 1; // bit 1 TSFCU
            unsigned TSSTI      : 1; // bit 2 TSSTI
            unsigned TSSTU      : 1; // bit 3 TSSTU
            unsigned TSITE      : 1; // bit 4 TSITE
            unsigned TTSARU     : 1; // bit 5 TTSARU
            unsigned            : 2; // bits 6..7 unused
            unsigned TSSARFE    : 1; // bit 8 TSSARFE
            unsigned TSSSR      : 1; // bit 9 TSSSR
            unsigned TSPTPPSV2E : 1; // bit 10 TSPTPPSV2E
            unsigned TSSPTPOEFE : 1; // bit 11 TSSPTPOEFE
            unsigned TSSIPV6FE  : 1; // bit 12 TSSIPV6FE
            unsigned TSSIPV4FE  : 1; // bit 13 TSSIPV4FE
            unsigned TSSEME     : 1; // bit 14 TSSEME
            unsigned TSSMRME    : 1; // bit 15 TSSMRME
            unsigned TSCNT      : 2; // bits 16..17 TSCNT
            unsigned TSPFFMAE   : 1; // bit 18 TSPFFMAE
            unsigned            : 13; // bits 19..31 unused    
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
        static constexpr unsigned TTSARU_POS = 5;
        static constexpr unsigned TTSARU_MASK = 0x00000020;
        static constexpr unsigned TTSARU(unsigned value) { return (value << 5); }
        static constexpr unsigned TSSARFE_POS = 8;
        static constexpr unsigned TSSARFE_MASK = 0x00000100;
        static constexpr unsigned TSSARFE(unsigned value) { return (value << 8); }
        static constexpr unsigned TSSSR_POS = 9;
        static constexpr unsigned TSSSR_MASK = 0x00000200;
        static constexpr unsigned TSSSR(unsigned value) { return (value << 9); }
        static constexpr unsigned TSPTPPSV2E_POS = 10;
        static constexpr unsigned TSPTPPSV2E_MASK = 0x00000400;
        static constexpr unsigned TSPTPPSV2E(unsigned value) { return (value << 10); }
        static constexpr unsigned TSSPTPOEFE_POS = 11;
        static constexpr unsigned TSSPTPOEFE_MASK = 0x00000800;
        static constexpr unsigned TSSPTPOEFE(unsigned value) { return (value << 11); }
        static constexpr unsigned TSSIPV6FE_POS = 12;
        static constexpr unsigned TSSIPV6FE_MASK = 0x00001000;
        static constexpr unsigned TSSIPV6FE(unsigned value) { return (value << 12); }
        static constexpr unsigned TSSIPV4FE_POS = 13;
        static constexpr unsigned TSSIPV4FE_MASK = 0x00002000;
        static constexpr unsigned TSSIPV4FE(unsigned value) { return (value << 13); }
        static constexpr unsigned TSSEME_POS = 14;
        static constexpr unsigned TSSEME_MASK = 0x00004000;
        static constexpr unsigned TSSEME(unsigned value) { return (value << 14); }
        static constexpr unsigned TSSMRME_POS = 15;
        static constexpr unsigned TSSMRME_MASK = 0x00008000;
        static constexpr unsigned TSSMRME(unsigned value) { return (value << 15); }
        static constexpr unsigned TSCNT_POS = 16;
        static constexpr unsigned TSCNT_MASK = 0x00030000;
        static constexpr unsigned TSCNT(unsigned value) { return (value << 16); }
        static constexpr unsigned TSPFFMAE_POS = 18;
        static constexpr unsigned TSPFFMAE_MASK = 0x00040000;
        static constexpr unsigned TSPFFMAE(unsigned value) { return (value << 18); }
    } PTPTSCR;

    volatile union PTPSSIR_T // PTPSSIR: Ethernet PTP subsecond increment register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPSSIR_BIT_T
        {
            unsigned STSSI : 8; // bits 0..7 STSSI
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
            unsigned STS : 32; // bits 0..31 STS    
        } bit;
    
        static constexpr unsigned STS_POS = 0;
        static constexpr unsigned STS_MASK = 0xffffffff;
        static constexpr unsigned STS(unsigned value) { return (value << 0); }
    } PTPTSHR;

    volatile union PTPTSLR_T // PTPTSLR: Ethernet PTP time stamp low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSLR_BIT_T
        {
            unsigned STSS  : 31; // bits 0..30 STSS
            unsigned STPNS : 1; // bit 31 STPNS    
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
            unsigned TSUS : 32; // bits 0..31 TSUS    
        } bit;
    
        static constexpr unsigned TSUS_POS = 0;
        static constexpr unsigned TSUS_MASK = 0xffffffff;
        static constexpr unsigned TSUS(unsigned value) { return (value << 0); }
    } PTPTSHUR;

    volatile union PTPTSLUR_T // PTPTSLUR: Ethernet PTP time stamp low update register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSLUR_BIT_T
        {
            unsigned TSUSS  : 31; // bits 0..30 TSUSS
            unsigned TSUPNS : 1; // bit 31 TSUPNS    
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
            unsigned TSA : 32; // bits 0..31 TSA    
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
            unsigned TTSH : 32; // bits 0..31 0    
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
            unsigned TTSL : 32; // bits 0..31 TTSL    
        } bit;
    
        static constexpr unsigned TTSL_POS = 0;
        static constexpr unsigned TTSL_MASK = 0xffffffff;
        static constexpr unsigned TTSL(unsigned value) { return (value << 0); }
    } PTPTTLR;

    uint8_t Reserved1[4];

    volatile union PTPTSSR_T // PTPTSSR: Ethernet PTP time stamp status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPTSSR_BIT_T
        {
            unsigned TSSO  : 1; // bit 0 TSSO
            unsigned TSTTR : 1; // bit 1 TSTTR
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned TSSO_POS = 0;
        static constexpr unsigned TSSO_MASK = 0x00000001;
        static constexpr unsigned TSSO(unsigned value) { return (value << 0); }
        static constexpr unsigned TSTTR_POS = 1;
        static constexpr unsigned TSTTR_MASK = 0x00000002;
        static constexpr unsigned TSTTR(unsigned value) { return (value << 1); }
    } PTPTSSR;

    volatile union PTPPPSCR_T // PTPPPSCR: Ethernet PTP PPS control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PTPPPSCR_BIT_T
        {
            unsigned TSSO  : 1; // bit 0 TSSO
            unsigned TSTTR : 1; // bit 1 TSTTR
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned TSSO_POS = 0;
        static constexpr unsigned TSSO_MASK = 0x00000001;
        static constexpr unsigned TSSO(unsigned value) { return (value << 0); }
        static constexpr unsigned TSTTR_POS = 1;
        static constexpr unsigned TSTTR_MASK = 0x00000002;
        static constexpr unsigned TSTTR(unsigned value) { return (value << 1); }
    } PTPPPSCR;

}; // struct Ethernet_PTP_T

static_assert(sizeof(Ethernet_PTP_T) == Ethernet_PTP_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp