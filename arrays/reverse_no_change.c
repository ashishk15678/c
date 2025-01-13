#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6}, n = 6;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */

        printf("%d ", a[i]);
    }
    printf("\n");
}