#include<stdio.h>
void main()
{
    int length, breadth, perimeter, area;
    printf("enter the lenght:");
    scanf("%d",&length);
    printf("enter the breath:");
    scanf("%d",&breadth);
    perimeter = 2*(length+breadth);
    area = length*breadth;
    printf("The perimeter of rectangle is =%d:",perimeter);
    printf("The area  of rectangle is =%d:",area);
}