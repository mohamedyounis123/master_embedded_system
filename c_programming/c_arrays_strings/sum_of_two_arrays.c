#include <stdio.h>
#include<string.h>
int main()
{
	int n,r,c;
	float x[100][100], y[100][100], Sum[100][100];
	printf("Enter the elements of 1st matrix:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < n; c++)
		{
			printf("Enter a%d%d: ", r , c );
			fflush(stdout); fflush(stdin);
			scanf("%f", &x[r][c]);
		}
	}
	printf("Enter the elements of 2nd matrix:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < n; c++)
		{
			printf("Enter a%d%d: ", r , c);
			fflush(stdout); fflush(stdin);
			scanf("%f", &y[r][c]);
		}
	}
	printf("Sum Of Matrix :\n");
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < n; c++)
		{
			Sum[r][c] = x[r][c] + y[r][c];
			printf("%.1f\t", y[r][c]);
		}
		printf("\n");
	}

	return 0;
}

