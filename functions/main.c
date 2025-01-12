/*
Functions:
THere are three major elements:
    1. Function Declaration
    2. Function Definition
    3. FUnction Call
*/

#include <stdio.h>
#include <math.h>
#include "temp.h"

#define A = 12
#define B = 6

// Function Declaration
int sum(int, int);
// main function
int main()
{
    int a = 5, b = 6, c;

    // function call
    // Arguments passed here are actual arguments
    c = sum(a, b);
    printf("Sum of a+b is %d\n", sum(a, b));

    // swap using pointers
    printf("a : %d before swap and b : %d before swap", a, b);
    swap(&a, &b);
    printf("\na is %d and b is %d\n", a, b);
}

// function definition
// Arguments present here are formal arguments
int sum(int a, int b)
{
    return (a + b);
}