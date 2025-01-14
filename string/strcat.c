#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Abcd", str2[20] = "Defg";
    strcat(str1, str2);
    puts(str1);
}