#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float mark;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        fflush(stdin);fflush(stdout);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Roll number: ");
        fflush(stdin);fflush(stdout);
        scanf("%d", &students[i].roll);

        printf("Mark: ");
        fflush(stdin);fflush(stdout);
        scanf("%f", &students[i].mark);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll);
        printf("Mark: %.2f\n", students[i].mark);
    }

    return 0;
}
