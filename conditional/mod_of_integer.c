/*
Program to find Mod of integer
    Example = |-2| -> 2
*/
#include <stdio.h>
int main()
{
    int x;
    printf("Mod of Integer\n");
    printf("Enter your number :");
    scanf("%d", &x);
    if (x < 0)
    {
        x = -x;
    }
    printf("Mod of x is %d\n\n", x);
}