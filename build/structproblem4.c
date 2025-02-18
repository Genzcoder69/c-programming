// create a structure to store complex numbers( use arrow operator)

#include<stdio.h>
#include<string.h>

struct complex
{
    int real;
    int img;
};

void main()
{
    struct complex number = { 2,4};
    struct complex *ptr = &number;

    printf("Real No.= %d\n", ptr->real);
    printf("Img NO.= %d\n", ptr->img);
}