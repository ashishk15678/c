#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, n = 10;
    printf("0\n");
    for (int i = 0; i < n - 1; i++)
    {
        int temp = t2;
        t2 = t1 + t2;
        t1 = temp;
        printf("%d\n", t1);
    }
}
// #include <stdio.h>
// int main()
// {
//     int t1 = 0, t2 = 1, nextterm, i, n = 10;
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d ", t1);
//         nextterm = t1 + t2;
//         t1 = t2;
//         t2 = nextterm;
//     }
// }