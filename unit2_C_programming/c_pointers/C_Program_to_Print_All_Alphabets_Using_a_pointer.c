#include <stdio.h>

int main()
{
	char Arr[27];

	char*ptr = Arr;

	for(int i=0; i<26; ++i)
	{
		*ptr = i+'A';
		ptr++;
	}

	ptr = Arr;

	printf("The Alphabets are:\n");

	for(int i=0; i<26; ++i)
	{
		printf("%c ",*ptr);
		ptr++;

	}

	return 0;
}