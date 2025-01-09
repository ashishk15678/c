/*
Program to check if the given year is leap year or not
    Example :
                1. Enter the year : 2020
                Leap year

                2. Enter the year : 1982
                Not Leap year
*/

#include <stdio.h>

int main()
{
    int year = 0;
    printf("Check for leap year\nEnter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0) || (year % 100) == 0 || (year % 400) == 0)
    {
        printf("Leap year\n");
        return 0;
    }
    printf("Not Leap year\n");
    return 0;
}