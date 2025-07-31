#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    char name[20];
    float fee;
}st[50];
void main()
{
    int i, n;
    printf("How many students?\n");
    scanf("%d", &n);
    printf("Enter %d student:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter id of %d. student:\n", i);
        scanf("%d", &st[i].id);
        printf("Enter name of %d. student:\n", i);
        scanf("%d", &st[i].name);
        printf("Enter fee of %d. student:\n", i);
        scanf("%d", &st[i].fee);
    }
    printf("Student before sorting:\n");
    printf("id\tname\tfree\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t.2f\n", st[i].id, st[i].name, st[i].fee);
    }
    for(i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n; j++)
        {
          //  if (st[i].id > st[j].id);
         if (strcmp(st[i].name, st[j].name)>0)
        
            {
                struct Student temp;
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;

            }
        }
    }
     printf("Student afters sorting:\n");
    printf("id\tname\tfree\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t.2f\n", st[i].id, st[i].name, st[i].fee);
}
}