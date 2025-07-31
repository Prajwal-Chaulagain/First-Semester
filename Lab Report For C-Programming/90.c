#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

struct Student
 {
    int rollNo;
    char name[MAX_NAME_LENGTH];
    char class[10];
    int marks[5];
 };
float calculatePercentage(int marks[], int subjects)
{
    float total = 0;
    for (int i = 0; i < subjects; i++)
     {
        total += marks[i];
    }
    return (total / subjects);
}
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
        printf("Class: ");
        scanf("%s", students[i].class);
        printf("Marks in 5 subjects: ");
        for (int j = 0; j < 5; j++)
         {
            scanf("%d", &students[i].marks[j]);
        }
    }
    printf("\nStudent Records:\n");
    for (int i = 0; i < numStudents; i++)
     {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);
        printf("Class: %s\n", students[i].class);
        printf("Marks in 5 subjects: ");
        for (int j = 0; j < 5; j++)
         {
            printf("%d ", students[i].marks[j]);
        }
        float percentage = calculatePercentage(students[i].marks, 5);
        printf("\nPercentage: %.2f%%\n", percentage);
     }
}
