#include<stdio.h>
#include<math.h>
void main()
{
    int terms;
    float sumseries = 0.0, x;
    printf("How many geometriv terms?\n");
    scanf("%d", &terms);
    printf("Value of x=\t");
    scanf("%f", &x);
    sumseries = 1 + pow(x,2);
    for(int i = 3; i <= terms; i++)
    {
        sumseries = sumseries + i * pow(x, 2);
    }
    printf("Geometric series sum = %.2f", sumseries);
}