#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            // Even element
            sumEven += arr[i];
        } else {
            // Odd element
            sumOdd += arr[i];
        }
    }

    return sumOdd - sumEven;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = calculateDifference(arr, size);

    printf("Difference between sum of odd and even elements: %d\n", difference);

    return 0;
}
