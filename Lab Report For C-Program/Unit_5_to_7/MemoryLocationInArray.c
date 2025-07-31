#include<stdio.h>
void main()
{
    double salary[5] = {2345.67, 3456.45,6789.90, 5467.89, 4356.78};
    for (int i = 0; i < 5; i++)
    printf("Salary amount %.2lf located in address %u\n", salary[i], &salary[i]);
}