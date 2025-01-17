#include <stdio.h>
#include <stdlib.h>
float average(int *p, int size)
{
    float result = 0;
    for (int i = 0; i < size; i++)
    {
        result += *(p + i);
    }
    return (result / size);
}

int main()
{
    int n = 8, *ptr = malloc(n * sizeof(int));

    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Entering values in array
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", (ptr + i));
    }

    float avg = average(ptr, n);
    free(ptr);
    printf("Average of elements is %f\n", avg);
}