#include <stdio.h>
#include <stdlib.h>

union UNUMjob
{
	char name [32] ;
	float salary;
	int worker_no;

} u;

struct Sjob
{
	char name [32];
	float salary;
	int worker_no;

} s;


int main ()
{
	printf ("Size of the union is: %d", sizeof (u));
	printf ("\nSize of the structure is: %d", sizeof (s));
	return EXIT_SUCCESS;
}
