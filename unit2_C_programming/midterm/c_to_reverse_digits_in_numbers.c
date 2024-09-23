#include <stdio.h>

int reverse_digits(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int num1 = 2457;
    int num2 = 1057;

    printf("Reversed number of %d: %d\n", num1, reverse_digits(num1));
    printf("Reversed number of %d: %d\n", num2, reverse_digits(num2));

    return 0;
}
