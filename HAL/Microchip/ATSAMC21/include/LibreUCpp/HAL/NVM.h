#pragma once

#include <LibreUCpp/Compiler.h>
#include <LibreUCpp/Peripherals/NVMCTRL.h>

namespace LibreUCpp {
namespace HAL {

class NVM
{
    public:
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
