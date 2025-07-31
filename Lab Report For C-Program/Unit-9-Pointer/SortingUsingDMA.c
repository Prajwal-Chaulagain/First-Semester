#include<stdio.h>
#include<stdlib.h>
void sortingDMA(int *, int n);
void main()
{
     int *ptr;
    ptr =(int*) malloc(5 * sizeof(int));
    printf("Enter the elements in memory block:\n");
    printf("Enter the values from %u address:\n", ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at address %u", ptr +i);
        scanf("%d", ptr +i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value at address %u is %d\n", ptr +i,*(ptr+i));
    }
    sortingDMA(ptr, 5);
    printf("After sorting:\n");
     for (int i = 0; i < 5; i++)
    {
        printf("The value at address %u is %d\n", ptr +i,*(ptr+i));

}
}
void sortingDMA(int *p,int n)
{
for (int i = 0; i < n-1; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (*(p + i) > *(p + j))
        {
            int temp;
            temp = *(p + i);
            *(p + i) = *(p + j);
            *(p + j) = temp;
        
        }
    }
}
}