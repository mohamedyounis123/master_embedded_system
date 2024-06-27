#include<stdio.h>
#include<stdlib.h>

int main(void){

	float x, y;

	printf("Enter value of x: ");
	fflush(stdin);	fflush(stdout);
	      scanf("%f",&x);
	      printf("Enter value of y: ");
	  	fflush(stdin);	fflush(stdout);

	      scanf("%f",&y);
	     x=x+y;
	     y=x-y;
	     x=x-y;


	      printf("\nAfter swapping, value of x = %.2f\n", x);
	      printf("After swapping, value of y = %.2f", y);

}

