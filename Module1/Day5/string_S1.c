#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitializeArray(const char* input, struct Student* students, int numStudents) {
    char buffer[100];
    strcpy(buffer, input);

    char* token = strtok(buffer, " ");
    int i = 0;

    while (token != NULL && i < numStudents) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    const int numStudents = 5;
    struct Student students[numStudents];

    char input[] = "1001 Aron 100.00";
    parseAndInitializeArray(input, students, numStudents);

    // Printing the initialized array
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
