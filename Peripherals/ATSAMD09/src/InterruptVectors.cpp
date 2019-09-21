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

    void PM_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SYSCTRL_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void WDT_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void RTC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EIC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void NVMCTRL_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMAC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EVSYS_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SERCOM0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SERCOM1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TC1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TC2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void ADC_Handler() __attribute__ ((weak, alias("Default_Handler")));

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

extern const pFunc InterruptVectorTable[32];
const pFunc InterruptVectorTable[32] __attribute__((used, section(".vectors"))) {
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

    PM_Handler, // int 0: PM
    SYSCTRL_Handler, // int 1: SYSCTRL
    WDT_Handler, // int 2: WDT
    RTC_Handler, // int 3: RTC
    EIC_Handler, // int 4: EIC
    NVMCTRL_Handler, // int 5: NVMCTRL
    DMAC_Handler, // int 6: DMAC
    0, // int 7: reserved
    EVSYS_Handler, // int 8: EVSYS
    SERCOM0_Handler, // int 9: SERCOM0
    SERCOM1_Handler, // int 10: SERCOM1
    0, // int 11: reserved
    0, // int 12: reserved
    TC1_Handler, // int 13: TC1
    TC2_Handler, // int 14: TC2
    ADC_Handler, // int 15: ADC
};