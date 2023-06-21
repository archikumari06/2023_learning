#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchByName(const struct Student* students, int numStudents, const char* name) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
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

    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    int index = searchByName(students, numStudents, searchName);

    if (index != -1) {
        printf("Student %s found at index %d\n", searchName, index);
        printf("Roll No: %d\n", students[index].rollno);
        printf("Marks: %.2f\n", students[index].marks);
    } else {
        printf("Student %s not found\n", searchName);
    }

    return 0;
}
