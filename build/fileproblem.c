// Make a program to read 5 integers from a file

#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("abhinav.txt", "r");
    int n;

    fscanf(fptr, "%d", &n );
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n );
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n );
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n );
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n );
    printf("number = %d\n", n);

    fclose(fptr);

}