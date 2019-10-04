#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DMA_T
{
    static constexpr size_t INSTANCE_SIZE = 208;
    static constexpr size_t PADDED_INSTANCE_SIZE = 208;
    static constexpr intptr_t BASE_ADDRESS_DMA1 = 0x40026000;
    static constexpr intptr_t BASE_ADDRESS_DMA2 = 0x40026400;

    static constexpr intptr_t ADDR_OFFSET_LISR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_HISR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_LIFCR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_HIFCR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_S0CR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_S0NDTR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_S0PAR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_S0M0AR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_S0M1AR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_S0FCR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_S1CR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_S1NDTR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_S1PAR = 0x30;
    static constexpr intptr_t ADDR_OFFSET_S1M0AR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_S1M1AR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_S1FCR = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_S2CR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_S2NDTR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_S2PAR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_S2M0AR = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_S2M1AR = 0x50;
    static constexpr intptr_t ADDR_OFFSET_S2FCR = 0x54;
    static constexpr intptr_t ADDR_OFFSET_S3CR = 0x58;
    static constexpr intptr_t ADDR_OFFSET_S3NDTR = 0x5c;
    static constexpr intptr_t ADDR_OFFSET_S3PAR = 0x60;
    static constexpr intptr_t ADDR_OFFSET_S3M0AR = 0x64;
    static constexpr intptr_t ADDR_OFFSET_S3M1AR = 0x68;
    static constexpr intptr_t ADDR_OFFSET_S3FCR = 0x6c;
    static constexpr intptr_t ADDR_OFFSET_S4CR = 0x70;
    static constexpr intptr_t ADDR_OFFSET_S4NDTR = 0x74;
    static constexpr intptr_t ADDR_OFFSET_S4PAR = 0x78;
    static constexpr intptr_t ADDR_OFFSET_S4M0AR = 0x7c;
    static constexpr intptr_t ADDR_OFFSET_S4M1AR = 0x80;
    static constexpr intptr_t ADDR_OFFSET_S4FCR = 0x84;
    static constexpr intptr_t ADDR_OFFSET_S5CR = 0x88;
    static constexpr intptr_t ADDR_OFFSET_S5NDTR = 0x8c;
    static constexpr intptr_t ADDR_OFFSET_S5PAR = 0x90;
    static constexpr intptr_t ADDR_OFFSET_S5M0AR = 0x94;
    static constexpr intptr_t ADDR_OFFSET_S5M1AR = 0x98;
    static constexpr intptr_t ADDR_OFFSET_S5FCR = 0x9c;
    static constexpr intptr_t ADDR_OFFSET_S6CR = 0xa0;
    static constexpr intptr_t ADDR_OFFSET_S6NDTR = 0xa4;
    static constexpr intptr_t ADDR_OFFSET_S6PAR = 0xa8;
    static constexpr intptr_t ADDR_OFFSET_S6M0AR = 0xac;
    static constexpr intptr_t ADDR_OFFSET_S6M1AR = 0xb0;
    static constexpr intptr_t ADDR_OFFSET_S6FCR = 0xb4;
    static constexpr intptr_t ADDR_OFFSET_S7CR = 0xb8;
    static constexpr intptr_t ADDR_OFFSET_S7NDTR = 0xbc;
    static constexpr intptr_t ADDR_OFFSET_S7PAR = 0xc0;
    static constexpr intptr_t ADDR_OFFSET_S7M0AR = 0xc4;
    static constexpr intptr_t ADDR_OFFSET_S7M1AR = 0xc8;
    static constexpr intptr_t ADDR_OFFSET_S7FCR = 0xcc;

    volatile union LISR_T // LISR: low interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LISR_BIT_T
        {
            unsigned FEIF0  : 1; // bit 0 Stream x FIFO error interrupt flag (x=3..0)
            unsigned        : 1; // bit 1 unused
            unsigned DMEIF0 : 1; // bit 2 Stream x direct mode error interrupt flag (x=3..0)
            unsigned TEIF0  : 1; // bit 3 Stream x transfer error interrupt flag (x=3..0)
            unsigned HTIF0  : 1; // bit 4 Stream x half transfer interrupt flag (x=3..0)
            unsigned TCIF0  : 1; // bit 5 Stream x transfer complete interrupt flag (x = 3..0)
            unsigned FEIF1  : 1; // bit 6 Stream x FIFO error interrupt flag (x=3..0)
            unsigned        : 1; // bit 7 unused
            unsigned DMEIF1 : 1; // bit 8 Stream x direct mode error interrupt flag (x=3..0)
            unsigned TEIF1  : 1; // bit 9 Stream x transfer error interrupt flag (x=3..0)
            unsigned HTIF1  : 1; // bit 10 Stream x half transfer interrupt flag (x=3..0)
            unsigned TCIF1  : 1; // bit 11 Stream x transfer complete interrupt flag (x = 3..0)
            unsigned        : 4; // bits 12..15 unused
            unsigned FEIF2  : 1; // bit 16 Stream x FIFO error interrupt flag (x=3..0)
            unsigned        : 1; // bit 17 unused
            unsigned DMEIF2 : 1; // bit 18 Stream x direct mode error interrupt flag (x=3..0)
            unsigned TEIF2  : 1; // bit 19 Stream x transfer error interrupt flag (x=3..0)
            unsigned HTIF2  : 1; // bit 20 Stream x half transfer interrupt flag (x=3..0)
            unsigned TCIF2  : 1; // bit 21 Stream x transfer complete interrupt flag (x = 3..0)
            unsigned FEIF3  : 1; // bit 22 Stream x FIFO error interrupt flag (x=3..0)
            unsigned        : 1; // bit 23 unused
            unsigned DMEIF3 : 1; // bit 24 Stream x direct mode error interrupt flag (x=3..0)
            unsigned TEIF3  : 1; // bit 25 Stream x transfer error interrupt flag (x=3..0)
            unsigned HTIF3  : 1; // bit 26 Stream x half transfer interrupt flag (x=3..0)
            unsigned TCIF3  : 1; // bit 27 Stream x transfer complete interrupt flag (x = 3..0)
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned FEIF0_POS = 0;
        static constexpr unsigned FEIF0_MASK = 0x00000001;
        static constexpr unsigned FEIF0(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIF0_POS = 2;
        static constexpr unsigned DMEIF0_MASK = 0x00000004;
        static constexpr unsigned DMEIF0(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIF0_POS = 3;
        static constexpr unsigned TEIF0_MASK = 0x00000008;
        static constexpr unsigned TEIF0(unsigned value) { return (value << 3); }
        static constexpr unsigned HTIF0_POS = 4;
        static constexpr unsigned HTIF0_MASK = 0x00000010;
        static constexpr unsigned HTIF0(unsigned value) { return (value << 4); }
        static constexpr unsigned TCIF0_POS = 5;
        static constexpr unsigned TCIF0_MASK = 0x00000020;
        static constexpr unsigned TCIF0(unsigned value) { return (value << 5); }
        static constexpr unsigned FEIF1_POS = 6;
        static constexpr unsigned FEIF1_MASK = 0x00000040;
        static constexpr unsigned FEIF1(unsigned value) { return (value << 6); }
        static constexpr unsigned DMEIF1_POS = 8;
        static constexpr unsigned DMEIF1_MASK = 0x00000100;
        static constexpr unsigned DMEIF1(unsigned value) { return (value << 8); }
        static constexpr unsigned TEIF1_POS = 9;
        static constexpr unsigned TEIF1_MASK = 0x00000200;
        static constexpr unsigned TEIF1(unsigned value) { return (value << 9); }
        static constexpr unsigned HTIF1_POS = 10;
        static constexpr unsigned HTIF1_MASK = 0x00000400;
        static constexpr unsigned HTIF1(unsigned value) { return (value << 10); }
        static constexpr unsigned TCIF1_POS = 11;
        static constexpr unsigned TCIF1_MASK = 0x00000800;
        static constexpr unsigned TCIF1(unsigned value) { return (value << 11); }
        static constexpr unsigned FEIF2_POS = 16;
        static constexpr unsigned FEIF2_MASK = 0x00010000;
        static constexpr unsigned FEIF2(unsigned value) { return (value << 16); }
        static constexpr unsigned DMEIF2_POS = 18;
        static constexpr unsigned DMEIF2_MASK = 0x00040000;
        static constexpr unsigned DMEIF2(unsigned value) { return (value << 18); }
        static constexpr unsigned TEIF2_POS = 19;
        static constexpr unsigned TEIF2_MASK = 0x00080000;
        static constexpr unsigned TEIF2(unsigned value) { return (value << 19); }
        static constexpr unsigned HTIF2_POS = 20;
        static constexpr unsigned HTIF2_MASK = 0x00100000;
        static constexpr unsigned HTIF2(unsigned value) { return (value << 20); }
        static constexpr unsigned TCIF2_POS = 21;
        static constexpr unsigned TCIF2_MASK = 0x00200000;
        static constexpr unsigned TCIF2(unsigned value) { return (value << 21); }
        static constexpr unsigned FEIF3_POS = 22;
        static constexpr unsigned FEIF3_MASK = 0x00400000;
        static constexpr unsigned FEIF3(unsigned value) { return (value << 22); }
        static constexpr unsigned DMEIF3_POS = 24;
        static constexpr unsigned DMEIF3_MASK = 0x01000000;
        static constexpr unsigned DMEIF3(unsigned value) { return (value << 24); }
        static constexpr unsigned TEIF3_POS = 25;
        static constexpr unsigned TEIF3_MASK = 0x02000000;
        static constexpr unsigned TEIF3(unsigned value) { return (value << 25); }
        static constexpr unsigned HTIF3_POS = 26;
        static constexpr unsigned HTIF3_MASK = 0x04000000;
        static constexpr unsigned HTIF3(unsigned value) { return (value << 26); }
        static constexpr unsigned TCIF3_POS = 27;
        static constexpr unsigned TCIF3_MASK = 0x08000000;
        static constexpr unsigned TCIF3(unsigned value) { return (value << 27); }
    } LISR;

    volatile union HISR_T // HISR: high interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HISR_BIT_T
        {
            unsigned FEIF4  : 1; // bit 0 Stream x FIFO error interrupt flag (x=7..4)
            unsigned        : 1; // bit 1 unused
            unsigned DMEIF4 : 1; // bit 2 Stream x direct mode error interrupt flag (x=7..4)
            unsigned TEIF4  : 1; // bit 3 Stream x transfer error interrupt flag (x=7..4)
            unsigned HTIF4  : 1; // bit 4 Stream x half transfer interrupt flag (x=7..4)
            unsigned TCIF4  : 1; // bit 5 Stream x transfer complete interrupt flag (x=7..4)
            unsigned FEIF5  : 1; // bit 6 Stream x FIFO error interrupt flag (x=7..4)
            unsigned        : 1; // bit 7 unused
            unsigned DMEIF5 : 1; // bit 8 Stream x direct mode error interrupt flag (x=7..4)
            unsigned TEIF5  : 1; // bit 9 Stream x transfer error interrupt flag (x=7..4)
            unsigned HTIF5  : 1; // bit 10 Stream x half transfer interrupt flag (x=7..4)
            unsigned TCIF5  : 1; // bit 11 Stream x transfer complete interrupt flag (x=7..4)
            unsigned        : 4; // bits 12..15 unused
            unsigned FEIF6  : 1; // bit 16 Stream x FIFO error interrupt flag (x=7..4)
            unsigned        : 1; // bit 17 unused
            unsigned DMEIF6 : 1; // bit 18 Stream x direct mode error interrupt flag (x=7..4)
            unsigned TEIF6  : 1; // bit 19 Stream x transfer error interrupt flag (x=7..4)
            unsigned HTIF6  : 1; // bit 20 Stream x half transfer interrupt flag (x=7..4)
            unsigned TCIF6  : 1; // bit 21 Stream x transfer complete interrupt flag (x=7..4)
            unsigned FEIF7  : 1; // bit 22 Stream x FIFO error interrupt flag (x=7..4)
            unsigned        : 1; // bit 23 unused
            unsigned DMEIF7 : 1; // bit 24 Stream x direct mode error interrupt flag (x=7..4)
            unsigned TEIF7  : 1; // bit 25 Stream x transfer error interrupt flag (x=7..4)
            unsigned HTIF7  : 1; // bit 26 Stream x half transfer interrupt flag (x=7..4)
            unsigned TCIF7  : 1; // bit 27 Stream x transfer complete interrupt flag (x=7..4)
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned FEIF4_POS = 0;
        static constexpr unsigned FEIF4_MASK = 0x00000001;
        static constexpr unsigned FEIF4(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIF4_POS = 2;
        static constexpr unsigned DMEIF4_MASK = 0x00000004;
        static constexpr unsigned DMEIF4(unsigned value) { return (value << 2); }
        static constexpr unsigned TEIF4_POS = 3;
        static constexpr unsigned TEIF4_MASK = 0x00000008;
        static constexpr unsigned TEIF4(unsigned value) { return (value << 3); }
        static constexpr unsigned HTIF4_POS = 4;
        static constexpr unsigned HTIF4_MASK = 0x00000010;
        static constexpr unsigned HTIF4(unsigned value) { return (value << 4); }
        static constexpr unsigned TCIF4_POS = 5;
        static constexpr unsigned TCIF4_MASK = 0x00000020;
        static constexpr unsigned TCIF4(unsigned value) { return (value << 5); }
        static constexpr unsigned FEIF5_POS = 6;
        static constexpr unsigned FEIF5_MASK = 0x00000040;
        static constexpr unsigned FEIF5(unsigned value) { return (value << 6); }
        static constexpr unsigned DMEIF5_POS = 8;
        static constexpr unsigned DMEIF5_MASK = 0x00000100;
        static constexpr unsigned DMEIF5(unsigned value) { return (value << 8); }
        static constexpr unsigned TEIF5_POS = 9;
        static constexpr unsigned TEIF5_MASK = 0x00000200;
        static constexpr unsigned TEIF5(unsigned value) { return (value << 9); }
        static constexpr unsigned HTIF5_POS = 10;
        static constexpr unsigned HTIF5_MASK = 0x00000400;
        static constexpr unsigned HTIF5(unsigned value) { return (value << 10); }
        static constexpr unsigned TCIF5_POS = 11;
        static constexpr unsigned TCIF5_MASK = 0x00000800;
        static constexpr unsigned TCIF5(unsigned value) { return (value << 11); }
        static constexpr unsigned FEIF6_POS = 16;
        static constexpr unsigned FEIF6_MASK = 0x00010000;
        static constexpr unsigned FEIF6(unsigned value) { return (value << 16); }
        static constexpr unsigned DMEIF6_POS = 18;
        static constexpr unsigned DMEIF6_MASK = 0x00040000;
        static constexpr unsigned DMEIF6(unsigned value) { return (value << 18); }
        static constexpr unsigned TEIF6_POS = 19;
        static constexpr unsigned TEIF6_MASK = 0x00080000;
        static constexpr unsigned TEIF6(unsigned value) { return (value << 19); }
        static constexpr unsigned HTIF6_POS = 20;
        static constexpr unsigned HTIF6_MASK = 0x00100000;
        static constexpr unsigned HTIF6(unsigned value) { return (value << 20); }
        static constexpr unsigned TCIF6_POS = 21;
        static constexpr unsigned TCIF6_MASK = 0x00200000;
        static constexpr unsigned TCIF6(unsigned value) { return (value << 21); }
        static constexpr unsigned FEIF7_POS = 22;
        static constexpr unsigned FEIF7_MASK = 0x00400000;
        static constexpr unsigned FEIF7(unsigned value) { return (value << 22); }
        static constexpr unsigned DMEIF7_POS = 24;
        static constexpr unsigned DMEIF7_MASK = 0x01000000;
        static constexpr unsigned DMEIF7(unsigned value) { return (value << 24); }
        static constexpr unsigned TEIF7_POS = 25;
        static constexpr unsigned TEIF7_MASK = 0x02000000;
        static constexpr unsigned TEIF7(unsigned value) { return (value << 25); }
        static constexpr unsigned HTIF7_POS = 26;
        static constexpr unsigned HTIF7_MASK = 0x04000000;
        static constexpr unsigned HTIF7(unsigned value) { return (value << 26); }
        static constexpr unsigned TCIF7_POS = 27;
        static constexpr unsigned TCIF7_MASK = 0x08000000;
        static constexpr unsigned TCIF7(unsigned value) { return (value << 27); }
    } HISR;

    volatile union LIFCR_T // LIFCR: low interrupt flag clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) LIFCR_BIT_T
        {
            unsigned CFEIF0  : 1; // bit 0 Stream x clear FIFO error interrupt flag (x = 3..0)
            unsigned         : 1; // bit 1 unused
            unsigned CDMEIF0 : 1; // bit 2 Stream x clear direct mode error interrupt flag (x = 3..0)
            unsigned CTEIF0  : 1; // bit 3 Stream x clear transfer error interrupt flag (x = 3..0)
            unsigned CHTIF0  : 1; // bit 4 Stream x clear half transfer interrupt flag (x = 3..0)
            unsigned CTCIF0  : 1; // bit 5 Stream x clear transfer complete interrupt flag (x = 3..0)
            unsigned CFEIF1  : 1; // bit 6 Stream x clear FIFO error interrupt flag (x = 3..0)
            unsigned         : 1; // bit 7 unused
            unsigned CDMEIF1 : 1; // bit 8 Stream x clear direct mode error interrupt flag (x = 3..0)
            unsigned CTEIF1  : 1; // bit 9 Stream x clear transfer error interrupt flag (x = 3..0)
            unsigned CHTIF1  : 1; // bit 10 Stream x clear half transfer interrupt flag (x = 3..0)
            unsigned CTCIF1  : 1; // bit 11 Stream x clear transfer complete interrupt flag (x = 3..0)
            unsigned         : 4; // bits 12..15 unused
            unsigned CFEIF2  : 1; // bit 16 Stream x clear FIFO error interrupt flag (x = 3..0)
            unsigned         : 1; // bit 17 unused
            unsigned CDMEIF2 : 1; // bit 18 Stream x clear direct mode error interrupt flag (x = 3..0)
            unsigned CTEIF2  : 1; // bit 19 Stream x clear transfer error interrupt flag (x = 3..0)
            unsigned CHTIF2  : 1; // bit 20 Stream x clear half transfer interrupt flag (x = 3..0)
            unsigned CTCIF2  : 1; // bit 21 Stream x clear transfer complete interrupt flag (x = 3..0)
            unsigned CFEIF3  : 1; // bit 22 Stream x clear FIFO error interrupt flag (x = 3..0)
            unsigned         : 1; // bit 23 unused
            unsigned CDMEIF3 : 1; // bit 24 Stream x clear direct mode error interrupt flag (x = 3..0)
            unsigned CTEIF3  : 1; // bit 25 Stream x clear transfer error interrupt flag (x = 3..0)
            unsigned CHTIF3  : 1; // bit 26 Stream x clear half transfer interrupt flag (x = 3..0)
            unsigned CTCIF3  : 1; // bit 27 Stream x clear transfer complete interrupt flag (x = 3..0)
            unsigned         : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned CFEIF0_POS = 0;
        static constexpr unsigned CFEIF0_MASK = 0x00000001;
        static constexpr unsigned CFEIF0(unsigned value) { return (value << 0); }
        static constexpr unsigned CDMEIF0_POS = 2;
        static constexpr unsigned CDMEIF0_MASK = 0x00000004;
        static constexpr unsigned CDMEIF0(unsigned value) { return (value << 2); }
        static constexpr unsigned CTEIF0_POS = 3;
        static constexpr unsigned CTEIF0_MASK = 0x00000008;
        static constexpr unsigned CTEIF0(unsigned value) { return (value << 3); }
        static constexpr unsigned CHTIF0_POS = 4;
        static constexpr unsigned CHTIF0_MASK = 0x00000010;
        static constexpr unsigned CHTIF0(unsigned value) { return (value << 4); }
        static constexpr unsigned CTCIF0_POS = 5;
        static constexpr unsigned CTCIF0_MASK = 0x00000020;
        static constexpr unsigned CTCIF0(unsigned value) { return (value << 5); }
        static constexpr unsigned CFEIF1_POS = 6;
        static constexpr unsigned CFEIF1_MASK = 0x00000040;
        static constexpr unsigned CFEIF1(unsigned value) { return (value << 6); }
        static constexpr unsigned CDMEIF1_POS = 8;
        static constexpr unsigned CDMEIF1_MASK = 0x00000100;
        static constexpr unsigned CDMEIF1(unsigned value) { return (value << 8); }
        static constexpr unsigned CTEIF1_POS = 9;
        static constexpr unsigned CTEIF1_MASK = 0x00000200;
        static constexpr unsigned CTEIF1(unsigned value) { return (value << 9); }
        static constexpr unsigned CHTIF1_POS = 10;
        static constexpr unsigned CHTIF1_MASK = 0x00000400;
        static constexpr unsigned CHTIF1(unsigned value) { return (value << 10); }
        static constexpr unsigned CTCIF1_POS = 11;
        static constexpr unsigned CTCIF1_MASK = 0x00000800;
        static constexpr unsigned CTCIF1(unsigned value) { return (value << 11); }
        static constexpr unsigned CFEIF2_POS = 16;
        static constexpr unsigned CFEIF2_MASK = 0x00010000;
        static constexpr unsigned CFEIF2(unsigned value) { return (value << 16); }
        static constexpr unsigned CDMEIF2_POS = 18;
        static constexpr unsigned CDMEIF2_MASK = 0x00040000;
        static constexpr unsigned CDMEIF2(unsigned value) { return (value << 18); }
        static constexpr unsigned CTEIF2_POS = 19;
        static constexpr unsigned CTEIF2_MASK = 0x00080000;
        static constexpr unsigned CTEIF2(unsigned value) { return (value << 19); }
        static constexpr unsigned CHTIF2_POS = 20;
        static constexpr unsigned CHTIF2_MASK = 0x00100000;
        static constexpr unsigned CHTIF2(unsigned value) { return (value << 20); }
        static constexpr unsigned CTCIF2_POS = 21;
        static constexpr unsigned CTCIF2_MASK = 0x00200000;
        static constexpr unsigned CTCIF2(unsigned value) { return (value << 21); }
        static constexpr unsigned CFEIF3_POS = 22;
        static constexpr unsigned CFEIF3_MASK = 0x00400000;
        static constexpr unsigned CFEIF3(unsigned value) { return (value << 22); }
        static constexpr unsigned CDMEIF3_POS = 24;
        static constexpr unsigned CDMEIF3_MASK = 0x01000000;
        static constexpr unsigned CDMEIF3(unsigned value) { return (value << 24); }
        static constexpr unsigned CTEIF3_POS = 25;
        static constexpr unsigned CTEIF3_MASK = 0x02000000;
        static constexpr unsigned CTEIF3(unsigned value) { return (value << 25); }
        static constexpr unsigned CHTIF3_POS = 26;
        static constexpr unsigned CHTIF3_MASK = 0x04000000;
        static constexpr unsigned CHTIF3(unsigned value) { return (value << 26); }
        static constexpr unsigned CTCIF3_POS = 27;
        static constexpr unsigned CTCIF3_MASK = 0x08000000;
        static constexpr unsigned CTCIF3(unsigned value) { return (value << 27); }
    } LIFCR;

    volatile union HIFCR_T // HIFCR: high interrupt flag clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) HIFCR_BIT_T
        {
            unsigned CFEIF4  : 1; // bit 0 Stream x clear FIFO error interrupt flag (x = 7..4)
            unsigned         : 1; // bit 1 unused
            unsigned CDMEIF4 : 1; // bit 2 Stream x clear direct mode error interrupt flag (x = 7..4)
            unsigned CTEIF4  : 1; // bit 3 Stream x clear transfer error interrupt flag (x = 7..4)
            unsigned CHTIF4  : 1; // bit 4 Stream x clear half transfer interrupt flag (x = 7..4)
            unsigned CTCIF4  : 1; // bit 5 Stream x clear transfer complete interrupt flag (x = 7..4)
            unsigned CFEIF5  : 1; // bit 6 Stream x clear FIFO error interrupt flag (x = 7..4)
            unsigned         : 1; // bit 7 unused
            unsigned CDMEIF5 : 1; // bit 8 Stream x clear direct mode error interrupt flag (x = 7..4)
            unsigned CTEIF5  : 1; // bit 9 Stream x clear transfer error interrupt flag (x = 7..4)
            unsigned CHTIF5  : 1; // bit 10 Stream x clear half transfer interrupt flag (x = 7..4)
            unsigned CTCIF5  : 1; // bit 11 Stream x clear transfer complete interrupt flag (x = 7..4)
            unsigned         : 4; // bits 12..15 unused
            unsigned CFEIF6  : 1; // bit 16 Stream x clear FIFO error interrupt flag (x = 7..4)
            unsigned         : 1; // bit 17 unused
            unsigned CDMEIF6 : 1; // bit 18 Stream x clear direct mode error interrupt flag (x = 7..4)
            unsigned CTEIF6  : 1; // bit 19 Stream x clear transfer error interrupt flag (x = 7..4)
            unsigned CHTIF6  : 1; // bit 20 Stream x clear half transfer interrupt flag (x = 7..4)
            unsigned CTCIF6  : 1; // bit 21 Stream x clear transfer complete interrupt flag (x = 7..4)
            unsigned CFEIF7  : 1; // bit 22 Stream x clear FIFO error interrupt flag (x = 7..4)
            unsigned         : 1; // bit 23 unused
            unsigned CDMEIF7 : 1; // bit 24 Stream x clear direct mode error interrupt flag (x = 7..4)
            unsigned CTEIF7  : 1; // bit 25 Stream x clear transfer error interrupt flag (x = 7..4)
            unsigned CHTIF7  : 1; // bit 26 Stream x clear half transfer interrupt flag (x = 7..4)
            unsigned CTCIF7  : 1; // bit 27 Stream x clear transfer complete interrupt flag (x = 7..4)
            unsigned         : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned CFEIF4_POS = 0;
        static constexpr unsigned CFEIF4_MASK = 0x00000001;
        static constexpr unsigned CFEIF4(unsigned value) { return (value << 0); }
        static constexpr unsigned CDMEIF4_POS = 2;
        static constexpr unsigned CDMEIF4_MASK = 0x00000004;
        static constexpr unsigned CDMEIF4(unsigned value) { return (value << 2); }
        static constexpr unsigned CTEIF4_POS = 3;
        static constexpr unsigned CTEIF4_MASK = 0x00000008;
        static constexpr unsigned CTEIF4(unsigned value) { return (value << 3); }
        static constexpr unsigned CHTIF4_POS = 4;
        static constexpr unsigned CHTIF4_MASK = 0x00000010;
        static constexpr unsigned CHTIF4(unsigned value) { return (value << 4); }
        static constexpr unsigned CTCIF4_POS = 5;
        static constexpr unsigned CTCIF4_MASK = 0x00000020;
        static constexpr unsigned CTCIF4(unsigned value) { return (value << 5); }
        static constexpr unsigned CFEIF5_POS = 6;
        static constexpr unsigned CFEIF5_MASK = 0x00000040;
        static constexpr unsigned CFEIF5(unsigned value) { return (value << 6); }
        static constexpr unsigned CDMEIF5_POS = 8;
        static constexpr unsigned CDMEIF5_MASK = 0x00000100;
        static constexpr unsigned CDMEIF5(unsigned value) { return (value << 8); }
        static constexpr unsigned CTEIF5_POS = 9;
        static constexpr unsigned CTEIF5_MASK = 0x00000200;
        static constexpr unsigned CTEIF5(unsigned value) { return (value << 9); }
        static constexpr unsigned CHTIF5_POS = 10;
        static constexpr unsigned CHTIF5_MASK = 0x00000400;
        static constexpr unsigned CHTIF5(unsigned value) { return (value << 10); }
        static constexpr unsigned CTCIF5_POS = 11;
        static constexpr unsigned CTCIF5_MASK = 0x00000800;
        static constexpr unsigned CTCIF5(unsigned value) { return (value << 11); }
        static constexpr unsigned CFEIF6_POS = 16;
        static constexpr unsigned CFEIF6_MASK = 0x00010000;
        static constexpr unsigned CFEIF6(unsigned value) { return (value << 16); }
        static constexpr unsigned CDMEIF6_POS = 18;
        static constexpr unsigned CDMEIF6_MASK = 0x00040000;
        static constexpr unsigned CDMEIF6(unsigned value) { return (value << 18); }
        static constexpr unsigned CTEIF6_POS = 19;
        static constexpr unsigned CTEIF6_MASK = 0x00080000;
        static constexpr unsigned CTEIF6(unsigned value) { return (value << 19); }
        static constexpr unsigned CHTIF6_POS = 20;
        static constexpr unsigned CHTIF6_MASK = 0x00100000;
        static constexpr unsigned CHTIF6(unsigned value) { return (value << 20); }
        static constexpr unsigned CTCIF6_POS = 21;
        static constexpr unsigned CTCIF6_MASK = 0x00200000;
        static constexpr unsigned CTCIF6(unsigned value) { return (value << 21); }
        static constexpr unsigned CFEIF7_POS = 22;
        static constexpr unsigned CFEIF7_MASK = 0x00400000;
        static constexpr unsigned CFEIF7(unsigned value) { return (value << 22); }
        static constexpr unsigned CDMEIF7_POS = 24;
        static constexpr unsigned CDMEIF7_MASK = 0x01000000;
        static constexpr unsigned CDMEIF7(unsigned value) { return (value << 24); }
        static constexpr unsigned CTEIF7_POS = 25;
        static constexpr unsigned CTEIF7_MASK = 0x02000000;
        static constexpr unsigned CTEIF7(unsigned value) { return (value << 25); }
        static constexpr unsigned CHTIF7_POS = 26;
        static constexpr unsigned CHTIF7_MASK = 0x04000000;
        static constexpr unsigned CHTIF7(unsigned value) { return (value << 26); }
        static constexpr unsigned CTCIF7_POS = 27;
        static constexpr unsigned CTCIF7_MASK = 0x08000000;
        static constexpr unsigned CTCIF7(unsigned value) { return (value << 27); }
    } HIFCR;

    volatile union S0CR_T // S0CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S0CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned        : 1; // bit 20 unused
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S0CR;

    volatile union S0NDTR_T // S0NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S0NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S0NDTR;

    volatile union S0PAR_T // S0PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S0PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S0PAR;

    volatile union S0M0AR_T // S0M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S0M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S0M0AR;

    volatile union S0M1AR_T // S0M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S0M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S0M1AR;

    volatile union S0FCR_T // S0FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S0FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S0FCR;

    volatile union S1CR_T // S1CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S1CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned ACK    : 1; // bit 20 ACK
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned ACK_POS = 20;
        static constexpr unsigned ACK_MASK = 0x00100000;
        static constexpr unsigned ACK(unsigned value) { return (value << 20); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S1CR;

    volatile union S1NDTR_T // S1NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S1NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S1NDTR;

    volatile union S1PAR_T // S1PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S1PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S1PAR;

    volatile union S1M0AR_T // S1M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S1M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S1M0AR;

    volatile union S1M1AR_T // S1M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S1M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S1M1AR;

    volatile union S1FCR_T // S1FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S1FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S1FCR;

    volatile union S2CR_T // S2CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S2CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned ACK    : 1; // bit 20 ACK
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned ACK_POS = 20;
        static constexpr unsigned ACK_MASK = 0x00100000;
        static constexpr unsigned ACK(unsigned value) { return (value << 20); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S2CR;

    volatile union S2NDTR_T // S2NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S2NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S2NDTR;

    volatile union S2PAR_T // S2PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S2PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S2PAR;

    volatile union S2M0AR_T // S2M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S2M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S2M0AR;

    volatile union S2M1AR_T // S2M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S2M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S2M1AR;

    volatile union S2FCR_T // S2FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S2FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S2FCR;

    volatile union S3CR_T // S3CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S3CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned ACK    : 1; // bit 20 ACK
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned ACK_POS = 20;
        static constexpr unsigned ACK_MASK = 0x00100000;
        static constexpr unsigned ACK(unsigned value) { return (value << 20); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S3CR;

    volatile union S3NDTR_T // S3NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S3NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S3NDTR;

    volatile union S3PAR_T // S3PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S3PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S3PAR;

    volatile union S3M0AR_T // S3M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S3M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S3M0AR;

    volatile union S3M1AR_T // S3M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S3M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S3M1AR;

    volatile union S3FCR_T // S3FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S3FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S3FCR;

    volatile union S4CR_T // S4CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S4CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned ACK    : 1; // bit 20 ACK
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned ACK_POS = 20;
        static constexpr unsigned ACK_MASK = 0x00100000;
        static constexpr unsigned ACK(unsigned value) { return (value << 20); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S4CR;

    volatile union S4NDTR_T // S4NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S4NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S4NDTR;

    volatile union S4PAR_T // S4PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S4PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S4PAR;

    volatile union S4M0AR_T // S4M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S4M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S4M0AR;

    volatile union S4M1AR_T // S4M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S4M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S4M1AR;

    volatile union S4FCR_T // S4FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S4FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S4FCR;

    volatile union S5CR_T // S5CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S5CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned ACK    : 1; // bit 20 ACK
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned ACK_POS = 20;
        static constexpr unsigned ACK_MASK = 0x00100000;
        static constexpr unsigned ACK(unsigned value) { return (value << 20); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S5CR;

    volatile union S5NDTR_T // S5NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S5NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S5NDTR;

    volatile union S5PAR_T // S5PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S5PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S5PAR;

    volatile union S5M0AR_T // S5M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S5M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S5M0AR;

    volatile union S5M1AR_T // S5M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S5M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S5M1AR;

    volatile union S5FCR_T // S5FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S5FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S5FCR;

    volatile union S6CR_T // S6CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S6CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned ACK    : 1; // bit 20 ACK
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned ACK_POS = 20;
        static constexpr unsigned ACK_MASK = 0x00100000;
        static constexpr unsigned ACK(unsigned value) { return (value << 20); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S6CR;

    volatile union S6NDTR_T // S6NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S6NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S6NDTR;

    volatile union S6PAR_T // S6PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S6PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S6PAR;

    volatile union S6M0AR_T // S6M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S6M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S6M0AR;

    volatile union S6M1AR_T // S6M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S6M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S6M1AR;

    volatile union S6FCR_T // S6FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S6FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S6FCR;

    volatile union S7CR_T // S7CR: stream x configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S7CR_BIT_T
        {
            unsigned EN     : 1; // bit 0 Stream enable / flag stream ready when read low
            unsigned DMEIE  : 1; // bit 1 Direct mode error interrupt enable
            unsigned TEIE   : 1; // bit 2 Transfer error interrupt enable
            unsigned HTIE   : 1; // bit 3 Half transfer interrupt enable
            unsigned TCIE   : 1; // bit 4 Transfer complete interrupt enable
            unsigned PFCTRL : 1; // bit 5 Peripheral flow controller
            unsigned DIR    : 2; // bits 6..7 Data transfer direction
            unsigned CIRC   : 1; // bit 8 Circular mode
            unsigned PINC   : 1; // bit 9 Peripheral increment mode
            unsigned MINC   : 1; // bit 10 Memory increment mode
            unsigned PSIZE  : 2; // bits 11..12 Peripheral data size
            unsigned MSIZE  : 2; // bits 13..14 Memory data size
            unsigned PINCOS : 1; // bit 15 Peripheral increment offset size
            unsigned PL     : 2; // bits 16..17 Priority level
            unsigned DBM    : 1; // bit 18 Double buffer mode
            unsigned CT     : 1; // bit 19 Current target (only in double buffer mode)
            unsigned ACK    : 1; // bit 20 ACK
            unsigned PBURST : 2; // bits 21..22 Peripheral burst transfer configuration
            unsigned MBURST : 2; // bits 23..24 Memory burst transfer configuration
            unsigned CHSEL  : 3; // bits 25..27 Channel selection
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned EN_POS = 0;
        static constexpr unsigned EN_MASK = 0x00000001;
        static constexpr unsigned EN(unsigned value) { return (value << 0); }
        static constexpr unsigned DMEIE_POS = 1;
        static constexpr unsigned DMEIE_MASK = 0x00000002;
        static constexpr unsigned DMEIE(unsigned value) { return (value << 1); }
        static constexpr unsigned TEIE_POS = 2;
        static constexpr unsigned TEIE_MASK = 0x00000004;
        static constexpr unsigned TEIE(unsigned value) { return (value << 2); }
        static constexpr unsigned HTIE_POS = 3;
        static constexpr unsigned HTIE_MASK = 0x00000008;
        static constexpr unsigned HTIE(unsigned value) { return (value << 3); }
        static constexpr unsigned TCIE_POS = 4;
        static constexpr unsigned TCIE_MASK = 0x00000010;
        static constexpr unsigned TCIE(unsigned value) { return (value << 4); }
        static constexpr unsigned PFCTRL_POS = 5;
        static constexpr unsigned PFCTRL_MASK = 0x00000020;
        static constexpr unsigned PFCTRL(unsigned value) { return (value << 5); }
        static constexpr unsigned DIR_POS = 6;
        static constexpr unsigned DIR_MASK = 0x000000c0;
        static constexpr unsigned DIR(unsigned value) { return (value << 6); }
        static constexpr unsigned CIRC_POS = 8;
        static constexpr unsigned CIRC_MASK = 0x00000100;
        static constexpr unsigned CIRC(unsigned value) { return (value << 8); }
        static constexpr unsigned PINC_POS = 9;
        static constexpr unsigned PINC_MASK = 0x00000200;
        static constexpr unsigned PINC(unsigned value) { return (value << 9); }
        static constexpr unsigned MINC_POS = 10;
        static constexpr unsigned MINC_MASK = 0x00000400;
        static constexpr unsigned MINC(unsigned value) { return (value << 10); }
        static constexpr unsigned PSIZE_POS = 11;
        static constexpr unsigned PSIZE_MASK = 0x00001800;
        static constexpr unsigned PSIZE(unsigned value) { return (value << 11); }
        static constexpr unsigned MSIZE_POS = 13;
        static constexpr unsigned MSIZE_MASK = 0x00006000;
        static constexpr unsigned MSIZE(unsigned value) { return (value << 13); }
        static constexpr unsigned PINCOS_POS = 15;
        static constexpr unsigned PINCOS_MASK = 0x00008000;
        static constexpr unsigned PINCOS(unsigned value) { return (value << 15); }
        static constexpr unsigned PL_POS = 16;
        static constexpr unsigned PL_MASK = 0x00030000;
        static constexpr unsigned PL(unsigned value) { return (value << 16); }
        static constexpr unsigned DBM_POS = 18;
        static constexpr unsigned DBM_MASK = 0x00040000;
        static constexpr unsigned DBM(unsigned value) { return (value << 18); }
        static constexpr unsigned CT_POS = 19;
        static constexpr unsigned CT_MASK = 0x00080000;
        static constexpr unsigned CT(unsigned value) { return (value << 19); }
        static constexpr unsigned ACK_POS = 20;
        static constexpr unsigned ACK_MASK = 0x00100000;
        static constexpr unsigned ACK(unsigned value) { return (value << 20); }
        static constexpr unsigned PBURST_POS = 21;
        static constexpr unsigned PBURST_MASK = 0x00600000;
        static constexpr unsigned PBURST(unsigned value) { return (value << 21); }
        static constexpr unsigned MBURST_POS = 23;
        static constexpr unsigned MBURST_MASK = 0x01800000;
        static constexpr unsigned MBURST(unsigned value) { return (value << 23); }
        static constexpr unsigned CHSEL_POS = 25;
        static constexpr unsigned CHSEL_MASK = 0x0e000000;
        static constexpr unsigned CHSEL(unsigned value) { return (value << 25); }
    } S7CR;

    volatile union S7NDTR_T // S7NDTR: stream x number of data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S7NDTR_BIT_T
        {
            unsigned NDT : 16; // bits 0..15 Number of data items to transfer
            unsigned     : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned NDT_POS = 0;
        static constexpr unsigned NDT_MASK = 0x0000ffff;
        static constexpr unsigned NDT(unsigned value) { return (value << 0); }
    } S7NDTR;

    volatile union S7PAR_T // S7PAR: stream x peripheral address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S7PAR_BIT_T
        {
            unsigned PA : 32; // bits 0..31 Peripheral address    
        } bit;
    
        static constexpr unsigned PA_POS = 0;
        static constexpr unsigned PA_MASK = 0xffffffff;
        static constexpr unsigned PA(unsigned value) { return (value << 0); }
    } S7PAR;

    volatile union S7M0AR_T // S7M0AR: stream x memory 0 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S7M0AR_BIT_T
        {
            unsigned M0A : 32; // bits 0..31 Memory 0 address    
        } bit;
    
        static constexpr unsigned M0A_POS = 0;
        static constexpr unsigned M0A_MASK = 0xffffffff;
        static constexpr unsigned M0A(unsigned value) { return (value << 0); }
    } S7M0AR;

    volatile union S7M1AR_T // S7M1AR: stream x memory 1 address register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S7M1AR_BIT_T
        {
            unsigned M1A : 32; // bits 0..31 Memory 1 address (used in case of Double buffer mode)    
        } bit;
    
        static constexpr unsigned M1A_POS = 0;
        static constexpr unsigned M1A_MASK = 0xffffffff;
        static constexpr unsigned M1A(unsigned value) { return (value << 0); }
    } S7M1AR;

    volatile union S7FCR_T // S7FCR: stream x FIFO control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) S7FCR_BIT_T
        {
            unsigned FTH   : 2; // bits 0..1 FIFO threshold selection
            unsigned DMDIS : 1; // bit 2 Direct mode disable
            unsigned FS    : 3; // bits 3..5 FIFO status
            unsigned       : 1; // bit 6 unused
            unsigned FEIE  : 1; // bit 7 FIFO error interrupt enable
            unsigned       : 24; // bits 8..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000003;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned DMDIS_POS = 2;
        static constexpr unsigned DMDIS_MASK = 0x00000004;
        static constexpr unsigned DMDIS(unsigned value) { return (value << 2); }
        static constexpr unsigned FS_POS = 3;
        static constexpr unsigned FS_MASK = 0x00000038;
        static constexpr unsigned FS(unsigned value) { return (value << 3); }
        static constexpr unsigned FEIE_POS = 7;
        static constexpr unsigned FEIE_MASK = 0x00000080;
        static constexpr unsigned FEIE(unsigned value) { return (value << 7); }
    } S7FCR;

}; // struct DMA1_T

static_assert(sizeof(DMA_T) == DMA_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp