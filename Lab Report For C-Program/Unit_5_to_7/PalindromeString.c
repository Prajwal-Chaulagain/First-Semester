#include<stdio.h>
#include<string.h>
int main()
{
    char place[10], temp[10];
    printf("Enter the name of place: ");
    gets(place);
    strcpy(temp,place);
    strrev(place);
    if(strcmp(place,temp)==0)
    {
    printf("%s is a palindrome string",temp);
    }
    else{
    printf("%s is not palindrome string", temp);
    }
    return 0;
} 