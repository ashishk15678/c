// highest and lowest value in an array
#include <stdio.h>
int main()
{
    int a[10], min = 0, max = 0;
    printf("Enter 5 numbers for which you want highest and lowest: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("Higest number is %d and lowest number is %d\n", max, min);
}