#include<stdio.h>
void square(int n);
void _square(int *n);


void main()
{
    int number = 4;
    square(number);
    printf("number = %d\n", number);
    
    _square(&number);
    printf("number = %d\n", number);

}

void square(int n)
{
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int *n)
{
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}