#include<stdio.h>
#include<stdlib.h>

int main(void){

	float x, y, sum;

	printf("Enter two integers: ");
	fflush(stdout);  fflush(stdout);
	scanf("%f %f",&x,&y);
	sum=x*y;
	printf("Sum: %.2f",sum);
	return 0;
}
