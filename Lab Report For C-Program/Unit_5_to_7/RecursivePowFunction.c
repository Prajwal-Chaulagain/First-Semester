#include<stdio.h>
int power(int a, int b)
 {
     if (b == 0) {
        return 1;
    }
    else {
        return a * power(a, b - 1);
    }
}
void main()
{
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
}
