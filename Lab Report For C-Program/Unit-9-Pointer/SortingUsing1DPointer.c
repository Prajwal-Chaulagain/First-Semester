#include<stdio.h>
void Sorting(int *);
void main()
{
    int num[10];
    printf("Enter the elements in num array:\n");
    for (int i = 0; i < 10; i++)
    {
    scanf("%d", num + i);
    }
    printf("Array before sorting:\n");
    for (int i = 0; i < 10; i++)
{
  printf("%d\t",*(num + i));
}
    Sorting(num);
     printf("Array after sorting:\n");
     for (int i = 0; i < 10; i++)
     {
         printf("%d\t",*(num + i));
     }
}
void Sorting(int *n)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if(*(n + i) > *(n + j))
            {
                int temp;
                temp = *(n +i);
                *(n + i) = *(n +j);
                *(n + j) = temp;
            }
        }
    }
}