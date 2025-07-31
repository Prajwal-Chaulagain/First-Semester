#include <stdio.h>

void main()
{
    int num[25], odd = 0, even = 0;
    for (int i = 0; i < 25; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 25; i++)
    {
        if (num[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d numbers are even and %d numbers are odd.\n", even, odd);
}
