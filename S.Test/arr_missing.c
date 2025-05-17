#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int expectedSum = (size * (size + 1)) / 2;
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
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
    printf("Enter %d distinct elements (0 to n): \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int missingNumber = findMissingNumber(arr, size);
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}