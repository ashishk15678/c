
#include <stdio.h>
#include <string.h>

void copy(char str1[20], char str2[20])
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
}

int main()
{
    char str1[20], str2[20];
    printf("Enter string: ");
    gets(str1);
    copy(str2, str1);
    printf("The string you wrote was: ");
    puts(str2);
}