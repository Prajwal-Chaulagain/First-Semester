#include<stdio.h>
#include<string.h>
int main()
{
    char src[100], dest[100];
    printf("Enter source string: \n");
    gets(src);
    strcpy(dest,src);
    printf("Destination string =%s",dest);
    return 0;
}