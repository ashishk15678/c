/*
inputs your name and tells how many character your name has
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    printf("What is your name: ");
    gets(a);
    printf("Hello ");
    puts(a);
    int len = strlen(a);
    printf("Your name has %d characters\n", len);
}