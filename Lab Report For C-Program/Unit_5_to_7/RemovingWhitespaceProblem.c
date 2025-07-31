#include <stdio.h>
#include <string.h>

void main()
{
    char sentws[100];
    char sentnws[100];
    printf("Enter sentence:\n");
    gets(sentws);
    int i, j = 0;
    for (i = 0; sentws[i] != '\0'; i++)
    {
        if (sentws[i] == ' ' || sentws[i] == '\n' || sentws[i] == '\t')
            continue;
        else
        {
            sentnws[j] = sentws[i];
            j++;
        }
    }
    printf("%s", sentnws);
}

