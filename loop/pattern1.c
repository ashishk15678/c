#include <stdio.h>
int main()
{
    int n = 5, last = 1;
    printf("Enter the number of rows and cols: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", last + i + j);
        }
        last += i;
        printf("\n");
    }
}