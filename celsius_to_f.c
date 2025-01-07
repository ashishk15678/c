/*
Program to calculate temprature in fahrenheit , when provided temperature in celsius
*/
#include <stdio.h>

int main()
{
    printf("\t\t CELSIUS TO FAHRENHEIT \n\n");
    float celsius;

    printf("Enter value in celsius : ");
    scanf("%f", &celsius);

    float fahrenheit = ((9 * celsius) / 5) + 32;
    printf("The temperature in fahrenheit is : %f\n\n", fahrenheit);
    return 0;
}