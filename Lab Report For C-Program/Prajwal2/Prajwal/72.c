    #include <stdio.h>
#include <string.h>
void main()
{
    char name[50][25];
    printf("Enter the name of 50 students:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of student:");
        scanf("%s", &name[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                char temp[25];
                strcpy(temp, name[j]);
                strcpy(name[j], name[i]);
                strcpy(name[i], temp);
            }
        }
    }
    printf("The names in alphabetical form are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", name[i]);
    }
} 