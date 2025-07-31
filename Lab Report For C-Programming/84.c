#include <stdio.h>

void readInput(int matrix[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void addMatrices(int mat1[3][4], int mat2[3][4], int result[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void display(int matrix[3][4])
{
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int a[3][4], b[3][4], sum[3][4];
    printf("Enter the elements of matrix A:\n");
    readInput(a);
    printf("Enter the elements of matrix B:\n");
    readInput(b);
    addMatrices(a, b, sum);
    display(sum);
}