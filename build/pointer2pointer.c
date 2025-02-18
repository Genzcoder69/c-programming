#include<stdio.h>
void main()
{
    int i = 69;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
}