/**
  ******************************************************************************
  * @file    stm324x9i_eval.h
  * @author  MCD Application Team
  * @brief   This file contains definitions for STM324x9I_EVAL's LEDs, 
  *          push-buttons and COM ports hardware resources.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM324X9I_EVAL_H
#define __STM324X9I_EVAL_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
   
/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM324x9I_EVAL
  * @{
  */
      
/** @addtogroup STM324x9I_EVAL_LOW_LEVEL
  * @{
  */ 

/** @defgroup STM324x9I_EVAL_LOW_LEVEL_Exported_Types STM324x9I EVAL LOW LEVEL Exported Types
  * @{
  */
typedef enum 
{
  LED1 = 0,
  LED2 = 1,
  LED3 = 2,
  LED4 = 3
}Led_TypeDef;

typedef enum 
{  
  BUTTON_WAKEUP = 0,
  BUTTON_TAMPER = 1,
  BUTTON_KEY = 2
}Button_TypeDef;

typedef enum 
{  
  BUTTON_MODE_GPIO = 0,
  BUTTON_MODE_EXTI = 1
}ButtonMode_TypeDef;

typedef enum 
{  
  JOY_MODE_GPIO = 0,
  JOY_MODE_EXTI = 1
}JOYMode_TypeDef;

typedef enum 
{ 
  JOY_NONE  = 0,
  JOY_SEL   = 1,
  JOY_DOWN  = 2,
  JOY_LEFT  = 3,
  JOY_RIGHT = 4,
  JOY_UP    = 5
}JOYState_TypeDef;

typedef enum 
{
  COM1 = 0,
  COM2 = 1
}COM_TypeDef;
/**
  * @}
  */ 

/** @defgroup STM324x9I_EVAL_LOW_LEVEL_Exported_Constants STM324x9I EVAL LOW LEVEL Exported Constants
  * @{
  */ 

/** 
  * @brief  Define for STM324x9I_EVAL board  
  */ 
#if !defined (USE_STM324x9I_EVAL)
 #define USE_STM324x9I_EVAL
#endif

#define LEDn                             4

#define LED1_PIN                         GPIO_PIN_6
#define LED1_GPIO_PORT                   GPIOG
#define LED1_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOG_CLK_ENABLE()  
#define LED1_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOG_CLK_DISABLE()  
    
    
#define LED2_PIN                         GPIO_PIN_7
#define LED2_GPIO_PORT                   GPIOG
#define LED2_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOG_CLK_ENABLE()   
#define LED2_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOG_CLK_DISABLE()  
  
#define LED3_PIN                         GPIO_PIN_10
#define LED3_GPIO_PORT                   GPIOG
#define LED3_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOG_CLK_ENABLE()   
#define LED3_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOG_CLK_DISABLE()  
  
#define LED4_PIN                         GPIO_PIN_12
#define LED4_GPIO_PORT                   GPIOG
#define LED4_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOG_CLK_ENABLE()   
#define LED4_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOG_CLK_DISABLE()  
    
#define LEDx_GPIO_CLK_ENABLE(__INDEX__)  do{if((__INDEX__) == 0) LED1_GPIO_CLK_ENABLE(); else \
                                            if((__INDEX__) == 1) LED2_GPIO_CLK_ENABLE(); else \
                                            if((__INDEX__) == 2) LED3_GPIO_CLK_ENABLE(); else \
                                            if((__INDEX__) == 3) LED4_GPIO_CLK_ENABLE(); \
                                            }while(0)

#define LEDx_GPIO_CLK_DISABLE(__INDEX__)  do{if((__INDEX__) == 0) LED1_GPIO_CLK_DISABLE(); else \
                                             if((__INDEX__) == 1) LED2_GPIO_CLK_DISABLE(); else \
                                             if((__INDEX__) == 2) LED3_GPIO_CLK_DISABLE(); else \
                                             if((__INDEX__) == 3) LED4_GPIO_CLK_DISABLE(); \
                                             }while(0)

/* Joystick pins are connected to IO Expander (accessible through I2C1 interface) */ 
#define BUTTONn                             3 

/**
  * @brief Joystick Pins definition 
  */ 
#define JOY_SEL_PIN                    IO_PIN_14
#define JOY_DOWN_PIN                   IO_PIN_13
#define JOY_LEFT_PIN                   IO_PIN_12
#define JOY_RIGHT_PIN                  IO_PIN_11
#define JOY_UP_PIN                     IO_PIN_10
#define JOY_NONE_PIN                   JOY_ALL_PINS
#define JOY_ALL_PINS                   (IO_PIN_10 | IO_PIN_11 | IO_PIN_12 | IO_PIN_13 | IO_PIN_14)

