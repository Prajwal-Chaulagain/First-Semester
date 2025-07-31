#include<stdio.h>
struct employee
{
int id;
char name[20];
float salary;
char address[20];
}emp;
void main()
{
    //structure initialization
    //read structure data
    printf("Enter the data of emp variable\n");
    printf("Enter id:\n");
    scanf("%d", &emp.id);
     printf("Enter name:\n");
     scanf("%s", &emp.name);
     printf("Enter address:\n");
    scanf("%s", &emp.address);
      printf("Enter salary:\n");
    scanf("%f", &emp.salary);
    printf("The information of an employee is:\n");
    printf("The employee id=%d\n", emp.id);
    printf("The employee name=%s\n", emp.name);
    printf("The employee address=%s\n", emp.address);
    printf("The employee salary=%.2f\n", emp.salary);
}
