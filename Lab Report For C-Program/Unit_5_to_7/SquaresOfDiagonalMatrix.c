#include<stdio.h>
void main()
{
    int a[20][20], m, n, i, j;
    printf("Enter the order of square matrix(mxn):");
    scanf("%d %d", &m, &n);
    if (m==n)
    {
        for(i=0; i<m; i++)
        {
           for( j=0; j<n; j++)
            {
                printf("A  [%d][%d]=", i, j);
                scanf("%d", &a[i][j]);
 }
        }
for(i=0; i<m; i++)
        {
           for( j=0; j<n; j++)
           {
            if(i==j)
            {
                a[i][j]*=a[i][j];
            }
           }
    }
    printf("The resultant matrix is:\n");
    for(i=0; i<m;i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
else
{
    printf("Enter a squre matrix.");
}
}