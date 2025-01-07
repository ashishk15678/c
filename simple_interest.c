/*
Program to calculate simple interest when principal , rate and time are provided
*/

#include <stdio.h>

int main()
{
    float prinicpal, rate, time;

    printf("\t\t Simple Interest Calcuator \n\n");

    // value of principal
    printf("Enter value of principal: ");
    scanf("%f", &prinicpal);

    // value of rate
    printf("Enter value of rate: ");
    scanf("%f", &rate);

    // value of time in years
    printf("Enter value of time in years: ");
    scanf("%f", &time);

    float SI = (prinicpal * rate * time) / 100;
    printf("Simple interest is: %f and amount is %f", SI, SI + prinicpal);
    printf("\n\n");
    return 0;
}