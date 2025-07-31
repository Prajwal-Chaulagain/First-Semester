#include<stdio.h>
struct Time
{
    int hours;
    int minutes;
    int seconds;
};
struct Time Difference(struct Time t1, struct Time t2)
{
    int second1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int second2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int totaldifseconds = second1 - second2;
    struct Time temp;
    temp.hours = totaldifseconds / 3600;
    temp.seconds = totaldifseconds % 3600;
    temp.minutes = temp.seconds / 60;
    temp.seconds = temp.seconds % 60;
    return temp;
};
void main()
{
    struct Time t1, t2;
    printf("Enter Time t1 in (hh:mm:ss) format\n");
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);
     printf("Enter Time t2 in (hh:mm:ss) format\n");
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);
    struct Time diff = Difference(t1, t2);
    printf("Difference time:=(%d:%d:%d)", diff.hours, diff.minutes, diff.seconds);
}