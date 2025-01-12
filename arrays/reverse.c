#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, b[5], n = 5;
    int cur = n - 1;
    for (int i = 0; i < n; i++)
    {
        b[cur] = a[i];
        cur--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ,", b[i]);
    }

    printf("\n");
}