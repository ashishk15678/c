/*
Greater among two numbers

Example:
    Enter first number : 3
    Enter second number : 2
    3 is greater than 2
*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("Greater among two numers");

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    if (x == y)
        printf(" x is equal to y");
    else if (x > y)
    {
        printf("%d is greater than %d\n", x, y);
    }
    else
    {
        printf("%d is greater than %d\n", y, x);
    }
    return 0;
}