#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5, *ptr = malloc(n * sizeof(int));
    // printf("%ld", ptr);
    if (ptr == NULL)
    {
        printf("ERROR : Memory was not allocated ");
        exit(-1);
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("VALUE AT %d : ", i + 1);
        scanf("%d", ptr + i);
    }

    n = 10;
    ptr = realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n + 1; i++)
    {
        printf("VALUE AT %d : %d\n", i + 1, *(ptr + i));
    }
    free(ptr);
}