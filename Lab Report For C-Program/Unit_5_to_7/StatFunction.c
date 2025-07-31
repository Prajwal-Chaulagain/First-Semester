#include<stdio.h>
void stat()
{
    int x = 0;
    x = x+1;
    printf("x = %d\n", x);
}
void main()
{
    int i;
    for(i = 1; i <= 3; i++)
    stat();
}