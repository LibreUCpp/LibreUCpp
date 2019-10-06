#pragma once

#include <stdlib.h>
#include <LibreUCpp/Compiler.h>

#ifdef LIBREUCPP_ATSAMC
#include <LibreUCpp/Peripherals/MCLK.h>
#endif
#ifdef LIBREUCPP_ATSAMD
#include <LibreUCpp/Peripherals/PM.h>
#endif

namespace LibreUCpp {
namespace HAL {

class BusClockManager
{
    public:
        static constexpr unsigned PREFIX_SHIFT = 8;
        static constexpr unsigned BIT_MASK = ~(0xFFFFFFFF << PREFIX_SHIFT);

#ifdef LIBREUCPP_ATSAMC
        static constexpr unsigned BASE_ADDRESS = Peripherals::MCLK_T::BASE_ADDRESS;
        static constexpr unsigned PREFIX_AHB   = Peripherals::MCLK_T::ADDR_OFFSET_AHBMASK  << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APBA  = Peripherals::MCLK_T::ADDR_OFFSET_APBAMASK << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APBB  = Peripherals::MCLK_T::ADDR_OFFSET_APBBMASK << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APBC  = Peripherals::MCLK_T::ADDR_OFFSET_APBCMASK << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APBD  = Peripherals::MCLK_T::ADDR_OFFSET_APBDMASK << PREFIX_SHIFT;

        enum class Peripheral : unsigned
        {
            // AHB 
            APBA           = PREFIX_AHB + 0,
            APBB           = PREFIX_AHB + 1,
            APBC           = PREFIX_AHB + 2,
            DSU_AHB        = PREFIX_AHB + 3,
            HMATRIXHS_AHB  = PREFIX_AHB + 4,
            NVMCTRL_AHB    = PREFIX_AHB + 5,
            HSRAM          = PREFIX_AHB + 6,
            DMAC           = PREFIX_AHB + 7,
            CAN0           = PREFIX_AHB + 8,
            CAN1           = PREFIX_AHB + 9,
            PAC_AHB        = PREFIX_AHB + 10,
 
            // APBA   
            PAC_APB        = PREFIX_APBA + 0,
            PM             = PREFIX_APBA + 1,
            MCLK           = PREFIX_APBA + 2,
            RSTC           = PREFIX_APBA + 3,
            OSCCTRL        = PREFIX_APBA + 4,
            OSC32KCTRL     = PREFIX_APBA + 5,
            SUPC           = PREFIX_APBA + 6,
            GCLK           = PREFIX_APBA + 7,
            WDT            = PREFIX_APBA + 8,
            RTC            = PREFIX_APBA + 9,
            EIC            = PREFIX_APBA + 10,
            FREQM          = PREFIX_APBA + 11,
            TSENS          = PREFIX_APBA + 12,

            // APBB
            PORT           = PREFIX_APBB + 0,
            DSU_APB        = PREFIX_APBB + 1,
            NVMCTRL_APB    = PREFIX_APBB + 2,
            HMATRIXHS_APB  = PREFIX_APBB + 5,

            // APBC
            EVSYS          = PREFIX_APBC + 0,
            SERCOM0        = PREFIX_APBC + 1,
            SERCOM1        = PREFIX_APBC + 2,
            SERCOM2        = PREFIX_APBC + 3,
            SERCOM3        = PREFIX_APBC + 4,
            SERCOM4        = PREFIX_APBC + 5,
            SERCOM5        = PREFIX_APBC + 6,
            TCC0           = PREFIX_APBC + 9,
            TCC1           = PREFIX_APBC + 10,
            TCC2           = PREFIX_APBC + 11,
            TC0            = PREFIX_APBC + 12,
            TC1            = PREFIX_APBC + 13,
            TC2            = PREFIX_APBC + 14,
            TC3            = PREFIX_APBC + 15,
            TC4            = PREFIX_APBC + 16,
            ADC0           = PREFIX_APBC + 17,
            ADC1           = PREFIX_APBC + 18,
            SDADC          = PREFIX_APBC + 19,
            AC             = PREFIX_APBC + 20,
            DAC            = PREFIX_APBC + 21,
            PTC            = PREFIX_APBC + 22,
            CCL            = PREFIX_APBC + 23,

            // APBD
            SERCOM6        = PREFIX_APBD + 0,
            SERCOM7        = PREFIX_APBD + 1,
            TC5            = PREFIX_APBD + 2,
            TC6            = PREFIX_APBD + 3,
            TC7            = PREFIX_APBD + 4,
        };
#endif

#ifdef LIBREUCPP_ATSAMD
        static constexpr unsigned BASE_ADDRESS = Peripherals::PM_T::BASE_ADDRESS;
        static constexpr unsigned PREFIX_AHB   = Peripherals::PM_T::ADDR_OFFSET_AHBMASK  << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APBA  = Peripherals::PM_T::ADDR_OFFSET_APBAMASK << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APBB  = Peripherals::PM_T::ADDR_OFFSET_APBBMASK << PREFIX_SHIFT;
        static constexpr unsigned PREFIX_APBC  = Peripherals::PM_T::ADDR_OFFSET_APBCMASK << PREFIX_SHIFT;

        enum class Peripheral : unsigned
        {
            // AHB
            HPB0        = PREFIX_AHB + 0,
            HPB1        = PREFIX_AHB + 1,
            HPB2        = PREFIX_AHB + 2,
            DSU_AHB     = PREFIX_AHB + 3,
            NVMCTRL_AHB = PREFIX_AHB + 4,
            DMAC_AHB    = PREFIX_AHB + 5,

            // APBA
            PAC0        = PREFIX_APBA + 0,
            PM          = PREFIX_APBA + 1,
            SYSCTRL     = PREFIX_APBA + 2,
            GCLK        = PREFIX_APBA + 3,
            WDT         = PREFIX_APBA + 4,
            RTC         = PREFIX_APBA + 5,
            EIC         = PREFIX_APBA + 6,

            // APBB
            PAC1        = PREFIX_APBB + 0,
            DSU_APB     = PREFIX_APBB + 1,
            NVMCTRL_APB = PREFIX_APBB + 2,
            PORT        = PREFIX_APBB + 3,
            DMAC_APB    = PREFIX_APBB + 4,

            // APBC
            PAC2        = PREFIX_APBC + 0,
            EVSYS       = PREFIX_APBC + 1,
            SERCOM0     = PREFIX_APBC + 2,
            SERCOM1     = PREFIX_APBC + 3,
            TC1         = PREFIX_APBC + 6,
            TC2         = PREFIX_APBC + 7,
            ADC         = PREFIX_APBC + 8,
        };
#endif

        static void EnableClock(Peripheral p)
        {
            auto reg = reinterpret_cast<volatile uint32_t*>(RegisterAddress(p));
            *reg |= RegisterMask(p);
        }

        static void DisableClock(Peripheral p)
        {
            auto reg = reinterpret_cast<volatile uint32_t*>(RegisterAddress(p));
            *reg &= ~RegisterMask(p);
        }

    private:
        static ALWAYS_INLINE unsigned RegisterAddress(Peripheral p)
        {
            auto offset = static_cast<unsigned>(p) >> PREFIX_SHIFT;
            return BASE_ADDRESS + offset;
        }

        static ALWAYS_INLINE unsigned RegisterMask(Peripheral p)
        {
            auto bit = static_cast<unsigned>(p) & BIT_MASK;
            return 1u << bit;
        }
};

} // namespace HAL
} // namespace LibreUCpp
