#include<stdio.h>
void main()
{
    int sum=0, i;
    for ( i = 1; i <=10; i++)
    {
        sum+=(i*2);
    }
    printf("The sum of first 10 even numbers is %d \n", sum);
}