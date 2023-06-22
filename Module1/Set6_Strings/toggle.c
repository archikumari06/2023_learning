#include <stdio.h>

void toggleCase(char* str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32; // Convert uppercase to lowercase
        } else if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; // Convert lowercase to uppercase
        }
        str++;
    }
}

int main() {
    char str[] = "Hello World";
    
    printf("Original string: %s\n", str);
    toggleCase(str);
    printf("Toggled string: %s\n", str);
    
    return 0;
}
