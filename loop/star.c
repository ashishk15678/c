/*
Program to print star patter for given number of rows and cols

    Example:
                1. Enter the number of rows and cols: 5
                    5
                    4 5
                    3 4 5
                    2 3 4 5
                    1 2 3 4 5
    */

#include <stdio.h>
int main()
{
    int n = 0;
    printf("STAR PATTERN: \n");
    printf("Enter the number of rows and cols: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", (n - i + j));
        }
        printf("\n");
    }
    return 0;
}