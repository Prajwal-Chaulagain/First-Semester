 #include<stdio.h>
#include<math.h>
void main()
{
    float celc,fran;
    printf("Enter the temperature[celc]:");
    scanf("%f",&celc);
    fran =((celc*9)/5)+32;
    printf("The temperature %.2fc is %.2fF",celc,fran);
}