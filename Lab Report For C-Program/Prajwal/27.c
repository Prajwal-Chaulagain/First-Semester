#include<stdio.h>
#include<math.h>

void main(){
    float a, b, c, r1, r2, real, img, d;
    printf("Enter the coefficients of quadratic equation:");
    scanf("%f %f %f", &a, &b, &c);
    d=b*b - (4*a*c);
    if(d>=0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots of the equation are %.2f and %.2f \n", r1, r2);
    }
    else{
        real=-b/(2*a);
        img=sqrt(-d)/(2*a);
        printf("The roots of the equation are:\n");
        printf("%.2f + %.2fi \n", real, img);
        printf("%.2f - %.2fi \n", real, img);
    }
}