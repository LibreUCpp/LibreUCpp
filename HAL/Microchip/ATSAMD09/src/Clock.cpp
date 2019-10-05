#include <LibreUCpp/HAL/Clock.h>
#include <LibreUCpp/HAL/NVM.h>
#include <LibreUCpp/HAL/GCLK.h>
#include <LibreUCpp/HAL/OSC8M.h>
#include <LibreUCpp/HAL/DFLL.h>

using namespace LibreUCpp::HAL;

void Clock::Configure48MHzFromOSC8M()
{
    NVM::SetWaitstates(1);

    OSC8M::Configure(OSC8M::PRESCALER::DIV_8_MHZ);
    OSC8M::Enable();
    OSC8M::WaitReady();

    GCLK::ConfigureGenerator(
        GCLK::GENERATOR::Generator_1,
        GCLK::CLOCK_SOURCE::OSC8M,
        GCLK::DIV_MODE::DIV_BY_FACTOR,
        244,
        GCLK::IMPROVE_DUTY_CYCLE::ENABLE,
        GCLK::RUN_IN_STANDBY::NO,
        GCLK::ENABLE_OUTPUT::DISABLE,
        GCLK::OUTPUT_OFF_VALUE::LOW
    );
    GCLK::EnablePeripheral(GCLK::PERIPHERAL_CHANNEL::GCLK_DFLL48M_REF, GCLK::GENERATOR::Generator_1);

    DFLL::Configure(
        DFLL::WAITLOCK::DONT_WAIT, 
        DFLL::BYPASS_COARSE_LOCK::DISABLE, 
        DFLL::QUICK_LOCK::DISABLE,
        DFLL::CHILL_CYCLE::DISABLE,
        DFLL::LOSE_LOCK_AFTER_WAKE::DONT_LOSE,
        DFLL::STABLE::TRACK_DRIFT,
        DFLL::MODE::OPEN_LOOP
    );
    DFLL::Enable();

    DFLL::SetMultiplier(31, 511, 1464);
    DFLL::SetCoarseCalibrationValue(ReadDfllCoarseCalibrationValue());
    DFLL::Configure(
        DFLL::WAITLOCK::WAIT, 
        DFLL::BYPASS_COARSE_LOCK::DISABLE, 
        DFLL::QUICK_LOCK::DISABLE,
        DFLL::CHILL_CYCLE::DISABLE,
        DFLL::LOSE_LOCK_AFTER_WAKE::DONT_LOSE,
        DFLL::STABLE::TRACK_DRIFT,
        DFLL::MODE::CLOSED_LOOP
    );
    DFLL::WaitReady();

    GCLK::ConfigureGenerator(
        GCLK::GENERATOR::Generator_0,
        GCLK::CLOCK_SOURCE::DFLL48M,
        GCLK::DIV_MODE::DIV_BY_FACTOR,
        1,
        GCLK::IMPROVE_DUTY_CYCLE::ENABLE,
        GCLK::RUN_IN_STANDBY::NO,
        GCLK::ENABLE_OUTPUT::DISABLE,
        GCLK::OUTPUT_OFF_VALUE::LOW
    );

    PM::SetCPUPrescaler(PM::PRESCALER::DIV_BY_1);
    PM::SetAPBAPrescaler(PM::PRESCALER::DIV_BY_1);
    PM::SetAPBBPrescaler(PM::PRESCALER::DIV_BY_1);
    PM::SetAPBCPrescaler(PM::PRESCALER::DIV_BY_1);
}

unsigned Clock::ReadDfllCoarseCalibrationValue()
{
    uint32_t val = *reinterpret_cast<uint32_t*>(NVM_CALIBRATION_ROW_ADDR + NVM_CALIBRATION_DFLL_BYTE_OFFSET);
    return (val >> NVM_CALIBRATION_DFLL_BIT_OFFSET) & NVM_CALIBRATION_DFLL_BIT_MASK;
}
