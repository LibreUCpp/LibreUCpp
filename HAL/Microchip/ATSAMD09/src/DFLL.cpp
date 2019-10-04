#include <LibreUCpp/HAL/DFLL.h>
#include <LibreUCpp/HAL/GCLK.h>

using namespace LibreUCpp::HAL;

unsigned DFLL::GetReferenceClockFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
{
    auto generator = GCLK::GetGenerator(GCLK::PERIPHERAL_CHANNEL::GCLK_DFLL48M_REF);
    return GCLK::CalcFrequency(generator, xosc32kFrequency, xoscFrequency);
}

