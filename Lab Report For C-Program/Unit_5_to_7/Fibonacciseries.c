#include<stdio.h>

void main()
{
    int terms, i, a = 0, b = 1, c;
    printf("How many terms in fibonacci series?\n");
    scanf("%d", &terms);
    printf("%d\t%d\t", a, b);
    for (i = 1; i <= terms-2; i++)
    {
        c=a+b;
        printf("%d\t", c);
        a=b;
        b=c;
    }

}