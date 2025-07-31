#include <stdio.h>

void main()
{
    int i;
    printf("Using for loop:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Prajwal\n");
    }
    i = 0;
    printf("\nUsing while loop:\n");
    while (i < 10)
    {
        printf("Prajwal\n");
        i++;
    }
    i = 0;
    printf("\nUsing do-while loop:\n");
    do
    {
        printf("Prajwal\n");
        i++;
    } while (i < 10);
}