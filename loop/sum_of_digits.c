/*
Program to calculate sum of digits for given number
        Example
                1. Enter the number : 121
                    Sum of digits of 121 is 4

                2. Enter the number : 4141
                    Sum of digits of 4141 is 10
                    */
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Sum of digits of given number\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = n;
    while (n > 0)
    {
        int b = n % 10;
        n = n / 10;
        sum += b;
    }
    printf("Sum of digits of %d is %d\n", a, sum);
}