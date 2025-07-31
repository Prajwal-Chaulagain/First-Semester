#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char paragraph[100];
    int vow=0,cons=0,comm=0,semi=0,ws=0;
    printf("Write an essay on your country: \n");
    gets(paragraph);
    int i=0;
    while(paragraph[i]!='\0'){
    strlwr(paragraph);
    i++;
    }
    int len=strlen(paragraph);
    for(int i=0; i<len; i++) {
        if(paragraph[i]=='a' || paragraph[i]=='e' || paragraph[i]=='i' || paragraph[i]=='o' || paragraph[i]=='u') {
            vow++;
        }
        else if(paragraph[i]==',') {
            comm++;
        }
        else if(paragraph[i]==';') {
            semi++;
        }
        else if(paragraph[i]==' ') {
            ws++;
        }
        else {
            cons++;
        }
    }
    printf("Vowel=%d, Comma=%d, Semi-colon=%d Whitespace=%d Consomant=%d",vow, comm, semi, ws, cons);
    return 0;
}