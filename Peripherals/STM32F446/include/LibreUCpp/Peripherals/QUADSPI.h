#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) QUADSPI_T
{
    static constexpr size_t INSTANCE_SIZE = 52;
    static constexpr size_t PADDED_INSTANCE_SIZE = 52;
    static constexpr intptr_t BASE_ADDRESS = 0xa0001000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_DCR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_FCR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DLR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_CCR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_AR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_ABR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_PSMKR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_PSMAR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_PIR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_LPTR = 0x30;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned EN        : 1; // bit 0 Enable
            unsigned ABORT     : 1; // bit 1 Abort request
            unsigned DMAEN     : 1; // bit 2 DMA enable
            unsigned TCEN      : 1; // bit 3 Timeout counter enable
            unsigned SSHIFT    : 1; // bit 4 Sample shift
            unsigned           : 1; // bit 5 unused
            unsigned DFM       : 1; // bit 6 Dual-flash mode
            unsigned FSEL      : 1; // bit 7 FLASH memory selection
            unsigned FTHRES    : 5; // bits 8..12 IFO threshold level
            unsigned           : 3; // bits 13..15 unused
            unsigned TEIE      : 1; // bit 16 Transfer error interrupt enable
            unsigned TCIE      : 1; // bit 17 Transfer complete interrupt enable
            unsigned FTIE      : 1; // bit 18 FIFO threshold interrupt enable
            unsigned SMIE      : 1; // bit 19 Status match interrupt enable
            unsigned TOIE      : 1; // bit 20 TimeOut interrupt enable
            unsigned           : 1; // bit 21 unused
            unsigned APMS      : 1; // bit 22 Automatic poll mode stop
            unsigned PMM       : 1; // bit 23 Polling match mode
            unsigned PRESCALER : 8; // bits 24..31 Clock prescaler    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned ABORT_POS = 1;
        static constexpr unsigned ABORT_MASK = 0x00000002;
        static constexpr unsigned ABORT(unsigned value) { return (value << 1); }
        static constexpr unsigned DMAEN_POS = 2;
        static constexpr unsigned DMAEN_MASK = 0x00000004;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 2); }
        static constexpr unsigned TCEN_POS = 3;
        static constexpr unsigned TCEN_MASK = 0x00000008;
        static constexpr unsigned TCEN(unsigned value) { return (value << 3); }
        static constexpr unsigned SSHIFT_POS = 4;
        static constexpr unsigned SSHIFT_MASK = 0x00000010;
        static constexpr unsigned SSHIFT(unsigned value) { return (value << 4); }
        static constexpr unsigned DFM_POS = 6;
        static constexpr unsigned DFM_MASK = 0x00000040;
        static constexpr unsigned DFM(unsigned value) { return (value << 6); }
        static constexpr unsigned FSEL_POS = 7;
        static constexpr unsigned FSEL_MASK = 0x00000080;
        static constexpr unsigned FSEL(unsigned value) { return (value << 7); }
        static constexpr unsigned FTHRES_POS = 8;
        static constexpr unsigned FTHRES_MASK = 0x00001f00;
        static constexpr unsigned FTHRES(unsigned value) { return (value << 8); }
        static constexpr unsigned TEIE_POS = 16;
        static constexpr unsigned TEIE_MASK = 0x00010000;
        static constexpr unsigned TEIE(unsigned value) { return (value << 16); }
        static constexpr unsigned TCIE_POS = 17;
        static constexpr unsigned TCIE_MASK = 0x00020000;
        static constexpr unsigned TCIE(unsigned value) { return (value << 17); }
        static constexpr unsigned FTIE_POS = 18;
        static constexpr unsigned FTIE_MASK = 0x00040000;
        static constexpr unsigned FTIE(unsigned value) { return (value << 18); }
        static constexpr unsigned SMIE_POS = 19;
        static constexpr unsigned SMIE_MASK = 0x00080000;
        static constexpr unsigned SMIE(unsigned value) { return (value << 19); }
        static constexpr unsigned TOIE_POS = 20;
        static constexpr unsigned TOIE_MASK = 0x00100000;
        static constexpr unsigned TOIE(unsigned value) { return (value << 20); }
        static constexpr unsigned APMS_POS = 22;
        static constexpr unsigned APMS_MASK = 0x00400000;
        static constexpr unsigned APMS(unsigned value) { return (value << 22); }
        static constexpr unsigned PMM_POS = 23;
        static constexpr unsigned PMM_MASK = 0x00800000;
        static constexpr unsigned PMM(unsigned value) { return (value << 23); }
        static constexpr unsigned PRESCALER_POS = 24;
        static constexpr unsigned PRESCALER_MASK = 0xff000000;
        static constexpr unsigned PRESCALER(unsigned value) { return (value << 24); }
    } CR;

    volatile union DCR_T // DCR: device configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DCR_BIT_T
        {
            unsigned CKMODE : 1; // bit 0 Mode 0 / mode 3
            unsigned        : 7; // bits 1..7 unused
            unsigned CSHT   : 3; // bits 8..10 Chip select high time
            unsigned        : 5; // bits 11..15 unused
            unsigned FSIZE  : 5; // bits 16..20 FLASH memory size
            unsigned        : 11; // bits 21..31 unused    
        } bit;
    
        static constexpr unsigned CKMODE_POS = 0;
        static constexpr unsigned CKMODE_MASK = 0x00000001;
        static constexpr unsigned CKMODE(unsigned value) { return (value << 0); }
        static constexpr unsigned CSHT_POS = 8;
        static constexpr unsigned CSHT_MASK = 0x00000700;
        static constexpr unsigned CSHT(unsigned value) { return (value << 8); }
        static constexpr unsigned FSIZE_POS = 16;
        static constexpr unsigned FSIZE_MASK = 0x001f0000;
        static constexpr unsigned FSIZE(unsigned value) { return (value << 16); }
    } DCR;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned TEF    : 1; // bit 0 Transfer error flag
            unsigned TCF    : 1; // bit 1 Transfer complete flag
            unsigned FTF    : 1; // bit 2 FIFO threshold flag
            unsigned SMF    : 1; // bit 3 Status match flag
            unsigned TOF    : 1; // bit 4 Timeout flag
            unsigned BUSY   : 1; // bit 5 Busy
            unsigned        : 2; // bits 6..7 unused
            unsigned FLEVEL : 7; // bits 8..14 FIFO level
            unsigned        : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned TEF_POS = 0;
        static constexpr unsigned TEF_MASK = 0x00000001;
        static constexpr unsigned TEF(unsigned value) { return (value << 0); }
        static constexpr unsigned TCF_POS = 1;
        static constexpr unsigned TCF_MASK = 0x00000002;
        static constexpr unsigned TCF(unsigned value) { return (value << 1); }
        static constexpr unsigned FTF_POS = 2;
        static constexpr unsigned FTF_MASK = 0x00000004;
        static constexpr unsigned FTF(unsigned value) { return (value << 2); }
        static constexpr unsigned SMF_POS = 3;
        static constexpr unsigned SMF_MASK = 0x00000008;
        static constexpr unsigned SMF(unsigned value) { return (value << 3); }
        static constexpr unsigned TOF_POS = 4;
        static constexpr unsigned TOF_MASK = 0x00000010;
        static constexpr unsigned TOF(unsigned value) { return (value << 4); }
        static constexpr unsigned BUSY_POS = 5;
        static constexpr unsigned BUSY_MASK = 0x00000020;
        static constexpr unsigned BUSY(unsigned value) { return (value << 5); }
        static constexpr unsigned FLEVEL_POS = 8;
        static constexpr unsigned FLEVEL_MASK = 0x00007f00;
        static constexpr unsigned FLEVEL(unsigned value) { return (value << 8); }
    } SR;

    volatile union FCR_T // FCR: flag clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FCR_BIT_T
        {
            unsigned CTEF : 1; // bit 0 Clear transfer error flag
            unsigned CTCF : 1; // bit 1 Clear transfer complete flag
            unsigned      : 1; // bit 2 unused
            unsigned CSMF : 1; // bit 3 Clear status match flag
            unsigned CTOF : 1; // bit 4 Clear timeout flag
            unsigned      : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned CTEF_POS = 0;
        static constexpr unsigned CTEF_MASK = 0x00000001;
        static constexpr unsigned CTEF(unsigned value) { return (value << 0); }
        static constexpr unsigned CTCF_POS = 1;
        static constexpr unsigned CTCF_MASK = 0x00000002;
        static constexpr unsigned CTCF(unsigned value) { return (value << 1); }
        static constexpr unsigned CSMF_POS = 3;
        static constexpr unsigned CSMF_MASK = 0x00000008;
        static constexpr unsigned CSMF(unsigned value) { return (value << 3); }
        static constexpr unsigned CTOF_POS = 4;
        static constexpr unsigned CTOF_MASK = 0x00000010;
        static constexpr unsigned CTOF(unsigned value) { return (value << 4); }
    } FCR;

    volatile union DLR_T // DLR: data length register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DLR_BIT_T
        {
            unsigned DL : 32; // bits 0..31 Data length    
        } bit;
    
        static constexpr unsigned DL_POS = 0;
        static constexpr unsigned DL_MASK = 0xffffffff;
        static constexpr unsigned DL(unsigned value) { return (value << 0); }
    } DLR;

    volatile union CCR_T // CCR: communication configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR_BIT_T
        {
            unsigned INSTRUCTION : 8; // bits 0..7 Instruction
            unsigned IMODE       : 2; // bits 8..9 Instruction mode
            unsigned ADMODE      : 2; // bits 10..11 Address mode
            unsigned ADSIZE      : 2; // bits 12..13 Address size
            unsigned ABMODE      : 2; // bits 14..15 Alternate bytes mode
            unsigned ABSIZE      : 2; // bits 16..17 Alternate bytes size
            unsigned DCYC        : 5; // bits 18..22 Number of dummy cycles
            unsigned             : 1; // bit 23 unused
            unsigned DMODE       : 2; // bits 24..25 Data mode
            unsigned FMODE       : 2; // bits 26..27 Functional mode
            unsigned SIOO        : 1; // bit 28 Send instruction only once mode
            unsigned             : 1; // bit 29 unused
            unsigned DHHC        : 1; // bit 30 DDR hold half cycle
            unsigned DDRM        : 1; // bit 31 Double data rate mode    
        } bit;
    
        static constexpr unsigned INSTRUCTION_POS = 0;
        static constexpr unsigned INSTRUCTION_MASK = 0x000000ff;
        static constexpr unsigned INSTRUCTION(unsigned value) { return (value << 0); }
        static constexpr unsigned IMODE_POS = 8;
        static constexpr unsigned IMODE_MASK = 0x00000300;
        static constexpr unsigned IMODE(unsigned value) { return (value << 8); }
        static constexpr unsigned ADMODE_POS = 10;
        static constexpr unsigned ADMODE_MASK = 0x00000c00;
        static constexpr unsigned ADMODE(unsigned value) { return (value << 10); }
        static constexpr unsigned ADSIZE_POS = 12;
        static constexpr unsigned ADSIZE_MASK = 0x00003000;
        static constexpr unsigned ADSIZE(unsigned value) { return (value << 12); }
        static constexpr unsigned ABMODE_POS = 14;
        static constexpr unsigned ABMODE_MASK = 0x0000c000;
        static constexpr unsigned ABMODE(unsigned value) { return (value << 14); }
        static constexpr unsigned ABSIZE_POS = 16;
        static constexpr unsigned ABSIZE_MASK = 0x00030000;
        static constexpr unsigned ABSIZE(unsigned value) { return (value << 16); }
        static constexpr unsigned DCYC_POS = 18;
        static constexpr unsigned DCYC_MASK = 0x007c0000;
        static constexpr unsigned DCYC(unsigned value) { return (value << 18); }
        static constexpr unsigned DMODE_POS = 24;
        static constexpr unsigned DMODE_MASK = 0x03000000;
        static constexpr unsigned DMODE(unsigned value) { return (value << 24); }
        static constexpr unsigned FMODE_POS = 26;
        static constexpr unsigned FMODE_MASK = 0x0c000000;
        static constexpr unsigned FMODE(unsigned value) { return (value << 26); }
        static constexpr unsigned SIOO_POS = 28;
        static constexpr unsigned SIOO_MASK = 0x10000000;
        static constexpr unsigned SIOO(unsigned value) { return (value << 28); }
        static constexpr unsigned DHHC_POS = 30;
        static constexpr unsigned DHHC_MASK = 0x40000000;
        static constexpr unsigned DHHC(unsigned value) { return (value << 30); }
        static constexpr unsigned DDRM_POS = 31;
        static constexpr unsigned DDRM_MASK = 0x80000000;
        static constexpr unsigned DDRM(unsigned value) { return (value << 31); }
    } CCR;

    volatile union AR_T // AR: address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) AR_BIT_T
        {
            unsigned ADDRESS : 32; // bits 0..31 Address    
        } bit;
    
        static constexpr unsigned ADDRESS_POS = 0;
        static constexpr unsigned ADDRESS_MASK = 0xffffffff;
        static constexpr unsigned ADDRESS(unsigned value) { return (value << 0); }
    } AR;

    volatile union ABR_T // ABR: ABR 
    {
        uint32_t reg;
        struct __attribute__((packed)) ABR_BIT_T
        {
            unsigned ALTERNATE : 32; // bits 0..31 ALTERNATE    
        } bit;
    
        static constexpr unsigned ALTERNATE_POS = 0;
        static constexpr unsigned ALTERNATE_MASK = 0xffffffff;
        static constexpr unsigned ALTERNATE(unsigned value) { return (value << 0); }
    } ABR;

    volatile union DR_T // DR: data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned DATA : 32; // bits 0..31 Data    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0xffffffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
    } DR;

    volatile union PSMKR_T // PSMKR: polling status mask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PSMKR_BIT_T
        {
            unsigned MASK : 32; // bits 0..31 Status mask    
        } bit;
    
        static constexpr unsigned MASK_POS = 0;
        static constexpr unsigned MASK_MASK = 0xffffffff;
        static constexpr unsigned MASK(unsigned value) { return (value << 0); }
    } PSMKR;

    volatile union PSMAR_T // PSMAR: polling status match register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PSMAR_BIT_T
        {
            unsigned MATCH : 32; // bits 0..31 Status match    
        } bit;
    
        static constexpr unsigned MATCH_POS = 0;
        static constexpr unsigned MATCH_MASK = 0xffffffff;
        static constexpr unsigned MATCH(unsigned value) { return (value << 0); }
    } PSMAR;

    volatile union PIR_T // PIR: polling interval register 
    {
        uint32_t reg;
        struct __attribute__((packed)) PIR_BIT_T
        {
            unsigned INTERVAL : 16; // bits 0..15 Polling interval
            unsigned          : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned INTERVAL_POS = 0;
        static constexpr unsigned INTERVAL_MASK = 0x0000ffff;
        static constexpr unsigned INTERVAL(unsigned value) { return (value << 0); }
    } PIR;

    volatile union LPTR_T // LPTR: low-power timeout register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LPTR_BIT_T
        {
            unsigned TIMEOUT : 16; // bits 0..15 Timeout period
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned TIMEOUT_POS = 0;
        static constexpr unsigned TIMEOUT_MASK = 0x0000ffff;
        static constexpr unsigned TIMEOUT(unsigned value) { return (value << 0); }
    } LPTR;

}; // struct QUADSPI_T

static_assert(sizeof(QUADSPI_T) == QUADSPI_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp