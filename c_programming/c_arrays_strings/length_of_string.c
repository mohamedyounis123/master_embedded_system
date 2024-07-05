#include <stdio.h>
#include <string.h>

int main() {
    char s[100],i;
    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    scanf("%s",s);
    for(i=0;s[i]!='\0';++i);

    	printf("length of string: %d\n",i);

    return 0;
}
