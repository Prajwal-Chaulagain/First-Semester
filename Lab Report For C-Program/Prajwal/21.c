#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year to check for leap: ");
    scanf("%d", &year);
    if (year % 100 !=0)
    {
        if (year % 4 == 0)
        {
            printf("%d is a leap year \n", year);
        }
        else
        {
            printf("%d is not a leap year \n", year);
        }
    }
    else
    {
        if (year % 400 == 0)
        {
            printf("%d is a leap year \n", year);
        }
        else
        {
            printf("%d is not a leap year \n", year);
        }
    }
} 