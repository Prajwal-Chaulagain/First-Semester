#include <stdio.h>

void main()
{
    int month;
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of days in month %d is 31.\n", month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of days in month %d is 30.\n", month);
        break;
    case 2:
        printf("Number of days in month 2 is either 28 or 29 (leap year).\n");
        break;
    default:
        printf("Invalid month input. Please enter a month between 1 and 12.\n");
    }
}