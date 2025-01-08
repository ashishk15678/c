/*
Program to calculate area of circle
*/

#include <stdio.h>

int main()
{
    float radius = 2;

    // If you want to take input from user
    printf("Enter radius of the circle you want area of: ");
    scanf("%f", &radius);

    // Some constants
    float pi = 3.14159;
    float area = pi * (radius * radius);

    // output
    printf("Area of the circel of radius %f is %f", radius, area);
    printf("\n\n");
    return 0;
}