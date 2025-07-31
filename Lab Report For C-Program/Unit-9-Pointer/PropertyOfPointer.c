#include<stdio.h>
void main()
{
    int a = 20;
    int *p = &a;
    printf("Five blocks after %u are as follows:\n", p);
    for(int i = 1; i <= 5; i++)
    {
        printf("%d %u address\n", i, p++);
    }
}