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

    void WWDG_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void PVD_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void RTC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void FLASH_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void RCC_CRS_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI0_1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI2_3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI4_15_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TSC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA_CH1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA_CH2_3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA_CH4_5_6_7_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void ADC_COMP_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM1_BRK_UP_TRG_COM_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM1_CC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM14_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM16_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM17_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void I2C1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SPI1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SPI2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void USART1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void USART2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CEC_CAN_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void USB_Handler() __attribute__ ((weak, alias("Default_Handler")));

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

extern const pFunc InterruptVectorTable[48];
const pFunc InterruptVectorTable[48] __attribute__((used, section(".vectors"))) {
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

    WWDG_Handler, // int 0: WWDG
    PVD_Handler, // int 1: PVD
    RTC_Handler, // int 2: RTC
    FLASH_Handler, // int 3: FLASH
    RCC_CRS_Handler, // int 4: RCC_CRS
    EXTI0_1_Handler, // int 5: EXTI0_1
    EXTI2_3_Handler, // int 6: EXTI2_3
    EXTI4_15_Handler, // int 7: EXTI4_15
    TSC_Handler, // int 8: TSC
    DMA_CH1_Handler, // int 9: DMA_CH1
    DMA_CH2_3_Handler, // int 10: DMA_CH2_3
    DMA_CH4_5_6_7_Handler, // int 11: DMA_CH4_5_6_7
    ADC_COMP_Handler, // int 12: ADC_COMP
    TIM1_BRK_UP_TRG_COM_Handler, // int 13: TIM1_BRK_UP_TRG_COM
    TIM1_CC_Handler, // int 14: TIM1_CC
    TIM2_Handler, // int 15: TIM2
    TIM3_Handler, // int 16: TIM3
    0, // int 17: reserved
    0, // int 18: reserved
    TIM14_Handler, // int 19: TIM14
    0, // int 20: reserved
    TIM16_Handler, // int 21: TIM16
    TIM17_Handler, // int 22: TIM17
    I2C1_Handler, // int 23: I2C1
    0, // int 24: reserved
    SPI1_Handler, // int 25: SPI1
    SPI2_Handler, // int 26: SPI2
    USART1_Handler, // int 27: USART1
    USART2_Handler, // int 28: USART2
    0, // int 29: reserved
    CEC_CAN_Handler, // int 30: CEC_CAN
    USB_Handler, // int 31: USB
};