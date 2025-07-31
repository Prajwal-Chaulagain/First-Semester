#include<stdio.h>
 
 void main()
 {
    int num, counter, sum = 0;
    char choice;
    do
    {
    printf("Enter any number;");
    scanf("%d", &num);
    sum+=num;
    printf("Enter y to continue and else to exit");
    scanf(" %c", &choice); /* code */
    } while(choice =='y');/* condition */;
    printf("sum=%d", sum);
 }