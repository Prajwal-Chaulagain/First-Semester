#include<stdio.h>
void main()
{
    int num1,num2,add,sub,mul;
    float div;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    add=num1 + num2;
    printf("the sum of %d and %d is %d:\n",num1, num2,add);
    sub=num1 - num2;   
    printf("the substraction of %d and %d is %d:\n",num1,num2,sub);
    mul=num1 * num2;
    printf("the multication of %d and %d is %d:\n",num1, num2, mul);
    div=num1 / num2;
    printf("the division of %d and %d is %d:\n",num1, num2, div);
}
