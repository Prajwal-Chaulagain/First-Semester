#include<stdio.h>

void main()
{
    int n1, n2, n3, greatest;
    printf("Enter three numbers");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > 2)
    {
        if (n1 > n3)
{
        greatest = n1;
    }
    else
    {
greatest =  n3;
    }
}
else
{
    if (n2 > n3)
    {
        greatest = n2;
    }
    else
    {
    greatest = n3;
    }
}
printf("%d is the greatest number:",greatest);
}