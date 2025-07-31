#include <stdio.h>
void main()
{
    float sub1, sub2, sub3, sub4, sub5, percent;
    printf("Enter the marks in five subjects:");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    if (sub1 >= 45 && sub2 >= 45 && sub3 >= 45 && sub4 >= 45 && sub5 >= 45)
    {
        printf("Pass.\n");
        percent = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
        printf("The percentage obtained is %.2f%%\n", percent);
        if (percent >= 80)
        {
            printf("Distinction. \n");
        }
        else if (percent >= 60)
        {
            printf("First Division. \n");
        }
        else
        {
            printf("Second Division. \n");
        }
    }
    else
    {
        printf("Fail.\n");
    }
}