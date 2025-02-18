#include <stdio.h>
#include <math.h>

float squareArea ( float side);
float circleArea ( float rad);
float rectangleArea( float a , float b);

void main()
{
    float side = 4.0;
    printf("Area of square is : %f\n", squareArea( side ));


    float rad = 4.0;
    printf("Area of circle is : %f\n", circleArea( rad ));


    float a = 5.0;
    float b = 6.0;
    printf("Area of rectangle is : %f\n", rectangleArea( a,b ));
}

float squareArea( float side)
{
    return side * side;
}

float circleArea( float rad)
{
    return 3.14 * rad * rad;
}

float rectangleArea( float a , float b)
{
    return a*b;
}