#include<stdio.h>
void main(){
    float p, t,r,si;
    printf("Enter the principal, rate: ");
    scanf("%f %f", &p, &t);
    if (p>99999)
    {
        r=7;
    }
    else if(p>50000 && p<100000){
        r=5;
    }
    else{
        r=3;
    }
    si=(p*t*r)/100;
    printf("The simple interest is Rs. %f \n", si);
    
}