#include<stdio.h>
#include<stdlib.h>
void main()
{
     FILE *fptr;
     int n;
     fptr = fopen("Text.txt", "w");
     fscanf(fptr, "%d", &n);
     printf("Enter the value of n that is to be written in a file:\n");
     scanf("%d", &n);
     fprintf(fptr,"The num=%d", n);
     fclose(fptr);
}