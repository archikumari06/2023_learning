#include <stdio.h>

int main() {
    float op1, op2;
    char operator;
    float result;

    printf("Enter Operand 1: ");
    scanf("%f", &op1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &op2);

    switch (operator) {
        case '+':
            result = op1 + op2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = op1 - op2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = op1 * op2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (op2 != 0) {
                result = op1 / op2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}
