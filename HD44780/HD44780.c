/*
 * HD44780.c
 *
 *  Created on: Feb 13, 2021
 *      Author: Gold_Nik
 */
#include "HD44780.h"
#include "gpio.h"

void delay(void) //фунция задержки
{
	uint16_t i;
	for(i=0;i<1000;i++)
	{

	}
}

void LCD_ini(void)//функциия иницилизации дисплея
{
	HAL_Delay(40); //ожидаем 40ms после включения питания
	rs0;

	LCD_WriteData(0x03);
	e1;
	delay();
	e0;
	HAL_Delay(1);

	LCD_WriteData(0x03);
	e1;
	delay();
	e0;
	HAL_Delay(1);

	LCD_WriteData(0x03);
	e1;
	delay();
	e0;
	HAL_Delay(1);

	LCD_Command(0x28);//настройка интерфейса под дисплей 1601
	HAL_Delay(2);
	LCD_Command(0x28);//настройка интерфейса под дисплей 1601
	HAL_Delay(2);

	/*
	LCD_Command(0x28);//режим 4 бит, 2 линии (для нашего большого дисплея это 4 линии), шрифт 5х8
	HAL_Delay(1);
	 */
	LCD_Command(0x04);//гасим дисплей
	HAL_Delay(2);

    LCD_Command(0x01);//производим стерание
    HAL_Delay(2);

    LCD_Command(0x10);//запереть сдвиг изображения курсора
    HAL_Delay(2);

    LCD_Command(0x06);
    HAL_Delay(2);

    LCD_Command(0x02);
    HAL_Delay(2);

    //LCD_Command(0x28);
    //HAL_Delay(2);

    LCD_Command(0x0C);

}

void LCD_WriteData(uint8_t dt)//функцию записи данных в память дисплея
{
 if(((dt >> 3)&0x01)==1){d7_set();}else {d7_reset();}
 if(((dt >> 2)&0x01)==1){d6_set();} else {d6_reset();}
 if(((dt >> 1)&0x01)==1) {d5_set();} else {d5_reset();}
 if((dt&0x01)==1) {d4_set();} else {d4_reset();}
}



void LCD_Command(uint8_t dt) //функция отправки команд (с начала записываем старшею тетраду потом младшею)
{
 rs0;
 LCD_WriteData(dt>>4);
 e1;
 delay();
 e0;
 LCD_WriteData(dt);
 e1;
 delay();
 e0;
}

void LCD_Data(uint8_t dt) //функция отправки данных (с начала записываем старшею тетраду потом младшею)
{
 rs1;
 LCD_WriteData(dt>>4);
 e1;
 delay();
 e0;
 LCD_WriteData(dt);
 e1;
 delay();
 e0;
}

void LCD_Clear(void)
{
	rs0;
	LCD_Command(0x01);
	HAL_Delay(2);
}

void LCD_Char(char simvol)
{
	 LCD_Data((uint8_t) simvol);
	 delay();
}

