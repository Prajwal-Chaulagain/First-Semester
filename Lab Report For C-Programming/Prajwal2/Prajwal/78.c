 #include <stdio.h>

void main()
{
    int matrix[4][4];
    int rowSum[4] = {0};
    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the element [%d][%d]:",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
}