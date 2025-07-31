#include<stdio.h>
#include<math.h>
void main()
{
    int terms;
    float sumseries=0.0, x;
    printf("How many geometric terms?\n");
    scanf("%d", &terms);
    printf("Value of x=");
    scanf("%f", &x);
    sumseries=1+pow(x,2);
    for(int i=1;i<=terms-2;i++){
    sumseries=sumseries+ i*pow(x,2);
    }
    printf("Geometric series sum=%.2f \n",sumseries); 
}