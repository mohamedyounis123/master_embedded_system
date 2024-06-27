#include <stdio.h>
#include <stdlib.h>
int main(void){
	char c;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdin);
	scanf("%c", &c);
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='l'||c=='o'||c=='O'||c=='u'||c=='U'){
		printf("%c is a vowel.",c);
	}else{
		printf("%c is a consonant.",c);
	}
	return 0;
}
