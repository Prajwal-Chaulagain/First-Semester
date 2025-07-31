#include<stdio.h>
void main()
{
    int num[20],n;
    printf("How many items in arry below 20?");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter num[%d]:");
        scanf("%d", &num[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }
}