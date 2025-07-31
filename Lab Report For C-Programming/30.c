#include <stdio.h>
void main()
{
    char choice;
    printf("Enter A, B, C, D or E:");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'A':
        printf("Excellent. \n");
        break;
    case 'B':
        printf("Very Good. \n");
        break;
    case 'C':
        printf("Good. \n");
        break;
    case 'D':
        printf("Satisfactory. \n");
        break;
    case 'E':
        printf("Fail. \n");
        break;
    default:
        printf("Invalid character. \n");
        break;
    }
}