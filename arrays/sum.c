#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, b[5] = {6, 7, 8, 9, 10}, sum[5];
    for (int i = 0; i < 5; i++)
    {
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d + %d is %d \nc", a[i], b[i], sum[i]);
    }
    printf("\n");
}