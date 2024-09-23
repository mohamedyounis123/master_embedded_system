#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;

    if (result.inches >= 12) {
        result.inches -= 12;
        result.feet++;
    }

    return result;
}

int main() {
    struct Distance distance1, distance2, sum;

    printf("Enter first distance:\n");
    printf("Feet: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &distance1.inches);

    printf("\nEnter second distance:\n");
    printf("Feet: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &distance2.inches);

    sum = addDistances(distance1, distance2);

    printf("\nSum of distances:\n");
    printf("Feet: %d\n", sum.feet);
    printf("Inches: %.2f\n", sum.inches);

    return 0;
}
