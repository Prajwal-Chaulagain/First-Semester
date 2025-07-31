#include<stdio.h>
#include<string.h>
int main()
{
    char par[100];
    printf("Enter paragraph: ");
    gets(par);
    char word[10];
    printf("Enter the word to search:\n");
    gets(word);
    if(strstr(par,word)){
    printf("%s is present in paragraph.",word);
    }
    else{
    printf("%s is not present in paragraph.",word);
    }
    return 0;
}