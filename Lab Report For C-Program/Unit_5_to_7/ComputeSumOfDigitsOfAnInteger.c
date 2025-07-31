#include<stdio.h>
void main()
{
    int num, rem, q, sum=0;
    printf("\nEnter number to be checked:\t");
    scanf("%d", &num);
    do
    {
        q = num / 10;
        rem = num % 10;
        num = q;
        sum += rem;
        /* code */
    } while(q!=0);
    printf("\nThe sum of digits is:\t%d", sum);  
}