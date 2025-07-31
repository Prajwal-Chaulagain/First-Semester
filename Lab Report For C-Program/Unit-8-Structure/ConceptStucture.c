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
    struct employee emp={25,"Prajwal",45678.8765,"Thasikhel"};
    printf("The information of an employee is:\n");
    printf("The employee id=%d\n", emp.id);
    printf("The employee name=%s\n", emp.name);
    printf("The employee address=%s\n", emp.address);
    printf("The employee salary=%d\n", emp.salary);
}
