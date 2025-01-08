/*
Program to check for palindrome for given number
        Example
                1. Enter the number : 121
                    Palindrome

                2. Enter the number : 4141
                    not palindrome
*/
#include <stdio.h>
int main()
{
    int n, m, a = 0;
    printf("Check for palindrome\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    m = n;
    while (n > 0)
    {
        int b = n % 10;
        n = n / 10;
        a = (a * 10) + b;
    }
    if (a == m)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}