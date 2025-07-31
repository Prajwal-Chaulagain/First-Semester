#include<stdio.h>
double power(double, int);
void main()
{
    double x, result;
    int y;
    printf("Enter the values of x and y:\n");
    scanf("%lf %d", &x, &y);
    result = power(x,y);
    printf("The power result = %lf", result);
}
double power(double a, int b)
{
    double res=1;
    if(b==0)
    return 1.00;
    else if(b==1)
    return a;
    else if(b>0)
    {
while(b>0)
{
    res = res * a;
    b--;
}
    }
    else
    {
       while(b<0)
       {
        res = res / a;
        b++;
       }
    }
return res;
}