/**
  * @brief Wakeup push-button
  */
#define WAKEUP_BUTTON_PIN                   GPIO_PIN_0
#define WAKEUP_BUTTON_GPIO_PORT             GPIOA
#define WAKEUP_BUTTON_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE()  
#define WAKEUP_BUTTON_GPIO_CLK_DISABLE()    __HAL_RCC_GPIOA_CLK_DISABLE()
#define WAKEUP_BUTTON_EXTI_IRQn             EXTI0_IRQn 

/**
  * @brief Tamper push-button
  */
#define TAMPER_BUTTON_PIN                    GPIO_PIN_13
#define TAMPER_BUTTON_GPIO_PORT              GPIOC
#define TAMPER_BUTTON_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOC_CLK_ENABLE()  
#define TAMPER_BUTTON_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOC_CLK_DISABLE()
#define TAMPER_BUTTON_EXTI_IRQn              EXTI15_10_IRQn

/**
  * @brief Key push-button
  */
#define KEY_BUTTON_PIN                       GPIO_PIN_13
#define KEY_BUTTON_GPIO_PORT                 GPIOC
#define KEY_BUTTON_GPIO_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()  
#define KEY_BUTTON_GPIO_CLK_DISABLE()        __HAL_RCC_GPIOC_CLK_DISABLE()
#define KEY_BUTTON_EXTI_IRQn                 EXTI15_10_IRQn

#define BUTTONx_GPIO_CLK_ENABLE(__INDEX__)  do{if((__INDEX__) == 0) WAKEUP_BUTTON_GPIO_CLK_ENABLE(); else \
                                               if((__INDEX__) == 1) TAMPER_BUTTON_GPIO_CLK_ENABLE(); else \
                                               if ((__INDEX__) == 2) KEY_BUTTON_GPIO_CLK_ENABLE(); \
                                               }while(0)
#define BUTTONx_GPIO_CLK_DISABLE(__INDEX__) do{if((__INDEX__) == 0) WAKEUP_BUTTON_GPIO_CLK_DISABLE(); else \
                                               if((__INDEX__) == 1) TAMPER_BUTTON_GPIO_CLK_DISABLE(); else \
                                               if ((__INDEX__) == 2) KEY_BUTTON_GPIO_CLK_DISABLE(); \
                                               }while(0)

#define COMn                             1

/**
 * @brief Definition for COM port1, connected to USART1
 */ 
#define EVAL_COM1                          USART1
#define EVAL_COM1_CLK_ENABLE()             __HAL_RCC_USART1_CLK_ENABLE()   
#define EVAL_COM1_CLK_DISABLE()            __HAL_RCC_USART1_CLK_DISABLE()

#define EVAL_COM1_TX_PIN                   GPIO_PIN_9
#define EVAL_COM1_TX_GPIO_PORT             GPIOA
#define EVAL_COM1_TX_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE()   
#define EVAL_COM1_TX_GPIO_CLK_DISABLE()    __HAL_RCC_GPIOA_CLK_DISABLE()  
#define EVAL_COM1_TX_AF                    GPIO_AF7_USART1

#define EVAL_COM1_RX_PIN                   GPIO_PIN_10
#define EVAL_COM1_RX_GPIO_PORT             GPIOA
#define EVAL_COM1_RX_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE()   
#define EVAL_COM1_RX_GPIO_CLK_DISABLE()    __HAL_RCC_GPIOA_CLK_DISABLE()  
#define EVAL_COM1_RX_AF                    GPIO_AF7_USART1

#define EVAL_COM1_IRQn                     USART1_IRQn

#define EVAL_COMx_CLK_ENABLE(__INDEX__)              do{if((__INDEX__) == 0) EVAL_COM1_CLK_ENABLE(); \
                                                       }while(0)
#define EVAL_COMx_CLK_DISABLE(__INDEX__)             do{if((__INDEX__) == 0) EVAL_COM1_CLK_DISABLE(); \
                                                       }while(0)

#define EVAL_COMx_TX_GPIO_CLK_ENABLE(__INDEX__)      do{if((__INDEX__) == 0) EVAL_COM1_TX_GPIO_CLK_ENABLE(); \
                                                     }while(0)
#define EVAL_COMx_TX_GPIO_CLK_DISABLE(__INDEX__)     do{if((__INDEX__) == 0) EVAL_COM1_TX_GPIO_CLK_DISABLE(); \
                                                     }while(0)

