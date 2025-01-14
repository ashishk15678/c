#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Multiplication of matrix\n");
    printf("Enter the number of rows of matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of cols of matrix: ");
    scanf("%d", &cols);

    if (rows != cols)
    {
        printf("ERROR : Rows should be equal to cols\n");
        return -1;
    }

    int a[rows][cols], b[rows][cols], prod[rows][cols];

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

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int temp = 0;
            for (int k = 0; k < rows; k++)
            {
                temp += (a[i][k] * b[k][j]);
            }
            prod[i][j] = temp;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
}