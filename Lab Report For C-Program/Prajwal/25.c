#include <stdio.h>
#include<math.h>

void main()
{
    int years;
    float deposit, rate, amount, interest;
    printf("Enter the deposit amount: ");
    scanf("%f", &deposit);
    printf("Enter the years you want to deposit: ");
    scanf("%d", &years);
    if (deposit<1000 && years>=2)
    {
        rate = 0.05;
    }
    else if (deposit>=1000 && deposit<=5000 && years>=2)
    {
        rate = 0.07;
    }
    else if (deposit>5000 && years>=1)
    {
        rate = 0.08;
    }
    else if (years>=5)
    {
        rate = 0.1;
    }
    else
    {
        rate = 0.3;
    }
    amount = deposit * pow(1+rate,years);
    interest = amount - deposit;
    printf("You have Rs%f in your account.\n",amount);
    printf("Your calculate interest is Rs%f",interest);
     }