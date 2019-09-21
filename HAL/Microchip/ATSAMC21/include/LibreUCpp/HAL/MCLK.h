#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/MCLK.h>

namespace LibreUCpp {
namespace HAL {

class MCLK
{
    public:
        enum class CPUDIV : unsigned char
        {
            DIV1 = 0x01,
            DIV2 = 0x02,
            DIV4 = 0x04,
            DIV8 = 0x08,
            DIV16 = 0x10,
            DIV32 = 0x20,
            DIV64 = 0x40,
            DIV128 = 0x80
        };

        enum class AHB_CLOCK : unsigned char
        {
            APBA = 0,
            APBB = 1,
            APBC = 2,
            DSU  = 3,
            HMATRIXHS = 4,
            NVMCTRL = 5,
            HSRAM = 6,
            DMAC = 7,
            CAN0 = 8,
            CAN1 = 9,
            PAC = 10,
            DIVAS = 12,
            APBD = 13
        };

        enum class APBA_CLOCK : unsigned char
        {
            PAC = 0,
            PM = 1,
            MCLK = 2,
            RSTC = 3,
            OSCCTRL = 4,
            OSC32KCTRL = 5,
            SUPC = 6,
            GCLK = 7,
            WDT = 8,
            RTC = 9,
            EIC = 10,
            FREQM = 11,
            TSENS = 12
        };

        enum class APBB_CLOCK : unsigned char
        {
            PORT = 0,
            DSU = 1,
            NVMCTRL = 2,
            HMATRIXHS = 3
        };

        enum class APBC_CLOCK : unsigned char
        {
            EVSYS = 0,
            SERCOM0 = 1,
            SERCOM1 = 2,
            SERCOM2 = 3,
            SERCOM3 = 4,
            SERCOM4 = 5,
            SERCOM5 = 6,
            TCC0 = 9,
            TCC1 = 10,
            TCC2 = 11,
            TC0 = 12,
            TC1 = 13,
            TC2 = 14,
            TC3 = 15,
            TC4 = 16,
            ADC0 = 17,
            ADC1 = 18,
            SDADC = 19,
            AC = 20,
            DAC = 21,
            PTC = 22,
            CCL = 23
        };

        enum class APBD_CLOCK : unsigned char
        {
            SERCOM6 = 0,
            SERCOM7 = 1,
            TC5 = 2,
            TC6 = 3,
            TC7 = 4
        };

    public:
        static ALWAYS_INLINE void SetCpuDivisionFactor(CPUDIV div)
        {
            Periph().CPUDIV.reg = static_cast<unsigned>(div);
        }

        static unsigned CalcCpuFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency);

        static void EnableClock(AHB_CLOCK clk)
        {
            Periph().AHBMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void EnableClock(APBA_CLOCK clk)
        {
            Periph().APBAMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void EnableClock(APBB_CLOCK clk)
        {
            Periph().APBBMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void EnableClock(APBC_CLOCK clk)
        {
            Periph().APBCMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void EnableClock(APBD_CLOCK clk)
        {
            Periph().APBDMASK.reg |= (1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(AHB_CLOCK clk)
        {
            Periph().AHBMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(APBA_CLOCK clk)
        {
            Periph().APBAMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(APBB_CLOCK clk)
        {
            Periph().APBBMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(APBC_CLOCK clk)
        {
            Periph().APBCMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

        static void DisableClock(APBD_CLOCK clk)
        {
            Periph().APBDMASK.reg &= ~(1u << static_cast<unsigned>(clk));
        }

    private:
        static ALWAYS_INLINE Peripherals::MCLK_T& Periph()
        { 
            return *reinterpret_cast<Peripherals::MCLK_T*>(Peripherals::MCLK_T::BASE_ADDRESS); 
        }

};

} // namespace HAL
} // namespace LibreUCpp
