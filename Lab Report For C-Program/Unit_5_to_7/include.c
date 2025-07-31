#include<stdio.h>
void Swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
void main()
{
    int x = 100, y = 200;
    printf("%d, %d)Before swap:\n", x, y);
    Swap(&x, &y);
    printf("(%d, %d)After swap:\n",x, y);
}