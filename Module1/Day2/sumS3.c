#include <stdio.h>

int main() {
    int arr[5] = {52, 20, 61, 40, 11};  

    int sum = 0;
    for (int i = 0; i < 5; i += 2) {
        sum += arr[i];
    }

    printf("Sum of all alternate elements: %d\n", sum);

    return 0;
}
