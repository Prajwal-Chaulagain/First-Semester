#include<stdio.h>
#define SIZE 30
void main()
{
    int numbers[SIZE];
    int n;
    printf("Enter n number into arry:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter numbers [%d]:", i);
        scanf("%d", &numbers[i]);
    }
    printf("\nArray before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", numbers[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp;
                temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }
printf("\nArray after sorting:\n");
    for (int i = 0; i < n; i++)
 {
        printf("%d\t", numbers[i]);
    }
}