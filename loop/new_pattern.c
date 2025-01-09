#include <stdio.h>
int main()
{
    int a, temp = 0;
    printf("Enter the no. of rows and cols: ");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf("%d ", j + i + temp);
            if (j == i)
            {
                temp = i;
            }
        }
        printf("\n");
    }
}