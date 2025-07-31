#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

int findName(char names[][MAX_NAME_LENGTH], int n, char *searchName)
{
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(names[i], searchName) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char names[MAX_STUDENTS][MAX_NAME_LENGTH] = {"John", "Alice", "Bob", "Emily", "David"};
    int numStudents = MAX_STUDENTS;

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    int index = findName(names, numStudents, searchName);
    if (index != -1)
    {
        printf("Name found at index %d\n", index);
    }
    else
    {
        printf("Name not found\n");
    }
    return 0;
}