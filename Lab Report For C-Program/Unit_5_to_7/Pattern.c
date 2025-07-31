#include<stdio.h>
void main()
{
    int rows, i, j, k,number = 2;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < i; j++)
        {
           // printf("%d\t", number * 10 + 1);
            printf("%d\t", number);
            number = number + 2;
        }
      printf("\n");
    }
    
}