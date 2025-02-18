// Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    
    printf("Enter no(5):");
    for( int i=0; i<5; i++)
    {
    scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("Enter No(8):");
    for(int i=0; i<8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for( int i=0; i<8; i++)
    {
        printf("Number %d is %d\n", i ,ptr[i]);
    }
}