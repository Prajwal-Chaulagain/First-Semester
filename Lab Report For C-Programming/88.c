#include <stdio.h>

void addMatrices(int (*matrix1)[2], int (*matrix2)[2], int (*result)[2])
 {
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 2; j++)
         {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void printMatrix(int (*matrix)[2]) 
{
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 2; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void main()
 {
    int matrix1[3][2], matrix2[3][2], result[3][2];
    printf("Enter elements of first matrix (3x2):\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 2; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix (3x2):\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    addMatrices(matrix1, matrix2, result);
    printf("Resultant matrix after addition:\n");
    printMatrix(result);
}
