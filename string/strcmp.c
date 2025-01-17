#include <stdio.h>
#include <string.h>

int compare(char str1[20], char str2[20])
{
    for (int i = 0; i < 20; i++)
    {
        if (str1[i] != str2[i])
        {
            return -1;
            break;
        }
        if ((str1[i] == '\0') && (str2[i] == '\0'))
        {
            break;
        }
    }
    return 0;
}

int main()
{
    char str1[20], str2[20];
    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);
    // printf("ANSWER: %d", strcmp(str1, str2));
    if (compare(str1, str2) == 0)
    {
        printf("Strings are same\n");
    }
    else
    {
        printf("Strings are not same\n");
    }
}