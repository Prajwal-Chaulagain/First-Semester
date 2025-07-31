#include<stdio.h>
int rev(int);
void main()
{
    int n, r;
    printf("\n Enter number you want to reverse:");
    scanf("%d", &n);
    r = rev(n);
    printf("\n The reverse of the number is:%d", r);
}
int rev(int num)
{
    static int sum = 0;
    int r;
    if (num >0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        rev(num / 10);
    }
    return sum;
}