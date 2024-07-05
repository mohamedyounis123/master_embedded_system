#include <stdio.h>

int main()
{
	int arr[100];
	int n, number, Location;
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("enter the values:");
		fflush(stdin); fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == number)
		{
			Location = i;
			break;
		}
	}
	if (Location == -1)
		printf("Number is NOT exist.\n");
	else
		printf("Number found at the location = %d\n", Location + 1);


	return 0;
}
