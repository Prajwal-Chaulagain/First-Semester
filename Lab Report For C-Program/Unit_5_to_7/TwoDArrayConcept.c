#include<stdio.h>

void main()
{
    int matrix[2][3];
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter matrix[%d][%d]=", i, j);
            scanf("%d", &matrix[i][j]);
            for(i = 0; i < 2; i++)
            {
                for(int j = 0; j < 3; j++)
                printf("Enter number[%d][%d]:",i,j);
                scanf("%d", &matrix[i][j]);
            }
            
        }
    }
    printf("\nThe values in matrix are:\n");
    for (i = 0; i < 2; i++)
     {
                for(int j = 0; j < 3; j++)
                {
                    printf("%d", matrix[i][j]);
                }
                printf("\n");
                 }
}