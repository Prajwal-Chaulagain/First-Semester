#include<stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum+=i*i;
    }
    printf("Sum of squares of numbers upto %d is &d", n, sum);
    return 0;
}