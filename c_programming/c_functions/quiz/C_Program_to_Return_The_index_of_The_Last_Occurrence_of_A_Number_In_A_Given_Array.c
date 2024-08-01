#include <stdio.h>
#include <string.h>

#include <math.h>

int findLastIndex(int arr[], int size, int target) {
    for (int i = size-1 ; i >= 0; i--) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int lastIndex = findLastIndex(arr, size, target);

    if (lastIndex != -1) {
        printf("Last occurrence of %d is at index %d\n", target, lastIndex);
    } else {
        printf("%d is not found in the array\n", target);
    }

    return 0;
}
