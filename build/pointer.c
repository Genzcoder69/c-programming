#include<stdio.h>
void main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 2;

    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

    *ptr += 5;

    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

    (*ptr)++;

    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

}