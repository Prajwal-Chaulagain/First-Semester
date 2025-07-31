#include<stdio.h>
void main()
{
    void *vptr;
    int a = 400;
    vptr = &a;
    printf ("Value of a using void pointer = %d\n", *((int*)vptr));
    float b=300;
    vptr=&b;
    printf("value of b using void pointer = %.2f\n", *((float*)vptr));
    char c='b';
    vptr=&c;
    printf("Value of c using void pointer = %c\n", *((char*)vptr));
}