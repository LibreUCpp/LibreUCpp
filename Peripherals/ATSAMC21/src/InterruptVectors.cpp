#include <stdint.h>
#include <stddef.h>

extern "C" {
    typedef void(*pFunc)();

    void Reset_Handler() __attribute__((noreturn));
    void Default_Handler() __attribute__((noreturn));
    
    void NMI_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void HardFault_Handler() __attribute__ ((weak));
    void SVC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void PendSV_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SysTick_Handler() __attribute__ ((weak, alias("Default_Handler")));

    void WDT_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void RTC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EIC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void FREQM_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TSENS_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void NVMCTRL_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMAC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EVSYS_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SERCOM2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SERCOM3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SERCOM4_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SERCOM5_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TCC0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TCC1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TCC2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TC3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TC4_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void ADC0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void ADC1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void AC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DAC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SDADC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void PTC_Handler() __attribute__ ((weak, alias("Default_Handler")));

    void HardFault_Handler()
    {
        while (true)
        {
        }
    }

    void Default_Handler()
    {
        while (true)
        {
        }
    }
} // extern 


extern uint32_t __StackTop;

extern const pFunc InterruptVectorTable[47];
const pFunc InterruptVectorTable[47] __attribute__((used, section(".vectors"))) {
    (pFunc)(&__StackTop), // initial stack pointer
    Reset_Handler, // reset handler
    NMI_Handler, // -14: NMI
    HardFault_Handler, // -13: HardFault
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SVC_Handler, // -5: SVCall
    0,
    0,
    PendSV_Handler, // -2: PendSV
    SysTick_Handler, // -1: SysTick

    0, // int 0: reserved
    WDT_Handler, // int 1: WDT
    RTC_Handler, // int 2: RTC
    EIC_Handler, // int 3: EIC
    FREQM_Handler, // int 4: FREQM
    TSENS_Handler, // int 5: TSENS
    NVMCTRL_Handler, // int 6: NVMCTRL
    DMAC_Handler, // int 7: DMAC
    EVSYS_Handler, // int 8: EVSYS
    0, // int 9: reserved
    0, // int 10: reserved
    SERCOM2_Handler, // int 11: SERCOM2
    SERCOM3_Handler, // int 12: SERCOM3
    SERCOM4_Handler, // int 13: SERCOM4
    SERCOM5_Handler, // int 14: SERCOM5
    CAN0_Handler, // int 15: CAN0
    CAN1_Handler, // int 16: CAN1
    TCC0_Handler, // int 17: TCC0
    TCC1_Handler, // int 18: TCC1
    TCC2_Handler, // int 19: TCC2
    0, // int 20: reserved
    0, // int 21: reserved
    0, // int 22: reserved
    TC3_Handler, // int 23: TC3
    TC4_Handler, // int 24: TC4
    ADC0_Handler, // int 25: ADC0
    ADC1_Handler, // int 26: ADC1
    AC_Handler, // int 27: AC
    DAC_Handler, // int 28: DAC
    SDADC_Handler, // int 29: SDADC
    PTC_Handler, // int 30: PTC
};