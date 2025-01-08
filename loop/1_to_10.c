/*
Program to type from 1 to 10

    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
    End
*/
#include <stdio.h>
int main()
{
    printf("Program to enter numbers from 1 to 10\n\n");
    // Using while
    // int n = 1;
    // while (n <= 10)
    // {
    //     printf("%d\n", n);
    //     n++;
    // }

    // Using for loop
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", i);
    // }

    // using do while
    int n = 1;
    do
    {
        printf("%d\n", n);
        n++;
    } while (n <= 10);

    printf("End\n");
    return 0;
}