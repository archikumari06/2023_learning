#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

// Function to read a complex number from the user
Complex readComplex() {
    Complex num;

    printf("Enter the real part: ");
    scanf("%lf", &num.real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &num.imaginary);

    return num;
}

// Function to write a complex number to the console
void writeComplex(Complex num) {
    if (num.imaginary >= 0)
        printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
    else
        printf("Complex number: %.2f - %.2fi\n", num.real, -num.imaginary);
}

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex sum;

    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    return sum;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex num1, Complex num2) {
    Complex product;

    product.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    product.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;

    return product;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    // Addition
    sum = addComplex(num1, num2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    // Multiplication
    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
