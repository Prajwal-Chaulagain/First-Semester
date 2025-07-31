#include<stdio.h>
void main()
{
    float d, n, price;
    printf("Enter the price of a dozen mango :");
    scanf("%f",&d);
    printf("Enter the number of mangoes that price is to be found:");
    scanf("%f",&n);
    price = (d/12)*n;
    printf("The price %.0f mangos is %.2f",n,price);
} 