#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
	char str[] = "w3resource";
	char* ptr;
	ptr = str;
	int length = strlen(str);
	int i = 0;
	ptr = ptr + length;

	printf("Input a string : w3resource \n");
	printf("Reverse of the string is : ");

	for(i = length - 1 ; i >= 0 ;i--)
	{
		ptr--;
    	printf("%c",*ptr);
	}
	return 0;
}
