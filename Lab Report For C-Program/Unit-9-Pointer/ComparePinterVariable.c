#include<stdio.h>
void main()
{
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    if (pa < pb)
    {
        printf("%d is allocated at %u which is before %d is allocated at %u", a, pa, b, pb);
    }
    else
    {
         printf("%d is allocated at %u which is before %d is allocated at %u", b, pb, a, pa);
    }
}