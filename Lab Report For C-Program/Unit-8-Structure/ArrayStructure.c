#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    }emp[5];
    void main()
    {
        printf("Enter the information of 5 employees:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("Enter id of %d employee:\n", i+1);
            scanf("%d", &emp[i].id);
            printf("Enter name of %d employee:\n", i+1);
            scanf("%d", &emp[i].name);
}
printf("The employees are listed below:\n");
printf("id\tname\t\n");
for (int i = 0; i < 5; i++)
{
    printf("%d\t%s\n", emp[i].id, emp[i].name);
}
    }