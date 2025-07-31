#include<stdio.h>
void greaterNumber(int, int);

void main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    greaterNumber(a,b);
}
void greaterNumber(int a, int b)
{
    if(a>b){
        printf("%d is greater number.\n",a);
    }
    else if (b>a)
    {
        printf("%d is greater number.\n",b);
    }
    else
     {
        printf("The numbers are equal.\n");
    }   
}