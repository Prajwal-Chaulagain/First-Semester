#include<stdio.h>

int main()
{
    char c[13]="CProgramming";
    int i,j;
    printf("--------------\n");
    for(i=0;i<=13;i++){
    j=i+1;
    printf("|%-12.*s|\n",j,c);
    }
    printf("--------------\n");
    return 0;
}