#include <stdio.h>

void main()
{
    int year;

    printf("Leap years from 1900 to 2000:\n");

    for (year = 1900; year <= 2000; year++)
    {

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d\n", year);
        }
    }
}