#include <stdio.h> 

void main()
{
    float celsius, fahrenheit;

    printf("Celsius\t\tFahrenheit\n");

    for (celsius = 0; celsius <= 100; celsius++)
    {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2f\t\t%.2f\n", celsius, fahrenheit);
    }
}