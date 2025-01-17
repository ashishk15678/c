#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n = 8, j = 0;
    int *ptr = (int *)(calloc(n, sizeof(int)));

    printf("Before sorting: ");
    for (int i = n; i > 0; i--)
    {
        *(ptr + j) = i;
        printf("%d ", *(ptr + j));
        j++;
    }
    printf("\n");

    bubbleSort(ptr, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    free(ptr);
    return 0;
}