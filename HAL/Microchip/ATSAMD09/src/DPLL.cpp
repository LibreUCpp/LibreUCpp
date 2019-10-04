#include <LibreUCpp/HAL/DPLL.h>
#include <LibreUCpp/HAL/GCLK.h>

using namespace LibreUCpp::HAL;

unsigned DPLL::GetReferenceClockFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
{
    switch (static_cast<REFCLK>(GetPeriph().DPLLCTRLB.bit.REFCLK))
    {
        case REFCLK::XOSC32K:
            return xosc32kFrequency;
        case REFCLK::XOSC:
            return xoscFrequency / (2u*(GetPeriph().DPLLCTRLB.bit.DIV + 1u));
        case REFCLK::GCLK:
            return GCLK::CalcFrequency(GCLK::GENERATOR::Generator_1, xoscFrequency, xoscFrequency);
        default:
            abort();
    }
}
