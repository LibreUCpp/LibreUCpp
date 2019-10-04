#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) SAI_T
{
    static constexpr size_t INSTANCE_SIZE = 68;
    static constexpr size_t PADDED_INSTANCE_SIZE = 68;
    static constexpr intptr_t BASE_ADDRESS = 0x40015800;

    static constexpr intptr_t ADDR_OFFSET_SAI_ACR1 = 0x04;
    static constexpr intptr_t ADDR_OFFSET_SAI_BCR1 = 0x24;
    static constexpr intptr_t ADDR_OFFSET_SAI_ACR2 = 0x08;
    static constexpr intptr_t ADDR_OFFSET_SAI_BCR2 = 0x28;
    static constexpr intptr_t ADDR_OFFSET_SAI_AFRCR = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_SAI_BFRCR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_SAI_ASLOTR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_SAI_BSLOTR = 0x30;
    static constexpr intptr_t ADDR_OFFSET_SAI_AIM = 0x14;
    static constexpr intptr_t ADDR_OFFSET_SAI_BIM = 0x34;
    static constexpr intptr_t ADDR_OFFSET_SAI_ASR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_SAI_BSR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_SAI_ACLRFR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_SAI_BCLRFR = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_SAI_ADR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_SAI_BDR = 0x40;

    uint8_t Reserved1[4];

    volatile union SAI_ACR1_T // SAI_ACR1: SAI AConfiguration register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_ACR1_BIT_T
        {
            unsigned MODE     : 2; // bits 0..1 Audio block mode
            unsigned PRTCFG   : 2; // bits 2..3 Protocol configuration
            unsigned          : 1; // bit 4 unused
            unsigned DS       : 3; // bits 5..7 Data size
            unsigned LSBFIRST : 1; // bit 8 Least significant bit first
            unsigned CKSTR    : 1; // bit 9 Clock strobing edge
            unsigned SYNCEN   : 2; // bits 10..11 Synchronization enable
            unsigned MONO     : 1; // bit 12 Mono mode
            unsigned OUTDRIV  : 1; // bit 13 Output drive
            unsigned          : 2; // bits 14..15 unused
            unsigned SAIAEN   : 1; // bit 16 Audio block enable
            unsigned DMAEN    : 1; // bit 17 DMA enable
            unsigned          : 1; // bit 18 unused
            unsigned NODIV    : 1; // bit 19 No divider
            unsigned MCKDIV   : 4; // bits 20..23 Master clock divider
            unsigned          : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned MODE_POS = 0;
        static constexpr unsigned MODE_MASK = 0x00000003;
        static constexpr unsigned MODE(unsigned value) { return (value << 0); }
        static constexpr unsigned PRTCFG_POS = 2;
        static constexpr unsigned PRTCFG_MASK = 0x0000000c;
        static constexpr unsigned PRTCFG(unsigned value) { return (value << 2); }
        static constexpr unsigned DS_POS = 5;
        static constexpr unsigned DS_MASK = 0x000000e0;
        static constexpr unsigned DS(unsigned value) { return (value << 5); }
        static constexpr unsigned LSBFIRST_POS = 8;
        static constexpr unsigned LSBFIRST_MASK = 0x00000100;
        static constexpr unsigned LSBFIRST(unsigned value) { return (value << 8); }
        static constexpr unsigned CKSTR_POS = 9;
        static constexpr unsigned CKSTR_MASK = 0x00000200;
        static constexpr unsigned CKSTR(unsigned value) { return (value << 9); }
        static constexpr unsigned SYNCEN_POS = 10;
        static constexpr unsigned SYNCEN_MASK = 0x00000c00;
        static constexpr unsigned SYNCEN(unsigned value) { return (value << 10); }
        static constexpr unsigned MONO_POS = 12;
        static constexpr unsigned MONO_MASK = 0x00001000;
        static constexpr unsigned MONO(unsigned value) { return (value << 12); }
        static constexpr unsigned OUTDRIV_POS = 13;
        static constexpr unsigned OUTDRIV_MASK = 0x00002000;
        static constexpr unsigned OUTDRIV(unsigned value) { return (value << 13); }
        static constexpr unsigned SAIAEN_POS = 16;
        static constexpr unsigned SAIAEN_MASK = 0x00010000;
        static constexpr unsigned SAIAEN(unsigned value) { return (value << 16); }
        static constexpr unsigned DMAEN_POS = 17;
        static constexpr unsigned DMAEN_MASK = 0x00020000;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 17); }
        static constexpr unsigned NODIV_POS = 19;
        static constexpr unsigned NODIV_MASK = 0x00080000;
        static constexpr unsigned NODIV(unsigned value) { return (value << 19); }
        static constexpr unsigned MCKDIV_POS = 20;
        static constexpr unsigned MCKDIV_MASK = 0x00f00000;
        static constexpr unsigned MCKDIV(unsigned value) { return (value << 20); }
    } SAI_ACR1;

    volatile union SAI_ACR2_T // SAI_ACR2: SAI AConfiguration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_ACR2_BIT_T
        {
            unsigned FTH     : 3; // bits 0..2 FIFO threshold
            unsigned FFLUSH  : 1; // bit 3 FIFO flush
            unsigned TRIS    : 1; // bit 4 Tristate management on data line
            unsigned MUTE    : 1; // bit 5 Mute
            unsigned MUTEVAL : 1; // bit 6 Mute value
            unsigned MUTECNT : 6; // bits 7..12 Mute counter
            unsigned CPL     : 1; // bit 13 Complement bit
            unsigned COMP    : 2; // bits 14..15 Companding mode
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000007;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned FFLUSH_POS = 3;
        static constexpr unsigned FFLUSH_MASK = 0x00000008;
        static constexpr unsigned FFLUSH(unsigned value) { return (value << 3); }
        static constexpr unsigned TRIS_POS = 4;
        static constexpr unsigned TRIS_MASK = 0x00000010;
        static constexpr unsigned TRIS(unsigned value) { return (value << 4); }
        static constexpr unsigned MUTE_POS = 5;
        static constexpr unsigned MUTE_MASK = 0x00000020;
        static constexpr unsigned MUTE(unsigned value) { return (value << 5); }
        static constexpr unsigned MUTEVAL_POS = 6;
        static constexpr unsigned MUTEVAL_MASK = 0x00000040;
        static constexpr unsigned MUTEVAL(unsigned value) { return (value << 6); }
        static constexpr unsigned MUTECNT_POS = 7;
        static constexpr unsigned MUTECNT_MASK = 0x00001f80;
        static constexpr unsigned MUTECNT(unsigned value) { return (value << 7); }
        static constexpr unsigned CPL_POS = 13;
        static constexpr unsigned CPL_MASK = 0x00002000;
        static constexpr unsigned CPL(unsigned value) { return (value << 13); }
        static constexpr unsigned COMP_POS = 14;
        static constexpr unsigned COMP_MASK = 0x0000c000;
        static constexpr unsigned COMP(unsigned value) { return (value << 14); }
    } SAI_ACR2;

    volatile union SAI_AFRCR_T // SAI_AFRCR: SAI AFrame configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_AFRCR_BIT_T
        {
            unsigned FRL   : 8; // bits 0..7 Frame length
            unsigned FSALL : 7; // bits 8..14 Frame synchronization active level length
            unsigned       : 1; // bit 15 unused
            unsigned FSDEF : 1; // bit 16 Frame synchronization definition
            unsigned FSPOL : 1; // bit 17 Frame synchronization polarity
            unsigned FSOFF : 1; // bit 18 Frame synchronization offset
            unsigned       : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned FRL_POS = 0;
        static constexpr unsigned FRL_MASK = 0x000000ff;
        static constexpr unsigned FRL(unsigned value) { return (value << 0); }
        static constexpr unsigned FSALL_POS = 8;
        static constexpr unsigned FSALL_MASK = 0x00007f00;
        static constexpr unsigned FSALL(unsigned value) { return (value << 8); }
        static constexpr unsigned FSDEF_POS = 16;
        static constexpr unsigned FSDEF_MASK = 0x00010000;
        static constexpr unsigned FSDEF(unsigned value) { return (value << 16); }
        static constexpr unsigned FSPOL_POS = 17;
        static constexpr unsigned FSPOL_MASK = 0x00020000;
        static constexpr unsigned FSPOL(unsigned value) { return (value << 17); }
        static constexpr unsigned FSOFF_POS = 18;
        static constexpr unsigned FSOFF_MASK = 0x00040000;
        static constexpr unsigned FSOFF(unsigned value) { return (value << 18); }
    } SAI_AFRCR;

    volatile union SAI_ASLOTR_T // SAI_ASLOTR: SAI ASlot register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_ASLOTR_BIT_T
        {
            unsigned FBOFF  : 5; // bits 0..4 First bit offset
            unsigned        : 1; // bit 5 unused
            unsigned SLOTSZ : 2; // bits 6..7 Slot size
            unsigned NBSLOT : 4; // bits 8..11 Number of slots in an audio frame
            unsigned        : 4; // bits 12..15 unused
            unsigned SLOTEN : 16; // bits 16..31 Slot enable    
        } bit;
    
        static constexpr unsigned FBOFF_POS = 0;
        static constexpr unsigned FBOFF_MASK = 0x0000001f;
        static constexpr unsigned FBOFF(unsigned value) { return (value << 0); }
        static constexpr unsigned SLOTSZ_POS = 6;
        static constexpr unsigned SLOTSZ_MASK = 0x000000c0;
        static constexpr unsigned SLOTSZ(unsigned value) { return (value << 6); }
        static constexpr unsigned NBSLOT_POS = 8;
        static constexpr unsigned NBSLOT_MASK = 0x00000f00;
        static constexpr unsigned NBSLOT(unsigned value) { return (value << 8); }
        static constexpr unsigned SLOTEN_POS = 16;
        static constexpr unsigned SLOTEN_MASK = 0xffff0000;
        static constexpr unsigned SLOTEN(unsigned value) { return (value << 16); }
    } SAI_ASLOTR;

    volatile union SAI_AIM_T // SAI_AIM: SAI AInterrupt mask register2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_AIM_BIT_T
        {
            unsigned OVRUDRIE  : 1; // bit 0 Overrun/underrun interrupt enable
            unsigned MUTEDETIE : 1; // bit 1 Mute detection interrupt enable
            unsigned WCKCFGIE  : 1; // bit 2 Wrong clock configuration interrupt enable
            unsigned FREQIE    : 1; // bit 3 FIFO request interrupt enable
            unsigned CNRDYIE   : 1; // bit 4 Codec not ready interrupt enable
            unsigned AFSDETIE  : 1; // bit 5 Anticipated frame synchronization detection interrupt enable
            unsigned LFSDETIE  : 1; // bit 6 Late frame synchronization detection interrupt enable
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned OVRUDRIE_POS = 0;
        static constexpr unsigned OVRUDRIE_MASK = 0x00000001;
        static constexpr unsigned OVRUDRIE(unsigned value) { return (value << 0); }
        static constexpr unsigned MUTEDETIE_POS = 1;
        static constexpr unsigned MUTEDETIE_MASK = 0x00000002;
        static constexpr unsigned MUTEDETIE(unsigned value) { return (value << 1); }
        static constexpr unsigned WCKCFGIE_POS = 2;
        static constexpr unsigned WCKCFGIE_MASK = 0x00000004;
        static constexpr unsigned WCKCFGIE(unsigned value) { return (value << 2); }
        static constexpr unsigned FREQIE_POS = 3;
        static constexpr unsigned FREQIE_MASK = 0x00000008;
        static constexpr unsigned FREQIE(unsigned value) { return (value << 3); }
        static constexpr unsigned CNRDYIE_POS = 4;
        static constexpr unsigned CNRDYIE_MASK = 0x00000010;
        static constexpr unsigned CNRDYIE(unsigned value) { return (value << 4); }
        static constexpr unsigned AFSDETIE_POS = 5;
        static constexpr unsigned AFSDETIE_MASK = 0x00000020;
        static constexpr unsigned AFSDETIE(unsigned value) { return (value << 5); }
        static constexpr unsigned LFSDETIE_POS = 6;
        static constexpr unsigned LFSDETIE_MASK = 0x00000040;
        static constexpr unsigned LFSDETIE(unsigned value) { return (value << 6); }
    } SAI_AIM;

    volatile union SAI_ASR_T // SAI_ASR: SAI AStatus register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_ASR_BIT_T
        {
            unsigned OVRUDR  : 1; // bit 0 Overrun / underrun
            unsigned MUTEDET : 1; // bit 1 Mute detection
            unsigned WCKCFG  : 1; // bit 2 Wrong clock configuration flag
            unsigned FREQ    : 1; // bit 3 FIFO request
            unsigned CNRDY   : 1; // bit 4 Codec not ready
            unsigned AFSDET  : 1; // bit 5 Anticipated frame synchronization detection
            unsigned LFSDET  : 1; // bit 6 Late frame synchronization detection
            unsigned         : 9; // bits 7..15 unused
            unsigned FLTH    : 3; // bits 16..18 FIFO level threshold
            unsigned         : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned OVRUDR_POS = 0;
        static constexpr unsigned OVRUDR_MASK = 0x00000001;
        static constexpr unsigned OVRUDR(unsigned value) { return (value << 0); }
        static constexpr unsigned MUTEDET_POS = 1;
        static constexpr unsigned MUTEDET_MASK = 0x00000002;
        static constexpr unsigned MUTEDET(unsigned value) { return (value << 1); }
        static constexpr unsigned WCKCFG_POS = 2;
        static constexpr unsigned WCKCFG_MASK = 0x00000004;
        static constexpr unsigned WCKCFG(unsigned value) { return (value << 2); }
        static constexpr unsigned FREQ_POS = 3;
        static constexpr unsigned FREQ_MASK = 0x00000008;
        static constexpr unsigned FREQ(unsigned value) { return (value << 3); }
        static constexpr unsigned CNRDY_POS = 4;
        static constexpr unsigned CNRDY_MASK = 0x00000010;
        static constexpr unsigned CNRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned AFSDET_POS = 5;
        static constexpr unsigned AFSDET_MASK = 0x00000020;
        static constexpr unsigned AFSDET(unsigned value) { return (value << 5); }
        static constexpr unsigned LFSDET_POS = 6;
        static constexpr unsigned LFSDET_MASK = 0x00000040;
        static constexpr unsigned LFSDET(unsigned value) { return (value << 6); }
        static constexpr unsigned FLTH_POS = 16;
        static constexpr unsigned FLTH_MASK = 0x00070000;
        static constexpr unsigned FLTH(unsigned value) { return (value << 16); }
    } SAI_ASR;

    volatile union SAI_ACLRFR_T // SAI_ACLRFR: SAI AClear flag register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_ACLRFR_BIT_T
        {
            unsigned COVRUDR  : 1; // bit 0 Clear overrun / underrun
            unsigned CMUTEDET : 1; // bit 1 Mute detection flag
            unsigned CWCKCFG  : 1; // bit 2 Clear wrong clock configuration flag
            unsigned          : 1; // bit 3 unused
            unsigned CCNRDY   : 1; // bit 4 Clear codec not ready flag
            unsigned CAFSDET  : 1; // bit 5 Clear anticipated frame synchronization detection flag
            unsigned CLFSDET  : 1; // bit 6 Clear late frame synchronization detection flag
            unsigned          : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned COVRUDR_POS = 0;
        static constexpr unsigned COVRUDR_MASK = 0x00000001;
        static constexpr unsigned COVRUDR(unsigned value) { return (value << 0); }
        static constexpr unsigned CMUTEDET_POS = 1;
        static constexpr unsigned CMUTEDET_MASK = 0x00000002;
        static constexpr unsigned CMUTEDET(unsigned value) { return (value << 1); }
        static constexpr unsigned CWCKCFG_POS = 2;
        static constexpr unsigned CWCKCFG_MASK = 0x00000004;
        static constexpr unsigned CWCKCFG(unsigned value) { return (value << 2); }
        static constexpr unsigned CCNRDY_POS = 4;
        static constexpr unsigned CCNRDY_MASK = 0x00000010;
        static constexpr unsigned CCNRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned CAFSDET_POS = 5;
        static constexpr unsigned CAFSDET_MASK = 0x00000020;
        static constexpr unsigned CAFSDET(unsigned value) { return (value << 5); }
        static constexpr unsigned CLFSDET_POS = 6;
        static constexpr unsigned CLFSDET_MASK = 0x00000040;
        static constexpr unsigned CLFSDET(unsigned value) { return (value << 6); }
    } SAI_ACLRFR;

    volatile union SAI_ADR_T // SAI_ADR: SAI AData register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_ADR_BIT_T
        {
            unsigned DATA : 32; // bits 0..31 Data    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0xffffffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
    } SAI_ADR;

    volatile union SAI_BCR1_T // SAI_BCR1: SAI BConfiguration register 1 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BCR1_BIT_T
        {
            unsigned MODE     : 2; // bits 0..1 Audio block mode
            unsigned PRTCFG   : 2; // bits 2..3 Protocol configuration
            unsigned          : 1; // bit 4 unused
            unsigned DS       : 3; // bits 5..7 Data size
            unsigned LSBFIRST : 1; // bit 8 Least significant bit first
            unsigned CKSTR    : 1; // bit 9 Clock strobing edge
            unsigned SYNCEN   : 2; // bits 10..11 Synchronization enable
            unsigned MONO     : 1; // bit 12 Mono mode
            unsigned OUTDRIV  : 1; // bit 13 Output drive
            unsigned          : 2; // bits 14..15 unused
            unsigned SAIBEN   : 1; // bit 16 Audio block enable
            unsigned DMAEN    : 1; // bit 17 DMA enable
            unsigned          : 1; // bit 18 unused
            unsigned NODIV    : 1; // bit 19 No divider
            unsigned MCKDIV   : 4; // bits 20..23 Master clock divider
            unsigned          : 8; // bits 24..31 unused    
        } bit;
    
        static constexpr unsigned MODE_POS = 0;
        static constexpr unsigned MODE_MASK = 0x00000003;
        static constexpr unsigned MODE(unsigned value) { return (value << 0); }
        static constexpr unsigned PRTCFG_POS = 2;
        static constexpr unsigned PRTCFG_MASK = 0x0000000c;
        static constexpr unsigned PRTCFG(unsigned value) { return (value << 2); }
        static constexpr unsigned DS_POS = 5;
        static constexpr unsigned DS_MASK = 0x000000e0;
        static constexpr unsigned DS(unsigned value) { return (value << 5); }
        static constexpr unsigned LSBFIRST_POS = 8;
        static constexpr unsigned LSBFIRST_MASK = 0x00000100;
        static constexpr unsigned LSBFIRST(unsigned value) { return (value << 8); }
        static constexpr unsigned CKSTR_POS = 9;
        static constexpr unsigned CKSTR_MASK = 0x00000200;
        static constexpr unsigned CKSTR(unsigned value) { return (value << 9); }
        static constexpr unsigned SYNCEN_POS = 10;
        static constexpr unsigned SYNCEN_MASK = 0x00000c00;
        static constexpr unsigned SYNCEN(unsigned value) { return (value << 10); }
        static constexpr unsigned MONO_POS = 12;
        static constexpr unsigned MONO_MASK = 0x00001000;
        static constexpr unsigned MONO(unsigned value) { return (value << 12); }
        static constexpr unsigned OUTDRIV_POS = 13;
        static constexpr unsigned OUTDRIV_MASK = 0x00002000;
        static constexpr unsigned OUTDRIV(unsigned value) { return (value << 13); }
        static constexpr unsigned SAIBEN_POS = 16;
        static constexpr unsigned SAIBEN_MASK = 0x00010000;
        static constexpr unsigned SAIBEN(unsigned value) { return (value << 16); }
        static constexpr unsigned DMAEN_POS = 17;
        static constexpr unsigned DMAEN_MASK = 0x00020000;
        static constexpr unsigned DMAEN(unsigned value) { return (value << 17); }
        static constexpr unsigned NODIV_POS = 19;
        static constexpr unsigned NODIV_MASK = 0x00080000;
        static constexpr unsigned NODIV(unsigned value) { return (value << 19); }
        static constexpr unsigned MCKDIV_POS = 20;
        static constexpr unsigned MCKDIV_MASK = 0x00f00000;
        static constexpr unsigned MCKDIV(unsigned value) { return (value << 20); }
    } SAI_BCR1;

    volatile union SAI_BCR2_T // SAI_BCR2: SAI BConfiguration register 2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BCR2_BIT_T
        {
            unsigned FTH     : 3; // bits 0..2 FIFO threshold
            unsigned FFLUSH  : 1; // bit 3 FIFO flush
            unsigned TRIS    : 1; // bit 4 Tristate management on data line
            unsigned MUTE    : 1; // bit 5 Mute
            unsigned MUTEVAL : 1; // bit 6 Mute value
            unsigned MUTECNT : 6; // bits 7..12 Mute counter
            unsigned CPL     : 1; // bit 13 Complement bit
            unsigned COMP    : 2; // bits 14..15 Companding mode
            unsigned         : 16; // bits 16..31 unused    
        } bit;
    
        static constexpr unsigned FTH_POS = 0;
        static constexpr unsigned FTH_MASK = 0x00000007;
        static constexpr unsigned FTH(unsigned value) { return (value << 0); }
        static constexpr unsigned FFLUSH_POS = 3;
        static constexpr unsigned FFLUSH_MASK = 0x00000008;
        static constexpr unsigned FFLUSH(unsigned value) { return (value << 3); }
        static constexpr unsigned TRIS_POS = 4;
        static constexpr unsigned TRIS_MASK = 0x00000010;
        static constexpr unsigned TRIS(unsigned value) { return (value << 4); }
        static constexpr unsigned MUTE_POS = 5;
        static constexpr unsigned MUTE_MASK = 0x00000020;
        static constexpr unsigned MUTE(unsigned value) { return (value << 5); }
        static constexpr unsigned MUTEVAL_POS = 6;
        static constexpr unsigned MUTEVAL_MASK = 0x00000040;
        static constexpr unsigned MUTEVAL(unsigned value) { return (value << 6); }
        static constexpr unsigned MUTECNT_POS = 7;
        static constexpr unsigned MUTECNT_MASK = 0x00001f80;
        static constexpr unsigned MUTECNT(unsigned value) { return (value << 7); }
        static constexpr unsigned CPL_POS = 13;
        static constexpr unsigned CPL_MASK = 0x00002000;
        static constexpr unsigned CPL(unsigned value) { return (value << 13); }
        static constexpr unsigned COMP_POS = 14;
        static constexpr unsigned COMP_MASK = 0x0000c000;
        static constexpr unsigned COMP(unsigned value) { return (value << 14); }
    } SAI_BCR2;

    volatile union SAI_BFRCR_T // SAI_BFRCR: SAI BFrame configuration register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BFRCR_BIT_T
        {
            unsigned FRL   : 8; // bits 0..7 Frame length
            unsigned FSALL : 7; // bits 8..14 Frame synchronization active level length
            unsigned       : 1; // bit 15 unused
            unsigned FSDEF : 1; // bit 16 Frame synchronization definition
            unsigned FSPOL : 1; // bit 17 Frame synchronization polarity
            unsigned FSOFF : 1; // bit 18 Frame synchronization offset
            unsigned       : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned FRL_POS = 0;
        static constexpr unsigned FRL_MASK = 0x000000ff;
        static constexpr unsigned FRL(unsigned value) { return (value << 0); }
        static constexpr unsigned FSALL_POS = 8;
        static constexpr unsigned FSALL_MASK = 0x00007f00;
        static constexpr unsigned FSALL(unsigned value) { return (value << 8); }
        static constexpr unsigned FSDEF_POS = 16;
        static constexpr unsigned FSDEF_MASK = 0x00010000;
        static constexpr unsigned FSDEF(unsigned value) { return (value << 16); }
        static constexpr unsigned FSPOL_POS = 17;
        static constexpr unsigned FSPOL_MASK = 0x00020000;
        static constexpr unsigned FSPOL(unsigned value) { return (value << 17); }
        static constexpr unsigned FSOFF_POS = 18;
        static constexpr unsigned FSOFF_MASK = 0x00040000;
        static constexpr unsigned FSOFF(unsigned value) { return (value << 18); }
    } SAI_BFRCR;

    volatile union SAI_BSLOTR_T // SAI_BSLOTR: SAI BSlot register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BSLOTR_BIT_T
        {
            unsigned FBOFF  : 5; // bits 0..4 First bit offset
            unsigned        : 1; // bit 5 unused
            unsigned SLOTSZ : 2; // bits 6..7 Slot size
            unsigned NBSLOT : 4; // bits 8..11 Number of slots in an audio frame
            unsigned        : 4; // bits 12..15 unused
            unsigned SLOTEN : 16; // bits 16..31 Slot enable    
        } bit;
    
        static constexpr unsigned FBOFF_POS = 0;
        static constexpr unsigned FBOFF_MASK = 0x0000001f;
        static constexpr unsigned FBOFF(unsigned value) { return (value << 0); }
        static constexpr unsigned SLOTSZ_POS = 6;
        static constexpr unsigned SLOTSZ_MASK = 0x000000c0;
        static constexpr unsigned SLOTSZ(unsigned value) { return (value << 6); }
        static constexpr unsigned NBSLOT_POS = 8;
        static constexpr unsigned NBSLOT_MASK = 0x00000f00;
        static constexpr unsigned NBSLOT(unsigned value) { return (value << 8); }
        static constexpr unsigned SLOTEN_POS = 16;
        static constexpr unsigned SLOTEN_MASK = 0xffff0000;
        static constexpr unsigned SLOTEN(unsigned value) { return (value << 16); }
    } SAI_BSLOTR;

    volatile union SAI_BIM_T // SAI_BIM: SAI BInterrupt mask register2 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BIM_BIT_T
        {
            unsigned OVRUDRIE  : 1; // bit 0 Overrun/underrun interrupt enable
            unsigned MUTEDETIE : 1; // bit 1 Mute detection interrupt enable
            unsigned WCKCFGIE  : 1; // bit 2 Wrong clock configuration interrupt enable
            unsigned FREQIE    : 1; // bit 3 FIFO request interrupt enable
            unsigned CNRDYIE   : 1; // bit 4 Codec not ready interrupt enable
            unsigned AFSDETIE  : 1; // bit 5 Anticipated frame synchronization detection interrupt enable
            unsigned LFSDETIE  : 1; // bit 6 Late frame synchronization detection interrupt enable
            unsigned           : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned OVRUDRIE_POS = 0;
        static constexpr unsigned OVRUDRIE_MASK = 0x00000001;
        static constexpr unsigned OVRUDRIE(unsigned value) { return (value << 0); }
        static constexpr unsigned MUTEDETIE_POS = 1;
        static constexpr unsigned MUTEDETIE_MASK = 0x00000002;
        static constexpr unsigned MUTEDETIE(unsigned value) { return (value << 1); }
        static constexpr unsigned WCKCFGIE_POS = 2;
        static constexpr unsigned WCKCFGIE_MASK = 0x00000004;
        static constexpr unsigned WCKCFGIE(unsigned value) { return (value << 2); }
        static constexpr unsigned FREQIE_POS = 3;
        static constexpr unsigned FREQIE_MASK = 0x00000008;
        static constexpr unsigned FREQIE(unsigned value) { return (value << 3); }
        static constexpr unsigned CNRDYIE_POS = 4;
        static constexpr unsigned CNRDYIE_MASK = 0x00000010;
        static constexpr unsigned CNRDYIE(unsigned value) { return (value << 4); }
        static constexpr unsigned AFSDETIE_POS = 5;
        static constexpr unsigned AFSDETIE_MASK = 0x00000020;
        static constexpr unsigned AFSDETIE(unsigned value) { return (value << 5); }
        static constexpr unsigned LFSDETIE_POS = 6;
        static constexpr unsigned LFSDETIE_MASK = 0x00000040;
        static constexpr unsigned LFSDETIE(unsigned value) { return (value << 6); }
    } SAI_BIM;

    volatile union SAI_BSR_T // SAI_BSR: SAI BStatus register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BSR_BIT_T
        {
            unsigned OVRUDR  : 1; // bit 0 Overrun / underrun
            unsigned MUTEDET : 1; // bit 1 Mute detection
            unsigned WCKCFG  : 1; // bit 2 Wrong clock configuration flag
            unsigned FREQ    : 1; // bit 3 FIFO request
            unsigned CNRDY   : 1; // bit 4 Codec not ready
            unsigned AFSDET  : 1; // bit 5 Anticipated frame synchronization detection
            unsigned LFSDET  : 1; // bit 6 Late frame synchronization detection
            unsigned         : 9; // bits 7..15 unused
            unsigned FLTH    : 3; // bits 16..18 FIFO level threshold
            unsigned         : 13; // bits 19..31 unused    
        } bit;
    
        static constexpr unsigned OVRUDR_POS = 0;
        static constexpr unsigned OVRUDR_MASK = 0x00000001;
        static constexpr unsigned OVRUDR(unsigned value) { return (value << 0); }
        static constexpr unsigned MUTEDET_POS = 1;
        static constexpr unsigned MUTEDET_MASK = 0x00000002;
        static constexpr unsigned MUTEDET(unsigned value) { return (value << 1); }
        static constexpr unsigned WCKCFG_POS = 2;
        static constexpr unsigned WCKCFG_MASK = 0x00000004;
        static constexpr unsigned WCKCFG(unsigned value) { return (value << 2); }
        static constexpr unsigned FREQ_POS = 3;
        static constexpr unsigned FREQ_MASK = 0x00000008;
        static constexpr unsigned FREQ(unsigned value) { return (value << 3); }
        static constexpr unsigned CNRDY_POS = 4;
        static constexpr unsigned CNRDY_MASK = 0x00000010;
        static constexpr unsigned CNRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned AFSDET_POS = 5;
        static constexpr unsigned AFSDET_MASK = 0x00000020;
        static constexpr unsigned AFSDET(unsigned value) { return (value << 5); }
        static constexpr unsigned LFSDET_POS = 6;
        static constexpr unsigned LFSDET_MASK = 0x00000040;
        static constexpr unsigned LFSDET(unsigned value) { return (value << 6); }
        static constexpr unsigned FLTH_POS = 16;
        static constexpr unsigned FLTH_MASK = 0x00070000;
        static constexpr unsigned FLTH(unsigned value) { return (value << 16); }
    } SAI_BSR;

    volatile union SAI_BCLRFR_T // SAI_BCLRFR: SAI BClear flag register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BCLRFR_BIT_T
        {
            unsigned COVRUDR  : 1; // bit 0 Clear overrun / underrun
            unsigned CMUTEDET : 1; // bit 1 Mute detection flag
            unsigned CWCKCFG  : 1; // bit 2 Clear wrong clock configuration flag
            unsigned          : 1; // bit 3 unused
            unsigned CCNRDY   : 1; // bit 4 Clear codec not ready flag
            unsigned CAFSDET  : 1; // bit 5 Clear anticipated frame synchronization detection flag
            unsigned CLFSDET  : 1; // bit 6 Clear late frame synchronization detection flag
            unsigned          : 25; // bits 7..31 unused    
        } bit;
    
        static constexpr unsigned COVRUDR_POS = 0;
        static constexpr unsigned COVRUDR_MASK = 0x00000001;
        static constexpr unsigned COVRUDR(unsigned value) { return (value << 0); }
        static constexpr unsigned CMUTEDET_POS = 1;
        static constexpr unsigned CMUTEDET_MASK = 0x00000002;
        static constexpr unsigned CMUTEDET(unsigned value) { return (value << 1); }
        static constexpr unsigned CWCKCFG_POS = 2;
        static constexpr unsigned CWCKCFG_MASK = 0x00000004;
        static constexpr unsigned CWCKCFG(unsigned value) { return (value << 2); }
        static constexpr unsigned CCNRDY_POS = 4;
        static constexpr unsigned CCNRDY_MASK = 0x00000010;
        static constexpr unsigned CCNRDY(unsigned value) { return (value << 4); }
        static constexpr unsigned CAFSDET_POS = 5;
        static constexpr unsigned CAFSDET_MASK = 0x00000020;
        static constexpr unsigned CAFSDET(unsigned value) { return (value << 5); }
        static constexpr unsigned CLFSDET_POS = 6;
        static constexpr unsigned CLFSDET_MASK = 0x00000040;
        static constexpr unsigned CLFSDET(unsigned value) { return (value << 6); }
    } SAI_BCLRFR;

    volatile union SAI_BDR_T // SAI_BDR: SAI BData register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SAI_BDR_BIT_T
        {
            unsigned DATA : 32; // bits 0..31 Data    
        } bit;
    
        static constexpr unsigned DATA_POS = 0;
        static constexpr unsigned DATA_MASK = 0xffffffff;
        static constexpr unsigned DATA(unsigned value) { return (value << 0); }
    } SAI_BDR;

}; // struct SAI1_T

static_assert(sizeof(SAI_T) == SAI_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp