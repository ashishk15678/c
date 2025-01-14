#include <stdio.h>
int main()
{
    int sum = 0, n = 0, m = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of cols: ");
    scanf("%d", &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        printf("Now %d row\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("Enter the col %d: ", j + 1);
            scanf("%d", &a[m][n]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    printf("Sum of diagnol elements is %d\n", sum);
}