#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n = 9, key = 5, pos;
    printf("Enter element you want to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            printf("%d found at %d position\n", key, pos + 1);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}