#include<stdio.h>
#include<string.h>

typedef struct ComputerScienceStudent
{
    int roll;
    char name[100];
    float cgpa;
} cse;

void main()
{
    cse s1;
    s1.roll = 69;
    s1.cgpa = 7.9;
    strcpy(s1.name , "Abhinav Ahir");
    

    printf("Student Name.=%s\n", s1.name);
    printf("student Roll No.=%d\n", s1.roll);
    printf("Student cgpa.= %f\n", s1.cgpa);
}