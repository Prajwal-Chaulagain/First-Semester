#include<stdio.h>
#include<string.h>
int main()
{
    char first[10]="Ram";
    char second[10]="Shyam";
    if(strcmp(first,second)==0) {
        printf("%s and %s are same string.",first,second);
    }
    else {
        printf("%s and %s are not same string.", first, second);
    }
    return 0;
}