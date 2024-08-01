#include<stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {6, 7, 8};
    int temp, i, minSize;
   minSize = (sizeof(A) / sizeof(A[0]) < sizeof(B) / sizeof(B[0])) ?
             sizeof(A) / sizeof(A[0]) : sizeof(B) / sizeof(B[0]);

    for (i = 0; i < minSize; i++) {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    printf("Array A after swapping: ");
    for (i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B after swapping: ");
    for (i = 0; i < sizeof(B) / sizeof(B[0]); i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
