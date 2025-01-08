/*
Program to calculate factorial of the give number
Example:
            Enter the number of which factorial you want : 3
            factorial of 3 is 6

            Enter the number of which factorial you want : 2
            factorial of 2 is 2
*/
#include <stdio.h>
int main()
{
    int n, res = 1;
    printf("Enter number of which factorial you want: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Factorial of %d is %d\n", n, 1);
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    printf("Factorial of %d is %d\n", n, res);
    return 0;
}