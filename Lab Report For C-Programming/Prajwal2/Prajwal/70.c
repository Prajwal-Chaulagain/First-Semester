#include <stdio.h>

void main()
{
    int num[] = {15, 6, 17, 8, 2, 3, 9, 12, 6, 10};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        { 
            if (num[i] > num[j])
            {
                int temp;
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    printf("The numbers in ascending order are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
}