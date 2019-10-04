#include <LibreUCpp/HAL/DPLL.h>
#include <LibreUCpp/HAL/GCLK.h>

using namespace LibreUCpp::HAL;

unsigned DPLL::GetReferenceClockFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
{
    GCLK::GENERATOR gen;

    switch (static_cast<REFCLK>(GetPeriph().DPLLCTRLB.bit.REFCLK))
    {
        case REFCLK::XOSC32K:
            return xosc32kFrequency;
        case REFCLK::XOSC:
            return xoscFrequency / (2u*(GetPeriph().DPLLCTRLB.bit.DIV + 1u));
        case REFCLK::GCLK:
            gen = GCLK::GetGenerator(GCLK::PERIPHERAL_CHANNEL::GCLK_DPLL);
            return GCLK::CalcFrequency(gen, xoscFrequency, xoscFrequency);
        default:
            abort();
    }
}
