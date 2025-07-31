#include<stdio.h>

void main()
{
    int i=5, j;
    printf("The multiplication table of 5");
    for (j = 1; j <=10; j++)
    {
        printf("%dx%d=%d\n",i, j, i*j);
    }
}