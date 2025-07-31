#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    if(fptr!= NULL)
    {
        printf("File opened successfully");
    }
    else
    {
printf("Error opening file");
exit(1);
    }
    fclose(fptr);
}