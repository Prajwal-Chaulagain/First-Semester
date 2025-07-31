#include<stdio.h>

void main(){
    int num, rev, temp, digit;
    printf("Enter a number to check for palindrome: ");
    scanf("%d", &num); 
    temp=num;
    while(num!=0){
        digit=num%10;
        rev=rev*10 + digit;
        num/=10;
    }
    if(rev==temp){
        printf("The number is palindrome. \n");
    }
    else{
        printf("The number is not palindrome. \n");
    }
}