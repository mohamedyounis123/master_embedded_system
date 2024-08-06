#include <stdio.h>

int find_unique(int arr[], int n) {
    int unique_num = 0;
    for (int i = 0; i < n; i++) {
        unique_num ^= arr[i];
    }
    return unique_num;
}

int main() {
    int arr1[] = {4, 2, 5, 2, 5, 7, 4};
    int arr2[] = {4, 2, 4};

    printf("Unique number: %d\n", find_unique(arr1, sizeof(arr1) / sizeof(arr1[0])));
    printf("Unique number: %d\n", find_unique(arr2, sizeof(arr2) / sizeof(arr2[0])));

    return 0;
}
