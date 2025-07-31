#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your name:\n");
    gets(name);
    int length=0,i=0;
    while(name[i]!='\0') {
        length++;
        i++;
    }
    printf("%s has %d length\n",name,length);
    printf("Length using strlen=%d",strlen(name));
    return 0;
}