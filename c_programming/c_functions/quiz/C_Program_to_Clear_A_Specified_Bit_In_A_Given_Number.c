#include "stdio.h"
int main()
{
int num, n,new_num;

printf("Enter any number: ");
fflush(stdin);fflush(stdout);
scanf("%d", &num);

printf("Enter nth bit to clear (0-31): ");
fflush(stdin);fflush(stdout);
scanf("%d", &n);


new_num =num & (~(1 << n));

printf("Bit cleared successfully.\n\n");
printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
printf("Number after clearing %d bit: %d (in decimal)\n", n, new_num);

return 0;
}
