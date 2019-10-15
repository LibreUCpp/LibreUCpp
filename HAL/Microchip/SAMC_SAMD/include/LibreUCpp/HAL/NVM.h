#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/NVMCTRL.h>

namespace LibreUCpp {
namespace HAL {

class NVM
{
    public:
#ifdef LIBREUCPP_ATSAMC
        typedef struct  {
            unsigned ADC0_LINEARITY :3;
            unsigned ADC0_BIASCAL :3;
            unsigned ADC1_LINEARITY :3;
            unsigned ADC1_BIASCAL :3;
            unsigned OSC32K_CAL : 7;
            unsigned CAL48M_5V : 22;
            unsigned CAL48M_3V3 : 22;
            unsigned  :1;
        } CALIBRATION_AREA_T;

        static constexpr unsigned CALIBRATION_AREA_ADDR { 0x806020 };
#endif

        static ALWAYS_INLINE void SetWaitstates(unsigned waitstates)
        {
            NVMCTRL().CTRLB.bit.RWS = waitstates;
        }

    private:
        static ALWAYS_INLINE Peripherals::NVMCTRL_T& NVMCTRL()
        { 
            return *reinterpret_cast<Peripherals::NVMCTRL_T*>(Peripherals::NVMCTRL_T::BASE_ADDRESS);
        }

};

} // namespace HAL
} // namespace LibreUCpp
