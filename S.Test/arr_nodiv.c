#include <stdio.h>

void computeProductArray(int arr[], int size, int result[]) {
    int prefixProduct[size];
    int suffixProduct[size];
    prefixProduct[0] = 1;
    for (int i = 1; i < size; i++) {
        prefixProduct[i] = prefixProduct[i - 1] * arr[i - 1];
    }
    suffixProduct[size - 1] = 1;
    for (int i = size - 2; i >= 0; i--) {
        suffixProduct[i] = suffixProduct[i + 1] * arr[i + 1];
    }
    for (int i = 0; i < size; i++) {
        result[i] = prefixProduct[i] * suffixProduct[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size < 1) {
        printf("Array size should be at least 1.\n");
        return 1;
    }
    int arr[size];
    int result[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    computeProductArray(arr, size, result);
    printf("The product array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}