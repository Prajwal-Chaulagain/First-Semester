#include<stdio.h>
void main()
{
    int matrix[2][3];
    printf("Enter the matrix values:\n");
    for(int i=0; i<2; i++)
    {
         for(int j=0; j<3; j++)
         {
            scanf("%d", *(matrix + i) + j);
         }
    }
    printf("The values are:\n");
    for(int i=0; i<2; i++)
    {
         for(int j=0; j<3; j++)
         {
            printf("%d\t", *(*(matrix + i) + j));
         }
         printf("\n");
    }
}