#define EVAL_COMx_RX_GPIO_CLK_ENABLE(__INDEX__)      do{if((__INDEX__) == 0) EVAL_COM1_RX_GPIO_CLK_ENABLE(); \
                                                       }while(0)
#define EVAL_COMx_RX_GPIO_CLK_DISABLE(__INDEX__)     do{if((__INDEX__) == 0) EVAL_COM1_RX_GPIO_CLK_DISABLE(); \
                                                       }while(0)

/**
  * @brief Eval Pins definition 
  */
#define XSDN_PIN                       IO_PIN_0
#define MII_INT_PIN                    IO_PIN_1
#define RSTI_PIN                       IO_PIN_2
#define CAM_PLUG_PIN                   IO_PIN_3
#define LCD_INT_PIN                    IO_PIN_4
#define AUDIO_INT_PIN                  IO_PIN_5
#define OTG_FS1_OVER_CURRENT_PIN       IO_PIN_6
#define OTG_FS1_POWER_SWITCH_PIN       IO_PIN_7
#define OTG_FS2_OVER_CURRENT_PIN       IO_PIN_8
#define OTG_FS2_POWER_SWITCH_PIN       IO_PIN_9 
#define SD_DETECT_PIN                  IO_PIN_15

/* Exported constant IO ------------------------------------------------------*/
#define IO_I2C_ADDRESS                   0x84 
#define TS_I2C_ADDRESS                   0x82
#define TS3510_I2C_ADDRESS               0x80
#define EXC7200_I2C_ADDRESS              0x08                                                         
#define CAMERA_I2C_ADDRESS               0x60
#define AUDIO_I2C_ADDRESS                0x34
#define EEPROM_I2C_ADDRESS_A01           0xA0
#define EEPROM_I2C_ADDRESS_A02           0xA6  
/* I2C clock speed configuration (in Hz) 
   WARNING: 
   Make sure that this define is not already declared in other files (ie. 
   stm324x9I_eval.h file). It can be used in parallel by other modules. */
#ifndef BSP_I2C_SPEED
 #define BSP_I2C_SPEED                        100000
#endif /* BSP_I2C_SPEED */

/* User can use this section to tailor I2Cx/I2Cx instance used and associated 
   resources */
/* Definition for I2Cx clock resources */
#define EVAL_I2Cx                             I2C1
#define EVAL_I2Cx_CLK_ENABLE()                __HAL_RCC_I2C1_CLK_ENABLE()
#define EVAL_DMAx_CLK_ENABLE()                __HAL_RCC_DMA1_CLK_ENABLE()
#define EVAL_I2Cx_SCL_SDA_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOB_CLK_ENABLE()

#define EVAL_I2Cx_FORCE_RESET()               __HAL_RCC_I2C1_FORCE_RESET()
#define EVAL_I2Cx_RELEASE_RESET()             __HAL_RCC_I2C1_RELEASE_RESET()
   
/* Definition for I2Cx Pins */
#define EVAL_I2Cx_SCL_PIN                     GPIO_PIN_6
#define EVAL_I2Cx_SCL_SDA_GPIO_PORT           GPIOB
#define EVAL_I2Cx_SCL_SDA_AF                  GPIO_AF4_I2C1
#define EVAL_I2Cx_SDA_PIN                     GPIO_PIN_9

/* I2C interrupt requests */
#define EVAL_I2Cx_EV_IRQn                     I2C1_EV_IRQn
#define EVAL_I2Cx_ER_IRQn                     I2C1_ER_IRQn

/**
  * @}
  */ 

/** @defgroup STM324x9I_EVAL_LOW_LEVEL_Exported_Functions STM324x9I EVAL LOW LEVEL Exported Functions
  * @{
  */
uint32_t         BSP_GetVersion(void);  
void             BSP_LED_Init(Led_TypeDef Led);
void             BSP_LED_On(Led_TypeDef Led);
void             BSP_LED_Off(Led_TypeDef Led);
void             BSP_LED_Toggle(Led_TypeDef Led);
void             BSP_PB_Init(Button_TypeDef Button, ButtonMode_TypeDef Button_Mode);
uint32_t         BSP_PB_GetState(Button_TypeDef Button);
void             BSP_COM_Init(COM_TypeDef COM, UART_HandleTypeDef *husart);
uint8_t          BSP_JOY_Init(JOYMode_TypeDef Joy_Mode);
JOYState_TypeDef BSP_JOY_GetState(void);
uint8_t          BSP_TS3510_IsDetected(void);

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */ 

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM324X9I_EVAL_H */
