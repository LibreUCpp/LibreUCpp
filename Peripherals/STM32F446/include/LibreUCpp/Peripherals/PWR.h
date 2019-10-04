#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PWR_T
{
    static constexpr size_t INSTANCE_SIZE = 8;
    static constexpr size_t PADDED_INSTANCE_SIZE = 8;
    static constexpr intptr_t BASE_ADDRESS = 0x40007000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CSR = 0x04;

    volatile union CR_T // CR: power control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned LPDS   : 1; // bit 0 Low-power deep sleep
            unsigned PDDS   : 1; // bit 1 Power down deepsleep
            unsigned CWUF   : 1; // bit 2 Clear wakeup flag
            unsigned CSBF   : 1; // bit 3 Clear standby flag
            unsigned PVDE   : 1; // bit 4 Power voltage detector enable
            unsigned PLS    : 3; // bits 5..7 PVD level selection
            unsigned DBP    : 1; // bit 8 Disable backup domain write protection
            unsigned FPDS   : 1; // bit 9 Flash power down in Stop mode
            unsigned LPLVDS : 1; // bit 10 Low-Power Regulator Low Voltage in deepsleep
            unsigned MRLVDS : 1; // bit 11 Main regulator low voltage in deepsleep mode
            unsigned        : 1; // bit 12 unused
            unsigned ADCDC1 : 1; // bit 13 ADCDC1
            unsigned VOS    : 2; // bits 14..15 Regulator voltage scaling output selection
            unsigned ODEN   : 1; // bit 16 Over-drive enable
            unsigned ODSWEN : 1; // bit 17 Over-drive switching enabled
            unsigned UDEN   : 2; // bits 18..19 Under-drive enable in stop mode
            unsigned FMSSR  : 1; // bit 20 Flash Memory Stop while System Run
            unsigned FISSR  : 1; // bit 21 Flash Interface Stop while System Run
            unsigned        : 10; // bits 22..31 unused    
        } bit;
    
        static constexpr unsigned LPDS_POS = 0;
        static constexpr unsigned LPDS_MASK = 0x00000001;
        static constexpr unsigned LPDS(unsigned value) { return (value << 0); }
        static constexpr unsigned PDDS_POS = 1;
        static constexpr unsigned PDDS_MASK = 0x00000002;
        static constexpr unsigned PDDS(unsigned value) { return (value << 1); }
        static constexpr unsigned CWUF_POS = 2;
        static constexpr unsigned CWUF_MASK = 0x00000004;
        static constexpr unsigned CWUF(unsigned value) { return (value << 2); }
        static constexpr unsigned CSBF_POS = 3;
        static constexpr unsigned CSBF_MASK = 0x00000008;
        static constexpr unsigned CSBF(unsigned value) { return (value << 3); }
        static constexpr unsigned PVDE_POS = 4;
        static constexpr unsigned PVDE_MASK = 0x00000010;
        static constexpr unsigned PVDE(unsigned value) { return (value << 4); }
        static constexpr unsigned PLS_POS = 5;
        static constexpr unsigned PLS_MASK = 0x000000e0;
        static constexpr unsigned PLS(unsigned value) { return (value << 5); }
        static constexpr unsigned DBP_POS = 8;
        static constexpr unsigned DBP_MASK = 0x00000100;
        static constexpr unsigned DBP(unsigned value) { return (value << 8); }
        static constexpr unsigned FPDS_POS = 9;
        static constexpr unsigned FPDS_MASK = 0x00000200;
        static constexpr unsigned FPDS(unsigned value) { return (value << 9); }
        static constexpr unsigned LPLVDS_POS = 10;
        static constexpr unsigned LPLVDS_MASK = 0x00000400;
        static constexpr unsigned LPLVDS(unsigned value) { return (value << 10); }
        static constexpr unsigned MRLVDS_POS = 11;
        static constexpr unsigned MRLVDS_MASK = 0x00000800;
        static constexpr unsigned MRLVDS(unsigned value) { return (value << 11); }
        static constexpr unsigned ADCDC1_POS = 13;
        static constexpr unsigned ADCDC1_MASK = 0x00002000;
        static constexpr unsigned ADCDC1(unsigned value) { return (value << 13); }
        static constexpr unsigned VOS_POS = 14;
        static constexpr unsigned VOS_MASK = 0x0000c000;
        static constexpr unsigned VOS(unsigned value) { return (value << 14); }
        static constexpr unsigned ODEN_POS = 16;
        static constexpr unsigned ODEN_MASK = 0x00010000;
        static constexpr unsigned ODEN(unsigned value) { return (value << 16); }
        static constexpr unsigned ODSWEN_POS = 17;
        static constexpr unsigned ODSWEN_MASK = 0x00020000;
        static constexpr unsigned ODSWEN(unsigned value) { return (value << 17); }
        static constexpr unsigned UDEN_POS = 18;
        static constexpr unsigned UDEN_MASK = 0x000c0000;
        static constexpr unsigned UDEN(unsigned value) { return (value << 18); }
        static constexpr unsigned FMSSR_POS = 20;
        static constexpr unsigned FMSSR_MASK = 0x00100000;
        static constexpr unsigned FMSSR(unsigned value) { return (value << 20); }
        static constexpr unsigned FISSR_POS = 21;
        static constexpr unsigned FISSR_MASK = 0x00200000;
        static constexpr unsigned FISSR(unsigned value) { return (value << 21); }
    } CR;

    volatile union CSR_T // CSR: power control/status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned WUF     : 1; // bit 0 Wakeup flag
            unsigned SBF     : 1; // bit 1 Standby flag
            unsigned PVDO    : 1; // bit 2 PVD output
            unsigned BRR     : 1; // bit 3 Backup regulator ready
            unsigned         : 3; // bits 4..6 unused
            unsigned EWUP2   : 1; // bit 7 Enable WKUP2 pin
            unsigned EWUP    : 1; // bit 8 Enable WKUP pin
            unsigned BRE     : 1; // bit 9 Backup regulator enable
            unsigned         : 4; // bits 10..13 unused
            unsigned VOSRDY  : 1; // bit 14 Regulator voltage scaling output selection ready bit
            unsigned         : 1; // bit 15 unused
            unsigned ODRDY   : 1; // bit 16 Over-drive mode ready
            unsigned ODSWRDY : 1; // bit 17 Over-drive mode switching ready
            unsigned UDRDY   : 2; // bits 18..19 Under-drive ready flag
            unsigned         : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned WUF_POS = 0;
        static constexpr unsigned WUF_MASK = 0x00000001;
        static constexpr unsigned WUF(unsigned value) { return (value << 0); }
        static constexpr unsigned SBF_POS = 1;
        static constexpr unsigned SBF_MASK = 0x00000002;
        static constexpr unsigned SBF(unsigned value) { return (value << 1); }
        static constexpr unsigned PVDO_POS = 2;
        static constexpr unsigned PVDO_MASK = 0x00000004;
        static constexpr unsigned PVDO(unsigned value) { return (value << 2); }
        static constexpr unsigned BRR_POS = 3;
        static constexpr unsigned BRR_MASK = 0x00000008;
        static constexpr unsigned BRR(unsigned value) { return (value << 3); }
        static constexpr unsigned EWUP2_POS = 7;
        static constexpr unsigned EWUP2_MASK = 0x00000080;
        static constexpr unsigned EWUP2(unsigned value) { return (value << 7); }
        static constexpr unsigned EWUP_POS = 8;
        static constexpr unsigned EWUP_MASK = 0x00000100;
        static constexpr unsigned EWUP(unsigned value) { return (value << 8); }
        static constexpr unsigned BRE_POS = 9;
        static constexpr unsigned BRE_MASK = 0x00000200;
        static constexpr unsigned BRE(unsigned value) { return (value << 9); }
        static constexpr unsigned VOSRDY_POS = 14;
        static constexpr unsigned VOSRDY_MASK = 0x00004000;
        static constexpr unsigned VOSRDY(unsigned value) { return (value << 14); }
        static constexpr unsigned ODRDY_POS = 16;
        static constexpr unsigned ODRDY_MASK = 0x00010000;
        static constexpr unsigned ODRDY(unsigned value) { return (value << 16); }
        static constexpr unsigned ODSWRDY_POS = 17;
        static constexpr unsigned ODSWRDY_MASK = 0x00020000;
        static constexpr unsigned ODSWRDY(unsigned value) { return (value << 17); }
        static constexpr unsigned UDRDY_POS = 18;
        static constexpr unsigned UDRDY_MASK = 0x000c0000;
        static constexpr unsigned UDRDY(unsigned value) { return (value << 18); }
    } CSR;

}; // struct PWR_T

static_assert(sizeof(PWR_T) == PWR_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp