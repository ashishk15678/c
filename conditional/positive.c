/*
Program to check if the number is positive or negative or zero
Example :   Enter yout number : 1
            1 is positive

            Enter yout number : -1
            -1 is negative

*/

#include <stdio.h>
int main()
{
    int x;
    printf("\nProgram to check if number is positive , negative or zero\n\n");
    printf("Enter your number: ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("%d ,x is positive\n", x);
    }
    else if (x < 0)
    {
        printf("%d ,x is negative\n", x);
    }
    else
    {
        printf("%d ,x is zero\n", x);
    }
}