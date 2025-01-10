#include <stdio.h>

int sum(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return sum(n - 1) + n;
}

int main()
{
    int n;
    printf("Enter the number till which you want sum of numbers: ");
    scanf("%d", &n);
    printf("Sum is: %d\n", sum(n));
}