#include<stdio.h>

void main()
{
    int a[3][2], b[3][2], c[3][2];
    printf("Enter the elements of matrix A: \n");
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    {
    printf("Enter the element [%d][%d]: ",i,j);
    scanf("%d", &a[i][j]);
    }
    }
    printf("\nEnter the elements of matrix B: ");
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    {
    printf("Enter the element [%d][%d]: ",i,j);
    scanf("%d", &b[i][j]);
    }
    }
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("The addition of two matrices is:\n");
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    {
    printf("%d\t",c[i][j]);
    }
    printf("\n");
    }
}