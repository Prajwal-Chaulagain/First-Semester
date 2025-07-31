#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct person
{
    char name[20];
    int id;
    struct Date birth, death;
    
};
struct Student
{
    char name[20];
    struct Date admissiondate;
};
void main()
{
    struct Student st;
    printf("Enter the information of student:\n");
    scanf("%s %d %d %d", &st.name, &st.admissiondate.day,&st.admissiondate.month, &st.admissiondate.year);
    printf("The entered data are as follow:\n");
    printf("Name%s\nDate of admission=%d-%d-%d", st.name, st.admissiondate.day, st.admissiondate.month, st.admissiondate.year);
}
