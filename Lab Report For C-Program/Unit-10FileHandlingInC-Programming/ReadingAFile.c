#include<stdio.h>
#include<stdlib.h>
void main()
{
     FILE *fptr;
     char ch;
    fptr = fopen("Text.txt", "r");
    if(fptr!= NULL)
    {
        printf("File opened successfully in read mode\n");
        do{
            ch = getc(fptr);
            putchar(ch);
        }
        while(ch != EOF);
        
    }
    else
    {
printf("Error opening file");
exit(1);
    }
    fclose(fptr);
}