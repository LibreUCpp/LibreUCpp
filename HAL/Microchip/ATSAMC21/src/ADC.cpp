#include <stdlib.h>
#include <LibreUCpp/HAL/ADC.h>
#include <LibreUCpp/HAL/NVM.h>
#include <LibreUCpp/HAL/BusClockManager.h>

using namespace LibreUCpp::HAL;

void ADC::Setup(INSTANCE instance, GCLK::GENERATOR generator, PRESCALER prescaler, REFSEL refsel, RESOLUTION resolution, DIFFMODE diffmode, ACCUMULATION accumulation)
{
    BusClockManager::Peripheral clock;
    GCLK::PERIPHERAL_CHANNEL pch;

    auto cal_area = reinterpret_cast<NVM::CALIBRATION_AREA_T*>(NVM::CALIBRATION_AREA_ADDR);
    unsigned linearity;
    unsigned biascal;

    switch (instance)
    {
        case INSTANCE::ADC0:
            _addr = ADC_T::BASE_ADDRESS_ADC0;
            clock = BusClockManager::Peripheral::ADC0;
            pch = GCLK::PERIPHERAL_CHANNEL::ADC0;
            linearity = cal_area->ADC0_LINEARITY;
            biascal = cal_area->ADC0_BIASCAL;
            break;
        case INSTANCE::ADC1:
            _addr = ADC_T::BASE_ADDRESS_ADC1;
            clock = BusClockManager::Peripheral::ADC1;
            pch = GCLK::PERIPHERAL_CHANNEL::ADC1;
            linearity = cal_area->ADC1_LINEARITY;
            biascal = cal_area->ADC1_BIASCAL;
            break;
        default:
            abort();
    }

    _addrIntFlag = _addr + ADC_T::ADDR_OFFSET_INTFLAG;

    BusClockManager::EnableClock(clock);
    GCLK::EnablePeripheral(pch, generator);

    Reset();
    SetCalibration(linearity, biascal);
    SetPrescaler(prescaler);
    SetReference(true, refsel);
    CTRLC()->reg = CTRLC_T::RESSEL(static_cast<unsigned>(resolution))
                 | CTRLC_T::DIFFMODE(static_cast<unsigned>(diffmode));
    while (SYNCBUSY()->bit.CTRLC);

    GetPeriph()->AVGCTRL.reg = AVGCTRL_T::SAMPLENUM(static_cast<unsigned>(accumulation)); 

    Enable();
}

void ADC::Enable()
{
    CTRLA()->bit.ENABLE = 1;
    while (SYNCBUSY()->bit.ENABLE);
}

void ADC::Disable()
{
    CTRLA()->bit.ENABLE = 0;
    while (SYNCBUSY()->bit.ENABLE);
}

void ADC::Reset()
{
    CTRLA()->bit.SWRST = 1;
    while (SYNCBUSY()->bit.SWRST);
    while (CTRLA()->bit.SWRST);
}

void ADC::SetPrescaler(PRESCALER prescaler)
{
    CTRLB()->reg = CTRLB_T::PRESCALER(static_cast<unsigned>(prescaler));
}

void ADC::SetReference(bool refcomp, REFSEL refsel)
{
    GetPeriph()->REFCTRL.reg = REFCTRL_T::REFCOMP(refcomp ? 1 : 0) | REFCTRL_T::REFSEL(static_cast<unsigned>(refsel));
}

void ADC::SetCalibration(unsigned linearity, unsigned biascal)
{
    GetPeriph()->CALIB.reg = ADC_T::CALIB_T::BIASREFBUF(linearity)
                           | ADC_T::CALIB_T::BIASCOMP(biascal);
}
