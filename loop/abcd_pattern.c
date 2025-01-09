/*

                A
                A B
                A B C
                A B C D
                A B C D E
*/
#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the number of rows and cols: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}