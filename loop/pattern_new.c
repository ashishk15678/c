/*
                0
                1 0
                1 0 1
                0 1 0 1
                0 1 0 1 0
*/
#include <stdio.h>
int main()
{
    int a, check = 0;
    printf("Enter the number of rows and cols: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            if (check)
            {
                printf("1 ");
                check = 0;
                continue;
            }
            printf("0 ");
            check = 1;
        }
        printf("\n");
    }
}