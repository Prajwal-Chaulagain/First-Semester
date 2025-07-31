#include<stdio.h>
#define AREA(r) (3.14*r*r)
#define CIRCUMFERENCE(r) (2*3.14*r)
void main()
 {
    float radius, area, circumference;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area=AREA(radius);
    circumference=CIRCUMFERENCE(radius);
    printf("The area of circle is %f and circumference is %f.\n", area, circumference);
}
