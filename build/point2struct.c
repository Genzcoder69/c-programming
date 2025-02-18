#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;                                                             
};

void main()
{
    struct student s1 = {"Abhinav Ahir", 69, 7.9};
    // printf("Name = %s\n", s1.name);
    
    struct student *ptr = &s1;
    printf("Name = %s\n", ptr->name);
    printf("Roll No.= %d\n", ptr->roll);
    printf("Cgpa = %f\n", ptr ->cgpa);
}