#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *arr, int n)
 {
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1])
             {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
 {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Integers in ascending order:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
