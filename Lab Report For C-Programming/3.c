#include<stdio.h>
void main()
{
    float principal,time,rate,SI;
    printf("Enter the principal:");
    scanf("%f",&principal);
    printf("Enter the time:");
    scanf("%f",&time);
    printf("Enter the rate:");
    scanf("%f",&rate);
    SI=(principal*time*rate)/100;
    printf("The simple interest is = %.2f",SI);
}