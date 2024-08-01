#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent-1);
    }
}

int main() {
    int base, exponent, result;

    printf("Enter base: ");
    fflush(stdin);    fflush(stdout);
    scanf("%d", &base);
    printf("Enter exponent: ");
    fflush(stdin);    fflush(stdout);
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}
