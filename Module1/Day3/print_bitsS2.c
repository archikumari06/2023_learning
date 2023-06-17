#include <stdio.h>

void printBits(unsigned int num);

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}

void printBits(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        unsigned int mask = 1u << i;
        printf("%u", (num & mask) ? 1 : 0);
    }
}
