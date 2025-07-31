#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **ptr, r = 2, c = 3;
    ptr = (int **)malloc(r * sizeof(int));
    for (int i = 0; i < r; i++)
    ptr[i] = (int*)malloc(c * sizeof(int));
    printf("Enter the values of matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("*ptr[%d][%d]=",i, j);
            scanf("%d", *(ptr + i) + j);
        }
    }
}
