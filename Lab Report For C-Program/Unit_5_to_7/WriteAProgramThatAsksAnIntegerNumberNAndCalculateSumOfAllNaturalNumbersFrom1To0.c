#include<stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum+=1;
    }
    printf("Sum of natural numbers from 1 to %d is %d", n, sum);
    return 0;
}