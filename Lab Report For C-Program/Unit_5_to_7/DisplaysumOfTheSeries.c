#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    float sum = 0.0, x;
    printf("Enter terms:\n");
    scanf("%d", &n);
    printf("enter value of x:\n");
    scanf("%f", &x);
    for(int i; i <= n; i++)
    {
        if(i % 2 ==0)
        {
            sum = sum - pow(x, i);
        }
        else
        {
            sum = sum + pow(x, i);
        }
    }
    printf("series sum=%.2f", sum);
}