#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student
{
    int roll_no;
    char name[50];
    char course[20];
    int semester;
};

void insertRecords(FILE *file, struct Student students[], int num_students)
{
    for (int i = 0; i < num_students; ++i)
    {
        fprintf(file, "%d %s %s %d\n", students[i].roll_no, students[i].name, students[i].course, students[i].semester);
    }
}

void displayRecords(FILE *file)
{
    struct Student student;
    printf("Records where course is B.Sc. IT and semester is 2:\n");
    while (fscanf(file, "%d %s %s %d", &student.roll_no, student.name, student.course, &student.semester) == 4)
    {
        if (strcmp(student.course, "B.Sc.IT") == 0 && student.semester == 2)
        {
            printf("Roll No.: %d, Name: %s, Course: %s, Semester: %d\n", student.roll_no, student.name, student.course, student.semester);
        }
    }
}

int main()
{
    struct Student students[MAX_STUDENTS];
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    getchar();
    printf("Enter student details:\n");
    for (int i = 0; i < num_students; ++i)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);
        getchar();
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        if (students[i].name[strlen(students[i].name) - 1] == '\n')
        {
            students[i].name[strlen(students[i].name) - 1] = '\0';
        }
        printf("Course: ");
        fgets(students[i].course, sizeof(students[i].course), stdin);
        if (students[i].course[strlen(students[i].course) - 1] == '\n')
        {
            students[i].course[strlen(students[i].course) - 1] = '\0';
        }
        printf("Semester: ");
        scanf("%d", &students[i].semester);
        getchar();
    }
    FILE *file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    insertRecords(file, students, num_students);
    fclose(file);
    file = fopen("student.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    displayRecords(file);
    fclose(file);
    return 0;
}