#include <stdio.h>
void main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in celsius : %f\n", celsius);
}