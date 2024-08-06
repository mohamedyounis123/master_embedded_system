#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int num1 = 123;
    int num2 = 4565;

    printf("Sum of digits of %d: %d\n", num1, sum_of_digits(num1));
    printf("Sum of digits of %d: %d\n", num2, sum_of_digits(num2));

    return 0;
}
