/*
Program to find fibonacci series till a given number
Example     :
                1. Enter the number till which you want fibonacci series: 12
                    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

                2.  1. Enter the number till which you want fibonacci series: 12
                    0, 1, 1, 2, 3, 5, 8, 13, 21
*/
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0;
    printf("Fibonnaci Series \n");
    printf("Enter the number till which you want fibonacci series: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d", c);
        if (i == (a - 1))
        {
            continue;
        }
        printf(", ");
        int temp = c;
        c = b;
        b = c + temp;
    }
    printf("\n");
    return 0;
}