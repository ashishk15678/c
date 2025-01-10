/*
Example:
            Enter the number you want factorial of: 9
            Factorial of 9 is 362880

*/
#include <stdio.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d \n", n, fact(n));
}