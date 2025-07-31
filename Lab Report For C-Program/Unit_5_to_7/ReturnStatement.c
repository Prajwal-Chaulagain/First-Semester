#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("Even numbers from 1 to 20:\n");
    for (int i = 1; i <= 20; i++)
    {
        if (i==5)
        exit(0);
        printf("%d\t", i);
    }
}