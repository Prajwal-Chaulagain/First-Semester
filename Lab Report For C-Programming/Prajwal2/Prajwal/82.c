    #include<stdio.h>

void main()
{
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("Enter the element [%d][%d]:",i,j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2)
    {
        printf("Multiplication not possible: Number of columns in first matrix must be equal to number of rows in second matrix.\n");
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Enter the element [%d][%d]:",i,j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}