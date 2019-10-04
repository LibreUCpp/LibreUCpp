#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DMA_T
{
    static constexpr size_t INSTANCE_SIZE = 144;
    static constexpr size_t PADDED_INSTANCE_SIZE = 144;
    static constexpr intptr_t BASE_ADDRESS_DMA1 = 0x40020000;
    static constexpr intptr_t BASE_ADDRESS_DMA2 = 0x40020400;

    static constexpr intptr_t ADDR_OFFSET_ISR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_IFCR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_CCR1 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_CNDTR1 = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_CPAR1 = 0x10;
    static constexpr intptr_t ADDR_OFFSET_CMAR1 = 0x14;
    static constexpr intptr_t ADDR_OFFSET_CCR2 = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_CNDTR2 = 0x20;
    static constexpr intptr_t ADDR_OFFSET_CPAR2 = 0x24;
    static constexpr intptr_t ADDR_OFFSET_CMAR2 = 0x28;
    static constexpr intptr_t ADDR_OFFSET_CCR3 = 0x30;
    static constexpr intptr_t ADDR_OFFSET_CNDTR3 = 0x34;
    static constexpr intptr_t ADDR_OFFSET_CPAR3 = 0x38;
    static constexpr intptr_t ADDR_OFFSET_CMAR3 = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_CCR4 = 0x44;
    static constexpr intptr_t ADDR_OFFSET_CNDTR4 = 0x48;
    static constexpr intptr_t ADDR_OFFSET_CPAR4 = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_CMAR4 = 0x50;
    static constexpr intptr_t ADDR_OFFSET_CCR5 = 0x58;
    static constexpr intptr_t ADDR_OFFSET_CNDTR5 = 0x5c;
    static constexpr intptr_t ADDR_OFFSET_CPAR5 = 0x60;
    static constexpr intptr_t ADDR_OFFSET_CMAR5 = 0x64;
    static constexpr intptr_t ADDR_OFFSET_CCR6 = 0x6c;
    static constexpr intptr_t ADDR_OFFSET_CNDTR6 = 0x70;
    static constexpr intptr_t ADDR_OFFSET_CPAR6 = 0x74;
    static constexpr intptr_t ADDR_OFFSET_CMAR6 = 0x78;
    static constexpr intptr_t ADDR_OFFSET_CCR7 = 0x80;
    static constexpr intptr_t ADDR_OFFSET_CNDTR7 = 0x84;
    static constexpr intptr_t ADDR_OFFSET_CPAR7 = 0x88;
    static constexpr intptr_t ADDR_OFFSET_CMAR7 = 0x8c;

    volatile union ISR_T // ISR: DMA interrupt status register (DMA_ISR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) ISR_BIT_T
        {
            unsigned GIF1  : 1; // bit 0 Channel 1 Global interrupt flag
            unsigned TCIF1 : 1; // bit 1 Channel 1 Transfer Complete flag
            unsigned HTIF1 : 1; // bit 2 Channel 1 Half Transfer Complete flag
            unsigned TEIF1 : 1; // bit 3 Channel 1 Transfer Error flag
            unsigned GIF2  : 1; // bit 4 Channel 2 Global interrupt flag
            unsigned TCIF2 : 1; // bit 5 Channel 2 Transfer Complete flag
            unsigned HTIF2 : 1; // bit 6 Channel 2 Half Transfer Complete flag
            unsigned TEIF2 : 1; // bit 7 Channel 2 Transfer Error flag
            unsigned GIF3  : 1; // bit 8 Channel 3 Global interrupt flag
            unsigned TCIF3 : 1; // bit 9 Channel 3 Transfer Complete flag
            unsigned HTIF3 : 1; // bit 10 Channel 3 Half Transfer Complete flag
            unsigned TEIF3 : 1; // bit 11 Channel 3 Transfer Error flag
            unsigned GIF4  : 1; // bit 12 Channel 4 Global interrupt flag
            unsigned TCIF4 : 1; // bit 13 Channel 4 Transfer Complete flag
            unsigned HTIF4 : 1; // bit 14 Channel 4 Half Transfer Complete flag
            unsigned TEIF4 : 1; // bit 15 Channel 4 Transfer Error flag
            unsigned GIF5  : 1; // bit 16 Channel 5 Global interrupt flag
            unsigned TCIF5 : 1; // bit 17 Channel 5 Transfer Complete flag
            unsigned HTIF5 : 1; // bit 18 Channel 5 Half Transfer Complete flag
            unsigned TEIF5 : 1; // bit 19 Channel 5 Transfer Error flag
            unsigned GIF6  : 1; // bit 20 Channel 6 Global interrupt flag
            unsigned TCIF6 : 1; // bit 21 Channel 6 Transfer Complete flag
            unsigned HTIF6 : 1; // bit 22 Channel 6 Half Transfer Complete flag
            unsigned TEIF6 : 1; // bit 23 Channel 6 Transfer Error flag
            unsigned GIF7  : 1; // bit 24 Channel 7 Global interrupt flag
            unsigned TCIF7 : 1; // bit 25 Channel 7 Transfer Complete flag
            unsigned HTIF7 : 1; // bit 26 Channel 7 Half Transfer Complete flag
            unsigned TEIF7 : 1; // bit 27 Channel 7 Transfer Error flag
            unsigned       : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned GIF1_POS = 0;
        static constexpr unsigned GIF1_MASK = 0x00000001;
        static constexpr unsigned GIF1(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIF1_POS = 1;
        static constexpr unsigned TCIF1_MASK = 0x00000002;
        static constexpr unsigned TCIF1(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIF1_POS = 2;
        static constexpr unsigned HTIF1_MASK = 0x00000004;
        static constexpr unsigned HTIF1(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIF1_POS = 3;
        static constexpr unsigned TEIF1_MASK = 0x00000008;
        static constexpr unsigned TEIF1(unsigned value) { return (value << 3); }
        static constexpr unsigned GIF2_POS = 4;
        static constexpr unsigned GIF2_MASK = 0x00000010;
        static constexpr unsigned GIF2(unsigned value) { return (value << 4); }
        static constexpr unsigned TCIF2_POS = 5;
        static constexpr unsigned TCIF2_MASK = 0x00000020;
        static constexpr unsigned TCIF2(unsigned value) { return (value << 5); }
        static constexpr unsigned HTIF2_POS = 6;
        static constexpr unsigned HTIF2_MASK = 0x00000040;
        static constexpr unsigned HTIF2(unsigned value) { return (value << 6); }
        static constexpr unsigned TEIF2_POS = 7;
        static constexpr unsigned TEIF2_MASK = 0x00000080;
        static constexpr unsigned TEIF2(unsigned value) { return (value << 7); }
        static constexpr unsigned GIF3_POS = 8;
        static constexpr unsigned GIF3_MASK = 0x00000100;
        static constexpr unsigned GIF3(unsigned value) { return (value << 8); }
        static constexpr unsigned TCIF3_POS = 9;
        static constexpr unsigned TCIF3_MASK = 0x00000200;
        static constexpr unsigned TCIF3(unsigned value) { return (value << 9); }
        static constexpr unsigned HTIF3_POS = 10;
        static constexpr unsigned HTIF3_MASK = 0x00000400;
        static constexpr unsigned HTIF3(unsigned value) { return (value << 10); }
        static constexpr unsigned TEIF3_POS = 11;
        static constexpr unsigned TEIF3_MASK = 0x00000800;
        static constexpr unsigned TEIF3(unsigned value) { return (value << 11); }
        static constexpr unsigned GIF4_POS = 12;
        static constexpr unsigned GIF4_MASK = 0x00001000;
        static constexpr unsigned GIF4(unsigned value) { return (value << 12); }
        static constexpr unsigned TCIF4_POS = 13;
        static constexpr unsigned TCIF4_MASK = 0x00002000;
        static constexpr unsigned TCIF4(unsigned value) { return (value << 13); }
        static constexpr unsigned HTIF4_POS = 14;
        static constexpr unsigned HTIF4_MASK = 0x00004000;
        static constexpr unsigned HTIF4(unsigned value) { return (value << 14); }
        static constexpr unsigned TEIF4_POS = 15;
        static constexpr unsigned TEIF4_MASK = 0x00008000;
        static constexpr unsigned TEIF4(unsigned value) { return (value << 15); }
        static constexpr unsigned GIF5_POS = 16;
        static constexpr unsigned GIF5_MASK = 0x00010000;
        static constexpr unsigned GIF5(unsigned value) { return (value << 16); }
        static constexpr unsigned TCIF5_POS = 17;
        static constexpr unsigned TCIF5_MASK = 0x00020000;
        static constexpr unsigned TCIF5(unsigned value) { return (value << 17); }
        static constexpr unsigned HTIF5_POS = 18;
        static constexpr unsigned HTIF5_MASK = 0x00040000;
        static constexpr unsigned HTIF5(unsigned value) { return (value << 18); }
        static constexpr unsigned TEIF5_POS = 19;
        static constexpr unsigned TEIF5_MASK = 0x00080000;
        static constexpr unsigned TEIF5(unsigned value) { return (value << 19); }
        static constexpr unsigned GIF6_POS = 20;
        static constexpr unsigned GIF6_MASK = 0x00100000;
        static constexpr unsigned GIF6(unsigned value) { return (value << 20); }
        static constexpr unsigned TCIF6_POS = 21;
        static constexpr unsigned TCIF6_MASK = 0x00200000;
        static constexpr unsigned TCIF6(unsigned value) { return (value << 21); }
        static constexpr unsigned HTIF6_POS = 22;
        static constexpr unsigned HTIF6_MASK = 0x00400000;
        static constexpr unsigned HTIF6(unsigned value) { return (value << 22); }
        static constexpr unsigned TEIF6_POS = 23;
        static constexpr unsigned TEIF6_MASK = 0x00800000;
        static constexpr unsigned TEIF6(unsigned value) { return (value << 23); }
        static constexpr unsigned GIF7_POS = 24;
        static constexpr unsigned GIF7_MASK = 0x01000000;
        static constexpr unsigned GIF7(unsigned value) { return (value << 24); }
        static constexpr unsigned TCIF7_POS = 25;
        static constexpr unsigned TCIF7_MASK = 0x02000000;
        static constexpr unsigned TCIF7(unsigned value) { return (value << 25); }
        static constexpr unsigned HTIF7_POS = 26;
        static constexpr unsigned HTIF7_MASK = 0x04000000;
        static constexpr unsigned HTIF7(unsigned value) { return (value << 26); }
        static constexpr unsigned TEIF7_POS = 27;
        static constexpr unsigned TEIF7_MASK = 0x08000000;
        static constexpr unsigned TEIF7(unsigned value) { return (value << 27); }
    } ISR;

    volatile union IFCR_T // IFCR: DMA interrupt flag clear register (DMA_IFCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) IFCR_BIT_T
        {
            unsigned CGIF1  : 1; // bit 0 Channel 1 Global interrupt clear
            unsigned CTCIF1 : 1; // bit 1 Channel 1 Transfer Complete clear
            unsigned CHTIF1 : 1; // bit 2 Channel 1 Half Transfer clear
            unsigned CTEIF1 : 1; // bit 3 Channel 1 Transfer Error clear
            unsigned CGIF2  : 1; // bit 4 Channel 2 Global interrupt clear
            unsigned CTCIF2 : 1; // bit 5 Channel 2 Transfer Complete clear
            unsigned CHTIF2 : 1; // bit 6 Channel 2 Half Transfer clear
            unsigned CTEIF2 : 1; // bit 7 Channel 2 Transfer Error clear
            unsigned CGIF3  : 1; // bit 8 Channel 3 Global interrupt clear
            unsigned CTCIF3 : 1; // bit 9 Channel 3 Transfer Complete clear
            unsigned CHTIF3 : 1; // bit 10 Channel 3 Half Transfer clear
            unsigned CTEIF3 : 1; // bit 11 Channel 3 Transfer Error clear
            unsigned CGIF4  : 1; // bit 12 Channel 4 Global interrupt clear
            unsigned CTCIF4 : 1; // bit 13 Channel 4 Transfer Complete clear
            unsigned CHTIF4 : 1; // bit 14 Channel 4 Half Transfer clear
            unsigned CTEIF4 : 1; // bit 15 Channel 4 Transfer Error clear
            unsigned CGIF5  : 1; // bit 16 Channel 5 Global interrupt clear
            unsigned CTCIF5 : 1; // bit 17 Channel 5 Transfer Complete clear
            unsigned CHTIF5 : 1; // bit 18 Channel 5 Half Transfer clear
            unsigned CTEIF5 : 1; // bit 19 Channel 5 Transfer Error clear
            unsigned CGIF6  : 1; // bit 20 Channel 6 Global interrupt clear
            unsigned CTCIF6 : 1; // bit 21 Channel 6 Transfer Complete clear
            unsigned CHTIF6 : 1; // bit 22 Channel 6 Half Transfer clear
            unsigned CTEIF6 : 1; // bit 23 Channel 6 Transfer Error clear
            unsigned CGIF7  : 1; // bit 24 Channel 7 Global interrupt clear
            unsigned CTCIF7 : 1; // bit 25 Channel 7 Transfer Complete clear
            unsigned CHTIF7 : 1; // bit 26 Channel 7 Half Transfer clear
            unsigned CTEIF7 : 1; // bit 27 Channel 7 Transfer Error clear
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned CGIF1_POS = 0;
        static constexpr unsigned CGIF1_MASK = 0x00000001;
        static constexpr unsigned CGIF1(unsigned value) { return (value << 0); }
        static constexpr unsigned CTCIF1_POS = 1;
        static constexpr unsigned CTCIF1_MASK = 0x00000002;
        static constexpr unsigned CTCIF1(unsigned value) { return (value << 1); }
        static constexpr unsigned CHTIF1_POS = 2;
        static constexpr unsigned CHTIF1_MASK = 0x00000004;
        static constexpr unsigned CHTIF1(unsigned value) { return (value << 2); }
        static constexpr unsigned CTEIF1_POS = 3;
        static constexpr unsigned CTEIF1_MASK = 0x00000008;
        static constexpr unsigned CTEIF1(unsigned value) { return (value << 3); }
        static constexpr unsigned CGIF2_POS = 4;
        static constexpr unsigned CGIF2_MASK = 0x00000010;
        static constexpr unsigned CGIF2(unsigned value) { return (value << 4); }
        static constexpr unsigned CTCIF2_POS = 5;
        static constexpr unsigned CTCIF2_MASK = 0x00000020;
        static constexpr unsigned CTCIF2(unsigned value) { return (value << 5); }
        static constexpr unsigned CHTIF2_POS = 6;
        static constexpr unsigned CHTIF2_MASK = 0x00000040;
        static constexpr unsigned CHTIF2(unsigned value) { return (value << 6); }
        static constexpr unsigned CTEIF2_POS = 7;
        static constexpr unsigned CTEIF2_MASK = 0x00000080;
        static constexpr unsigned CTEIF2(unsigned value) { return (value << 7); }
        static constexpr unsigned CGIF3_POS = 8;
        static constexpr unsigned CGIF3_MASK = 0x00000100;
        static constexpr unsigned CGIF3(unsigned value) { return (value << 8); }
        static constexpr unsigned CTCIF3_POS = 9;
        static constexpr unsigned CTCIF3_MASK = 0x00000200;
        static constexpr unsigned CTCIF3(unsigned value) { return (value << 9); }
        static constexpr unsigned CHTIF3_POS = 10;
        static constexpr unsigned CHTIF3_MASK = 0x00000400;
        static constexpr unsigned CHTIF3(unsigned value) { return (value << 10); }
        static constexpr unsigned CTEIF3_POS = 11;
        static constexpr unsigned CTEIF3_MASK = 0x00000800;
        static constexpr unsigned CTEIF3(unsigned value) { return (value << 11); }
        static constexpr unsigned CGIF4_POS = 12;
        static constexpr unsigned CGIF4_MASK = 0x00001000;
        static constexpr unsigned CGIF4(unsigned value) { return (value << 12); }
        static constexpr unsigned CTCIF4_POS = 13;
        static constexpr unsigned CTCIF4_MASK = 0x00002000;
        static constexpr unsigned CTCIF4(unsigned value) { return (value << 13); }
        static constexpr unsigned CHTIF4_POS = 14;
        static constexpr unsigned CHTIF4_MASK = 0x00004000;
        static constexpr unsigned CHTIF4(unsigned value) { return (value << 14); }
        static constexpr unsigned CTEIF4_POS = 15;
        static constexpr unsigned CTEIF4_MASK = 0x00008000;
        static constexpr unsigned CTEIF4(unsigned value) { return (value << 15); }
        static constexpr unsigned CGIF5_POS = 16;
        static constexpr unsigned CGIF5_MASK = 0x00010000;
        static constexpr unsigned CGIF5(unsigned value) { return (value << 16); }
        static constexpr unsigned CTCIF5_POS = 17;
        static constexpr unsigned CTCIF5_MASK = 0x00020000;
        static constexpr unsigned CTCIF5(unsigned value) { return (value << 17); }
        static constexpr unsigned CHTIF5_POS = 18;
        static constexpr unsigned CHTIF5_MASK = 0x00040000;
        static constexpr unsigned CHTIF5(unsigned value) { return (value << 18); }
        static constexpr unsigned CTEIF5_POS = 19;
        static constexpr unsigned CTEIF5_MASK = 0x00080000;
        static constexpr unsigned CTEIF5(unsigned value) { return (value << 19); }
        static constexpr unsigned CGIF6_POS = 20;
        static constexpr unsigned CGIF6_MASK = 0x00100000;
        static constexpr unsigned CGIF6(unsigned value) { return (value << 20); }
        static constexpr unsigned CTCIF6_POS = 21;
        static constexpr unsigned CTCIF6_MASK = 0x00200000;
        static constexpr unsigned CTCIF6(unsigned value) { return (value << 21); }
        static constexpr unsigned CHTIF6_POS = 22;
        static constexpr unsigned CHTIF6_MASK = 0x00400000;
        static constexpr unsigned CHTIF6(unsigned value) { return (value << 22); }
        static constexpr unsigned CTEIF6_POS = 23;
        static constexpr unsigned CTEIF6_MASK = 0x00800000;
        static constexpr unsigned CTEIF6(unsigned value) { return (value << 23); }
        static constexpr unsigned CGIF7_POS = 24;
        static constexpr unsigned CGIF7_MASK = 0x01000000;
        static constexpr unsigned CGIF7(unsigned value) { return (value << 24); }
        static constexpr unsigned CTCIF7_POS = 25;
        static constexpr unsigned CTCIF7_MASK = 0x02000000;
        static constexpr unsigned CTCIF7(unsigned value) { return (value << 25); }
        static constexpr unsigned CHTIF7_POS = 26;
        static constexpr unsigned CHTIF7_MASK = 0x04000000;
        static constexpr unsigned CHTIF7(unsigned value) { return (value << 26); }
        static constexpr unsigned CTEIF7_POS = 27;
        static constexpr unsigned CTEIF7_MASK = 0x08000000;
        static constexpr unsigned CTEIF7(unsigned value) { return (value << 27); }
    } IFCR;

    volatile union CCR1_T // CCR1: DMA channel configuration register (DMA_CCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR1_BIT_T
        {
            unsigned EN      : 1; // bit 0 Channel enable
            unsigned TCIE    : 1; // bit 1 Transfer complete interrupt enable
            unsigned HTIE    : 1; // bit 2 Half Transfer interrupt enable
            unsigned TEIE    : 1; // bit 3 Transfer error interrupt enable
            unsigned DIR     : 1; // bit 4 Data transfer direction
            unsigned CIRC    : 1; // bit 5 Circular mode
            unsigned PINC    : 1; // bit 6 Peripheral increment mode
            unsigned MINC    : 1; // bit 7 Memory increment mode
            unsigned PSIZE   : 2; // bits 8..9 Peripheral size
            unsigned MSIZE   : 2; // bits 10..11 Memory size
            unsigned PL      : 2; // bits 12..13 Channel Priority level
            unsigned MEM2MEM : 1; // bit 14 Memory to memory mode
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIE_POS = 1;
        static constexpr unsigned TCIE_MASK = 0x00000002;
        static constexpr unsigned TCIE(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIE_POS = 2;
        static constexpr unsigned HTIE_MASK = 0x00000004;
        static constexpr unsigned HTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIE_POS = 3;
        static constexpr unsigned TEIE_MASK = 0x00000008;
        static constexpr unsigned TEIE(unsigned value) { return (value << 3); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned CIRC_POS = 5;
        static constexpr unsigned CIRC_MASK = 0x00000020;
        static constexpr unsigned CIRC(unsigned value) { return (value << 5); }
        static constexpr unsigned PINC_POS = 6;
        static constexpr unsigned PINC_MASK = 0x00000040;
        static constexpr unsigned PINC(unsigned value) { return (value << 6); }
        static constexpr unsigned MINC_POS = 7;
        static constexpr unsigned MINC_MASK = 0x00000080;
        static constexpr unsigned MINC(unsigned value) { return (value << 7); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned MSIZE_POS = 10;
        static constexpr unsigned MSIZE_MASK = 0x00000c00;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 10); }
        static constexpr unsigned PL_POS = 12;
        static constexpr unsigned PL_MASK = 0x00003000;
        static constexpr unsigned PL(unsigned value) { return (value << 12); }
        static constexpr unsigned MEM2MEM_POS = 14;
        static constexpr unsigned MEM2MEM_MASK = 0x00004000;
        static constexpr unsigned MEM2MEM(unsigned value) { return (value << 14); }
    } CCR1;

    volatile union CNDTR1_T // CNDTR1: DMA channel 1 number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNDTR1_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } CNDTR1;

    volatile union CPAR1_T // CPAR1: DMA channel 1 peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPAR1_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } CPAR1;

    volatile union CMAR1_T // CMAR1: DMA channel 1 memory address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMAR1_BIT_T
        {
            unsigned MA : 32; // bits 0..31 Memory address    
        } bit;
    
        static constexpr unsigned MA_POS = 0;
        static constexpr unsigned MA_MASK = 0xffffffff;
        static constexpr unsigned MA(unsigned value) { return (value << 0); }
    } CMAR1;

    uint8_t Reserved1[4];

    volatile union CCR2_T // CCR2: DMA channel configuration register (DMA_CCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR2_BIT_T
        {
            unsigned EN      : 1; // bit 0 Channel enable
            unsigned TCIE    : 1; // bit 1 Transfer complete interrupt enable
            unsigned HTIE    : 1; // bit 2 Half Transfer interrupt enable
            unsigned TEIE    : 1; // bit 3 Transfer error interrupt enable
            unsigned DIR     : 1; // bit 4 Data transfer direction
            unsigned CIRC    : 1; // bit 5 Circular mode
            unsigned PINC    : 1; // bit 6 Peripheral increment mode
            unsigned MINC    : 1; // bit 7 Memory increment mode
            unsigned PSIZE   : 2; // bits 8..9 Peripheral size
            unsigned MSIZE   : 2; // bits 10..11 Memory size
            unsigned PL      : 2; // bits 12..13 Channel Priority level
            unsigned MEM2MEM : 1; // bit 14 Memory to memory mode
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIE_POS = 1;
        static constexpr unsigned TCIE_MASK = 0x00000002;
        static constexpr unsigned TCIE(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIE_POS = 2;
        static constexpr unsigned HTIE_MASK = 0x00000004;
        static constexpr unsigned HTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIE_POS = 3;
        static constexpr unsigned TEIE_MASK = 0x00000008;
        static constexpr unsigned TEIE(unsigned value) { return (value << 3); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned CIRC_POS = 5;
        static constexpr unsigned CIRC_MASK = 0x00000020;
        static constexpr unsigned CIRC(unsigned value) { return (value << 5); }
        static constexpr unsigned PINC_POS = 6;
        static constexpr unsigned PINC_MASK = 0x00000040;
        static constexpr unsigned PINC(unsigned value) { return (value << 6); }
        static constexpr unsigned MINC_POS = 7;
        static constexpr unsigned MINC_MASK = 0x00000080;
        static constexpr unsigned MINC(unsigned value) { return (value << 7); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned MSIZE_POS = 10;
        static constexpr unsigned MSIZE_MASK = 0x00000c00;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 10); }
        static constexpr unsigned PL_POS = 12;
        static constexpr unsigned PL_MASK = 0x00003000;
        static constexpr unsigned PL(unsigned value) { return (value << 12); }
        static constexpr unsigned MEM2MEM_POS = 14;
        static constexpr unsigned MEM2MEM_MASK = 0x00004000;
        static constexpr unsigned MEM2MEM(unsigned value) { return (value << 14); }
    } CCR2;

    volatile union CNDTR2_T // CNDTR2: DMA channel 2 number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNDTR2_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } CNDTR2;

    volatile union CPAR2_T // CPAR2: DMA channel 2 peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPAR2_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } CPAR2;

    volatile union CMAR2_T // CMAR2: DMA channel 2 memory address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMAR2_BIT_T
        {
            unsigned MA : 32; // bits 0..31 Memory address    
        } bit;
    
        static constexpr unsigned MA_POS = 0;
        static constexpr unsigned MA_MASK = 0xffffffff;
        static constexpr unsigned MA(unsigned value) { return (value << 0); }
    } CMAR2;

    uint8_t Reserved2[4];

    volatile union CCR3_T // CCR3: DMA channel configuration register (DMA_CCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR3_BIT_T
        {
            unsigned EN      : 1; // bit 0 Channel enable
            unsigned TCIE    : 1; // bit 1 Transfer complete interrupt enable
            unsigned HTIE    : 1; // bit 2 Half Transfer interrupt enable
            unsigned TEIE    : 1; // bit 3 Transfer error interrupt enable
            unsigned DIR     : 1; // bit 4 Data transfer direction
            unsigned CIRC    : 1; // bit 5 Circular mode
            unsigned PINC    : 1; // bit 6 Peripheral increment mode
            unsigned MINC    : 1; // bit 7 Memory increment mode
            unsigned PSIZE   : 2; // bits 8..9 Peripheral size
            unsigned MSIZE   : 2; // bits 10..11 Memory size
            unsigned PL      : 2; // bits 12..13 Channel Priority level
            unsigned MEM2MEM : 1; // bit 14 Memory to memory mode
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIE_POS = 1;
        static constexpr unsigned TCIE_MASK = 0x00000002;
        static constexpr unsigned TCIE(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIE_POS = 2;
        static constexpr unsigned HTIE_MASK = 0x00000004;
        static constexpr unsigned HTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIE_POS = 3;
        static constexpr unsigned TEIE_MASK = 0x00000008;
        static constexpr unsigned TEIE(unsigned value) { return (value << 3); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned CIRC_POS = 5;
        static constexpr unsigned CIRC_MASK = 0x00000020;
        static constexpr unsigned CIRC(unsigned value) { return (value << 5); }
        static constexpr unsigned PINC_POS = 6;
        static constexpr unsigned PINC_MASK = 0x00000040;
        static constexpr unsigned PINC(unsigned value) { return (value << 6); }
        static constexpr unsigned MINC_POS = 7;
        static constexpr unsigned MINC_MASK = 0x00000080;
        static constexpr unsigned MINC(unsigned value) { return (value << 7); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned MSIZE_POS = 10;
        static constexpr unsigned MSIZE_MASK = 0x00000c00;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 10); }
        static constexpr unsigned PL_POS = 12;
        static constexpr unsigned PL_MASK = 0x00003000;
        static constexpr unsigned PL(unsigned value) { return (value << 12); }
        static constexpr unsigned MEM2MEM_POS = 14;
        static constexpr unsigned MEM2MEM_MASK = 0x00004000;
        static constexpr unsigned MEM2MEM(unsigned value) { return (value << 14); }
    } CCR3;

    volatile union CNDTR3_T // CNDTR3: DMA channel 3 number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNDTR3_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } CNDTR3;

    volatile union CPAR3_T // CPAR3: DMA channel 3 peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPAR3_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } CPAR3;

    volatile union CMAR3_T // CMAR3: DMA channel 3 memory address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMAR3_BIT_T
        {
            unsigned MA : 32; // bits 0..31 Memory address    
        } bit;
    
        static constexpr unsigned MA_POS = 0;
        static constexpr unsigned MA_MASK = 0xffffffff;
        static constexpr unsigned MA(unsigned value) { return (value << 0); }
    } CMAR3;

    uint8_t Reserved3[4];

    volatile union CCR4_T // CCR4: DMA channel configuration register (DMA_CCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR4_BIT_T
        {
            unsigned EN      : 1; // bit 0 Channel enable
            unsigned TCIE    : 1; // bit 1 Transfer complete interrupt enable
            unsigned HTIE    : 1; // bit 2 Half Transfer interrupt enable
            unsigned TEIE    : 1; // bit 3 Transfer error interrupt enable
            unsigned DIR     : 1; // bit 4 Data transfer direction
            unsigned CIRC    : 1; // bit 5 Circular mode
            unsigned PINC    : 1; // bit 6 Peripheral increment mode
            unsigned MINC    : 1; // bit 7 Memory increment mode
            unsigned PSIZE   : 2; // bits 8..9 Peripheral size
            unsigned MSIZE   : 2; // bits 10..11 Memory size
            unsigned PL      : 2; // bits 12..13 Channel Priority level
            unsigned MEM2MEM : 1; // bit 14 Memory to memory mode
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIE_POS = 1;
        static constexpr unsigned TCIE_MASK = 0x00000002;
        static constexpr unsigned TCIE(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIE_POS = 2;
        static constexpr unsigned HTIE_MASK = 0x00000004;
        static constexpr unsigned HTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIE_POS = 3;
        static constexpr unsigned TEIE_MASK = 0x00000008;
        static constexpr unsigned TEIE(unsigned value) { return (value << 3); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned CIRC_POS = 5;
        static constexpr unsigned CIRC_MASK = 0x00000020;
        static constexpr unsigned CIRC(unsigned value) { return (value << 5); }
        static constexpr unsigned PINC_POS = 6;
        static constexpr unsigned PINC_MASK = 0x00000040;
        static constexpr unsigned PINC(unsigned value) { return (value << 6); }
        static constexpr unsigned MINC_POS = 7;
        static constexpr unsigned MINC_MASK = 0x00000080;
        static constexpr unsigned MINC(unsigned value) { return (value << 7); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned MSIZE_POS = 10;
        static constexpr unsigned MSIZE_MASK = 0x00000c00;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 10); }
        static constexpr unsigned PL_POS = 12;
        static constexpr unsigned PL_MASK = 0x00003000;
        static constexpr unsigned PL(unsigned value) { return (value << 12); }
        static constexpr unsigned MEM2MEM_POS = 14;
        static constexpr unsigned MEM2MEM_MASK = 0x00004000;
        static constexpr unsigned MEM2MEM(unsigned value) { return (value << 14); }
    } CCR4;

    volatile union CNDTR4_T // CNDTR4: DMA channel 4 number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNDTR4_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } CNDTR4;

    volatile union CPAR4_T // CPAR4: DMA channel 4 peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPAR4_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } CPAR4;

    volatile union CMAR4_T // CMAR4: DMA channel 4 memory address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMAR4_BIT_T
        {
            unsigned MA : 32; // bits 0..31 Memory address    
        } bit;
    
        static constexpr unsigned MA_POS = 0;
        static constexpr unsigned MA_MASK = 0xffffffff;
        static constexpr unsigned MA(unsigned value) { return (value << 0); }
    } CMAR4;

    uint8_t Reserved4[4];

    volatile union CCR5_T // CCR5: DMA channel configuration register (DMA_CCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR5_BIT_T
        {
            unsigned EN      : 1; // bit 0 Channel enable
            unsigned TCIE    : 1; // bit 1 Transfer complete interrupt enable
            unsigned HTIE    : 1; // bit 2 Half Transfer interrupt enable
            unsigned TEIE    : 1; // bit 3 Transfer error interrupt enable
            unsigned DIR     : 1; // bit 4 Data transfer direction
            unsigned CIRC    : 1; // bit 5 Circular mode
            unsigned PINC    : 1; // bit 6 Peripheral increment mode
            unsigned MINC    : 1; // bit 7 Memory increment mode
            unsigned PSIZE   : 2; // bits 8..9 Peripheral size
            unsigned MSIZE   : 2; // bits 10..11 Memory size
            unsigned PL      : 2; // bits 12..13 Channel Priority level
            unsigned MEM2MEM : 1; // bit 14 Memory to memory mode
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIE_POS = 1;
        static constexpr unsigned TCIE_MASK = 0x00000002;
        static constexpr unsigned TCIE(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIE_POS = 2;
        static constexpr unsigned HTIE_MASK = 0x00000004;
        static constexpr unsigned HTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIE_POS = 3;
        static constexpr unsigned TEIE_MASK = 0x00000008;
        static constexpr unsigned TEIE(unsigned value) { return (value << 3); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned CIRC_POS = 5;
        static constexpr unsigned CIRC_MASK = 0x00000020;
        static constexpr unsigned CIRC(unsigned value) { return (value << 5); }
        static constexpr unsigned PINC_POS = 6;
        static constexpr unsigned PINC_MASK = 0x00000040;
        static constexpr unsigned PINC(unsigned value) { return (value << 6); }
        static constexpr unsigned MINC_POS = 7;
        static constexpr unsigned MINC_MASK = 0x00000080;
        static constexpr unsigned MINC(unsigned value) { return (value << 7); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned MSIZE_POS = 10;
        static constexpr unsigned MSIZE_MASK = 0x00000c00;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 10); }
        static constexpr unsigned PL_POS = 12;
        static constexpr unsigned PL_MASK = 0x00003000;
        static constexpr unsigned PL(unsigned value) { return (value << 12); }
        static constexpr unsigned MEM2MEM_POS = 14;
        static constexpr unsigned MEM2MEM_MASK = 0x00004000;
        static constexpr unsigned MEM2MEM(unsigned value) { return (value << 14); }
    } CCR5;

    volatile union CNDTR5_T // CNDTR5: DMA channel 5 number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNDTR5_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } CNDTR5;

    volatile union CPAR5_T // CPAR5: DMA channel 5 peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPAR5_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } CPAR5;

    volatile union CMAR5_T // CMAR5: DMA channel 5 memory address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMAR5_BIT_T
        {
            unsigned MA : 32; // bits 0..31 Memory address    
        } bit;
    
        static constexpr unsigned MA_POS = 0;
        static constexpr unsigned MA_MASK = 0xffffffff;
        static constexpr unsigned MA(unsigned value) { return (value << 0); }
    } CMAR5;

    uint8_t Reserved5[4];

    volatile union CCR6_T // CCR6: DMA channel configuration register (DMA_CCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR6_BIT_T
        {
            unsigned EN      : 1; // bit 0 Channel enable
            unsigned TCIE    : 1; // bit 1 Transfer complete interrupt enable
            unsigned HTIE    : 1; // bit 2 Half Transfer interrupt enable
            unsigned TEIE    : 1; // bit 3 Transfer error interrupt enable
            unsigned DIR     : 1; // bit 4 Data transfer direction
            unsigned CIRC    : 1; // bit 5 Circular mode
            unsigned PINC    : 1; // bit 6 Peripheral increment mode
            unsigned MINC    : 1; // bit 7 Memory increment mode
            unsigned PSIZE   : 2; // bits 8..9 Peripheral size
            unsigned MSIZE   : 2; // bits 10..11 Memory size
            unsigned PL      : 2; // bits 12..13 Channel Priority level
            unsigned MEM2MEM : 1; // bit 14 Memory to memory mode
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIE_POS = 1;
        static constexpr unsigned TCIE_MASK = 0x00000002;
        static constexpr unsigned TCIE(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIE_POS = 2;
        static constexpr unsigned HTIE_MASK = 0x00000004;
        static constexpr unsigned HTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIE_POS = 3;
        static constexpr unsigned TEIE_MASK = 0x00000008;
        static constexpr unsigned TEIE(unsigned value) { return (value << 3); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned CIRC_POS = 5;
        static constexpr unsigned CIRC_MASK = 0x00000020;
        static constexpr unsigned CIRC(unsigned value) { return (value << 5); }
        static constexpr unsigned PINC_POS = 6;
        static constexpr unsigned PINC_MASK = 0x00000040;
        static constexpr unsigned PINC(unsigned value) { return (value << 6); }
        static constexpr unsigned MINC_POS = 7;
        static constexpr unsigned MINC_MASK = 0x00000080;
        static constexpr unsigned MINC(unsigned value) { return (value << 7); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned MSIZE_POS = 10;
        static constexpr unsigned MSIZE_MASK = 0x00000c00;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 10); }
        static constexpr unsigned PL_POS = 12;
        static constexpr unsigned PL_MASK = 0x00003000;
        static constexpr unsigned PL(unsigned value) { return (value << 12); }
        static constexpr unsigned MEM2MEM_POS = 14;
        static constexpr unsigned MEM2MEM_MASK = 0x00004000;
        static constexpr unsigned MEM2MEM(unsigned value) { return (value << 14); }
    } CCR6;

    volatile union CNDTR6_T // CNDTR6: DMA channel 6 number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNDTR6_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } CNDTR6;

    volatile union CPAR6_T // CPAR6: DMA channel 6 peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPAR6_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } CPAR6;

    volatile union CMAR6_T // CMAR6: DMA channel 6 memory address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMAR6_BIT_T
        {
            unsigned MA : 32; // bits 0..31 Memory address    
        } bit;
    
        static constexpr unsigned MA_POS = 0;
        static constexpr unsigned MA_MASK = 0xffffffff;
        static constexpr unsigned MA(unsigned value) { return (value << 0); }
    } CMAR6;

    uint8_t Reserved6[4];

    volatile union CCR7_T // CCR7: DMA channel configuration register (DMA_CCR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CCR7_BIT_T
        {
            unsigned EN      : 1; // bit 0 Channel enable
            unsigned TCIE    : 1; // bit 1 Transfer complete interrupt enable
            unsigned HTIE    : 1; // bit 2 Half Transfer interrupt enable
            unsigned TEIE    : 1; // bit 3 Transfer error interrupt enable
            unsigned DIR     : 1; // bit 4 Data transfer direction
            unsigned CIRC    : 1; // bit 5 Circular mode
            unsigned PINC    : 1; // bit 6 Peripheral increment mode
            unsigned MINC    : 1; // bit 7 Memory increment mode
            unsigned PSIZE   : 2; // bits 8..9 Peripheral size
            unsigned MSIZE   : 2; // bits 10..11 Memory size
            unsigned PL      : 2; // bits 12..13 Channel Priority level
            unsigned MEM2MEM : 1; // bit 14 Memory to memory mode
            unsigned         : 17; // bits 15..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned TCIE_POS = 1;
        static constexpr unsigned TCIE_MASK = 0x00000002;
        static constexpr unsigned TCIE(unsigned value) { return (value << 1); }
        static constexpr unsigned HTIE_POS = 2;
        static constexpr unsigned HTIE_MASK = 0x00000004;
        static constexpr unsigned HTIE(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIE_POS = 3;
        static constexpr unsigned TEIE_MASK = 0x00000008;
        static constexpr unsigned TEIE(unsigned value) { return (value << 3); }
        static constexpr unsigned DIR_POS = 4;
        static constexpr unsigned DIR_MASK = 0x00000010;
        static constexpr unsigned DIR(unsigned value) { return (value << 4); }
        static constexpr unsigned CIRC_POS = 5;
        static constexpr unsigned CIRC_MASK = 0x00000020;
        static constexpr unsigned CIRC(unsigned value) { return (value << 5); }
        static constexpr unsigned PINC_POS = 6;
        static constexpr unsigned PINC_MASK = 0x00000040;
        static constexpr unsigned PINC(unsigned value) { return (value << 6); }
        static constexpr unsigned MINC_POS = 7;
        static constexpr unsigned MINC_MASK = 0x00000080;
        static constexpr unsigned MINC(unsigned value) { return (value << 7); }
        static constexpr unsigned PSIZE_POS = 8;
        static constexpr unsigned PSIZE_MASK = 0x00000300;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned MSIZE_POS = 10;
        static constexpr unsigned MSIZE_MASK = 0x00000c00;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 10); }
        static constexpr unsigned PL_POS = 12;
        static constexpr unsigned PL_MASK = 0x00003000;
        static constexpr unsigned PL(unsigned value) { return (value << 12); }
        static constexpr unsigned MEM2MEM_POS = 14;
        static constexpr unsigned MEM2MEM_MASK = 0x00004000;
        static constexpr unsigned MEM2MEM(unsigned value) { return (value << 14); }
    } CCR7;

    volatile union CNDTR7_T // CNDTR7: DMA channel 7 number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CNDTR7_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } CNDTR7;

    volatile union CPAR7_T // CPAR7: DMA channel 7 peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CPAR7_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } CPAR7;

    volatile union CMAR7_T // CMAR7: DMA channel 7 memory address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CMAR7_BIT_T
        {
            unsigned MA : 32; // bits 0..31 Memory address    
        } bit;
    
        static constexpr unsigned MA_POS = 0;
        static constexpr unsigned MA_MASK = 0xffffffff;
        static constexpr unsigned MA(unsigned value) { return (value << 0); }
    } CMAR7;

}; // struct DMA1_T

static_assert(sizeof(DMA_T) == DMA_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp