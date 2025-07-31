#include<stdio.h>

void main()
{
    int num, rev=0, digit;
    printf("Enter the number to be reversed: ");
    scanf("%d", &num);
    while(num!=0){
        digit=num%10;
        rev=rev*10 + digit;
        num/=10;
    }
    printf("The reversed number is %d \n", rev);
}