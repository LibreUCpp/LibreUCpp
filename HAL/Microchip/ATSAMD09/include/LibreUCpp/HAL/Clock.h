#pragma once

#include <LibreUCpp/HAL/PM.h>

namespace LibreUCpp { 
namespace HAL {

class Clock
{
    public:
        void Configure48MHzFromOSC8M();

        ALWAYS_INLINE unsigned CalcAHBFrequency() const
        {
            return PM::CalcCpuFrequency(_xosc32kFrequency, _xoscFrequency);
        } 
        
        ALWAYS_INLINE unsigned CalcSystickBaseFrequency() const
        {
            return CalcAHBFrequency();
        }

        unsigned GetXoscFrequency() const
        {
            return _xoscFrequency;
        }

        unsigned GetXosc32kFrequency() const
        {
            return _xoscFrequency;
        }
        
    private:
        static constexpr unsigned NVM_CALIBRATION_ROW_ADDR { 0x806020 };
        static constexpr unsigned NVM_CALIBRATION_DFLL_BYTE_OFFSET { 4 };
        static constexpr unsigned NVM_CALIBRATION_DFLL_BIT_OFFSET { 58 - (8*NVM_CALIBRATION_DFLL_BYTE_OFFSET) };
        static constexpr unsigned NVM_CALIBRATION_DFLL_BIT_SIZE { 6 };
        static constexpr unsigned NVM_CALIBRATION_DFLL_BIT_MASK { (2 << (NVM_CALIBRATION_DFLL_BIT_SIZE-1)) - 1 };

        static constexpr unsigned XOSC_DEFAULT_FREQUENCY { 16000000u };
        static constexpr unsigned XOSC32K_DEFAULT_FREQUENCY { 32768u };
        unsigned _xoscFrequency { XOSC_DEFAULT_FREQUENCY };
        unsigned _xosc32kFrequency { XOSC32K_DEFAULT_FREQUENCY };

        unsigned ReadDfllCoarseCalibrationValue();
};

} // namespace HAL
} // namespace LibreUCpp
