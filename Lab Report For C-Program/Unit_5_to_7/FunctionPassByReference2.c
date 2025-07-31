#include<stdio.h>

void swap(int *a, int *b, int*c) {
    int temp;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
}
int main()
{
    int x=100,y=200,z=300;
    printf("Before swap: (%d,%d,%d)", x,y,z);
    swap(&x,&y,&z);
    printf("After swap: (%d,%d,%d)",x,y,z);
    return 0;
}