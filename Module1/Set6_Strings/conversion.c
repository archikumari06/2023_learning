#include <stdio.h>

int stringToInt(const char* str) {
    int res = 0;
    int i = 0;
    
    // Handle negative sign if present
    if (str[0] == '-') {
        i = 1;
    }
    
    // Iterate through each character of the string
    while (str[i] != '\0') {
        int ival = str[i] - '0'; // Convert character to integer value
        res = res * 10 + ival; // Update the result by multiplying by 10 and adding the current digit
        i++;
    }
    
    // Handle negative sign if present
    if (str[0] == '-') {
        res = -res;
    }
    
    return res;
}

int main() {
    const char* str = "5278";
    int result = stringToInt(str);
    
    printf("String: %s\n", str);
    printf("Integer: %d\n", result);
    
    return 0;
}
