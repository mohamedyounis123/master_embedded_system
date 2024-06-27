#include <stdio.h>
#include <stdlib.h>
int main(void){

	int i,sum=0,x;
	printf("Enter the number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &x);
	for(i=1;i<=x;i++){

		sum+=i;


	}
	printf("sum is: %d",sum);

	return 0;
}
