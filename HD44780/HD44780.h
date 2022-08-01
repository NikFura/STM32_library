/*
 * HD44780.h
 *
 *  Created on: Feb 13, 2021
 *      Author: Gold_Nik
 */

#ifndef INC_HD44780_H_
#define INC_HD44780_H_

#include "gpio.h"

#define d4_set() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET)
#define d5_set() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET)
#define d6_set() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET)
#define d7_set() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET)

#define d4_reset() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET)
#define d5_reset() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET)
#define d6_reset() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET)
#define d7_reset() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET)

#define rs1   HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET) // установка линии RS в 1 (данные)
#define rs0   HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET) // установка линии RS в 0 (команда)

#define e1    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET) // установка линии E в 1
#define e0    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET) // установка линии E в 0

void LCD_ini(void);
void LCD_WriteData(uint8_t);
void LCD_Command(uint8_t);
void LCD_Clear(void);
void LCD_Char(char);


#endif /* INC_HD44780_H_ */
