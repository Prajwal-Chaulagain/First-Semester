#include<stdio.h>

void main()
{
    int n, fact = 1;
    float sum=0.0;
    printf("Enter terms:\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
    fact = fact * i;
    sum = sum + (float) i / fact; 
}
printf("series sum = %.2f", sum);
}