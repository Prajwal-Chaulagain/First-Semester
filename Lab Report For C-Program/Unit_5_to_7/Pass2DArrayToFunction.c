#include<stdio.h>
#define ROW 20
#define COL 20
void multiply(int m1[ROW][COL], int m2[ROW][COL], int m, int n, int p, int q)
{
int k, row_mul_col=0, product[ROW][COL];
for(int i = 0; i < m; i++)
{
    for(int j = 0; j < q; j++)
    {
        for(int k = 0; k < n; k++)
        {
            row_mul_col=row_mul_col+m1[i][k]*m2[k][j];
        }
        product[i][j]=row_mul_col;
    }
}
printf("The product matrix is:\n");
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < p; j++)
    {
        printf("%d\t", product[i][j]);
    }
    printf("\n");
}
}
void main()
{
    int m, n, p, q, i, j, mat1[ROW][COL],mat2[ROW][COL];
    compatible:
    printf("Enter the size of mat1(mxn) and mat2(pxq):\n ");
    scanf("%dx%d %dx%d", &m, &n, &p, &q);
    if(n == p)
    {
        printf("Enter the elements in matrl:\n");
        for(i = 0; i < m; i++){

        
        for(j = 0; j < n; i++)
        {
            printf("mat1[%d][%d]=", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }


for(i = 0; i < p; i++)
{
        for(j = 0; j < q; j++)
        {
            printf("mat2[%d][%d]=", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    multiply(mat1, mat2, m, n, p, q);
    }
else
{
    printf("Matrices are not compatible for multiplication.\n Enter equal n and p:\n");
    goto compatible;
}
}