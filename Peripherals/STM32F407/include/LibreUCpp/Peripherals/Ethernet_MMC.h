#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) Ethernet_MMC_T
{
    static constexpr size_t INSTANCE_SIZE = 200;
    static constexpr size_t PADDED_INSTANCE_SIZE = 200;
    static constexpr intptr_t BASE_ADDRESS = 0x40028100;

    static constexpr intptr_t ADDR_OFFSET_MMCCR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MMCRIR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_MMCTIR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_MMCRIMR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_MMCTIMR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_MMCTGFSCCR = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_MMCTGFMSCCR = 0x50;
    static constexpr intptr_t ADDR_OFFSET_MMCTGFCR = 0x68;
    static constexpr intptr_t ADDR_OFFSET_MMCRFCECR = 0x94;
    static constexpr intptr_t ADDR_OFFSET_MMCRFAECR = 0x98;
    static constexpr intptr_t ADDR_OFFSET_MMCRGUFCR = 0xc4;

    volatile union MMCCR_T // MMCCR: Ethernet MMC control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCCR_BIT_T
        {
            unsigned CR    : 1; // bit 0 CR
            unsigned CSR   : 1; // bit 1 CSR
            unsigned ROR   : 1; // bit 2 ROR
            unsigned MCF   : 1; // bit 3 MCF
            unsigned MCP   : 1; // bit 4 MCP
            unsigned MCFHP : 1; // bit 5 MCFHP
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned CR_POS = 0;
        static constexpr unsigned CR_MASK = 0x00000001;
        static constexpr unsigned CR(unsigned value) { return (value << 0); }
        static constexpr unsigned CSR_POS = 1;
        static constexpr unsigned CSR_MASK = 0x00000002;
        static constexpr unsigned CSR(unsigned value) { return (value << 1); }
        static constexpr unsigned ROR_POS = 2;
        static constexpr unsigned ROR_MASK = 0x00000004;
        static constexpr unsigned ROR(unsigned value) { return (value << 2); }
        static constexpr unsigned MCF_POS = 3;
        static constexpr unsigned MCF_MASK = 0x00000008;
        static constexpr unsigned MCF(unsigned value) { return (value << 3); }
        static constexpr unsigned MCP_POS = 4;
        static constexpr unsigned MCP_MASK = 0x00000010;
        static constexpr unsigned MCP(unsigned value) { return (value << 4); }
        static constexpr unsigned MCFHP_POS = 5;
        static constexpr unsigned MCFHP_MASK = 0x00000020;
        static constexpr unsigned MCFHP(unsigned value) { return (value << 5); }
    } MMCCR;

    volatile union MMCRIR_T // MMCRIR: Ethernet MMC receive interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCRIR_BIT_T
        {
            unsigned       : 5; // bits 0..4 unused
            unsigned RFCES : 1; // bit 5 RFCES
            unsigned RFAES : 1; // bit 6 RFAES
            unsigned       : 10; // bits 7..16 unused
            unsigned RGUFS : 1; // bit 17 RGUFS
            unsigned       : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned RFCES_POS = 5;
        static constexpr unsigned RFCES_MASK = 0x00000020;
        static constexpr unsigned RFCES(unsigned value) { return (value << 5); }
        static constexpr unsigned RFAES_POS = 6;
        static constexpr unsigned RFAES_MASK = 0x00000040;
        static constexpr unsigned RFAES(unsigned value) { return (value << 6); }
        static constexpr unsigned RGUFS_POS = 17;
        static constexpr unsigned RGUFS_MASK = 0x00020000;
        static constexpr unsigned RGUFS(unsigned value) { return (value << 17); }
    } MMCRIR;

    volatile union MMCTIR_T // MMCTIR: Ethernet MMC transmit interrupt register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCTIR_BIT_T
        {
            unsigned         : 14; // bits 0..13 unused
            unsigned TGFSCS  : 1; // bit 14 TGFSCS
            unsigned TGFMSCS : 1; // bit 15 TGFMSCS
            unsigned         : 5; // bits 16..20 unused
            unsigned TGFS    : 1; // bit 21 TGFS
            unsigned         : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned TGFSCS_POS = 14;
        static constexpr unsigned TGFSCS_MASK = 0x00004000;
        static constexpr unsigned TGFSCS(unsigned value) { return (value << 14); }
        static constexpr unsigned TGFMSCS_POS = 15;
        static constexpr unsigned TGFMSCS_MASK = 0x00008000;
        static constexpr unsigned TGFMSCS(unsigned value) { return (value << 15); }
        static constexpr unsigned TGFS_POS = 21;
        static constexpr unsigned TGFS_MASK = 0x00200000;
        static constexpr unsigned TGFS(unsigned value) { return (value << 21); }
    } MMCTIR;

    volatile union MMCRIMR_T // MMCRIMR: Ethernet MMC receive interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCRIMR_BIT_T
        {
            unsigned       : 5; // bits 0..4 unused
            unsigned RFCEM : 1; // bit 5 RFCEM
            unsigned RFAEM : 1; // bit 6 RFAEM
            unsigned       : 10; // bits 7..16 unused
            unsigned RGUFM : 1; // bit 17 RGUFM
            unsigned       : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned RFCEM_POS = 5;
        static constexpr unsigned RFCEM_MASK = 0x00000020;
        static constexpr unsigned RFCEM(unsigned value) { return (value << 5); }
        static constexpr unsigned RFAEM_POS = 6;
        static constexpr unsigned RFAEM_MASK = 0x00000040;
        static constexpr unsigned RFAEM(unsigned value) { return (value << 6); }
        static constexpr unsigned RGUFM_POS = 17;
        static constexpr unsigned RGUFM_MASK = 0x00020000;
        static constexpr unsigned RGUFM(unsigned value) { return (value << 17); }
    } MMCRIMR;

    volatile union MMCTIMR_T // MMCTIMR: Ethernet MMC transmit interrupt mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCTIMR_BIT_T
        {
            unsigned         : 14; // bits 0..13 unused
            unsigned TGFSCM  : 1; // bit 14 TGFSCM
            unsigned TGFMSCM : 1; // bit 15 TGFMSCM
            unsigned TGFM    : 1; // bit 16 TGFM
            unsigned         : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned TGFSCM_POS = 14;
        static constexpr unsigned TGFSCM_MASK = 0x00004000;
        static constexpr unsigned TGFSCM(unsigned value) { return (value << 14); }
        static constexpr unsigned TGFMSCM_POS = 15;
        static constexpr unsigned TGFMSCM_MASK = 0x00008000;
        static constexpr unsigned TGFMSCM(unsigned value) { return (value << 15); }
        static constexpr unsigned TGFM_POS = 16;
        static constexpr unsigned TGFM_MASK = 0x00010000;
        static constexpr unsigned TGFM(unsigned value) { return (value << 16); }
    } MMCTIMR;

    uint8_t Reserved1[56];

    volatile union MMCTGFSCCR_T // MMCTGFSCCR: Ethernet MMC transmitted good frames after a single collision counter 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCTGFSCCR_BIT_T
        {
            unsigned TGFSCC : 32; // bits 0..31 TGFSCC    
        } bit;
    
        static constexpr unsigned TGFSCC_POS = 0;
        static constexpr unsigned TGFSCC_MASK = 0xffffffff;
        static constexpr unsigned TGFSCC(unsigned value) { return (value << 0); }
    } MMCTGFSCCR;

    volatile union MMCTGFMSCCR_T // MMCTGFMSCCR: Ethernet MMC transmitted good frames after more than a single collision 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCTGFMSCCR_BIT_T
        {
            unsigned TGFMSCC : 32; // bits 0..31 TGFMSCC    
        } bit;
    
        static constexpr unsigned TGFMSCC_POS = 0;
        static constexpr unsigned TGFMSCC_MASK = 0xffffffff;
        static constexpr unsigned TGFMSCC(unsigned value) { return (value << 0); }
    } MMCTGFMSCCR;

    uint8_t Reserved2[20];

    volatile union MMCTGFCR_T // MMCTGFCR: Ethernet MMC transmitted good frames counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCTGFCR_BIT_T
        {
            unsigned TGFC : 32; // bits 0..31 HTL    
        } bit;
    
        static constexpr unsigned TGFC_POS = 0;
        static constexpr unsigned TGFC_MASK = 0xffffffff;
        static constexpr unsigned TGFC(unsigned value) { return (value << 0); }
    } MMCTGFCR;

    uint8_t Reserved3[40];

    volatile union MMCRFCECR_T // MMCRFCECR: Ethernet MMC received frames with CRC error counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCRFCECR_BIT_T
        {
            unsigned RFCFC : 32; // bits 0..31 RFCFC    
        } bit;
    
        static constexpr unsigned RFCFC_POS = 0;
        static constexpr unsigned RFCFC_MASK = 0xffffffff;
        static constexpr unsigned RFCFC(unsigned value) { return (value << 0); }
    } MMCRFCECR;

    volatile union MMCRFAECR_T // MMCRFAECR: Ethernet MMC received frames with alignment error counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCRFAECR_BIT_T
        {
            unsigned RFAEC : 32; // bits 0..31 RFAEC    
        } bit;
    
        static constexpr unsigned RFAEC_POS = 0;
        static constexpr unsigned RFAEC_MASK = 0xffffffff;
        static constexpr unsigned RFAEC(unsigned value) { return (value << 0); }
    } MMCRFAECR;

    uint8_t Reserved4[40];

    volatile union MMCRGUFCR_T // MMCRGUFCR: MMC received good unicast frames counter register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MMCRGUFCR_BIT_T
        {
            unsigned RGUFC : 32; // bits 0..31 RGUFC    
        } bit;
    
        static constexpr unsigned RGUFC_POS = 0;
        static constexpr unsigned RGUFC_MASK = 0xffffffff;
        static constexpr unsigned RGUFC(unsigned value) { return (value << 0); }
    } MMCRGUFCR;

}; // struct Ethernet_MMC_T

static_assert(sizeof(Ethernet_MMC_T) == Ethernet_MMC_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp