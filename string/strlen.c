/*
inputs your name and tells how many character your name has
*/
#include <stdio.h>
#include <string.h>

int length(char a[50])
{
    int count = 0;
    for (int i = 0; i < 50; i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    char a[50];
    printf("What is your name: ");
    gets(a);
    printf("Hello ");
    puts(a);
    int len = length(a);
    printf("Your name has %d characters\n", len);
}
