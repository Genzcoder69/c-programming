// WAP to allocate to memory to store 5 prices

#include<stdio.h>
#include<stdlib.h>

void main()
{
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));
    

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for( int i=0; i<5; i++)
    {
        printf("%f\n", ptr[i]);
    }
}