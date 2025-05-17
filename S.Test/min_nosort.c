#include <stdio.h>
#include <limits.h>

void findTwoSmallest(int arr[], int size, int *first, int *second) {
    if (size < 2) {
        printf("Array size should be at least 2.\n");
        return;
    }
    *first = INT_MAX;
    *second = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < *first) {
            *second = *first;
            *first = arr[i];
        } else if (arr[i] < *second && arr[i] != *first) {
            *second = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 4, 7, 2, 8, 15, 1, 6, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int first, second;
    findTwoSmallest(arr, size, &first, &second);
    printf("The two smallest elements are: %d and %d\n", first, second);
    return 0;
}