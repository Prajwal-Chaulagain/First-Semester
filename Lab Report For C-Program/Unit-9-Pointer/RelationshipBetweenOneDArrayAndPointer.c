#include<stdio.h>
void main()
{
    int a[5];
    printf("Enter the elements in an array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", a + i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(a + i));
    }
}