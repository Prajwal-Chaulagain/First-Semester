#include<stdio.h>

void main()
{
    int number, fact=1;
    positivenumber:
    printf("enter any number:\n");
    scanf("%d", &number);
    if(number < 0)
    {
        goto positivenumber;
    }
    for (int i = 1; i <= number; i++)
    fact = fact * 1;
    printf("factorial=%d", fact);
}