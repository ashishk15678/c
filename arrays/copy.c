/*
Copying element from one array to another

*/
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {

        printf("%d, ", b[i]);
    }
    printf("\n");
    return 0;
}