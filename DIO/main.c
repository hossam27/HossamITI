/*
 * main.c
 *
 *  Created on: Jan 31, 2016
 *      Author: 7ossam
 */

/*******************************************/
/******************test*********************/
/*******************************************/
#include "Types.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include <stdio.h>

u8 PORT0 = 0;
u8 PORT1 = 0;
u8 PORT2 = 0;
u8 PORT3 = 0;
u8 DDR0 = 0b10101010;
u8 DDR1 = 0b11111111;
u8 DDR2 = 0b00000000;
u8 DDR3 = 0b01010101;
u8 PIN0 = 0b10101010;
u8 PIN1 = 0b11111111;
u8 PIN2 = 0b00000000;
u8 PIN3 = 0b01010101;

int main(void) {
		u8 temp;
		u8 val;
		for (u8 i = 0; i < 4; i++) {
			val = DIO_u8WritePortDir(i, 5);
			//DIO_u8WritePinVal(i,1);
			val = DIO_u8ReadPinVal(i, &temp);
			printf("state = %d val = %d \n", val, temp);
		}
		printf("DDRA= %d \n", DDR0);
		printf("DDRB= %d \n", DDR1);
		printf("DDRC= %d \n", DDR2);
		printf("DDRD= %d \n", DDR3);
		return 0;
}

