#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Addition of matrix\n");
    printf("Enter the number of rows of matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of cols of matrix: ");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    // Input for first matrix
    printf("\nFirst matrix \n\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Value of element at %d row and %d col: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for second matrix
    printf("\nSecond matrix \n\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Value of element at %d row and %d col: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Sum and print here
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}