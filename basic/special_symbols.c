/*
Special Symbols in C
*/
#include <stdio.h>
int main()
{
    int a = (2, 3);
    printf("a=(2,3) , but a = %d\n", a);
    int *p = &a;
    printf("Adrress of a is &a = %ld \n", p);
    printf("size of a is %ld bytes\n", sizeof(a));
    return 0;
}