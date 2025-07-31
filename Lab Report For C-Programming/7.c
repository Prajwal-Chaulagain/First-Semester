#include<stdio.h>
void main()
{
    float r, a, c;
    printf("Enter the value of radius of circle:");
    scanf("%f", &r);
    a=(3.14*r*r);
    printf("Area of circle is = %.3f:", a);
    c=(2*3.14*r);
    printf("Circumference of circle is = %.3f:", c);
}