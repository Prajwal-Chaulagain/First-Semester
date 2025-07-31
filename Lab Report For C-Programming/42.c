#include<stdio.h>
#include<math.h>
void main()
{
    int n, i;
    float sum=0.0, x;
    printf("Enter the terms:");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    for(i=1;i<=n;i++){
    if(i%2==0){
    sum=sum-pow(x,i);
    }
    else{
    sum=sum+pow(x,i);
    }
    }
    printf("Sum is %f \n", sum);
}