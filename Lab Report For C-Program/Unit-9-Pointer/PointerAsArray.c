#include<stdio.h>
#include<stdlib.h>
void main()
{
    //int a[5];
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
}