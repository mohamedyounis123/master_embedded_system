#include <stdio.h>
#include <string.h>

#include <math.h>

int isPowerOfThree(int n) {
    if (n == 1) {
        return 0;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1 ? 0 : 1;
}
int main() {
    int num = 9;
    if (isPowerOfThree(num) == 0) {
        printf("%d is a power of 3\n", num);
    } else {
        printf("%d is not a power of 3\n", num);
    }
    return 0;
}