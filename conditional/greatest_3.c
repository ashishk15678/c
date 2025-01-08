/*
Program to find greatest among three numbers

Example :
    Enter first number : 3
    Enter first number : 2
    Enter first number : 1
    3 is Greatest
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Greatest among three numbers\n\n");

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest \n", a);
        }
        else
        {
            printf("%d is greatest \n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest \n", b);
        }
        else
        {
            printf("%d is greatest \n", c);
        }
    }
    return 0;
}