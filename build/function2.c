// write a function for addding two numbers,this function will take data as a argument and show the result with the help of return value
#include <stdio.h>
void main()
{
    int a, b, result;
    printf("The sum of two numbers:\n");
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    result = sum(a, b);
    printf("The sum is: %d", result);
}

int sum(int a, int b)

{
    return a + b;
}