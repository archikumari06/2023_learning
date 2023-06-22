#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20, 30, 40, 10, 60, 50, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nArray after sorting in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
