#include <stdio.h>

void printMultiples(int arr[], int size) {
    printf("Multiples of 3 and 4 in the array:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 4 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 16};
    int size = sizeof(arr) / sizeof(arr[0]);

    printMultiples(arr, size);

    return 0;
}
