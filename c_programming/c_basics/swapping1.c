#include<stdio.h>
#include<stdlib.h>

int main(void){

	float x, y, temp;

	printf("Enter value of x: ");
	fflush(stdin);	fflush(stdout);
	      scanf("%f",&x);
	      printf("Enter value of y: ");
	  	fflush(stdin);	fflush(stdout);

	      scanf("%f",&y);
	      temp = x;
	      x = y;
	      y = temp;

	      printf("\nAfter swapping, value of x = %.2f\n", x);
	      printf("After swapping, value of y = %.2f", y);

}
