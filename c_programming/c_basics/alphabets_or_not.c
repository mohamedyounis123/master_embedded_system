#include <stdio.h>
#include <stdlib.h>
int main(void){

	char c;
	printf("Enter the alphabets: ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &c);
	if( (c>='a' && c<='z') || (c>='A' && c<='Z')){
		printf("%c is an alphabet",c);
	}else{
		printf("%C is not an alphabet",c);
	}



	return 0;
}
