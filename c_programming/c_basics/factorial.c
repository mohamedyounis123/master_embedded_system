#include <stdio.h>
#include <stdlib.h>
int main(void){

	int i,sum=0,x;
	unsigned long int factorial=1;
	printf("Enter the number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &x);
	if(x>0){
		for(i=1;i<=x;i++){

			factorial*=i;


		}
	}
	else{
		printf("wrong! factorial is negative number");
	}
	printf("factorial is: %lu",factorial);

	return 0;
}
