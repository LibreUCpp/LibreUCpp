#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) DCMI_T
{
    static constexpr size_t INSTANCE_SIZE = 44;
    static constexpr size_t PADDED_INSTANCE_SIZE = 44;
    static constexpr intptr_t BASE_ADDRESS = 0x50050000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_RIS = 0x08;
    static constexpr intptr_t ADDR_OFFSET_IER = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_MIS = 0x10;
    static constexpr intptr_t ADDR_OFFSET_ICR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_ESCR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_ESUR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_CWSTRT = 0x20;
    static constexpr intptr_t ADDR_OFFSET_CWSIZE = 0x24;
    static constexpr intptr_t ADDR_OFFSET_DR = 0x28;

    volatile union CR_T // CR: control register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned CAPTURE : 1; // bit 0 Capture enable
            unsigned CM      : 1; // bit 1 Capture mode
            unsigned CROP    : 1; // bit 2 Crop feature
            unsigned JPEG    : 1; // bit 3 JPEG format
            unsigned ESS     : 1; // bit 4 Embedded synchronization select
            unsigned PCKPOL  : 1; // bit 5 Pixel clock polarity
            unsigned HSPOL   : 1; // bit 6 Horizontal synchronization polarity
            unsigned VSPOL   : 1; // bit 7 Vertical synchronization polarity
            unsigned FCRC    : 2; // bits 8..9 Frame capture rate control
            unsigned EDM     : 2; // bits 10..11 Extended data mode
            unsigned         : 2; // bits 12..13 unused
            unsigned ENABLE  : 1; // bit 14 DCMI enable
            unsigned         : 1; // bit 15 unused
            unsigned BSM     : 2; // bits 16..17 Byte Select mode
            unsigned OEBS    : 1; // bit 18 Odd/Even Byte Select
            unsigned LSM     : 1; // bit 19 Line Select mode
            unsigned OELS    : 1; // bit 20 Odd/Even Line Select
            unsigned         : 11; // bits 21..31 unused    
        } bit;
    
        static constexpr unsigned CAPTURE_POS = 0;
        static constexpr unsigned CAPTURE_MASK = 0x00000001;
        static constexpr unsigned CAPTURE(unsigned value) { return (value << 0); }
        static constexpr unsigned CM_POS = 1;
        static constexpr unsigned CM_MASK = 0x00000002;
        static constexpr unsigned CM(unsigned value) { return (value << 1); }
        static constexpr unsigned CROP_POS = 2;
        static constexpr unsigned CROP_MASK = 0x00000004;
        static constexpr unsigned CROP(unsigned value) { return (value << 2); }
        static constexpr unsigned JPEG_POS = 3;
        static constexpr unsigned JPEG_MASK = 0x00000008;
        static constexpr unsigned JPEG(unsigned value) { return (value << 3); }
        static constexpr unsigned ESS_POS = 4;
        static constexpr unsigned ESS_MASK = 0x00000010;
        static constexpr unsigned ESS(unsigned value) { return (value << 4); }
        static constexpr unsigned PCKPOL_POS = 5;
        static constexpr unsigned PCKPOL_MASK = 0x00000020;
        static constexpr unsigned PCKPOL(unsigned value) { return (value << 5); }
        static constexpr unsigned HSPOL_POS = 6;
        static constexpr unsigned HSPOL_MASK = 0x00000040;
        static constexpr unsigned HSPOL(unsigned value) { return (value << 6); }
        static constexpr unsigned VSPOL_POS = 7;
        static constexpr unsigned VSPOL_MASK = 0x00000080;
        static constexpr unsigned VSPOL(unsigned value) { return (value << 7); }
        static constexpr unsigned FCRC_POS = 8;
        static constexpr unsigned FCRC_MASK = 0x00000300;
        static constexpr unsigned FCRC(unsigned value) { return (value << 8); }
        static constexpr unsigned EDM_POS = 10;
        static constexpr unsigned EDM_MASK = 0x00000c00;
        static constexpr unsigned EDM(unsigned value) { return (value << 10); }
        static constexpr unsigned ENABLE_POS = 14;
        static constexpr unsigned ENABLE_MASK = 0x00004000;
        static constexpr unsigned ENABLE(unsigned value) { return (value << 14); }
        static constexpr unsigned BSM_POS = 16;
        static constexpr unsigned BSM_MASK = 0x00030000;
        static constexpr unsigned BSM(unsigned value) { return (value << 16); }
        static constexpr unsigned OEBS_POS = 18;
        static constexpr unsigned OEBS_MASK = 0x00040000;
        static constexpr unsigned OEBS(unsigned value) { return (value << 18); }
        static constexpr unsigned LSM_POS = 19;
        static constexpr unsigned LSM_MASK = 0x00080000;
        static constexpr unsigned LSM(unsigned value) { return (value << 19); }
        static constexpr unsigned OELS_POS = 20;
        static constexpr unsigned OELS_MASK = 0x00100000;
        static constexpr unsigned OELS(unsigned value) { return (value << 20); }
    } CR;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned HSYNC : 1; // bit 0 HSYNC
            unsigned VSYNC : 1; // bit 1 VSYNC
            unsigned FNE   : 1; // bit 2 FIFO not empty
            unsigned       : 29; // bits 3..31 unused    
        } bit;
    
        static constexpr unsigned HSYNC_POS = 0;
        static constexpr unsigned HSYNC_MASK = 0x00000001;
        static constexpr unsigned HSYNC(unsigned value) { return (value << 0); }
        static constexpr unsigned VSYNC_POS = 1;
        static constexpr unsigned VSYNC_MASK = 0x00000002;
        static constexpr unsigned VSYNC(unsigned value) { return (value << 1); }
        static constexpr unsigned FNE_POS = 2;
        static constexpr unsigned FNE_MASK = 0x00000004;
        static constexpr unsigned FNE(unsigned value) { return (value << 2); }
    } SR;

    volatile union RIS_T // RIS: raw interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RIS_BIT_T
        {
            unsigned FRAME_RIS : 1; // bit 0 Capture complete raw interrupt status
            unsigned OVR_RIS   : 1; // bit 1 Overrun raw interrupt status
            unsigned ERR_RIS   : 1; // bit 2 Synchronization error raw interrupt status
            unsigned VSYNC_RIS : 1; // bit 3 VSYNC raw interrupt status
            unsigned LINE_RIS  : 1; // bit 4 Line raw interrupt status
            unsigned           : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned FRAME_RIS_POS = 0;
        static constexpr unsigned FRAME_RIS_MASK = 0x00000001;
        static constexpr unsigned FRAME_RIS(unsigned value) { return (value << 0); }
        static constexpr unsigned OVR_RIS_POS = 1;
        static constexpr unsigned OVR_RIS_MASK = 0x00000002;
        static constexpr unsigned OVR_RIS(unsigned value) { return (value << 1); }
        static constexpr unsigned ERR_RIS_POS = 2;
        static constexpr unsigned ERR_RIS_MASK = 0x00000004;
        static constexpr unsigned ERR_RIS(unsigned value) { return (value << 2); }
        static constexpr unsigned VSYNC_RIS_POS = 3;
        static constexpr unsigned VSYNC_RIS_MASK = 0x00000008;
        static constexpr unsigned VSYNC_RIS(unsigned value) { return (value << 3); }
        static constexpr unsigned LINE_RIS_POS = 4;
        static constexpr unsigned LINE_RIS_MASK = 0x00000010;
        static constexpr unsigned LINE_RIS(unsigned value) { return (value << 4); }
    } RIS;

    volatile union IER_T // IER: interrupt enable register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IER_BIT_T
        {
            unsigned FRAME_IE : 1; // bit 0 Capture complete interrupt enable
            unsigned OVR_IE   : 1; // bit 1 Overrun interrupt enable
            unsigned ERR_IE   : 1; // bit 2 Synchronization error interrupt enable
            unsigned VSYNC_IE : 1; // bit 3 VSYNC interrupt enable
            unsigned LINE_IE  : 1; // bit 4 Line interrupt enable
            unsigned          : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned FRAME_IE_POS = 0;
        static constexpr unsigned FRAME_IE_MASK = 0x00000001;
        static constexpr unsigned FRAME_IE(unsigned value) { return (value << 0); }
        static constexpr unsigned OVR_IE_POS = 1;
        static constexpr unsigned OVR_IE_MASK = 0x00000002;
        static constexpr unsigned OVR_IE(unsigned value) { return (value << 1); }
        static constexpr unsigned ERR_IE_POS = 2;
        static constexpr unsigned ERR_IE_MASK = 0x00000004;
        static constexpr unsigned ERR_IE(unsigned value) { return (value << 2); }
        static constexpr unsigned VSYNC_IE_POS = 3;
        static constexpr unsigned VSYNC_IE_MASK = 0x00000008;
        static constexpr unsigned VSYNC_IE(unsigned value) { return (value << 3); }
        static constexpr unsigned LINE_IE_POS = 4;
        static constexpr unsigned LINE_IE_MASK = 0x00000010;
        static constexpr unsigned LINE_IE(unsigned value) { return (value << 4); }
    } IER;

    volatile union MIS_T // MIS: masked interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MIS_BIT_T
        {
            unsigned FRAME_MIS : 1; // bit 0 Capture complete masked interrupt status
            unsigned OVR_MIS   : 1; // bit 1 Overrun masked interrupt status
            unsigned ERR_MIS   : 1; // bit 2 Synchronization error masked interrupt status
            unsigned VSYNC_MIS : 1; // bit 3 VSYNC masked interrupt status
            unsigned LINE_MIS  : 1; // bit 4 Line masked interrupt status
            unsigned           : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned FRAME_MIS_POS = 0;
        static constexpr unsigned FRAME_MIS_MASK = 0x00000001;
        static constexpr unsigned FRAME_MIS(unsigned value) { return (value << 0); }
        static constexpr unsigned OVR_MIS_POS = 1;
        static constexpr unsigned OVR_MIS_MASK = 0x00000002;
        static constexpr unsigned OVR_MIS(unsigned value) { return (value << 1); }
        static constexpr unsigned ERR_MIS_POS = 2;
        static constexpr unsigned ERR_MIS_MASK = 0x00000004;
        static constexpr unsigned ERR_MIS(unsigned value) { return (value << 2); }
        static constexpr unsigned VSYNC_MIS_POS = 3;
        static constexpr unsigned VSYNC_MIS_MASK = 0x00000008;
        static constexpr unsigned VSYNC_MIS(unsigned value) { return (value << 3); }
        static constexpr unsigned LINE_MIS_POS = 4;
        static constexpr unsigned LINE_MIS_MASK = 0x00000010;
        static constexpr unsigned LINE_MIS(unsigned value) { return (value << 4); }
    } MIS;

    volatile union ICR_T // ICR: interrupt clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ICR_BIT_T
        {
            unsigned FRAME_ISC : 1; // bit 0 Capture complete interrupt status clear
            unsigned OVR_ISC   : 1; // bit 1 Overrun interrupt status clear
            unsigned ERR_ISC   : 1; // bit 2 Synchronization error interrupt status clear
            unsigned VSYNC_ISC : 1; // bit 3 Vertical synch interrupt status clear
            unsigned LINE_ISC  : 1; // bit 4 line interrupt status clear
            unsigned           : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned FRAME_ISC_POS = 0;
        static constexpr unsigned FRAME_ISC_MASK = 0x00000001;
        static constexpr unsigned FRAME_ISC(unsigned value) { return (value << 0); }
        static constexpr unsigned OVR_ISC_POS = 1;
        static constexpr unsigned OVR_ISC_MASK = 0x00000002;
        static constexpr unsigned OVR_ISC(unsigned value) { return (value << 1); }
        static constexpr unsigned ERR_ISC_POS = 2;
        static constexpr unsigned ERR_ISC_MASK = 0x00000004;
        static constexpr unsigned ERR_ISC(unsigned value) { return (value << 2); }
        static constexpr unsigned VSYNC_ISC_POS = 3;
        static constexpr unsigned VSYNC_ISC_MASK = 0x00000008;
        static constexpr unsigned VSYNC_ISC(unsigned value) { return (value << 3); }
        static constexpr unsigned LINE_ISC_POS = 4;
        static constexpr unsigned LINE_ISC_MASK = 0x00000010;
        static constexpr unsigned LINE_ISC(unsigned value) { return (value << 4); }
    } ICR;

    volatile union ESCR_T // ESCR: embedded synchronization code register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ESCR_BIT_T
        {
            unsigned FSC : 8; // bits 0..7 Frame start delimiter code
            unsigned LSC : 8; // bits 8..15 Line start delimiter code
            unsigned LEC : 8; // bits 16..23 Line end delimiter code
            unsigned FEC : 8; // bits 24..31 Frame end delimiter code    
        } bit;
    
        static constexpr unsigned FSC_POS = 0;
        static constexpr unsigned FSC_MASK = 0x000000ff;
        static constexpr unsigned FSC(unsigned value) { return (value << 0); }
        static constexpr unsigned LSC_POS = 8;
        static constexpr unsigned LSC_MASK = 0x0000ff00;
        static constexpr unsigned LSC(unsigned value) { return (value << 8); }
        static constexpr unsigned LEC_POS = 16;
        static constexpr unsigned LEC_MASK = 0x00ff0000;
        static constexpr unsigned LEC(unsigned value) { return (value << 16); }
        static constexpr unsigned FEC_POS = 24;
        static constexpr unsigned FEC_MASK = 0xff000000;
        static constexpr unsigned FEC(unsigned value) { return (value << 24); }
    } ESCR;

    volatile union ESUR_T // ESUR: embedded synchronization unmask register 
    {
        uint32_t reg;
        struct __attribute__((packed)) ESUR_BIT_T
        {
            unsigned FSU : 8; // bits 0..7 Frame start delimiter unmask
            unsigned LSU : 8; // bits 8..15 Line start delimiter unmask
            unsigned LEU : 8; // bits 16..23 Line end delimiter unmask
            unsigned FEU : 8; // bits 24..31 Frame end delimiter unmask    
        } bit;
    
        static constexpr unsigned FSU_POS = 0;
        static constexpr unsigned FSU_MASK = 0x000000ff;
        static constexpr unsigned FSU(unsigned value) { return (value << 0); }
        static constexpr unsigned LSU_POS = 8;
        static constexpr unsigned LSU_MASK = 0x0000ff00;
        static constexpr unsigned LSU(unsigned value) { return (value << 8); }
        static constexpr unsigned LEU_POS = 16;
        static constexpr unsigned LEU_MASK = 0x00ff0000;
        static constexpr unsigned LEU(unsigned value) { return (value << 16); }
        static constexpr unsigned FEU_POS = 24;
        static constexpr unsigned FEU_MASK = 0xff000000;
        static constexpr unsigned FEU(unsigned value) { return (value << 24); }
    } ESUR;

    volatile union CWSTRT_T // CWSTRT: crop window start 
    {
        uint32_t reg;
        struct __attribute__((packed)) CWSTRT_BIT_T
        {
            unsigned HOFFCNT : 14; // bits 0..13 Horizontal offset count
            unsigned         : 2; // bits 14..15 unused
            unsigned VST     : 13; // bits 16..28 Vertical start line count
            unsigned         : 3; // bits 29..31 unused    
        } bit;
    
        static constexpr unsigned HOFFCNT_POS = 0;
        static constexpr unsigned HOFFCNT_MASK = 0x00003fff;
        static constexpr unsigned HOFFCNT(unsigned value) { return (value << 0); }
        static constexpr unsigned VST_POS = 16;
        static constexpr unsigned VST_MASK = 0x1fff0000;
        static constexpr unsigned VST(unsigned value) { return (value << 16); }
    } CWSTRT;

    volatile union CWSIZE_T // CWSIZE: crop window size 
    {
        uint32_t reg;
        struct __attribute__((packed)) CWSIZE_BIT_T
        {
            unsigned CAPCNT : 14; // bits 0..13 Capture count
            unsigned        : 2; // bits 14..15 unused
            unsigned VLINE  : 14; // bits 16..29 Vertical line count
            unsigned        : 2; // bits 30..31 unused    
        } bit;
    
        static constexpr unsigned CAPCNT_POS = 0;
        static constexpr unsigned CAPCNT_MASK = 0x00003fff;
        static constexpr unsigned CAPCNT(unsigned value) { return (value << 0); }
        static constexpr unsigned VLINE_POS = 16;
        static constexpr unsigned VLINE_MASK = 0x3fff0000;
        static constexpr unsigned VLINE(unsigned value) { return (value << 16); }
    } CWSIZE;

    volatile union DR_T // DR: data register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DR_BIT_T
        {
            unsigned Byte0 : 8; // bits 0..7 Data byte 0
            unsigned Byte1 : 8; // bits 8..15 Data byte 1
            unsigned Byte2 : 8; // bits 16..23 Data byte 2
            unsigned Byte3 : 8; // bits 24..31 Data byte 3    
        } bit;
    
        static constexpr unsigned Byte0_POS = 0;
        static constexpr unsigned Byte0_MASK = 0x000000ff;
        static constexpr unsigned Byte0(unsigned value) { return (value << 0); }
        static constexpr unsigned Byte1_POS = 8;
        static constexpr unsigned Byte1_MASK = 0x0000ff00;
        static constexpr unsigned Byte1(unsigned value) { return (value << 8); }
        static constexpr unsigned Byte2_POS = 16;
        static constexpr unsigned Byte2_MASK = 0x00ff0000;
        static constexpr unsigned Byte2(unsigned value) { return (value << 16); }
        static constexpr unsigned Byte3_POS = 24;
        static constexpr unsigned Byte3_MASK = 0xff000000;
        static constexpr unsigned Byte3(unsigned value) { return (value << 24); }
    } DR;

}; // struct DCMI_T

static_assert(sizeof(DCMI_T) == DCMI_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp