#include<stdio.h>
#include<stdlib.h>
void main()
{
     FILE *fptr;
     int n;
     fptr = fopen("Text.txt", "r");
     fscanf(fptr, "%d", &n);
     printf("The read data from file=%d", n);
     fclose(fptr);
}