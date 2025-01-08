/*
Program to find series of squares till n
    Example:
            Enter numer : 4
            0, 1, 4, 9, 16
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Program to write series of squares\n");
    printf("Enter the number till which you want series: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ,", i * i);
    }
    printf("\n");
    return 0;
}