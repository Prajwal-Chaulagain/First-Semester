#include<stdio.h>

void main(){
    int a=0, b=1, c, i;
    printf("The first 25 numbers of Fibonacci series are:");
    printf("%d\t%d\t", a, b);
    for(i=1;i<=23;i++){
        c=a+b;
        printf("%d\t", c);
        a=b;
        b=c;
    }
    printf("\n");
} 