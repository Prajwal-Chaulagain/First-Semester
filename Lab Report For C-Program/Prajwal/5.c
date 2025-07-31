#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter the number:");
    scanf("%f",&a);
    if(a>= 0)
    {
        b = sqrt(a);
        printf("The square root of given number is %.3f",b);
    }
    else
    {
    printf("Negative number square root is not real; Enter positive number");
}
return 0;
}