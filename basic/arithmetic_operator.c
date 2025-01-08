/*
Arithmetic operators in C language
*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n\nAddition for %f and %f is %f\n", a, b, a + b);
    printf("subtraction for %f and %f is %f\n", a, b, a - b);
    printf("Multiplication for %f and %f is %f\n", a, b, a * b);
    printf("Division for %f and %f is %3d\n", a, b, a / b);
    printf("Modulus for %f and %f is %d\n", a, b, a % b);

    return 0;
}