#include <stdio.h>
#include <string.h>
#include<ctype.h>
int isVowel(char c)
 {
c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void deleteVowels(char *str)
 {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (!isVowel(str[i])) 
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; 
}
void main()
 {
    char str[100];
printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    deleteVowels(str);
    printf("String after removing vowels: %s\n", str);
} 