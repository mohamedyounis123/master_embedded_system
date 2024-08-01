#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "your_username"; 
    char input[50];

    printf("Enter username: ");
    scanf("%s", input);

    if (strcmp(username, input) == 0) {
        printf("Correct username!\n");
    } else {
        printf("Incorrect username!\n");
    }

    return 0;
}
