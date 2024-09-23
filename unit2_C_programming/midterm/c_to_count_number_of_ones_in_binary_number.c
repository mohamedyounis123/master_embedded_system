#include <stdio.h>
#include <stdlib.h>

int onesNum(int number);

int main(void) {
	int number = 0 , result = 0;
	printf("Enter a number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&number);
	printf("The number binary number : ");
	result = onesNum(number);
	printf("  Contains %d of ones.", result);

	return EXIT_SUCCESS;
}


int onesNum(int number)
{
	int i = 0 , n = 0, counter = 0;

	for(i = 31 ; i >= 0 ; i--)
	{
		n = number >> i ;
		if(n & 1)
		{

			printf("1");
			counter++;
		}
		else
			printf("0");

	}
	return counter;
}
