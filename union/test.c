#include <stdio.h>
union test
{
    char name[20];
    int a;
    float b;
};

int main()
{
    union test u;
    printf("Size of union test is : %ld bytes\n", sizeof(u));
    return 0;
}