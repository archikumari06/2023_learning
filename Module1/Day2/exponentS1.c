#include <stdio.h>
#include <stdint.h>

int main() {
    double x = 0.5;
    uint64_t *ptr = (uint64_t *)&x;
    uint64_t exponent = (*ptr >> 52) & 0x7FF;
    long long unsigned int hexExponent = exponent - 1023;

    printf("Hexadecimal exponent: 0x%llX\n", hexExponent);

    printf("Binary exponent: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%ld", (exponent >> i) & 1);
    }

    printf("\n");

    return 0;
}
