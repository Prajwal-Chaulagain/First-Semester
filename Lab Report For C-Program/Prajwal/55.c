#include<stdio.h>
int sumOfDigits(int);

void main(){
    int num, sum=0;
    printf("Enter the number to calculate sum of digits: ");
    scanf("%d", &num);
    sum=sumOfDigits(num);
    printf("The sum of digits is %d.\n", sum);
}

int sumOfDigits(int num){
    int digit, sum=0;
    while(num!=0){
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}