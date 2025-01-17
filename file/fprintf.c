#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d element: ", i + 1);
        scanf("%d", &a[i]);
    }

    FILE *even = fopen("file/data/even.txt", "w+");
    FILE *odd = fopen("file/data/odd.txt", "w+");

    if (odd == NULL || even == NULL)
    {
        printf("ERROR : No such file created");
        exit(-1);
    }

    printf("\n\n\nDATA : Writing data\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            fprintf(even, "%d\n", a[i]);
        }
        else
        {
            fprintf(odd, "%d\n", a[i]);
        }
    }
    printf("DATA : Written Successfully\n");
    fclose(odd);
    fclose(even);
}