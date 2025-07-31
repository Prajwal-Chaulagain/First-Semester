#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 20

struct Student {
    char name[MAX_NAME_LENGTH];
    int roll;
    int marks[3];
    int totalMarks;
};
void calculateTotalMarks(struct Student *student)
 {
    student->totalMarks = 0;
    for (int i = 0; i < 3; i++) {
        student->totalMarks += student->marks[i];
    }
}
void swap(struct Student *a, struct Student *b)
 {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(struct Student students[], int n)
 {
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (students[j].totalMarks > students[j + 1].totalMarks) 
            {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}
void main()
 {
    struct Student students[MAX_STUDENTS];
    printf("Enter details of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++)
     {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        printf("Roll: ");=
        printf("Roll: %d\n", students[i].roll);
        printf("Total Marks: %d\n", students[i].totalMarks);
    }
}
