#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter your string: ");
    gets(str);
    puts("Your reversed string is: ");
    strrev(str);
    printf("Reversed string is %s ", str);
}