/*
Program to calculate number of digits in the given number
        Example
                1. Enter the number : 121
                    The number of digits in 121 is 3

                2. Enter the number : 4141
                    The number of digits in 4141 is 4
*/
#include <stdio.h>
int main()
{
    int count = 0, n, m;
    printf("Enter the number: ");
    scanf("%d", &n);
    m = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("No of digits in %d is %d\n", m, count);
}