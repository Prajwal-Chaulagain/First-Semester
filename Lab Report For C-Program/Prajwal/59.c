#include<stdio.h>
int product(int);
void main(){
    int n, sum=0;
    printf("Enter the value of n to find product of natural numbers:");
    scanf("%d", &n);
    sum=product(n);
    printf("The sum of first %d natural numbers is %d", n, sum);
}

int product(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*product(n-1);
    }
}
