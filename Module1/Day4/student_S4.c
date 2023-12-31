#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int n, i;
    Student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    students = (Student *)malloc(n * sizeof(Student));

    // Read data for each student
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display data for each student
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}
