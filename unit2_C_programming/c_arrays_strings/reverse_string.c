#include <stdio.h>
#include <string.h>

int main() {
	char s[100],x;
	int i=0,j=0;
	printf("Enter a string:\n ");
	fflush(stdin);fflush(stdout);
	gets(s);
	j=strlen(s)-1;
	while(i<j){
		x=s[i];
		s[i]=s[j];
		s[j]=x;
		i++;
		j--;
	}
	printf("reverse string is: %s",s);
	return 0;
}
