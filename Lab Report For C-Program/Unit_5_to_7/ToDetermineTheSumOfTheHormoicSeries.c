#include<stdio.h>

void main()
{
    int n;
    float sum = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
{
    sum = sum + (double) (1.0/i);
}
printf("%.2lf", sum);
}