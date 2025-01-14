#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);
    // printf("ANSWER: %d", strcmp(str1, str2));
    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are same\n");
    }
    else
    {
        printf("Strings are not same\n");
    }
}