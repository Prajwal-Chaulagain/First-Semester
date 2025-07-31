#include<stdio.h>

int main()
{
    char name[19]="Harendra Raj Bist";
    printf("%19s\n",name);
    printf("%10s\n",name);
    printf("%19.11s\n",name);
    printf("%19.0s\n",name);
    printf("%-19.11s\n",name);
    printf("%.3s\n",name);
    printf("%s\n",name);
    return 0;
}