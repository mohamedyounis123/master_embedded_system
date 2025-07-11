#include "uart.h"

unsigned char string_buffer1[100] = "learn-in-depth:Mohamed Younis";
unsigned const char string_buffer2[100] = "learn-in-depth:Mohamed Younis";

void main(void)
{
	Uart_Send_String(string_buffer1);
}