#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    int *ptr;
    printf("Enter n:");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));
    
    for( int i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    ptr = (int*) calloc(2, sizeof(int));
    
    for( int i=0; i<2; i++)
    {
        printf("%d\n", ptr[i]);
    }

}