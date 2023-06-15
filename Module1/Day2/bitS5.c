#include <stdio.h>

// Function to count the number of set bits in a number
int count_Bits(int num) {
    int count = 0;
    do {
        count += num & 1;
        num >>= 1;
    }
    while (num > 0);
    return count;
}

int main() {
    int arr[3] = {0x1, 0xF4, 0x10001};
    
    int totalBits = 0;
    for (int i = 0; i < 3; i++) {
        totalBits += count_Bits(arr[i]);
    }

    printf(" total number of set bits : %d\n", totalBits);

    return 0;
}
 




