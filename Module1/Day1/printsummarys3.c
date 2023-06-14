#include <stdio.h>

struct Student {
    int roll_no;
    char name[100];
    float physics_marks;
    float math_marks;
    float chemistry_marks;
};

float calculate_percentage(float total_marks) {
    return (total_marks / 300) * 100;
}

void print_summary(struct Student student) {
    float total_marks = student.physics_marks + student.math_marks + student.chemistry_marks;
    float percentage = calculate_percentage(total_marks);

    printf("----- Student Summary -----\n");
    printf("Roll No: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Physics Marks: %.2f\n", student.physics_marks);
    printf("Math Marks: %.2f\n", student.math_marks);
    printf("Chemistry Marks: %.2f\n", student.chemistry_marks);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main() {
    struct Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter Physics Marks: ");
    scanf("%f", &student.physics_marks);

    printf("Enter Math Marks: ");
    scanf("%f", &student.math_marks);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &student.chemistry_marks);

    print_summary(student);

    return 0;
}

