#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index of the element if found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {30, 40, 10, 60, 50, 20, 70, 90, 80, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 80;  // Element to search for

    int position = linearSearch(arr, n, key);

    if (position != -1) {
        printf("Element %d found at position %d\n", key, position);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
