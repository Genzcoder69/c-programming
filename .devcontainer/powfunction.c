#include <stdio.h>
#include <math.h>
void main()
{
    double x, y, result;
    printf("Enter the value of x:");
    scanf("%lf", &x);

    printf("Enter the value of y:");
    scanf("%lf", &y);

    // calculate the result using the pow function
    result = pow(x, y);

    printf("The value of (%lf^%lf) is: %lf\n", x, y, result);
}