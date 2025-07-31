#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_DESIGNATION_LENGTH 50

struct Employee 
{
    int employeeID;
    char name[MAX_NAME_LENGTH];
    char designation[MAX_DESIGNATION_LENGTH];
    float salary;
};
int compareEmployeeID(const void *a, const void *b)
 {
    struct Employee *employeeA = (struct Employee *)a;
    struct Employee *employeeB = (struct Employee *)b;
    return employeeA->employeeID - employeeB->employeeID;
}
int main()
 {
    FILE *file;
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    getchar(); 
    file = fopen("employee.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    struct Employee *employees = malloc(numEmployees * sizeof(struct Employee));
    if (employees == NULL)
     {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }
    printf("Enter details of %d employees:\n", numEmployees);
    for (int i = 0; i < numEmployees; i++) 
    {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        getchar(); 
        printf("Name: ");
        fgets(employees[i].name, MAX_NAME_LENGTH, stdin);
        strtok(employees[i].name, "\n");
        printf("Designation: ");
        fgets(employees[i].designation, MAX_DESIGNATION_LENGTH, stdin);
        strtok(employees[i].designation, "\n"); 
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        getchar(); 
        fwrite(&employees[i], sizeof(struct Employee), 1, file);
    }
    fclose(file);
    file = fopen("employee.dat", "rb");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        free(employees);
        return 1;
    }
    printf("\nRecords in ascending order of employee ID:\n");
    fread(employees, sizeof(struct Employee), numEmployees, file);
    qsort(employees, numEmployees, sizeof(struct Employee), compareEmployeeID);
    for (int i = 0; i < numEmployees; i++) 
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Salary: %.2f\n", employees[i].salary);
    }
    fclose(file);
    free(employees);
    return 0;
}
