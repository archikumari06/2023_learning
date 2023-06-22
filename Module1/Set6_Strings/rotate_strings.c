#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotateString(char* str, int positions, char direction) {
    int length = strlen(str);
    positions %= length;
    
    if (positions == 0) {
        return; // No rotation needed
    }
    
    if (direction == 'L') {
        // Rotate left
        char* temp = malloc(positions + 1);
        strncpy(temp, str, positions);
        temp[positions] = '\0';
        memmove(str, str + positions, length - positions);
        strncpy(str + length - positions, temp, positions);
        free(temp);
    } else if (direction == 'R') {
        // Rotate right
        char* temp = malloc(positions + 1);
        strncpy(temp, str + length - positions, positions);
        temp[positions] = '\0';
        memmove(str + positions, str, length - positions);
        strncpy(str, temp, positions);
        free(temp);
    }
}

int main() {
    char str[] = "abcdxyz";
    
    printf("Original string: %s\n", str);
    
    rotateString(str, 2, 'L');
    printf("Left rotation by 2 positions: %s\n", str);
    
    rotateString(str, 3, 'R');
    printf("Right rotation by 3 positions: %s\n", str);
    
    return 0;
}
