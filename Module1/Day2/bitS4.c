#include <stdio.h>

// Function to count the number of set bits in a number.
int count_Bits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int arr[3] = {0x09, 0xF4, 0x07};
    

    int totalBits = 0;
    for (int i = 0; i < 3; i++) {
        totalBits += count_Bits(arr[i]);
    }

    printf(" total number of set bits : %d\n", totalBits);

    return 0;
}
 