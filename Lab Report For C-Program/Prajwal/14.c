#include<stdio.h>

int main()
{
    int length, m, cm, mm;
    printf("Enter the length in millimeter: ");
    scanf("%d", &length);
    m=length/1000;
    cm=(length%1000)/10;
    mm=length%10;
    printf("Length: %d millimeters is equal to %d m, %d cm, %d mm \n", length, m, cm, mm);
    return 0;
} 