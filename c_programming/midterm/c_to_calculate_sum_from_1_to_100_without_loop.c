#include <stdio.h>
#include <stdlib.h>

int sum_n(int number);

int main(void) {
	int total = 0;
	total = sum_n(100);
	printf("The Sum of numbers from 0 to 100 is : %d" ,total);
	return EXIT_SUCCESS;
}

int sum_n(int n)
{

	static int sum=0;
	  if (n != 0){
		  sum_n(n-1);
	   sum+=n;
	  }
	    return n;

}
