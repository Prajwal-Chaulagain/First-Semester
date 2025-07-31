#include<stdio.h>
#define AREA(l,b) (l*b)
#define PERIMETER(l,b) (2*(l+b))

void main()
{
    float l, b, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);
    area=AREA(l,b);
    perimeter=PERIMETER(l,b);
    printf("The area of the rectangle is %f and perimeter is %f.\n", area, perimeter);
}
