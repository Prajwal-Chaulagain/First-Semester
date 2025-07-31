#include <stdio.h>

void main()
{
    int i, count, n;
    printf("All the prime numbers less than 100 are:");
    for (n = 1; n <= 100; n++)
    {
        count = 0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\t", n);
        }
    }
    printf("\n");
}