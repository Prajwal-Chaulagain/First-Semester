#include<stdio.h>

void main()
{
    int num, counter;
    char choice ='y';
    while (choice == 'y')
    {
        int fact = 1;
    printf("Enter any number:");
    scanf("%d", &num);
    for (counter = 1; counter <= num; counter++)
    {
fact = fact * counter;
}
printf("Factorial=%d", fact);
printf("Enter y key to continue and else to exit");
scanf(" %c",&choice);
}
}