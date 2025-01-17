#include <stdio.h>
#include <string.h>

void reverse(char str[20])
{
    for (int i = 0, len = strlen(str) - 1; i < len; i++, len--)
    {
        char temp = str[i];
        str[i] = str[len];
        str[len] = temp;
    }
}

int main()
{
    char str[20];
    printf("Enter your string: ");
    gets(str);
    puts("Your reversed string is: ");
    reverse(str);
    puts(str);
}