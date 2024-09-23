#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary parts of first complex number: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter real and imaginary parts of second complex number: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &num2.real, &num2.imaginary);

    sum = add(num1, num2);

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
