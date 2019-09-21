#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) PWR_T
{
    static constexpr size_t INSTANCE_SIZE = 8;
    static constexpr intptr_t BASE_ADDRESS = 0x40007000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_CSR = 0x04;

    volatile union CR_T // CR: Power control register (PWR_CR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned LPDS : 1; // bit 0 Low Power Deep Sleep
            unsigned PDDS : 1; // bit 1 Power Down Deep Sleep
            unsigned CWUF : 1; // bit 2 Clear Wake-up Flag
            unsigned CSBF : 1; // bit 3 Clear STANDBY Flag
            unsigned PVDE : 1; // bit 4 Power Voltage Detector Enable
            unsigned PLS  : 3; // bits 5..7 PVD Level Selection
            unsigned DBP  : 1; // bit 8 Disable Backup Domain write protection
            unsigned      : 23; // bits 9..31 unused    
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
    } CR;

    volatile union CSR_T // CSR: Power control register (PWR_CR) 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSR_BIT_T
        {
            unsigned WUF  : 1; // bit 0 Wake-Up Flag
            unsigned SBF  : 1; // bit 1 STANDBY Flag
            unsigned PVDO : 1; // bit 2 PVD Output
            unsigned      : 5; // bits 3..7 unused
            unsigned EWUP : 1; // bit 8 Enable WKUP pin
            unsigned      : 23; // bits 9..31 unused    
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
        static constexpr unsigned EWUP_POS = 8;
        static constexpr unsigned EWUP_MASK = 0x00000100;
        static constexpr unsigned EWUP(unsigned value) { return (value << 8); }
    } CSR;

}; // struct PWR_T

static_assert(sizeof(PWR_T) == PWR_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp