/*
Program  to check whether entered character is vowel or consonant
Example :
*/
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Program to check if the entered character is vowel or consonant\n");
    char c;
    printf("Enter the character :");
    scanf("%c", &c);

    switch (c)
    {
    case ('a'):
    case ('A'):
    case ('e'):
    case ('E'):
    case ('i'):
    case ('I'):
    case ('O'):
    case ('o'):
    case ('u'):
    case ('U'):
        printf("%c is vowel\n", c);
        break;

    default:
        printf("%c is consonant\n", c);
        break;
    }
    return 0;
}