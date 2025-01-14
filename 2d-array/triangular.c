#include <stdio.h>

#define Rows 5
#define Cols 5

int main()
{
    int a[Rows][Cols];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j)
            {
                a[i][j] = 0;
            }
            else if (i > j)
            {
                a[i][j] = 2;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}