/*
 * 7led.c
 *
 *  Created on: Apr 1, 2022
 *      Author: Gold_Nik
 */
#include <4x7led.h>

uint8_t raz1 = 0,raz2 = 0,raz3 = 0, raz4 = 0 , raz5 = 0 , raz6 = 0;

void chislo(uint8_t i)
{
	switch(i)
	{
	case 0:
		X0_L;
		X1_L;
		X2_L;
		X3_L;
		break;
	case 1:
		X0_H;
		X1_L;
		X2_L;
		X3_L;
		break;
	case 2:
		X0_L;
		X1_H;
		X2_L;
		X3_L;
		break;
	case 3:
		X0_H;
		X1_H;
		X2_L;
		X3_L;
		break;
	case 4:
		X0_L;
		X1_L;
		X2_H;
		X3_L;
		break;
	case 5:
		X0_H;
		X1_L;
		X2_H;
		X3_L;
		break;
	case 6:
		X0_L;
		X1_H;
		X2_H;
		X3_L;
		break;
	case 7:
		X0_H;
		X1_H;
		X2_H;
		X3_L;
		break;
	case 8:
		X0_L;
		X1_L;
		X2_L;
		X3_H;
		break;
	case 9:
		X0_H;
		X1_L;
		X2_L;
		X3_H;
		break;
	case 10:
		X0_L;
		X1_H;
		X2_L;
		X3_H;
		break;
	case 11:
		X0_H;
		X1_H;
		X2_L;
		X3_H;
		break;
	case 12:
		X0_L;
		X1_L;
		X2_H;
		X3_H;
		break;
	case 13:
		X0_H;
		X1_L;
		X2_H;
		X3_H;
		break;
	case 14:
		X0_L;
		X1_H;
		X2_H;
		X3_H;
		break;
	case 15:
		X0_H;
		X1_H;
		X2_H;
		X3_H;
		break;
	}
}

void RezrdCislo(unsigned long int razridP)
{
	//razrad4
	/*
	raz1 = razridP%10;
	raz2 = razridP%100/10;
	raz3 = razridP%1000/100;
	raz4 = razridP/1000;
	*/
	//razrad6
	raz1 = razridP/100000;
	raz2 = razridP%100000/10000;
	raz3 = razridP%10000/1000;
	raz4 = razridP%1000/100;
	raz5 = razridP%100/10;
	raz6 = razridP%10;

}
void razrid(uint8_t a)
{
	switch(a)
	{
	case 0:
		Y0_L;
		Y1_L;
		Y2_L;
		chislo(raz1);
	break;

	case 1:
		Y0_H;
		Y1_L;
		Y2_L;
		chislo(raz2);
	break;

	case 2:
		Y0_L;
		Y1_H;
		Y2_L;
		chislo(raz3);
	break;

	case 3:
		Y0_H;
		Y1_H;
		Y2_L;
		chislo(raz4);
	break;

	case 4:
		Y0_L;
		Y1_L;
		Y2_H;
		chislo(raz5);
	break;

	case 5:
		Y0_H;
		Y1_L;
		Y2_H;
		chislo(raz6);
	break;
	}

}

