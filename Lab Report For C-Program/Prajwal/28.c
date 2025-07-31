#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("The numbers are equal. \n");
    }
    else
    {
        printf("The numbers are not equal. \n");
    }
}