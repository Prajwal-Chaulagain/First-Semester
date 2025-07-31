#include<stdio.h>
void main()
{
    int val=100;
    int *ptr;
    ptr=&val;
    int **qtr;
    qtr=&ptr;
    printf("Address of ptr=%u\n", val);
    printf("The value is %d\n", *ptr, ptr);
    printf("The value is %d at address %u\n", **qtr, qtr);

}