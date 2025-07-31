#include <stdio.h>

void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number is even. \n");
    }
    else
    {
        printf("The number is odd. \n");
    }
}