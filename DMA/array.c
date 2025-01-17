#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = NULL, n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    ptr = (int *)(malloc(n * sizeof(int)));
    if (ptr == NULL)
    {
        printf("ERROR : Some error occured");
        exit(-1);
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("Elements  : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    free(ptr);
}