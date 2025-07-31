#include <stdio.h>
int main()
{
    int num1, num2, result;
    char operator;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator(+,-,*,/,%%):");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result=%d \n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result=%d \n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result=%d \n", result);
        break;
    case '/':
        result =num1 /num2;
        printf("Result=%d \n",result);
        break;
    case '%':
        result = num1 % num2;
        printf("Result=%d \n", result);
        break;
    default:
        printf("Invalid choice. \n");
        break;
    }
}