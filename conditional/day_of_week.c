/*
Program to type day of the week according to number provided
    Example :
                Enter the number : 1
                Monday

                Enter the number : 2
                Tuesday

                Enter the number : 12
                Out of Bonds
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Day of the week\n\n");
    printf("Enter the number: ");
    scanf("%d", &a);

    // if (a == 1)
    //     printf("Monday\n");
    // else if (a == 2)
    //     printf("Tuesday\n");
    // else if (a == 3)
    //     printf("Wednesday\n");
    // else if (a == 4)
    //     printf("Thursday\n");
    // else if (a == 5)
    //     printf("Friday\n");
    // else if (a == 6)
    //     printf("Saturday\n");
    // else if (a == 7)
    //     printf("Sunday\n");
    // else
    //     printf("Out of bonds\n");

    switch (a)
    {
    case (1):
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid output\n");
        break;
    }

    return 0;
}
