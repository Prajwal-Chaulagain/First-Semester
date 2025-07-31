#include<stdio.h>
void main()
{
    float usd,npr;
    printf("Enter the amount in usd:");
    scanf("%f",&usd);
    npr = usd*133.11;
    printf("The amount in nepalese rupee is Rs%f.",npr);
}