#include<stdio.h>
void DisplayName(char n[])
{
    printf("My name is %s", n);
}
void main()
{
    char name[20];
    printf("Enter your full name:");
    gets(name);
    DisplayName(name);
}