#include <stdio.h>
#define MAX 50
int calculateSum(int *num, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(num + i);
    }
    return sum;
}
float calculateAverage(int *num, int n)
{
    int sum = calculateSum(num, n);
    float average = (float)sum / n;
    return average;
}
void main()
{
    int num[MAX], n, sum;
    float average;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", num + i);
    }
    sum = calculateSum(num, n);
    average = calculateAverage(num, n);
    printf("The sum of the numbers is %d.\n", sum);
    printf("The average of the numbers is %.2f.\n", average);
}