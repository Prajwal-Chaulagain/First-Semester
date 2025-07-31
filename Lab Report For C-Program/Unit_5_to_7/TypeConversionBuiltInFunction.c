#include<stdio.h>
#include<stdlib.h>
void main()
{
    char number1[10] = "256";
    char number2[10] = "744";
    int result = atoi(number1) + atoi(number2);
    printf("Result=%d", result);
    char hold[10];
    int test=3456;
    itoa(test, hold, 10);
    printf("%s", hold);
}