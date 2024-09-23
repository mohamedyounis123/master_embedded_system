#include <stdio.h>

struct Employee
{
	char name[50];
	int ID;
};
int main()
{
	struct Employee X = {"mohamed" , 151};
	struct Employee (*arr[]) = {&X};
	struct Employee (*(*ptr)[1]) = &arr;  // pointer to array of pointer to structure

	printf("Employee Name : %s \n", (*(*ptr))->name);
	printf("Employee ID : %d",(*(*ptr))->ID);

	return 0;
}
