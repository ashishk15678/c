#include <stdio.h>
void reverse(char str[20])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    for (int i = 0, len = count - 1; i < len; i++, len--)
    {
        char temp = str[i];
        str[i] = str[len];
        str[len] = temp;
    }
}

int main()
{
    char str[20], str1[20];
    printf("Enter your string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        str1[i] = str[i];
    }
    reverse(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str1[i])
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
}