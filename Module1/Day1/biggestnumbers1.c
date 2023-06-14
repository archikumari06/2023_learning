#include<stdio.h>

//ifelse operator
int biggestSum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int main(){

    int num1=5,num2=14;
     
    int result = biggestSum(num1, num2);
    printf("Biggest of 2 number : %d\n", result);

    return 0;
}

//ternary operator
#include<stdio.h>

int biggest_toperator(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 100;
    int num2 = 20;
    int result = biggest_toperator(num1, num2);
    printf("The biggest number is: %d\n", result);
    return 0;
}