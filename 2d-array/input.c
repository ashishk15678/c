/*
Write a program to input and display elements of a 2d array
*/
#include <stdio.h>
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        printf("Now %d row\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d element : ", j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
