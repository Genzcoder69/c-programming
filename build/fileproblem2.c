// make a program to input student information from a user & enter it to a file 

#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    int age;
    char name[100];
    float cgpa;

    printf("Enter Name:", name);
    scanf("%s", name);
    printf("Enter age:", age);
    scanf("%d", &age);
    printf("Enter cgpa:", cgpa);
    scanf("%f", &cgpa);


    fprintf(fptr, "student name:%s\n", name);
    fprintf(fptr, "student age:%d\n", age);
    fprintf(fptr, "student cgpa:%f\n", cgpa);

    fclose(fptr);


}