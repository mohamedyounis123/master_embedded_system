#include<stdio.h>
#include<stdlib.h>

int main(void){

	int x;

	printf("Enter a number you wanna check : ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&x);
	if((x%2)==0){

		printf("%d is even",x);
	}
	else{

		printf("%d is odd",x);


	}


	return 0;
}

