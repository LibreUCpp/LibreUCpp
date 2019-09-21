#include <LibreUCpp/HAL/MCLK.h>
#include <LibreUCpp/HAL/GCLK.h>

using namespace LibreUCpp::HAL;

unsigned MCLK::CalcCpuFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
{
    unsigned inputFrequency = GCLK::CalcFrequency(GCLK::GENERATOR::Generator_0, xosc32kFrequency, xoscFrequency);
    return inputFrequency / Periph().CPUDIV.reg;
}

