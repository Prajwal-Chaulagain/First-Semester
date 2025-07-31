#include<stdio.h>
int calculateSum(int);
void main()
{
    int n, sum=0;
    printf("Enter the value of n to find sum of natural numbers:");
    scanf("%d", &n);
    sum=calculateSum(n);
    printf("The sum of first %d natural numbers is %d", n, sum);
}
int calculateSum(int n)
{
    if(n==0){
        return 0;
    }
    else{
        return n+calculateSum(n-1);
    }
}
 