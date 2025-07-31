#include <stdio.h>

void main()
{
    int n, i;
    int sum = 0;
    float average;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nUsing for loop:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    average = (float)sum / n;
    printf("\nSum: %d\nAverage: %.2f\n", sum, average);

    i = 1;
    sum = 0;
    printf("\nUsing while loop:\n");
    while (i <= n)
    {
        printf("%d ", i);
        sum += i;
        i++;
    }
    average = (float)sum / n;
    printf("\nSum: %d\nAverage: %.2f\n", sum, average);

    i = 1;
    sum = 0;
    printf("\nUsing do-while loop:\n");
    do
    {
        printf("%d ", i);
        sum += i;
        i++;
    } while (i <= n);
    average = (float)sum / n;
    printf("\nSum: %d\nAverage: %.2f\n", sum, average);
}