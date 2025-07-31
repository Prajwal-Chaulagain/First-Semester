#include<stdio.h>
int Fibonacci (int);
void main()
{
    int n;
    printf("Enter how many terms for fibonacci series:\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("%d\t",Fibonacci(i));
    }
}
int Fibonacci(int n)
{
    if (n == 0|| n == 1)//base condition
    return n;
    else
     return Fibonacci(n-1)+Fibonacci(n-2);
}