#include <stdio.h>

int main()
{
    int n;
    float sum = 0, average = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &num[i]);
        sum += num[i];
    }

    average = sum / n;

    printf("The sum of numbers is %.2f.\n", sum);
    printf("The average of numbers is %.2f.\n", average);

    return 0;
}
