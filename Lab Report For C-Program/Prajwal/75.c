#include <stdio.h>
#include <string.h>
void main()
{
    char text[50];
    printf("Enter the string to check for palindrome: ");
    scanf("%s", &text);
    if (strcmp(text, strrev(text)) == 0)
    {
        printf("The string is palindrome.\n");
    }
    else
    {
        printf("The string is not palindrome.\n");
    }
}