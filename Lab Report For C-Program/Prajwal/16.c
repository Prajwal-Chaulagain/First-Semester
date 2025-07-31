#include<stdio.h>

int main()
{
    float amount, discount;
    printf("Enter the purchased amount: ");
    scanf("%f", &amount);
    if(amount>=1000){
        discount=(0.05*amount);
        printf("The discount amount is %f \n", discount);
    }
    else{
        discount=(0.03*amount);
        printf("The discount amount is %f \n", discount);
    }
    return 0;
} 