#include<stdio.h>
void main()
{
    double salary[2][5] = {
     {2345.67, 3456.45,6789.90, 5467.89, 4356.78},
     {2345.67, 3456.45,6789.90, 5467.89, 4356.78}};
     for(int j = 0; j < 2; j++)
     {
        for (int i = 0; i < 5; i++)
     {
     printf("[%.2lf->%u]",salary [j][i], &salary[j][i]);
     }
     printf("\n");
     }
}