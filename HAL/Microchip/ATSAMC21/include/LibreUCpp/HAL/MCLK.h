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

    public:
        static ALWAYS_INLINE void SetCpuDivisionFactor(CPUDIV div)
        {
            Periph().CPUDIV.reg = static_cast<unsigned>(div);
        }

        static unsigned CalcCpuFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency);

    private:
        static ALWAYS_INLINE Peripherals::MCLK_T& Periph()
        { 
            return *reinterpret_cast<Peripherals::MCLK_T*>(Peripherals::MCLK_T::BASE_ADDRESS); 
        }

};

} // namespace HAL
} // namespace LibreUCpp
