#include<stdio.h>

float ConvertTemp( float celsius );

void main()
{
    float far = ConvertTemp(37);
    printf("Far: %f\n", far);
}

float ConvertTemp( float Celsius)
{
    float far = Celsius * (9.0 / 5.0) + 32;
    return far;
}