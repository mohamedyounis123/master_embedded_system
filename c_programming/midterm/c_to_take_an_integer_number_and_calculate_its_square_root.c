#include <stdio.h>
#include <math.h>

double calculate_square_root(int num) {
    if (num < 0) {
        printf("Error: Cannot calculate square root of a negative number.\n");
        return -1; // Indicate error
    } else {
        return sqrt(num);
    }
}

int main() {
    int num1 = 4;
    int num2 = 10;

    printf("Square root of %d: %.3lf\n", num1, calculate_square_root(num1));
    printf("Square root of %d: %.3lf\n", num2, calculate_square_root(num2));

    return 0;
}
