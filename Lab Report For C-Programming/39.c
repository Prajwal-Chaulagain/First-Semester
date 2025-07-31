#include<stdio.h>

void main()
{
    int n, i;
    double sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        sum=sum+(double)(1/i);
    }
    printf("Sum is %lf \n", sum);
}