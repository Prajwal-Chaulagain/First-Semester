#include<stdio.h>
#define MAX 50
void readInput(int num[], int n)
{
    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
}
int calculateSum(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
}
float calculateAverage(int num[], int n)
{
    float average = 0.0;
    int sum = calculateSum(num, n);
    average = sum / n;
    return average;
}
void main()
{
    int num[MAX], n, sum;
    float average;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);
    readInput(num, n);
    sum=calculateSum(num,n);
    average=calculateAverage(num,n);
    printf("The sum of the numbers is %d.\n", sum);
    printf("Th average of the numbers is %.2f.\n", average);
}