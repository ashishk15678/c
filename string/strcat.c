#include <stdio.h>
#include <string.h>

void concat(char str1[20], char str2[20])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    for (int j = 0; str2[j] != '\0'; j++)
    {
        str1[i + j] = str2[j];
    }
    puts("Enter string 1: ");
    gets(str1);
}

int main()
{
    char str1[20], str2[20];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    concat(str1, str2);
    puts(str1);
}