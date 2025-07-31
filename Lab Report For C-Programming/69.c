#include <stdio.h>
int binarySearch(int arr[], int left, int right, int x)
 {
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
void main()
 {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12; 
int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element %d is not present in array\n", x);
    else
        printf("Element %d is present at index %d\n", x, result);
}