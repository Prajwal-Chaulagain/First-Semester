#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 100, y = 200;
    printf("Before swap: (%d,%d)", x, y);
    swap(&x, &y);
    printf("After swap: (%d,%d)", x, y);
    return 0;
}
