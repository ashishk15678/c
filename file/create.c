#include <stdio.h>
int main()
{
    FILE *f;
    f = fopen("file/data/new.txt", "a");
    for (int i = 0; i < 100; i++)
    {
        fprintf(f, "%d : Hello it should work\n", i + 1);
    }
    fclose(f);
    return 0;
}