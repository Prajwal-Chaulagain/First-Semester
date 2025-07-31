#include <stdio.h>
void toUpper(char *);
void main()
{
    char name[20];
    printf("Enter small letter:\n");
    gets(name);
    toUpper(name);
    printf("%s is in uppercase name", name);
}
void toUpper(char *let)
{
    for (int i = 0; i < 20; i++)
    {
        if (*(let + i) >= 97 && *(let + i) <= 122)
        {
            *(let + i) = *(let + i) - 32;
        }
    }
}