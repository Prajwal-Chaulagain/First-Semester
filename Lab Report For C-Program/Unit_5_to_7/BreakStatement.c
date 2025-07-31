#include<stdio.h>

void main()
{
    for (int i = 0; i < 60; i++)
    {
        printf("%d\n", i);
        if(i==24)
        {
            break;
        }
    }
}