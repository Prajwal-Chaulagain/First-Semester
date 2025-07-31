#include<stdio.h>

void main()
 {
    int choice, a, b;
    printf("Enter value of a and b;");
    scanf("%d %d", &a, &b);
    printf("Enter 1. Addition\n 2. Subtraction\n 3. Multiplication\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("addition: %d, a+b");
        break;
        case 2:
        printf("subraction: %d, a-b");
        break;
        case 3:
        printf("multiplication: %d, a*b");
        break;
        defacult:
        printf("invalid choice.");
    }
 }