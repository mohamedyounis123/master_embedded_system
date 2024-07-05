#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i, length;

    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    gets(str);


    length = strlen(str);

    for (i = 0; i < length; i++) {
        count[(unsigned char)str[i]]++;
    }


    printf("Character Frequency:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}
