
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxSize 50

void arrayEnter(char arr[],int length);
int arrtoint(char arr[],int length);

int main(void) {
	char arr[maxSize];
	unsigned int value = 0;
	int arrLength = 0 ;

	printf("Enter array size : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&arrLength);

	arrayEnter(arr,arrLength);



	value = arrtoint(arr,arrLength);
	printf("number = %u",value);
	return EXIT_SUCCESS;
}

void arrayEnter(char arr[],int length)
{
	int i = 0;
	for(i = 0 ; i < length ; i++)
	{
		printf("Enter array element [%d] : ",i + 1);
		fflush(stdin);  fflush(stdout);
		scanf("%c",&arr[i]);
	}
}

int arrtoint(char arr[],int length)
{
	int i = 0 ;
	unsigned int total = 0 , n = 0;

	for(i = 0 ;i < 5 ; i++)
	{
		total *= 10 ;
		n = arr[i] - '0';
		total += n ;
	}
	return total ;

}
