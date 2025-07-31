#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str)
{
    int length = strlen(str);
    int i, j;
    i = 0;
    j = length - 1;
    while (i < j) 
    {
        while (!isalnum(str[i]) && i < j) 
        {
            i++;
        }
        while (!isalnum(str[j]) && i < j) 
        {
            j--;
        }
        if (tolower(str[i]) != tolower(str[j])) 
        {
            return 0; 
        }
        i++; 
        j--; 
    }
    return 1; 
}
void main() 
{
    char str[100];
    printf("Enter a string to check for palindrome: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str)) 
    {
        printf("The string is a palindrome.\n");
    }
     else 
     {
        printf("The string is not a palindrome.\n");
    }
}
