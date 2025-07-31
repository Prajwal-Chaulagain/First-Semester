#include <stdio.h>
#include <string.h>

int isVowel(char ch)
 {
ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
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