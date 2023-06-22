#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int sumEvenIndex = 0;
    int sumOddIndex = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            // Even index
            sumEvenIndex += arr[i];
        } else {
            // Odd index
            sumOddIndex += arr[i];
        }
    }

    return sumOddIndex - sumEvenIndex;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = calculateDifference(arr, size);

    printf("Difference between sum of elements at odd and even indexes: %d\n", difference);

    return 0;
}
