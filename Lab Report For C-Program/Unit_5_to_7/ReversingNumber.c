#include<stdio.h>
void main()
{
    int n, digit;
    printf("\nEnter number you want to reverse;");
    scanf("%d", &n);
    printf("\nThe reverse of the entered number is:");
    while(n!=0)
    {
        digit=n%10;
        printf("%d", digit);
        n=n/10;
    }
}