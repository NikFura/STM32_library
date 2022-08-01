/*
 * 4x7led.h
 *
 *  Created on: Apr 1, 2022
 *      Author: Gold_Nik
 */

#ifndef USER_4X7LED_H_
#define USER_4X7LED_H_

#include "main.h"
#include "gpio.h"

#define X0_L  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
#define X0_H  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);

#define X1_L  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
#define X1_H  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);

#define X2_L  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);
#define X2_H  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);

#define X3_L  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);
#define X3_H  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);

#define Y0_L  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_RESET);
#define Y0_H  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET);

#define Y1_L  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_RESET);
#define Y1_H  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, GPIO_PIN_SET);

#define Y2_L  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
#define Y2_H  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET);

void chislo(uint8_t i); // функция отображения числа
void razrid(uint8_t a); // управление разрядами чисел
void RezrdCislo(unsigned long int razridP); // разбиения числа на разряды и вывод на индикатор

#endif /* USER_4X7LED_H_ */
