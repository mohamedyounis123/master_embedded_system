#include <stdio.h>
#include <stdlib.h>
int main(void){
	char c;
	float x,y,subtration,sum,multiplication,division;

	printf("Enter the operator + or - or * or divide: ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &c);
	printf("enter two number:");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&x,&y);
	switch(c){
	case'+':
		sum=x+y;
		printf("%.2f %.2f",sum);
		break;
	case 1:

	case'-':
		subtration=x-y;
		printf("%.2f %.2f",subtration);
		break;
	case'*':
		multiplication=x*y;
		printf("%.2f %.2f",multiplication);
		break;
	case'/':
		division=x/y;
		printf("%.2f %.2f",division);
		break;
	default:
		printf("the option doesn't exist");
	}

	return 0;
}
