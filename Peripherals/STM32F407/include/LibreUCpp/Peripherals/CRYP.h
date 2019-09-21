#pragma once

#include <stdint.h>
#include <unistd.h>

namespace LibreUCpp {
namespace Peripherals {

struct __attribute__((aligned(4), packed)) CRYP_T
{
    static constexpr size_t INSTANCE_SIZE = 144;
    static constexpr intptr_t BASE_ADDRESS = 0x50060000;

    static constexpr intptr_t ADDR_OFFSET_CR = 0x00;
    static constexpr intptr_t ADDR_OFFSET_SR = 0x04;
    static constexpr intptr_t ADDR_OFFSET_DIN = 0x08;
    static constexpr intptr_t ADDR_OFFSET_DOUT = 0x0c;
    static constexpr intptr_t ADDR_OFFSET_DMACR = 0x10;
    static constexpr intptr_t ADDR_OFFSET_IMSCR = 0x14;
    static constexpr intptr_t ADDR_OFFSET_RISR = 0x18;
    static constexpr intptr_t ADDR_OFFSET_MISR = 0x1c;
    static constexpr intptr_t ADDR_OFFSET_K0LR = 0x20;
    static constexpr intptr_t ADDR_OFFSET_K0RR = 0x24;
    static constexpr intptr_t ADDR_OFFSET_K1LR = 0x28;
    static constexpr intptr_t ADDR_OFFSET_K1RR = 0x2c;
    static constexpr intptr_t ADDR_OFFSET_K2LR = 0x30;
    static constexpr intptr_t ADDR_OFFSET_K2RR = 0x34;
    static constexpr intptr_t ADDR_OFFSET_K3LR = 0x38;
    static constexpr intptr_t ADDR_OFFSET_K3RR = 0x3c;
    static constexpr intptr_t ADDR_OFFSET_IV0LR = 0x40;
    static constexpr intptr_t ADDR_OFFSET_IV0RR = 0x44;
    static constexpr intptr_t ADDR_OFFSET_IV1LR = 0x48;
    static constexpr intptr_t ADDR_OFFSET_IV1RR = 0x4c;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM0R = 0x50;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM1R = 0x54;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM2R = 0x58;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM3R = 0x5c;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM4R = 0x60;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM5R = 0x64;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM6R = 0x68;
    static constexpr intptr_t ADDR_OFFSET_CSGCMCCM7R = 0x6c;
    static constexpr intptr_t ADDR_OFFSET_CSGCM0R = 0x70;
    static constexpr intptr_t ADDR_OFFSET_CSGCM1R = 0x74;
    static constexpr intptr_t ADDR_OFFSET_CSGCM2R = 0x78;
    static constexpr intptr_t ADDR_OFFSET_CSGCM3R = 0x7c;
    static constexpr intptr_t ADDR_OFFSET_CSGCM4R = 0x80;
    static constexpr intptr_t ADDR_OFFSET_CSGCM5R = 0x84;
    static constexpr intptr_t ADDR_OFFSET_CSGCM6R = 0x88;
    static constexpr intptr_t ADDR_OFFSET_CSGCM7R = 0x8c;

    volatile union CR_T // CR: control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CR_BIT_T
        {
            unsigned           : 2; // bits 0..1 unused
            unsigned ALGODIR   : 1; // bit 2 Algorithm direction
            unsigned ALGOMODE0 : 3; // bits 3..5 Algorithm mode
            unsigned DATATYPE  : 2; // bits 6..7 Data type selection
            unsigned KEYSIZE   : 2; // bits 8..9 Key size selection (AES mode only)
            unsigned           : 4; // bits 10..13 unused
            unsigned FFLUSH    : 1; // bit 14 FIFO flush
            unsigned CRYPEN    : 1; // bit 15 Cryptographic processor enable
            unsigned GCM_CCMPH : 2; // bits 16..17 GCM_CCMPH
            unsigned           : 1; // bit 18 unused
            unsigned ALGOMODE3 : 1; // bit 19 ALGOMODE
            unsigned           : 12; // bits 20..31 unused    
        } bit;
    
        static constexpr unsigned ALGODIR_POS = 2;
        static constexpr unsigned ALGODIR_MASK = 0x00000004;
        static constexpr unsigned ALGODIR(unsigned value) { return (value << 2); }
        static constexpr unsigned ALGOMODE0_POS = 3;
        static constexpr unsigned ALGOMODE0_MASK = 0x00000038;
        static constexpr unsigned ALGOMODE0(unsigned value) { return (value << 3); }
        static constexpr unsigned DATATYPE_POS = 6;
        static constexpr unsigned DATATYPE_MASK = 0x000000c0;
        static constexpr unsigned DATATYPE(unsigned value) { return (value << 6); }
        static constexpr unsigned KEYSIZE_POS = 8;
        static constexpr unsigned KEYSIZE_MASK = 0x00000300;
        static constexpr unsigned KEYSIZE(unsigned value) { return (value << 8); }
        static constexpr unsigned FFLUSH_POS = 14;
        static constexpr unsigned FFLUSH_MASK = 0x00004000;
        static constexpr unsigned FFLUSH(unsigned value) { return (value << 14); }
        static constexpr unsigned CRYPEN_POS = 15;
        static constexpr unsigned CRYPEN_MASK = 0x00008000;
        static constexpr unsigned CRYPEN(unsigned value) { return (value << 15); }
        static constexpr unsigned GCM_CCMPH_POS = 16;
        static constexpr unsigned GCM_CCMPH_MASK = 0x00030000;
        static constexpr unsigned GCM_CCMPH(unsigned value) { return (value << 16); }
        static constexpr unsigned ALGOMODE3_POS = 19;
        static constexpr unsigned ALGOMODE3_MASK = 0x00080000;
        static constexpr unsigned ALGOMODE3(unsigned value) { return (value << 19); }
    } CR;

    volatile union SR_T // SR: status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) SR_BIT_T
        {
            unsigned IFEM : 1; // bit 0 Input FIFO empty
            unsigned IFNF : 1; // bit 1 Input FIFO not full
            unsigned OFNE : 1; // bit 2 Output FIFO not empty
            unsigned OFFU : 1; // bit 3 Output FIFO full
            unsigned BUSY : 1; // bit 4 Busy bit
            unsigned      : 27; // bits 5..31 unused    
        } bit;
    
        static constexpr unsigned IFEM_POS = 0;
        static constexpr unsigned IFEM_MASK = 0x00000001;
        static constexpr unsigned IFEM(unsigned value) { return (value << 0); }
        static constexpr unsigned IFNF_POS = 1;
        static constexpr unsigned IFNF_MASK = 0x00000002;
        static constexpr unsigned IFNF(unsigned value) { return (value << 1); }
        static constexpr unsigned OFNE_POS = 2;
        static constexpr unsigned OFNE_MASK = 0x00000004;
        static constexpr unsigned OFNE(unsigned value) { return (value << 2); }
        static constexpr unsigned OFFU_POS = 3;
        static constexpr unsigned OFFU_MASK = 0x00000008;
        static constexpr unsigned OFFU(unsigned value) { return (value << 3); }
        static constexpr unsigned BUSY_POS = 4;
        static constexpr unsigned BUSY_MASK = 0x00000010;
        static constexpr unsigned BUSY(unsigned value) { return (value << 4); }
    } SR;

    volatile union DIN_T // DIN: data input register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DIN_BIT_T
        {
            unsigned DATAIN : 32; // bits 0..31 Data input    
        } bit;
    
