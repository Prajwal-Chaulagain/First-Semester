#include<stdio.h>
int Factorial(int);
int Factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}
void main()
{
    int n, r, fact1, fact2, fact3;
    float Cnr;
    printf("Enter the value of n and r:\n");
    scanf("%d %d", &n, &r);
    fact1 = Factorial(n);
    fact2 = Factorial(n-r);
    fact3 = Factorial(r);
    Cnr = (float)(fact1 / (fact2 * fact3));
    printf("Cnr=%.0f", Cnr);
}
