/*
Program to find grade of user on the basis of percentage

Criterai for percentage:
            Percentage              Grade

                M>=90               A
                75<=M<90            B
                60<=M<75            C
                50<=M<60            D
                M<50                Fail

Example :
            Enter your percentage : 92
            Your Grade is A

            Enter your percentage : 80
            Your Grade is A

            Enter your percentage : 25
            Unfortunately you failed
*/

#include <stdio.h>
int main()
{
    float a;
    printf("\nAssign Grade on basis of percentage\n\n");

    printf("Enter your percentage :");
    scanf("%f", &a);

    if (a >= 90)
    {
        printf("Your grade is A\n");
    }
    else if (a >= 75)
    {
        printf("Your grade is B\n");
    }
    else if (a >= 60)
    {
        printf("Your grade is C\n");
    }
    else if (a >= 50)
    {
        printf("Your grade is D\n");
    }
    else
    {
        printf("Unfortunately you failed\n");
    }
    return 0;
}