#include<stdio.h>

int clearBit(int num, int pos) {
    if (pos < 0) {
        return num;
    }
    int mask = ~(1 << pos);
    return num & mask;
}
int main() {
    int num, pos;
    printf("Enter a number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);
    printf("Enter the bit position to clear: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &pos);

    int result = clearBit(num, pos);
    printf("Result: %d\n", result);

    return 0;
}