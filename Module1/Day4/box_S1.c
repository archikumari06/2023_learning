#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

int main() {
    struct Box myBox;
    struct Box* ptrBox = &myBox;  // Pointer to the box structure

    // Assign values to the box dimensions
    ptrBox->length = 5.0;
    ptrBox->width = 3.0;
    ptrBox->height = 4.0;

    // Calculate volume using the pointer and dot operator
    double volume = ptrBox->length * ptrBox->width * ptrBox->height;
    printf("Volume: %.2f\n", volume);

    // Calculate total surface area using the pointer and dot operator
    double surfaceArea = 2 * (ptrBox->length * ptrBox->width +
                              ptrBox->length * ptrBox->height +
                              ptrBox->width * ptrBox->height);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
