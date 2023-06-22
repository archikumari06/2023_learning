#include <stdio.h>

int main() {
    int array[] = {3, 7, 1, 9, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int min = array[0];  // Assume the first element as the minimum
    int max = array[0];  // Assume the first element as the maximum

    // Find the minimum and maximum elements
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
