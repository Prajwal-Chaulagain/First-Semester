#include <stdio.h>

int main()
{
    int a[3][3], sum=0;
    printf("Enter the elements of matrix A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum+=a[i][j];
        }
    }
    printf("The sum of all elements of the matrix is %d\n",sum);
    return 0;
}