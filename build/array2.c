#include<stdio.h>
void main()
{
    // first case of using pointer arithmetic
    
    int age = 20;
    int *ptr = &age;

    printf("ptr = %u\n", ptr);
    ptr++;

    printf("ptr = %u\n", ptr);
    ptr--;

    printf("ptr = %u\n", ptr);
    ptr++;


    // second case of using pointer arithmetic
    
    float age = 20.00;
    float *ptr = &age;

    printf("ptr = %u\n", ptr);
    ptr++;

    printf("ptr = %u\n", ptr);
    ptr--;

    printf("ptr = %u\n", ptr);
    ptr++;


    // third case of using pointer arithmetic
    
    char abhinav = '*';
    char *ptr = &abhinav;

    printf("ptr = %u\n", ptr);
    ptr++;

    printf("ptr = %u\n", ptr);
    ptr--;

    printf("ptr = %u\n", ptr);
    ptr++;
    
}