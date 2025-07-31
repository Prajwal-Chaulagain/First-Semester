#include<stdio.h>
void main ()
{
    FILE *fp;
    fp=fopen("Text.txt", ("w+"));
    fputs("This is vedascollege.edu.np", fp);
    fseek(fp, 8, SEEK_SET);
    fputs("C programming Language", fp);
    rewind(fp);
    printf("%d", ftell(fp));
    char text[50];
    printf("%s", fgets(text, 50, fp));
    fclose(fp); 
}