// Two numbers a & b, are written in a file. write a program to replace them with their sum.

#include<stdio.h>
void main()
{
    FILE *fptr;
    fptr =fopen("replace.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr =fopen("replace.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
}