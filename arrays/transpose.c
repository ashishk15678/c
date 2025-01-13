#include <stdio.h>
#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[ROWS][COLS], int transposed[COLS][ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int transposed[COLS][ROWS];

    printf("Original Matrix:\n");
    printMatrix(matrix);

    transposeMatrix(matrix, transposed);

    printf("\nTransposed Matrix:\n");
    printMatrix(transposed);

    return 0;
}