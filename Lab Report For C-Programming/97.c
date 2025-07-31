#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
#define MAX_OFFICE_LENGTH 100
#define FILENAME "employee.dat"

struct Employee 
{
    char name[MAX_NAME_LENGTH];
    int id;
    char office[MAX_OFFICE_LENGTH];
    char occupation[MAX_NAME_LENGTH];
};

int main() 
{
    FILE *file;
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    getchar(); 
    file = fopen(FILENAME, "wb");
    if (file == NULL)
     {
        printf("Error opening file.\n");
        return 1;
    }
    struct Employee employee;
    for (int i = 0; i < numEmployees; i++) 
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        fgets(employee.name, MAX_NAME_LENGTH, stdin);
        strtok(employee.name, "\n");
        printf("Identification number: ");
        scanf("%d", &employee.id);
        getchar(); 
        printf("Office name: ");
        fgets(employee.office, MAX_OFFICE_LENGTH, stdin);
        strtok(employee.office, "\n"); 
        printf("Occupation: ");
        fgets(employee.occupation, MAX_NAME_LENGTH, stdin);
        strtok(employee.occupation, "\n"); 
        fwrite(&employee, sizeof(struct Employee), 1, file);
    }
    fclose(file);
    file = fopen(FILENAME, "rb");
    if (file == NULL)
     {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nEmployees in Everest Bank with occupation as manager:\n");
    while (fread(&employee, sizeof(struct Employee), 1, file) == 1) 
    {
        if (strcmp(employee.office, "Everest Bank") == 0 && strcmp(employee.occupation, "manager") == 0)
         {
            printf("%s\n", employee.name);
        }
    }
    fclose(file);

    return 0;
}
