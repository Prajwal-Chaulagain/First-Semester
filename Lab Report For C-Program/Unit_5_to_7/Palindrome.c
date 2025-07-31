#include<stdio.h>

void main()
{
    int num, temp, digit, rev=0;
    printf("Enter any number");
    scanf("%d", &num);
    temp=num;
    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (temp == rev){
    printf("%d is palindrome", temp);
}
else 
{
    printf("The number is not palindrom.");
}
}