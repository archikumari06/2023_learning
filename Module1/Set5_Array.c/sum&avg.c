#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    float average;

    // Calculating the sum of array elements
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    // Calculating the average
    average = (float) sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
