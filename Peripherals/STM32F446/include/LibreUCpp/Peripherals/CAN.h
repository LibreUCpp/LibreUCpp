#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CAN_T
{
    static constexpr size_t INSTANCE_SIZE = 800;
    static constexpr intptr_t BASE_ADDRESS_CAN1 = 0x40006400;
    static constexpr intptr_t BASE_ADDRESS_CAN2 = 0x40006800;

    static constexpr intptr_t ADDR_OFFSET_MCR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_MSR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_TSR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_RF0R = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_RF1R = 0x10;
    static constexpr intptr_t ADDR_OFFSET_IER = 0x14;
    static constexpr intptr_t ADDR_OFFSET_ESR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_BTR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_TI0R = 0x180;
    static constexpr intptr_t ADDR_OFFSET_TDT0R = 0x184;
    static constexpr intptr_t ADDR_OFFSET_TDL0R = 0x188;
    static constexpr intptr_t ADDR_OFFSET_TDH0R = 0x18c;
    static constexpr intptr_t ADDR_OFFSET_TI1R = 0x190;
    static constexpr intptr_t ADDR_OFFSET_TDT1R = 0x194;
    static constexpr intptr_t ADDR_OFFSET_TDL1R = 0x198;
    static constexpr intptr_t ADDR_OFFSET_TDH1R = 0x19c;
    static constexpr intptr_t ADDR_OFFSET_TI2R = 0x1a0;
    static constexpr intptr_t ADDR_OFFSET_TDT2R = 0x1a4;
    static constexpr intptr_t ADDR_OFFSET_TDL2R = 0x1a8;
    static constexpr intptr_t ADDR_OFFSET_TDH2R = 0x1ac;
    static constexpr intptr_t ADDR_OFFSET_RI0R = 0x1b0;
    static constexpr intptr_t ADDR_OFFSET_RDT0R = 0x1b4;
    static constexpr intptr_t ADDR_OFFSET_RDL0R = 0x1b8;
    static constexpr intptr_t ADDR_OFFSET_RDH0R = 0x1bc;
    static constexpr intptr_t ADDR_OFFSET_RI1R = 0x1c0;
    static constexpr intptr_t ADDR_OFFSET_RDT1R = 0x1c4;
    static constexpr intptr_t ADDR_OFFSET_RDL1R = 0x1c8;
    static constexpr intptr_t ADDR_OFFSET_RDH1R = 0x1cc;
    static constexpr intptr_t ADDR_OFFSET_FMR = 0x200;
    static constexpr intptr_t ADDR_OFFSET_FM1R = 0x204;
    static constexpr intptr_t ADDR_OFFSET_FS1R = 0x20c;
    static constexpr intptr_t ADDR_OFFSET_FFA1R = 0x214;
    static constexpr intptr_t ADDR_OFFSET_FA1R = 0x21c;
    static constexpr intptr_t ADDR_OFFSET_F0R1 = 0x240;
    static constexpr intptr_t ADDR_OFFSET_F0R2 = 0x244;
    static constexpr intptr_t ADDR_OFFSET_F1R1 = 0x248;
    static constexpr intptr_t ADDR_OFFSET_F1R2 = 0x24c;
    static constexpr intptr_t ADDR_OFFSET_F2R1 = 0x250;
    static constexpr intptr_t ADDR_OFFSET_F2R2 = 0x254;
    static constexpr intptr_t ADDR_OFFSET_F3R1 = 0x258;
    static constexpr intptr_t ADDR_OFFSET_F3R2 = 0x25c;
    static constexpr intptr_t ADDR_OFFSET_F4R1 = 0x260;
    static constexpr intptr_t ADDR_OFFSET_F4R2 = 0x264;
    static constexpr intptr_t ADDR_OFFSET_F5R1 = 0x268;
    static constexpr intptr_t ADDR_OFFSET_F5R2 = 0x26c;
    static constexpr intptr_t ADDR_OFFSET_F6R1 = 0x270;
    static constexpr intptr_t ADDR_OFFSET_F6R2 = 0x274;
    static constexpr intptr_t ADDR_OFFSET_F7R1 = 0x278;
    static constexpr intptr_t ADDR_OFFSET_F7R2 = 0x27c;
    static constexpr intptr_t ADDR_OFFSET_F8R1 = 0x280;
    static constexpr intptr_t ADDR_OFFSET_F8R2 = 0x284;
    static constexpr intptr_t ADDR_OFFSET_F9R1 = 0x288;
    static constexpr intptr_t ADDR_OFFSET_F9R2 = 0x28c;
    static constexpr intptr_t ADDR_OFFSET_F10R1 = 0x290;
    static constexpr intptr_t ADDR_OFFSET_F10R2 = 0x294;
    static constexpr intptr_t ADDR_OFFSET_F11R1 = 0x298;
    static constexpr intptr_t ADDR_OFFSET_F11R2 = 0x29c;
    static constexpr intptr_t ADDR_OFFSET_F12R1 = 0x2a0;
    static constexpr intptr_t ADDR_OFFSET_F12R2 = 0x2a4;
    static constexpr intptr_t ADDR_OFFSET_F13R1 = 0x2a8;
    static constexpr intptr_t ADDR_OFFSET_F13R2 = 0x2ac;
    static constexpr intptr_t ADDR_OFFSET_F14R1 = 0x2b0;
    static constexpr intptr_t ADDR_OFFSET_F14R2 = 0x2b4;
    static constexpr intptr_t ADDR_OFFSET_F15R1 = 0x2b8;
    static constexpr intptr_t ADDR_OFFSET_F15R2 = 0x2bc;
    static constexpr intptr_t ADDR_OFFSET_F16R1 = 0x2c0;
    static constexpr intptr_t ADDR_OFFSET_F16R2 = 0x2c4;
    static constexpr intptr_t ADDR_OFFSET_F17R1 = 0x2c8;
    static constexpr intptr_t ADDR_OFFSET_F17R2 = 0x2cc;
    static constexpr intptr_t ADDR_OFFSET_F18R1 = 0x2d0;
    static constexpr intptr_t ADDR_OFFSET_F18R2 = 0x2d4;
    static constexpr intptr_t ADDR_OFFSET_F19R1 = 0x2d8;
    static constexpr intptr_t ADDR_OFFSET_F19R2 = 0x2dc;
    static constexpr intptr_t ADDR_OFFSET_F20R1 = 0x2e0;
    static constexpr intptr_t ADDR_OFFSET_F20R2 = 0x2e4;
    static constexpr intptr_t ADDR_OFFSET_F21R1 = 0x2e8;
    static constexpr intptr_t ADDR_OFFSET_F21R2 = 0x2ec;
    static constexpr intptr_t ADDR_OFFSET_F22R1 = 0x2f0;
    static constexpr intptr_t ADDR_OFFSET_F22R2 = 0x2f4;
    static constexpr intptr_t ADDR_OFFSET_F23R1 = 0x2f8;
    static constexpr intptr_t ADDR_OFFSET_F23R2 = 0x2fc;
    static constexpr intptr_t ADDR_OFFSET_F24R1 = 0x300;
    static constexpr intptr_t ADDR_OFFSET_F24R2 = 0x304;
    static constexpr intptr_t ADDR_OFFSET_F25R1 = 0x308;
    static constexpr intptr_t ADDR_OFFSET_F25R2 = 0x30c;
    static constexpr intptr_t ADDR_OFFSET_F26R1 = 0x310;
    static constexpr intptr_t ADDR_OFFSET_F26R2 = 0x314;
    static constexpr intptr_t ADDR_OFFSET_F27R1 = 0x318;
    static constexpr intptr_t ADDR_OFFSET_F27R2 = 0x31c;

    volatile union MCR_T // MCR: master control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MCR_BIT_T
        {
            unsigned INRQ  : 1; // bit 0 INRQ
            unsigned SLEEP : 1; // bit 1 SLEEP
            unsigned TXFP  : 1; // bit 2 TXFP
            unsigned RFLM  : 1; // bit 3 RFLM
            unsigned NART  : 1; // bit 4 NART
            unsigned AWUM  : 1; // bit 5 AWUM
            unsigned ABOM  : 1; // bit 6 ABOM
            unsigned TTCM  : 1; // bit 7 TTCM
            unsigned       : 7; // bits 8..14 unused
            unsigned RESET : 1; // bit 15 RESET
            unsigned DBF   : 1; // bit 16 DBF
            unsigned       : 15; // bits 17..31 unused    
        } bit;
    
        static constexpr unsigned INRQ_POS = 0;
        static constexpr unsigned INRQ_MASK = 0x00000001;
        static constexpr unsigned INRQ(unsigned value) { return (value << 0); }
        static constexpr unsigned SLEEP_POS = 1;
        static constexpr unsigned SLEEP_MASK = 0x00000002;
        static constexpr unsigned SLEEP(unsigned value) { return (value << 1); }
        static constexpr unsigned TXFP_POS = 2;
        static constexpr unsigned TXFP_MASK = 0x00000004;
        static constexpr unsigned TXFP(unsigned value) { return (value << 2); }
        static constexpr unsigned RFLM_POS = 3;
        static constexpr unsigned RFLM_MASK = 0x00000008;
        static constexpr unsigned RFLM(unsigned value) { return (value << 3); }
        static constexpr unsigned NART_POS = 4;
        static constexpr unsigned NART_MASK = 0x00000010;
        static constexpr unsigned NART(unsigned value) { return (value << 4); }
        static constexpr unsigned AWUM_POS = 5;
        static constexpr unsigned AWUM_MASK = 0x00000020;
        static constexpr unsigned AWUM(unsigned value) { return (value << 5); }
        static constexpr unsigned ABOM_POS = 6;
        static constexpr unsigned ABOM_MASK = 0x00000040;
        static constexpr unsigned ABOM(unsigned value) { return (value << 6); }
        static constexpr unsigned TTCM_POS = 7;
        static constexpr unsigned TTCM_MASK = 0x00000080;
        static constexpr unsigned TTCM(unsigned value) { return (value << 7); }
        static constexpr unsigned RESET_POS = 15;
        static constexpr unsigned RESET_MASK = 0x00008000;
        static constexpr unsigned RESET(unsigned value) { return (value << 15); }
        static constexpr unsigned DBF_POS = 16;
        static constexpr unsigned DBF_MASK = 0x00010000;
        static constexpr unsigned DBF(unsigned value) { return (value << 16); }
    } MCR;

    volatile union MSR_T // MSR: master status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MSR_BIT_T
        {
            unsigned INAK  : 1; // bit 0 INAK
            unsigned SLAK  : 1; // bit 1 SLAK
            unsigned ERRI  : 1; // bit 2 ERRI
            unsigned WKUI  : 1; // bit 3 WKUI
            unsigned SLAKI : 1; // bit 4 SLAKI
            unsigned       : 3; // bits 5..7 unused
            unsigned TXM   : 1; // bit 8 TXM
            unsigned RXM   : 1; // bit 9 RXM
            unsigned SAMP  : 1; // bit 10 SAMP
            unsigned RX    : 1; // bit 11 RX
            unsigned       : 20; // bits 12..31 unused    
        } bit;
    
        static constexpr unsigned INAK_POS = 0;
        static constexpr unsigned INAK_MASK = 0x00000001;
        static constexpr unsigned INAK(unsigned value) { return (value << 0); }
        static constexpr unsigned SLAK_POS = 1;
        static constexpr unsigned SLAK_MASK = 0x00000002;
        static constexpr unsigned SLAK(unsigned value) { return (value << 1); }
        static constexpr unsigned ERRI_POS = 2;
        static constexpr unsigned ERRI_MASK = 0x00000004;
        static constexpr unsigned ERRI(unsigned value) { return (value << 2); }
        static constexpr unsigned WKUI_POS = 3;
        static constexpr unsigned WKUI_MASK = 0x00000008;
        static constexpr unsigned WKUI(unsigned value) { return (value << 3); }
        static constexpr unsigned SLAKI_POS = 4;
        static constexpr unsigned SLAKI_MASK = 0x00000010;
        static constexpr unsigned SLAKI(unsigned value) { return (value << 4); }
        static constexpr unsigned TXM_POS = 8;
        static constexpr unsigned TXM_MASK = 0x00000100;
        static constexpr unsigned TXM(unsigned value) { return (value << 8); }
        static constexpr unsigned RXM_POS = 9;
        static constexpr unsigned RXM_MASK = 0x00000200;
        static constexpr unsigned RXM(unsigned value) { return (value << 9); }
        static constexpr unsigned SAMP_POS = 10;
        static constexpr unsigned SAMP_MASK = 0x00000400;
        static constexpr unsigned SAMP(unsigned value) { return (value << 10); }
        static constexpr unsigned RX_POS = 11;
        static constexpr unsigned RX_MASK = 0x00000800;
        static constexpr unsigned RX(unsigned value) { return (value << 11); }
    } MSR;

    volatile union TSR_T // TSR: transmit status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TSR_BIT_T
        {
            unsigned RQCP0 : 1; // bit 0 RQCP0
            unsigned TXOK0 : 1; // bit 1 TXOK0
            unsigned ALST0 : 1; // bit 2 ALST0
            unsigned TERR0 : 1; // bit 3 TERR0
            unsigned       : 3; // bits 4..6 unused
            unsigned ABRQ0 : 1; // bit 7 ABRQ0
            unsigned RQCP1 : 1; // bit 8 RQCP1
            unsigned TXOK1 : 1; // bit 9 TXOK1
            unsigned ALST1 : 1; // bit 10 ALST1
            unsigned TERR1 : 1; // bit 11 TERR1
            unsigned       : 3; // bits 12..14 unused
            unsigned ABRQ1 : 1; // bit 15 ABRQ1
            unsigned RQCP2 : 1; // bit 16 RQCP2
            unsigned TXOK2 : 1; // bit 17 TXOK2
            unsigned ALST2 : 1; // bit 18 ALST2
            unsigned TERR2 : 1; // bit 19 TERR2
            unsigned       : 3; // bits 20..22 unused
            unsigned ABRQ2 : 1; // bit 23 ABRQ2
            unsigned CODE  : 2; // bits 24..25 CODE
            unsigned TME0  : 1; // bit 26 Lowest priority flag for mailbox 0
            unsigned TME1  : 1; // bit 27 Lowest priority flag for mailbox 1
            unsigned TME2  : 1; // bit 28 Lowest priority flag for mailbox 2
            unsigned LOW0  : 1; // bit 29 Lowest priority flag for mailbox 0
            unsigned LOW1  : 1; // bit 30 Lowest priority flag for mailbox 1
            unsigned LOW2  : 1; // bit 31 Lowest priority flag for mailbox 2    
        } bit;
    
        static constexpr unsigned RQCP0_POS = 0;
        static constexpr unsigned RQCP0_MASK = 0x00000001;
        static constexpr unsigned RQCP0(unsigned value) { return (value << 0); }
        static constexpr unsigned TXOK0_POS = 1;
        static constexpr unsigned TXOK0_MASK = 0x00000002;
        static constexpr unsigned TXOK0(unsigned value) { return (value << 1); }
        static constexpr unsigned ALST0_POS = 2;
        static constexpr unsigned ALST0_MASK = 0x00000004;
        static constexpr unsigned ALST0(unsigned value) { return (value << 2); }
        static constexpr unsigned TERR0_POS = 3;
        static constexpr unsigned TERR0_MASK = 0x00000008;
        static constexpr unsigned TERR0(unsigned value) { return (value << 3); }
        static constexpr unsigned ABRQ0_POS = 7;
        static constexpr unsigned ABRQ0_MASK = 0x00000080;
        static constexpr unsigned ABRQ0(unsigned value) { return (value << 7); }
        static constexpr unsigned RQCP1_POS = 8;
        static constexpr unsigned RQCP1_MASK = 0x00000100;
        static constexpr unsigned RQCP1(unsigned value) { return (value << 8); }
        static constexpr unsigned TXOK1_POS = 9;
        static constexpr unsigned TXOK1_MASK = 0x00000200;
        static constexpr unsigned TXOK1(unsigned value) { return (value << 9); }
        static constexpr unsigned ALST1_POS = 10;
        static constexpr unsigned ALST1_MASK = 0x00000400;
        static constexpr unsigned ALST1(unsigned value) { return (value << 10); }
        static constexpr unsigned TERR1_POS = 11;
        static constexpr unsigned TERR1_MASK = 0x00000800;
        static constexpr unsigned TERR1(unsigned value) { return (value << 11); }
        static constexpr unsigned ABRQ1_POS = 15;
        static constexpr unsigned ABRQ1_MASK = 0x00008000;
        static constexpr unsigned ABRQ1(unsigned value) { return (value << 15); }
        static constexpr unsigned RQCP2_POS = 16;
        static constexpr unsigned RQCP2_MASK = 0x00010000;
        static constexpr unsigned RQCP2(unsigned value) { return (value << 16); }
        static constexpr unsigned TXOK2_POS = 17;
        static constexpr unsigned TXOK2_MASK = 0x00020000;
        static constexpr unsigned TXOK2(unsigned value) { return (value << 17); }
        static constexpr unsigned ALST2_POS = 18;
        static constexpr unsigned ALST2_MASK = 0x00040000;
        static constexpr unsigned ALST2(unsigned value) { return (value << 18); }
        static constexpr unsigned TERR2_POS = 19;
        static constexpr unsigned TERR2_MASK = 0x00080000;
        static constexpr unsigned TERR2(unsigned value) { return (value << 19); }
        static constexpr unsigned ABRQ2_POS = 23;
        static constexpr unsigned ABRQ2_MASK = 0x00800000;
        static constexpr unsigned ABRQ2(unsigned value) { return (value << 23); }
        static constexpr unsigned CODE_POS = 24;
        static constexpr unsigned CODE_MASK = 0x03000000;
        static constexpr unsigned CODE(unsigned value) { return (value << 24); }
        static constexpr unsigned TME0_POS = 26;
        static constexpr unsigned TME0_MASK = 0x04000000;
        static constexpr unsigned TME0(unsigned value) { return (value << 26); }
        static constexpr unsigned TME1_POS = 27;
        static constexpr unsigned TME1_MASK = 0x08000000;
        static constexpr unsigned TME1(unsigned value) { return (value << 27); }
        static constexpr unsigned TME2_POS = 28;
        static constexpr unsigned TME2_MASK = 0x10000000;
        static constexpr unsigned TME2(unsigned value) { return (value << 28); }
        static constexpr unsigned LOW0_POS = 29;
        static constexpr unsigned LOW0_MASK = 0x20000000;
        static constexpr unsigned LOW0(unsigned value) { return (value << 29); }
        static constexpr unsigned LOW1_POS = 30;
        static constexpr unsigned LOW1_MASK = 0x40000000;
        static constexpr unsigned LOW1(unsigned value) { return (value << 30); }
        static constexpr unsigned LOW2_POS = 31;
        static constexpr unsigned LOW2_MASK = 0x80000000;
        static constexpr unsigned LOW2(unsigned value) { return (value << 31); }
    } TSR;

    volatile union RF0R_T // RF0R: receive FIFO 0 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RF0R_BIT_T
        {
            unsigned FMP0  : 2; // bits 0..1 FMP0
            unsigned       : 1; // bit 2 unused
            unsigned FULL0 : 1; // bit 3 FULL0
            unsigned FOVR0 : 1; // bit 4 FOVR0
            unsigned RFOM0 : 1; // bit 5 RFOM0
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned FMP0_POS = 0;
        static constexpr unsigned FMP0_MASK = 0x00000003;
        static constexpr unsigned FMP0(unsigned value) { return (value << 0); }
        static constexpr unsigned FULL0_POS = 3;
        static constexpr unsigned FULL0_MASK = 0x00000008;
        static constexpr unsigned FULL0(unsigned value) { return (value << 3); }
        static constexpr unsigned FOVR0_POS = 4;
        static constexpr unsigned FOVR0_MASK = 0x00000010;
        static constexpr unsigned FOVR0(unsigned value) { return (value << 4); }
        static constexpr unsigned RFOM0_POS = 5;
        static constexpr unsigned RFOM0_MASK = 0x00000020;
        static constexpr unsigned RFOM0(unsigned value) { return (value << 5); }
    } RF0R;

    volatile union RF1R_T // RF1R: receive FIFO 1 register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RF1R_BIT_T
        {
            unsigned FMP1  : 2; // bits 0..1 FMP1
            unsigned       : 1; // bit 2 unused
            unsigned FULL1 : 1; // bit 3 FULL1
            unsigned FOVR1 : 1; // bit 4 FOVR1
            unsigned RFOM1 : 1; // bit 5 RFOM1
            unsigned       : 26; // bits 6..31 unused    
        } bit;
    
        static constexpr unsigned FMP1_POS = 0;
        static constexpr unsigned FMP1_MASK = 0x00000003;
        static constexpr unsigned FMP1(unsigned value) { return (value << 0); }
        static constexpr unsigned FULL1_POS = 3;
        static constexpr unsigned FULL1_MASK = 0x00000008;
        static constexpr unsigned FULL1(unsigned value) { return (value << 3); }
        static constexpr unsigned FOVR1_POS = 4;
        static constexpr unsigned FOVR1_MASK = 0x00000010;
        static constexpr unsigned FOVR1(unsigned value) { return (value << 4); }
        static constexpr unsigned RFOM1_POS = 5;
        static constexpr unsigned RFOM1_MASK = 0x00000020;
        static constexpr unsigned RFOM1(unsigned value) { return (value << 5); }
    } RF1R;

    volatile union IER_T // IER: interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IER_BIT_T
        {
            unsigned TMEIE  : 1; // bit 0 TMEIE
            unsigned FMPIE0 : 1; // bit 1 FMPIE0
            unsigned FFIE0  : 1; // bit 2 FFIE0
            unsigned FOVIE0 : 1; // bit 3 FOVIE0
            unsigned FMPIE1 : 1; // bit 4 FMPIE1
            unsigned FFIE1  : 1; // bit 5 FFIE1
            unsigned FOVIE1 : 1; // bit 6 FOVIE1
            unsigned        : 1; // bit 7 unused
            unsigned EWGIE  : 1; // bit 8 EWGIE
            unsigned EPVIE  : 1; // bit 9 EPVIE
            unsigned BOFIE  : 1; // bit 10 BOFIE
            unsigned LECIE  : 1; // bit 11 LECIE
            unsigned        : 3; // bits 12..14 unused
            unsigned ERRIE  : 1; // bit 15 ERRIE
            unsigned WKUIE  : 1; // bit 16 WKUIE
            unsigned SLKIE  : 1; // bit 17 SLKIE
            unsigned        : 14; // bits 18..31 unused    
        } bit;
    
        static constexpr unsigned TMEIE_POS = 0;
        static constexpr unsigned TMEIE_MASK = 0x00000001;
        static constexpr unsigned TMEIE(unsigned value) { return (value << 0); }
        static constexpr unsigned FMPIE0_POS = 1;
        static constexpr unsigned FMPIE0_MASK = 0x00000002;
        static constexpr unsigned FMPIE0(unsigned value) { return (value << 1); }
        static constexpr unsigned FFIE0_POS = 2;
        static constexpr unsigned FFIE0_MASK = 0x00000004;
        static constexpr unsigned FFIE0(unsigned value) { return (value << 2); }
        static constexpr unsigned FOVIE0_POS = 3;
        static constexpr unsigned FOVIE0_MASK = 0x00000008;
        static constexpr unsigned FOVIE0(unsigned value) { return (value << 3); }
        static constexpr unsigned FMPIE1_POS = 4;
        static constexpr unsigned FMPIE1_MASK = 0x00000010;
        static constexpr unsigned FMPIE1(unsigned value) { return (value << 4); }
        static constexpr unsigned FFIE1_POS = 5;
        static constexpr unsigned FFIE1_MASK = 0x00000020;
        static constexpr unsigned FFIE1(unsigned value) { return (value << 5); }
        static constexpr unsigned FOVIE1_POS = 6;
        static constexpr unsigned FOVIE1_MASK = 0x00000040;
        static constexpr unsigned FOVIE1(unsigned value) { return (value << 6); }
        static constexpr unsigned EWGIE_POS = 8;
        static constexpr unsigned EWGIE_MASK = 0x00000100;
        static constexpr unsigned EWGIE(unsigned value) { return (value << 8); }
        static constexpr unsigned EPVIE_POS = 9;
        static constexpr unsigned EPVIE_MASK = 0x00000200;
        static constexpr unsigned EPVIE(unsigned value) { return (value << 9); }
        static constexpr unsigned BOFIE_POS = 10;
        static constexpr unsigned BOFIE_MASK = 0x00000400;
        static constexpr unsigned BOFIE(unsigned value) { return (value << 10); }
        static constexpr unsigned LECIE_POS = 11;
        static constexpr unsigned LECIE_MASK = 0x00000800;
        static constexpr unsigned LECIE(unsigned value) { return (value << 11); }
        static constexpr unsigned ERRIE_POS = 15;
        static constexpr unsigned ERRIE_MASK = 0x00008000;
        static constexpr unsigned ERRIE(unsigned value) { return (value << 15); }
        static constexpr unsigned WKUIE_POS = 16;
        static constexpr unsigned WKUIE_MASK = 0x00010000;
        static constexpr unsigned WKUIE(unsigned value) { return (value << 16); }
        static constexpr unsigned SLKIE_POS = 17;
        static constexpr unsigned SLKIE_MASK = 0x00020000;
        static constexpr unsigned SLKIE(unsigned value) { return (value << 17); }
    } IER;

    volatile union ESR_T // ESR: interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ESR_BIT_T
        {
            unsigned EWGF : 1; // bit 0 EWGF
            unsigned EPVF : 1; // bit 1 EPVF
            unsigned BOFF : 1; // bit 2 BOFF
            unsigned      : 1; // bit 3 unused
            unsigned LEC  : 3; // bits 4..6 LEC
            unsigned      : 9; // bits 7..15 unused
            unsigned TEC  : 8; // bits 16..23 TEC
            unsigned REC  : 8; // bits 24..31 REC    
        } bit;
    
        static constexpr unsigned EWGF_POS = 0;
        static constexpr unsigned EWGF_MASK = 0x00000001;
        static constexpr unsigned EWGF(unsigned value) { return (value << 0); }
        static constexpr unsigned EPVF_POS = 1;
        static constexpr unsigned EPVF_MASK = 0x00000002;
        static constexpr unsigned EPVF(unsigned value) { return (value << 1); }
        static constexpr unsigned BOFF_POS = 2;
        static constexpr unsigned BOFF_MASK = 0x00000004;
        static constexpr unsigned BOFF(unsigned value) { return (value << 2); }
        static constexpr unsigned LEC_POS = 4;
        static constexpr unsigned LEC_MASK = 0x00000070;
        static constexpr unsigned LEC(unsigned value) { return (value << 4); }
        static constexpr unsigned TEC_POS = 16;
        static constexpr unsigned TEC_MASK = 0x00ff0000;
        static constexpr unsigned TEC(unsigned value) { return (value << 16); }
        static constexpr unsigned REC_POS = 24;
        static constexpr unsigned REC_MASK = 0xff000000;
        static constexpr unsigned REC(unsigned value) { return (value << 24); }
    } ESR;

    volatile union BTR_T // BTR: bit timing register 
    {
        uint32_t reg;
        struct __attribute__((packed)) BTR_BIT_T
        {
            unsigned BRP  : 10; // bits 0..9 BRP
            unsigned      : 6; // bits 10..15 unused
            unsigned TS1  : 4; // bits 16..19 TS1
            unsigned TS2  : 3; // bits 20..22 TS2
            unsigned      : 1; // bit 23 unused
            unsigned SJW  : 2; // bits 24..25 SJW
            unsigned      : 4; // bits 26..29 unused
            unsigned LBKM : 1; // bit 30 LBKM
            unsigned SILM : 1; // bit 31 SILM    
        } bit;
    
        static constexpr unsigned BRP_POS = 0;
        static constexpr unsigned BRP_MASK = 0x000003ff;
        static constexpr unsigned BRP(unsigned value) { return (value << 0); }
        static constexpr unsigned TS1_POS = 16;
        static constexpr unsigned TS1_MASK = 0x000f0000;
        static constexpr unsigned TS1(unsigned value) { return (value << 16); }
        static constexpr unsigned TS2_POS = 20;
        static constexpr unsigned TS2_MASK = 0x00700000;
        static constexpr unsigned TS2(unsigned value) { return (value << 20); }
        static constexpr unsigned SJW_POS = 24;
        static constexpr unsigned SJW_MASK = 0x03000000;
        static constexpr unsigned SJW(unsigned value) { return (value << 24); }
        static constexpr unsigned LBKM_POS = 30;
        static constexpr unsigned LBKM_MASK = 0x40000000;
        static constexpr unsigned LBKM(unsigned value) { return (value << 30); }
        static constexpr unsigned SILM_POS = 31;
        static constexpr unsigned SILM_MASK = 0x80000000;
        static constexpr unsigned SILM(unsigned value) { return (value << 31); }
    } BTR;

    uint8_t Reserved1[352];

    volatile union TI0R_T // TI0R: TX mailbox identifier register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TI0R_BIT_T
        {
            unsigned TXRQ : 1; // bit 0 TXRQ
            unsigned RTR  : 1; // bit 1 RTR
            unsigned IDE  : 1; // bit 2 IDE
            unsigned EXID : 18; // bits 3..20 EXID
            unsigned STID : 11; // bits 21..31 STID    
        } bit;
    
        static constexpr unsigned TXRQ_POS = 0;
        static constexpr unsigned TXRQ_MASK = 0x00000001;
        static constexpr unsigned TXRQ(unsigned value) { return (value << 0); }
        static constexpr unsigned RTR_POS = 1;
        static constexpr unsigned RTR_MASK = 0x00000002;
        static constexpr unsigned RTR(unsigned value) { return (value << 1); }
        static constexpr unsigned IDE_POS = 2;
        static constexpr unsigned IDE_MASK = 0x00000004;
        static constexpr unsigned IDE(unsigned value) { return (value << 2); }
        static constexpr unsigned EXID_POS = 3;
        static constexpr unsigned EXID_MASK = 0x001ffff8;
        static constexpr unsigned EXID(unsigned value) { return (value << 3); }
        static constexpr unsigned STID_POS = 21;
        static constexpr unsigned STID_MASK = 0xffe00000;
        static constexpr unsigned STID(unsigned value) { return (value << 21); }
    } TI0R;

    volatile union TDT0R_T // TDT0R: mailbox data length control and time stamp register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDT0R_BIT_T
        {
            unsigned DLC  : 4; // bits 0..3 DLC
            unsigned      : 4; // bits 4..7 unused
            unsigned TGT  : 1; // bit 8 TGT
            unsigned      : 7; // bits 9..15 unused
            unsigned TIME : 16; // bits 16..31 TIME    
        } bit;
    
        static constexpr unsigned DLC_POS = 0;
        static constexpr unsigned DLC_MASK = 0x0000000f;
        static constexpr unsigned DLC(unsigned value) { return (value << 0); }
        static constexpr unsigned TGT_POS = 8;
        static constexpr unsigned TGT_MASK = 0x00000100;
        static constexpr unsigned TGT(unsigned value) { return (value << 8); }
        static constexpr unsigned TIME_POS = 16;
        static constexpr unsigned TIME_MASK = 0xffff0000;
        static constexpr unsigned TIME(unsigned value) { return (value << 16); }
    } TDT0R;

    volatile union TDL0R_T // TDL0R: mailbox data low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDL0R_BIT_T
        {
            unsigned DATA0 : 8; // bits 0..7 DATA0
            unsigned DATA1 : 8; // bits 8..15 DATA1
            unsigned DATA2 : 8; // bits 16..23 DATA2
            unsigned DATA3 : 8; // bits 24..31 DATA3    
        } bit;
    
        static constexpr unsigned DATA0_POS = 0;
        static constexpr unsigned DATA0_MASK = 0x000000ff;
        static constexpr unsigned DATA0(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA1_POS = 8;
        static constexpr unsigned DATA1_MASK = 0x0000ff00;
        static constexpr unsigned DATA1(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA2_POS = 16;
        static constexpr unsigned DATA2_MASK = 0x00ff0000;
        static constexpr unsigned DATA2(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA3_POS = 24;
        static constexpr unsigned DATA3_MASK = 0xff000000;
        static constexpr unsigned DATA3(unsigned value) { return (value << 24); }
    } TDL0R;

    volatile union TDH0R_T // TDH0R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDH0R_BIT_T
        {
            unsigned DATA4 : 8; // bits 0..7 DATA4
            unsigned DATA5 : 8; // bits 8..15 DATA5
            unsigned DATA6 : 8; // bits 16..23 DATA6
            unsigned DATA7 : 8; // bits 24..31 DATA7    
        } bit;
    
        static constexpr unsigned DATA4_POS = 0;
        static constexpr unsigned DATA4_MASK = 0x000000ff;
        static constexpr unsigned DATA4(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA5_POS = 8;
        static constexpr unsigned DATA5_MASK = 0x0000ff00;
        static constexpr unsigned DATA5(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA6_POS = 16;
        static constexpr unsigned DATA6_MASK = 0x00ff0000;
        static constexpr unsigned DATA6(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA7_POS = 24;
        static constexpr unsigned DATA7_MASK = 0xff000000;
        static constexpr unsigned DATA7(unsigned value) { return (value << 24); }
    } TDH0R;

    volatile union TI1R_T // TI1R: mailbox identifier register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TI1R_BIT_T
        {
            unsigned TXRQ : 1; // bit 0 TXRQ
            unsigned RTR  : 1; // bit 1 RTR
            unsigned IDE  : 1; // bit 2 IDE
            unsigned EXID : 18; // bits 3..20 EXID
            unsigned STID : 11; // bits 21..31 STID    
        } bit;
    
        static constexpr unsigned TXRQ_POS = 0;
        static constexpr unsigned TXRQ_MASK = 0x00000001;
        static constexpr unsigned TXRQ(unsigned value) { return (value << 0); }
        static constexpr unsigned RTR_POS = 1;
        static constexpr unsigned RTR_MASK = 0x00000002;
        static constexpr unsigned RTR(unsigned value) { return (value << 1); }
        static constexpr unsigned IDE_POS = 2;
        static constexpr unsigned IDE_MASK = 0x00000004;
        static constexpr unsigned IDE(unsigned value) { return (value << 2); }
        static constexpr unsigned EXID_POS = 3;
        static constexpr unsigned EXID_MASK = 0x001ffff8;
        static constexpr unsigned EXID(unsigned value) { return (value << 3); }
        static constexpr unsigned STID_POS = 21;
        static constexpr unsigned STID_MASK = 0xffe00000;
        static constexpr unsigned STID(unsigned value) { return (value << 21); }
    } TI1R;

    volatile union TDT1R_T // TDT1R: mailbox data length control and time stamp register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDT1R_BIT_T
        {
            unsigned DLC  : 4; // bits 0..3 DLC
            unsigned      : 4; // bits 4..7 unused
            unsigned TGT  : 1; // bit 8 TGT
            unsigned      : 7; // bits 9..15 unused
            unsigned TIME : 16; // bits 16..31 TIME    
        } bit;
    
        static constexpr unsigned DLC_POS = 0;
        static constexpr unsigned DLC_MASK = 0x0000000f;
        static constexpr unsigned DLC(unsigned value) { return (value << 0); }
        static constexpr unsigned TGT_POS = 8;
        static constexpr unsigned TGT_MASK = 0x00000100;
        static constexpr unsigned TGT(unsigned value) { return (value << 8); }
        static constexpr unsigned TIME_POS = 16;
        static constexpr unsigned TIME_MASK = 0xffff0000;
        static constexpr unsigned TIME(unsigned value) { return (value << 16); }
    } TDT1R;

    volatile union TDL1R_T // TDL1R: mailbox data low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDL1R_BIT_T
        {
            unsigned DATA0 : 8; // bits 0..7 DATA0
            unsigned DATA1 : 8; // bits 8..15 DATA1
            unsigned DATA2 : 8; // bits 16..23 DATA2
            unsigned DATA3 : 8; // bits 24..31 DATA3    
        } bit;
    
        static constexpr unsigned DATA0_POS = 0;
        static constexpr unsigned DATA0_MASK = 0x000000ff;
        static constexpr unsigned DATA0(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA1_POS = 8;
        static constexpr unsigned DATA1_MASK = 0x0000ff00;
        static constexpr unsigned DATA1(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA2_POS = 16;
        static constexpr unsigned DATA2_MASK = 0x00ff0000;
        static constexpr unsigned DATA2(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA3_POS = 24;
        static constexpr unsigned DATA3_MASK = 0xff000000;
        static constexpr unsigned DATA3(unsigned value) { return (value << 24); }
    } TDL1R;

    volatile union TDH1R_T // TDH1R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDH1R_BIT_T
        {
            unsigned DATA4 : 8; // bits 0..7 DATA4
            unsigned DATA5 : 8; // bits 8..15 DATA5
            unsigned DATA6 : 8; // bits 16..23 DATA6
            unsigned DATA7 : 8; // bits 24..31 DATA7    
        } bit;
    
        static constexpr unsigned DATA4_POS = 0;
        static constexpr unsigned DATA4_MASK = 0x000000ff;
        static constexpr unsigned DATA4(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA5_POS = 8;
        static constexpr unsigned DATA5_MASK = 0x0000ff00;
        static constexpr unsigned DATA5(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA6_POS = 16;
        static constexpr unsigned DATA6_MASK = 0x00ff0000;
        static constexpr unsigned DATA6(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA7_POS = 24;
        static constexpr unsigned DATA7_MASK = 0xff000000;
        static constexpr unsigned DATA7(unsigned value) { return (value << 24); }
    } TDH1R;

    volatile union TI2R_T // TI2R: mailbox identifier register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TI2R_BIT_T
        {
            unsigned TXRQ : 1; // bit 0 TXRQ
            unsigned RTR  : 1; // bit 1 RTR
            unsigned IDE  : 1; // bit 2 IDE
            unsigned EXID : 18; // bits 3..20 EXID
            unsigned STID : 11; // bits 21..31 STID    
        } bit;
    
        static constexpr unsigned TXRQ_POS = 0;
        static constexpr unsigned TXRQ_MASK = 0x00000001;
        static constexpr unsigned TXRQ(unsigned value) { return (value << 0); }
        static constexpr unsigned RTR_POS = 1;
        static constexpr unsigned RTR_MASK = 0x00000002;
        static constexpr unsigned RTR(unsigned value) { return (value << 1); }
        static constexpr unsigned IDE_POS = 2;
        static constexpr unsigned IDE_MASK = 0x00000004;
        static constexpr unsigned IDE(unsigned value) { return (value << 2); }
        static constexpr unsigned EXID_POS = 3;
        static constexpr unsigned EXID_MASK = 0x001ffff8;
        static constexpr unsigned EXID(unsigned value) { return (value << 3); }
        static constexpr unsigned STID_POS = 21;
        static constexpr unsigned STID_MASK = 0xffe00000;
        static constexpr unsigned STID(unsigned value) { return (value << 21); }
    } TI2R;

    volatile union TDT2R_T // TDT2R: mailbox data length control and time stamp register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDT2R_BIT_T
        {
            unsigned DLC  : 4; // bits 0..3 DLC
            unsigned      : 4; // bits 4..7 unused
            unsigned TGT  : 1; // bit 8 TGT
            unsigned      : 7; // bits 9..15 unused
            unsigned TIME : 16; // bits 16..31 TIME    
        } bit;
    
        static constexpr unsigned DLC_POS = 0;
        static constexpr unsigned DLC_MASK = 0x0000000f;
        static constexpr unsigned DLC(unsigned value) { return (value << 0); }
        static constexpr unsigned TGT_POS = 8;
        static constexpr unsigned TGT_MASK = 0x00000100;
        static constexpr unsigned TGT(unsigned value) { return (value << 8); }
        static constexpr unsigned TIME_POS = 16;
        static constexpr unsigned TIME_MASK = 0xffff0000;
        static constexpr unsigned TIME(unsigned value) { return (value << 16); }
    } TDT2R;

    volatile union TDL2R_T // TDL2R: mailbox data low register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDL2R_BIT_T
        {
            unsigned DATA0 : 8; // bits 0..7 DATA0
            unsigned DATA1 : 8; // bits 8..15 DATA1
            unsigned DATA2 : 8; // bits 16..23 DATA2
            unsigned DATA3 : 8; // bits 24..31 DATA3    
        } bit;
    
        static constexpr unsigned DATA0_POS = 0;
        static constexpr unsigned DATA0_MASK = 0x000000ff;
        static constexpr unsigned DATA0(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA1_POS = 8;
        static constexpr unsigned DATA1_MASK = 0x0000ff00;
        static constexpr unsigned DATA1(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA2_POS = 16;
        static constexpr unsigned DATA2_MASK = 0x00ff0000;
        static constexpr unsigned DATA2(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA3_POS = 24;
        static constexpr unsigned DATA3_MASK = 0xff000000;
        static constexpr unsigned DATA3(unsigned value) { return (value << 24); }
    } TDL2R;

    volatile union TDH2R_T // TDH2R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) TDH2R_BIT_T
        {
            unsigned DATA4 : 8; // bits 0..7 DATA4
            unsigned DATA5 : 8; // bits 8..15 DATA5
            unsigned DATA6 : 8; // bits 16..23 DATA6
            unsigned DATA7 : 8; // bits 24..31 DATA7    
        } bit;
    
        static constexpr unsigned DATA4_POS = 0;
        static constexpr unsigned DATA4_MASK = 0x000000ff;
        static constexpr unsigned DATA4(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA5_POS = 8;
        static constexpr unsigned DATA5_MASK = 0x0000ff00;
        static constexpr unsigned DATA5(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA6_POS = 16;
        static constexpr unsigned DATA6_MASK = 0x00ff0000;
        static constexpr unsigned DATA6(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA7_POS = 24;
        static constexpr unsigned DATA7_MASK = 0xff000000;
        static constexpr unsigned DATA7(unsigned value) { return (value << 24); }
    } TDH2R;

    volatile union RI0R_T // RI0R: receive FIFO mailbox identifier register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RI0R_BIT_T
        {
            unsigned      : 1; // bit 0 unused
            unsigned RTR  : 1; // bit 1 RTR
            unsigned IDE  : 1; // bit 2 IDE
            unsigned EXID : 18; // bits 3..20 EXID
            unsigned STID : 11; // bits 21..31 STID    
        } bit;
    
        static constexpr unsigned RTR_POS = 1;
        static constexpr unsigned RTR_MASK = 0x00000002;
        static constexpr unsigned RTR(unsigned value) { return (value << 1); }
        static constexpr unsigned IDE_POS = 2;
        static constexpr unsigned IDE_MASK = 0x00000004;
        static constexpr unsigned IDE(unsigned value) { return (value << 2); }
        static constexpr unsigned EXID_POS = 3;
        static constexpr unsigned EXID_MASK = 0x001ffff8;
        static constexpr unsigned EXID(unsigned value) { return (value << 3); }
        static constexpr unsigned STID_POS = 21;
        static constexpr unsigned STID_MASK = 0xffe00000;
        static constexpr unsigned STID(unsigned value) { return (value << 21); }
    } RI0R;

    volatile union RDT0R_T // RDT0R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RDT0R_BIT_T
        {
            unsigned DLC  : 4; // bits 0..3 DLC
            unsigned      : 4; // bits 4..7 unused
            unsigned FMI  : 8; // bits 8..15 FMI
            unsigned TIME : 16; // bits 16..31 TIME    
        } bit;
    
        static constexpr unsigned DLC_POS = 0;
        static constexpr unsigned DLC_MASK = 0x0000000f;
        static constexpr unsigned DLC(unsigned value) { return (value << 0); }
        static constexpr unsigned FMI_POS = 8;
        static constexpr unsigned FMI_MASK = 0x0000ff00;
        static constexpr unsigned FMI(unsigned value) { return (value << 8); }
        static constexpr unsigned TIME_POS = 16;
        static constexpr unsigned TIME_MASK = 0xffff0000;
        static constexpr unsigned TIME(unsigned value) { return (value << 16); }
    } RDT0R;

    volatile union RDL0R_T // RDL0R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RDL0R_BIT_T
        {
            unsigned DATA0 : 8; // bits 0..7 DATA0
            unsigned DATA1 : 8; // bits 8..15 DATA1
            unsigned DATA2 : 8; // bits 16..23 DATA2
            unsigned DATA3 : 8; // bits 24..31 DATA3    
        } bit;
    
        static constexpr unsigned DATA0_POS = 0;
        static constexpr unsigned DATA0_MASK = 0x000000ff;
        static constexpr unsigned DATA0(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA1_POS = 8;
        static constexpr unsigned DATA1_MASK = 0x0000ff00;
        static constexpr unsigned DATA1(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA2_POS = 16;
        static constexpr unsigned DATA2_MASK = 0x00ff0000;
        static constexpr unsigned DATA2(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA3_POS = 24;
        static constexpr unsigned DATA3_MASK = 0xff000000;
        static constexpr unsigned DATA3(unsigned value) { return (value << 24); }
    } RDL0R;

    volatile union RDH0R_T // RDH0R: receive FIFO mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RDH0R_BIT_T
        {
            unsigned DATA4 : 8; // bits 0..7 DATA4
            unsigned DATA5 : 8; // bits 8..15 DATA5
            unsigned DATA6 : 8; // bits 16..23 DATA6
            unsigned DATA7 : 8; // bits 24..31 DATA7    
        } bit;
    
        static constexpr unsigned DATA4_POS = 0;
        static constexpr unsigned DATA4_MASK = 0x000000ff;
        static constexpr unsigned DATA4(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA5_POS = 8;
        static constexpr unsigned DATA5_MASK = 0x0000ff00;
        static constexpr unsigned DATA5(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA6_POS = 16;
        static constexpr unsigned DATA6_MASK = 0x00ff0000;
        static constexpr unsigned DATA6(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA7_POS = 24;
        static constexpr unsigned DATA7_MASK = 0xff000000;
        static constexpr unsigned DATA7(unsigned value) { return (value << 24); }
    } RDH0R;

    volatile union RI1R_T // RI1R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RI1R_BIT_T
        {
            unsigned      : 1; // bit 0 unused
            unsigned RTR  : 1; // bit 1 RTR
            unsigned IDE  : 1; // bit 2 IDE
            unsigned EXID : 18; // bits 3..20 EXID
            unsigned STID : 11; // bits 21..31 STID    
        } bit;
    
        static constexpr unsigned RTR_POS = 1;
        static constexpr unsigned RTR_MASK = 0x00000002;
        static constexpr unsigned RTR(unsigned value) { return (value << 1); }
        static constexpr unsigned IDE_POS = 2;
        static constexpr unsigned IDE_MASK = 0x00000004;
        static constexpr unsigned IDE(unsigned value) { return (value << 2); }
        static constexpr unsigned EXID_POS = 3;
        static constexpr unsigned EXID_MASK = 0x001ffff8;
        static constexpr unsigned EXID(unsigned value) { return (value << 3); }
        static constexpr unsigned STID_POS = 21;
        static constexpr unsigned STID_MASK = 0xffe00000;
        static constexpr unsigned STID(unsigned value) { return (value << 21); }
    } RI1R;

    volatile union RDT1R_T // RDT1R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RDT1R_BIT_T
        {
            unsigned DLC  : 4; // bits 0..3 DLC
            unsigned      : 4; // bits 4..7 unused
            unsigned FMI  : 8; // bits 8..15 FMI
            unsigned TIME : 16; // bits 16..31 TIME    
        } bit;
    
        static constexpr unsigned DLC_POS = 0;
        static constexpr unsigned DLC_MASK = 0x0000000f;
        static constexpr unsigned DLC(unsigned value) { return (value << 0); }
        static constexpr unsigned FMI_POS = 8;
        static constexpr unsigned FMI_MASK = 0x0000ff00;
        static constexpr unsigned FMI(unsigned value) { return (value << 8); }
        static constexpr unsigned TIME_POS = 16;
        static constexpr unsigned TIME_MASK = 0xffff0000;
        static constexpr unsigned TIME(unsigned value) { return (value << 16); }
    } RDT1R;

    volatile union RDL1R_T // RDL1R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RDL1R_BIT_T
        {
            unsigned DATA0 : 8; // bits 0..7 DATA0
            unsigned DATA1 : 8; // bits 8..15 DATA1
            unsigned DATA2 : 8; // bits 16..23 DATA2
            unsigned DATA3 : 8; // bits 24..31 DATA3    
        } bit;
    
        static constexpr unsigned DATA0_POS = 0;
        static constexpr unsigned DATA0_MASK = 0x000000ff;
        static constexpr unsigned DATA0(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA1_POS = 8;
        static constexpr unsigned DATA1_MASK = 0x0000ff00;
        static constexpr unsigned DATA1(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA2_POS = 16;
        static constexpr unsigned DATA2_MASK = 0x00ff0000;
        static constexpr unsigned DATA2(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA3_POS = 24;
        static constexpr unsigned DATA3_MASK = 0xff000000;
        static constexpr unsigned DATA3(unsigned value) { return (value << 24); }
    } RDL1R;

    volatile union RDH1R_T // RDH1R: mailbox data high register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RDH1R_BIT_T
        {
            unsigned DATA4 : 8; // bits 0..7 DATA4
            unsigned DATA5 : 8; // bits 8..15 DATA5
            unsigned DATA6 : 8; // bits 16..23 DATA6
            unsigned DATA7 : 8; // bits 24..31 DATA7    
        } bit;
    
        static constexpr unsigned DATA4_POS = 0;
        static constexpr unsigned DATA4_MASK = 0x000000ff;
        static constexpr unsigned DATA4(unsigned value) { return (value << 0); }
        static constexpr unsigned DATA5_POS = 8;
        static constexpr unsigned DATA5_MASK = 0x0000ff00;
        static constexpr unsigned DATA5(unsigned value) { return (value << 8); }
        static constexpr unsigned DATA6_POS = 16;
        static constexpr unsigned DATA6_MASK = 0x00ff0000;
        static constexpr unsigned DATA6(unsigned value) { return (value << 16); }
        static constexpr unsigned DATA7_POS = 24;
        static constexpr unsigned DATA7_MASK = 0xff000000;
        static constexpr unsigned DATA7(unsigned value) { return (value << 24); }
    } RDH1R;

    uint8_t Reserved2[48];

    volatile union FMR_T // FMR: filter master register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FMR_BIT_T
        {
            unsigned FINIT  : 1; // bit 0 FINIT
            unsigned        : 7; // bits 1..7 unused
            unsigned CAN2SB : 6; // bits 8..13 CAN2SB
            unsigned        : 18; // bits 14..31 unused    
        } bit;
    
        static constexpr unsigned FINIT_POS = 0;
        static constexpr unsigned FINIT_MASK = 0x00000001;
        static constexpr unsigned FINIT(unsigned value) { return (value << 0); }
        static constexpr unsigned CAN2SB_POS = 8;
        static constexpr unsigned CAN2SB_MASK = 0x00003f00;
        static constexpr unsigned CAN2SB(unsigned value) { return (value << 8); }
    } FMR;

    volatile union FM1R_T // FM1R: filter mode register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FM1R_BIT_T
        {
            unsigned FBM0  : 1; // bit 0 Filter mode
            unsigned FBM1  : 1; // bit 1 Filter mode
            unsigned FBM2  : 1; // bit 2 Filter mode
            unsigned FBM3  : 1; // bit 3 Filter mode
            unsigned FBM4  : 1; // bit 4 Filter mode
            unsigned FBM5  : 1; // bit 5 Filter mode
            unsigned FBM6  : 1; // bit 6 Filter mode
            unsigned FBM7  : 1; // bit 7 Filter mode
            unsigned FBM8  : 1; // bit 8 Filter mode
            unsigned FBM9  : 1; // bit 9 Filter mode
            unsigned FBM10 : 1; // bit 10 Filter mode
            unsigned FBM11 : 1; // bit 11 Filter mode
            unsigned FBM12 : 1; // bit 12 Filter mode
            unsigned FBM13 : 1; // bit 13 Filter mode
            unsigned FBM14 : 1; // bit 14 Filter mode
            unsigned FBM15 : 1; // bit 15 Filter mode
            unsigned FBM16 : 1; // bit 16 Filter mode
            unsigned FBM17 : 1; // bit 17 Filter mode
            unsigned FBM18 : 1; // bit 18 Filter mode
            unsigned FBM19 : 1; // bit 19 Filter mode
            unsigned FBM20 : 1; // bit 20 Filter mode
            unsigned FBM21 : 1; // bit 21 Filter mode
            unsigned FBM22 : 1; // bit 22 Filter mode
            unsigned FBM23 : 1; // bit 23 Filter mode
            unsigned FBM24 : 1; // bit 24 Filter mode
            unsigned FBM25 : 1; // bit 25 Filter mode
            unsigned FBM26 : 1; // bit 26 Filter mode
            unsigned FBM27 : 1; // bit 27 Filter mode
            unsigned       : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned FBM0_POS = 0;
        static constexpr unsigned FBM0_MASK = 0x00000001;
        static constexpr unsigned FBM0(unsigned value) { return (value << 0); }
        static constexpr unsigned FBM1_POS = 1;
        static constexpr unsigned FBM1_MASK = 0x00000002;
        static constexpr unsigned FBM1(unsigned value) { return (value << 1); }
        static constexpr unsigned FBM2_POS = 2;
        static constexpr unsigned FBM2_MASK = 0x00000004;
        static constexpr unsigned FBM2(unsigned value) { return (value << 2); }
        static constexpr unsigned FBM3_POS = 3;
        static constexpr unsigned FBM3_MASK = 0x00000008;
        static constexpr unsigned FBM3(unsigned value) { return (value << 3); }
        static constexpr unsigned FBM4_POS = 4;
        static constexpr unsigned FBM4_MASK = 0x00000010;
        static constexpr unsigned FBM4(unsigned value) { return (value << 4); }
        static constexpr unsigned FBM5_POS = 5;
        static constexpr unsigned FBM5_MASK = 0x00000020;
        static constexpr unsigned FBM5(unsigned value) { return (value << 5); }
        static constexpr unsigned FBM6_POS = 6;
        static constexpr unsigned FBM6_MASK = 0x00000040;
        static constexpr unsigned FBM6(unsigned value) { return (value << 6); }
        static constexpr unsigned FBM7_POS = 7;
        static constexpr unsigned FBM7_MASK = 0x00000080;
        static constexpr unsigned FBM7(unsigned value) { return (value << 7); }
        static constexpr unsigned FBM8_POS = 8;
        static constexpr unsigned FBM8_MASK = 0x00000100;
        static constexpr unsigned FBM8(unsigned value) { return (value << 8); }
        static constexpr unsigned FBM9_POS = 9;
        static constexpr unsigned FBM9_MASK = 0x00000200;
        static constexpr unsigned FBM9(unsigned value) { return (value << 9); }
        static constexpr unsigned FBM10_POS = 10;
        static constexpr unsigned FBM10_MASK = 0x00000400;
        static constexpr unsigned FBM10(unsigned value) { return (value << 10); }
        static constexpr unsigned FBM11_POS = 11;
        static constexpr unsigned FBM11_MASK = 0x00000800;
        static constexpr unsigned FBM11(unsigned value) { return (value << 11); }
        static constexpr unsigned FBM12_POS = 12;
        static constexpr unsigned FBM12_MASK = 0x00001000;
        static constexpr unsigned FBM12(unsigned value) { return (value << 12); }
        static constexpr unsigned FBM13_POS = 13;
        static constexpr unsigned FBM13_MASK = 0x00002000;
        static constexpr unsigned FBM13(unsigned value) { return (value << 13); }
        static constexpr unsigned FBM14_POS = 14;
        static constexpr unsigned FBM14_MASK = 0x00004000;
        static constexpr unsigned FBM14(unsigned value) { return (value << 14); }
        static constexpr unsigned FBM15_POS = 15;
        static constexpr unsigned FBM15_MASK = 0x00008000;
        static constexpr unsigned FBM15(unsigned value) { return (value << 15); }
        static constexpr unsigned FBM16_POS = 16;
        static constexpr unsigned FBM16_MASK = 0x00010000;
        static constexpr unsigned FBM16(unsigned value) { return (value << 16); }
        static constexpr unsigned FBM17_POS = 17;
        static constexpr unsigned FBM17_MASK = 0x00020000;
        static constexpr unsigned FBM17(unsigned value) { return (value << 17); }
        static constexpr unsigned FBM18_POS = 18;
        static constexpr unsigned FBM18_MASK = 0x00040000;
        static constexpr unsigned FBM18(unsigned value) { return (value << 18); }
        static constexpr unsigned FBM19_POS = 19;
        static constexpr unsigned FBM19_MASK = 0x00080000;
        static constexpr unsigned FBM19(unsigned value) { return (value << 19); }
        static constexpr unsigned FBM20_POS = 20;
        static constexpr unsigned FBM20_MASK = 0x00100000;
        static constexpr unsigned FBM20(unsigned value) { return (value << 20); }
        static constexpr unsigned FBM21_POS = 21;
        static constexpr unsigned FBM21_MASK = 0x00200000;
        static constexpr unsigned FBM21(unsigned value) { return (value << 21); }
        static constexpr unsigned FBM22_POS = 22;
        static constexpr unsigned FBM22_MASK = 0x00400000;
        static constexpr unsigned FBM22(unsigned value) { return (value << 22); }
        static constexpr unsigned FBM23_POS = 23;
        static constexpr unsigned FBM23_MASK = 0x00800000;
        static constexpr unsigned FBM23(unsigned value) { return (value << 23); }
        static constexpr unsigned FBM24_POS = 24;
        static constexpr unsigned FBM24_MASK = 0x01000000;
        static constexpr unsigned FBM24(unsigned value) { return (value << 24); }
        static constexpr unsigned FBM25_POS = 25;
        static constexpr unsigned FBM25_MASK = 0x02000000;
        static constexpr unsigned FBM25(unsigned value) { return (value << 25); }
        static constexpr unsigned FBM26_POS = 26;
        static constexpr unsigned FBM26_MASK = 0x04000000;
        static constexpr unsigned FBM26(unsigned value) { return (value << 26); }
        static constexpr unsigned FBM27_POS = 27;
        static constexpr unsigned FBM27_MASK = 0x08000000;
        static constexpr unsigned FBM27(unsigned value) { return (value << 27); }
    } FM1R;

    uint8_t Reserved3[4];

    volatile union FS1R_T // FS1R: filter scale register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FS1R_BIT_T
        {
            unsigned FSC0  : 1; // bit 0 Filter scale configuration
            unsigned FSC1  : 1; // bit 1 Filter scale configuration
            unsigned FSC2  : 1; // bit 2 Filter scale configuration
            unsigned FSC3  : 1; // bit 3 Filter scale configuration
            unsigned FSC4  : 1; // bit 4 Filter scale configuration
            unsigned FSC5  : 1; // bit 5 Filter scale configuration
            unsigned FSC6  : 1; // bit 6 Filter scale configuration
            unsigned FSC7  : 1; // bit 7 Filter scale configuration
            unsigned FSC8  : 1; // bit 8 Filter scale configuration
            unsigned FSC9  : 1; // bit 9 Filter scale configuration
            unsigned FSC10 : 1; // bit 10 Filter scale configuration
            unsigned FSC11 : 1; // bit 11 Filter scale configuration
            unsigned FSC12 : 1; // bit 12 Filter scale configuration
            unsigned FSC13 : 1; // bit 13 Filter scale configuration
            unsigned FSC14 : 1; // bit 14 Filter scale configuration
            unsigned FSC15 : 1; // bit 15 Filter scale configuration
            unsigned FSC16 : 1; // bit 16 Filter scale configuration
            unsigned FSC17 : 1; // bit 17 Filter scale configuration
            unsigned FSC18 : 1; // bit 18 Filter scale configuration
            unsigned FSC19 : 1; // bit 19 Filter scale configuration
            unsigned FSC20 : 1; // bit 20 Filter scale configuration
            unsigned FSC21 : 1; // bit 21 Filter scale configuration
            unsigned FSC22 : 1; // bit 22 Filter scale configuration
            unsigned FSC23 : 1; // bit 23 Filter scale configuration
            unsigned FSC24 : 1; // bit 24 Filter scale configuration
            unsigned FSC25 : 1; // bit 25 Filter scale configuration
            unsigned FSC26 : 1; // bit 26 Filter scale configuration
            unsigned FSC27 : 1; // bit 27 Filter scale configuration
            unsigned       : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned FSC0_POS = 0;
        static constexpr unsigned FSC0_MASK = 0x00000001;
        static constexpr unsigned FSC0(unsigned value) { return (value << 0); }
        static constexpr unsigned FSC1_POS = 1;
        static constexpr unsigned FSC1_MASK = 0x00000002;
        static constexpr unsigned FSC1(unsigned value) { return (value << 1); }
        static constexpr unsigned FSC2_POS = 2;
        static constexpr unsigned FSC2_MASK = 0x00000004;
        static constexpr unsigned FSC2(unsigned value) { return (value << 2); }
        static constexpr unsigned FSC3_POS = 3;
        static constexpr unsigned FSC3_MASK = 0x00000008;
        static constexpr unsigned FSC3(unsigned value) { return (value << 3); }
        static constexpr unsigned FSC4_POS = 4;
        static constexpr unsigned FSC4_MASK = 0x00000010;
        static constexpr unsigned FSC4(unsigned value) { return (value << 4); }
        static constexpr unsigned FSC5_POS = 5;
        static constexpr unsigned FSC5_MASK = 0x00000020;
        static constexpr unsigned FSC5(unsigned value) { return (value << 5); }
        static constexpr unsigned FSC6_POS = 6;
        static constexpr unsigned FSC6_MASK = 0x00000040;
        static constexpr unsigned FSC6(unsigned value) { return (value << 6); }
        static constexpr unsigned FSC7_POS = 7;
        static constexpr unsigned FSC7_MASK = 0x00000080;
        static constexpr unsigned FSC7(unsigned value) { return (value << 7); }
        static constexpr unsigned FSC8_POS = 8;
        static constexpr unsigned FSC8_MASK = 0x00000100;
        static constexpr unsigned FSC8(unsigned value) { return (value << 8); }
        static constexpr unsigned FSC9_POS = 9;
        static constexpr unsigned FSC9_MASK = 0x00000200;
        static constexpr unsigned FSC9(unsigned value) { return (value << 9); }
        static constexpr unsigned FSC10_POS = 10;
        static constexpr unsigned FSC10_MASK = 0x00000400;
        static constexpr unsigned FSC10(unsigned value) { return (value << 10); }
        static constexpr unsigned FSC11_POS = 11;
        static constexpr unsigned FSC11_MASK = 0x00000800;
        static constexpr unsigned FSC11(unsigned value) { return (value << 11); }
        static constexpr unsigned FSC12_POS = 12;
        static constexpr unsigned FSC12_MASK = 0x00001000;
        static constexpr unsigned FSC12(unsigned value) { return (value << 12); }
        static constexpr unsigned FSC13_POS = 13;
        static constexpr unsigned FSC13_MASK = 0x00002000;
        static constexpr unsigned FSC13(unsigned value) { return (value << 13); }
        static constexpr unsigned FSC14_POS = 14;
        static constexpr unsigned FSC14_MASK = 0x00004000;
        static constexpr unsigned FSC14(unsigned value) { return (value << 14); }
        static constexpr unsigned FSC15_POS = 15;
        static constexpr unsigned FSC15_MASK = 0x00008000;
        static constexpr unsigned FSC15(unsigned value) { return (value << 15); }
        static constexpr unsigned FSC16_POS = 16;
        static constexpr unsigned FSC16_MASK = 0x00010000;
        static constexpr unsigned FSC16(unsigned value) { return (value << 16); }
        static constexpr unsigned FSC17_POS = 17;
        static constexpr unsigned FSC17_MASK = 0x00020000;
        static constexpr unsigned FSC17(unsigned value) { return (value << 17); }
        static constexpr unsigned FSC18_POS = 18;
        static constexpr unsigned FSC18_MASK = 0x00040000;
        static constexpr unsigned FSC18(unsigned value) { return (value << 18); }
        static constexpr unsigned FSC19_POS = 19;
        static constexpr unsigned FSC19_MASK = 0x00080000;
        static constexpr unsigned FSC19(unsigned value) { return (value << 19); }
        static constexpr unsigned FSC20_POS = 20;
        static constexpr unsigned FSC20_MASK = 0x00100000;
        static constexpr unsigned FSC20(unsigned value) { return (value << 20); }
        static constexpr unsigned FSC21_POS = 21;
        static constexpr unsigned FSC21_MASK = 0x00200000;
        static constexpr unsigned FSC21(unsigned value) { return (value << 21); }
        static constexpr unsigned FSC22_POS = 22;
        static constexpr unsigned FSC22_MASK = 0x00400000;
        static constexpr unsigned FSC22(unsigned value) { return (value << 22); }
        static constexpr unsigned FSC23_POS = 23;
        static constexpr unsigned FSC23_MASK = 0x00800000;
        static constexpr unsigned FSC23(unsigned value) { return (value << 23); }
        static constexpr unsigned FSC24_POS = 24;
        static constexpr unsigned FSC24_MASK = 0x01000000;
        static constexpr unsigned FSC24(unsigned value) { return (value << 24); }
        static constexpr unsigned FSC25_POS = 25;
        static constexpr unsigned FSC25_MASK = 0x02000000;
        static constexpr unsigned FSC25(unsigned value) { return (value << 25); }
        static constexpr unsigned FSC26_POS = 26;
        static constexpr unsigned FSC26_MASK = 0x04000000;
        static constexpr unsigned FSC26(unsigned value) { return (value << 26); }
        static constexpr unsigned FSC27_POS = 27;
        static constexpr unsigned FSC27_MASK = 0x08000000;
        static constexpr unsigned FSC27(unsigned value) { return (value << 27); }
    } FS1R;

    uint8_t Reserved4[4];

    volatile union FFA1R_T // FFA1R: filter FIFO assignment register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FFA1R_BIT_T
        {
            unsigned FFA0  : 1; // bit 0 Filter FIFO assignment for filter 0
            unsigned FFA1  : 1; // bit 1 Filter FIFO assignment for filter 1
            unsigned FFA2  : 1; // bit 2 Filter FIFO assignment for filter 2
            unsigned FFA3  : 1; // bit 3 Filter FIFO assignment for filter 3
            unsigned FFA4  : 1; // bit 4 Filter FIFO assignment for filter 4
            unsigned FFA5  : 1; // bit 5 Filter FIFO assignment for filter 5
            unsigned FFA6  : 1; // bit 6 Filter FIFO assignment for filter 6
            unsigned FFA7  : 1; // bit 7 Filter FIFO assignment for filter 7
            unsigned FFA8  : 1; // bit 8 Filter FIFO assignment for filter 8
            unsigned FFA9  : 1; // bit 9 Filter FIFO assignment for filter 9
            unsigned FFA10 : 1; // bit 10 Filter FIFO assignment for filter 10
            unsigned FFA11 : 1; // bit 11 Filter FIFO assignment for filter 11
            unsigned FFA12 : 1; // bit 12 Filter FIFO assignment for filter 12
            unsigned FFA13 : 1; // bit 13 Filter FIFO assignment for filter 13
            unsigned FFA14 : 1; // bit 14 Filter FIFO assignment for filter 14
            unsigned FFA15 : 1; // bit 15 Filter FIFO assignment for filter 15
            unsigned FFA16 : 1; // bit 16 Filter FIFO assignment for filter 16
            unsigned FFA17 : 1; // bit 17 Filter FIFO assignment for filter 17
            unsigned FFA18 : 1; // bit 18 Filter FIFO assignment for filter 18
            unsigned FFA19 : 1; // bit 19 Filter FIFO assignment for filter 19
            unsigned FFA20 : 1; // bit 20 Filter FIFO assignment for filter 20
            unsigned FFA21 : 1; // bit 21 Filter FIFO assignment for filter 21
            unsigned FFA22 : 1; // bit 22 Filter FIFO assignment for filter 22
            unsigned FFA23 : 1; // bit 23 Filter FIFO assignment for filter 23
            unsigned FFA24 : 1; // bit 24 Filter FIFO assignment for filter 24
            unsigned FFA25 : 1; // bit 25 Filter FIFO assignment for filter 25
            unsigned FFA26 : 1; // bit 26 Filter FIFO assignment for filter 26
            unsigned FFA27 : 1; // bit 27 Filter FIFO assignment for filter 27
            unsigned       : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned FFA0_POS = 0;
        static constexpr unsigned FFA0_MASK = 0x00000001;
        static constexpr unsigned FFA0(unsigned value) { return (value << 0); }
        static constexpr unsigned FFA1_POS = 1;
        static constexpr unsigned FFA1_MASK = 0x00000002;
        static constexpr unsigned FFA1(unsigned value) { return (value << 1); }
        static constexpr unsigned FFA2_POS = 2;
        static constexpr unsigned FFA2_MASK = 0x00000004;
        static constexpr unsigned FFA2(unsigned value) { return (value << 2); }
        static constexpr unsigned FFA3_POS = 3;
        static constexpr unsigned FFA3_MASK = 0x00000008;
        static constexpr unsigned FFA3(unsigned value) { return (value << 3); }
        static constexpr unsigned FFA4_POS = 4;
        static constexpr unsigned FFA4_MASK = 0x00000010;
        static constexpr unsigned FFA4(unsigned value) { return (value << 4); }
        static constexpr unsigned FFA5_POS = 5;
        static constexpr unsigned FFA5_MASK = 0x00000020;
        static constexpr unsigned FFA5(unsigned value) { return (value << 5); }
        static constexpr unsigned FFA6_POS = 6;
        static constexpr unsigned FFA6_MASK = 0x00000040;
        static constexpr unsigned FFA6(unsigned value) { return (value << 6); }
        static constexpr unsigned FFA7_POS = 7;
        static constexpr unsigned FFA7_MASK = 0x00000080;
        static constexpr unsigned FFA7(unsigned value) { return (value << 7); }
        static constexpr unsigned FFA8_POS = 8;
        static constexpr unsigned FFA8_MASK = 0x00000100;
        static constexpr unsigned FFA8(unsigned value) { return (value << 8); }
        static constexpr unsigned FFA9_POS = 9;
        static constexpr unsigned FFA9_MASK = 0x00000200;
        static constexpr unsigned FFA9(unsigned value) { return (value << 9); }
        static constexpr unsigned FFA10_POS = 10;
        static constexpr unsigned FFA10_MASK = 0x00000400;
        static constexpr unsigned FFA10(unsigned value) { return (value << 10); }
        static constexpr unsigned FFA11_POS = 11;
        static constexpr unsigned FFA11_MASK = 0x00000800;
        static constexpr unsigned FFA11(unsigned value) { return (value << 11); }
        static constexpr unsigned FFA12_POS = 12;
        static constexpr unsigned FFA12_MASK = 0x00001000;
        static constexpr unsigned FFA12(unsigned value) { return (value << 12); }
        static constexpr unsigned FFA13_POS = 13;
        static constexpr unsigned FFA13_MASK = 0x00002000;
        static constexpr unsigned FFA13(unsigned value) { return (value << 13); }
        static constexpr unsigned FFA14_POS = 14;
        static constexpr unsigned FFA14_MASK = 0x00004000;
        static constexpr unsigned FFA14(unsigned value) { return (value << 14); }
        static constexpr unsigned FFA15_POS = 15;
        static constexpr unsigned FFA15_MASK = 0x00008000;
        static constexpr unsigned FFA15(unsigned value) { return (value << 15); }
        static constexpr unsigned FFA16_POS = 16;
        static constexpr unsigned FFA16_MASK = 0x00010000;
        static constexpr unsigned FFA16(unsigned value) { return (value << 16); }
        static constexpr unsigned FFA17_POS = 17;
        static constexpr unsigned FFA17_MASK = 0x00020000;
        static constexpr unsigned FFA17(unsigned value) { return (value << 17); }
        static constexpr unsigned FFA18_POS = 18;
        static constexpr unsigned FFA18_MASK = 0x00040000;
        static constexpr unsigned FFA18(unsigned value) { return (value << 18); }
        static constexpr unsigned FFA19_POS = 19;
        static constexpr unsigned FFA19_MASK = 0x00080000;
        static constexpr unsigned FFA19(unsigned value) { return (value << 19); }
        static constexpr unsigned FFA20_POS = 20;
        static constexpr unsigned FFA20_MASK = 0x00100000;
        static constexpr unsigned FFA20(unsigned value) { return (value << 20); }
        static constexpr unsigned FFA21_POS = 21;
        static constexpr unsigned FFA21_MASK = 0x00200000;
        static constexpr unsigned FFA21(unsigned value) { return (value << 21); }
        static constexpr unsigned FFA22_POS = 22;
        static constexpr unsigned FFA22_MASK = 0x00400000;
        static constexpr unsigned FFA22(unsigned value) { return (value << 22); }
        static constexpr unsigned FFA23_POS = 23;
        static constexpr unsigned FFA23_MASK = 0x00800000;
        static constexpr unsigned FFA23(unsigned value) { return (value << 23); }
        static constexpr unsigned FFA24_POS = 24;
        static constexpr unsigned FFA24_MASK = 0x01000000;
        static constexpr unsigned FFA24(unsigned value) { return (value << 24); }
        static constexpr unsigned FFA25_POS = 25;
        static constexpr unsigned FFA25_MASK = 0x02000000;
        static constexpr unsigned FFA25(unsigned value) { return (value << 25); }
        static constexpr unsigned FFA26_POS = 26;
        static constexpr unsigned FFA26_MASK = 0x04000000;
        static constexpr unsigned FFA26(unsigned value) { return (value << 26); }
        static constexpr unsigned FFA27_POS = 27;
        static constexpr unsigned FFA27_MASK = 0x08000000;
        static constexpr unsigned FFA27(unsigned value) { return (value << 27); }
    } FFA1R;

    uint8_t Reserved5[4];

    volatile union FA1R_T // FA1R: filter activation register 
    {
        uint32_t reg;
        struct __attribute__((packed)) FA1R_BIT_T
        {
            unsigned FACT0  : 1; // bit 0 Filter active
            unsigned FACT1  : 1; // bit 1 Filter active
            unsigned FACT2  : 1; // bit 2 Filter active
            unsigned FACT3  : 1; // bit 3 Filter active
            unsigned FACT4  : 1; // bit 4 Filter active
            unsigned FACT5  : 1; // bit 5 Filter active
            unsigned FACT6  : 1; // bit 6 Filter active
            unsigned FACT7  : 1; // bit 7 Filter active
            unsigned FACT8  : 1; // bit 8 Filter active
            unsigned FACT9  : 1; // bit 9 Filter active
            unsigned FACT10 : 1; // bit 10 Filter active
            unsigned FACT11 : 1; // bit 11 Filter active
            unsigned FACT12 : 1; // bit 12 Filter active
            unsigned FACT13 : 1; // bit 13 Filter active
            unsigned FACT14 : 1; // bit 14 Filter active
            unsigned FACT15 : 1; // bit 15 Filter active
            unsigned FACT16 : 1; // bit 16 Filter active
            unsigned FACT17 : 1; // bit 17 Filter active
            unsigned FACT18 : 1; // bit 18 Filter active
            unsigned FACT19 : 1; // bit 19 Filter active
            unsigned FACT20 : 1; // bit 20 Filter active
            unsigned FACT21 : 1; // bit 21 Filter active
            unsigned FACT22 : 1; // bit 22 Filter active
            unsigned FACT23 : 1; // bit 23 Filter active
            unsigned FACT24 : 1; // bit 24 Filter active
            unsigned FACT25 : 1; // bit 25 Filter active
            unsigned FACT26 : 1; // bit 26 Filter active
            unsigned FACT27 : 1; // bit 27 Filter active
            unsigned        : 4; // bits 28..31 unused    
        } bit;
    
        static constexpr unsigned FACT0_POS = 0;
        static constexpr unsigned FACT0_MASK = 0x00000001;
        static constexpr unsigned FACT0(unsigned value) { return (value << 0); }
        static constexpr unsigned FACT1_POS = 1;
        static constexpr unsigned FACT1_MASK = 0x00000002;
        static constexpr unsigned FACT1(unsigned value) { return (value << 1); }
        static constexpr unsigned FACT2_POS = 2;
        static constexpr unsigned FACT2_MASK = 0x00000004;
        static constexpr unsigned FACT2(unsigned value) { return (value << 2); }
        static constexpr unsigned FACT3_POS = 3;
        static constexpr unsigned FACT3_MASK = 0x00000008;
        static constexpr unsigned FACT3(unsigned value) { return (value << 3); }
        static constexpr unsigned FACT4_POS = 4;
        static constexpr unsigned FACT4_MASK = 0x00000010;
        static constexpr unsigned FACT4(unsigned value) { return (value << 4); }
        static constexpr unsigned FACT5_POS = 5;
        static constexpr unsigned FACT5_MASK = 0x00000020;
        static constexpr unsigned FACT5(unsigned value) { return (value << 5); }
        static constexpr unsigned FACT6_POS = 6;
        static constexpr unsigned FACT6_MASK = 0x00000040;
        static constexpr unsigned FACT6(unsigned value) { return (value << 6); }
        static constexpr unsigned FACT7_POS = 7;
        static constexpr unsigned FACT7_MASK = 0x00000080;
        static constexpr unsigned FACT7(unsigned value) { return (value << 7); }
        static constexpr unsigned FACT8_POS = 8;
        static constexpr unsigned FACT8_MASK = 0x00000100;
        static constexpr unsigned FACT8(unsigned value) { return (value << 8); }
        static constexpr unsigned FACT9_POS = 9;
        static constexpr unsigned FACT9_MASK = 0x00000200;
        static constexpr unsigned FACT9(unsigned value) { return (value << 9); }
        static constexpr unsigned FACT10_POS = 10;
        static constexpr unsigned FACT10_MASK = 0x00000400;
        static constexpr unsigned FACT10(unsigned value) { return (value << 10); }
        static constexpr unsigned FACT11_POS = 11;
        static constexpr unsigned FACT11_MASK = 0x00000800;
        static constexpr unsigned FACT11(unsigned value) { return (value << 11); }
        static constexpr unsigned FACT12_POS = 12;
        static constexpr unsigned FACT12_MASK = 0x00001000;
        static constexpr unsigned FACT12(unsigned value) { return (value << 12); }
        static constexpr unsigned FACT13_POS = 13;
        static constexpr unsigned FACT13_MASK = 0x00002000;
        static constexpr unsigned FACT13(unsigned value) { return (value << 13); }
        static constexpr unsigned FACT14_POS = 14;
        static constexpr unsigned FACT14_MASK = 0x00004000;
        static constexpr unsigned FACT14(unsigned value) { return (value << 14); }
        static constexpr unsigned FACT15_POS = 15;
        static constexpr unsigned FACT15_MASK = 0x00008000;
        static constexpr unsigned FACT15(unsigned value) { return (value << 15); }
        static constexpr unsigned FACT16_POS = 16;
        static constexpr unsigned FACT16_MASK = 0x00010000;
        static constexpr unsigned FACT16(unsigned value) { return (value << 16); }
        static constexpr unsigned FACT17_POS = 17;
        static constexpr unsigned FACT17_MASK = 0x00020000;
        static constexpr unsigned FACT17(unsigned value) { return (value << 17); }
        static constexpr unsigned FACT18_POS = 18;
        static constexpr unsigned FACT18_MASK = 0x00040000;
        static constexpr unsigned FACT18(unsigned value) { return (value << 18); }
        static constexpr unsigned FACT19_POS = 19;
        static constexpr unsigned FACT19_MASK = 0x00080000;
        static constexpr unsigned FACT19(unsigned value) { return (value << 19); }
        static constexpr unsigned FACT20_POS = 20;
        static constexpr unsigned FACT20_MASK = 0x00100000;
        static constexpr unsigned FACT20(unsigned value) { return (value << 20); }
        static constexpr unsigned FACT21_POS = 21;
        static constexpr unsigned FACT21_MASK = 0x00200000;
        static constexpr unsigned FACT21(unsigned value) { return (value << 21); }
        static constexpr unsigned FACT22_POS = 22;
        static constexpr unsigned FACT22_MASK = 0x00400000;
        static constexpr unsigned FACT22(unsigned value) { return (value << 22); }
        static constexpr unsigned FACT23_POS = 23;
        static constexpr unsigned FACT23_MASK = 0x00800000;
        static constexpr unsigned FACT23(unsigned value) { return (value << 23); }
        static constexpr unsigned FACT24_POS = 24;
        static constexpr unsigned FACT24_MASK = 0x01000000;
        static constexpr unsigned FACT24(unsigned value) { return (value << 24); }
        static constexpr unsigned FACT25_POS = 25;
        static constexpr unsigned FACT25_MASK = 0x02000000;
        static constexpr unsigned FACT25(unsigned value) { return (value << 25); }
        static constexpr unsigned FACT26_POS = 26;
        static constexpr unsigned FACT26_MASK = 0x04000000;
        static constexpr unsigned FACT26(unsigned value) { return (value << 26); }
        static constexpr unsigned FACT27_POS = 27;
        static constexpr unsigned FACT27_MASK = 0x08000000;
        static constexpr unsigned FACT27(unsigned value) { return (value << 27); }
    } FA1R;

    uint8_t Reserved6[32];

    volatile union F0R1_T // F0R1: Filter bank 0 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F0R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F0R1;

    volatile union F0R2_T // F0R2: Filter bank 0 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F0R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F0R2;

    volatile union F1R1_T // F1R1: Filter bank 1 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F1R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F1R1;

    volatile union F1R2_T // F1R2: Filter bank 1 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F1R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F1R2;

    volatile union F2R1_T // F2R1: Filter bank 2 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F2R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F2R1;

    volatile union F2R2_T // F2R2: Filter bank 2 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F2R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F2R2;

    volatile union F3R1_T // F3R1: Filter bank 3 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F3R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F3R1;

    volatile union F3R2_T // F3R2: Filter bank 3 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F3R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F3R2;

    volatile union F4R1_T // F4R1: Filter bank 4 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F4R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F4R1;

    volatile union F4R2_T // F4R2: Filter bank 4 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F4R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F4R2;

    volatile union F5R1_T // F5R1: Filter bank 5 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F5R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F5R1;

    volatile union F5R2_T // F5R2: Filter bank 5 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F5R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F5R2;

    volatile union F6R1_T // F6R1: Filter bank 6 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F6R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F6R1;

    volatile union F6R2_T // F6R2: Filter bank 6 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F6R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F6R2;

    volatile union F7R1_T // F7R1: Filter bank 7 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F7R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F7R1;

    volatile union F7R2_T // F7R2: Filter bank 7 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F7R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F7R2;

    volatile union F8R1_T // F8R1: Filter bank 8 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F8R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F8R1;

    volatile union F8R2_T // F8R2: Filter bank 8 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F8R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F8R2;

    volatile union F9R1_T // F9R1: Filter bank 9 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F9R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F9R1;

    volatile union F9R2_T // F9R2: Filter bank 9 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F9R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F9R2;

    volatile union F10R1_T // F10R1: Filter bank 10 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F10R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F10R1;

    volatile union F10R2_T // F10R2: Filter bank 10 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F10R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F10R2;

    volatile union F11R1_T // F11R1: Filter bank 11 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F11R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F11R1;

    volatile union F11R2_T // F11R2: Filter bank 11 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F11R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F11R2;

    volatile union F12R1_T // F12R1: Filter bank 4 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F12R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F12R1;

    volatile union F12R2_T // F12R2: Filter bank 12 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F12R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F12R2;

    volatile union F13R1_T // F13R1: Filter bank 13 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F13R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F13R1;

    volatile union F13R2_T // F13R2: Filter bank 13 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F13R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F13R2;

    volatile union F14R1_T // F14R1: Filter bank 14 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F14R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F14R1;

    volatile union F14R2_T // F14R2: Filter bank 14 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F14R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F14R2;

    volatile union F15R1_T // F15R1: Filter bank 15 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F15R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F15R1;

    volatile union F15R2_T // F15R2: Filter bank 15 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F15R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F15R2;

    volatile union F16R1_T // F16R1: Filter bank 16 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F16R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F16R1;

    volatile union F16R2_T // F16R2: Filter bank 16 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F16R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F16R2;

    volatile union F17R1_T // F17R1: Filter bank 17 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F17R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F17R1;

    volatile union F17R2_T // F17R2: Filter bank 17 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F17R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F17R2;

    volatile union F18R1_T // F18R1: Filter bank 18 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F18R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F18R1;

    volatile union F18R2_T // F18R2: Filter bank 18 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F18R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F18R2;

    volatile union F19R1_T // F19R1: Filter bank 19 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F19R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F19R1;

    volatile union F19R2_T // F19R2: Filter bank 19 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F19R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F19R2;

    volatile union F20R1_T // F20R1: Filter bank 20 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F20R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F20R1;

    volatile union F20R2_T // F20R2: Filter bank 20 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F20R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F20R2;

    volatile union F21R1_T // F21R1: Filter bank 21 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F21R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F21R1;

    volatile union F21R2_T // F21R2: Filter bank 21 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F21R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F21R2;

    volatile union F22R1_T // F22R1: Filter bank 22 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F22R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F22R1;

    volatile union F22R2_T // F22R2: Filter bank 22 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F22R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F22R2;

    volatile union F23R1_T // F23R1: Filter bank 23 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F23R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F23R1;

    volatile union F23R2_T // F23R2: Filter bank 23 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F23R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F23R2;

    volatile union F24R1_T // F24R1: Filter bank 24 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F24R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F24R1;

    volatile union F24R2_T // F24R2: Filter bank 24 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F24R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F24R2;

    volatile union F25R1_T // F25R1: Filter bank 25 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F25R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F25R1;

    volatile union F25R2_T // F25R2: Filter bank 25 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F25R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F25R2;

    volatile union F26R1_T // F26R1: Filter bank 26 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F26R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F26R1;

    volatile union F26R2_T // F26R2: Filter bank 26 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F26R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F26R2;

    volatile union F27R1_T // F27R1: Filter bank 27 register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) F27R1_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F27R1;

    volatile union F27R2_T // F27R2: Filter bank 27 register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) F27R2_BIT_T
        {
            unsigned FB0  : 1; // bit 0 Filter bits
            unsigned FB1  : 1; // bit 1 Filter bits
            unsigned FB2  : 1; // bit 2 Filter bits
            unsigned FB3  : 1; // bit 3 Filter bits
            unsigned FB4  : 1; // bit 4 Filter bits
            unsigned FB5  : 1; // bit 5 Filter bits
            unsigned FB6  : 1; // bit 6 Filter bits
            unsigned FB7  : 1; // bit 7 Filter bits
            unsigned FB8  : 1; // bit 8 Filter bits
            unsigned FB9  : 1; // bit 9 Filter bits
            unsigned FB10 : 1; // bit 10 Filter bits
            unsigned FB11 : 1; // bit 11 Filter bits
            unsigned FB12 : 1; // bit 12 Filter bits
            unsigned FB13 : 1; // bit 13 Filter bits
            unsigned FB14 : 1; // bit 14 Filter bits
            unsigned FB15 : 1; // bit 15 Filter bits
            unsigned FB16 : 1; // bit 16 Filter bits
            unsigned FB17 : 1; // bit 17 Filter bits
            unsigned FB18 : 1; // bit 18 Filter bits
            unsigned FB19 : 1; // bit 19 Filter bits
            unsigned FB20 : 1; // bit 20 Filter bits
            unsigned FB21 : 1; // bit 21 Filter bits
            unsigned FB22 : 1; // bit 22 Filter bits
            unsigned FB23 : 1; // bit 23 Filter bits
            unsigned FB24 : 1; // bit 24 Filter bits
            unsigned FB25 : 1; // bit 25 Filter bits
            unsigned FB26 : 1; // bit 26 Filter bits
            unsigned FB27 : 1; // bit 27 Filter bits
            unsigned FB28 : 1; // bit 28 Filter bits
            unsigned FB29 : 1; // bit 29 Filter bits
            unsigned FB30 : 1; // bit 30 Filter bits
            unsigned FB31 : 1; // bit 31 Filter bits    
        } bit;
    
        static constexpr unsigned FB0_POS = 0;
        static constexpr unsigned FB0_MASK = 0x00000001;
        static constexpr unsigned FB0(unsigned value) { return (value << 0); }
        static constexpr unsigned FB1_POS = 1;
        static constexpr unsigned FB1_MASK = 0x00000002;
        static constexpr unsigned FB1(unsigned value) { return (value << 1); }
        static constexpr unsigned FB2_POS = 2;
        static constexpr unsigned FB2_MASK = 0x00000004;
        static constexpr unsigned FB2(unsigned value) { return (value << 2); }
        static constexpr unsigned FB3_POS = 3;
        static constexpr unsigned FB3_MASK = 0x00000008;
        static constexpr unsigned FB3(unsigned value) { return (value << 3); }
        static constexpr unsigned FB4_POS = 4;
        static constexpr unsigned FB4_MASK = 0x00000010;
        static constexpr unsigned FB4(unsigned value) { return (value << 4); }
        static constexpr unsigned FB5_POS = 5;
        static constexpr unsigned FB5_MASK = 0x00000020;
        static constexpr unsigned FB5(unsigned value) { return (value << 5); }
        static constexpr unsigned FB6_POS = 6;
        static constexpr unsigned FB6_MASK = 0x00000040;
        static constexpr unsigned FB6(unsigned value) { return (value << 6); }
        static constexpr unsigned FB7_POS = 7;
        static constexpr unsigned FB7_MASK = 0x00000080;
        static constexpr unsigned FB7(unsigned value) { return (value << 7); }
        static constexpr unsigned FB8_POS = 8;
        static constexpr unsigned FB8_MASK = 0x00000100;
        static constexpr unsigned FB8(unsigned value) { return (value << 8); }
        static constexpr unsigned FB9_POS = 9;
        static constexpr unsigned FB9_MASK = 0x00000200;
        static constexpr unsigned FB9(unsigned value) { return (value << 9); }
        static constexpr unsigned FB10_POS = 10;
        static constexpr unsigned FB10_MASK = 0x00000400;
        static constexpr unsigned FB10(unsigned value) { return (value << 10); }
        static constexpr unsigned FB11_POS = 11;
        static constexpr unsigned FB11_MASK = 0x00000800;
        static constexpr unsigned FB11(unsigned value) { return (value << 11); }
        static constexpr unsigned FB12_POS = 12;
        static constexpr unsigned FB12_MASK = 0x00001000;
        static constexpr unsigned FB12(unsigned value) { return (value << 12); }
        static constexpr unsigned FB13_POS = 13;
        static constexpr unsigned FB13_MASK = 0x00002000;
        static constexpr unsigned FB13(unsigned value) { return (value << 13); }
        static constexpr unsigned FB14_POS = 14;
        static constexpr unsigned FB14_MASK = 0x00004000;
        static constexpr unsigned FB14(unsigned value) { return (value << 14); }
        static constexpr unsigned FB15_POS = 15;
        static constexpr unsigned FB15_MASK = 0x00008000;
        static constexpr unsigned FB15(unsigned value) { return (value << 15); }
        static constexpr unsigned FB16_POS = 16;
        static constexpr unsigned FB16_MASK = 0x00010000;
        static constexpr unsigned FB16(unsigned value) { return (value << 16); }
        static constexpr unsigned FB17_POS = 17;
        static constexpr unsigned FB17_MASK = 0x00020000;
        static constexpr unsigned FB17(unsigned value) { return (value << 17); }
        static constexpr unsigned FB18_POS = 18;
        static constexpr unsigned FB18_MASK = 0x00040000;
        static constexpr unsigned FB18(unsigned value) { return (value << 18); }
        static constexpr unsigned FB19_POS = 19;
        static constexpr unsigned FB19_MASK = 0x00080000;
        static constexpr unsigned FB19(unsigned value) { return (value << 19); }
        static constexpr unsigned FB20_POS = 20;
        static constexpr unsigned FB20_MASK = 0x00100000;
        static constexpr unsigned FB20(unsigned value) { return (value << 20); }
        static constexpr unsigned FB21_POS = 21;
        static constexpr unsigned FB21_MASK = 0x00200000;
        static constexpr unsigned FB21(unsigned value) { return (value << 21); }
        static constexpr unsigned FB22_POS = 22;
        static constexpr unsigned FB22_MASK = 0x00400000;
        static constexpr unsigned FB22(unsigned value) { return (value << 22); }
        static constexpr unsigned FB23_POS = 23;
        static constexpr unsigned FB23_MASK = 0x00800000;
        static constexpr unsigned FB23(unsigned value) { return (value << 23); }
        static constexpr unsigned FB24_POS = 24;
        static constexpr unsigned FB24_MASK = 0x01000000;
        static constexpr unsigned FB24(unsigned value) { return (value << 24); }
        static constexpr unsigned FB25_POS = 25;
        static constexpr unsigned FB25_MASK = 0x02000000;
        static constexpr unsigned FB25(unsigned value) { return (value << 25); }
        static constexpr unsigned FB26_POS = 26;
        static constexpr unsigned FB26_MASK = 0x04000000;
        static constexpr unsigned FB26(unsigned value) { return (value << 26); }
        static constexpr unsigned FB27_POS = 27;
        static constexpr unsigned FB27_MASK = 0x08000000;
        static constexpr unsigned FB27(unsigned value) { return (value << 27); }
        static constexpr unsigned FB28_POS = 28;
        static constexpr unsigned FB28_MASK = 0x10000000;
        static constexpr unsigned FB28(unsigned value) { return (value << 28); }
        static constexpr unsigned FB29_POS = 29;
        static constexpr unsigned FB29_MASK = 0x20000000;
        static constexpr unsigned FB29(unsigned value) { return (value << 29); }
        static constexpr unsigned FB30_POS = 30;
        static constexpr unsigned FB30_MASK = 0x40000000;
        static constexpr unsigned FB30(unsigned value) { return (value << 30); }
        static constexpr unsigned FB31_POS = 31;
        static constexpr unsigned FB31_MASK = 0x80000000;
        static constexpr unsigned FB31(unsigned value) { return (value << 31); }
    } F27R2;

}; // struct CAN1_T

static_assert(sizeof(CAN_T) == CAN_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp