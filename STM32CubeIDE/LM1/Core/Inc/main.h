/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define First_Stage_ADC_Pin GPIO_PIN_0
#define First_Stage_ADC_GPIO_Port GPIOA
#define Second_Stage_ADC_Pin GPIO_PIN_6
#define Second_Stage_ADC_GPIO_Port GPIOA
#define VM_ADC_Pin GPIO_PIN_0
#define VM_ADC_GPIO_Port GPIOB
#define Hall_effect_Pin GPIO_PIN_11
#define Hall_effect_GPIO_Port GPIOB
#define Motor_Current_Sensing_Pin GPIO_PIN_12
#define Motor_Current_Sensing_GPIO_Port GPIOB
#define SPI_nCS_Pin GPIO_PIN_13
#define SPI_nCS_GPIO_Port GPIOB
#define Motor_nSleep_Pin GPIO_PIN_10
#define Motor_nSleep_GPIO_Port GPIOA
#define Motor_Direction_Pin GPIO_PIN_11
#define Motor_Direction_GPIO_Port GPIOA
#define Motor_PWM_Pin GPIO_PIN_12
#define Motor_PWM_GPIO_Port GPIOA
#define Motor_Drvoff_Pin GPIO_PIN_15
#define Motor_Drvoff_GPIO_Port GPIOA
#define Motor_nFault_Pin GPIO_PIN_3
#define Motor_nFault_GPIO_Port GPIOB
#define neopixel_Pin GPIO_PIN_4
#define neopixel_GPIO_Port GPIOB
#define shift_out_Pin GPIO_PIN_6
#define shift_out_GPIO_Port GPIOB
#define shift_in_Pin GPIO_PIN_9
#define shift_in_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
