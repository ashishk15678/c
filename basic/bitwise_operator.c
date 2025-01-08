/*
Bitwise Operators in C
*/

#include <stdio.h>
int main()
{
    printf("\t\tBitwise Operators in C\n");
    int a = 5, b = 6;
    printf("Bitwise AND , %d\n", a & b);
    printf("Bitwise OR , %d\n", a | b);
    printf("Bitwise XOR , %d\n", a ^ b);

    printf("Bitwise Left shift for a with 1 place, %d\n", a << 1);
    printf("Bitwise Right shift for a with 1 place, %d\n", a >> 1);

    printf("Bitwise Left shift for b with 1 place, %d\n", b << 1);
    printf("Bitwise Right shift for b with 1 place, %d\n", b >> 1);

    //
    // INCREMENT ADN DECREMENT OPERATORS IN C
    //

    a = 10;
    ++a;
    printf("Pre increment :%d\n", a);
    a++;
    printf("Post increment :%d\n", a);

    --a;
    printf("Pre Decrement :%d\n", a);
    a--;
    printf("Post Decrement :%d\n", a);
}