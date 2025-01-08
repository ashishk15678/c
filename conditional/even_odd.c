/*
Find if the number is Even or Odd

Example:
    Type the number:4
    4 is Even
*/
#include <stdio.h>
int main()
{
    int x;
    printf("Even number or Odd number\n");
    printf("Enter the number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("Even number\n");
        return 0;
    }

    printf("Odd number\n");
    return 0;
}