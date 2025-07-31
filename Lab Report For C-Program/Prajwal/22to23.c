#include <stdio.h>
void main()
{
    float income, tax, netSalary;
    printf("Enter the income: ");
    scanf("%f", &income);
    if (income < 10000)
    {
        tax = 0;
    }

    if (income >= 10000 && income <= 19999)
    {
        tax = 0.1;
    }
    else if (income >= 20000 && income <= 39999)
    {
        tax = 0.15;
    }
    else
    {
        tax = 0.2;
    }
    netSalary = income - (tax * income);
    printf("The net salary after deducting tax is Rs. %f \n", netSalary);
}