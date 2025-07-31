#include<stdio.h>

void main(){
    int num, digit, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num!=0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("The sum of digits of number is %d \n", sum);
    
    
}