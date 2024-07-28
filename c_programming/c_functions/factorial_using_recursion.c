#include <stdio.h>

unsigned int Calc_Factorial(unsigned int n);

int main()
{
	unsigned int n, res;

	printf("Enter a positive number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	res=Calc_Factorial(n);

	printf("Factorial of %d = %d\n",n,res);

	return 0;
}

unsigned int Calc_Factorial(unsigned int n)
{
	if (n == 1)
		return 1;
	else
		return( n * Calc_Factorial(n - 1));
}
