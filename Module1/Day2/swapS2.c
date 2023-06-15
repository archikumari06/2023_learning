#include <stdio.h>

void swapValues(void* a, void* b, size_t size) {
    char* p = a;
    char* q = b;
    while (size--) {
        *p ^= *q;
        *q ^= *p;
        *p ^= *q;
        p++;
        q++;
    }
}

int main() {
    // Swap two integers
    int a = 10;
    int b = 20;
    printf("Before swapping: %d %d\n", a, b);
    swapValues(&a, &b, sizeof(int));
    printf("After swapping:  %d %d\n\n\n", a, b);

    // Swap two characters
    char c1 = 'X';
    char c2 = 'Y';
    printf("Before swapping:   %c %c\n", c1, c2);
    swapValues(&c1, &c2, sizeof(char));
    printf("After swapping:    %c %c\n\n\n", c1, c2);

    // Swap two floats
    float f1 = 1.23f;
    float f2 = 4.56f;
    printf("Before swapping:   %.2f %.2f\n", f1, f2);
    swapValues(&f1, &f2, sizeof(float));
    printf("After swapping:    %.2f %.2f\n", f1, f2);
    
    return 0;
    
}