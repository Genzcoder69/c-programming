// WAP to allocate memory of size n, where n is entered by the user. 

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
}