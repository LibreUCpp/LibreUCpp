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
    void TAMP_STAMP_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void RTC_WKUP_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void RCC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI4_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream4_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream5_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream6_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void ADC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN1_TX_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN1_RX0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN1_RX1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN1_SCE_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI9_5_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM1_BRK_TIM9_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM1_UP_TIM10_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM1_TRG_COM_TIM11_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM1_CC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM4_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void I2C1_EV_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void I2C1_ER_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void I2C2_EV_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void I2C2_ER_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SPI1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SPI2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void USART1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void USART2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void USART3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void EXTI15_10_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void RTC_Alarm_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void OTG_FS_WKUP_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM8_BRK_TIM12_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM8_UP_TIM13_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM8_TRG_COM_TIM14_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM8_CC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA1_Stream7_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void FSMC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SDIO_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM5_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void SPI3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void UART4_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void UART5_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM6_DAC_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void TIM7_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream2_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream3_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream4_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void ETH_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void ETH_WKUP_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN2_TX_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN2_RX0_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN2_RX1_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CAN2_SCE_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void OTG_FS_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream5_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream6_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DMA2_Stream7_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void USART6_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void I2C3_EV_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void I2C3_ER_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void OTG_HS_EP1_OUT_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void OTG_HS_EP1_IN_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void OTG_HS_WKUP_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void OTG_HS_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void DCMI_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void CRYP_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void HASH_RNG_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void FPU_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void LCD_TFT_Handler() __attribute__ ((weak, alias("Default_Handler")));
    void LCD_TFT_1_Handler() __attribute__ ((weak, alias("Default_Handler")));

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

extern const pFunc InterruptVectorTable[106];
const pFunc InterruptVectorTable[106] __attribute__((used, section(".vectors"))) {
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
    TAMP_STAMP_Handler, // int 2: TAMP_STAMP
    RTC_WKUP_Handler, // int 3: RTC_WKUP
    0, // int 4: reserved
    RCC_Handler, // int 5: RCC
    EXTI0_Handler, // int 6: EXTI0
    EXTI1_Handler, // int 7: EXTI1
    EXTI2_Handler, // int 8: EXTI2
    EXTI3_Handler, // int 9: EXTI3
    EXTI4_Handler, // int 10: EXTI4
    DMA1_Stream0_Handler, // int 11: DMA1_Stream0
    DMA1_Stream1_Handler, // int 12: DMA1_Stream1
    DMA1_Stream2_Handler, // int 13: DMA1_Stream2
    DMA1_Stream3_Handler, // int 14: DMA1_Stream3
    DMA1_Stream4_Handler, // int 15: DMA1_Stream4
    DMA1_Stream5_Handler, // int 16: DMA1_Stream5
    DMA1_Stream6_Handler, // int 17: DMA1_Stream6
    ADC_Handler, // int 18: ADC
    CAN1_TX_Handler, // int 19: CAN1_TX
    CAN1_RX0_Handler, // int 20: CAN1_RX0
    CAN1_RX1_Handler, // int 21: CAN1_RX1
    CAN1_SCE_Handler, // int 22: CAN1_SCE
    EXTI9_5_Handler, // int 23: EXTI9_5
    TIM1_BRK_TIM9_Handler, // int 24: TIM1_BRK_TIM9
    TIM1_UP_TIM10_Handler, // int 25: TIM1_UP_TIM10
    TIM1_TRG_COM_TIM11_Handler, // int 26: TIM1_TRG_COM_TIM11
    TIM1_CC_Handler, // int 27: TIM1_CC
    TIM2_Handler, // int 28: TIM2
    TIM3_Handler, // int 29: TIM3
    TIM4_Handler, // int 30: TIM4
    I2C1_EV_Handler, // int 31: I2C1_EV
    I2C1_ER_Handler, // int 32: I2C1_ER
    I2C2_EV_Handler, // int 33: I2C2_EV
    I2C2_ER_Handler, // int 34: I2C2_ER
    SPI1_Handler, // int 35: SPI1
    SPI2_Handler, // int 36: SPI2
    USART1_Handler, // int 37: USART1
    USART2_Handler, // int 38: USART2
    USART3_Handler, // int 39: USART3
    EXTI15_10_Handler, // int 40: EXTI15_10
    RTC_Alarm_Handler, // int 41: RTC_Alarm
    OTG_FS_WKUP_Handler, // int 42: OTG_FS_WKUP
    TIM8_BRK_TIM12_Handler, // int 43: TIM8_BRK_TIM12
    TIM8_UP_TIM13_Handler, // int 44: TIM8_UP_TIM13
    TIM8_TRG_COM_TIM14_Handler, // int 45: TIM8_TRG_COM_TIM14
    TIM8_CC_Handler, // int 46: TIM8_CC
    DMA1_Stream7_Handler, // int 47: DMA1_Stream7
    FSMC_Handler, // int 48: FSMC
    SDIO_Handler, // int 49: SDIO
    TIM5_Handler, // int 50: TIM5
    SPI3_Handler, // int 51: SPI3
    UART4_Handler, // int 52: UART4
    UART5_Handler, // int 53: UART5
    TIM6_DAC_Handler, // int 54: TIM6_DAC
    TIM7_Handler, // int 55: TIM7
    DMA2_Stream0_Handler, // int 56: DMA2_Stream0
    DMA2_Stream1_Handler, // int 57: DMA2_Stream1
    DMA2_Stream2_Handler, // int 58: DMA2_Stream2
    DMA2_Stream3_Handler, // int 59: DMA2_Stream3
    DMA2_Stream4_Handler, // int 60: DMA2_Stream4
    ETH_Handler, // int 61: ETH
    ETH_WKUP_Handler, // int 62: ETH_WKUP
    CAN2_TX_Handler, // int 63: CAN2_TX
    CAN2_RX0_Handler, // int 64: CAN2_RX0
    CAN2_RX1_Handler, // int 65: CAN2_RX1
    CAN2_SCE_Handler, // int 66: CAN2_SCE
    OTG_FS_Handler, // int 67: OTG_FS
    DMA2_Stream5_Handler, // int 68: DMA2_Stream5
    DMA2_Stream6_Handler, // int 69: DMA2_Stream6
    DMA2_Stream7_Handler, // int 70: DMA2_Stream7
    USART6_Handler, // int 71: USART6
    I2C3_EV_Handler, // int 72: I2C3_EV
    I2C3_ER_Handler, // int 73: I2C3_ER
    OTG_HS_EP1_OUT_Handler, // int 74: OTG_HS_EP1_OUT
    OTG_HS_EP1_IN_Handler, // int 75: OTG_HS_EP1_IN
    OTG_HS_WKUP_Handler, // int 76: OTG_HS_WKUP
    OTG_HS_Handler, // int 77: OTG_HS
    DCMI_Handler, // int 78: DCMI
    CRYP_Handler, // int 79: CRYP
    HASH_RNG_Handler, // int 80: HASH_RNG
    FPU_Handler, // int 81: FPU
    0, // int 82: reserved
    0, // int 83: reserved
    0, // int 84: reserved
    0, // int 85: reserved
    0, // int 86: reserved
    0, // int 87: reserved
    LCD_TFT_Handler, // int 88: LCD_TFT
    LCD_TFT_1_Handler, // int 89: LCD_TFT_1
};