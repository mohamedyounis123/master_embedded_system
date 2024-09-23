#include<stdio.h>

int main()
{
	int arr[100];
	int n, number, Location;
	do {
		printf("Enter no of elements : ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &n);
	} while (n <= 0 || n > 99);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Location);
	if (Location > 0 && Location < 100)
	{
		for (int i = n; i > (Location - 1); i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[Location - 1] = number;
		for (int i = 0; i < n + 1; i++)
		{
			printf("%d\t", arr[i]);

		}
	}
	else
		printf("Invalid Input.\n");
	return 0;
}
