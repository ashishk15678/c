#include <math.h>
#include <stdio.h>
/*
    Example :

        Enter number of rows : 4
        A B C D
        B C D A
        C D A B
        D A B C
*/
void printPattern(int n)
{
    char initial = 'A';
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == (j))
            {

                printf("%c ", (initial + j));
                continue;
            }
            printf("%c ", (initial + num + j));
        }
        printf("\n");
        num += 1;
    }
}

/*
Function to find factorial of any given number
    Example : factorial(3) -> 6
              factorial(4) -> 24
*/
int factorial(int n)
{
    int ret = 1;
    while (n > 1)
    {
        ret = ret * n;
        n -= 1;
    }
    return ret;
}

/*
Function to check for palindrome for
a given number

        Example : isPalindrome(121) -> 1
                  isPalindrome(234) -> 0

        where 1 stands for true and 0 for false
*/
int isPalindrome(int n)
{
    int m = n, sum = 0;
    while (n > 0)
    {
        sum = (sum * 10) + (n % 10);
        n = n / 10;
    }
    if (sum == m)
    {
        return 1;
    }
    return 0;
}

/*
This function checks for if the number provided is
Armstrong number or not.
    Example : armstrong(153) -> Armstrong
              armstrong(1531) -> Not Armstrong
*/
int armstrong(int n)
{
    int m = n, a = n, count = 0, sum = 0;

    // counting digits
    while (m > 0)
    {
        m = m / 10;
        count++;
    }

    // getting sum
    while (n > 0)
    {
        int temp = 1;
        for (int i = 0; i < count; i++)
        {
            temp = temp * (n % 10);
        }
        sum += temp;
        n = n / 10;
    }

    // check for armstrong number
    if (a == sum)
    {
        printf("%d , %d", sum, a);
        printf("\nArmstrong\n");
        return 1;
    }
    else
    {

        printf("%d , %d", sum, a);
        printf("\nNot armstrong\n");
        return 0;
    }
    return sum;
}

/*
Swap numbers :
              Example : a = 5, b = 7
                        swap(a,b) -> a = 7 , b =5

                        a = 5, b = 12
                        swap(a,b) -> a = 12 , b = 5

*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
