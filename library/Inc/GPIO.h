/**
 * @file    GPIO.h
 * @brief   Base Direct Register Access to Control GPIO Pins for STM32
 * @author  Mertcan NANE
 * @date    2025-08-09
 * @version 1.0
 *
 * @contact
 *  https://github.com/mnane34
 *  https://www.youtube.com/@mnane34
 *  https://www.linkedin.com/in/mertcan-nane/
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

/* Header Directives Definitions */
#include "main.h"
#include "TIME.h"

/* GPIO Pin State Definitions */
typedef enum
{
  logicLow = 0,
  logicHigh = 1
}GPIO_pinState_t;

/* GPIO Direct Register Access Functions */
void GPIO_SET_PIN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_RESET_PIN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_TOGGLE_PIN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_WRITE_PIN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_pinState_t state);
GPIO_pinState_t GPIO_READ_PIN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif
