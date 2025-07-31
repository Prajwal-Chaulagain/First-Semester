#include<stdio.h>

void main()
{
    printf("even numbers from 1 to 20:\n");
    for (int i = 1; i <= 20; i++)
    {
        if(i % 2 != 0)
        continue;
        printf("%d\t", i);
    }
    printf("if you are seeing this statement means you have not used return or exit statement yet.");
}