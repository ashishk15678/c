/*
Program to swap two integers
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("\t\t Swap two numbers\n\n");
    printf("Enter first number , a : ");
    scanf("%d", &a);

    printf("Enter second number , b : ");
    scanf("%d", &b);

    printf("before swapping , a : %d and b : %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("after swapping , a : %d and b : %d\n", a, b);
}