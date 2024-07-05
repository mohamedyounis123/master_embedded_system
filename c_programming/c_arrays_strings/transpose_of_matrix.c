//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	int r,c,i,a[10][10],trans[10][10];
//	printf("Enter the number of data:\n");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&r);
//
//	return 0;
//}
//
#include <stdio.h>

int main()
{
	int arr1[50][50],arr2[50][50];
	int rows, columns;
	do {
		printf("Enter rows and columns of matrix: ");
		fflush(stdin); fflush(stdout);
		scanf("%d %d", &rows, &columns);
	} while (rows <= 0 || rows > 50 || columns <= 0 || columns > 50);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("Enter Element a%d%d: ", i + 1, j + 1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			arr2[j][i] = arr1[j][i];
			printf("%d\t", arr2[j][i]);
		}
		printf("\n");

	}



	return 0;
}
