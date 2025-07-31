#include<stdio.h>
int global = 5;
void main()
{
    int local = 10;
    printf("%d", global);
    printf("%d", local);
}
void test()
{
    int local = 5;
    printf("%d", global);
    printf("%d", local);
}