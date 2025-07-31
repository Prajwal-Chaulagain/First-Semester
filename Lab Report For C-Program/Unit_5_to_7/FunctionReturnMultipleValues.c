#include<stdio.h>
void multiOperation(int *x, int *y, int *s, int *m)
{
   *s = *x - *y; 
   *m = *x * *y;
}
void main()
{
int a = 8, b = 6, sub, mul;
multiOperation(&a, &b, &sub, &mul);
printf("subtraction = %d and multiplication = %d", sub,mul);

}