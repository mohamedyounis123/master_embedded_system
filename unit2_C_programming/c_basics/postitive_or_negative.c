#include <stdio.h>
#include <stdlib.h>
int main(void){

	float num;
	printf("Enter the numbers: ");
	fflush(stdout);fflush(stdin);
	scanf("%f", &num);
	if(num>0){

		printf("the number is positive\n");
	}
	else if(num<0){

		printf("the number is negative\n");

	}
	else{

		printf("the number is zero\n");

	}

	return 0;
}
