#include <stdio.h>

int main() 
 {
    int matrix[100][100], transposed[100][100];
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
        printf("Enter the element [%d][%d]:",i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    printf("Transposed matrix: \n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    return 0; 
}