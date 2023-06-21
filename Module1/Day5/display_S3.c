#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayArray(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    const int numStudents = 5;
    struct Student students[numStudents] = {
        {1001, "Aron", 100.00},
        {1002, "Bob", 90.50},
        {1003, "Charlie", 85.75},
        {1004, "David", 95.25},
        {1005, "Emma", 88.80}
    };

    displayArray(students, numStudents);

    return 0;
}
