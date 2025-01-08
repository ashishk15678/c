#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Sum of n natural numbers: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of natural numbers from 1 to %d is %d\n", n, sum);
}