#include <stdio.h>
void main()
{
    float sales, commission;
    printf("Enter the monthly sales: ");
    scanf("%f", &sales);
    if (sales < 10000)
    {
        commission = 0.05 * sales;
    }
    else
    {
        commission = 0.1 * sales;
    }
    printf("The commission is Rs. %f \n", commission);
} 