#include<stdio.h>
void main()
{
int mat1[2][3] = {{1, 2, 3}, {2, 4, 6}};
int mat2[3][2] = {{1, 1}, {2, 2}, {1, 3}};
int product[2][2];
for(int i = 0; i < 2; i++)
{
    int row_mul_col=0;
    for (int j = 0; j < 2; j++)
    {
    for (int k= 0; k < 3; k++)
    {
        row_mul_col=row_mul_col+mat1[i][k]*mat2[k][j];
    }
    product[i][j]=row_mul_col;
    row_mul_col=0;
 }
}
for(int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
{
    printf("%d\t", product[i][j]);
}
printf("\n");
}
}
