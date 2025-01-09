/*

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of rows and cols: ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", (a - i + 1));
        }
        printf("\n");
    }
}