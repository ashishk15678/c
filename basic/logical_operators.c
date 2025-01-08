#include <stdio.h>
#include <stdbool.h>
int main()
{

    bool a = true, b = false;
    printf("a=true,b=false , a&&b is %d\n", a && b);
    printf("a=true,b=false , a||b is %d\n", a || b);
    printf("a=true,b=false , !a is %d , !b is %d \n", !a, !b);

    int c, d, e;
    printf("Enter three numbers :");

    printf("\nFirst: ");
    scanf("%d", &c);

    printf("Second: ");
    scanf("%d", &d);

    printf("Third: ");
    scanf("%d", &e);

    printf("\nBoth a and b are greater than c , %d", (c > e) && (d > e));
    printf("\nEither a or b is greater than c , %d", (c > e) || (d > e));
    printf("\nReverse of above two arguments: \n Both : %d \n Either : %d\n ", !((c > e) && (d > e)), !((c > e) || (d > e)));
}