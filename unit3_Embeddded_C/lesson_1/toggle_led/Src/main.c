#include "stdint.h"

typedef volatile unsigned int vuint_32;

#define RCC_Base 		0x40021000
#define GPIOA_Base      0x40010800

#define APB2ENR			*(volatile uint32_t*)(RCC_Base + 0x18)
#define GPIOA_CRH		*(volatile uint32_t*)(GPIOA_Base + 0x04)
#define GPIOA_ODR		*(volatile uint32_t*)(GPIOA_Base + 0x0C)

#define IOPAEN			(1<<2)
#define PIN13			(1<<13)

typedef union
{
	vuint_32 all_PINs;
	struct
	{
		vuint_32 PINA00 :1;
		vuint_32 PINA01 :1;
		vuint_32 PINA02 :1;
		vuint_32 PINA03 :1;
		vuint_32 PINA04 :1;
		vuint_32 PINA05 :1;
		vuint_32 PINA06 :1;
		vuint_32 PINA07 :1;
		vuint_32 PINA08 :1;
		vuint_32 PINA09 :1;
		vuint_32 PINA10 :1;
		vuint_32 PINA11 :1;
		vuint_32 PINA12 :1;
		vuint_32 PINA13 :1;
		vuint_32 PINA14 :1;
		vuint_32 PINA15 :1;

	}PINA;

}R_ODR_t;

volatile R_ODR_t* ODR_Ptr = (volatile R_ODR_t*)(GPIOA_Base + 0x0C);



int main()
{
	int x;
	APB2ENR |= IOPAEN;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;

	// First method

	/*while(1)
	{
		GPIOA_ODR |= PIN13 ;
		for(x = 0 ; x < 5000 ; x++);

		GPIOA_ODR &= ~PIN13 ;
		for(x = 0 ; x < 5000 ; x++);
	}*/

	// Second method

	while(1)
	{
		ODR_Ptr->PINA.PINA13 = 1;
		for(x = 0 ; x < 5000 ; x++);

		ODR_Ptr->PINA.PINA13 = 0;
		for(x = 0 ; x < 5000 ; x++);
	}

	return 0;
}
