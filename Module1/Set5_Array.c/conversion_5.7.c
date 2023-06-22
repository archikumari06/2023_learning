#include <stdio.h>
#include <math.h>
#include <string.h>

int binaryToDecimal(const char *binary) {
    int length = strlen(binary);
    int decimal = 0;

    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        int bit = binary[i] - '0';
        decimal += bit * pow(2, j);
    }

    return decimal;
}

int octalToDecimal(int octal) {
    int decimal = 0;
    int base = 1;

    while (octal > 0) {
        int digit = octal % 10;
        decimal += digit * base;
        octal /= 10;
        base *= 8;
    }

    return decimal;
}

int hexadecimalToDecimal(const char *hexadecimal) {
    int length = strlen(hexadecimal);
    int decimal = 0;
    int base = 1;

    for (int i = length - 1; i >= 0; i--) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal += (hexadecimal[i] - '0') * base;
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal += (hexadecimal[i] - 'A' + 10) * base;
        }

        base *= 16;
    }

    return decimal;
}

int main() {
    char binary[32];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);
    printf("Decimal: %d\n", decimal);

    int octal;
    printf("Enter an octal number: ");
    scanf("%o", &octal);

    decimal = octalToDecimal(octal);
    printf("Decimal: %d\n", decimal);

    char hexadecimal[32];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    decimal = hexadecimalToDecimal(hexadecimal);
    printf("Decimal: %d\n", decimal);

    return 0;
}
