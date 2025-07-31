#include<stdio.h>

void main(){
    int num, fact=1, i;
    printf("Enter the number to find factorial: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        fact*=i;
    }
    printf("The factorial of %d is %d \n", num, fact);
}