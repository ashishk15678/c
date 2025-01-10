#include <stdio.h>

int fib(int n)
{
    // printf("%d, ", n);
    if (n <= 0)
    {
        return 0;
    }
    if (n <= 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Enter the value till which you want series: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", fib(i));
    }
    printf("\n");
}