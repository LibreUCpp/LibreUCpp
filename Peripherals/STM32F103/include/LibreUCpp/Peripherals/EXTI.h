#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) EXTI_T
{
    static constexpr size_t INSTANCE_SIZE = 24;
    static constexpr size_t PADDED_INSTANCE_SIZE = 24;
    static constexpr intptr_t BASE_ADDRESS = 0x40010400;

    static constexpr intptr_t ADDR_OFFSET_IMR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_EMR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_RTSR = 0x08;
    static constexpr intptr_t ADDR_OFFSET_FTSR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SWIER = 0x10;
    static constexpr intptr_t ADDR_OFFSET_PR = 0x14;

    volatile union IMR_T // IMR: Interrupt mask register (EXTI_IMR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) IMR_BIT_T
        {
            unsigned MR0  : 1; // bit 0 Interrupt Mask on line 0
            unsigned MR1  : 1; // bit 1 Interrupt Mask on line 1
            unsigned MR2  : 1; // bit 2 Interrupt Mask on line 2
            unsigned MR3  : 1; // bit 3 Interrupt Mask on line 3
            unsigned MR4  : 1; // bit 4 Interrupt Mask on line 4
            unsigned MR5  : 1; // bit 5 Interrupt Mask on line 5
            unsigned MR6  : 1; // bit 6 Interrupt Mask on line 6
            unsigned MR7  : 1; // bit 7 Interrupt Mask on line 7
            unsigned MR8  : 1; // bit 8 Interrupt Mask on line 8
            unsigned MR9  : 1; // bit 9 Interrupt Mask on line 9
            unsigned MR10 : 1; // bit 10 Interrupt Mask on line 10
            unsigned MR11 : 1; // bit 11 Interrupt Mask on line 11
            unsigned MR12 : 1; // bit 12 Interrupt Mask on line 12
            unsigned MR13 : 1; // bit 13 Interrupt Mask on line 13
            unsigned MR14 : 1; // bit 14 Interrupt Mask on line 14
            unsigned MR15 : 1; // bit 15 Interrupt Mask on line 15
            unsigned MR16 : 1; // bit 16 Interrupt Mask on line 16
            unsigned MR17 : 1; // bit 17 Interrupt Mask on line 17
            unsigned MR18 : 1; // bit 18 Interrupt Mask on line 18
            unsigned      : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned MR0_POS = 0;
        static constexpr unsigned MR0_MASK = 0x00000001;
        static constexpr unsigned MR0(unsigned value) { return (value << 0); }
        static constexpr unsigned MR1_POS = 1;
        static constexpr unsigned MR1_MASK = 0x00000002;
        static constexpr unsigned MR1(unsigned value) { return (value << 1); }
        static constexpr unsigned MR2_POS = 2;
        static constexpr unsigned MR2_MASK = 0x00000004;
        static constexpr unsigned MR2(unsigned value) { return (value << 2); }
        static constexpr unsigned MR3_POS = 3;
        static constexpr unsigned MR3_MASK = 0x00000008;
        static constexpr unsigned MR3(unsigned value) { return (value << 3); }
        static constexpr unsigned MR4_POS = 4;
        static constexpr unsigned MR4_MASK = 0x00000010;
        static constexpr unsigned MR4(unsigned value) { return (value << 4); }
        static constexpr unsigned MR5_POS = 5;
        static constexpr unsigned MR5_MASK = 0x00000020;
        static constexpr unsigned MR5(unsigned value) { return (value << 5); }
        static constexpr unsigned MR6_POS = 6;
        static constexpr unsigned MR6_MASK = 0x00000040;
        static constexpr unsigned MR6(unsigned value) { return (value << 6); }
        static constexpr unsigned MR7_POS = 7;
        static constexpr unsigned MR7_MASK = 0x00000080;
        static constexpr unsigned MR7(unsigned value) { return (value << 7); }
        static constexpr unsigned MR8_POS = 8;
        static constexpr unsigned MR8_MASK = 0x00000100;
        static constexpr unsigned MR8(unsigned value) { return (value << 8); }
        static constexpr unsigned MR9_POS = 9;
        static constexpr unsigned MR9_MASK = 0x00000200;
        static constexpr unsigned MR9(unsigned value) { return (value << 9); }
        static constexpr unsigned MR10_POS = 10;
        static constexpr unsigned MR10_MASK = 0x00000400;
        static constexpr unsigned MR10(unsigned value) { return (value << 10); }
        static constexpr unsigned MR11_POS = 11;
        static constexpr unsigned MR11_MASK = 0x00000800;
        static constexpr unsigned MR11(unsigned value) { return (value << 11); }
        static constexpr unsigned MR12_POS = 12;
        static constexpr unsigned MR12_MASK = 0x00001000;
        static constexpr unsigned MR12(unsigned value) { return (value << 12); }
        static constexpr unsigned MR13_POS = 13;
        static constexpr unsigned MR13_MASK = 0x00002000;
        static constexpr unsigned MR13(unsigned value) { return (value << 13); }
        static constexpr unsigned MR14_POS = 14;
        static constexpr unsigned MR14_MASK = 0x00004000;
        static constexpr unsigned MR14(unsigned value) { return (value << 14); }
        static constexpr unsigned MR15_POS = 15;
        static constexpr unsigned MR15_MASK = 0x00008000;
        static constexpr unsigned MR15(unsigned value) { return (value << 15); }
        static constexpr unsigned MR16_POS = 16;
        static constexpr unsigned MR16_MASK = 0x00010000;
        static constexpr unsigned MR16(unsigned value) { return (value << 16); }
        static constexpr unsigned MR17_POS = 17;
        static constexpr unsigned MR17_MASK = 0x00020000;
        static constexpr unsigned MR17(unsigned value) { return (value << 17); }
        static constexpr unsigned MR18_POS = 18;
        static constexpr unsigned MR18_MASK = 0x00040000;
        static constexpr unsigned MR18(unsigned value) { return (value << 18); }
    } IMR;

    volatile union EMR_T // EMR: Event mask register (EXTI_EMR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) EMR_BIT_T
        {
            unsigned MR0  : 1; // bit 0 Event Mask on line 0
            unsigned MR1  : 1; // bit 1 Event Mask on line 1
            unsigned MR2  : 1; // bit 2 Event Mask on line 2
            unsigned MR3  : 1; // bit 3 Event Mask on line 3
            unsigned MR4  : 1; // bit 4 Event Mask on line 4
            unsigned MR5  : 1; // bit 5 Event Mask on line 5
            unsigned MR6  : 1; // bit 6 Event Mask on line 6
            unsigned MR7  : 1; // bit 7 Event Mask on line 7
            unsigned MR8  : 1; // bit 8 Event Mask on line 8
            unsigned MR9  : 1; // bit 9 Event Mask on line 9
            unsigned MR10 : 1; // bit 10 Event Mask on line 10
            unsigned MR11 : 1; // bit 11 Event Mask on line 11
            unsigned MR12 : 1; // bit 12 Event Mask on line 12
            unsigned MR13 : 1; // bit 13 Event Mask on line 13
            unsigned MR14 : 1; // bit 14 Event Mask on line 14
            unsigned MR15 : 1; // bit 15 Event Mask on line 15
            unsigned MR16 : 1; // bit 16 Event Mask on line 16
            unsigned MR17 : 1; // bit 17 Event Mask on line 17
            unsigned MR18 : 1; // bit 18 Event Mask on line 18
            unsigned      : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned MR0_POS = 0;
        static constexpr unsigned MR0_MASK = 0x00000001;
        static constexpr unsigned MR0(unsigned value) { return (value << 0); }
        static constexpr unsigned MR1_POS = 1;
        static constexpr unsigned MR1_MASK = 0x00000002;
        static constexpr unsigned MR1(unsigned value) { return (value << 1); }
        static constexpr unsigned MR2_POS = 2;
        static constexpr unsigned MR2_MASK = 0x00000004;
        static constexpr unsigned MR2(unsigned value) { return (value << 2); }
        static constexpr unsigned MR3_POS = 3;
        static constexpr unsigned MR3_MASK = 0x00000008;
        static constexpr unsigned MR3(unsigned value) { return (value << 3); }
        static constexpr unsigned MR4_POS = 4;
        static constexpr unsigned MR4_MASK = 0x00000010;
        static constexpr unsigned MR4(unsigned value) { return (value << 4); }
        static constexpr unsigned MR5_POS = 5;
        static constexpr unsigned MR5_MASK = 0x00000020;
        static constexpr unsigned MR5(unsigned value) { return (value << 5); }
        static constexpr unsigned MR6_POS = 6;
        static constexpr unsigned MR6_MASK = 0x00000040;
        static constexpr unsigned MR6(unsigned value) { return (value << 6); }
        static constexpr unsigned MR7_POS = 7;
        static constexpr unsigned MR7_MASK = 0x00000080;
        static constexpr unsigned MR7(unsigned value) { return (value << 7); }
        static constexpr unsigned MR8_POS = 8;
        static constexpr unsigned MR8_MASK = 0x00000100;
        static constexpr unsigned MR8(unsigned value) { return (value << 8); }
        static constexpr unsigned MR9_POS = 9;
        static constexpr unsigned MR9_MASK = 0x00000200;
        static constexpr unsigned MR9(unsigned value) { return (value << 9); }
        static constexpr unsigned MR10_POS = 10;
        static constexpr unsigned MR10_MASK = 0x00000400;
        static constexpr unsigned MR10(unsigned value) { return (value << 10); }
        static constexpr unsigned MR11_POS = 11;
        static constexpr unsigned MR11_MASK = 0x00000800;
        static constexpr unsigned MR11(unsigned value) { return (value << 11); }
        static constexpr unsigned MR12_POS = 12;
        static constexpr unsigned MR12_MASK = 0x00001000;
        static constexpr unsigned MR12(unsigned value) { return (value << 12); }
        static constexpr unsigned MR13_POS = 13;
        static constexpr unsigned MR13_MASK = 0x00002000;
        static constexpr unsigned MR13(unsigned value) { return (value << 13); }
        static constexpr unsigned MR14_POS = 14;
        static constexpr unsigned MR14_MASK = 0x00004000;
        static constexpr unsigned MR14(unsigned value) { return (value << 14); }
        static constexpr unsigned MR15_POS = 15;
        static constexpr unsigned MR15_MASK = 0x00008000;
        static constexpr unsigned MR15(unsigned value) { return (value << 15); }
        static constexpr unsigned MR16_POS = 16;
        static constexpr unsigned MR16_MASK = 0x00010000;
        static constexpr unsigned MR16(unsigned value) { return (value << 16); }
        static constexpr unsigned MR17_POS = 17;
        static constexpr unsigned MR17_MASK = 0x00020000;
        static constexpr unsigned MR17(unsigned value) { return (value << 17); }
        static constexpr unsigned MR18_POS = 18;
        static constexpr unsigned MR18_MASK = 0x00040000;
        static constexpr unsigned MR18(unsigned value) { return (value << 18); }
    } EMR;

    volatile union RTSR_T // RTSR: Rising Trigger selection register (EXTI_RTSR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) RTSR_BIT_T
        {
            unsigned TR0  : 1; // bit 0 Rising trigger event configuration of line 0
            unsigned TR1  : 1; // bit 1 Rising trigger event configuration of line 1
            unsigned TR2  : 1; // bit 2 Rising trigger event configuration of line 2
            unsigned TR3  : 1; // bit 3 Rising trigger event configuration of line 3
            unsigned TR4  : 1; // bit 4 Rising trigger event configuration of line 4
            unsigned TR5  : 1; // bit 5 Rising trigger event configuration of line 5
            unsigned TR6  : 1; // bit 6 Rising trigger event configuration of line 6
            unsigned TR7  : 1; // bit 7 Rising trigger event configuration of line 7
            unsigned TR8  : 1; // bit 8 Rising trigger event configuration of line 8
            unsigned TR9  : 1; // bit 9 Rising trigger event configuration of line 9
            unsigned TR10 : 1; // bit 10 Rising trigger event configuration of line 10
            unsigned TR11 : 1; // bit 11 Rising trigger event configuration of line 11
            unsigned TR12 : 1; // bit 12 Rising trigger event configuration of line 12
            unsigned TR13 : 1; // bit 13 Rising trigger event configuration of line 13
            unsigned TR14 : 1; // bit 14 Rising trigger event configuration of line 14
            unsigned TR15 : 1; // bit 15 Rising trigger event configuration of line 15
            unsigned TR16 : 1; // bit 16 Rising trigger event configuration of line 16
            unsigned TR17 : 1; // bit 17 Rising trigger event configuration of line 17
            unsigned TR18 : 1; // bit 18 Rising trigger event configuration of line 18
            unsigned      : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned TR0_POS = 0;
        static constexpr unsigned TR0_MASK = 0x00000001;
        static constexpr unsigned TR0(unsigned value) { return (value << 0); }
        static constexpr unsigned TR1_POS = 1;
        static constexpr unsigned TR1_MASK = 0x00000002;
        static constexpr unsigned TR1(unsigned value) { return (value << 1); }
        static constexpr unsigned TR2_POS = 2;
        static constexpr unsigned TR2_MASK = 0x00000004;
        static constexpr unsigned TR2(unsigned value) { return (value << 2); }
        static constexpr unsigned TR3_POS = 3;
        static constexpr unsigned TR3_MASK = 0x00000008;
        static constexpr unsigned TR3(unsigned value) { return (value << 3); }
        static constexpr unsigned TR4_POS = 4;
        static constexpr unsigned TR4_MASK = 0x00000010;
        static constexpr unsigned TR4(unsigned value) { return (value << 4); }
        static constexpr unsigned TR5_POS = 5;
        static constexpr unsigned TR5_MASK = 0x00000020;
        static constexpr unsigned TR5(unsigned value) { return (value << 5); }
        static constexpr unsigned TR6_POS = 6;
        static constexpr unsigned TR6_MASK = 0x00000040;
        static constexpr unsigned TR6(unsigned value) { return (value << 6); }
        static constexpr unsigned TR7_POS = 7;
        static constexpr unsigned TR7_MASK = 0x00000080;
        static constexpr unsigned TR7(unsigned value) { return (value << 7); }
        static constexpr unsigned TR8_POS = 8;
        static constexpr unsigned TR8_MASK = 0x00000100;
        static constexpr unsigned TR8(unsigned value) { return (value << 8); }
        static constexpr unsigned TR9_POS = 9;
        static constexpr unsigned TR9_MASK = 0x00000200;
        static constexpr unsigned TR9(unsigned value) { return (value << 9); }
        static constexpr unsigned TR10_POS = 10;
        static constexpr unsigned TR10_MASK = 0x00000400;
        static constexpr unsigned TR10(unsigned value) { return (value << 10); }
        static constexpr unsigned TR11_POS = 11;
        static constexpr unsigned TR11_MASK = 0x00000800;
        static constexpr unsigned TR11(unsigned value) { return (value << 11); }
        static constexpr unsigned TR12_POS = 12;
        static constexpr unsigned TR12_MASK = 0x00001000;
        static constexpr unsigned TR12(unsigned value) { return (value << 12); }
        static constexpr unsigned TR13_POS = 13;
        static constexpr unsigned TR13_MASK = 0x00002000;
        static constexpr unsigned TR13(unsigned value) { return (value << 13); }
        static constexpr unsigned TR14_POS = 14;
        static constexpr unsigned TR14_MASK = 0x00004000;
        static constexpr unsigned TR14(unsigned value) { return (value << 14); }
        static constexpr unsigned TR15_POS = 15;
        static constexpr unsigned TR15_MASK = 0x00008000;
        static constexpr unsigned TR15(unsigned value) { return (value << 15); }
        static constexpr unsigned TR16_POS = 16;
        static constexpr unsigned TR16_MASK = 0x00010000;
        static constexpr unsigned TR16(unsigned value) { return (value << 16); }
        static constexpr unsigned TR17_POS = 17;
        static constexpr unsigned TR17_MASK = 0x00020000;
        static constexpr unsigned TR17(unsigned value) { return (value << 17); }
        static constexpr unsigned TR18_POS = 18;
        static constexpr unsigned TR18_MASK = 0x00040000;
        static constexpr unsigned TR18(unsigned value) { return (value << 18); }
    } RTSR;

    volatile union FTSR_T // FTSR: Falling Trigger selection register (EXTI_FTSR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) FTSR_BIT_T
        {
            unsigned TR0  : 1; // bit 0 Falling trigger event configuration of line 0
            unsigned TR1  : 1; // bit 1 Falling trigger event configuration of line 1
            unsigned TR2  : 1; // bit 2 Falling trigger event configuration of line 2
            unsigned TR3  : 1; // bit 3 Falling trigger event configuration of line 3
            unsigned TR4  : 1; // bit 4 Falling trigger event configuration of line 4
            unsigned TR5  : 1; // bit 5 Falling trigger event configuration of line 5
            unsigned TR6  : 1; // bit 6 Falling trigger event configuration of line 6
            unsigned TR7  : 1; // bit 7 Falling trigger event configuration of line 7
            unsigned TR8  : 1; // bit 8 Falling trigger event configuration of line 8
            unsigned TR9  : 1; // bit 9 Falling trigger event configuration of line 9
            unsigned TR10 : 1; // bit 10 Falling trigger event configuration of line 10
            unsigned TR11 : 1; // bit 11 Falling trigger event configuration of line 11
            unsigned TR12 : 1; // bit 12 Falling trigger event configuration of line 12
            unsigned TR13 : 1; // bit 13 Falling trigger event configuration of line 13
            unsigned TR14 : 1; // bit 14 Falling trigger event configuration of line 14
            unsigned TR15 : 1; // bit 15 Falling trigger event configuration of line 15
            unsigned TR16 : 1; // bit 16 Falling trigger event configuration of line 16
            unsigned TR17 : 1; // bit 17 Falling trigger event configuration of line 17
            unsigned TR18 : 1; // bit 18 Falling trigger event configuration of line 18
            unsigned      : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned TR0_POS = 0;
        static constexpr unsigned TR0_MASK = 0x00000001;
        static constexpr unsigned TR0(unsigned value) { return (value << 0); }
        static constexpr unsigned TR1_POS = 1;
        static constexpr unsigned TR1_MASK = 0x00000002;
        static constexpr unsigned TR1(unsigned value) { return (value << 1); }
        static constexpr unsigned TR2_POS = 2;
        static constexpr unsigned TR2_MASK = 0x00000004;
        static constexpr unsigned TR2(unsigned value) { return (value << 2); }
        static constexpr unsigned TR3_POS = 3;
        static constexpr unsigned TR3_MASK = 0x00000008;
        static constexpr unsigned TR3(unsigned value) { return (value << 3); }
        static constexpr unsigned TR4_POS = 4;
        static constexpr unsigned TR4_MASK = 0x00000010;
        static constexpr unsigned TR4(unsigned value) { return (value << 4); }
        static constexpr unsigned TR5_POS = 5;
        static constexpr unsigned TR5_MASK = 0x00000020;
        static constexpr unsigned TR5(unsigned value) { return (value << 5); }
        static constexpr unsigned TR6_POS = 6;
        static constexpr unsigned TR6_MASK = 0x00000040;
        static constexpr unsigned TR6(unsigned value) { return (value << 6); }
        static constexpr unsigned TR7_POS = 7;
        static constexpr unsigned TR7_MASK = 0x00000080;
        static constexpr unsigned TR7(unsigned value) { return (value << 7); }
        static constexpr unsigned TR8_POS = 8;
        static constexpr unsigned TR8_MASK = 0x00000100;
        static constexpr unsigned TR8(unsigned value) { return (value << 8); }
        static constexpr unsigned TR9_POS = 9;
        static constexpr unsigned TR9_MASK = 0x00000200;
        static constexpr unsigned TR9(unsigned value) { return (value << 9); }
        static constexpr unsigned TR10_POS = 10;
        static constexpr unsigned TR10_MASK = 0x00000400;
        static constexpr unsigned TR10(unsigned value) { return (value << 10); }
        static constexpr unsigned TR11_POS = 11;
        static constexpr unsigned TR11_MASK = 0x00000800;
        static constexpr unsigned TR11(unsigned value) { return (value << 11); }
        static constexpr unsigned TR12_POS = 12;
        static constexpr unsigned TR12_MASK = 0x00001000;
        static constexpr unsigned TR12(unsigned value) { return (value << 12); }
        static constexpr unsigned TR13_POS = 13;
        static constexpr unsigned TR13_MASK = 0x00002000;
        static constexpr unsigned TR13(unsigned value) { return (value << 13); }
        static constexpr unsigned TR14_POS = 14;
        static constexpr unsigned TR14_MASK = 0x00004000;
        static constexpr unsigned TR14(unsigned value) { return (value << 14); }
        static constexpr unsigned TR15_POS = 15;
        static constexpr unsigned TR15_MASK = 0x00008000;
        static constexpr unsigned TR15(unsigned value) { return (value << 15); }
        static constexpr unsigned TR16_POS = 16;
        static constexpr unsigned TR16_MASK = 0x00010000;
        static constexpr unsigned TR16(unsigned value) { return (value << 16); }
        static constexpr unsigned TR17_POS = 17;
        static constexpr unsigned TR17_MASK = 0x00020000;
        static constexpr unsigned TR17(unsigned value) { return (value << 17); }
        static constexpr unsigned TR18_POS = 18;
        static constexpr unsigned TR18_MASK = 0x00040000;
        static constexpr unsigned TR18(unsigned value) { return (value << 18); }
    } FTSR;

    volatile union SWIER_T // SWIER: Software interrupt event register (EXTI_SWIER) 
    {
        uint32_t reg;
        struct __attribute__((packed)) SWIER_BIT_T
        {
            unsigned SWIER0  : 1; // bit 0 Software Interrupt on line 0
            unsigned SWIER1  : 1; // bit 1 Software Interrupt on line 1
            unsigned SWIER2  : 1; // bit 2 Software Interrupt on line 2
            unsigned SWIER3  : 1; // bit 3 Software Interrupt on line 3
            unsigned SWIER4  : 1; // bit 4 Software Interrupt on line 4
            unsigned SWIER5  : 1; // bit 5 Software Interrupt on line 5
            unsigned SWIER6  : 1; // bit 6 Software Interrupt on line 6
            unsigned SWIER7  : 1; // bit 7 Software Interrupt on line 7
            unsigned SWIER8  : 1; // bit 8 Software Interrupt on line 8
            unsigned SWIER9  : 1; // bit 9 Software Interrupt on line 9
            unsigned SWIER10 : 1; // bit 10 Software Interrupt on line 10
            unsigned SWIER11 : 1; // bit 11 Software Interrupt on line 11
            unsigned SWIER12 : 1; // bit 12 Software Interrupt on line 12
            unsigned SWIER13 : 1; // bit 13 Software Interrupt on line 13
            unsigned SWIER14 : 1; // bit 14 Software Interrupt on line 14
            unsigned SWIER15 : 1; // bit 15 Software Interrupt on line 15
            unsigned SWIER16 : 1; // bit 16 Software Interrupt on line 16
            unsigned SWIER17 : 1; // bit 17 Software Interrupt on line 17
            unsigned SWIER18 : 1; // bit 18 Software Interrupt on line 18
            unsigned         : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned SWIER0_POS = 0;
        static constexpr unsigned SWIER0_MASK = 0x00000001;
        static constexpr unsigned SWIER0(unsigned value) { return (value << 0); }
        static constexpr unsigned SWIER1_POS = 1;
        static constexpr unsigned SWIER1_MASK = 0x00000002;
        static constexpr unsigned SWIER1(unsigned value) { return (value << 1); }
        static constexpr unsigned SWIER2_POS = 2;
        static constexpr unsigned SWIER2_MASK = 0x00000004;
        static constexpr unsigned SWIER2(unsigned value) { return (value << 2); }
        static constexpr unsigned SWIER3_POS = 3;
        static constexpr unsigned SWIER3_MASK = 0x00000008;
        static constexpr unsigned SWIER3(unsigned value) { return (value << 3); }
        static constexpr unsigned SWIER4_POS = 4;
        static constexpr unsigned SWIER4_MASK = 0x00000010;
        static constexpr unsigned SWIER4(unsigned value) { return (value << 4); }
        static constexpr unsigned SWIER5_POS = 5;
        static constexpr unsigned SWIER5_MASK = 0x00000020;
        static constexpr unsigned SWIER5(unsigned value) { return (value << 5); }
        static constexpr unsigned SWIER6_POS = 6;
        static constexpr unsigned SWIER6_MASK = 0x00000040;
        static constexpr unsigned SWIER6(unsigned value) { return (value << 6); }
        static constexpr unsigned SWIER7_POS = 7;
        static constexpr unsigned SWIER7_MASK = 0x00000080;
        static constexpr unsigned SWIER7(unsigned value) { return (value << 7); }
        static constexpr unsigned SWIER8_POS = 8;
        static constexpr unsigned SWIER8_MASK = 0x00000100;
        static constexpr unsigned SWIER8(unsigned value) { return (value << 8); }
        static constexpr unsigned SWIER9_POS = 9;
        static constexpr unsigned SWIER9_MASK = 0x00000200;
        static constexpr unsigned SWIER9(unsigned value) { return (value << 9); }
        static constexpr unsigned SWIER10_POS = 10;
        static constexpr unsigned SWIER10_MASK = 0x00000400;
        static constexpr unsigned SWIER10(unsigned value) { return (value << 10); }
        static constexpr unsigned SWIER11_POS = 11;
        static constexpr unsigned SWIER11_MASK = 0x00000800;
        static constexpr unsigned SWIER11(unsigned value) { return (value << 11); }
        static constexpr unsigned SWIER12_POS = 12;
        static constexpr unsigned SWIER12_MASK = 0x00001000;
        static constexpr unsigned SWIER12(unsigned value) { return (value << 12); }
        static constexpr unsigned SWIER13_POS = 13;
        static constexpr unsigned SWIER13_MASK = 0x00002000;
        static constexpr unsigned SWIER13(unsigned value) { return (value << 13); }
        static constexpr unsigned SWIER14_POS = 14;
        static constexpr unsigned SWIER14_MASK = 0x00004000;
        static constexpr unsigned SWIER14(unsigned value) { return (value << 14); }
        static constexpr unsigned SWIER15_POS = 15;
        static constexpr unsigned SWIER15_MASK = 0x00008000;
        static constexpr unsigned SWIER15(unsigned value) { return (value << 15); }
        static constexpr unsigned SWIER16_POS = 16;
        static constexpr unsigned SWIER16_MASK = 0x00010000;
        static constexpr unsigned SWIER16(unsigned value) { return (value << 16); }
        static constexpr unsigned SWIER17_POS = 17;
        static constexpr unsigned SWIER17_MASK = 0x00020000;
        static constexpr unsigned SWIER17(unsigned value) { return (value << 17); }
        static constexpr unsigned SWIER18_POS = 18;
        static constexpr unsigned SWIER18_MASK = 0x00040000;
        static constexpr unsigned SWIER18(unsigned value) { return (value << 18); }
    } SWIER;

    volatile union PR_T // PR: Pending register (EXTI_PR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) PR_BIT_T
        {
            unsigned PR0  : 1; // bit 0 Pending bit 0
            unsigned PR1  : 1; // bit 1 Pending bit 1
            unsigned PR2  : 1; // bit 2 Pending bit 2
            unsigned PR3  : 1; // bit 3 Pending bit 3
            unsigned PR4  : 1; // bit 4 Pending bit 4
            unsigned PR5  : 1; // bit 5 Pending bit 5
            unsigned PR6  : 1; // bit 6 Pending bit 6
            unsigned PR7  : 1; // bit 7 Pending bit 7
            unsigned PR8  : 1; // bit 8 Pending bit 8
            unsigned PR9  : 1; // bit 9 Pending bit 9
            unsigned PR10 : 1; // bit 10 Pending bit 10
            unsigned PR11 : 1; // bit 11 Pending bit 11
            unsigned PR12 : 1; // bit 12 Pending bit 12
            unsigned PR13 : 1; // bit 13 Pending bit 13
            unsigned PR14 : 1; // bit 14 Pending bit 14
            unsigned PR15 : 1; // bit 15 Pending bit 15
            unsigned PR16 : 1; // bit 16 Pending bit 16
            unsigned PR17 : 1; // bit 17 Pending bit 17
            unsigned PR18 : 1; // bit 18 Pending bit 18
            unsigned      : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned PR0_POS = 0;
        static constexpr unsigned PR0_MASK = 0x00000001;
        static constexpr unsigned PR0(unsigned value) { return (value << 0); }
        static constexpr unsigned PR1_POS = 1;
        static constexpr unsigned PR1_MASK = 0x00000002;
        static constexpr unsigned PR1(unsigned value) { return (value << 1); }
        static constexpr unsigned PR2_POS = 2;
        static constexpr unsigned PR2_MASK = 0x00000004;
        static constexpr unsigned PR2(unsigned value) { return (value << 2); }
        static constexpr unsigned PR3_POS = 3;
        static constexpr unsigned PR3_MASK = 0x00000008;
        static constexpr unsigned PR3(unsigned value) { return (value << 3); }
        static constexpr unsigned PR4_POS = 4;
        static constexpr unsigned PR4_MASK = 0x00000010;
        static constexpr unsigned PR4(unsigned value) { return (value << 4); }
        static constexpr unsigned PR5_POS = 5;
        static constexpr unsigned PR5_MASK = 0x00000020;
        static constexpr unsigned PR5(unsigned value) { return (value << 5); }
        static constexpr unsigned PR6_POS = 6;
        static constexpr unsigned PR6_MASK = 0x00000040;
        static constexpr unsigned PR6(unsigned value) { return (value << 6); }
        static constexpr unsigned PR7_POS = 7;
        static constexpr unsigned PR7_MASK = 0x00000080;
        static constexpr unsigned PR7(unsigned value) { return (value << 7); }
        static constexpr unsigned PR8_POS = 8;
        static constexpr unsigned PR8_MASK = 0x00000100;
        static constexpr unsigned PR8(unsigned value) { return (value << 8); }
        static constexpr unsigned PR9_POS = 9;
        static constexpr unsigned PR9_MASK = 0x00000200;
        static constexpr unsigned PR9(unsigned value) { return (value << 9); }
        static constexpr unsigned PR10_POS = 10;
        static constexpr unsigned PR10_MASK = 0x00000400;
        static constexpr unsigned PR10(unsigned value) { return (value << 10); }
        static constexpr unsigned PR11_POS = 11;
        static constexpr unsigned PR11_MASK = 0x00000800;
        static constexpr unsigned PR11(unsigned value) { return (value << 11); }
        static constexpr unsigned PR12_POS = 12;
        static constexpr unsigned PR12_MASK = 0x00001000;
        static constexpr unsigned PR12(unsigned value) { return (value << 12); }
        static constexpr unsigned PR13_POS = 13;
        static constexpr unsigned PR13_MASK = 0x00002000;
        static constexpr unsigned PR13(unsigned value) { return (value << 13); }
        static constexpr unsigned PR14_POS = 14;
        static constexpr unsigned PR14_MASK = 0x00004000;
        static constexpr unsigned PR14(unsigned value) { return (value << 14); }
        static constexpr unsigned PR15_POS = 15;
        static constexpr unsigned PR15_MASK = 0x00008000;
        static constexpr unsigned PR15(unsigned value) { return (value << 15); }
        static constexpr unsigned PR16_POS = 16;
        static constexpr unsigned PR16_MASK = 0x00010000;
        static constexpr unsigned PR16(unsigned value) { return (value << 16); }
        static constexpr unsigned PR17_POS = 17;
        static constexpr unsigned PR17_MASK = 0x00020000;
        static constexpr unsigned PR17(unsigned value) { return (value << 17); }
        static constexpr unsigned PR18_POS = 18;
        static constexpr unsigned PR18_MASK = 0x00040000;
        static constexpr unsigned PR18(unsigned value) { return (value << 18); }
    } PR;

}; // struct EXTI_T

static_assert(sizeof(EXTI_T) == EXTI_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp