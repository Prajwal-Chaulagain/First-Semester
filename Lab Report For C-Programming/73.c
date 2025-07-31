#include <stdio.h>
#include <string.h>
void main()
{
    char text[50];
    int k, vowel = 0, consonant = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", &text);
    k = strlen(text);
    for (int i = 0; i < k; i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    printf("The number of vowels is %d and consonants is %d.\n", vowel, consonant);
}