#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

// Function to swap the fields of two structures using pointers
void swapFields(Point* p1, Point* p2) {
    int temp;

    // Swap x values
    temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    // Swap y values
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    Point point1, point2;

    printf("Enter the x-coordinate of Point 1: ");
    scanf("%d", &point1.x);

    printf("Enter the y-coordinate of Point 1: ");
    scanf("%d", &point1.y);

    printf("Enter the x-coordinate of Point 2: ");
    scanf("%d", &point2.x);

    printf("Enter the y-coordinate of Point 2: ");
    scanf("%d", &point2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of the two structures using pointers
    swapFields(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
