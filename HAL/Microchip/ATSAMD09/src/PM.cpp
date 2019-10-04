#include <LibreUCpp/HAL/PM.h>
#include <LibreUCpp/HAL/GCLK.h>

using namespace LibreUCpp::HAL;

unsigned PM::CalcCpuFrequency(unsigned xosc32kFrequency, unsigned xoscFrequency)
{
    unsigned inputFrequency = GCLK::CalcFrequency(GCLK::GENERATOR::Generator_0, xosc32kFrequency, xoscFrequency);
    return inputFrequency >> GetPeriph().CPUSEL.bit.CPUDIV;
}
