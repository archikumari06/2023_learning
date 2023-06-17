#include <stdio.h>
#include <limits.h>

void findSmallestLargestDigits(int n, ...);

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Not Valid\n");
        return 0;
    }

    printf("Enter %d numbers: ", n);
    findSmallestLargestDigits(n);

    return 0;
}

void findSmallestLargestDigits(int n, ...) {
    va_list args;
    va_start(args, n);

    int smallestDigit = INT_MAX;
    int largestDigit = INT_MIN;

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);

        while (num != 0) {
            int digit = num % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            num /= 10;
        }
    }

    va_end(args);

    if (smallestDigit == INT_MAX || largestDigit == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}