        static constexpr unsigned DATAIN_POS = 0;
        static constexpr unsigned DATAIN_MASK = 0xffffffff;
        static constexpr unsigned DATAIN(unsigned value) { return (value << 0); }
    } DIN;

    volatile union DOUT_T // DOUT: data output register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DOUT_BIT_T
        {
            unsigned DATAOUT : 32; // bits 0..31 Data output    
        } bit;
    
        static constexpr unsigned DATAOUT_POS = 0;
        static constexpr unsigned DATAOUT_MASK = 0xffffffff;
        static constexpr unsigned DATAOUT(unsigned value) { return (value << 0); }
    } DOUT;

    volatile union DMACR_T // DMACR: DMA control register 
    {
        uint32_t reg;
        struct __attribute__((packed)) DMACR_BIT_T
        {
            unsigned DIEN : 1; // bit 0 DMA input enable
            unsigned DOEN : 1; // bit 1 DMA output enable
            unsigned      : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned DIEN_POS = 0;
        static constexpr unsigned DIEN_MASK = 0x00000001;
        static constexpr unsigned DIEN(unsigned value) { return (value << 0); }
        static constexpr unsigned DOEN_POS = 1;
        static constexpr unsigned DOEN_MASK = 0x00000002;
        static constexpr unsigned DOEN(unsigned value) { return (value << 1); }
    } DMACR;

    volatile union IMSCR_T // IMSCR: interrupt mask set/clear register 
    {
        uint32_t reg;
        struct __attribute__((packed)) IMSCR_BIT_T
        {
            unsigned INIM  : 1; // bit 0 Input FIFO service interrupt mask
            unsigned OUTIM : 1; // bit 1 Output FIFO service interrupt mask
            unsigned       : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned INIM_POS = 0;
        static constexpr unsigned INIM_MASK = 0x00000001;
        static constexpr unsigned INIM(unsigned value) { return (value << 0); }
        static constexpr unsigned OUTIM_POS = 1;
        static constexpr unsigned OUTIM_MASK = 0x00000002;
        static constexpr unsigned OUTIM(unsigned value) { return (value << 1); }
    } IMSCR;

    volatile union RISR_T // RISR: raw interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) RISR_BIT_T
        {
            unsigned INRIS  : 1; // bit 0 Input FIFO service raw interrupt status
            unsigned OUTRIS : 1; // bit 1 Output FIFO service raw interrupt status
            unsigned        : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned INRIS_POS = 0;
        static constexpr unsigned INRIS_MASK = 0x00000001;
        static constexpr unsigned INRIS(unsigned value) { return (value << 0); }
        static constexpr unsigned OUTRIS_POS = 1;
        static constexpr unsigned OUTRIS_MASK = 0x00000002;
        static constexpr unsigned OUTRIS(unsigned value) { return (value << 1); }
    } RISR;

    volatile union MISR_T // MISR: masked interrupt status register 
    {
        uint32_t reg;
        struct __attribute__((packed)) MISR_BIT_T
        {
            unsigned INMIS  : 1; // bit 0 Input FIFO service masked interrupt status
            unsigned OUTMIS : 1; // bit 1 Output FIFO service masked interrupt status
            unsigned        : 30; // bits 2..31 unused    
        } bit;
    
        static constexpr unsigned INMIS_POS = 0;
        static constexpr unsigned INMIS_MASK = 0x00000001;
        static constexpr unsigned INMIS(unsigned value) { return (value << 0); }
        static constexpr unsigned OUTMIS_POS = 1;
        static constexpr unsigned OUTMIS_MASK = 0x00000002;
        static constexpr unsigned OUTMIS(unsigned value) { return (value << 1); }
    } MISR;

    volatile union K0LR_T // K0LR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K0LR_BIT_T
        {
            unsigned b224 : 1; // bit 0 b224
            unsigned b225 : 1; // bit 1 b225
            unsigned b226 : 1; // bit 2 b226
            unsigned b227 : 1; // bit 3 b227
            unsigned b228 : 1; // bit 4 b228
            unsigned b229 : 1; // bit 5 b229
            unsigned b230 : 1; // bit 6 b230
            unsigned b231 : 1; // bit 7 b231
            unsigned b232 : 1; // bit 8 b232
            unsigned b233 : 1; // bit 9 b233
            unsigned b234 : 1; // bit 10 b234
            unsigned b235 : 1; // bit 11 b235
            unsigned b236 : 1; // bit 12 b236
            unsigned b237 : 1; // bit 13 b237
            unsigned b238 : 1; // bit 14 b238
            unsigned b239 : 1; // bit 15 b239
            unsigned b240 : 1; // bit 16 b240
            unsigned b241 : 1; // bit 17 b241
            unsigned b242 : 1; // bit 18 b242
            unsigned b243 : 1; // bit 19 b243
            unsigned b244 : 1; // bit 20 b244
            unsigned b245 : 1; // bit 21 b245
            unsigned b246 : 1; // bit 22 b246
            unsigned b247 : 1; // bit 23 b247
            unsigned b248 : 1; // bit 24 b248
            unsigned b249 : 1; // bit 25 b249
            unsigned b250 : 1; // bit 26 b250
            unsigned b251 : 1; // bit 27 b251
            unsigned b252 : 1; // bit 28 b252
            unsigned b253 : 1; // bit 29 b253
            unsigned b254 : 1; // bit 30 b254
            unsigned b255 : 1; // bit 31 b255    
        } bit;
    
        static constexpr unsigned b224_POS = 0;
        static constexpr unsigned b224_MASK = 0x00000001;
        static constexpr unsigned b224(unsigned value) { return (value << 0); }
        static constexpr unsigned b225_POS = 1;
        static constexpr unsigned b225_MASK = 0x00000002;
        static constexpr unsigned b225(unsigned value) { return (value << 1); }
        static constexpr unsigned b226_POS = 2;
        static constexpr unsigned b226_MASK = 0x00000004;
        static constexpr unsigned b226(unsigned value) { return (value << 2); }
        static constexpr unsigned b227_POS = 3;
        static constexpr unsigned b227_MASK = 0x00000008;
        static constexpr unsigned b227(unsigned value) { return (value << 3); }
        static constexpr unsigned b228_POS = 4;
        static constexpr unsigned b228_MASK = 0x00000010;
        static constexpr unsigned b228(unsigned value) { return (value << 4); }
        static constexpr unsigned b229_POS = 5;
        static constexpr unsigned b229_MASK = 0x00000020;
        static constexpr unsigned b229(unsigned value) { return (value << 5); }
        static constexpr unsigned b230_POS = 6;
        static constexpr unsigned b230_MASK = 0x00000040;
        static constexpr unsigned b230(unsigned value) { return (value << 6); }
        static constexpr unsigned b231_POS = 7;
        static constexpr unsigned b231_MASK = 0x00000080;
        static constexpr unsigned b231(unsigned value) { return (value << 7); }
        static constexpr unsigned b232_POS = 8;
        static constexpr unsigned b232_MASK = 0x00000100;
        static constexpr unsigned b232(unsigned value) { return (value << 8); }
        static constexpr unsigned b233_POS = 9;
        static constexpr unsigned b233_MASK = 0x00000200;
        static constexpr unsigned b233(unsigned value) { return (value << 9); }
        static constexpr unsigned b234_POS = 10;
        static constexpr unsigned b234_MASK = 0x00000400;
        static constexpr unsigned b234(unsigned value) { return (value << 10); }
        static constexpr unsigned b235_POS = 11;
        static constexpr unsigned b235_MASK = 0x00000800;
        static constexpr unsigned b235(unsigned value) { return (value << 11); }
        static constexpr unsigned b236_POS = 12;
        static constexpr unsigned b236_MASK = 0x00001000;
        static constexpr unsigned b236(unsigned value) { return (value << 12); }
        static constexpr unsigned b237_POS = 13;
        static constexpr unsigned b237_MASK = 0x00002000;
        static constexpr unsigned b237(unsigned value) { return (value << 13); }
        static constexpr unsigned b238_POS = 14;
        static constexpr unsigned b238_MASK = 0x00004000;
        static constexpr unsigned b238(unsigned value) { return (value << 14); }
        static constexpr unsigned b239_POS = 15;
        static constexpr unsigned b239_MASK = 0x00008000;
        static constexpr unsigned b239(unsigned value) { return (value << 15); }
        static constexpr unsigned b240_POS = 16;
        static constexpr unsigned b240_MASK = 0x00010000;
        static constexpr unsigned b240(unsigned value) { return (value << 16); }
        static constexpr unsigned b241_POS = 17;
        static constexpr unsigned b241_MASK = 0x00020000;
        static constexpr unsigned b241(unsigned value) { return (value << 17); }
        static constexpr unsigned b242_POS = 18;
        static constexpr unsigned b242_MASK = 0x00040000;
        static constexpr unsigned b242(unsigned value) { return (value << 18); }
        static constexpr unsigned b243_POS = 19;
        static constexpr unsigned b243_MASK = 0x00080000;
        static constexpr unsigned b243(unsigned value) { return (value << 19); }
        static constexpr unsigned b244_POS = 20;
        static constexpr unsigned b244_MASK = 0x00100000;
        static constexpr unsigned b244(unsigned value) { return (value << 20); }
        static constexpr unsigned b245_POS = 21;
        static constexpr unsigned b245_MASK = 0x00200000;
        static constexpr unsigned b245(unsigned value) { return (value << 21); }
        static constexpr unsigned b246_POS = 22;
        static constexpr unsigned b246_MASK = 0x00400000;
        static constexpr unsigned b246(unsigned value) { return (value << 22); }
        static constexpr unsigned b247_POS = 23;
        static constexpr unsigned b247_MASK = 0x00800000;
        static constexpr unsigned b247(unsigned value) { return (value << 23); }
        static constexpr unsigned b248_POS = 24;
        static constexpr unsigned b248_MASK = 0x01000000;
        static constexpr unsigned b248(unsigned value) { return (value << 24); }
        static constexpr unsigned b249_POS = 25;
        static constexpr unsigned b249_MASK = 0x02000000;
        static constexpr unsigned b249(unsigned value) { return (value << 25); }
        static constexpr unsigned b250_POS = 26;
        static constexpr unsigned b250_MASK = 0x04000000;
        static constexpr unsigned b250(unsigned value) { return (value << 26); }
        static constexpr unsigned b251_POS = 27;
        static constexpr unsigned b251_MASK = 0x08000000;
        static constexpr unsigned b251(unsigned value) { return (value << 27); }
        static constexpr unsigned b252_POS = 28;
        static constexpr unsigned b252_MASK = 0x10000000;
        static constexpr unsigned b252(unsigned value) { return (value << 28); }
        static constexpr unsigned b253_POS = 29;
        static constexpr unsigned b253_MASK = 0x20000000;
        static constexpr unsigned b253(unsigned value) { return (value << 29); }
        static constexpr unsigned b254_POS = 30;
        static constexpr unsigned b254_MASK = 0x40000000;
        static constexpr unsigned b254(unsigned value) { return (value << 30); }
        static constexpr unsigned b255_POS = 31;
        static constexpr unsigned b255_MASK = 0x80000000;
        static constexpr unsigned b255(unsigned value) { return (value << 31); }
    } K0LR;

    volatile union K0RR_T // K0RR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K0RR_BIT_T
        {
            unsigned b192 : 1; // bit 0 b192
            unsigned b193 : 1; // bit 1 b193
            unsigned b194 : 1; // bit 2 b194
            unsigned b195 : 1; // bit 3 b195
            unsigned b196 : 1; // bit 4 b196
            unsigned b197 : 1; // bit 5 b197
            unsigned b198 : 1; // bit 6 b198
            unsigned b199 : 1; // bit 7 b199
            unsigned b200 : 1; // bit 8 b200
            unsigned b201 : 1; // bit 9 b201
            unsigned b202 : 1; // bit 10 b202
            unsigned b203 : 1; // bit 11 b203
            unsigned b204 : 1; // bit 12 b204
            unsigned b205 : 1; // bit 13 b205
            unsigned b206 : 1; // bit 14 b206
            unsigned b207 : 1; // bit 15 b207
            unsigned b208 : 1; // bit 16 b208
            unsigned b209 : 1; // bit 17 b209
            unsigned b210 : 1; // bit 18 b210
            unsigned b211 : 1; // bit 19 b211
            unsigned b212 : 1; // bit 20 b212
            unsigned b213 : 1; // bit 21 b213
            unsigned b214 : 1; // bit 22 b214
            unsigned b215 : 1; // bit 23 b215
            unsigned b216 : 1; // bit 24 b216
            unsigned b217 : 1; // bit 25 b217
            unsigned b218 : 1; // bit 26 b218
            unsigned b219 : 1; // bit 27 b219
            unsigned b220 : 1; // bit 28 b220
            unsigned b221 : 1; // bit 29 b221
            unsigned b222 : 1; // bit 30 b222
            unsigned b223 : 1; // bit 31 b223    
        } bit;
    
        static constexpr unsigned b192_POS = 0;
        static constexpr unsigned b192_MASK = 0x00000001;
        static constexpr unsigned b192(unsigned value) { return (value << 0); }
        static constexpr unsigned b193_POS = 1;
        static constexpr unsigned b193_MASK = 0x00000002;
        static constexpr unsigned b193(unsigned value) { return (value << 1); }
        static constexpr unsigned b194_POS = 2;
        static constexpr unsigned b194_MASK = 0x00000004;
        static constexpr unsigned b194(unsigned value) { return (value << 2); }
        static constexpr unsigned b195_POS = 3;
        static constexpr unsigned b195_MASK = 0x00000008;
        static constexpr unsigned b195(unsigned value) { return (value << 3); }
        static constexpr unsigned b196_POS = 4;
        static constexpr unsigned b196_MASK = 0x00000010;
        static constexpr unsigned b196(unsigned value) { return (value << 4); }
        static constexpr unsigned b197_POS = 5;
        static constexpr unsigned b197_MASK = 0x00000020;
        static constexpr unsigned b197(unsigned value) { return (value << 5); }
        static constexpr unsigned b198_POS = 6;
        static constexpr unsigned b198_MASK = 0x00000040;
        static constexpr unsigned b198(unsigned value) { return (value << 6); }
        static constexpr unsigned b199_POS = 7;
        static constexpr unsigned b199_MASK = 0x00000080;
        static constexpr unsigned b199(unsigned value) { return (value << 7); }
        static constexpr unsigned b200_POS = 8;
        static constexpr unsigned b200_MASK = 0x00000100;
        static constexpr unsigned b200(unsigned value) { return (value << 8); }
        static constexpr unsigned b201_POS = 9;
        static constexpr unsigned b201_MASK = 0x00000200;
        static constexpr unsigned b201(unsigned value) { return (value << 9); }
        static constexpr unsigned b202_POS = 10;
        static constexpr unsigned b202_MASK = 0x00000400;
        static constexpr unsigned b202(unsigned value) { return (value << 10); }
        static constexpr unsigned b203_POS = 11;
        static constexpr unsigned b203_MASK = 0x00000800;
        static constexpr unsigned b203(unsigned value) { return (value << 11); }
        static constexpr unsigned b204_POS = 12;
        static constexpr unsigned b204_MASK = 0x00001000;
        static constexpr unsigned b204(unsigned value) { return (value << 12); }
        static constexpr unsigned b205_POS = 13;
        static constexpr unsigned b205_MASK = 0x00002000;
        static constexpr unsigned b205(unsigned value) { return (value << 13); }
        static constexpr unsigned b206_POS = 14;
        static constexpr unsigned b206_MASK = 0x00004000;
        static constexpr unsigned b206(unsigned value) { return (value << 14); }
        static constexpr unsigned b207_POS = 15;
        static constexpr unsigned b207_MASK = 0x00008000;
        static constexpr unsigned b207(unsigned value) { return (value << 15); }
        static constexpr unsigned b208_POS = 16;
        static constexpr unsigned b208_MASK = 0x00010000;
        static constexpr unsigned b208(unsigned value) { return (value << 16); }
        static constexpr unsigned b209_POS = 17;
        static constexpr unsigned b209_MASK = 0x00020000;
        static constexpr unsigned b209(unsigned value) { return (value << 17); }
        static constexpr unsigned b210_POS = 18;
        static constexpr unsigned b210_MASK = 0x00040000;
        static constexpr unsigned b210(unsigned value) { return (value << 18); }
        static constexpr unsigned b211_POS = 19;
        static constexpr unsigned b211_MASK = 0x00080000;
        static constexpr unsigned b211(unsigned value) { return (value << 19); }
        static constexpr unsigned b212_POS = 20;
        static constexpr unsigned b212_MASK = 0x00100000;
        static constexpr unsigned b212(unsigned value) { return (value << 20); }
        static constexpr unsigned b213_POS = 21;
        static constexpr unsigned b213_MASK = 0x00200000;
        static constexpr unsigned b213(unsigned value) { return (value << 21); }
        static constexpr unsigned b214_POS = 22;
        static constexpr unsigned b214_MASK = 0x00400000;
        static constexpr unsigned b214(unsigned value) { return (value << 22); }
        static constexpr unsigned b215_POS = 23;
        static constexpr unsigned b215_MASK = 0x00800000;
        static constexpr unsigned b215(unsigned value) { return (value << 23); }
        static constexpr unsigned b216_POS = 24;
        static constexpr unsigned b216_MASK = 0x01000000;
        static constexpr unsigned b216(unsigned value) { return (value << 24); }
        static constexpr unsigned b217_POS = 25;
        static constexpr unsigned b217_MASK = 0x02000000;
        static constexpr unsigned b217(unsigned value) { return (value << 25); }
        static constexpr unsigned b218_POS = 26;
        static constexpr unsigned b218_MASK = 0x04000000;
        static constexpr unsigned b218(unsigned value) { return (value << 26); }
        static constexpr unsigned b219_POS = 27;
        static constexpr unsigned b219_MASK = 0x08000000;
        static constexpr unsigned b219(unsigned value) { return (value << 27); }
        static constexpr unsigned b220_POS = 28;
        static constexpr unsigned b220_MASK = 0x10000000;
        static constexpr unsigned b220(unsigned value) { return (value << 28); }
        static constexpr unsigned b221_POS = 29;
        static constexpr unsigned b221_MASK = 0x20000000;
        static constexpr unsigned b221(unsigned value) { return (value << 29); }
        static constexpr unsigned b222_POS = 30;
        static constexpr unsigned b222_MASK = 0x40000000;
        static constexpr unsigned b222(unsigned value) { return (value << 30); }
        static constexpr unsigned b223_POS = 31;
        static constexpr unsigned b223_MASK = 0x80000000;
        static constexpr unsigned b223(unsigned value) { return (value << 31); }
    } K0RR;

    volatile union K1LR_T // K1LR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K1LR_BIT_T
        {
            unsigned b160 : 1; // bit 0 b160
            unsigned b161 : 1; // bit 1 b161
            unsigned b162 : 1; // bit 2 b162
            unsigned b163 : 1; // bit 3 b163
            unsigned b164 : 1; // bit 4 b164
            unsigned b165 : 1; // bit 5 b165
            unsigned b166 : 1; // bit 6 b166
            unsigned b167 : 1; // bit 7 b167
            unsigned b168 : 1; // bit 8 b168
            unsigned b169 : 1; // bit 9 b169
            unsigned b170 : 1; // bit 10 b170
            unsigned b171 : 1; // bit 11 b171
            unsigned b172 : 1; // bit 12 b172
            unsigned b173 : 1; // bit 13 b173
            unsigned b174 : 1; // bit 14 b174
            unsigned b175 : 1; // bit 15 b175
            unsigned b176 : 1; // bit 16 b176
            unsigned b177 : 1; // bit 17 b177
            unsigned b178 : 1; // bit 18 b178
            unsigned b179 : 1; // bit 19 b179
            unsigned b180 : 1; // bit 20 b180
            unsigned b181 : 1; // bit 21 b181
            unsigned b182 : 1; // bit 22 b182
            unsigned b183 : 1; // bit 23 b183
            unsigned b184 : 1; // bit 24 b184
            unsigned b185 : 1; // bit 25 b185
            unsigned b186 : 1; // bit 26 b186
            unsigned b187 : 1; // bit 27 b187
            unsigned b188 : 1; // bit 28 b188
            unsigned b189 : 1; // bit 29 b189
            unsigned b190 : 1; // bit 30 b190
            unsigned b191 : 1; // bit 31 b191    
        } bit;
    
        static constexpr unsigned b160_POS = 0;
        static constexpr unsigned b160_MASK = 0x00000001;
        static constexpr unsigned b160(unsigned value) { return (value << 0); }
        static constexpr unsigned b161_POS = 1;
        static constexpr unsigned b161_MASK = 0x00000002;
        static constexpr unsigned b161(unsigned value) { return (value << 1); }
        static constexpr unsigned b162_POS = 2;
        static constexpr unsigned b162_MASK = 0x00000004;
        static constexpr unsigned b162(unsigned value) { return (value << 2); }
        static constexpr unsigned b163_POS = 3;
        static constexpr unsigned b163_MASK = 0x00000008;
        static constexpr unsigned b163(unsigned value) { return (value << 3); }
        static constexpr unsigned b164_POS = 4;
        static constexpr unsigned b164_MASK = 0x00000010;
        static constexpr unsigned b164(unsigned value) { return (value << 4); }
        static constexpr unsigned b165_POS = 5;
        static constexpr unsigned b165_MASK = 0x00000020;
        static constexpr unsigned b165(unsigned value) { return (value << 5); }
        static constexpr unsigned b166_POS = 6;
        static constexpr unsigned b166_MASK = 0x00000040;
        static constexpr unsigned b166(unsigned value) { return (value << 6); }
        static constexpr unsigned b167_POS = 7;
        static constexpr unsigned b167_MASK = 0x00000080;
        static constexpr unsigned b167(unsigned value) { return (value << 7); }
        static constexpr unsigned b168_POS = 8;
        static constexpr unsigned b168_MASK = 0x00000100;
        static constexpr unsigned b168(unsigned value) { return (value << 8); }
        static constexpr unsigned b169_POS = 9;
        static constexpr unsigned b169_MASK = 0x00000200;
        static constexpr unsigned b169(unsigned value) { return (value << 9); }
        static constexpr unsigned b170_POS = 10;
        static constexpr unsigned b170_MASK = 0x00000400;
        static constexpr unsigned b170(unsigned value) { return (value << 10); }
        static constexpr unsigned b171_POS = 11;
        static constexpr unsigned b171_MASK = 0x00000800;
        static constexpr unsigned b171(unsigned value) { return (value << 11); }
        static constexpr unsigned b172_POS = 12;
        static constexpr unsigned b172_MASK = 0x00001000;
        static constexpr unsigned b172(unsigned value) { return (value << 12); }
        static constexpr unsigned b173_POS = 13;
        static constexpr unsigned b173_MASK = 0x00002000;
        static constexpr unsigned b173(unsigned value) { return (value << 13); }
        static constexpr unsigned b174_POS = 14;
        static constexpr unsigned b174_MASK = 0x00004000;
        static constexpr unsigned b174(unsigned value) { return (value << 14); }
        static constexpr unsigned b175_POS = 15;
        static constexpr unsigned b175_MASK = 0x00008000;
        static constexpr unsigned b175(unsigned value) { return (value << 15); }
        static constexpr unsigned b176_POS = 16;
        static constexpr unsigned b176_MASK = 0x00010000;
        static constexpr unsigned b176(unsigned value) { return (value << 16); }
        static constexpr unsigned b177_POS = 17;
        static constexpr unsigned b177_MASK = 0x00020000;
        static constexpr unsigned b177(unsigned value) { return (value << 17); }
        static constexpr unsigned b178_POS = 18;
        static constexpr unsigned b178_MASK = 0x00040000;
        static constexpr unsigned b178(unsigned value) { return (value << 18); }
        static constexpr unsigned b179_POS = 19;
        static constexpr unsigned b179_MASK = 0x00080000;
        static constexpr unsigned b179(unsigned value) { return (value << 19); }
        static constexpr unsigned b180_POS = 20;
        static constexpr unsigned b180_MASK = 0x00100000;
        static constexpr unsigned b180(unsigned value) { return (value << 20); }
        static constexpr unsigned b181_POS = 21;
        static constexpr unsigned b181_MASK = 0x00200000;
        static constexpr unsigned b181(unsigned value) { return (value << 21); }
        static constexpr unsigned b182_POS = 22;
        static constexpr unsigned b182_MASK = 0x00400000;
        static constexpr unsigned b182(unsigned value) { return (value << 22); }
        static constexpr unsigned b183_POS = 23;
        static constexpr unsigned b183_MASK = 0x00800000;
        static constexpr unsigned b183(unsigned value) { return (value << 23); }
        static constexpr unsigned b184_POS = 24;
        static constexpr unsigned b184_MASK = 0x01000000;
        static constexpr unsigned b184(unsigned value) { return (value << 24); }
        static constexpr unsigned b185_POS = 25;
        static constexpr unsigned b185_MASK = 0x02000000;
        static constexpr unsigned b185(unsigned value) { return (value << 25); }
        static constexpr unsigned b186_POS = 26;
        static constexpr unsigned b186_MASK = 0x04000000;
        static constexpr unsigned b186(unsigned value) { return (value << 26); }
        static constexpr unsigned b187_POS = 27;
        static constexpr unsigned b187_MASK = 0x08000000;
        static constexpr unsigned b187(unsigned value) { return (value << 27); }
        static constexpr unsigned b188_POS = 28;
        static constexpr unsigned b188_MASK = 0x10000000;
        static constexpr unsigned b188(unsigned value) { return (value << 28); }
        static constexpr unsigned b189_POS = 29;
        static constexpr unsigned b189_MASK = 0x20000000;
        static constexpr unsigned b189(unsigned value) { return (value << 29); }
        static constexpr unsigned b190_POS = 30;
        static constexpr unsigned b190_MASK = 0x40000000;
        static constexpr unsigned b190(unsigned value) { return (value << 30); }
        static constexpr unsigned b191_POS = 31;
        static constexpr unsigned b191_MASK = 0x80000000;
        static constexpr unsigned b191(unsigned value) { return (value << 31); }
    } K1LR;

    volatile union K1RR_T // K1RR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K1RR_BIT_T
        {
            unsigned b128 : 1; // bit 0 b128
            unsigned b129 : 1; // bit 1 b129
            unsigned b130 : 1; // bit 2 b130
            unsigned b131 : 1; // bit 3 b131
            unsigned b132 : 1; // bit 4 b132
            unsigned b133 : 1; // bit 5 b133
            unsigned b134 : 1; // bit 6 b134
            unsigned b135 : 1; // bit 7 b135
            unsigned b136 : 1; // bit 8 b136
            unsigned b137 : 1; // bit 9 b137
            unsigned b138 : 1; // bit 10 b138
            unsigned b139 : 1; // bit 11 b139
            unsigned b140 : 1; // bit 12 b140
            unsigned b141 : 1; // bit 13 b141
            unsigned b142 : 1; // bit 14 b142
            unsigned b143 : 1; // bit 15 b143
            unsigned b144 : 1; // bit 16 b144
            unsigned b145 : 1; // bit 17 b145
            unsigned b146 : 1; // bit 18 b146
            unsigned b147 : 1; // bit 19 b147
            unsigned b148 : 1; // bit 20 b148
            unsigned b149 : 1; // bit 21 b149
            unsigned b150 : 1; // bit 22 b150
            unsigned b151 : 1; // bit 23 b151
            unsigned b152 : 1; // bit 24 b152
            unsigned b153 : 1; // bit 25 b153
            unsigned b154 : 1; // bit 26 b154
            unsigned b155 : 1; // bit 27 b155
            unsigned b156 : 1; // bit 28 b156
            unsigned b157 : 1; // bit 29 b157
            unsigned b158 : 1; // bit 30 b158
            unsigned b159 : 1; // bit 31 b159    
        } bit;
    
        static constexpr unsigned b128_POS = 0;
        static constexpr unsigned b128_MASK = 0x00000001;
        static constexpr unsigned b128(unsigned value) { return (value << 0); }
        static constexpr unsigned b129_POS = 1;
        static constexpr unsigned b129_MASK = 0x00000002;
        static constexpr unsigned b129(unsigned value) { return (value << 1); }
        static constexpr unsigned b130_POS = 2;
        static constexpr unsigned b130_MASK = 0x00000004;
        static constexpr unsigned b130(unsigned value) { return (value << 2); }
        static constexpr unsigned b131_POS = 3;
        static constexpr unsigned b131_MASK = 0x00000008;
        static constexpr unsigned b131(unsigned value) { return (value << 3); }
        static constexpr unsigned b132_POS = 4;
        static constexpr unsigned b132_MASK = 0x00000010;
        static constexpr unsigned b132(unsigned value) { return (value << 4); }
        static constexpr unsigned b133_POS = 5;
        static constexpr unsigned b133_MASK = 0x00000020;
        static constexpr unsigned b133(unsigned value) { return (value << 5); }
        static constexpr unsigned b134_POS = 6;
        static constexpr unsigned b134_MASK = 0x00000040;
        static constexpr unsigned b134(unsigned value) { return (value << 6); }
        static constexpr unsigned b135_POS = 7;
        static constexpr unsigned b135_MASK = 0x00000080;
        static constexpr unsigned b135(unsigned value) { return (value << 7); }
        static constexpr unsigned b136_POS = 8;
        static constexpr unsigned b136_MASK = 0x00000100;
        static constexpr unsigned b136(unsigned value) { return (value << 8); }
        static constexpr unsigned b137_POS = 9;
        static constexpr unsigned b137_MASK = 0x00000200;
        static constexpr unsigned b137(unsigned value) { return (value << 9); }
        static constexpr unsigned b138_POS = 10;
        static constexpr unsigned b138_MASK = 0x00000400;
        static constexpr unsigned b138(unsigned value) { return (value << 10); }
        static constexpr unsigned b139_POS = 11;
        static constexpr unsigned b139_MASK = 0x00000800;
        static constexpr unsigned b139(unsigned value) { return (value << 11); }
        static constexpr unsigned b140_POS = 12;
        static constexpr unsigned b140_MASK = 0x00001000;
        static constexpr unsigned b140(unsigned value) { return (value << 12); }
        static constexpr unsigned b141_POS = 13;
        static constexpr unsigned b141_MASK = 0x00002000;
        static constexpr unsigned b141(unsigned value) { return (value << 13); }
        static constexpr unsigned b142_POS = 14;
        static constexpr unsigned b142_MASK = 0x00004000;
        static constexpr unsigned b142(unsigned value) { return (value << 14); }
        static constexpr unsigned b143_POS = 15;
        static constexpr unsigned b143_MASK = 0x00008000;
        static constexpr unsigned b143(unsigned value) { return (value << 15); }
        static constexpr unsigned b144_POS = 16;
        static constexpr unsigned b144_MASK = 0x00010000;
        static constexpr unsigned b144(unsigned value) { return (value << 16); }
        static constexpr unsigned b145_POS = 17;
        static constexpr unsigned b145_MASK = 0x00020000;
        static constexpr unsigned b145(unsigned value) { return (value << 17); }
        static constexpr unsigned b146_POS = 18;
        static constexpr unsigned b146_MASK = 0x00040000;
        static constexpr unsigned b146(unsigned value) { return (value << 18); }
        static constexpr unsigned b147_POS = 19;
        static constexpr unsigned b147_MASK = 0x00080000;
        static constexpr unsigned b147(unsigned value) { return (value << 19); }
        static constexpr unsigned b148_POS = 20;
        static constexpr unsigned b148_MASK = 0x00100000;
        static constexpr unsigned b148(unsigned value) { return (value << 20); }
        static constexpr unsigned b149_POS = 21;
        static constexpr unsigned b149_MASK = 0x00200000;
        static constexpr unsigned b149(unsigned value) { return (value << 21); }
        static constexpr unsigned b150_POS = 22;
        static constexpr unsigned b150_MASK = 0x00400000;
        static constexpr unsigned b150(unsigned value) { return (value << 22); }
        static constexpr unsigned b151_POS = 23;
        static constexpr unsigned b151_MASK = 0x00800000;
        static constexpr unsigned b151(unsigned value) { return (value << 23); }
        static constexpr unsigned b152_POS = 24;
        static constexpr unsigned b152_MASK = 0x01000000;
        static constexpr unsigned b152(unsigned value) { return (value << 24); }
        static constexpr unsigned b153_POS = 25;
        static constexpr unsigned b153_MASK = 0x02000000;
        static constexpr unsigned b153(unsigned value) { return (value << 25); }
        static constexpr unsigned b154_POS = 26;
        static constexpr unsigned b154_MASK = 0x04000000;
        static constexpr unsigned b154(unsigned value) { return (value << 26); }
        static constexpr unsigned b155_POS = 27;
        static constexpr unsigned b155_MASK = 0x08000000;
        static constexpr unsigned b155(unsigned value) { return (value << 27); }
        static constexpr unsigned b156_POS = 28;
        static constexpr unsigned b156_MASK = 0x10000000;
        static constexpr unsigned b156(unsigned value) { return (value << 28); }
        static constexpr unsigned b157_POS = 29;
        static constexpr unsigned b157_MASK = 0x20000000;
        static constexpr unsigned b157(unsigned value) { return (value << 29); }
        static constexpr unsigned b158_POS = 30;
        static constexpr unsigned b158_MASK = 0x40000000;
        static constexpr unsigned b158(unsigned value) { return (value << 30); }
        static constexpr unsigned b159_POS = 31;
        static constexpr unsigned b159_MASK = 0x80000000;
        static constexpr unsigned b159(unsigned value) { return (value << 31); }
    } K1RR;

    volatile union K2LR_T // K2LR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K2LR_BIT_T
        {
            unsigned b96  : 1; // bit 0 b96
            unsigned b97  : 1; // bit 1 b97
            unsigned b98  : 1; // bit 2 b98
            unsigned b99  : 1; // bit 3 b99
            unsigned b100 : 1; // bit 4 b100
            unsigned b101 : 1; // bit 5 b101
            unsigned b102 : 1; // bit 6 b102
            unsigned b103 : 1; // bit 7 b103
            unsigned b104 : 1; // bit 8 b104
            unsigned b105 : 1; // bit 9 b105
            unsigned b106 : 1; // bit 10 b106
            unsigned b107 : 1; // bit 11 b107
            unsigned b108 : 1; // bit 12 b108
            unsigned b109 : 1; // bit 13 b109
            unsigned b110 : 1; // bit 14 b110
            unsigned b111 : 1; // bit 15 b111
            unsigned b112 : 1; // bit 16 b112
            unsigned b113 : 1; // bit 17 b113
            unsigned b114 : 1; // bit 18 b114
            unsigned b115 : 1; // bit 19 b115
            unsigned b116 : 1; // bit 20 b116
            unsigned b117 : 1; // bit 21 b117
            unsigned b118 : 1; // bit 22 b118
            unsigned b119 : 1; // bit 23 b119
            unsigned b120 : 1; // bit 24 b120
            unsigned b121 : 1; // bit 25 b121
            unsigned b122 : 1; // bit 26 b122
            unsigned b123 : 1; // bit 27 b123
            unsigned b124 : 1; // bit 28 b124
            unsigned b125 : 1; // bit 29 b125
            unsigned b126 : 1; // bit 30 b126
            unsigned b127 : 1; // bit 31 b127    
        } bit;
    
        static constexpr unsigned b96_POS = 0;
        static constexpr unsigned b96_MASK = 0x00000001;
        static constexpr unsigned b96(unsigned value) { return (value << 0); }
        static constexpr unsigned b97_POS = 1;
        static constexpr unsigned b97_MASK = 0x00000002;
        static constexpr unsigned b97(unsigned value) { return (value << 1); }
        static constexpr unsigned b98_POS = 2;
        static constexpr unsigned b98_MASK = 0x00000004;
        static constexpr unsigned b98(unsigned value) { return (value << 2); }
        static constexpr unsigned b99_POS = 3;
        static constexpr unsigned b99_MASK = 0x00000008;
        static constexpr unsigned b99(unsigned value) { return (value << 3); }
        static constexpr unsigned b100_POS = 4;
        static constexpr unsigned b100_MASK = 0x00000010;
        static constexpr unsigned b100(unsigned value) { return (value << 4); }
        static constexpr unsigned b101_POS = 5;
        static constexpr unsigned b101_MASK = 0x00000020;
        static constexpr unsigned b101(unsigned value) { return (value << 5); }
        static constexpr unsigned b102_POS = 6;
        static constexpr unsigned b102_MASK = 0x00000040;
        static constexpr unsigned b102(unsigned value) { return (value << 6); }
        static constexpr unsigned b103_POS = 7;
        static constexpr unsigned b103_MASK = 0x00000080;
        static constexpr unsigned b103(unsigned value) { return (value << 7); }
        static constexpr unsigned b104_POS = 8;
        static constexpr unsigned b104_MASK = 0x00000100;
        static constexpr unsigned b104(unsigned value) { return (value << 8); }
        static constexpr unsigned b105_POS = 9;
        static constexpr unsigned b105_MASK = 0x00000200;
        static constexpr unsigned b105(unsigned value) { return (value << 9); }
        static constexpr unsigned b106_POS = 10;
        static constexpr unsigned b106_MASK = 0x00000400;
        static constexpr unsigned b106(unsigned value) { return (value << 10); }
        static constexpr unsigned b107_POS = 11;
        static constexpr unsigned b107_MASK = 0x00000800;
        static constexpr unsigned b107(unsigned value) { return (value << 11); }
        static constexpr unsigned b108_POS = 12;
        static constexpr unsigned b108_MASK = 0x00001000;
        static constexpr unsigned b108(unsigned value) { return (value << 12); }
        static constexpr unsigned b109_POS = 13;
        static constexpr unsigned b109_MASK = 0x00002000;
        static constexpr unsigned b109(unsigned value) { return (value << 13); }
        static constexpr unsigned b110_POS = 14;
        static constexpr unsigned b110_MASK = 0x00004000;
        static constexpr unsigned b110(unsigned value) { return (value << 14); }
        static constexpr unsigned b111_POS = 15;
        static constexpr unsigned b111_MASK = 0x00008000;
        static constexpr unsigned b111(unsigned value) { return (value << 15); }
        static constexpr unsigned b112_POS = 16;
        static constexpr unsigned b112_MASK = 0x00010000;
        static constexpr unsigned b112(unsigned value) { return (value << 16); }
        static constexpr unsigned b113_POS = 17;
        static constexpr unsigned b113_MASK = 0x00020000;
        static constexpr unsigned b113(unsigned value) { return (value << 17); }
        static constexpr unsigned b114_POS = 18;
        static constexpr unsigned b114_MASK = 0x00040000;
        static constexpr unsigned b114(unsigned value) { return (value << 18); }
        static constexpr unsigned b115_POS = 19;
        static constexpr unsigned b115_MASK = 0x00080000;
        static constexpr unsigned b115(unsigned value) { return (value << 19); }
        static constexpr unsigned b116_POS = 20;
        static constexpr unsigned b116_MASK = 0x00100000;
        static constexpr unsigned b116(unsigned value) { return (value << 20); }
        static constexpr unsigned b117_POS = 21;
        static constexpr unsigned b117_MASK = 0x00200000;
        static constexpr unsigned b117(unsigned value) { return (value << 21); }
        static constexpr unsigned b118_POS = 22;
        static constexpr unsigned b118_MASK = 0x00400000;
        static constexpr unsigned b118(unsigned value) { return (value << 22); }
        static constexpr unsigned b119_POS = 23;
        static constexpr unsigned b119_MASK = 0x00800000;
        static constexpr unsigned b119(unsigned value) { return (value << 23); }
        static constexpr unsigned b120_POS = 24;
        static constexpr unsigned b120_MASK = 0x01000000;
        static constexpr unsigned b120(unsigned value) { return (value << 24); }
        static constexpr unsigned b121_POS = 25;
        static constexpr unsigned b121_MASK = 0x02000000;
        static constexpr unsigned b121(unsigned value) { return (value << 25); }
        static constexpr unsigned b122_POS = 26;
        static constexpr unsigned b122_MASK = 0x04000000;
        static constexpr unsigned b122(unsigned value) { return (value << 26); }
        static constexpr unsigned b123_POS = 27;
        static constexpr unsigned b123_MASK = 0x08000000;
        static constexpr unsigned b123(unsigned value) { return (value << 27); }
        static constexpr unsigned b124_POS = 28;
        static constexpr unsigned b124_MASK = 0x10000000;
        static constexpr unsigned b124(unsigned value) { return (value << 28); }
        static constexpr unsigned b125_POS = 29;
        static constexpr unsigned b125_MASK = 0x20000000;
        static constexpr unsigned b125(unsigned value) { return (value << 29); }
        static constexpr unsigned b126_POS = 30;
        static constexpr unsigned b126_MASK = 0x40000000;
        static constexpr unsigned b126(unsigned value) { return (value << 30); }
        static constexpr unsigned b127_POS = 31;
        static constexpr unsigned b127_MASK = 0x80000000;
        static constexpr unsigned b127(unsigned value) { return (value << 31); }
    } K2LR;

    volatile union K2RR_T // K2RR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K2RR_BIT_T
        {
            unsigned b64 : 1; // bit 0 b64
            unsigned b65 : 1; // bit 1 b65
            unsigned b66 : 1; // bit 2 b66
            unsigned b67 : 1; // bit 3 b67
            unsigned b68 : 1; // bit 4 b68
            unsigned b69 : 1; // bit 5 b69
            unsigned b70 : 1; // bit 6 b70
            unsigned b71 : 1; // bit 7 b71
            unsigned b72 : 1; // bit 8 b72
            unsigned b73 : 1; // bit 9 b73
            unsigned b74 : 1; // bit 10 b74
            unsigned b75 : 1; // bit 11 b75
            unsigned b76 : 1; // bit 12 b76
            unsigned b77 : 1; // bit 13 b77
            unsigned b78 : 1; // bit 14 b78
            unsigned b79 : 1; // bit 15 b79
            unsigned b80 : 1; // bit 16 b80
            unsigned b81 : 1; // bit 17 b81
            unsigned b82 : 1; // bit 18 b82
            unsigned b83 : 1; // bit 19 b83
            unsigned b84 : 1; // bit 20 b84
            unsigned b85 : 1; // bit 21 b85
            unsigned b86 : 1; // bit 22 b86
            unsigned b87 : 1; // bit 23 b87
            unsigned b88 : 1; // bit 24 b88
            unsigned b89 : 1; // bit 25 b89
            unsigned b90 : 1; // bit 26 b90
            unsigned b91 : 1; // bit 27 b91
            unsigned b92 : 1; // bit 28 b92
            unsigned b93 : 1; // bit 29 b93
            unsigned b94 : 1; // bit 30 b94
            unsigned b95 : 1; // bit 31 b95    
        } bit;
    
        static constexpr unsigned b64_POS = 0;
        static constexpr unsigned b64_MASK = 0x00000001;
        static constexpr unsigned b64(unsigned value) { return (value << 0); }
        static constexpr unsigned b65_POS = 1;
        static constexpr unsigned b65_MASK = 0x00000002;
        static constexpr unsigned b65(unsigned value) { return (value << 1); }
        static constexpr unsigned b66_POS = 2;
        static constexpr unsigned b66_MASK = 0x00000004;
        static constexpr unsigned b66(unsigned value) { return (value << 2); }
        static constexpr unsigned b67_POS = 3;
        static constexpr unsigned b67_MASK = 0x00000008;
        static constexpr unsigned b67(unsigned value) { return (value << 3); }
        static constexpr unsigned b68_POS = 4;
        static constexpr unsigned b68_MASK = 0x00000010;
        static constexpr unsigned b68(unsigned value) { return (value << 4); }
        static constexpr unsigned b69_POS = 5;
        static constexpr unsigned b69_MASK = 0x00000020;
        static constexpr unsigned b69(unsigned value) { return (value << 5); }
        static constexpr unsigned b70_POS = 6;
        static constexpr unsigned b70_MASK = 0x00000040;
        static constexpr unsigned b70(unsigned value) { return (value << 6); }
        static constexpr unsigned b71_POS = 7;
        static constexpr unsigned b71_MASK = 0x00000080;
        static constexpr unsigned b71(unsigned value) { return (value << 7); }
        static constexpr unsigned b72_POS = 8;
        static constexpr unsigned b72_MASK = 0x00000100;
        static constexpr unsigned b72(unsigned value) { return (value << 8); }
        static constexpr unsigned b73_POS = 9;
        static constexpr unsigned b73_MASK = 0x00000200;
        static constexpr unsigned b73(unsigned value) { return (value << 9); }
        static constexpr unsigned b74_POS = 10;
        static constexpr unsigned b74_MASK = 0x00000400;
        static constexpr unsigned b74(unsigned value) { return (value << 10); }
        static constexpr unsigned b75_POS = 11;
        static constexpr unsigned b75_MASK = 0x00000800;
        static constexpr unsigned b75(unsigned value) { return (value << 11); }
        static constexpr unsigned b76_POS = 12;
        static constexpr unsigned b76_MASK = 0x00001000;
        static constexpr unsigned b76(unsigned value) { return (value << 12); }
        static constexpr unsigned b77_POS = 13;
        static constexpr unsigned b77_MASK = 0x00002000;
        static constexpr unsigned b77(unsigned value) { return (value << 13); }
        static constexpr unsigned b78_POS = 14;
        static constexpr unsigned b78_MASK = 0x00004000;
        static constexpr unsigned b78(unsigned value) { return (value << 14); }
        static constexpr unsigned b79_POS = 15;
        static constexpr unsigned b79_MASK = 0x00008000;
        static constexpr unsigned b79(unsigned value) { return (value << 15); }
        static constexpr unsigned b80_POS = 16;
        static constexpr unsigned b80_MASK = 0x00010000;
        static constexpr unsigned b80(unsigned value) { return (value << 16); }
        static constexpr unsigned b81_POS = 17;
        static constexpr unsigned b81_MASK = 0x00020000;
        static constexpr unsigned b81(unsigned value) { return (value << 17); }
        static constexpr unsigned b82_POS = 18;
        static constexpr unsigned b82_MASK = 0x00040000;
        static constexpr unsigned b82(unsigned value) { return (value << 18); }
        static constexpr unsigned b83_POS = 19;
        static constexpr unsigned b83_MASK = 0x00080000;
        static constexpr unsigned b83(unsigned value) { return (value << 19); }
        static constexpr unsigned b84_POS = 20;
        static constexpr unsigned b84_MASK = 0x00100000;
        static constexpr unsigned b84(unsigned value) { return (value << 20); }
        static constexpr unsigned b85_POS = 21;
        static constexpr unsigned b85_MASK = 0x00200000;
        static constexpr unsigned b85(unsigned value) { return (value << 21); }
        static constexpr unsigned b86_POS = 22;
        static constexpr unsigned b86_MASK = 0x00400000;
        static constexpr unsigned b86(unsigned value) { return (value << 22); }
        static constexpr unsigned b87_POS = 23;
        static constexpr unsigned b87_MASK = 0x00800000;
        static constexpr unsigned b87(unsigned value) { return (value << 23); }
        static constexpr unsigned b88_POS = 24;
        static constexpr unsigned b88_MASK = 0x01000000;
        static constexpr unsigned b88(unsigned value) { return (value << 24); }
        static constexpr unsigned b89_POS = 25;
        static constexpr unsigned b89_MASK = 0x02000000;
        static constexpr unsigned b89(unsigned value) { return (value << 25); }
        static constexpr unsigned b90_POS = 26;
        static constexpr unsigned b90_MASK = 0x04000000;
        static constexpr unsigned b90(unsigned value) { return (value << 26); }
        static constexpr unsigned b91_POS = 27;
        static constexpr unsigned b91_MASK = 0x08000000;
        static constexpr unsigned b91(unsigned value) { return (value << 27); }
        static constexpr unsigned b92_POS = 28;
        static constexpr unsigned b92_MASK = 0x10000000;
        static constexpr unsigned b92(unsigned value) { return (value << 28); }
        static constexpr unsigned b93_POS = 29;
        static constexpr unsigned b93_MASK = 0x20000000;
        static constexpr unsigned b93(unsigned value) { return (value << 29); }
        static constexpr unsigned b94_POS = 30;
        static constexpr unsigned b94_MASK = 0x40000000;
        static constexpr unsigned b94(unsigned value) { return (value << 30); }
        static constexpr unsigned b95_POS = 31;
        static constexpr unsigned b95_MASK = 0x80000000;
        static constexpr unsigned b95(unsigned value) { return (value << 31); }
    } K2RR;

    volatile union K3LR_T // K3LR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K3LR_BIT_T
        {
            unsigned b32 : 1; // bit 0 b32
            unsigned b33 : 1; // bit 1 b33
            unsigned b34 : 1; // bit 2 b34
            unsigned b35 : 1; // bit 3 b35
            unsigned b36 : 1; // bit 4 b36
            unsigned b37 : 1; // bit 5 b37
            unsigned b38 : 1; // bit 6 b38
            unsigned b39 : 1; // bit 7 b39
            unsigned b40 : 1; // bit 8 b40
            unsigned b41 : 1; // bit 9 b41
            unsigned b42 : 1; // bit 10 b42
            unsigned b43 : 1; // bit 11 b43
            unsigned b44 : 1; // bit 12 b44
            unsigned b45 : 1; // bit 13 b45
            unsigned b46 : 1; // bit 14 b46
            unsigned b47 : 1; // bit 15 b47
            unsigned b48 : 1; // bit 16 b48
            unsigned b49 : 1; // bit 17 b49
            unsigned b50 : 1; // bit 18 b50
            unsigned b51 : 1; // bit 19 b51
            unsigned b52 : 1; // bit 20 b52
            unsigned b53 : 1; // bit 21 b53
            unsigned b54 : 1; // bit 22 b54
            unsigned b55 : 1; // bit 23 b55
            unsigned b56 : 1; // bit 24 b56
            unsigned b57 : 1; // bit 25 b57
            unsigned b58 : 1; // bit 26 b58
            unsigned b59 : 1; // bit 27 b59
            unsigned b60 : 1; // bit 28 b60
            unsigned b61 : 1; // bit 29 b61
            unsigned b62 : 1; // bit 30 b62
            unsigned b63 : 1; // bit 31 b63    
        } bit;
    
        static constexpr unsigned b32_POS = 0;
        static constexpr unsigned b32_MASK = 0x00000001;
        static constexpr unsigned b32(unsigned value) { return (value << 0); }
        static constexpr unsigned b33_POS = 1;
        static constexpr unsigned b33_MASK = 0x00000002;
        static constexpr unsigned b33(unsigned value) { return (value << 1); }
        static constexpr unsigned b34_POS = 2;
        static constexpr unsigned b34_MASK = 0x00000004;
        static constexpr unsigned b34(unsigned value) { return (value << 2); }
        static constexpr unsigned b35_POS = 3;
        static constexpr unsigned b35_MASK = 0x00000008;
        static constexpr unsigned b35(unsigned value) { return (value << 3); }
        static constexpr unsigned b36_POS = 4;
        static constexpr unsigned b36_MASK = 0x00000010;
        static constexpr unsigned b36(unsigned value) { return (value << 4); }
        static constexpr unsigned b37_POS = 5;
        static constexpr unsigned b37_MASK = 0x00000020;
        static constexpr unsigned b37(unsigned value) { return (value << 5); }
        static constexpr unsigned b38_POS = 6;
        static constexpr unsigned b38_MASK = 0x00000040;
        static constexpr unsigned b38(unsigned value) { return (value << 6); }
        static constexpr unsigned b39_POS = 7;
        static constexpr unsigned b39_MASK = 0x00000080;
        static constexpr unsigned b39(unsigned value) { return (value << 7); }
        static constexpr unsigned b40_POS = 8;
        static constexpr unsigned b40_MASK = 0x00000100;
        static constexpr unsigned b40(unsigned value) { return (value << 8); }
        static constexpr unsigned b41_POS = 9;
        static constexpr unsigned b41_MASK = 0x00000200;
        static constexpr unsigned b41(unsigned value) { return (value << 9); }
        static constexpr unsigned b42_POS = 10;
        static constexpr unsigned b42_MASK = 0x00000400;
        static constexpr unsigned b42(unsigned value) { return (value << 10); }
        static constexpr unsigned b43_POS = 11;
        static constexpr unsigned b43_MASK = 0x00000800;
        static constexpr unsigned b43(unsigned value) { return (value << 11); }
        static constexpr unsigned b44_POS = 12;
        static constexpr unsigned b44_MASK = 0x00001000;
        static constexpr unsigned b44(unsigned value) { return (value << 12); }
        static constexpr unsigned b45_POS = 13;
        static constexpr unsigned b45_MASK = 0x00002000;
        static constexpr unsigned b45(unsigned value) { return (value << 13); }
        static constexpr unsigned b46_POS = 14;
        static constexpr unsigned b46_MASK = 0x00004000;
        static constexpr unsigned b46(unsigned value) { return (value << 14); }
        static constexpr unsigned b47_POS = 15;
        static constexpr unsigned b47_MASK = 0x00008000;
        static constexpr unsigned b47(unsigned value) { return (value << 15); }
        static constexpr unsigned b48_POS = 16;
        static constexpr unsigned b48_MASK = 0x00010000;
        static constexpr unsigned b48(unsigned value) { return (value << 16); }
        static constexpr unsigned b49_POS = 17;
        static constexpr unsigned b49_MASK = 0x00020000;
        static constexpr unsigned b49(unsigned value) { return (value << 17); }
        static constexpr unsigned b50_POS = 18;
        static constexpr unsigned b50_MASK = 0x00040000;
        static constexpr unsigned b50(unsigned value) { return (value << 18); }
        static constexpr unsigned b51_POS = 19;
        static constexpr unsigned b51_MASK = 0x00080000;
        static constexpr unsigned b51(unsigned value) { return (value << 19); }
        static constexpr unsigned b52_POS = 20;
        static constexpr unsigned b52_MASK = 0x00100000;
        static constexpr unsigned b52(unsigned value) { return (value << 20); }
        static constexpr unsigned b53_POS = 21;
        static constexpr unsigned b53_MASK = 0x00200000;
        static constexpr unsigned b53(unsigned value) { return (value << 21); }
        static constexpr unsigned b54_POS = 22;
        static constexpr unsigned b54_MASK = 0x00400000;
        static constexpr unsigned b54(unsigned value) { return (value << 22); }
        static constexpr unsigned b55_POS = 23;
        static constexpr unsigned b55_MASK = 0x00800000;
        static constexpr unsigned b55(unsigned value) { return (value << 23); }
        static constexpr unsigned b56_POS = 24;
        static constexpr unsigned b56_MASK = 0x01000000;
        static constexpr unsigned b56(unsigned value) { return (value << 24); }
        static constexpr unsigned b57_POS = 25;
        static constexpr unsigned b57_MASK = 0x02000000;
        static constexpr unsigned b57(unsigned value) { return (value << 25); }
        static constexpr unsigned b58_POS = 26;
        static constexpr unsigned b58_MASK = 0x04000000;
        static constexpr unsigned b58(unsigned value) { return (value << 26); }
        static constexpr unsigned b59_POS = 27;
        static constexpr unsigned b59_MASK = 0x08000000;
        static constexpr unsigned b59(unsigned value) { return (value << 27); }
        static constexpr unsigned b60_POS = 28;
        static constexpr unsigned b60_MASK = 0x10000000;
        static constexpr unsigned b60(unsigned value) { return (value << 28); }
        static constexpr unsigned b61_POS = 29;
        static constexpr unsigned b61_MASK = 0x20000000;
        static constexpr unsigned b61(unsigned value) { return (value << 29); }
        static constexpr unsigned b62_POS = 30;
        static constexpr unsigned b62_MASK = 0x40000000;
        static constexpr unsigned b62(unsigned value) { return (value << 30); }
        static constexpr unsigned b63_POS = 31;
        static constexpr unsigned b63_MASK = 0x80000000;
        static constexpr unsigned b63(unsigned value) { return (value << 31); }
    } K3LR;

    volatile union K3RR_T // K3RR: key registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) K3RR_BIT_T
        {
            unsigned b0  : 1; // bit 0 b0
            unsigned b1  : 1; // bit 1 b1
            unsigned b2  : 1; // bit 2 b2
            unsigned b3  : 1; // bit 3 b3
            unsigned b4  : 1; // bit 4 b4
            unsigned b5  : 1; // bit 5 b5
            unsigned b6  : 1; // bit 6 b6
            unsigned b7  : 1; // bit 7 b7
            unsigned b8  : 1; // bit 8 b8
            unsigned b9  : 1; // bit 9 b9
            unsigned b10 : 1; // bit 10 b10
            unsigned b11 : 1; // bit 11 b11
            unsigned b12 : 1; // bit 12 b12
            unsigned b13 : 1; // bit 13 b13
            unsigned b14 : 1; // bit 14 b14
            unsigned b15 : 1; // bit 15 b15
            unsigned b16 : 1; // bit 16 b16
            unsigned b17 : 1; // bit 17 b17
            unsigned b18 : 1; // bit 18 b18
            unsigned b19 : 1; // bit 19 b19
            unsigned b20 : 1; // bit 20 b20
            unsigned b21 : 1; // bit 21 b21
            unsigned b22 : 1; // bit 22 b22
            unsigned b23 : 1; // bit 23 b23
            unsigned b24 : 1; // bit 24 b24
            unsigned b25 : 1; // bit 25 b25
            unsigned b26 : 1; // bit 26 b26
            unsigned b27 : 1; // bit 27 b27
            unsigned b28 : 1; // bit 28 b28
            unsigned b29 : 1; // bit 29 b29
            unsigned b30 : 1; // bit 30 b30
            unsigned b31 : 1; // bit 31 b31    
        } bit;
    
        static constexpr unsigned b0_POS = 0;
        static constexpr unsigned b0_MASK = 0x00000001;
        static constexpr unsigned b0(unsigned value) { return (value << 0); }
        static constexpr unsigned b1_POS = 1;
        static constexpr unsigned b1_MASK = 0x00000002;
        static constexpr unsigned b1(unsigned value) { return (value << 1); }
        static constexpr unsigned b2_POS = 2;
        static constexpr unsigned b2_MASK = 0x00000004;
        static constexpr unsigned b2(unsigned value) { return (value << 2); }
        static constexpr unsigned b3_POS = 3;
        static constexpr unsigned b3_MASK = 0x00000008;
        static constexpr unsigned b3(unsigned value) { return (value << 3); }
        static constexpr unsigned b4_POS = 4;
        static constexpr unsigned b4_MASK = 0x00000010;
        static constexpr unsigned b4(unsigned value) { return (value << 4); }
        static constexpr unsigned b5_POS = 5;
        static constexpr unsigned b5_MASK = 0x00000020;
        static constexpr unsigned b5(unsigned value) { return (value << 5); }
        static constexpr unsigned b6_POS = 6;
        static constexpr unsigned b6_MASK = 0x00000040;
        static constexpr unsigned b6(unsigned value) { return (value << 6); }
        static constexpr unsigned b7_POS = 7;
        static constexpr unsigned b7_MASK = 0x00000080;
        static constexpr unsigned b7(unsigned value) { return (value << 7); }
        static constexpr unsigned b8_POS = 8;
        static constexpr unsigned b8_MASK = 0x00000100;
        static constexpr unsigned b8(unsigned value) { return (value << 8); }
        static constexpr unsigned b9_POS = 9;
        static constexpr unsigned b9_MASK = 0x00000200;
        static constexpr unsigned b9(unsigned value) { return (value << 9); }
        static constexpr unsigned b10_POS = 10;
        static constexpr unsigned b10_MASK = 0x00000400;
        static constexpr unsigned b10(unsigned value) { return (value << 10); }
        static constexpr unsigned b11_POS = 11;
        static constexpr unsigned b11_MASK = 0x00000800;
        static constexpr unsigned b11(unsigned value) { return (value << 11); }
        static constexpr unsigned b12_POS = 12;
        static constexpr unsigned b12_MASK = 0x00001000;
        static constexpr unsigned b12(unsigned value) { return (value << 12); }
        static constexpr unsigned b13_POS = 13;
        static constexpr unsigned b13_MASK = 0x00002000;
        static constexpr unsigned b13(unsigned value) { return (value << 13); }
        static constexpr unsigned b14_POS = 14;
        static constexpr unsigned b14_MASK = 0x00004000;
        static constexpr unsigned b14(unsigned value) { return (value << 14); }
        static constexpr unsigned b15_POS = 15;
        static constexpr unsigned b15_MASK = 0x00008000;
        static constexpr unsigned b15(unsigned value) { return (value << 15); }
        static constexpr unsigned b16_POS = 16;
        static constexpr unsigned b16_MASK = 0x00010000;
        static constexpr unsigned b16(unsigned value) { return (value << 16); }
        static constexpr unsigned b17_POS = 17;
        static constexpr unsigned b17_MASK = 0x00020000;
        static constexpr unsigned b17(unsigned value) { return (value << 17); }
        static constexpr unsigned b18_POS = 18;
        static constexpr unsigned b18_MASK = 0x00040000;
        static constexpr unsigned b18(unsigned value) { return (value << 18); }
        static constexpr unsigned b19_POS = 19;
        static constexpr unsigned b19_MASK = 0x00080000;
        static constexpr unsigned b19(unsigned value) { return (value << 19); }
        static constexpr unsigned b20_POS = 20;
        static constexpr unsigned b20_MASK = 0x00100000;
        static constexpr unsigned b20(unsigned value) { return (value << 20); }
        static constexpr unsigned b21_POS = 21;
        static constexpr unsigned b21_MASK = 0x00200000;
        static constexpr unsigned b21(unsigned value) { return (value << 21); }
        static constexpr unsigned b22_POS = 22;
        static constexpr unsigned b22_MASK = 0x00400000;
        static constexpr unsigned b22(unsigned value) { return (value << 22); }
        static constexpr unsigned b23_POS = 23;
        static constexpr unsigned b23_MASK = 0x00800000;
        static constexpr unsigned b23(unsigned value) { return (value << 23); }
        static constexpr unsigned b24_POS = 24;
        static constexpr unsigned b24_MASK = 0x01000000;
        static constexpr unsigned b24(unsigned value) { return (value << 24); }
        static constexpr unsigned b25_POS = 25;
        static constexpr unsigned b25_MASK = 0x02000000;
        static constexpr unsigned b25(unsigned value) { return (value << 25); }
        static constexpr unsigned b26_POS = 26;
        static constexpr unsigned b26_MASK = 0x04000000;
        static constexpr unsigned b26(unsigned value) { return (value << 26); }
        static constexpr unsigned b27_POS = 27;
        static constexpr unsigned b27_MASK = 0x08000000;
        static constexpr unsigned b27(unsigned value) { return (value << 27); }
        static constexpr unsigned b28_POS = 28;
        static constexpr unsigned b28_MASK = 0x10000000;
        static constexpr unsigned b28(unsigned value) { return (value << 28); }
        static constexpr unsigned b29_POS = 29;
        static constexpr unsigned b29_MASK = 0x20000000;
        static constexpr unsigned b29(unsigned value) { return (value << 29); }
        static constexpr unsigned b30_POS = 30;
        static constexpr unsigned b30_MASK = 0x40000000;
        static constexpr unsigned b30(unsigned value) { return (value << 30); }
        static constexpr unsigned b31_POS = 31;
        static constexpr unsigned b31_MASK = 0x80000000;
        static constexpr unsigned b31(unsigned value) { return (value << 31); }
    } K3RR;

    volatile union IV0LR_T // IV0LR: initialization vector registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) IV0LR_BIT_T
        {
            unsigned IV31 : 1; // bit 0 IV31
            unsigned IV30 : 1; // bit 1 IV30
            unsigned IV29 : 1; // bit 2 IV29
            unsigned IV28 : 1; // bit 3 IV28
            unsigned IV27 : 1; // bit 4 IV27
            unsigned IV26 : 1; // bit 5 IV26
            unsigned IV25 : 1; // bit 6 IV25
            unsigned IV24 : 1; // bit 7 IV24
            unsigned IV23 : 1; // bit 8 IV23
            unsigned IV22 : 1; // bit 9 IV22
            unsigned IV21 : 1; // bit 10 IV21
            unsigned IV20 : 1; // bit 11 IV20
            unsigned IV19 : 1; // bit 12 IV19
            unsigned IV18 : 1; // bit 13 IV18
            unsigned IV17 : 1; // bit 14 IV17
            unsigned IV16 : 1; // bit 15 IV16
            unsigned IV15 : 1; // bit 16 IV15
            unsigned IV14 : 1; // bit 17 IV14
            unsigned IV13 : 1; // bit 18 IV13
            unsigned IV12 : 1; // bit 19 IV12
            unsigned IV11 : 1; // bit 20 IV11
            unsigned IV10 : 1; // bit 21 IV10
            unsigned IV9  : 1; // bit 22 IV9
            unsigned IV8  : 1; // bit 23 IV8
            unsigned IV7  : 1; // bit 24 IV7
            unsigned IV6  : 1; // bit 25 IV6
            unsigned IV5  : 1; // bit 26 IV5
            unsigned IV4  : 1; // bit 27 IV4
            unsigned IV3  : 1; // bit 28 IV3
            unsigned IV2  : 1; // bit 29 IV2
            unsigned IV1  : 1; // bit 30 IV1
            unsigned IV0  : 1; // bit 31 IV0    
        } bit;
    
        static constexpr unsigned IV31_POS = 0;
        static constexpr unsigned IV31_MASK = 0x00000001;
        static constexpr unsigned IV31(unsigned value) { return (value << 0); }
        static constexpr unsigned IV30_POS = 1;
        static constexpr unsigned IV30_MASK = 0x00000002;
        static constexpr unsigned IV30(unsigned value) { return (value << 1); }
        static constexpr unsigned IV29_POS = 2;
        static constexpr unsigned IV29_MASK = 0x00000004;
        static constexpr unsigned IV29(unsigned value) { return (value << 2); }
        static constexpr unsigned IV28_POS = 3;
        static constexpr unsigned IV28_MASK = 0x00000008;
        static constexpr unsigned IV28(unsigned value) { return (value << 3); }
        static constexpr unsigned IV27_POS = 4;
        static constexpr unsigned IV27_MASK = 0x00000010;
        static constexpr unsigned IV27(unsigned value) { return (value << 4); }
        static constexpr unsigned IV26_POS = 5;
        static constexpr unsigned IV26_MASK = 0x00000020;
        static constexpr unsigned IV26(unsigned value) { return (value << 5); }
        static constexpr unsigned IV25_POS = 6;
        static constexpr unsigned IV25_MASK = 0x00000040;
        static constexpr unsigned IV25(unsigned value) { return (value << 6); }
        static constexpr unsigned IV24_POS = 7;
        static constexpr unsigned IV24_MASK = 0x00000080;
        static constexpr unsigned IV24(unsigned value) { return (value << 7); }
        static constexpr unsigned IV23_POS = 8;
        static constexpr unsigned IV23_MASK = 0x00000100;
        static constexpr unsigned IV23(unsigned value) { return (value << 8); }
        static constexpr unsigned IV22_POS = 9;
        static constexpr unsigned IV22_MASK = 0x00000200;
        static constexpr unsigned IV22(unsigned value) { return (value << 9); }
        static constexpr unsigned IV21_POS = 10;
        static constexpr unsigned IV21_MASK = 0x00000400;
        static constexpr unsigned IV21(unsigned value) { return (value << 10); }
        static constexpr unsigned IV20_POS = 11;
        static constexpr unsigned IV20_MASK = 0x00000800;
        static constexpr unsigned IV20(unsigned value) { return (value << 11); }
        static constexpr unsigned IV19_POS = 12;
        static constexpr unsigned IV19_MASK = 0x00001000;
        static constexpr unsigned IV19(unsigned value) { return (value << 12); }
        static constexpr unsigned IV18_POS = 13;
        static constexpr unsigned IV18_MASK = 0x00002000;
        static constexpr unsigned IV18(unsigned value) { return (value << 13); }
        static constexpr unsigned IV17_POS = 14;
        static constexpr unsigned IV17_MASK = 0x00004000;
        static constexpr unsigned IV17(unsigned value) { return (value << 14); }
        static constexpr unsigned IV16_POS = 15;
        static constexpr unsigned IV16_MASK = 0x00008000;
        static constexpr unsigned IV16(unsigned value) { return (value << 15); }
        static constexpr unsigned IV15_POS = 16;
        static constexpr unsigned IV15_MASK = 0x00010000;
        static constexpr unsigned IV15(unsigned value) { return (value << 16); }
        static constexpr unsigned IV14_POS = 17;
        static constexpr unsigned IV14_MASK = 0x00020000;
        static constexpr unsigned IV14(unsigned value) { return (value << 17); }
        static constexpr unsigned IV13_POS = 18;
        static constexpr unsigned IV13_MASK = 0x00040000;
        static constexpr unsigned IV13(unsigned value) { return (value << 18); }
        static constexpr unsigned IV12_POS = 19;
        static constexpr unsigned IV12_MASK = 0x00080000;
        static constexpr unsigned IV12(unsigned value) { return (value << 19); }
        static constexpr unsigned IV11_POS = 20;
        static constexpr unsigned IV11_MASK = 0x00100000;
        static constexpr unsigned IV11(unsigned value) { return (value << 20); }
        static constexpr unsigned IV10_POS = 21;
        static constexpr unsigned IV10_MASK = 0x00200000;
        static constexpr unsigned IV10(unsigned value) { return (value << 21); }
        static constexpr unsigned IV9_POS = 22;
        static constexpr unsigned IV9_MASK = 0x00400000;
        static constexpr unsigned IV9(unsigned value) { return (value << 22); }
        static constexpr unsigned IV8_POS = 23;
        static constexpr unsigned IV8_MASK = 0x00800000;
        static constexpr unsigned IV8(unsigned value) { return (value << 23); }
        static constexpr unsigned IV7_POS = 24;
        static constexpr unsigned IV7_MASK = 0x01000000;
        static constexpr unsigned IV7(unsigned value) { return (value << 24); }
        static constexpr unsigned IV6_POS = 25;
        static constexpr unsigned IV6_MASK = 0x02000000;
        static constexpr unsigned IV6(unsigned value) { return (value << 25); }
        static constexpr unsigned IV5_POS = 26;
        static constexpr unsigned IV5_MASK = 0x04000000;
        static constexpr unsigned IV5(unsigned value) { return (value << 26); }
        static constexpr unsigned IV4_POS = 27;
        static constexpr unsigned IV4_MASK = 0x08000000;
        static constexpr unsigned IV4(unsigned value) { return (value << 27); }
        static constexpr unsigned IV3_POS = 28;
        static constexpr unsigned IV3_MASK = 0x10000000;
        static constexpr unsigned IV3(unsigned value) { return (value << 28); }
        static constexpr unsigned IV2_POS = 29;
        static constexpr unsigned IV2_MASK = 0x20000000;
        static constexpr unsigned IV2(unsigned value) { return (value << 29); }
        static constexpr unsigned IV1_POS = 30;
        static constexpr unsigned IV1_MASK = 0x40000000;
        static constexpr unsigned IV1(unsigned value) { return (value << 30); }
        static constexpr unsigned IV0_POS = 31;
        static constexpr unsigned IV0_MASK = 0x80000000;
        static constexpr unsigned IV0(unsigned value) { return (value << 31); }
    } IV0LR;

    volatile union IV0RR_T // IV0RR: initialization vector registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) IV0RR_BIT_T
        {
            unsigned IV63 : 1; // bit 0 IV63
            unsigned IV62 : 1; // bit 1 IV62
            unsigned IV61 : 1; // bit 2 IV61
            unsigned IV60 : 1; // bit 3 IV60
            unsigned IV59 : 1; // bit 4 IV59
            unsigned IV58 : 1; // bit 5 IV58
            unsigned IV57 : 1; // bit 6 IV57
            unsigned IV56 : 1; // bit 7 IV56
            unsigned IV55 : 1; // bit 8 IV55
            unsigned IV54 : 1; // bit 9 IV54
            unsigned IV53 : 1; // bit 10 IV53
            unsigned IV52 : 1; // bit 11 IV52
            unsigned IV51 : 1; // bit 12 IV51
            unsigned IV50 : 1; // bit 13 IV50
            unsigned IV49 : 1; // bit 14 IV49
            unsigned IV48 : 1; // bit 15 IV48
            unsigned IV47 : 1; // bit 16 IV47
            unsigned IV46 : 1; // bit 17 IV46
            unsigned IV45 : 1; // bit 18 IV45
            unsigned IV44 : 1; // bit 19 IV44
            unsigned IV43 : 1; // bit 20 IV43
            unsigned IV42 : 1; // bit 21 IV42
            unsigned IV41 : 1; // bit 22 IV41
            unsigned IV40 : 1; // bit 23 IV40
            unsigned IV39 : 1; // bit 24 IV39
            unsigned IV38 : 1; // bit 25 IV38
            unsigned IV37 : 1; // bit 26 IV37
            unsigned IV36 : 1; // bit 27 IV36
            unsigned IV35 : 1; // bit 28 IV35
            unsigned IV34 : 1; // bit 29 IV34
            unsigned IV33 : 1; // bit 30 IV33
            unsigned IV32 : 1; // bit 31 IV32    
        } bit;
    
        static constexpr unsigned IV63_POS = 0;
        static constexpr unsigned IV63_MASK = 0x00000001;
        static constexpr unsigned IV63(unsigned value) { return (value << 0); }
        static constexpr unsigned IV62_POS = 1;
        static constexpr unsigned IV62_MASK = 0x00000002;
        static constexpr unsigned IV62(unsigned value) { return (value << 1); }
        static constexpr unsigned IV61_POS = 2;
        static constexpr unsigned IV61_MASK = 0x00000004;
        static constexpr unsigned IV61(unsigned value) { return (value << 2); }
        static constexpr unsigned IV60_POS = 3;
        static constexpr unsigned IV60_MASK = 0x00000008;
        static constexpr unsigned IV60(unsigned value) { return (value << 3); }
        static constexpr unsigned IV59_POS = 4;
        static constexpr unsigned IV59_MASK = 0x00000010;
        static constexpr unsigned IV59(unsigned value) { return (value << 4); }
        static constexpr unsigned IV58_POS = 5;
        static constexpr unsigned IV58_MASK = 0x00000020;
        static constexpr unsigned IV58(unsigned value) { return (value << 5); }
        static constexpr unsigned IV57_POS = 6;
        static constexpr unsigned IV57_MASK = 0x00000040;
        static constexpr unsigned IV57(unsigned value) { return (value << 6); }
        static constexpr unsigned IV56_POS = 7;
        static constexpr unsigned IV56_MASK = 0x00000080;
        static constexpr unsigned IV56(unsigned value) { return (value << 7); }
        static constexpr unsigned IV55_POS = 8;
        static constexpr unsigned IV55_MASK = 0x00000100;
        static constexpr unsigned IV55(unsigned value) { return (value << 8); }
        static constexpr unsigned IV54_POS = 9;
        static constexpr unsigned IV54_MASK = 0x00000200;
        static constexpr unsigned IV54(unsigned value) { return (value << 9); }
        static constexpr unsigned IV53_POS = 10;
        static constexpr unsigned IV53_MASK = 0x00000400;
        static constexpr unsigned IV53(unsigned value) { return (value << 10); }
        static constexpr unsigned IV52_POS = 11;
        static constexpr unsigned IV52_MASK = 0x00000800;
        static constexpr unsigned IV52(unsigned value) { return (value << 11); }
        static constexpr unsigned IV51_POS = 12;
        static constexpr unsigned IV51_MASK = 0x00001000;
        static constexpr unsigned IV51(unsigned value) { return (value << 12); }
        static constexpr unsigned IV50_POS = 13;
        static constexpr unsigned IV50_MASK = 0x00002000;
        static constexpr unsigned IV50(unsigned value) { return (value << 13); }
        static constexpr unsigned IV49_POS = 14;
        static constexpr unsigned IV49_MASK = 0x00004000;
        static constexpr unsigned IV49(unsigned value) { return (value << 14); }
        static constexpr unsigned IV48_POS = 15;
        static constexpr unsigned IV48_MASK = 0x00008000;
        static constexpr unsigned IV48(unsigned value) { return (value << 15); }
        static constexpr unsigned IV47_POS = 16;
        static constexpr unsigned IV47_MASK = 0x00010000;
        static constexpr unsigned IV47(unsigned value) { return (value << 16); }
        static constexpr unsigned IV46_POS = 17;
        static constexpr unsigned IV46_MASK = 0x00020000;
        static constexpr unsigned IV46(unsigned value) { return (value << 17); }
        static constexpr unsigned IV45_POS = 18;
        static constexpr unsigned IV45_MASK = 0x00040000;
        static constexpr unsigned IV45(unsigned value) { return (value << 18); }
        static constexpr unsigned IV44_POS = 19;
        static constexpr unsigned IV44_MASK = 0x00080000;
        static constexpr unsigned IV44(unsigned value) { return (value << 19); }
        static constexpr unsigned IV43_POS = 20;
        static constexpr unsigned IV43_MASK = 0x00100000;
        static constexpr unsigned IV43(unsigned value) { return (value << 20); }
        static constexpr unsigned IV42_POS = 21;
        static constexpr unsigned IV42_MASK = 0x00200000;
        static constexpr unsigned IV42(unsigned value) { return (value << 21); }
        static constexpr unsigned IV41_POS = 22;
        static constexpr unsigned IV41_MASK = 0x00400000;
        static constexpr unsigned IV41(unsigned value) { return (value << 22); }
        static constexpr unsigned IV40_POS = 23;
        static constexpr unsigned IV40_MASK = 0x00800000;
        static constexpr unsigned IV40(unsigned value) { return (value << 23); }
        static constexpr unsigned IV39_POS = 24;
        static constexpr unsigned IV39_MASK = 0x01000000;
        static constexpr unsigned IV39(unsigned value) { return (value << 24); }
        static constexpr unsigned IV38_POS = 25;
        static constexpr unsigned IV38_MASK = 0x02000000;
        static constexpr unsigned IV38(unsigned value) { return (value << 25); }
        static constexpr unsigned IV37_POS = 26;
        static constexpr unsigned IV37_MASK = 0x04000000;
        static constexpr unsigned IV37(unsigned value) { return (value << 26); }
        static constexpr unsigned IV36_POS = 27;
        static constexpr unsigned IV36_MASK = 0x08000000;
        static constexpr unsigned IV36(unsigned value) { return (value << 27); }
        static constexpr unsigned IV35_POS = 28;
        static constexpr unsigned IV35_MASK = 0x10000000;
        static constexpr unsigned IV35(unsigned value) { return (value << 28); }
        static constexpr unsigned IV34_POS = 29;
        static constexpr unsigned IV34_MASK = 0x20000000;
        static constexpr unsigned IV34(unsigned value) { return (value << 29); }
        static constexpr unsigned IV33_POS = 30;
        static constexpr unsigned IV33_MASK = 0x40000000;
        static constexpr unsigned IV33(unsigned value) { return (value << 30); }
        static constexpr unsigned IV32_POS = 31;
        static constexpr unsigned IV32_MASK = 0x80000000;
        static constexpr unsigned IV32(unsigned value) { return (value << 31); }
    } IV0RR;

    volatile union IV1LR_T // IV1LR: initialization vector registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) IV1LR_BIT_T
        {
            unsigned IV95 : 1; // bit 0 IV95
            unsigned IV94 : 1; // bit 1 IV94
            unsigned IV93 : 1; // bit 2 IV93
            unsigned IV92 : 1; // bit 3 IV92
            unsigned IV91 : 1; // bit 4 IV91
            unsigned IV90 : 1; // bit 5 IV90
            unsigned IV89 : 1; // bit 6 IV89
            unsigned IV88 : 1; // bit 7 IV88
            unsigned IV87 : 1; // bit 8 IV87
            unsigned IV86 : 1; // bit 9 IV86
            unsigned IV85 : 1; // bit 10 IV85
            unsigned IV84 : 1; // bit 11 IV84
            unsigned IV83 : 1; // bit 12 IV83
            unsigned IV82 : 1; // bit 13 IV82
            unsigned IV81 : 1; // bit 14 IV81
            unsigned IV80 : 1; // bit 15 IV80
            unsigned IV79 : 1; // bit 16 IV79
            unsigned IV78 : 1; // bit 17 IV78
            unsigned IV77 : 1; // bit 18 IV77
            unsigned IV76 : 1; // bit 19 IV76
            unsigned IV75 : 1; // bit 20 IV75
            unsigned IV74 : 1; // bit 21 IV74
            unsigned IV73 : 1; // bit 22 IV73
            unsigned IV72 : 1; // bit 23 IV72
            unsigned IV71 : 1; // bit 24 IV71
            unsigned IV70 : 1; // bit 25 IV70
            unsigned IV69 : 1; // bit 26 IV69
            unsigned IV68 : 1; // bit 27 IV68
            unsigned IV67 : 1; // bit 28 IV67
            unsigned IV66 : 1; // bit 29 IV66
            unsigned IV65 : 1; // bit 30 IV65
            unsigned IV64 : 1; // bit 31 IV64    
        } bit;
    
        static constexpr unsigned IV95_POS = 0;
        static constexpr unsigned IV95_MASK = 0x00000001;
        static constexpr unsigned IV95(unsigned value) { return (value << 0); }
        static constexpr unsigned IV94_POS = 1;
        static constexpr unsigned IV94_MASK = 0x00000002;
        static constexpr unsigned IV94(unsigned value) { return (value << 1); }
        static constexpr unsigned IV93_POS = 2;
        static constexpr unsigned IV93_MASK = 0x00000004;
        static constexpr unsigned IV93(unsigned value) { return (value << 2); }
        static constexpr unsigned IV92_POS = 3;
        static constexpr unsigned IV92_MASK = 0x00000008;
        static constexpr unsigned IV92(unsigned value) { return (value << 3); }
        static constexpr unsigned IV91_POS = 4;
        static constexpr unsigned IV91_MASK = 0x00000010;
        static constexpr unsigned IV91(unsigned value) { return (value << 4); }
        static constexpr unsigned IV90_POS = 5;
        static constexpr unsigned IV90_MASK = 0x00000020;
        static constexpr unsigned IV90(unsigned value) { return (value << 5); }
        static constexpr unsigned IV89_POS = 6;
        static constexpr unsigned IV89_MASK = 0x00000040;
        static constexpr unsigned IV89(unsigned value) { return (value << 6); }
        static constexpr unsigned IV88_POS = 7;
        static constexpr unsigned IV88_MASK = 0x00000080;
        static constexpr unsigned IV88(unsigned value) { return (value << 7); }
        static constexpr unsigned IV87_POS = 8;
        static constexpr unsigned IV87_MASK = 0x00000100;
        static constexpr unsigned IV87(unsigned value) { return (value << 8); }
        static constexpr unsigned IV86_POS = 9;
        static constexpr unsigned IV86_MASK = 0x00000200;
        static constexpr unsigned IV86(unsigned value) { return (value << 9); }
        static constexpr unsigned IV85_POS = 10;
        static constexpr unsigned IV85_MASK = 0x00000400;
        static constexpr unsigned IV85(unsigned value) { return (value << 10); }
        static constexpr unsigned IV84_POS = 11;
        static constexpr unsigned IV84_MASK = 0x00000800;
        static constexpr unsigned IV84(unsigned value) { return (value << 11); }
        static constexpr unsigned IV83_POS = 12;
        static constexpr unsigned IV83_MASK = 0x00001000;
        static constexpr unsigned IV83(unsigned value) { return (value << 12); }
        static constexpr unsigned IV82_POS = 13;
        static constexpr unsigned IV82_MASK = 0x00002000;
        static constexpr unsigned IV82(unsigned value) { return (value << 13); }
        static constexpr unsigned IV81_POS = 14;
        static constexpr unsigned IV81_MASK = 0x00004000;
        static constexpr unsigned IV81(unsigned value) { return (value << 14); }
        static constexpr unsigned IV80_POS = 15;
        static constexpr unsigned IV80_MASK = 0x00008000;
        static constexpr unsigned IV80(unsigned value) { return (value << 15); }
        static constexpr unsigned IV79_POS = 16;
        static constexpr unsigned IV79_MASK = 0x00010000;
        static constexpr unsigned IV79(unsigned value) { return (value << 16); }
        static constexpr unsigned IV78_POS = 17;
        static constexpr unsigned IV78_MASK = 0x00020000;
        static constexpr unsigned IV78(unsigned value) { return (value << 17); }
        static constexpr unsigned IV77_POS = 18;
        static constexpr unsigned IV77_MASK = 0x00040000;
        static constexpr unsigned IV77(unsigned value) { return (value << 18); }
        static constexpr unsigned IV76_POS = 19;
        static constexpr unsigned IV76_MASK = 0x00080000;
        static constexpr unsigned IV76(unsigned value) { return (value << 19); }
        static constexpr unsigned IV75_POS = 20;
        static constexpr unsigned IV75_MASK = 0x00100000;
        static constexpr unsigned IV75(unsigned value) { return (value << 20); }
        static constexpr unsigned IV74_POS = 21;
        static constexpr unsigned IV74_MASK = 0x00200000;
        static constexpr unsigned IV74(unsigned value) { return (value << 21); }
        static constexpr unsigned IV73_POS = 22;
        static constexpr unsigned IV73_MASK = 0x00400000;
        static constexpr unsigned IV73(unsigned value) { return (value << 22); }
        static constexpr unsigned IV72_POS = 23;
        static constexpr unsigned IV72_MASK = 0x00800000;
        static constexpr unsigned IV72(unsigned value) { return (value << 23); }
        static constexpr unsigned IV71_POS = 24;
        static constexpr unsigned IV71_MASK = 0x01000000;
        static constexpr unsigned IV71(unsigned value) { return (value << 24); }
        static constexpr unsigned IV70_POS = 25;
        static constexpr unsigned IV70_MASK = 0x02000000;
        static constexpr unsigned IV70(unsigned value) { return (value << 25); }
        static constexpr unsigned IV69_POS = 26;
        static constexpr unsigned IV69_MASK = 0x04000000;
        static constexpr unsigned IV69(unsigned value) { return (value << 26); }
        static constexpr unsigned IV68_POS = 27;
        static constexpr unsigned IV68_MASK = 0x08000000;
        static constexpr unsigned IV68(unsigned value) { return (value << 27); }
        static constexpr unsigned IV67_POS = 28;
        static constexpr unsigned IV67_MASK = 0x10000000;
        static constexpr unsigned IV67(unsigned value) { return (value << 28); }
        static constexpr unsigned IV66_POS = 29;
        static constexpr unsigned IV66_MASK = 0x20000000;
        static constexpr unsigned IV66(unsigned value) { return (value << 29); }
        static constexpr unsigned IV65_POS = 30;
        static constexpr unsigned IV65_MASK = 0x40000000;
        static constexpr unsigned IV65(unsigned value) { return (value << 30); }
        static constexpr unsigned IV64_POS = 31;
        static constexpr unsigned IV64_MASK = 0x80000000;
        static constexpr unsigned IV64(unsigned value) { return (value << 31); }
    } IV1LR;

    volatile union IV1RR_T // IV1RR: initialization vector registers 
    {
        uint32_t reg;
        struct __attribute__((packed)) IV1RR_BIT_T
        {
            unsigned IV127 : 1; // bit 0 IV127
            unsigned IV126 : 1; // bit 1 IV126
            unsigned IV125 : 1; // bit 2 IV125
            unsigned IV124 : 1; // bit 3 IV124
            unsigned IV123 : 1; // bit 4 IV123
            unsigned IV122 : 1; // bit 5 IV122
            unsigned IV121 : 1; // bit 6 IV121
            unsigned IV120 : 1; // bit 7 IV120
            unsigned IV119 : 1; // bit 8 IV119
            unsigned IV118 : 1; // bit 9 IV118
            unsigned IV117 : 1; // bit 10 IV117
            unsigned IV116 : 1; // bit 11 IV116
            unsigned IV115 : 1; // bit 12 IV115
            unsigned IV114 : 1; // bit 13 IV114
            unsigned IV113 : 1; // bit 14 IV113
            unsigned IV112 : 1; // bit 15 IV112
            unsigned IV111 : 1; // bit 16 IV111
            unsigned IV110 : 1; // bit 17 IV110
            unsigned IV109 : 1; // bit 18 IV109
            unsigned IV108 : 1; // bit 19 IV108
            unsigned IV107 : 1; // bit 20 IV107
            unsigned IV106 : 1; // bit 21 IV106
            unsigned IV105 : 1; // bit 22 IV105
            unsigned IV104 : 1; // bit 23 IV104
            unsigned IV103 : 1; // bit 24 IV103
            unsigned IV102 : 1; // bit 25 IV102
            unsigned IV101 : 1; // bit 26 IV101
            unsigned IV100 : 1; // bit 27 IV100
            unsigned IV99  : 1; // bit 28 IV99
            unsigned IV98  : 1; // bit 29 IV98
            unsigned IV97  : 1; // bit 30 IV97
            unsigned IV96  : 1; // bit 31 IV96    
        } bit;
    
        static constexpr unsigned IV127_POS = 0;
        static constexpr unsigned IV127_MASK = 0x00000001;
        static constexpr unsigned IV127(unsigned value) { return (value << 0); }
        static constexpr unsigned IV126_POS = 1;
        static constexpr unsigned IV126_MASK = 0x00000002;
        static constexpr unsigned IV126(unsigned value) { return (value << 1); }
        static constexpr unsigned IV125_POS = 2;
        static constexpr unsigned IV125_MASK = 0x00000004;
        static constexpr unsigned IV125(unsigned value) { return (value << 2); }
        static constexpr unsigned IV124_POS = 3;
        static constexpr unsigned IV124_MASK = 0x00000008;
        static constexpr unsigned IV124(unsigned value) { return (value << 3); }
        static constexpr unsigned IV123_POS = 4;
        static constexpr unsigned IV123_MASK = 0x00000010;
        static constexpr unsigned IV123(unsigned value) { return (value << 4); }
        static constexpr unsigned IV122_POS = 5;
        static constexpr unsigned IV122_MASK = 0x00000020;
        static constexpr unsigned IV122(unsigned value) { return (value << 5); }
        static constexpr unsigned IV121_POS = 6;
        static constexpr unsigned IV121_MASK = 0x00000040;
        static constexpr unsigned IV121(unsigned value) { return (value << 6); }
        static constexpr unsigned IV120_POS = 7;
        static constexpr unsigned IV120_MASK = 0x00000080;
        static constexpr unsigned IV120(unsigned value) { return (value << 7); }
        static constexpr unsigned IV119_POS = 8;
        static constexpr unsigned IV119_MASK = 0x00000100;
        static constexpr unsigned IV119(unsigned value) { return (value << 8); }
        static constexpr unsigned IV118_POS = 9;
        static constexpr unsigned IV118_MASK = 0x00000200;
        static constexpr unsigned IV118(unsigned value) { return (value << 9); }
        static constexpr unsigned IV117_POS = 10;
        static constexpr unsigned IV117_MASK = 0x00000400;
        static constexpr unsigned IV117(unsigned value) { return (value << 10); }
        static constexpr unsigned IV116_POS = 11;
        static constexpr unsigned IV116_MASK = 0x00000800;
        static constexpr unsigned IV116(unsigned value) { return (value << 11); }
        static constexpr unsigned IV115_POS = 12;
        static constexpr unsigned IV115_MASK = 0x00001000;
        static constexpr unsigned IV115(unsigned value) { return (value << 12); }
        static constexpr unsigned IV114_POS = 13;
        static constexpr unsigned IV114_MASK = 0x00002000;
        static constexpr unsigned IV114(unsigned value) { return (value << 13); }
        static constexpr unsigned IV113_POS = 14;
        static constexpr unsigned IV113_MASK = 0x00004000;
        static constexpr unsigned IV113(unsigned value) { return (value << 14); }
        static constexpr unsigned IV112_POS = 15;
        static constexpr unsigned IV112_MASK = 0x00008000;
        static constexpr unsigned IV112(unsigned value) { return (value << 15); }
        static constexpr unsigned IV111_POS = 16;
        static constexpr unsigned IV111_MASK = 0x00010000;
        static constexpr unsigned IV111(unsigned value) { return (value << 16); }
        static constexpr unsigned IV110_POS = 17;
        static constexpr unsigned IV110_MASK = 0x00020000;
        static constexpr unsigned IV110(unsigned value) { return (value << 17); }
        static constexpr unsigned IV109_POS = 18;
        static constexpr unsigned IV109_MASK = 0x00040000;
        static constexpr unsigned IV109(unsigned value) { return (value << 18); }
        static constexpr unsigned IV108_POS = 19;
        static constexpr unsigned IV108_MASK = 0x00080000;
        static constexpr unsigned IV108(unsigned value) { return (value << 19); }
        static constexpr unsigned IV107_POS = 20;
        static constexpr unsigned IV107_MASK = 0x00100000;
        static constexpr unsigned IV107(unsigned value) { return (value << 20); }
        static constexpr unsigned IV106_POS = 21;
        static constexpr unsigned IV106_MASK = 0x00200000;
        static constexpr unsigned IV106(unsigned value) { return (value << 21); }
        static constexpr unsigned IV105_POS = 22;
        static constexpr unsigned IV105_MASK = 0x00400000;
        static constexpr unsigned IV105(unsigned value) { return (value << 22); }
        static constexpr unsigned IV104_POS = 23;
        static constexpr unsigned IV104_MASK = 0x00800000;
        static constexpr unsigned IV104(unsigned value) { return (value << 23); }
        static constexpr unsigned IV103_POS = 24;
        static constexpr unsigned IV103_MASK = 0x01000000;
        static constexpr unsigned IV103(unsigned value) { return (value << 24); }
        static constexpr unsigned IV102_POS = 25;
        static constexpr unsigned IV102_MASK = 0x02000000;
        static constexpr unsigned IV102(unsigned value) { return (value << 25); }
        static constexpr unsigned IV101_POS = 26;
        static constexpr unsigned IV101_MASK = 0x04000000;
        static constexpr unsigned IV101(unsigned value) { return (value << 26); }
        static constexpr unsigned IV100_POS = 27;
        static constexpr unsigned IV100_MASK = 0x08000000;
        static constexpr unsigned IV100(unsigned value) { return (value << 27); }
        static constexpr unsigned IV99_POS = 28;
        static constexpr unsigned IV99_MASK = 0x10000000;
        static constexpr unsigned IV99(unsigned value) { return (value << 28); }
        static constexpr unsigned IV98_POS = 29;
        static constexpr unsigned IV98_MASK = 0x20000000;
        static constexpr unsigned IV98(unsigned value) { return (value << 29); }
        static constexpr unsigned IV97_POS = 30;
        static constexpr unsigned IV97_MASK = 0x40000000;
        static constexpr unsigned IV97(unsigned value) { return (value << 30); }
        static constexpr unsigned IV96_POS = 31;
        static constexpr unsigned IV96_MASK = 0x80000000;
        static constexpr unsigned IV96(unsigned value) { return (value << 31); }
    } IV1RR;

    volatile union CSGCMCCM0R_T // CSGCMCCM0R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM0R_BIT_T
        {
            unsigned CSGCMCCM0R : 32; // bits 0..31 CSGCMCCM0R    
        } bit;
    
        static constexpr unsigned CSGCMCCM0R_POS = 0;
        static constexpr unsigned CSGCMCCM0R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM0R(unsigned value) { return (value << 0); }
    } CSGCMCCM0R;

    volatile union CSGCMCCM1R_T // CSGCMCCM1R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM1R_BIT_T
        {
            unsigned CSGCMCCM1R : 32; // bits 0..31 CSGCMCCM1R    
        } bit;
    
        static constexpr unsigned CSGCMCCM1R_POS = 0;
        static constexpr unsigned CSGCMCCM1R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM1R(unsigned value) { return (value << 0); }
    } CSGCMCCM1R;

    volatile union CSGCMCCM2R_T // CSGCMCCM2R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM2R_BIT_T
        {
            unsigned CSGCMCCM2R : 32; // bits 0..31 CSGCMCCM2R    
        } bit;
    
        static constexpr unsigned CSGCMCCM2R_POS = 0;
        static constexpr unsigned CSGCMCCM2R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM2R(unsigned value) { return (value << 0); }
    } CSGCMCCM2R;

    volatile union CSGCMCCM3R_T // CSGCMCCM3R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM3R_BIT_T
        {
            unsigned CSGCMCCM3R : 32; // bits 0..31 CSGCMCCM3R    
        } bit;
    
        static constexpr unsigned CSGCMCCM3R_POS = 0;
        static constexpr unsigned CSGCMCCM3R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM3R(unsigned value) { return (value << 0); }
    } CSGCMCCM3R;

    volatile union CSGCMCCM4R_T // CSGCMCCM4R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM4R_BIT_T
        {
            unsigned CSGCMCCM4R : 32; // bits 0..31 CSGCMCCM4R    
        } bit;
    
        static constexpr unsigned CSGCMCCM4R_POS = 0;
        static constexpr unsigned CSGCMCCM4R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM4R(unsigned value) { return (value << 0); }
    } CSGCMCCM4R;

    volatile union CSGCMCCM5R_T // CSGCMCCM5R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM5R_BIT_T
        {
            unsigned CSGCMCCM5R : 32; // bits 0..31 CSGCMCCM5R    
        } bit;
    
        static constexpr unsigned CSGCMCCM5R_POS = 0;
        static constexpr unsigned CSGCMCCM5R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM5R(unsigned value) { return (value << 0); }
    } CSGCMCCM5R;

    volatile union CSGCMCCM6R_T // CSGCMCCM6R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM6R_BIT_T
        {
            unsigned CSGCMCCM6R : 32; // bits 0..31 CSGCMCCM6R    
        } bit;
    
        static constexpr unsigned CSGCMCCM6R_POS = 0;
        static constexpr unsigned CSGCMCCM6R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM6R(unsigned value) { return (value << 0); }
    } CSGCMCCM6R;

    volatile union CSGCMCCM7R_T // CSGCMCCM7R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCMCCM7R_BIT_T
        {
            unsigned CSGCMCCM7R : 32; // bits 0..31 CSGCMCCM7R    
        } bit;
    
        static constexpr unsigned CSGCMCCM7R_POS = 0;
        static constexpr unsigned CSGCMCCM7R_MASK = 0xffffffff;
        static constexpr unsigned CSGCMCCM7R(unsigned value) { return (value << 0); }
    } CSGCMCCM7R;

    volatile union CSGCM0R_T // CSGCM0R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM0R_BIT_T
        {
            unsigned CSGCM0R : 32; // bits 0..31 CSGCM0R    
        } bit;
    
        static constexpr unsigned CSGCM0R_POS = 0;
        static constexpr unsigned CSGCM0R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM0R(unsigned value) { return (value << 0); }
    } CSGCM0R;

    volatile union CSGCM1R_T // CSGCM1R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM1R_BIT_T
        {
            unsigned CSGCM1R : 32; // bits 0..31 CSGCM1R    
        } bit;
    
        static constexpr unsigned CSGCM1R_POS = 0;
        static constexpr unsigned CSGCM1R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM1R(unsigned value) { return (value << 0); }
    } CSGCM1R;

    volatile union CSGCM2R_T // CSGCM2R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM2R_BIT_T
        {
            unsigned CSGCM2R : 32; // bits 0..31 CSGCM2R    
        } bit;
    
        static constexpr unsigned CSGCM2R_POS = 0;
        static constexpr unsigned CSGCM2R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM2R(unsigned value) { return (value << 0); }
    } CSGCM2R;

    volatile union CSGCM3R_T // CSGCM3R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM3R_BIT_T
        {
            unsigned CSGCM3R : 32; // bits 0..31 CSGCM3R    
        } bit;
    
        static constexpr unsigned CSGCM3R_POS = 0;
        static constexpr unsigned CSGCM3R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM3R(unsigned value) { return (value << 0); }
    } CSGCM3R;

    volatile union CSGCM4R_T // CSGCM4R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM4R_BIT_T
        {
            unsigned CSGCM4R : 32; // bits 0..31 CSGCM4R    
        } bit;
    
        static constexpr unsigned CSGCM4R_POS = 0;
        static constexpr unsigned CSGCM4R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM4R(unsigned value) { return (value << 0); }
    } CSGCM4R;

    volatile union CSGCM5R_T // CSGCM5R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM5R_BIT_T
        {
            unsigned CSGCM5R : 32; // bits 0..31 CSGCM5R    
        } bit;
    
        static constexpr unsigned CSGCM5R_POS = 0;
        static constexpr unsigned CSGCM5R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM5R(unsigned value) { return (value << 0); }
    } CSGCM5R;

    volatile union CSGCM6R_T // CSGCM6R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM6R_BIT_T
        {
            unsigned CSGCM6R : 32; // bits 0..31 CSGCM6R    
        } bit;
    
        static constexpr unsigned CSGCM6R_POS = 0;
        static constexpr unsigned CSGCM6R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM6R(unsigned value) { return (value << 0); }
    } CSGCM6R;

    volatile union CSGCM7R_T // CSGCM7R: context swap register 
    {
        uint32_t reg;
        struct __attribute__((packed)) CSGCM7R_BIT_T
        {
            unsigned CSGCM7R : 32; // bits 0..31 CSGCM7R    
        } bit;
    
        static constexpr unsigned CSGCM7R_POS = 0;
        static constexpr unsigned CSGCM7R_MASK = 0xffffffff;
        static constexpr unsigned CSGCM7R(unsigned value) { return (value << 0); }
    } CSGCM7R;

}; // struct CRYP_T

static_assert(sizeof(CRYP_T) == CRYP_T::INSTANCE_SIZE, "invalid peripheral register struct");

} // namespace Peripherals
} // namespace LibreUCpp