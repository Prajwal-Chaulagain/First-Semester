#include<stdio.h>
#define ROW 20
#define COL 20
void main()
{
    int A[ROW][COL], B[ROW][COL], C[ROW][COL], i, j, k, m, n, p, q,largest;
    compat:
    printf("Enter size of matrix A (mxn):");
    scanf("%d %d", &m, &n);
    printf("Enter size of matrix B (pxq):");
    scanf("%d %d", &p, &q);
    if (m>p && p>q)
    largest = p;
    else
    largest = q;
    if(n==p)
    {
for (i = 0; i < m; i++)
{
    for (j = 0; j < n; j++)
    {
        printf("A[%d][%d]=", i, j);
        scanf("%d", &A[i][j]);
    }
}
for (i = 0; i < p; i++)
{
    for (j = 0; j < q; j++)
    {
        printf("B[%d][%d]=", i, j);
        scanf("%d", &B[i][j]);
    }
}
for (i = 0; i < m; i++)
{
    for (j = 0; j < q; j++)
    {
        int row_mul_col = 0;
        for (k = 0; k < largest; k++)
        {
            row_mul_col += A[i][k] * B[k][j];
        }
        C[i][j]=row_mul_col;
    }
     }
     for (i = 0; i < m; i++)
{
    for (j = 0; j < q; j++)
    {
        printf("%d\t", C[i][j]);
    }
    printf("\n");
    }
}
else
{
    printf("%d is not equal to %d.\n", n, p);
    printf("Enter compatible sizes:\n");
    goto compat;
}
}