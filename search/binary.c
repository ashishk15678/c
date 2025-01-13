#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, low = 0, high = 9, key = 8, pos = 0;
    while (low < high)
    {
        int mid = (high + low) / 2;
        if (a[mid] == key)
        {
            pos = mid + 1;
            printf("Found\n");
            break;
        }
        if (a[mid] > key)
        {

            printf("Less\n");
            high = mid - 1;
        }
        if (a[mid] < key)
        {

            printf("Big\n");
            low = mid + 1;
        }
    }
    if (pos == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at %d position\n", pos);
    }
}