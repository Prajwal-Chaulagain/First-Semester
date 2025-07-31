#include<stdio.h>
int Factorial(int);// prototype
void main()
{
int fact = Factorial(5);
printf("Factorial=%d", fact);
}
    int Factorial(int n)
    {// Function definition
        if (n == 0|| n ==1)//base condition
        return 1;
        else
        return n*Factorial(n-1);
    }
