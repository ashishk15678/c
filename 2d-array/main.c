#include <stdio.h>
int main()
{
    int a[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9};

    // Row major
    // 1,2,3,4,5,6,7,8,9

    // Column major
    // 1,4,7,2,5,8,3,6,9

    printf("Row major \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nColumn major \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}