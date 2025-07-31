#include<stdio.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%[A-Z]", &name);
    //gets(name);
    printf("My name is %s",name);
    return 0;
}