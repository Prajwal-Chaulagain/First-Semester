#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
#define MAX_LOCATION_LENGTH 50
#define FILENAME "university.dat"

struct College 
{
    char name[MAX_NAME_LENGTH];
    char location[MAX_LOCATION_LENGTH];
    int numFaculties;
};
int main()
{
    FILE *file;
    int numColleges;
    printf("Enter the number of colleges: ");
    scanf("%d", &numColleges);
    getchar(); 
    file = fopen(FILENAME, "wb");
    if (file == NULL)
     {
        printf("Error opening file.\n");
        return 1;
    }
    struct College college;
    for (int i = 0; i < numColleges; i++)
     {
        printf("\nEnter details for college %d:\n", i + 1);
        printf("Name: ");
        fgets(college.name, MAX_NAME_LENGTH, stdin);
        strtok(college.name, "\n"); 
        printf("Location: ");
        fgets(college.location, MAX_LOCATION_LENGTH, stdin);
        strtok(college.location, "\n"); 
        printf("Number of faculties: ");
        scanf("%d", &college.numFaculties);
        getchar(); 
        fwrite(&college, sizeof(struct College), 1, file);
    }
    fclose(file);
    file = fopen(FILENAME, "rb");
    if (file == NULL)
     {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nColleges located in Kathmandu:\n");
    while (fread(&college, sizeof(struct College), 1, file) == 1) 
    {
        if (strcmp(college.location, "Kathmandu") == 0) 
        {
            printf("%s\n", college.name);
        }
    }
    fclose(file);
    return 0;
}
