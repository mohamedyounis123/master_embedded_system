#include <stdio.h>
#include <stdlib.h>
void circleArea();
int main(void) {
	circleArea();
	return EXIT_SUCCESS;
}
void circleArea()
{
	float radius;
	printf("Enter the radius : ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&radius);
	float area = 2 * radius * 3.14159 ;
	printf("Area = %.2f",area);
}
