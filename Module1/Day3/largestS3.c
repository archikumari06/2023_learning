#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);

    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}

int findLargestNumber(int num) {
    int largestNum = 0;

    for (int i = 0; i < 4; i++) {
        int tempNum = num / (int)pow(10, i + 1) * (int)pow(10, i) + num % (int)pow(10, i);
        if (tempNum > largestNum) {
            largestNum = tempNum;
        }
    }

    return largestNum;
}
