#include <stdio.h>
void main()
{
    int n, num, sum = 0, i;
    printf("How many numbers do you want to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 5 == 0)
        {
            sum += num;
        }
    }
    printf("The sum of all numbers completely divisible by 5 is %d \n", sum);
}