#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
struct Student
 {
    int rollNo;
    char name[MAX_NAME_LENGTH];
    char faculty[20];
    int day;
    int month;
    int year;
};
void main()
 {
    struct Student students[MAX_STUDENTS];
    int numStudents;
    printf("Enter the number of students (max 100): ");
    scanf("%d", &numStudents);
    printf("Enter details of %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++)
     {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); 
        printf("Name: ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        printf("Faculty: ");
        scanf("%s", students[i].faculty);
        printf("DOB (date of birth - dd mm yy): ");
        scanf("%d %d %d", &students[i].day, &students[i].month, &students[i].year);
    }
    printf("\nRecords of students in B.Sc. IT faculty:\n");
    for (int i = 0; i < numStudents; i++)
     {
        if (strcmp(students[i].faculty, "B.Sc.IT") == 0)
         {
            printf("\nStudent %d:\n", i + 1);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s", students[i].name);
            printf("Faculty: %s\n", students[i].faculty);
            printf("DOB: %02d-%02d-%02d\n", students[i].day, students[i].month, students[i].year);
        }
    }
}
